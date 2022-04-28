#include <stdio.h>
#include "VMain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include "VMain__Dpi.h"
#include "verilated_dpi.h"
#include <dlfcn.h>
typedef uint64_t word_t;
typedef word_t vaddr_t;
#define CONFIG_MSIZE 0x0020000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
#define CONFIG_DIFFTEST 1

#ifdef CONFIG_DIFFTEST
enum
{
  DIFFTEST_TO_DUT,
  DIFFTEST_TO_REF
};
typedef uint32_t paddr_t;
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)() = NULL;
#endif

typedef struct
{
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

CPU_state cpu_npc;

uint64_t *cpu_gpr = NULL;

vluint64_t sim_time = 0;
VMain *top = nullptr;
VerilatedVcdC *m_trace = nullptr;
VerilatedContext *contextp = nullptr;

static uint8_t pmem[CONFIG_MSIZE] = {0};

uint8_t *guest_to_host(long long paddr) { return pmem + paddr - CONFIG_MBASE; }
long long host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

void ebreak()
{
  puts("Meet ebreak;");
  puts("%lx\n",cpu_npc.gpr[10]);
  if (cpu_npc.gpr[10] == 1)
    exit(-1);
  else
    exit(0);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r)
{
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
  for (int i = 0; i < 32; i++)
    cpu_npc.gpr[i] = cpu_gpr[i];
  cpu_npc.pc = cpu_gpr[32];
}

void pmem_read(long long Raddr, long long *Rdata)
{
  if (Raddr < CONFIG_MBASE || Raddr >= CONFIG_MSIZE + CONFIG_MBASE)
    return;
  (*Rdata) = *((long long *)guest_to_host(Raddr));
  return;
}

void pmem_write(long long Waddr, long long Wdata, char Wmask)
{
  for (int i = 0; i < 7; i++)
  {
    uint8_t *Vaddr = guest_to_host(Waddr);
    if ((Wmask >> i) & 1)
      *((uint8_t *)(Vaddr + i)) = ((Wdata) >> (i * 8)) & (0xFF);
  }
  return;
}

void cpu_sim()
{
  top->clock = 0, top->eval();
  top->clock = 1, top->eval();
}

long ld(char *img_file)
{
  if (img_file == NULL)
  {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  assert(fp);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);

  return size;
}

#ifdef CONFIG_DIFFTEST
void init_so(char *ref_so_file, long img_size)
{
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("The result of every instruction will be compared with %s. "
         "This will help you a lot for debugging, but also significantly reduce the performance. "
         "If it is not necessary, you can turn it off in menuconfig.\n",
         ref_so_file);
  ref_difftest_init();
  ref_difftest_memcpy(RESET_VECTOR, pmem, img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu_npc, DIFFTEST_TO_REF);
}

void check_regs_npc(CPU_state ref_cpu)
{
  for (int i = 0; i < 32; i++)
  {
    if (cpu_npc.gpr[i] != ref_cpu.gpr[i])
    {
      printf("Missing match reg%d, npc_val=%lx, nemu_val=%lx\n", i, cpu_npc.gpr[i], ref_cpu.gpr[i]);
      exit(-1);
    }
  }
  if (cpu_npc.pc != ref_cpu.pc)
  {
    printf("Missing match at pc, npc_val=%lx,nemu_val=%lx\n", cpu_npc.pc, ref_cpu.pc);
    exit(-1);
  }
}
#endif

void init_npc()
{
  top->reset = 1;
  for (int i = 1; i <= 10; i++)
    cpu_sim();
  top->reset = 0;
  // cpu_sim();
}

int main(int argc, char **argv, char **env)
{
  long size = 0;
  if (argc == 2)
  {
    if (strlen(argv[1]) != 0)
    {
      printf("ld:%s\n", argv[1]);
      size = ld(argv[1]);
    }
  }

  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new VMain{contextp};

  Verilated::traceEverOn(true);

  m_trace = new VerilatedVcdC;
  top->trace(m_trace, 5);
  m_trace->open("waveform.vcd");

  init_npc();

#ifdef CONFIG_DIFFTEST
  init_so("/home/wcx/Desktop/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", size);
#endif

  while (1)
  {
    m_trace->dump(sim_time++);
    cpu_sim();

#ifdef CONFIG_DIFFTEST
    ref_difftest_exec(1);
    CPU_state ref_cpu;
    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
    printf("check at nemu_pc=%lx, npc_pc=%lx\n", cpu_npc.pc, ref_cpu.pc);
    check_regs_npc(ref_cpu);
#endif
  }

  m_trace->close();
  delete top;
  delete contextp;
  return 0;
}

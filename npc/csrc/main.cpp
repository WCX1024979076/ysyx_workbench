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

enum
{
  DIFFTEST_TO_DUT,
  DIFFTEST_TO_REF
};
typedef struct
{
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

CPU_state cpu;
typedef uint32_t paddr_t;
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)() = NULL;

#define CONFIG_MSIZE 0x0020000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
static uint8_t pmem[CONFIG_MSIZE] = {0};

uint8_t *guest_to_host(long long paddr) { return pmem + paddr - CONFIG_MBASE; }
long long host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

vluint64_t sim_time = 0;
VMain *top = nullptr;
VerilatedVcdC *m_trace = nullptr;
VerilatedContext *contextp = nullptr;
void ebreak()
{
  puts("Meet ebreak;");
  printf("%lx\n", top->io_A0Val);
  if (top->io_A0Val == 1)
    puts("NOT PASS");
  else
    puts("PASS");
  m_trace->dump(sim_time);
  m_trace->close();
  delete top;
  delete contextp;
  exit(0);
}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r)
{
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
}

void dump_gpr()
{
  int i;
  for (i = 0; i < 33; i++)
  {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

void pmem_read(long long Raddr, long long *Rdata)
{
  if (Raddr < CONFIG_MBASE || Raddr >= CONFIG_MSIZE + CONFIG_MBASE)
    return;
  (*Rdata) = *((long long *)guest_to_host(Raddr));
  printf("%llx %llx \n", Raddr, (*Rdata));
  return;
}

void pmem_write(long long Waddr, long long Wdata, char Wmask)
{
  printf("%llx %llx %x\n", Waddr, Wdata, Wmask);
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
  dump_gpr();
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
         "If it is not necessary, you can turn it off in menuconfig.",
         ref_so_file);

  ref_difftest_init();
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
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
  init_so("$$NEMU_HOME/build/riscv64-nemu-interpreter-so", size);
  return 0;
  srand(time(0));
  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new VMain{contextp};

  Verilated::traceEverOn(true);

  m_trace = new VerilatedVcdC;
  top->trace(m_trace, 5);
  m_trace->open("waveform.vcd");

  top->reset = 1;
  for (int i = 1; i <= 10; i++)
    cpu_sim();
  top->reset = 0;
  while (1)
  {
    m_trace->dump(sim_time++);
    cpu_sim();
  }

  m_trace->close();
  delete top;
  delete contextp;
  return 0;
}

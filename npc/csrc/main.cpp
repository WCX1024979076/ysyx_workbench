#include <stdio.h>
#include "VMain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include "VMain__Dpi.h"
#include "verilated_dpi.h"

// void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction);
// void difftest_regcpy(void *dut, bool direction);
// void difftest_exec(uint64_t n);
// void difftest_raise_intr(word_t NO);
void difftest_init();

#define CONFIG_MSIZE 0x0020000
#define CONFIG_MBASE 0x80000000

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
  /*
  for(long long i=0x80000000;i<=0x80000114;i+=4)
  {
    long long tmp;
    pmem_read(i,&tmp);
    printf("%llx %016llx\n",i,tmp);
  }
  */
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
  difftest_init();
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

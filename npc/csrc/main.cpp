#include <stdio.h>
#include "VMain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include "VMain__Dpi.h"

#define CONFIG_MSIZE 0x0002000
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
  m_trace->dump(sim_time);
  m_trace->close();
  delete top;
  delete contextp;
  exit(0);
}

void pmem_read(long long Raddr, long long *Rdata)
{
  if (Raddr < CONFIG_MBASE)
    return;
  (*Rdata) = *((long long *)guest_to_host(Raddr));
  //printf("%llx %llx \n", Raddr, (*Rdata));
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

void ld(char *file)
{
  FILE *infile=fopen(file,"rt");
  int siz=fread(pmem,sizeof(uint8_t),1000,infile);
  for(long long i=0x80000000;i<=0x80000114;i+=4)
  {
    long long tmp;
    pmem_read(i,&tmp);
    printf("%llx %llx\n",i,tmp);
    break;
  }
}
int main(int argc, char **argv, char **env)
{
  if(argc==2){
    if(strlen(argv[1])!=0)
    {
      printf("%s\n",argv[1]);
      ld(argv[1]);
    }
  }
  srand(time(0));
  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new VMain{contextp};

  Verilated::traceEverOn(true);

  m_trace = new VerilatedVcdC;
  top->trace(m_trace, 5);
  m_trace->open("waveform.vcd");

  //pmem_write(0x80000000, 0x004a8a93, 127);
  //pmem_write(0x80000004, 0x004a8a93, 127);
  //pmem_write(0x80000008, 0x004a8a93, 127);
  //pmem_write(0x8000000c, 0x004a8a93, 127);
  //pmem_write(0x80000010, 0x00100073, 127);
  //pmem_write(0x80000014, 0x004a8a93, 127);
  
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

#include <stdio.h>
#include "VMain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include "VMain__Dpi.h"

#define CONFIG_MSIZE 0x0000200
#define CONFIG_MBASE 0x80000000

typedef unsigned long int paddr_t;
typedef unsigned long long word_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_tt;

static uint8_t pmem[CONFIG_MSIZE]= {0};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_tt *)addr;
  }
  return 0;
}

static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_tt *)addr = data; return;
  }
}



#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
VMain* top=nullptr;
VerilatedVcdC *m_trace=nullptr;
VerilatedContext* contextp=nullptr;
void ebreak()
{
  puts("Meet ebreak;");
   m_trace->dump(sim_time);
  m_trace->close();
  delete top;
  delete contextp;
  exit(0);
}

void pmem_read(long long Raddr, long long *Rdata) {
    (*Rdata) = host_read(guest_to_host(Raddr), 4);
    return ;
}

void pmem_write(long long Waddr, long long Wdata, char Wmask) {
    return ;
}

void cpu_sim()
{
	top->clock=0,top->eval();
	top->clock=1,top->eval();
}

int main(int argc, char** argv, char** env)
{
	srand(time(0));
	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	top = new VMain{contextp};

	Verilated::traceEverOn(true);

	m_trace = new VerilatedVcdC;
	top->trace(m_trace, 5);
	m_trace->open("waveform.vcd");
	
	top->reset=1;
	for(int i=1;i<=10;i++)
		cpu_sim();
	top->reset=0;
	while (sim_time<MAX_SIM_TIME) 
	{
    if(sim_time==10)
      top->io_Inst=0x00100073;
    else
		  top->io_Inst=0x004a8a93;
    //printf("%d\n",sim_time);
		cpu_sim();	
		m_trace->dump(sim_time++);
	}

  m_trace->close();
	delete top;
	delete contextp;
	return 0;
}

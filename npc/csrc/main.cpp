#include <stdio.h>
#include "VMain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include "VMain__Dpi.h"

#define CONFIG_MSIZE 0x0000020
#define CONFIG_MBASE 0x80000000

static uint8_t pmem[CONFIG_MSIZE]= {0};

uint8_t* guest_to_host(long long paddr) { return pmem + paddr - CONFIG_MBASE; }
long long host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }


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
    (*Rdata) = *((uint32_t *)guest_to_host(Raddr));
    //(*Rdata)=0x00100073;
    return ;
}

void pmem_write(long long Waddr, long long Wdata, char Wmask) {
    *(guest_to_host(Waddr))=Wdata;
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
	
  pmem_write(0x80000000,0x00100073);
  pmem_write(0x80000004,0x00100073);
  pmem_write(0x80000008,0x00100073);
  pmem_write(0x8000000c,0x004a8a93);
  //pmem_write(0x80000000,0x00100073);
	top->reset=1;
	for(int i=1;i<=10;i++)
		cpu_sim();
	top->reset=0;
	while (sim_time<MAX_SIM_TIME) 
	{
	    //if(sim_time==10)
	    //  top->io_Inst=0x00100073;
	    //else
		  //top->io_Inst=0x004a8a93;
    //printf("%d\n",sim_time);
		cpu_sim();	
		m_trace->dump(sim_time++);
	}

  m_trace->close();
	delete top;
	delete contextp;
	return 0;
}

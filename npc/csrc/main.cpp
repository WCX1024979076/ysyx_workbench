#include <stdio.h>
#include "Vmain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
Vmain* top=nullptr;
VerilatedVcdC *m_trace=nullptr;
void cpu_sim()
{
	top->io_Inst=0x004a8a93,top->clock=0,top->eval(),m_trace->dump(sim_time++);
	top->io_Inst=0x004a8a93,top->clock=1,top->eval(),m_trace->dump(sim_time++);
}

int main(int argc, char** argv, char** env)
{
	srand(time(0));
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	top = new Vmain{contextp};

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
		cpu_sim();	
	}

    	m_trace->close();
	delete top;
	delete contextp;
	return 0;
}

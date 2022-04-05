#include <stdio.h>
#include "Vmain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
void cpu_sim()
{
	top->clock=0,top->eval();
	top->clock=1,top->eval();
}

int main(int argc, char** argv, char** env)
{
	srand(time(0));
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vmain* top = new Vmain{contextp};

	Verilated::traceEverOn(true);

	VerilatedVcdC *m_trace = new VerilatedVcdC;
	top->trace(m_trace, 5);
	m_trace->open("waveform.vcd");
	
	top->reset=1;
	for(int i=1;i<=10;i++)
		cpu_sim();
	top->reset=0;
	while (sim_time<MAX_SIM_TIME) 
	{
		top->io_Inst=0x004a8a93;
		cpu_sim();	
		m_trace->dump(sim_time);
		sim_time++;
	}

    	m_trace->close();
	delete top;
	delete contextp;
	return 0;
}

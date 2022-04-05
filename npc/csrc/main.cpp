#include <stdio.h>
#include "Vmain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

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
	

	while (sim_time<MAX_SIM_TIME) 
	{ 
		
		top->eval();
		m_trace->dump(sim_time);
		sim_time++;
		printf("value1=%ld value2=%ld top->output=%ld\n",value1,value2,top->io_output);
		assert(top->io_output==value1+value2);
	}

    	m_trace->close();
	delete top;
	delete contextp;
	return 0;
}

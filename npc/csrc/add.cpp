#include <stdio.h>
#include "Vadd.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env)
{
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vadd* top = new Vadd{contextp};

	Verilated::traceEverOn(true);

	VerilatedVcdC *m_trace = new VerilatedVcdC;
	top->trace(m_trace, 5);
	m_trace->open("waveform.vcd");
	    
	while (sim_time<MAX_SIM_TIME) 
	{ 
		long long value1=rand();
		long long value2=rand();
		top->io_value1=value1;
		top->io_value2=value2;
		top->eval();
		m_trace->dump(sim_time);
		sim_time++;
		printf("value1=%lld value1=%lld top->output=%lld\n",value1,value2,top->io_output);
		assert(top->io_output==value1+value2);
	}

    	m_trace->close();
	delete top;
	delete contextp;
	return 0;
}

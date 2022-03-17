#include <stdio.h>
#include "Vexample.h"
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
	Vexample* top = new Vexample{contextp};

    Verilated::traceEverOn(true);

    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    while (sim_time<MAX_SIM_TIME) 
	{ 
		int a=rand()%2;
		int b=rand()%2;
		top->a=a;
		top->b=b;
		top->eval();
        m_trace->dump(sim_time);
        sim_time++;
		printf("a=%d b=%d top->f=%d\n",a,b,top->f);
		assert(top->f==a^b);
	}
    
    m_trace->close();
	delete top;
	delete contextp;
	return 0;
}

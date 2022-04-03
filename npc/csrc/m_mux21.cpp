#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vm_mux21.h"
#include <stdio.h>
#include <stdlib.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vm_mux21* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vm_mux21;              
  contextp->traceEverOn(true);                
  top->trace(tfp, 0);
  tfp->open("waveform.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}
const int sim_time=6;
int main() {
  sim_init();
  srand(time(0));
  for(int time1=1;time1<=sim_time;time1++)
  {
    top->s=rand()%2;
    top->a=rand()%2;
    top->b=rand()%2;
    step_and_dump_wave();
  }
  sim_exit();
  return 0;
}

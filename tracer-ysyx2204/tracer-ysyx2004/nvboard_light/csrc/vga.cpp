#include <stdio.h>
#include "Vvga.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include <nvboard.h>


Vvga *top = NULL;

void nvboard_bind_all_pins(Vvga* top);

static void single_cycle() {
   top->pclk = 0; top->eval();
   top->pclk = 1; top->eval();
}
static void reset(int n) {
   top->reset = 1;
   while (n -- > 0) single_cycle();
   top->reset = 0;
}

int main(int argc, char **argv, char **env)
{

  VerilatedContext *contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new Vvga{contextp};

  nvboard_bind_all_pins(top);
  nvboard_init();

  reset(10);

  while (1)
  {    
    nvboard_update();
    single_cycle();
  }

  delete top;
  delete contextp;
  return 0;
}


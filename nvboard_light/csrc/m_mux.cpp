#include <stdio.h>
#include "Vm_mux.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include <nvboard.h>


Vm_mux *top = NULL;

void nvboard_bind_all_pins(Vm_mux* top);

int main(int argc, char **argv, char **env)
{

  VerilatedContext *contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new Vm_mux{contextp};

  nvboard_bind_all_pins(top);
  nvboard_init();

  while (1)
  {
    top->eval();
    nvboard_update();
  }

  delete top;
  delete contextp;
  return 0;
}


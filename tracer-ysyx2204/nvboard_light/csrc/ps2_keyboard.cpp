#include <stdio.h>
#include "Vps2_keyboard.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include <nvboard.h>


Vps2_keyboard *top = NULL;

void nvboard_bind_all_pins(Vps2_keyboard* top);

int main(int argc, char **argv, char **env)
{

  VerilatedContext *contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new Vps2_keyboard{contextp};

  nvboard_bind_all_pins(top);
  nvboard_init();
  for(int i=0;i<=10;i++)
     top->resetn=0;
  top->resetn=1;
  while (1)
  {

    top->clk=0;
    top->eval();
    nvboard_update();

    top->clk=1;
    top->eval();
    nvboard_update();
  }

  delete top;
  delete contextp;
  return 0;
}


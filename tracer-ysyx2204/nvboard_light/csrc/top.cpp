#include <stdio.h>
#include "Vtop.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include <nvboard.h>

Vtop *top = NULL;
void nvboard_bind_all_pins(Vtop* top);
void single_cycle()
{
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
}

void reset(int n)
{
  top->rst = 1;
  while (n-- > 0)
    single_cycle();
  top->rst = 0;
}

int main(int argc, char **argv, char **env)
{

  VerilatedContext *contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new Vtop{contextp};

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

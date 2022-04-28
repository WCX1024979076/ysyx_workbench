#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc)
{
  for (int i = 0; i < 32; i++)
  {
    if (ref_r->gpr[i] != cpu.gpr[i])
    {
      Log("Missing match reg%d, nemu=%lx, ref=%lx", i, cpu.gpr[i], ref_r->gpr[i]);
      return false;
    }
  }
  if (ref_r->pc != cpu.pc)
  {
    Log("Missing match pc, nemu=%lx, ref=%lx", cpu.pc, ref_r->pc);
    return false;
  }
  return true;
}

void isa_difftest_attach()
{
}

#include "npc.h"

#ifdef CONFIG_DIFFTEST
uint64_t last_pc = 0x80000000;
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)() = NULL;

void init_so(char *ref_so_file, long img_size)
{
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("The result of every instruction will be compared with %s. "
         "This will help you a lot for debugging, but also significantly reduce the performance. "
         "If it is not necessary, you can turn it off in menuconfig.\n",
         ref_so_file);

  cpu_npc.pc = 0x80000000;
  ref_difftest_init();
  ref_difftest_memcpy(RESET_VECTOR, pmem, img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu_npc, DIFFTEST_TO_REF);
  cpu_npc.pc = 0;
}

int check_regs_npc(CPU_state ref_cpu)
{
  for (int i = 0; i < 32; i++)
  {
    if (cpu_npc.gpr[i] != ref_cpu.gpr[i])
    {
      printf("Missing match reg%d, npc_val=%lx, nemu_val=%lx\n", i, cpu_npc.gpr[i], ref_cpu.gpr[i]);
      return 0;
    }
  }
  if (cpu_npc.pc != last_pc)
  {
    printf("Missing match at pc, npc_val=%lx,nemu_val=%lx\n", cpu_npc.pc, last_pc);
    return 0;
  }
  last_pc = ref_cpu.pc;
  return 1;
}
#endif

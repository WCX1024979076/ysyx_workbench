#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction)
{
  if (direction == DIFFTEST_TO_DUT)
  {
    buf = (void *)guest_to_host(addr);
  }
  else if (direction == DIFFTEST_TO_REF)
  {
    Log("%x,%lx", addr, n);
    char *buf_char = (char *)buf;
    for (int i = 0; i < n; i++)
    {
      paddr_write(addr + i, 1, buf_char[i]);
    }
  }
}

void difftest_regcpy(void *dut, bool direction)
{
  if (direction == DIFFTEST_TO_DUT)
  {
    dut = &cpu;
    Log("nemu pc %lx\n", ((CPU_state *)dut)->pc);
    Log("123");
  }
  else if (direction == DIFFTEST_TO_REF)
  {
    cpu = *(CPU_state *)dut;
  }
}

void difftest_exec(uint64_t n)
{
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO)
{
  assert(0);
}

void difftest_init(/*int port*/)
{
  /* Perform ISA dependent initialization. */
  void init_rand();
  void init_mem();
  void init_isa();
  init_rand();
  init_mem();
  init_isa();
}

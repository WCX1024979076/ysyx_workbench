#include <stdio.h>
#include "VMain.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include "VMain__Dpi.h"
#include "verilated_dpi.h"
#include <dlfcn.h>
typedef uint64_t word_t;
typedef word_t vaddr_t;
#define CONFIG_MSIZE 0x0020000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
#define CONFIG_DIFFTEST 1
#define CONFIG_VCD 1

typedef struct
{
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

#ifdef CONFIG_DIFFTEST
enum
{
  DIFFTEST_TO_DUT,
  DIFFTEST_TO_REF
};
typedef uint32_t paddr_t;
extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
extern void (*ref_difftest_init)();
#endif

extern uint8_t pmem[CONFIG_MSIZE];

extern CPU_state cpu_npc;
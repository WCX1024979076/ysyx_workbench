#include "VMain.h"
#include "verilated.h"
#include "verilated_dpi.h"
#include "VMain__Dpi.h"
#include <stdio.h>
#include <verilated_vcd_c.h>
#include <assert.h>
#include <stdlib.h>
#include <dlfcn.h>

typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;
typedef struct
{
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

#define CONFIG_MSIZE 0x08000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
// #define CONFIG_DIFFTEST 1
// #define CONFIG_VCD 1
// #define CONFIG_ITRACE 1
// #define CONFIG_MTRACE 1
// #define CONFIG_FTRACE 1

#ifdef CONFIG_DIFFTEST
enum
{
  DIFFTEST_TO_DUT,
  DIFFTEST_TO_REF
};
extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
extern void (*ref_difftest_init)();
#endif

extern uint8_t pmem[CONFIG_MSIZE];
extern CPU_state cpu_npc;

int check_regs_npc(CPU_state ref_cpu);
void init_so(char *ref_so_file, long img_size);
long ld(char *img_file);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_disasm(const char *triple);
void print_itrace();
void print_mtrace();
void print_ftrace();
void exit_npc(int flag);
uint64_t get_time();

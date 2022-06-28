#include "npc.h"

CPU_state cpu_npc;

vluint64_t sim_time = 0;
VMain *top = nullptr;
VerilatedContext *contextp = nullptr;
long img_size = 0;
char *img_file = nullptr;
#ifdef CONFIG_VCD
VerilatedVcdC *m_trace = nullptr;
#endif

#ifdef CONFIG_ITRACE
char itrace_buf[16][100] = {0};
int itrace_buf_cnt = 0;
#endif

void exit_npc(int flag)
{
#ifdef CONFIG_VCD
  m_trace->close();
#endif
#ifdef CONFIG_ITRACE
  print_itrace();
#endif
#ifdef CONFIG_MTRACE
  print_mtrace();
#endif
#ifdef CONFIG_FTRACE
  print_ftrace();
#endif
  delete top;
  delete contextp;
  exit(flag);
}

void cpu_sim_clock()
{
  top->clock = 0, top->eval();
#ifdef CONFIG_VCD
  m_trace->dump(sim_time++);
#endif
  top->clock = 1, top->eval();
#ifdef CONFIG_VCD
  m_trace->dump(sim_time++);
#endif
}

void init_npc()
{
  top->reset = 1;
  for (int i = 1; i <= 10; i++)
    cpu_sim_clock();
  top->reset = 0;
}

#ifdef CONFIG_ITRACE
void print_itrace()
{
  puts("itrace:");
  for (int i = 0; i < 16; i++)
  {
    if (strlen(itrace_buf[i]) == 0)
      break;
    if ((i + 1) % 16 == itrace_buf_cnt)
      printf("-->");
    else
      printf("   ");
    printf("%s\n", itrace_buf[i]);
  }
}
#endif

void cpu_sim_once()
{
  int t = 20;
  uint64_t last_pc = cpu_npc.pc;
  while (cpu_npc.pc == last_pc && t >= 0)
  {
    t--;
    cpu_sim_clock();
  }
  if (t == -1)
  {
    printf("Water flow cannot stop\n");
    exit_npc(1);
  }
}

void exec_once()
{
  cpu_sim_once();

#ifdef CONFIG_ITRACE
  char p[100] = {0};
  disassemble(p, 100, cpu_npc.pc, (uint8_t *)&top->io_Inst, 4);
  sprintf(itrace_buf[itrace_buf_cnt], "pc=0x%016lx inst=%08lx %s", cpu_npc.pc, top->io_Inst, p);
  itrace_buf_cnt++;
  itrace_buf_cnt %= 16;
#endif

#ifdef CONFIG_DIFFTEST
  ref_difftest_exec(1);
  CPU_state ref_cpu;
  ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
  // printf("check at nemu_pc=%lx, npc_pc=%lx\n", cpu_npc.pc, ref_cpu.pc);
  if (!check_regs_npc(ref_cpu))
    exit_npc(-1);
#endif
}

static int parse_args(int argc, char *argv[])
{
  if (argc == 2)
  {
    if (strlen(argv[1]) != 0)
    {
      img_file = argv[1];
      img_size = ld(img_file);
    }
  }
  return 0;
}

int main(int argc, char **argv, char **env)
{
  parse_args(argc, argv);

  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new VMain{contextp};

#ifdef CONFIG_ITRACE
  init_disasm("riscv64-pc-linux-gnu");
#endif

#ifdef CONFIG_VCD
  Verilated::traceEverOn(true);
  m_trace = new VerilatedVcdC;
  top->trace(m_trace, 5);
  m_trace->open("waveform.vcd");
#endif

  init_npc();

#ifdef CONFIG_DIFFTEST
  init_so("/home/wcx/Desktop/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", img_size);
#endif

  while (1)
  {
    exec_once();
  }

  return 0; 
}

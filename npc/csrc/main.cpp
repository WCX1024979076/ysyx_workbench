#include "npc.h"

CPU_state cpu_npc;

uint64_t *cpu_gpr = NULL;

vluint64_t sim_time = 0;
VMain *top = nullptr;
VerilatedContext *contextp = nullptr;
#ifdef CONFIG_VCD
VerilatedVcdC *m_trace = nullptr;
#endif

void ebreak()
{
  puts("Meet ebreak;");
  printf("%lx\n", cpu_npc.gpr[10]);
  int flag = 0;
  if (cpu_npc.gpr[10] == 1)
    flag = -1;

#ifdef CONFIG_VCD
  m_trace->close();
#endif

  delete top;
  delete contextp;
  exit(flag);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r)
{
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
  for (int i = 0; i < 32; i++)
    cpu_npc.gpr[i] = cpu_gpr[i];
  cpu_npc.pc = cpu_gpr[32];
}

void cpu_sim()
{
  top->clock = 0, top->eval();
  top->clock = 1, top->eval();
}

long ld(char *img_file)
{
  if (img_file == NULL)
  {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  assert(fp);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld \n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);

  return size;
}

void init_npc()
{
  top->reset = 1;
  for (int i = 1; i <= 10; i++)
    cpu_sim();
  top->reset = 0;
  // cpu_sim();
}

int main(int argc, char **argv, char **env)
{
  long size = 0;
  if (argc == 2)
  {
    if (strlen(argv[1]) != 0)
    {
      printf("ld:%s\n", argv[1]);
      size = ld(argv[1]);
    }
  }

  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new VMain{contextp};

#ifdef CONFIG_VCD
  Verilated::traceEverOn(true);
  m_trace = new VerilatedVcdC;
  top->trace(m_trace, 5);
  m_trace->open("waveform.vcd");
#endif

  init_npc();

#ifdef CONFIG_DIFFTEST
  init_so("/home/wcx/Desktop/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", size);
#endif

  while (1)
  {
    cpu_sim();
#ifdef CONFIG_VCD
    m_trace->dump(sim_time++);
#endif
#ifdef CONFIG_DIFFTEST
    ref_difftest_exec(1);
    CPU_state ref_cpu;
    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
    printf("check at nemu_pc=%lx, npc_pc=%lx\n", cpu_npc.pc, ref_cpu.pc);
    check_regs_npc(ref_cpu);
#endif
  }

#ifdef CONFIG_VCD
  m_trace->close();
#endif

  delete top;
  delete contextp;
  return 0;
}

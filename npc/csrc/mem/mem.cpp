#include "npc.h"

uint8_t pmem[CONFIG_MSIZE] = {0};

#ifdef CONFIG_MTRACE
#define MTRACE_SIZE 16
char mtrace_buf[MTRACE_SIZE][100] = {0};
int mtrace_count = 0;
#endif

#ifdef CONFIG_MTRACE
void print_mtrace()
{
  puts("mtrace:");
  for (int i = 0; i < MTRACE_SIZE; i++)
  {
    if (strlen(mtrace_buf[i]) == 0)
      break;
    if ((i + 1) % MTRACE_SIZE == mtrace_count)
      printf("-->");
    else
      printf("   ");
    printf("%s\n", mtrace_buf[i]);
  }
}
#endif

uint8_t *guest_to_host(long long paddr)
{
  return pmem + paddr - CONFIG_MBASE;
}
long long host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

void pmem_read(long long Raddr, long long *Rdata)
{
  if(Raddr == 0x7FFE0010) //0x7FFE0010
  {
    (*Rdata) = get_time(); // get_time()
    return ;
  }
  // printf("READ DATA %lx %lx\n", Raddr, Rdata);
  if (Raddr < CONFIG_MBASE || Raddr >= CONFIG_MSIZE + CONFIG_MBASE)
    return;
  (*Rdata) = *((uint64_t *)guest_to_host(Raddr));
#ifdef CONFIG_MTRACE
  sprintf(mtrace_buf[mtrace_count], "read:  addr:%016x content:%016lx", Raddr, (*Rdata));
  mtrace_count = (mtrace_count + 1) % MTRACE_SIZE;
#endif
  return;
}

void pmem_write(long long Waddr, long long Wdata, char Wmask)
{
  // printf("WRITE DATA %lx %lx\n", Waddr, Wdata);
  uint64_t waddr = Waddr;
  if (waddr == 0x7FFE0000) //0x7FFE0000
  {
    char data = Wdata;
    putc(Wdata, stdout);
    return;
  }
  // if (Waddr < CONFIG_MBASE || Waddr >= CONFIG_MSIZE + CONFIG_MBASE)
  //   return;
  uint8_t Wmask1 = Wmask;
  for (int i = 0; i < 8; i++)
  {
    uint8_t *Vaddr = guest_to_host(Waddr);
    if ((Wmask1 >> i) & 1)
      *((uint8_t *)(Vaddr + i)) = (((Wdata) >> (i * 8)) & (0xFF));
  }
#ifdef CONFIG_MTRACE
  sprintf(mtrace_buf[mtrace_count], "write: addr:%016x Wmask:%08u content:%016lx", Waddr, Wmask1, Wdata);
  mtrace_count = (mtrace_count + 1) % MTRACE_SIZE;
#endif
  return;
}

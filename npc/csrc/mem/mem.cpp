#include "npc.h"

uint8_t pmem[CONFIG_MSIZE] = {0};

#ifdef CONFIG_MTRACE
char mtrace_buf[16][100]={0};
int mtrace_count=0;
#endif

#ifdef CONFIG_MTRACE
void print_mtrace()
{
  puts("mtrace:");
  for(int i=0;i<16;i++)
  {
    if(strlen(mtrace_buf[i])==0)
      break;
    if((i+1)%16==mtrace_count)
      printf("-->");
    else
      printf("   ");
    printf("%s\n",mtrace_buf[i]);
  }
}
#endif

uint8_t *guest_to_host(long long paddr) { return pmem + paddr - CONFIG_MBASE; }
long long host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

void pmem_read(long long Raddr, long long *Rdata)
{
  if (Raddr < CONFIG_MBASE || Raddr >= CONFIG_MSIZE + CONFIG_MBASE)
    return;
  (*Rdata) = *((uint64_t *)guest_to_host(Raddr));
  // printf("READ DATA %lx %lx\n", Raddr, Rdata);
#ifdef CONFIG_MTRACE
  sprintf(mtrace_buf[mtrace_count],"read:  addr:%016x content:%016lx",Raddr,(*Rdata));
  mtrace_count=(mtrace_count+1)%16;
#endif
  return;
}

void pmem_write(long long Waddr, long long Wdata, char Wmask)
{
  uint8_t Wmask1 = Wmask;
  for (int i = 0; i < 8; i++)
  {
    uint8_t *Vaddr = guest_to_host(Waddr);
    if ((Wmask1 >> i) & 1)
      *((uint8_t *)(Vaddr + i)) = ((Wdata) >> (i * 8)) & (0xFF);
  }
#ifdef CONFIG_MTRACE
  sprintf(mtrace_buf[mtrace_count],"write: addr:%016x Wmask:%08u content:%016lx",Waddr,Wmask1,Wdata);
  mtrace_count=(mtrace_count+1)%16;
#endif
  return;
}

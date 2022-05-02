#include "npc.h"

uint8_t *guest_to_host(long long paddr) { return pmem + paddr - CONFIG_MBASE; }
long long host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

void pmem_read(long long Raddr, long long *Rdata)
{
  if (Raddr < CONFIG_MBASE || Raddr >= CONFIG_MSIZE + CONFIG_MBASE)
    return;
  (*Rdata) = *((long long *)guest_to_host(Raddr));
  // printf("READ DATA %lx %lx\n", Raddr, Rdata);
  return;
}

void pmem_write(long long Waddr, long long Wdata, char Wmask)
{
  for (int i = 0; i < 7; i++)
  {
    uint8_t *Vaddr = guest_to_host(Waddr);
    if ((Wmask >> i) & 1)
      *((uint8_t *)(Vaddr + i)) = ((Wdata) >> (i * 8)) & (0xFF);
  }
  return;
}

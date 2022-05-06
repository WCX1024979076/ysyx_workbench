#include <proc.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(__ISA_AM_NATIVE__)
#define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV64__)
#define EXPECT_TYPE EM_RISCV
#else
#define EXPECT_TYPE EM_NONE
#endif

#ifdef __LP64__
#define Elf_Ehdr Elf64_Ehdr
#define Elf_Phdr Elf64_Phdr
#else
#define Elf_Ehdr Elf32_Ehdr
#define Elf_Phdr Elf32_Phdr
#endif
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))

static uintptr_t loader(PCB *pcb, const char *filename)
{
  unsigned char buffer[RAMDISK_SIZE + 5];
  ramdisk_read(buffer, 0, RAMDISK_SIZE);

  Elf_Ehdr *ehdr = (Elf_Ehdr *)buffer;
  Elf_Phdr *phdr = (Elf64_Phdr *)(buffer + ehdr->e_phoff);
  assert(*(uint32_t *)ehdr->e_ident == 0x464c457f);
  assert(ehdr->e_machine == EXPECT_TYPE);
  uint16_t num = ehdr->e_phnum;
  unsigned char *mem_pos;
  for (uint16_t i = 0; i < num; i++)
  {
    if (phdr[i].p_type == PT_LOAD)
    {
      mem_pos = (unsigned char *)phdr[i].p_paddr;
      memcpy(mem_pos, buffer + phdr[i].p_offset, phdr[i].p_filesz);
      mem_pos = (unsigned char *)(phdr[i].p_paddr + phdr[i].p_filesz);
      memset(mem_pos, 0, phdr[i].p_memsz - phdr[i].p_filesz);
    }
  }
  return ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename)
{
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = 0x%lx", entry);
  ((void (*)())entry)();
}

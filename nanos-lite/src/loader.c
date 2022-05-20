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
int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))
unsigned char buffer_tmp[100500];
// uint64_t program_break = 0;
static uintptr_t loader(PCB *pcb, const char *filename)
{
  int fd = fs_open(filename, 0, 0);
  fs_lseek(fd, 0, SEEK_SET);
  fs_read(fd, buffer_tmp, RAMDISK_SIZE);
  Elf_Ehdr *ehdr = (Elf_Ehdr *)buffer_tmp;
  Elf_Phdr *phdr = (Elf64_Phdr *)(buffer_tmp + ehdr->e_phoff);
  assert(*(uint32_t *)ehdr->e_ident == 0x464c457f);
  assert(ehdr->e_machine == EXPECT_TYPE);
  uint16_t num = ehdr->e_phnum;
  unsigned char *mem_pos;
  for (uint16_t i = 0; i < num; i++)
  {
    if (phdr[i].p_type == PT_LOAD)
    {
      mem_pos = (unsigned char *)phdr[i].p_paddr;
      memset(mem_pos, 0, phdr[i].p_memsz);
      fs_lseek(fd, phdr[i].p_offset, SEEK_SET);
      fs_read(fd, mem_pos, phdr[i].p_filesz);
      // memcpy(mem_pos, buffer_tmp + phdr[i].p_offset, phdr[i].p_filesz);
      // Log("%lx %lx %lx %lx", phdr[i].p_paddr, phdr[i].p_memsz, phdr[i].p_filesz, phdr[i].p_offset);
      // memcpy(mem_pos, buffer_tmp + phdr[i].p_offset, phdr[i].p_filesz);

      // //program_break = program_break > (uint64_t)((phdr[i].p_paddr + phdr[i].p_memsz)) ? program_break : (uint64_t)((phdr[i].p_paddr + phdr[i].p_memsz));
      // mem_pos = (unsigned char *)(phdr[i].p_paddr + phdr[i].p_filesz);
      // memset(mem_pos, 0, phdr[i].p_memsz - phdr[i].p_filesz);
    }
  }
  fs_close(fd);
  return ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename)
{
  uintptr_t entry = loader(pcb, "/bin/file-test");
  Log("Jump to entry = 0x%lx", entry);
  ((void (*)())entry)();
}

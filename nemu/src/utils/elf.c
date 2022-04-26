#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <common.h>

typedef struct
{
    uint64_t fun_addr;
    uint64_t func_size;
    char *fun_name;
} elf_info;
elf_info elf_func[1000];
int elf_cnt = 0;

void read_elf(char *elf_name)
{
    if (elf_name == NULL)
    {
        Log("no input elf file");
        return;
    }
    FILE *stream;
    stream = fopen(elf_name, "rb");
    Assert(stream, "Can not open '%s'", elf_name);
    Log("The image is %s", elf_name);

    unsigned char *buffer;
    buffer = (unsigned char *)malloc(100500 * sizeof(unsigned char));
    int ret = fread(buffer, sizeof(unsigned char), 100500, stream);
    // Log("%d\n",ret);
    assert(ret == 0);

    Elf64_Ehdr *ehdr = (Elf64_Ehdr *)buffer;
    Elf64_Shdr *shdr = (Elf64_Shdr *)(buffer + ehdr->e_shoff);
    Elf64_Shdr *shdr_strtab = NULL;
    Elf64_Shdr *shdr_symtab = NULL;

    for (int i = 0; shdr_strtab == NULL || shdr_symtab == NULL; i++)
    {
        if (shdr[i].sh_type == SHT_SYMTAB)
        {
            shdr_symtab = &shdr[i];
        }
        else if (shdr[i].sh_type == SHT_STRTAB)
        {
            shdr_strtab = &shdr[i];
            break;
        }
    }

    Elf64_Sym *table_sym = (Elf64_Sym *)(buffer + shdr_symtab->sh_offset);

    for (int i = 0; i <= shdr_symtab->sh_size / shdr_symtab->sh_entsize; i++)
    {
        if (ELF64_ST_TYPE(table_sym[i].st_info) == STT_FUNC)
        {
            elf_func[elf_cnt].fun_addr = table_sym[i].st_value;
            elf_func[elf_cnt].func_size = table_sym[i].st_size;
            elf_func[elf_cnt].fun_name = (char *)(buffer + shdr_strtab->sh_offset + table_sym[i].st_name);
            elf_cnt++;
        }
    }

    for (int i = 0; i < elf_cnt; i++)
        Log("%lx %lx %s\n", elf_func[i].fun_addr, elf_func[i].func_size, elf_func[i].fun_name);
    return;
}
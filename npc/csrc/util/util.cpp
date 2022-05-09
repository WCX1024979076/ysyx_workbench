#include "npc.h"

void exit_npc(int flag);
void ebreak()
{
    puts("Meet ebreak;");
    printf("%lx\n", cpu_npc.gpr[10]);
    int flag = 0;
    if (cpu_npc.gpr[10] != 0)
        flag = -1;
    exit_npc(flag);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r)
{
    uint64_t *cpu_gpr = NULL;
    cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
    for (int i = 0; i < 32; i++)
        cpu_npc.gpr[i] = cpu_gpr[i];
    cpu_npc.pc = cpu_gpr[32];
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

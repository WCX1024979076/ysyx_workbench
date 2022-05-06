#include <common.h>
#include "syscall.h"
void do_syscall(Context *c)
{
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0])
  {
  case (SYS_yield):
    yield();
    c->GPRx = 0;
    break;
  case (SYS_exit):
    halt(a[1]);
    break;
  case (SYS_write):
    if (a[1] == 1 || a[1] == 2)
    {
      char *buf = (char *)a[2];
      int count = a[3];
      int sum = 0;
      for (int i = 0; i < count; i++)
      {
        sum++;
        printf("%c", buf[i]);
      }
      c->GPRx = sum;
    }

    break;
  default:
    panic("Unhandled syscall ID = %d", a[0]);
  }
}

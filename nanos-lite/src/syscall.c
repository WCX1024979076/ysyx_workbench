#include <common.h>
#include "syscall.h"
int fs_open(const char *pathname, int flags, int mode);
size_t fs_lseek(int fd, size_t offset, int whence);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
int fs_close(int fd);
void do_syscall(Context *c)
{
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  char *filename = (char *)a[1];
  char *file_read_buf = (char *) a[2];
  //  Log("meeting syscall %d",a[0]);
  switch (a[0])
  {
  case (-1):
    Log("meeting yield");
    break;
  case (SYS_yield):
    yield();
    c->GPRx = 0;
    break;
  case (SYS_exit):
    halt(a[1]);
    break;
  case(SYS_read) :
    Log("read_file %d %d",a[1],a[3]);
    c->GPRx = fs_read(a[1],file_read_buf,a[3]);
    // Log("file_content: %s",file_read_buf);
    Log("file_length: %d",c->GPRx );
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
    else
    {
      Log("write_file %d %d",a[1],a[3]);
      c->GPRx=fs_write(a[1], file_read_buf, a[3]);
    }
    break;
  case (SYS_brk):
    Log("brk %lx",a[1]);
    c->GPRx = 0;
    break;
  case (SYS_open):
    Log("open_file %s",filename);
    c->GPRx = fs_open(filename, a[2], a[3]);
    break;
  case (SYS_lseek) :
    Log("seek_file %d %d %d",a[1],a[2],a[3]);
    c->GPRx =fs_lseek(a[1],a[2],a[3]);
    break;
  case (SYS_close):
    Log("close_file %d",a[1]); 
    c->GPRx = fs_close(a[1]);
    break;
  default:
    panic("Unhandled syscall ID = %d", a[0]);
  }
}

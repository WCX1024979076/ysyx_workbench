#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
char number[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
void print_sign(char *out, int *cnt, long long num_ll, int base)
{
  int num_b[30] = {0};
  int num_b_cnt = 0;
  if (num_ll == 0)
    num_b[++num_b_cnt] = 0;
  else if (num_ll < 0)
    out[(*cnt)++] = '-', num_ll = -num_ll;
  while (num_ll != 0)
    num_b[++num_b_cnt] = num_ll % base, num_ll /= base;
  for (int i = num_b_cnt; i >= 1; i--)
    out[(*cnt)++] = number[num_b[i]];
  return;
}

void print_unsign(char *out, int *cnt, uint64_t num_ll, int base)
{
  int num_b[30] = {0};
  int num_b_cnt = 0;
  if (num_ll == 0)
    num_b[++num_b_cnt] = 0;
  while (num_ll != 0)
    num_b[++num_b_cnt] = num_ll % base, num_ll /= base;
  for (int i = num_b_cnt; i >= 1; i--)
    out[(*cnt)++] = number[num_b[i]];
  return;
}

int vprintf(const char *fmt, va_list ap)
{
  char out[4096];
  int cnt = vsprintf(out, fmt, ap);
  putstr(out);
  return cnt;
}
int printf(const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  int siz = vprintf(fmt, args);
  va_end(args);
  return siz;
}
int vsprintf(char *out, const char *fmt, va_list ap)
{
  int cnt = 0;
  for (int i = 0; fmt[i]; i++)
  {
    if (fmt[i] != '%')
    {
      out[cnt++] = fmt[i];
      continue;
    }
    int num = 0;
    long long num_ll = 0;
    uint64_t num_ull = 0;
    char chr;
    char *str = NULL;
    switch (fmt[i + 1])
    {
    case 'l':
      switch (fmt[i + 2])
      {
      case 'd':
        num_ll = va_arg(ap, long long);
        print_sign(out, &cnt, num_ll, 10);
        break;
      case 'x':
        num_ll = va_arg(ap, long long);
        print_sign(out, &cnt, num_ll, 16);
        break;
      default:
        break;
      }
      i++;
      break;
    case 'd':
      num = va_arg(ap, int);
      print_sign(out, &cnt, num, 10);
      break;
    case 'x':
      num = va_arg(ap, int);
      print_sign(out, &cnt, num, 16);
      break;
    case 'p':
      num_ull = va_arg(ap, uint64_t);
      print_unsign(out, &cnt, num_ull, 16);
      break;
    case 's':
      str = va_arg(ap, char *);
      for (int i = 0; str[i]; i++)
        out[cnt++] = str[i];
      break;
    case 'c':
      chr = va_arg(ap, int);
      out[cnt++] = chr;
      break;
    default:
      break;
    }
    i++;
  }
  out[cnt++] = '\0';
  return cnt;
}

int sprintf(char *out, const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  int siz = vsprintf(out, fmt, args);
  va_end(args);
  return siz;
}

int snprintf(char *out, size_t n, const char *fmt, ...)
{
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
  panic("Not implemented");
}

#endif

#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  
  va_list va_ptr;

  va_start(va_ptr,fmt);
  
  int cnt=0;
  for(int i=0;fmt[i];i++)
  {
    if(fmt[i]!='%')
    {
      out[cnt++]=fmt[i];
      continue;
    }
    int num=0,num_b_cnt=0;
    int num_b[20]={0};
    char *str=NULL;
    switch(fmt[i+1])
    {
      case 'd' :
        num=va_arg(va_ptr,int);
        while(num!=0)
        {
          num_b[++num_b_cnt]=num%10;
          num/=10;
        }
        for(int i=num_b_cnt;i>=1;i--)
          out[cnt++]=(char)(num_b[num_b_cnt]+'0');
        break;
      case 's' :
        str=va_arg(va_ptr,char *);
        for(int i=0;str[i];i++)
          out[cnt++]=str[i];
        break;
    }
  }
  return 0;
  //panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

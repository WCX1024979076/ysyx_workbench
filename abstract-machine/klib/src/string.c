#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s)
{
  size_t len = 0;
  while (s[len] != '\0')
    len++;
  return len;
}

char *strcpy(char *dst, const char *src)
{
  for (int i = 0; src[i]; i++)
    dst[i] = src[i];
  dst[strlen(src)] = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n)
{
  for (int i = 0; i < n; i++)
    dst[i] = src[i];
  return dst;
}

char *strcat(char *dst, const char *src)
{
  size_t dst_len = strlen(dst);
  for (int i = 0; src[i]; i++)
    dst[dst_len + i] = src[i];
  return dst;
}

int strcmp(const char *s1, const char *s2)
{
  int i = 0;
  for (i = 0; s1[i] && s2[i]; i++)
  {
    if (s1[i] < s2[i])
      return -1;
    else if (s1[i] > s2[i])
      return 1;
  }
  if (!s1[i] && s2[i])
    return -1;
  if (s1[i] && !s2[i])
    return 1;
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n)
{
  for (int i = 0; i < n; i++)
  {
    if (s1[i] > s2[i])
      return 1;
    else if (s1[i] < s2[i])
      return -1;
  }
  return 0;
}

void *memset(void *s, int c, size_t n)
{
  if (s == NULL || n < 0)
    return NULL;

  void *tmp = s;
  char *str = s;
  for (int i = 0; i < n; i++)
    str[i] = c;
  return tmp;
}

void *memmove(void *dst, const void *src, size_t n)
{
  if (dst == NULL || n < 0 || src == NULL)
    return NULL;

  char *str_dst = dst;
  const char *str_src = src;
  if (str_dst > str_src && str_src + n > str_dst)
  {
    for (int i = n - 1; i >= 0; i--)
      str_dst[i] = str_src[i];
  }
  else
  {
    for (int i = 0; i < n; i++)
      str_dst[i] = str_src[i];
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n)
{
  if (out == NULL || n < 0 || in == NULL)
    return NULL;

  char *str_out = out;
  const char *str_in = in;
  for (int i = 0; i < n; i++)
    str_out[i] = str_in[i];
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
  if (s1 == NULL || n < 0 || s2 == NULL)
    return -1;
  const char *str_s1 = s1;
  const char *str_s2 = s2;

  for (int i = 0; i < n; i++)
  {
    if (str_s1[i] > str_s2[i])
      return 1;
    else if (str_s1[i] < str_s2[i])
      return -1;
  }
  return 0;
}

#endif

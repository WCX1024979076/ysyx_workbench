#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
int buf_len=0;
void gen_num()
{
  int num=rand()%100;
  if(num==0)
  {
    buf[buf_len++]='0';
    return ;
  }
  while(num%10==0)
    num/=10;
  while(num!=0)
  {
    buf[buf_len++]=num%10+'0';
    num/=10;
  }
}

void gen(char c)
{
  buf[buf_len++]=c;
}

void gen_rand_op()
{
  switch(rand()%4)
  {
    case 0:
      gen('+');
      break;
    case 1:
      gen('-');
      break;
    case 2:
      gen('*');
      break;
    case 3 :
      gen('/');
      break;
  }
}

static void gen_rand_expr() {
  switch(rand()%3)
  {
    case 0: gen_num();break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf_len=0;
    buf[0] = '\0';
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}

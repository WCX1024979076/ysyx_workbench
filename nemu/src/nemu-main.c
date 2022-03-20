#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e,bool *success);

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  char str_expr[10]="1+2+3";
  bool success=true;
  expr(str_expr,&success);

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}

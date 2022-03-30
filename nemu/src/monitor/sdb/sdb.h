#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);

int add_point(char *str,bool* success);
void del_point(int id);
#endif

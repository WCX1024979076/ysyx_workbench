#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}
WP* new_wp()
{
  WP* tmp=free_;
  free_=free_->next;
  tmp->next=head->next;
  head=tmp;
  return tmp;
}
void free_wp(WP *wp)
{
  WP* tmp=head;
  while(tmp)
  {
    if(tmp->next->NO==wp->NO)
    {
      WP* tmp1=tmp->next;
      tmp->next=tmp->next->next;
      tmp1->next=free_->next;
      free_=tmp1;
      break;
    }
  }
}


/* TODO: Implement the functionality of watchpoint */


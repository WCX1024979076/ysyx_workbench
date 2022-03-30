#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char  point_expr[33];
  word_t point_data;
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
  if(free_==NULL)
    assert(0);
  WP* tmp=free_;
  free_=free_->next;
  if(head!=NULL)
    tmp->next=head->next;
  else
    tmp->next=NULL;
  head=tmp;
  return tmp;
}
void free_wp(WP *wp)
{
  WP* tmp=head;
  if(head->NO==wp->NO)
  {
    head=head->next;
    tmp->next=free_;
    free_=tmp;
    return ;
  }
  while(tmp)
  {
    if(tmp->next->NO==wp->NO)
    {
      WP* tmp1=tmp->next;
      tmp->next=tmp->next->next;
      if(free_==NULL)
        tmp1->next=free_->next;
      else
        tmp1->next=NULL;
      free_=tmp1;
      break;
    }
    tmp=tmp->next;
  }
}


/* TODO: Implement the functionality of watchpoint */
void check_point_change()
{
    WP* tmp=head;
    while(tmp)
    {
      bool success;
      word_t val=expr(tmp->point_expr,&success);              
      if(val!=tmp->point_data)
      {
        nemu_state.state=NEMU_STOP;
        printf("Hardware watchpoint %s \n\n old_val=%lu \n now_val=%lu\n",tmp->point_expr,tmp->point_data,val);
        break;
      }
      tmp=tmp->next;
    }
    return ;
}

int add_point(char *str,bool *success)
{
    WP* wp=new_wp();
    strcpy(wp->point_expr,str);
    wp->point_data=expr(str,success);
    return wp->NO;
}

void del_point(int id)
{
  WP tmp;
  tmp.NO=id;
  free_wp(&tmp);
}

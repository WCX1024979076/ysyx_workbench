#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_NEQ, TK_AND, TK_POT, TK_REG, TK_HNUM

  /* TODO: Add more token types */

};

word_t vaddr_read(vaddr_t addr, int len);
static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"0x[0-9a-fA-F]+", TK_HNUM}, //Hex number
  {"\\$[\\$a-zA-Z][0-9a-zA-Z]+",TK_REG}, //REG_NAME
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"[0-9]+", TK_NUM},     // number
  {"[(]",'('},            // (
  {"[)]",')'},            // )
  {"[*]",'*'},            // mul
  {"[/]",'/'},            // div
  {"[-]",'-'},            // sub
  {"[=]",'='},             // assign
  {"[!=]",TK_NEQ},        //not equl
  {"[&&]",TK_AND}        //and
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

         if(rules[i].token_type==TK_NUM||rules[i].token_type==TK_HNUM||rules[i].token_type==TK_REG){
            assert(substr_len<32);
            for(int i=0;i<substr_len;i++)
              tokens[nr_token].str[i]=substr_start[i];
            tokens[nr_token].type=rules[i].token_type;
            nr_token++;
         }
         else{
            tokens[nr_token].type=rules[i].token_type;
            nr_token++;
         }
      }
    }
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


int check_parentheses(int p,int q)
{
  int sum=0;
  for(int i=p;i<=q;i++)
  {
    if(tokens[i].type=='(')
      sum++;
    if(tokens[i].type==')')
      sum--;
    if(sum<=0&&i!=q)
      return 0;
  }
  if(sum==0)
    return 1;
  return 0;
}

int eval(int p,int q,bool *success)
{
  if(p>q)
    return -1;
  else if(p==q)
  {
    //Log("%d\n",tokens[p].type);
    if(tokens[p].type!=TK_NUM&&tokens[p].type!=TK_HNUM&&tokens[p].type!=TK_REG)
      success=false;
    word_t num=0;
    Log("%s\n",tokens[p].str);
    if(tokens[p].type==TK_NUM)
      sscanf(tokens[p].str,"%lu",&num);
    else if(tokens[p].type==TK_HNUM)
      sscanf(tokens[p].str,"%lx",&num);
    else if(tokens[p].type==TK_REG)
    {
        Log("%s",tokens[p].str);
        strcpy(tokens[p].str,tokens[p].str+1);
        Log("%s",tokens[p].str);
        num=isa_reg_str2val(tokens[p].str,success);
    }
    return num;
  }
  else if(check_parentheses(p,q))
  {
    return eval(p+1,q-1,success);
  }
  else if(tokens[p].type==TK_POT)
  {
    word_t addr=eval(p+1,p+1,success);
    return vaddr_read(addr,4);
  }
  else
  {
    int op=-1;
    int sum=0;
    for(int i=p;i<=q;i++)
    {
      if(tokens[i].type=='(')
        sum++;
      if(tokens[i].type==')')
        sum--;
      if(sum!=0)
        continue;
      if(tokens[i].type=='+'||tokens[i].type=='-'||tokens[i].type=='*'||tokens[i].type=='/')
      {
        if(op==-1)
          op=i;
        else if(tokens[i].type=='+'||tokens[i].type=='-')
          op=i;
        else if((tokens[i].type=='*'||tokens[i].type=='/')&&(tokens[op].type=='*'||tokens[op].type=='/'))
          op=i;
      }
    }
    int val1=eval(p,op-1,success);
    int val2=eval(op+1,q,success);
    int op_type=tokens[op].type;
    switch(op_type)
    {
      case '+' : return val1+val2;
      case '-' : return val1-val2;
      case '*' : return val1*val2;
      case '/' : return val1/val2;
      case TK_EQ: return val1==val2;
      case TK_NEQ: return val1!=val2;
      case TK_AND: return val1&&val2;
      default : *success=false;
    }
  }
  return 0;
}
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  for(int i=0;i<nr_token;i++)
  {
      if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == TK_NOTYPE || tokens[i-1].type=='*'||tokens[i-1].type=='/' || tokens[i-1].type=='*'||tokens[i-1].type=='/')) 
         tokens[i].type = TK_POT;
  }
  /* TODO: Insert codes to evaluate the expression. */
  word_t ans=eval(0,nr_token-1,success);
  printf("%lu\n",ans);
  if(ans == -1)
    *success = false;
  return ans;
}

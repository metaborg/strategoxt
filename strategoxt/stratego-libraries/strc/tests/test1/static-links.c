#include <stdio.h>

typedef struct str_frame *StrStaticLink;

typedef struct str_closure *StrClosure;

const char * __tracing_table [65535];
unsigned short __tracing_table_counter;

struct str_closure 
{
  int (*fun)();
  StrStaticLink sl;
};

struct str_frame 
{
  StrStaticLink parent;
  int **vars;  
  StrClosure *funs;
};

#define sl_decl(par) \
  struct str_frame frame; \
  frame.parent = par; 

#define sl_vars(n) \
  int *sl_vars[n]; \
  frame.vars = sl_vars; 

#define sl_funs(n) \
  StrClosure sl_funs[n]; \
  frame.funs = sl_funs;

#define sl_init_var(i,x) sl_vars[i] = &x;
#define sl_init_fun(i,cl) sl_funs[i] = cl;

#define sl_up(sl) ((sl)->parent)

#define sl_readvar(i,s)  (*sl_writevar(i,s))
#define sl_writevar(i,s) (*(((s)->vars)+i))

#define sl_fun(i,s)    ((*(((s)->funs)+i))->fun)
#define sl_fun_sl(i,s) ((*(((s)->funs)+i))->sl)

#define sl_fun_cl(i, s) (*(((s)->funs)+i))


/* nested functions (no longer supported) */

/* 

int f(int x) 
{
  int g(int y)
  {
    int h(int z)
    {
      return x + z;
    }
    
    return h(y + 1);
  }

  return g(x + 1);
}

*/

/* lifted functions */

int h_sl(StrStaticLink sl, int z)
{
  struct str_frame frame;
  frame.parent = sl; 
  return (sl_readvar(0,sl_up(sl))) + z;
}

int g_sl(StrStaticLink sl, int y)
{
  struct str_frame frame;
  frame.parent = sl; 
  return h_sl(&frame, y + 1);
}

int f_sl(StrStaticLink sl, int x)
{
  struct str_frame frame;
  frame.parent = sl;

  int *sl_vars[1]; 
  frame.vars = sl_vars;

  sl_vars[0] = &x;

  return g_sl(&frame, x + 1);
}



/* lifted functions using macros */

int h_sl2(StrStaticLink sl, int z)
{
  sl_decl(sl);
  return (sl_readvar(0,sl_up(sl))) + z;
}

int g_sl2(StrStaticLink sl, int y)
{
  sl_decl(sl);
  return h_sl2(&frame, y + 1);
}

int f_sl2(StrStaticLink sl, int x)
{
  sl_decl(sl);
  sl_vars(1);
  sl_init_var(0,x);
  return g_sl2(&frame, x + 1);
}


/* nested functions with higher-order args (no longer supported)

int f2(int k(int), int x) 
{
  int g2(int y)
  {
    int h2(int z)
    {
      return k(x + z);
    }
    
    return h2(y + 1);
  }
  return g2(x + 1);
}
 */

int foo(int x)
{
  return 2 * x;
}

/* lifted functions with higher-order args as closures using macros */

int h3_sl(StrStaticLink sl, int z)
{
  sl_decl(sl);
  return sl_fun(0,sl_up(sl))
         (sl_fun_sl(0,sl_up(sl)), 
	  (sl_readvar(0,sl_up(sl))) + z);
}

int g3_sl(StrStaticLink sl, int y)
{
  sl_decl(sl);
  return h3_sl(&frame, y + 1);
}

int f3_sl(StrStaticLink sl, StrClosure k, int x)
{
  sl_decl(sl);
  sl_vars(1);
  sl_init_var(0,x);
  sl_funs(1);
  sl_init_fun(0,k);
  return g3_sl(&frame, x + 1);
}

int foo_sl(StrStaticLink sl, int x)
{
  return 2 * x;
}

/* main */

int main(void)
{
  // fprintf(stdout, "f(3) = %d\n", f(3));
  fprintf(stdout, "f_sl(3) = %d\n", f_sl(NULL, 3));
  fprintf(stdout, "f_sl2(3) = %d\n", f_sl2(NULL, 3));
  // fprintf(stdout, "f2(3) = %d\n", f2(foo, 3));

  struct str_closure k = {foo_sl, NULL};

  fprintf(stdout, "f3_sl(3) = %d\n", 
	  f3_sl(NULL, &k, 3));

  return 0;
}

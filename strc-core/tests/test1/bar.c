#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>

static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;

static ATerm bar_1_0(StrSL sl, StrCL s, ATerm t);


static void init_module_constructors() 
{
  ATfprintf(stderr, "init_constructors() (bar.c)\n");
  sym__2 = ATmakeSymbol("", 2, ATfalse);
}

static ATerm term_p_0;

static void init_module_constant_terms(void)
{
  ATfprintf(stderr, "init_constant_terms (bar.c)()\n");
  ATprotect(&(term_p_0));
  term_p_0 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATfprintf(stderr, "init_constant_terms (bar.c) end()\n");
}

static void register_strategies() {
  unsigned int i = 1;
  static struct str_closure cl[1];
  static struct str_funlink fl[1] = {
    { &bar_1_0, NULL }
  };
  static const char *name[1] = {
    "bar_1_0"
  };

  ATfprintf(stderr, "register_strategies (bar.c)()\n");
  assert(strategy_table != NULL);
  while(i--) {
    cl[i].fl = &fl[i];
    cl[i].sl = NULL;
    SRTS_register_function(
      (ATerm)ATmakeAppl0(ATmakeSymbol(name[i], 0, ATtrue)),
      &(cl[i])
    );
  }
  ATfprintf(stderr, "register_strategies (bar.c) end()\n");
}
static void init_strategies() {
  ATfprintf(stderr, "init_strategies (bar.c)()\n");
  ATfprintf(stderr, "init_strategies (bar.c) end()\n");
}

#include <srts/init-stratego-module.h>

static ATerm bar_1_0(StrSL sl, StrCL s, ATerm t)
{
  ATfprintf(stderr, "bar_1_0(%t)\n", t);
  res_cl_call_1(t, s, t);
  t = (ATerm)ATmakeAppl2(sym__2, term_p_0, t);
  return(t);
}

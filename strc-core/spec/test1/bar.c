#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>

static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;

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

#include <srts/init-stratego-module.h>

ATerm bar_1_0(StrSL sl, StrCL s, ATerm t)
{
  ATfprintf(stderr, "bar_1_0(%t)\n", t);
  t = cl_fun(s)(cl_sl(s),t);
  t = (ATerm)ATmakeAppl2(sym__2, term_p_0, t);
  return(t);
}

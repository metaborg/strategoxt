#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_g_0;
ATerm term_f_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_0));
  term_f_0 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_g_0));
  term_g_0 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm o_108 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm d_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = xtc_transform_2_0(c_0, d_0, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_f_0;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  ATerm a_0 = NULL;
  t = pass_verbose_0_0(t);
  a_0 = t;
  t = (ATerm) ATinsert(CheckATermList(a_0), term_g_0);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(b_0, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_m_0;
ATerm term_k_0;
ATerm term_j_0;
ATerm term_i_0;
ATerm term_h_0;
ATerm term_g_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_0));
  term_g_0 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_h_0));
  term_h_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_i_0));
  term_i_0 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_0));
  term_j_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_k_0));
  term_k_0 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_0));
  term_m_0 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm xtc_transform_1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm build_pp_tables_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm l_108 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL;
  t = term_g_0;
  t = xtc_find_0_0(t);
  b_0 = t;
  t = term_h_0;
  t = xtc_find_0_0(t);
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_0), term_i_0), b_0), term_i_0);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = xtc_transform_1_0(d_0, t);
  t = xtc_transform_2_0(e_0, build_pp_tables_0_0, t);
  t = xtc_transform_1_0(f_0, t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_j_0;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_k_0;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_m_0;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(a_0, t);
  return(t);
}

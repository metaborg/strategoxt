#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
static ATerm term_n_0;
static ATerm term_m_0;
static ATerm term_l_0;
static ATerm term_j_0;
static ATerm term_i_0;
static ATerm term_g_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_0));
  term_g_0 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_i_0));
  term_i_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_j_0));
  term_j_0 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_0));
  term_l_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_m_0));
  term_m_0 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_0));
  term_n_0 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm xtc_transform_1_0 (ATerm k_6 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm build_pp_tables_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm r_5 (ATerm), ATerm t);
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
  t = term_i_0;
  t = xtc_find_0_0(t);
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_0), term_j_0), b_0), term_j_0);
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
  t = term_l_0;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_m_0;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_n_0;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(a_0, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_S_1;
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
}
static ATerm term_s_0;
static ATerm term_r_0;
static ATerm term_q_0;
static ATerm term_p_0;
static ATerm term_o_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_0));
  term_o_0 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_0));
  term_p_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_q_0));
  term_q_0 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_0));
  term_r_0 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_s_0));
  term_s_0 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm double_quote_0_0 (ATerm t);
ATerm try_1_0 (ATerm e_93 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm b_95 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm c_5 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm r_5 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm io_pp_box_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = xtc_io_transform_1_0(d_0, t);
  t = xtc_transform_2_0(k_0, l_0, t);
  t = xtc_transform_2_0(m_0, pass_verbose_0_0, t);
  t = xtc_transform_2_0(n_0, pass_verbose_0_0, t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = topdown_1_0(e_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = try_1_0(j_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm a_0 = NULL,f_0 = NULL,g_0 = NULL,h_0 = NULL,b_0 = NULL;
  h_0 = t;
  if(match_cons(t, sym_S_1))
    {
      f_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_0);
  a_0 = t;
  t = f_0;
  t = double_quote_0_0(t);
  g_0 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, g_0);
  b_0 = t;
  t = SSLsetAnnotations(b_0, a_0);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_o_0;
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm i_0 = NULL;
  t = term_p_0;
  t = xtc_find_0_0(t);
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_0), term_q_0);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_r_0;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_s_0;
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(c_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}

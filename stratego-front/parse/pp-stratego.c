#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_e_2;
ATerm term_d_2;
ATerm term_c_2;
ATerm term_b_2;
ATerm term_a_2;
ATerm term_z_1;
ATerm term_y_1;
ATerm term_n_1;
ATerm term_m_1;
ATerm term_l_1;
ATerm term_k_1;
ATerm term_j_1;
ATerm term_i_1;
ATerm term_h_1;
ATerm term_g_1;
ATerm term_d_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_1));
  term_d_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_g_1));
  term_g_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_h_1));
  term_h_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(sym__2, term_g_1, term_h_1);
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(sym__2, term_k_1, term_h_1);
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_y_1));
  term_y_1 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_transform_1_0 (ATerm s_105 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm pp_stratego_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t);
static ATerm l_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm pp_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm j_0 = NULL;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_0), term_d_1);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_d_1;
  {
    ATerm e_1 = t;
    int f_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(f_1);
      }
    else
      {
        t = e_1;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm m_0 = NULL;
  m_0 = t;
  if(match_string(t, "-a"))
    {
      t = m_0;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = m_0;
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm n_0 = NULL;
  n_0 = t;
  t = term_i_1;
  t = set_config_0_0(t);
  t = n_0;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_j_1;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm o_0 = NULL;
  o_0 = t;
  t = term_l_1;
  t = set_config_0_0(t);
  t = o_0;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_m_1;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm p_0 = NULL;
  p_0 = t;
  if(match_string(t, "-I"))
    {
      t = p_0;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = p_0;
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm q_0 = NULL;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_1, (ATerm) ATinsert(ATempty, q_0));
  t = extend_config_0_0(t);
  t = q_0;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_n_1;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm o_1 = t;
  int p_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_0, c_0, d_0, t);
      LocalPopChoice(p_1);
    }
  else
    {
      t = o_1;
      {
        ATerm q_1 = t;
        int r_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_0, f_0, g_0, t);
            LocalPopChoice(r_1);
          }
        else
          {
            t = q_1;
            t = ArgOption_3_0(h_0, i_0, k_0, t);
          }
      }
    }
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm s_1 = t;
  int t_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(t_1);
    }
  else
    {
      t = s_1;
      t = io_options_0_0(t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = xtc_io_1_0(u_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm u_1 = t;
  int v_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 = NULL;
      r_0 = t;
      t = term_g_1;
      t = get_config_0_0(t);
      t = r_0;
      LocalPopChoice(v_1);
    }
  else
    {
      t = u_1;
      t = xtc_transform_2_0(x_0, pass_includes_0_0, t);
    }
  t = xtc_transform_1_0(y_0, t);
  {
    ATerm w_1 = t;
    int x_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL;
        t_0 = t;
        t = term_k_1;
        t = get_config_0_0(t);
        t = t_0;
        LocalPopChoice(x_1);
      }
    else
      {
        t = w_1;
        t = xtc_transform_1_0(z_0, t);
      }
  }
  t = xtc_transform_2_0(a_1, b_1, t);
  t = xtc_transform_2_0(c_1, pass_verbose_0_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_y_1;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_z_1;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_a_2;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  t = pass_verbose_0_0(t);
  v_0 = t;
  t = term_c_2;
  t = xtc_find_0_0(t);
  w_0 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_0), w_0), term_d_2);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_e_2;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_2_0(l_0, s_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}

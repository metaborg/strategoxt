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
ATerm term_w_1;
ATerm term_v_1;
ATerm term_u_1;
ATerm term_t_1;
ATerm term_q_1;
ATerm term_p_1;
ATerm term_o_1;
ATerm term_n_1;
ATerm term_m_1;
ATerm term_j_1;
ATerm term_i_1;
ATerm term_f_1;
ATerm term_e_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_1));
  term_e_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_f_1));
  term_f_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_t_1));
  term_t_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_u_1));
  term_u_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_v_1));
  term_v_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--start symbol   Define start symbol", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm get_config_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass_sglri_args_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm sglr_2_0 (ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm d_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm j_3 (ATerm), ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass_sglri_args_0_0 (ATerm t)
{
  ATerm c_0 = NULL,f_0 = NULL;
  ATerm c_1 = t;
  int d_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_0 = NULL;
      t = term_e_1;
      t = get_config_0_0(t);
      g_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, g_0), term_f_1);
      LocalPopChoice(d_1);
    }
  else
    {
      t = c_1;
      t = (ATerm) ATempty;
    }
  c_0 = t;
  {
    ATerm g_1 = t;
    int h_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_1;
        t = get_config_0_0(t);
        LocalPopChoice(h_1);
      }
    else
      {
        t = g_1;
        t = (ATerm) ATempty;
      }
  }
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_0), c_0), (ATerm) ATinsert(ATempty, term_j_1));
  t = concat_0_0(t);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm k_1 = t;
  int l_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_1;
      t = get_config_0_0(t);
      LocalPopChoice(l_1);
    }
  else
    {
      t = k_1;
      t = (ATerm) ATinsert(ATempty, term_n_1);
      t = fatal_error_0_0(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_o_1;
  return(t);
}
ATerm sglr_2_0 (ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm i_0 = NULL,k_0 = NULL,m_0 = NULL;
    m_0 = t;
    t = e_0(t);
    i_0 = t;
    t = m_0;
    t = h_0(t);
    k_0 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(k_0), i_0), term_m_1);
    return(t);
  }
  t = xtc_transform_2_0(a_0, b_0, t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_p_1;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_q_1;
  {
    ATerm r_1 = t;
    int s_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(s_1);
      }
    else
      {
        t = r_1;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, pass_sglri_args_0_0, t);
  t = xtc_transform_2_0(d_0, j_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm o_0 = NULL;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_1, o_0);
  t = set_config_0_0(t);
  t = o_0;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_t_1;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm q_0 = NULL;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_1, (ATerm) ATinsert(ATempty, q_0));
  t = extend_config_0_0(t);
  t = q_0;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_u_1;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm r_0 = NULL;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_1, (ATerm) ATinsert(ATempty, r_0));
  t = extend_config_0_0(t);
  t = r_0;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_v_1;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm s_0 = NULL;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_1, s_0);
  t = set_config_0_0(t);
  t = s_0;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_w_1;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm x_1 = t;
  int y_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(l_0, n_0, p_0, t);
      LocalPopChoice(y_1);
    }
  else
    {
      t = x_1;
      {
        ATerm z_1 = t;
        int a_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_0, u_0, v_0, t);
            LocalPopChoice(a_2);
          }
        else
          {
            t = z_1;
            {
              ATerm b_2 = t;
              int c_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(w_0, x_0, y_0, t);
                  LocalPopChoice(c_2);
                }
              else
                {
                  t = b_2;
                  t = ArgOption_3_0(z_0, a_1, b_1, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(sglri_options_0_0, parse_and_implode_0_0, t);
  return(t);
}

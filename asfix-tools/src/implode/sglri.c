#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
}
static ATerm term_g_2;
static ATerm term_f_2;
static ATerm term_e_2;
static ATerm term_d_2;
static ATerm term_c_2;
static ATerm term_b_2;
static ATerm term_a_2;
static ATerm term_z_1;
static ATerm term_w_1;
static ATerm term_v_1;
static ATerm term_u_1;
static ATerm term_t_1;
static ATerm term_s_1;
static ATerm term_p_1;
static ATerm term_o_1;
static ATerm term_l_1;
static ATerm term_k_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_s_1));
  term_s_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_1));
  term_t_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_u_1));
  term_u_1 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_v_1));
  term_v_1 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <file.tbl>           Use parse table <file.tbl> (required)", 0, ATtrue));
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--start <symbol>        Start parsing with <symbol>", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-fi", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-fe", 0, ATtrue));
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-heuristic-filters  Don't use hearistic disambiguation filters (encouraged)", 0, ATtrue));
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr <opt>            Pass <opt> to sglr", 0, ATtrue));
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl <opt>            Pass <opt> to implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm get_config_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass_sglri_args_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm sglr_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
ATerm Option_3_0 (ATerm b_4 (ATerm), ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm s_5 (ATerm), ATerm t_5 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass_sglri_args_0_0 (ATerm t)
{
  ATerm a_0 = NULL,d_0 = NULL;
  ATerm i_1 = t;
  int j_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 = NULL;
      t = term_k_1;
      t = get_config_0_0(t);
      f_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_l_1);
      LocalPopChoice(j_1);
    }
  else
    {
      t = i_1;
      t = (ATerm) ATempty;
    }
  a_0 = t;
  {
    ATerm m_1 = t;
    int n_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_1;
        t = get_config_0_0(t);
        LocalPopChoice(n_1);
      }
    else
      {
        t = m_1;
        t = (ATerm) ATempty;
      }
  }
  d_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_0), a_0), (ATerm) ATinsert(ATempty, term_p_1));
  t = concat_0_0(t);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm q_1 = t;
  int r_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_1;
      t = get_config_0_0(t);
      LocalPopChoice(r_1);
    }
  else
    {
      t = q_1;
      t = (ATerm) ATinsert(ATempty, term_t_1);
      t = fatal_error_0_0(t);
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_u_1;
  return(t);
}
ATerm sglr_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm g_0 = NULL,j_0 = NULL,m_0 = NULL;
    m_0 = t;
    t = i_0(t);
    g_0 = t;
    t = m_0;
    t = k_0(t);
    j_0 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(j_0), g_0), term_s_1);
    return(t);
  }
  t = xtc_transform_2_0(b_0, c_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_v_1;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_w_1;
  {
    ATerm x_1 = t;
    int y_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_1);
      }
    else
      {
        t = x_1;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, pass_sglri_args_0_0, t);
  t = xtc_transform_2_0(e_0, h_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm n_0 = NULL;
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_1, n_0);
  t = set_config_0_0(t);
  t = n_0;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_z_1;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm p_0 = NULL;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_1, p_0);
  t = set_config_0_0(t);
  t = p_0;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_a_2;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-heuristic-filters", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm r_0 = NULL;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_1, (ATerm) ATinsert(ATinsert(ATempty, term_c_2), term_b_2));
  t = extend_config_0_0(t);
  t = r_0;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_d_2;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_e_2;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_1, (ATerm) ATinsert(ATempty, t_0));
  t = extend_config_0_0(t);
  t = t_0;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_f_2;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm u_0 = NULL;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_1, (ATerm) ATinsert(ATempty, u_0));
  t = extend_config_0_0(t);
  t = u_0;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_g_2;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_e_2;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm h_2 = t;
  int i_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(l_0, o_0, q_0, t);
      LocalPopChoice(i_2);
    }
  else
    {
      t = h_2;
      {
        ATerm j_2 = t;
        int k_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_0, v_0, w_0, t);
            LocalPopChoice(k_2);
          }
        else
          {
            t = j_2;
            {
              ATerm l_2 = t;
              int m_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_0, y_0, z_0, t);
                  LocalPopChoice(m_2);
                }
              else
                {
                  t = l_2;
                  {
                    ATerm n_2 = t;
                    int o_2 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(_fail, _fail, a_1, t);
                        LocalPopChoice(o_2);
                      }
                    else
                      {
                        t = n_2;
                        {
                          ATerm p_2 = t;
                          int q_2 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(b_1, c_1, d_1, t);
                              LocalPopChoice(q_2);
                            }
                          else
                            {
                              t = p_2;
                              {
                                ATerm r_2 = t;
                                int s_2 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(e_1, f_1, g_1, t);
                                    LocalPopChoice(s_2);
                                  }
                                else
                                  {
                                    t = r_2;
                                    t = Option_3_0(_fail, _fail, h_1, t);
                                  }
                              }
                            }
                        }
                      }
                  }
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

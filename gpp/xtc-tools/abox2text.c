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
static ATerm term_q_0;
static ATerm term_p_0;
static ATerm term_o_0;
static ATerm term_n_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_0));
  term_n_0 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_o_0));
  term_o_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_p_0));
  term_p_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_0));
  term_q_0 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm conc_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm o_5 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm general_options_0_0 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm l_0 = t;
  int m_0 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_0;
      t = get_config_0_0(t);
      LocalPopChoice(m_0);
      {
        ATerm c_0 = NULL;
        c_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_0), term_n_0);
      }
    }
  else
    {
      t = l_0;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_o_0;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm d_0 = NULL,f_0 = NULL;
  t = term_p_0;
  t = pass_width_0_0(t);
  d_0 = t;
  t = term_p_0;
  t = pass_verbose_0_0(t);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, f_0);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  t = xtc_transform_2_0(a_0, b_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm i_0 = NULL;
  i_0 = t;
  if(match_string(t, "-w"))
    {
      t = i_0;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = i_0;
    }
  return(t);
}
static ATerm g_0 (ATerm t)
{
  ATerm j_0 = NULL;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_0, j_0);
  t = set_config_0_0(t);
  t = j_0;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_q_0;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm r_0 = t;
  int s_0 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_0);
    }
  else
    {
      t = r_0;
      {
        ATerm t_0 = t;
        int u_0 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_0);
          }
        else
          {
            t = t_0;
            {
              ATerm v_0 = t;
              int w_0 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  LocalPopChoice(w_0);
                }
              else
                {
                  t = v_0;
                  t = ArgOption_3_0(e_0, g_0, h_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = xtc_io_1_0(abox2text_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_2_0(abox2text_options_0_0, k_0, t);
  return(t);
}

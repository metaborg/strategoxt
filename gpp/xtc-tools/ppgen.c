#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_PlainText_0;
Symbol sym_ParseTree_0;
Symbol sym_AST_0;
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
  sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
  ATprotectSymbol(sym_PlainText_0);
  sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
  ATprotectSymbol(sym_ParseTree_0);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
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
ATerm term_j_2;
ATerm term_i_2;
ATerm term_h_2;
ATerm term_g_2;
ATerm term_f_2;
ATerm term_e_2;
ATerm term_d_2;
ATerm term_c_2;
ATerm term_b_2;
ATerm term_y_1;
ATerm term_x_1;
ATerm term_w_1;
ATerm term_v_1;
ATerm term_s_1;
ATerm term_r_1;
ATerm term_q_1;
ATerm term_p_1;
ATerm term_o_1;
ATerm term_n_1;
ATerm term_m_1;
ATerm term_l_1;
ATerm term_h_1;
ATerm term_f_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_1));
  term_f_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_1));
  term_h_1 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.baf", 0, ATtrue));
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
  ATprotect(&(term_s_1));
  term_s_1 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
  ATprotect(&(term_v_1));
  term_v_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_x_1));
  term_x_1 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_y_1));
  term_y_1 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(sym__2, term_v_1, term_c_2);
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(sym__2, term_v_1, term_f_2);
  ATprotect(&(term_h_2));
  term_h_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(sym__2, term_b_2, term_f_2);
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm f_105 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_sglr_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm d_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_parse_sdf2_0_1 (ATerm h_0, ATerm t);
static ATerm l_0 (ATerm t);
ATerm pre_process_sdf_0_0 (ATerm t);
ATerm get_input_type_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm p_0 (ATerm t);
ATerm ppgen_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_108 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm g_3 (ATerm), ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm ppgen_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_1);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_h_1;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm e_0 = NULL,f_0 = NULL,g_0 = NULL;
    t = term_l_1;
    t = n_0(t);
    t = xtc_find_0_0(t);
    e_0 = t;
    t = term_l_1;
    t = o_0(t);
    f_0 = t;
    t = term_l_1;
    t = pass_v_verbose_0_0(t);
    g_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(g_0), f_0), term_o_1), e_0), term_n_1), term_m_1);
    return(t);
  }
  t = xtc_transform_2_0(b_0, c_0, t);
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
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_r_1;
  return(t);
}
ATerm xtc_parse_sdf2_0_1 (ATerm h_0, ATerm t)
{
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    t = h_0;
    return(t);
  }
  t = xtc_sglr_2_0(d_0, i_0, t);
  t = xtc_transform_2_0(j_0, pass_verbose_0_0, t);
  t = xtc_transform_2_0(k_0, pass_verbose_0_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_q_1;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  if(match_cons(t, sym__2))
    {
      v_0 = ATgetArgument(t, 0);
      w_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_0;
  if(match_cons(t, sym_AST_0))
    {
      t = w_0;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = w_0;
          t = xtc_transform_2_0(l_0, pass_verbose_0_0, t);
        }
      else
        {
          ATerm a_1 = NULL;
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = term_s_1;
          a_1 = t;
          t = w_0;
          t = xtc_parse_sdf2_0_1(a_1, t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm t_1 = t;
  int u_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_1;
      t = get_config_0_0(t);
      LocalPopChoice(u_1);
    }
  else
    {
      t = t_1;
      t = term_w_1;
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_x_1;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_y_1;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  d_1 = t;
  t = get_input_type_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, d_1);
  t = pre_process_sdf_0_0(t);
  t = xtc_transform_2_0(m_0, pass_verbose_0_0, t);
  {
    ATerm z_1 = t;
    int a_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL;
        g_1 = t;
        t = term_b_2;
        t = get_config_0_0(t);
        if(!(match_cons(t, sym_AST_0)))
          _fail(t);
        t = g_1;
        LocalPopChoice(a_2);
      }
    else
      {
        t = z_1;
        t = xtc_transform_2_0(p_0, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm i_1 = NULL;
  i_1 = t;
  t = term_d_2;
  t = set_config_0_0(t);
  t = i_1;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_e_2;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_1 = NULL;
  j_1 = t;
  t = term_g_2;
  t = set_config_0_0(t);
  t = j_1;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_h_2;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm k_1 = NULL;
  k_1 = t;
  t = term_i_2;
  t = set_config_0_0(t);
  t = k_1;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_j_2;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm k_2 = t;
  int l_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_0, r_0, s_0, t);
      LocalPopChoice(l_2);
    }
  else
    {
      t = k_2;
      {
        ATerm m_2 = t;
        int n_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(t_0, u_0, x_0, t);
            LocalPopChoice(n_2);
          }
        else
          {
            t = m_2;
            {
              ATerm o_2 = t;
              int p_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_0, z_0, b_1, t);
                  LocalPopChoice(p_2);
                }
              else
                {
                  t = o_2;
                  t = io_options_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_2_0(ppgen_options_0_0, e_1, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_PlainText_0;
static Symbol sym_ParseTree_0;
static Symbol sym_AST_0;
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
  sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
  ATprotectSymbol(sym_PlainText_0);
  sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
  ATprotectSymbol(sym_ParseTree_0);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
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
static ATerm term_j_2;
static ATerm term_i_2;
static ATerm term_h_2;
static ATerm term_g_2;
static ATerm term_f_2;
static ATerm term_e_2;
static ATerm term_d_2;
static ATerm term_c_2;
static ATerm term_b_2;
static ATerm term_y_1;
static ATerm term_x_1;
static ATerm term_w_1;
static ATerm term_u_1;
static ATerm term_r_1;
static ATerm term_q_1;
static ATerm term_p_1;
static ATerm term_o_1;
static ATerm term_n_1;
static ATerm term_m_1;
static ATerm term_l_1;
static ATerm term_k_1;
static ATerm term_j_1;
static ATerm term_f_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_1));
  term_f_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.baf", 0, ATtrue));
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
  ATprotect(&(term_u_1));
  term_u_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
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
  term_d_2 = (ATerm) ATmakeAppl(sym__2, term_u_1, term_c_2);
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(sym__2, term_u_1, term_f_2);
  ATprotect(&(term_h_2));
  term_h_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(sym__2, term_b_2, term_f_2);
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm f_118 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm xtc_sglr_2_0 (ATerm q_0 (ATerm), ATerm v_1 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_parse_sdf2_0_1 (ATerm k_0, ATerm t);
static ATerm l_0 (ATerm t);
ATerm pre_process_sdf_0_0 (ATerm t);
ATerm get_input_type_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm ppgen_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm o_5 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm b_4 (ATerm), ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm ppgen_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
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
static ATerm c_0 (ATerm t)
{
  t = term_j_1;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm q_0 (ATerm), ATerm v_1 (ATerm), ATerm t)
{
  static ATerm e_0 (ATerm t);
  static ATerm e_0 (ATerm t)
  {
    ATerm b_0 = NULL,d_0 = NULL,g_0 = NULL;
    t = term_k_1;
    t = q_0(t);
    t = xtc_find_0_0(t);
    b_0 = t;
    t = term_k_1;
    t = v_1(t);
    d_0 = t;
    t = term_k_1;
    t = pass_v_verbose_0_0(t);
    g_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(g_0), d_0), term_n_1), b_0), term_m_1), term_l_1);
    return(t);
  }
  t = xtc_transform_2_0(c_0, e_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_o_1;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_p_1;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_q_1;
  return(t);
}
ATerm xtc_parse_sdf2_0_1 (ATerm k_0, ATerm t)
{
  static ATerm h_0 (ATerm t);
  static ATerm h_0 (ATerm t)
  {
    t = k_0;
    return(t);
  }
  t = xtc_sglr_2_0(f_0, h_0, t);
  t = xtc_transform_2_0(i_0, pass_verbose_0_0, t);
  t = xtc_transform_2_0(j_0, pass_verbose_0_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_p_1;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_0;
  if(match_cons(t, sym_AST_0))
    {
      t = u_0;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = u_0;
          t = xtc_transform_2_0(l_0, pass_verbose_0_0, t);
        }
      else
        {
          ATerm y_0 = NULL;
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = term_r_1;
          y_0 = t;
          t = u_0;
          t = xtc_parse_sdf2_0_1(y_0, t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm s_1 = t;
  int t_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_1;
      t = get_config_0_0(t);
      LocalPopChoice(t_1);
    }
  else
    {
      t = s_1;
      t = term_w_1;
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_x_1;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_y_1;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL;
  b_1 = t;
  t = get_input_type_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, b_1);
  t = pre_process_sdf_0_0(t);
  t = xtc_transform_2_0(m_0, pass_verbose_0_0, t);
  {
    ATerm z_1 = t;
    int a_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 = NULL;
        e_1 = t;
        t = term_b_2;
        t = get_config_0_0(t);
        if(!(match_cons(t, sym_AST_0)))
          _fail(t);
        t = e_1;
        LocalPopChoice(a_2);
      }
    else
      {
        t = z_1;
        t = xtc_transform_2_0(n_0, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  t = term_d_2;
  t = set_config_0_0(t);
  t = g_1;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_e_2;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm h_1 = NULL;
  h_1 = t;
  t = term_g_2;
  t = set_config_0_0(t);
  t = h_1;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_h_2;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm i_1 = NULL;
  i_1 = t;
  t = term_i_2;
  t = set_config_0_0(t);
  t = i_1;
  return(t);
}
static ATerm c_1 (ATerm t)
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
      t = Option_3_0(o_0, p_0, r_0, t);
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
            t = Option_3_0(s_0, v_0, w_0, t);
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
                  t = Option_3_0(x_0, z_0, c_1, t);
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
static ATerm d_1 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_2_0(ppgen_options_0_0, d_1, t);
  return(t);
}

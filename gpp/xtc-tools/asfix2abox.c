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
Symbol sym_None_0;
Symbol sym_FILE_1;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
}
ATerm term_q_2;
ATerm term_p_2;
ATerm term_o_2;
ATerm term_n_2;
ATerm term_i_2;
ATerm term_h_2;
ATerm term_g_2;
ATerm term_f_2;
ATerm term_e_2;
ATerm term_d_2;
ATerm term_c_2;
ATerm term_b_2;
ATerm term_a_2;
ATerm term_v_1;
ATerm term_q_1;
ATerm term_p_1;
ATerm term_o_1;
ATerm term_n_1;
ATerm term_m_1;
ATerm term_l_1;
ATerm term_k_1;
ATerm term_j_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_v_1));
  term_v_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_h_2));
  term_h_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(sym__2, term_j_1, term_o_2);
  ATprotect(&(term_q_2));
  term_q_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm pass_conservative_0_0 (ATerm t);
ATerm debug_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm g_104 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm d_104 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm r_107 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm modification_time_0_0 (ATerm t);
ATerm _2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm add_extension_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_extension_1_0 (ATerm w_105 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_89 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm t);
ATerm xtc_io_1_0 (ATerm v_106 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm asfix2abox_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm option_wrap_2_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm h_1 = t;
  int i_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_1;
      t = get_config_0_0(t);
      LocalPopChoice(i_1);
      t = (ATerm) ATinsert(ATempty, term_k_1);
    }
  else
    {
      t = h_1;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = debug_1_0(e_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_l_1;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm b_0 = NULL,d_0 = NULL;
  d_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, term_m_1);
  t = add_extension_0_0(t);
  t = file_exists_0_0(t);
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, d_0);
  t = _2_0(modification_time_0_0, modification_time_0_0, t);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, b_0, d_0);
  t = Fst_0_0(t);
  t = if_verbose2_1_0(a_0, t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_n_1;
  return(t);
}
static ATerm h_0 (ATerm t)
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
  t = debug_1_0(l_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_q_1;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm r_1 = t;
  int s_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_extension_1_0(g_0, t);
      LocalPopChoice(s_1);
    }
  else
    {
      t = r_1;
      {
        ATerm t_1 = t;
        int u_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = has_extension_1_0(h_0, t);
            LocalPopChoice(u_1);
          }
        else
          {
            t = t_1;
            {
              ATerm f_0 = NULL;
              f_0 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_v_1);
              t = fatal_error_0_0(t);
            }
          }
      }
      {
        ATerm w_1 = t;
        int x_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(x_1);
          }
        else
          {
            t = w_1;
            {
              ATerm k_0 = NULL,c_0 = NULL;
              k_0 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_0);
              t = xtc_transform_1_0(i_0, t);
              if(match_cons(t, sym_FILE_1))
                {
                  c_0 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_0;
              t = if_verbose2_1_0(j_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm y_1 = t;
  int z_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_2;
      t = get_config_0_0(t);
      LocalPopChoice(z_1);
    }
  else
    {
      t = y_1;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm n_0 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_0), term_a_2);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = debug_1_0(t_0, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_b_2;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(m_0, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(r_0, t);
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL;
  t = term_c_2;
  t = pass_verbose_0_0(t);
  o_0 = t;
  t = term_c_2;
  t = create_pp_table_args_0_0(t);
  p_0 = t;
  t = term_c_2;
  t = pass_conservative_0_0(t);
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_0), p_0), o_0);
  t = concat_0_0(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = xtc_transform_2_0(v_0, x_0, t);
  t = xtc_transform_2_0(y_0, z_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_d_2;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_2), term_g_2), term_f_2), term_e_2);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_i_2;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_c_2;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_io_1_0(u_0, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm j_2 = t;
  int k_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(b_1, c_1, d_1, t);
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
            t = io_options_0_0(t);
            LocalPopChoice(m_2);
          }
        else
          {
            t = l_2;
            t = Option_3_0(e_1, f_1, g_1, t);
          }
      }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm s_0 = NULL;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_2, (ATerm) ATinsert(ATempty, s_0));
  t = extend_config_0_0(t);
  t = s_0;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_n_2;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm w_0 = NULL;
  w_0 = t;
  t = term_p_2;
  t = set_config_0_0(t);
  t = w_0;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_q_2;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_2_0(a_1, asfix2abox_0_0, t);
  return(t);
}

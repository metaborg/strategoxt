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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
}
ATerm term_r_1;
ATerm term_q_1;
ATerm term_n_1;
ATerm term_m_1;
ATerm term_h_1;
ATerm term_c_1;
ATerm term_b_1;
ATerm term_a_1;
ATerm term_z_0;
ATerm term_y_0;
ATerm term_x_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_y_0));
  term_y_0 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_z_0));
  term_z_0 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_a_1));
  term_a_1 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_b_1));
  term_b_1 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_c_1));
  term_c_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_h_1));
  term_h_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm debug_1_0 (ATerm y_84 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm e_105 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm modification_time_0_0 (ATerm t);
ATerm _2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm add_extension_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_extension_1_0 (ATerm m_107 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = debug_1_0(e_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_x_0;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm b_0 = NULL,d_0 = NULL;
  d_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, term_y_0);
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
  t = term_z_0;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_a_1;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_b_1;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = debug_1_0(m_0, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_c_1;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm d_1 = t;
  int e_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_extension_1_0(g_0, t);
      LocalPopChoice(e_1);
    }
  else
    {
      t = d_1;
      {
        ATerm f_1 = t;
        int g_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = has_extension_1_0(h_0, t);
            LocalPopChoice(g_1);
          }
        else
          {
            t = f_1;
            {
              ATerm f_0 = NULL;
              f_0 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_h_1);
              t = fatal_error_0_0(t);
            }
          }
      }
      {
        ATerm i_1 = t;
        int j_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(j_1);
          }
        else
          {
            t = i_1;
            {
              ATerm l_0 = NULL,c_0 = NULL;
              l_0 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_0);
              t = xtc_transform_1_0(j_0, t);
              if(match_cons(t, sym_FILE_1))
                {
                  c_0 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_0;
              t = if_verbose2_1_0(k_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
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
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm n_0 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_0), term_m_1);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = debug_1_0(q_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_n_1;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(o_0, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(p_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm o_1 = t;
  int p_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(t_0, u_0, v_0, t);
      LocalPopChoice(p_1);
    }
  else
    {
      t = o_1;
      t = io_options_0_0(t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = xtc_transform_2_0(w_0, create_pp_table_args_0_0, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm i_0 = NULL;
  i_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_1, (ATerm) ATinsert(ATempty, i_0));
  t = extend_config_0_0(t);
  t = i_0;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_q_1;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_r_1;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(r_0, s_0, t);
  return(t);
}

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
ATerm term_t_3;
ATerm term_s_3;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_f_3;
ATerm term_e_3;
ATerm term_d_3;
ATerm term_c_3;
ATerm term_b_3;
ATerm term_a_3;
ATerm term_z_2;
ATerm term_y_2;
ATerm term_x_2;
ATerm term_w_2;
ATerm term_t_2;
ATerm term_s_2;
ATerm term_p_2;
ATerm term_o_2;
ATerm term_l_2;
ATerm term_i_2;
ATerm term_d_2;
ATerm term_y_1;
ATerm term_x_1;
ATerm term_w_1;
ATerm term_v_1;
ATerm term_u_1;
ATerm term_t_1;
ATerm term_s_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_1));
  term_s_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_t_1));
  term_t_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_u_1));
  term_u_1 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_v_1));
  term_v_1 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_x_1));
  term_x_1 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_y_1));
  term_y_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_l_2));
  term_l_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_2));
  term_s_2 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_2));
  term_t_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_w_2));
  term_w_2 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: pptable-diff [options]", 0, ATtrue));
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_c_3));
  term_c_3 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_f_3));
  term_f_3 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm exit_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass__old_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_84 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm e_105 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm modification_time_0_0 (ATerm t);
ATerm _2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm add_extension_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_extension_1_0 (ATerm m_107 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm pass__new_0_0 (ATerm t);
ATerm pass__prune_0_0 (ATerm t);
ATerm pass__patch_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_108 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm pp_table_diff_usage_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm j_3 (ATerm), ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm g_3 (ATerm), ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm pptable_diff_options_0_0 (ATerm t);
ATerm option_wrap_4_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm q_1 = t;
  int r_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_1;
      t = get_config_0_0(t);
      LocalPopChoice(r_1);
      {
        ATerm b_0 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        b_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_s_1);
      }
    }
  else
    {
      t = q_1;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = debug_1_0(f_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_t_1;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm d_0 = NULL,e_0 = NULL;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_0, term_u_1);
  t = add_extension_0_0(t);
  t = file_exists_0_0(t);
  d_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, e_0);
  t = _2_0(modification_time_0_0, modification_time_0_0, t);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, d_0, e_0);
  t = Fst_0_0(t);
  t = if_verbose2_1_0(a_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_v_1;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_w_1;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_x_1;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = debug_1_0(l_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_y_1;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm z_1 = t;
  int a_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_extension_1_0(h_0, t);
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
            t = has_extension_1_0(i_0, t);
            LocalPopChoice(c_2);
          }
        else
          {
            t = b_2;
            {
              ATerm g_0 = NULL;
              g_0 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, g_0), term_d_2);
              t = fatal_error_0_0(t);
            }
          }
      }
      {
        ATerm e_2 = t;
        int f_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(f_2);
          }
        else
          {
            t = e_2;
            {
              ATerm n_0 = NULL,c_0 = NULL;
              n_0 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_0);
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
ATerm pass__new_0_0 (ATerm t)
{
  ATerm g_2 = t;
  int h_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_2;
      t = get_config_0_0(t);
      LocalPopChoice(h_2);
      {
        ATerm r_0 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_0), term_i_2);
      }
    }
  else
    {
      t = g_2;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm j_2 = t;
  int k_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_2;
      t = get_config_0_0(t);
      LocalPopChoice(k_2);
      t = (ATerm) ATinsert(ATempty, term_l_2);
    }
  else
    {
      t = j_2;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm m_2 = t;
  int n_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_2;
      t = get_config_0_0(t);
      LocalPopChoice(n_2);
      t = (ATerm) ATinsert(ATempty, term_o_2);
    }
  else
    {
      t = m_2;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm t_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL;
  t = term_p_2;
  t = pass__patch_0_0(t);
  t_0 = t;
  t = term_p_2;
  t = pass__prune_0_0(t);
  v_0 = t;
  t = term_p_2;
  t = pass__new_0_0(t);
  w_0 = t;
  t = term_p_2;
  t = pass__old_0_0(t);
  x_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_0), w_0), v_0), t_0);
  t = concat_0_0(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm q_2 = t;
  int r_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_2_0(o_0, p_0, t);
      t = try_1_0(q_0, t);
      LocalPopChoice(r_2);
    }
  else
    {
      t = q_2;
      t = term_s_2;
      t = exit_0_0(t);
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_t_2;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_p_2;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm u_2 = t;
    int v_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_2;
        t = get_config_0_0(t);
        LocalPopChoice(v_2);
      }
    else
      {
        t = u_2;
        t = term_l_2;
        t = get_config_0_0(t);
      }
  }
  t = b_1;
  t = xtc_transform_2_0(s_0, pass_verbose_0_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_w_2;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_io_1_0(m_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_x_2);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_3), term_o_3), term_n_3), term_m_3), term_f_3), term_e_3), term_d_3), term_c_3), term_b_3), term_a_3), term_z_2), term_y_2);
  return(t);
}
ATerm pp_table_diff_usage_0_0 (ATerm t)
{
  t = default_system_usage_2_0(u_0, y_0, t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm d_1 = NULL;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_2, d_1);
  t = set_config_0_0(t);
  t = d_1;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_q_3;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_2, e_1);
  t = set_config_0_0(t);
  t = e_1;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_r_3;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_1, f_1);
  t = set_config_0_0(t);
  t = f_1;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_s_3;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_2, g_1);
  t = set_config_0_0(t);
  t = g_1;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_t_3;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm u_3 = t;
  int v_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_0, a_1, c_1, t);
      LocalPopChoice(v_3);
    }
  else
    {
      t = u_3;
      {
        ATerm w_3 = t;
        int x_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(h_1, i_1, j_1, t);
            LocalPopChoice(x_3);
          }
        else
          {
            t = w_3;
            {
              ATerm y_3 = t;
              int z_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(k_1, l_1, m_1, t);
                  LocalPopChoice(z_3);
                }
              else
                {
                  t = y_3;
                  {
                    ATerm a_4 = t;
                    int b_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(n_1, o_1, p_1, t);
                        LocalPopChoice(b_4);
                      }
                    else
                      {
                        t = a_4;
                        t = io_options_0_0(t);
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
  t = option_wrap_4_0(pptable_diff_options_0_0, pp_table_diff_usage_0_0, system_about_0_0, pptable_diff_0_0, t);
  return(t);
}

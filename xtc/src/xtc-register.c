#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
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
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_i_12;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_l_9;
ATerm term_f_9;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_d_8;
ATerm term_w_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_v_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_u_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_k_4;
void init_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("repository", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  Retrieving repository ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("    Repository: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-r rep | --repository rep     Tool repository", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i r | --import r             Import repository r", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-t name | --tool name         Tool to register", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc | --location loc       Location of tool", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-V num | --Version num        Version of tool\n", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i       Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_r_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__3, term_q_10, term_r_10, (ATerm) ATempty);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Registration starts ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Registration completed ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc-register failed! ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm q_57 (ATerm));
ATerm exit_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_57 (ATerm));
ATerm if_verbose1_1 (ATerm, ATerm y_49 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_repository_0 (ATerm);
ATerm register_import_0 (ATerm);
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm));
ATerm union_1 (ATerm, ATerm w_62 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_union_0 (ATerm);
ATerm register_tool_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_49 (ATerm));
ATerm get_repository_0 (ATerm);
ATerm register_it_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm register_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_67 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_54 (ATerm));
ATerm map_1 (ATerm, ATerm d_67 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_54 (ATerm));
ATerm Program_1 (ATerm, ATerm c_45 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_55 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_54 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_49 (ATerm), ATerm t_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_54 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_54 (ATerm));
ATerm xtc_register_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm h_4;
  h_4 = t;
  {
    ATerm b_1 = NULL,n_1 = NULL;
    ATerm i_4;
    i_4 = t;
    {
      ATerm m_1 = NULL;
      t = q_57(t);
      {
        m_1 = t;
        if(((b_1 != NULL) && (b_1 != m_1)))
          _fail(m_1);
        else
          b_1 = m_1;
      }
    }
    t = i_4;
    {
      ATerm o_1 = NULL;
      o_1 = t;
      if(((n_1 != NULL) && (n_1 != o_1)))
        _fail(o_1);
      else
        n_1 = o_1;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_1)), not_null(b_1)));
        t = printnl_0(t);
      }
    }
  }
  t = h_4;
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_1 = NULL;
  v_1 = t;
  t = SSL_exit(not_null(v_1));
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm l_4;
  l_4 = t;
  {
    ATerm z_1 = NULL;
    ATerm a_2 = NULL;
    a_2 = t;
    if(((z_1 != NULL) && (z_1 != a_2)))
      _fail(a_2);
    else
      z_1 = a_2;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATempty, not_null(z_1)));
      t = printnl_0(t);
    }
  }
  t = l_4;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm m_4;
  m_4 = t;
  {
    t = r_57(t);
    t = debug_0(t);
  }
  t = m_4;
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    ATerm n_4;
    n_4 = t;
    {
      ATerm d_2 = NULL;
      ATerm e_2 = NULL;
      t = term_s_4;
      {
        t = get_config_0(t);
        {
          e_2 = t;
          if(((d_2 != NULL) && (d_2 != e_2)))
            _fail(e_2);
          else
            d_2 = e_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_2), term_t_4);
        t = geq_0(t);
      }
    }
    t = n_4;
    t = y_49(t);
    return(t);
  }
  t = try_1(t, c_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL;
  i_2 = t;
  h_2 :
  if(match_cons(i_2, sym__2))
    {
      j_2 = ATgetArgument(i_2, 0);
      k_2 = ATgetArgument(i_2, 1);
      t = SSL_WriteToTextFile(not_null(j_2), not_null(k_2));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  t = SSL_table_keys(not_null(p_2));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  {
    t = table_keys_0(t);
    {
      ATerm d_0 (ATerm t)
      {
        ATerm x_2 = NULL;
        ATerm z_2 = NULL;
        x_2 = t;
        {
          ATerm a_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_2), not_null(x_2));
          {
            t = table_get_0(t);
            {
              a_3 = t;
              if(((z_2 != NULL) && (z_2 != a_3)))
                _fail(a_3);
              else
                z_2 = a_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), not_null(z_2));
        }
        return(t);
      }
      t = map_1(t, d_0);
    }
  }
  return(t);
}
ATerm save_repository_0 (ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm f_0 (ATerm t)
    {
      t = term_u_4;
      return(t);
    }
    t = say_1(t, f_0);
    return(t);
  }
  t = if_verbose1_1(t, e_0);
  {
    ATerm w_4;
    w_4 = t;
    {
      ATerm h_3 = NULL;
      t = term_x_4;
      {
        t = get_config_0(t);
        {
          h_3 = t;
          if(((g_3 != NULL) && (g_3 != h_3)))
            _fail(h_3);
          else
            g_3 = h_3;
        }
      }
    }
    t = w_4;
    {
      ATerm j_3 = NULL;
      t = term_y_4;
      {
        t = table_getlist_0(t);
        {
          j_3 = t;
          if(((i_3 != NULL) && (i_3 != j_3)))
            _fail(j_3);
          else
            i_3 = j_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(i_3));
        t = WriteToTextFile_0(t);
      }
    }
  }
  return(t);
}
ATerm register_import_0 (ATerm t)
{
  ATerm o_3 = NULL;
  t = term_e_5;
  {
    ATerm q_3 = NULL;
    t = get_config_0(t);
    {
      o_3 = t;
      {
        ATerm m_0 (ATerm t)
        {
          ATerm n_0 (ATerm t)
          {
            t = term_f_5;
            return(t);
          }
          t = debug_1(t, n_0);
          return(t);
        }
        t = if_verbose2_1(t, m_0);
        {
          ATerm r_3 = NULL;
          r_3 = t;
          if(((q_3 != NULL) && (q_3 != r_3)))
            _fail(r_3);
          else
            q_3 = r_3;
          {
            t = (ATerm) ATmakeAppl(sym__3, term_y_4, term_g_5, not_null(q_3));
            t = table_union_0(t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      if(((x_3 != NULL) && (x_3 != y_3)))
        _fail(y_3);
      else
        x_3 = y_3;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm))
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(((ATgetType(e_4) == AT_LIST) && ((ATermList) e_4 != ATempty)))
    {
      f_4 = ATgetFirst((ATermList) e_4);
      g_4 = (ATerm) ATgetNext((ATermList) e_4);
      {
        t = v_62(t);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm j_4 = NULL;
            j_4 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), not_null(j_4));
              t = u_62(t);
            }
            return(t);
          }
          t = fetch_1(t, o_0);
        }
        t = not_null(g_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  o_4 :
  if(match_cons(p_4, sym__2))
    {
      q_4 = ATgetArgument(p_4, 0);
      r_4 = ATgetArgument(p_4, 1);
      {
        t = not_null(q_4);
        {
          ATerm v_4 (ATerm t)
          {
            ATerm l_5 = t;
            int m_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_4);
                LocalPopChoice(m_5);
              }
            else
              {
                t = l_5;
                {
                  ATerm n_5 = t;
                  int o_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_0 (ATerm t)
                      {
                        t = not_null(r_4);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_62, p_0);
                      t = v_4(t);
                      LocalPopChoice(o_5);
                    }
                  else
                    {
                      t = n_5;
                      t = Cons_2(t, _id, v_4);
                    }
                }
              }
            return(t);
          }
          t = v_4(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_union_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym__3))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      d_5 = ATgetArgument(a_5, 2);
      {
        ATerm p_5;
        p_5 = t;
        {
          ATerm h_5 = NULL;
          ATerm i_5 = NULL,k_5 = NULL;
          ATerm j_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_5), not_null(c_5));
          {
            ATerm q_5 = t;
            int r_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(r_5);
              }
            else
              {
                t = q_5;
                t = (ATerm) ATempty;
              }
            {
              j_5 = t;
              if(((i_5 != NULL) && (i_5 != j_5)))
                _fail(j_5);
              else
                i_5 = j_5;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), not_null(i_5));
            {
              t = union_0(t);
              {
                k_5 = t;
                if(((h_5 != NULL) && (h_5 != k_5)))
                  _fail(k_5);
                else
                  h_5 = k_5;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_5), not_null(c_5), not_null(h_5));
            t = set_0(t);
          }
        }
        t = p_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_tool_0 (ATerm t)
{
  ATerm u_5 = NULL;
  t = term_s_5;
  {
    ATerm w_5 = NULL;
    t = get_config_0(t);
    {
      u_5 = t;
      {
        ATerm q_0 (ATerm t)
        {
          ATerm r_0 (ATerm t)
          {
            t = term_t_5;
            return(t);
          }
          t = say_1(t, r_0);
          return(t);
        }
        t = if_verbose1_1(t, q_0);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              t = term_v_5;
              return(t);
            }
            t = debug_1(t, t_0);
            return(t);
          }
          t = if_verbose2_1(t, s_0);
          {
            t = term_x_5;
            {
              ATerm y_5 = NULL;
              t = get_config_0(t);
              {
                w_5 = t;
                {
                  ATerm u_0 (ATerm t)
                  {
                    ATerm v_0 (ATerm t)
                    {
                      t = term_z_5;
                      return(t);
                    }
                    t = debug_1(t, v_0);
                    return(t);
                  }
                  t = if_verbose2_1(t, u_0);
                  {
                    t = term_g_6;
                    {
                      t = get_config_0(t);
                      {
                        y_5 = t;
                        {
                          ATerm w_0 (ATerm t)
                          {
                            ATerm x_0 (ATerm t)
                            {
                              t = term_h_6;
                              return(t);
                            }
                            t = debug_1(t, x_0);
                            return(t);
                          }
                          t = if_verbose2_1(t, w_0);
                          {
                            t = not_null(u_5);
                            {
                              ATerm y_0 (ATerm t)
                              {
                                ATerm a_6 = NULL,c_6 = NULL;
                                ATerm i_6;
                                i_6 = t;
                                {
                                  ATerm b_6 = NULL;
                                  b_6 = t;
                                  if(((a_6 != NULL) && (a_6 != b_6)))
                                    _fail(b_6);
                                  else
                                    a_6 = b_6;
                                }
                                t = i_6;
                                {
                                  ATerm d_6 = NULL,f_6 = NULL;
                                  ATerm e_6 = NULL;
                                  e_6 = t;
                                  if(((d_6 != NULL) && (d_6 != e_6)))
                                    _fail(e_6);
                                  else
                                    d_6 = e_6;
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_6)), term_j_6), not_null(y_5));
                                    {
                                      t = concat_strings_0(t);
                                      {
                                        f_6 = t;
                                        if(((c_6 != NULL) && (c_6 != f_6)))
                                          _fail(f_6);
                                        else
                                          c_6 = f_6;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, term_y_4, (ATerm)ATmakeAppl(sym_Tool_1, not_null(a_6)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(w_5), not_null(c_6))));
                                    t = table_union_0(t);
                                  }
                                }
                                return(t);
                              }
                              t = map_1(t, y_0);
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
      }
    }
  }
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym__2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      {
        t = not_null(s_6);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
            v_6 = t;
            o_6 :
            if(match_cons(v_6, sym__2))
              {
                w_6 = ATgetArgument(v_6, 0);
                x_6 = ATgetArgument(v_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_6), not_null(w_6), not_null(x_6));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_7 = NULL;
  d_7 = t;
  t = SSL_ReadFromFile(not_null(d_7));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm i_7 = NULL;
  ATerm k_7 = NULL;
  i_7 = t;
  {
    ATerm k_6;
    k_6 = t;
    {
      ATerm l_7 = NULL;
      t = term_l_6;
      {
        l_7 = t;
        if(((k_7 != NULL) && (k_7 != l_7)))
          _fail(l_7);
        else
          k_7 = l_7;
      }
    }
    t = k_6;
    {
      t = SSL_open_file(not_null(i_7), not_null(k_7));
      t = SSL_close_file(not_null(i_7));
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym__2))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      {
        ATerm m_6;
        m_6 = t;
        {
          ATerm n_6 = t;
          int t_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_7), not_null(s_7));
              LocalPopChoice(t_6);
            }
          else
            {
              t = n_6;
              t = SSL_gtr(not_null(r_7), not_null(s_7));
            }
        }
        t = m_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm y_7 = NULL;
  ATerm u_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
      z_7 = t;
      x_7 :
      if(match_cons(z_7, sym__2))
        {
          a_8 = ATgetArgument(z_7, 0);
          b_8 = ATgetArgument(z_7, 1);
          {
            if(((y_7 != NULL) && (y_7 != a_8)))
              _fail(a_8);
            else
              y_7 = a_8;
            if(((y_7 != NULL) && (y_7 != b_8)))
              _fail(b_8);
            else
              y_7 = b_8;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_6);
    }
  else
    {
      t = u_6;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_49 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm z_6;
    z_6 = t;
    {
      ATerm e_8 = NULL;
      ATerm f_8 = NULL;
      t = term_s_4;
      {
        t = get_config_0(t);
        {
          f_8 = t;
          if(((e_8 != NULL) && (e_8 != f_8)))
            _fail(f_8);
          else
            e_8 = f_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), term_a_7);
        t = geq_0(t);
      }
    }
    t = z_6;
    t = z_49(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm get_repository_0 (ATerm t)
{
  ATerm j_8 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_b_7;
      return(t);
    }
    t = say_1(t, d_1);
    return(t);
  }
  t = if_verbose1_1(t, c_1);
  {
    t = term_x_4;
    {
      ATerm l_8 = NULL;
      t = get_config_0(t);
      {
        j_8 = t;
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              t = term_c_7;
              return(t);
            }
            t = debug_1(t, f_1);
            return(t);
          }
          t = if_verbose2_1(t, e_1);
          {
            ATerm m_8 = NULL;
            t = not_null(j_8);
            {
              ATerm e_7 = t;
              int f_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = file_exists_0(t);
                  t = ReadFromFile_0(t);
                  LocalPopChoice(f_7);
                }
              else
                {
                  t = e_7;
                  t = (ATerm) ATempty;
                }
              {
                m_8 = t;
                if(((l_8 != NULL) && (l_8 != m_8)))
                  _fail(m_8);
                else
                  l_8 = m_8;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(l_8));
              t = table_putlist_0(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm register_it_0 (ATerm t)
{
  t = get_repository_0(t);
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = register_tool_0(t);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        t = register_import_0(t);
      }
    t = save_repository_0(t);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  t = SSL_string_to_int(not_null(q_8));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  y_8 = t;
  w_8 :
  if(match_string(y_8, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_8) == AT_LIST) && ((ATermList) y_8 != ATempty)))
        {
          z_8 = ATgetFirst((ATermList) y_8);
          a_9 = (ATerm) ATgetNext((ATermList) y_8);
          x_8 :
          if(((ATgetType(a_9) == AT_LIST) && ((ATermList) a_9 != ATempty)))
            {
              b_9 = ATgetFirst((ATermList) a_9);
              c_9 = (ATerm) ATgetNext((ATermList) a_9);
              {
                ATerm g_9 = NULL;
                ATerm j_7;
                j_7 = t;
                {
                  t = not_null(z_8);
                  t = j_0(t);
                }
                t = j_7;
                {
                  ATerm h_9 = NULL;
                  t = not_null(b_9);
                  {
                    t = k_0(t);
                    {
                      h_9 = t;
                      if(((g_9 != NULL) && (g_9 != h_9)))
                        _fail(h_9);
                      else
                        g_9 = h_9;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), not_null(g_9));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      {
        t = not_null(o_9);
        {
          ATerm g_1 (ATerm t)
          {
            t = not_null(p_9);
            return(t);
          }
          t = at_end_1(t, g_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym__2))
    {
      a_10 = ATgetArgument(z_9, 0);
      b_10 = ATgetArgument(z_9, 1);
      {
        ATerm f_10 = NULL,h_10 = NULL;
        ATerm g_10 = NULL;
        t = SSLgetAnnotations(not_null(z_9));
        {
          g_10 = t;
          if(((f_10 != NULL) && (f_10 != g_10)))
            _fail(g_10);
          else
            f_10 = g_10;
        }
        {
          t = not_null(a_10);
          {
            ATerm j_10 = NULL;
            t = i_43(t);
            {
              h_10 = t;
              {
                t = not_null(b_10);
                {
                  ATerm l_10 = NULL;
                  t = j_43(t);
                  {
                    j_10 = t;
                    {
                      ATerm m_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_10), not_null(j_10)), not_null(f_10));
                      {
                        m_10 = t;
                        if(((l_10 != NULL) && (l_10 != m_10)))
                          _fail(m_10);
                        else
                          l_10 = m_10;
                      }
                      t = not_null(l_10);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  t = SSL_is_string(not_null(t_10));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm o_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_1);
            LocalPopChoice(t_7);
          }
        else
          {
            t = o_7;
            {
              ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
              c_11 = t;
              b_11 :
              if(match_cons(c_11, sym_Path_1))
                {
                  d_11 = ATgetArgument(c_11, 0);
                  t = not_null(d_11);
                }
              else
                {
                  if(match_cons(c_11, sym_Var_1))
                    {
                      d_11 = ATgetArgument(c_11, 0);
                      {
                        t = not_null(d_11);
                        {
                          ATerm u_7 = t;
                          int v_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_7);
                            }
                          else
                            {
                              t = u_7;
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = term_w_7;
                                  return(t);
                                }
                                t = debug_1(t, i_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_11, sym_Prefix_2))
                        {
                          d_11 = ATgetArgument(c_11, 0);
                          e_11 = ATgetArgument(c_11, 1);
                          {
                            ATerm j_11 = NULL,l_11 = NULL;
                            ATerm c_8;
                            c_8 = t;
                            {
                              ATerm k_11 = NULL;
                              t = not_null(d_11);
                              {
                                t = eval_config_0(t);
                                {
                                  k_11 = t;
                                  if(((j_11 != NULL) && (j_11 != k_11)))
                                    _fail(k_11);
                                  else
                                    j_11 = k_11;
                                }
                              }
                            }
                            t = c_8;
                            {
                              ATerm m_11 = NULL;
                              t = not_null(e_11);
                              {
                                t = eval_config_0(t);
                                {
                                  m_11 = t;
                                  if(((l_11 != NULL) && (l_11 != m_11)))
                                    _fail(m_11);
                                  else
                                    l_11 = m_11;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), not_null(l_11));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(u_11));
    {
      t = table_get_0(t);
      {
        ATerm j_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_8;
            g_8 = t;
            {
              ATerm w_11 = NULL;
              ATerm x_11 = NULL;
              x_11 = t;
              if(((w_11 != NULL) && (w_11 != x_11)))
                _fail(x_11);
              else
                w_11 = x_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_8, not_null(u_11), not_null(w_11));
                t = table_put_0(t);
              }
            }
            t = g_8;
          }
          return(t);
        }
        t = try_1(t, j_1);
      }
    }
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym__2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm j_12 = NULL;
        ATerm k_12 = NULL,m_12 = NULL;
        ATerm l_12 = NULL;
        t = not_null(f_12);
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              t = (ATerm) ATempty;
            }
          {
            l_12 = t;
            if(((k_12 != NULL) && (k_12 != l_12)))
              _fail(l_12);
            else
              k_12 = l_12;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_12), not_null(k_12));
          {
            t = conc_0(t);
            {
              m_12 = t;
              if(((j_12 != NULL) && (j_12 != m_12)))
                _fail(m_12);
              else
                j_12 = m_12;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_8, not_null(f_12), not_null(j_12));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_options_0 (ATerm t)
{
  ATerm k_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm c_13 = NULL;
        c_13 = t;
        q_12 :
        if(!(match_string(c_13, "-r")))
          {
            if(!(match_string(c_13, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm o_8;
        o_8 = t;
        {
          ATerm d_13 = NULL;
          ATerm e_13 = NULL;
          e_13 = t;
          if(((d_13 != NULL) && (d_13 != e_13)))
            _fail(e_13);
          else
            d_13 = e_13;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_4, not_null(d_13));
            t = set_config_0(t);
          }
        }
        t = o_8;
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_p_8;
        return(t);
      }
      t = ArgOption_3(t, k_1, l_1, p_1);
      LocalPopChoice(n_8);
    }
  else
    {
      t = k_8;
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm f_13 = NULL;
              f_13 = t;
              s_12 :
              if(!(match_string(f_13, "-i")))
                {
                  if(!(match_string(f_13, "--import")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm t_8;
              t_8 = t;
              {
                ATerm g_13 = NULL;
                ATerm h_13 = NULL;
                h_13 = t;
                if(((g_13 != NULL) && (g_13 != h_13)))
                  _fail(h_13);
                else
                  g_13 = h_13;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATempty, not_null(g_13)));
                  t = extend_config_0(t);
                }
              }
              t = t_8;
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              t = term_u_8;
              return(t);
            }
            t = ArgOption_3(t, q_1, r_1, s_1);
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            {
              ATerm v_8 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm i_13 = NULL;
                    i_13 = t;
                    u_12 :
                    if(!(match_string(i_13, "-t")))
                      {
                        if(!(match_string(i_13, "--tool")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_1 (ATerm t)
                  {
                    ATerm e_9;
                    e_9 = t;
                    {
                      ATerm j_13 = NULL;
                      ATerm k_13 = NULL;
                      k_13 = t;
                      if(((j_13 != NULL) && (j_13 != k_13)))
                        _fail(k_13);
                      else
                        j_13 = k_13;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_s_5, (ATerm) ATinsert(ATempty, not_null(j_13)));
                        t = extend_config_0(t);
                      }
                    }
                    t = e_9;
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    t = term_f_9;
                    return(t);
                  }
                  t = ArgOption_3(t, t_1, u_1, w_1);
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = v_8;
                  {
                    ATerm i_9 = t;
                    int j_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_1 (ATerm t)
                        {
                          ATerm l_13 = NULL;
                          l_13 = t;
                          w_12 :
                          if(!(match_string(l_13, "-l")))
                            {
                              if(!(match_string(l_13, "--location")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          ATerm k_9;
                          k_9 = t;
                          {
                            ATerm m_13 = NULL;
                            ATerm n_13 = NULL;
                            n_13 = t;
                            if(((m_13 != NULL) && (m_13 != n_13)))
                              _fail(n_13);
                            else
                              m_13 = n_13;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_g_6, not_null(m_13));
                              t = set_config_0(t);
                            }
                          }
                          t = k_9;
                          return(t);
                        }
                        ATerm b_2 (ATerm t)
                        {
                          t = term_l_9;
                          return(t);
                        }
                        t = ArgOption_3(t, x_1, y_1, b_2);
                        LocalPopChoice(j_9);
                      }
                    else
                      {
                        t = i_9;
                        {
                          ATerm q_9 = t;
                          int r_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_2 (ATerm t)
                              {
                                ATerm o_13 = NULL;
                                o_13 = t;
                                y_12 :
                                if(!(match_string(o_13, "-V")))
                                  {
                                    if(!(match_string(o_13, "--Version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm f_2 (ATerm t)
                              {
                                ATerm s_9;
                                s_9 = t;
                                {
                                  ATerm p_13 = NULL;
                                  ATerm q_13 = NULL;
                                  q_13 = t;
                                  if(((p_13 != NULL) && (p_13 != q_13)))
                                    _fail(q_13);
                                  else
                                    p_13 = q_13;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_x_5, not_null(p_13));
                                    t = set_config_0(t);
                                  }
                                }
                                t = s_9;
                                return(t);
                              }
                              ATerm g_2 (ATerm t)
                              {
                                t = term_t_9;
                                return(t);
                              }
                              t = ArgOption_3(t, c_2, f_2, g_2);
                              LocalPopChoice(r_9);
                            }
                          else
                            {
                              t = q_9;
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  ATerm r_13 = NULL;
                                  r_13 = t;
                                  a_13 :
                                  if(!(match_string(r_13, "--verbose")))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                ATerm m_2 (ATerm t)
                                {
                                  ATerm u_9;
                                  u_9 = t;
                                  {
                                    ATerm s_13 = NULL;
                                    ATerm t_13 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      t_13 = t;
                                      if(((s_13 != NULL) && (s_13 != t_13)))
                                        _fail(t_13);
                                      else
                                        s_13 = t_13;
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_s_4, not_null(s_13));
                                      t = set_config_0(t);
                                    }
                                  }
                                  t = u_9;
                                  return(t);
                                }
                                ATerm n_2 (ATerm t)
                                {
                                  t = term_v_9;
                                  return(t);
                                }
                                t = ArgOption_3(t, l_2, m_2, n_2);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  t = SSL_table_destroy(not_null(b_14));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  t = SSL_implode_string(not_null(f_14));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm i_14 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_14);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
          t = Nil_0(t);
          t = s_67(t);
        }
      }
    return(t);
  }
  t = i_14(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
        l_14 = t;
        k_14 :
        if(((ATgetType(l_14) == AT_LIST) && ((ATermList) l_14 != ATempty)))
          {
            m_14 = ATgetFirst((ATermList) l_14);
            n_14 = (ATerm) ATgetNext((ATermList) l_14);
            {
              t = not_null(m_14);
              {
                ATerm o_2 (ATerm t)
                {
                  t = not_null(n_14);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_2);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  t = SSL_explode_string(not_null(t_14));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_67 (ATerm))
{
  ATerm w_14 (ATerm t)
  {
    ATerm e_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = e_10;
        t = Cons_2(t, d_67, w_14);
      }
    return(t);
  }
  t = w_14(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  f_15 = t;
  c_15 :
  if(((ATgetType(f_15) == AT_LIST) && ((ATermList) f_15 != ATempty)))
    {
      d_15 = ATgetFirst((ATermList) f_15);
      e_15 = (ATerm) ATgetNext((ATermList) f_15);
      {
        ATerm i_15 = NULL;
        t = not_null(e_15);
        {
          ATerm k_10;
          k_10 = t;
          {
            ATerm j_15 = NULL,l_15 = NULL,n_15 = NULL;
            ATerm n_10;
            n_10 = t;
            {
              ATerm k_15 = NULL;
              t = i_0(t);
              {
                k_15 = t;
                if(((j_15 != NULL) && (j_15 != k_15)))
                  _fail(k_15);
                else
                  j_15 = k_15;
              }
            }
            t = n_10;
            {
              ATerm m_15 = NULL;
              t = not_null(d_15);
              {
                t = h_0(t);
                {
                  m_15 = t;
                  if(((l_15 != NULL) && (l_15 != m_15)))
                    _fail(m_15);
                  else
                    l_15 = m_15;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_15)), not_null(l_15));
                {
                  n_15 = t;
                  if(((i_15 != NULL) && (i_15 != n_15)))
                    _fail(n_15);
                  else
                    i_15 = n_15;
                }
              }
            }
          }
          t = k_10;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(i_15);
              return(t);
            }
            t = reverse_acc_2(t, h_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) f_15 == ATempty))
        {
          {
            t = term_o_10;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_45 (ATerm))
{
  ATerm y_15 = NULL,z_15 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym_Program_1))
    {
      z_15 = ATgetArgument(y_15, 0);
      {
        ATerm e_16 = NULL,i_16 = NULL;
        ATerm f_16 = NULL;
        t = SSLgetAnnotations(not_null(y_15));
        {
          f_16 = t;
          if(((e_16 != NULL) && (e_16 != f_16)))
            _fail(f_16);
          else
            e_16 = f_16;
        }
        {
          t = not_null(z_15);
          {
            ATerm p_16 = NULL;
            t = c_45(t);
            {
              i_16 = t;
              {
                ATerm q_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_16)), not_null(e_16));
                {
                  q_16 = t;
                  if(((p_16 != NULL) && (p_16 != q_16)))
                    _fail(q_16);
                  else
                    p_16 = q_16;
                }
                t = not_null(p_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm z_16 = NULL;
  ATerm s_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      ATerm a_17 = NULL;
      a_17 = t;
      if(((z_16 != NULL) && (z_16 != a_17)))
        _fail(a_17);
      else
        z_16 = a_17;
      return(t);
    }
    t = Program_1(t, t_2);
    return(t);
  }
  t = option_defined_1(t, s_2);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm b_17 = NULL;
      ATerm c_17 = NULL;
      t = term_o_10;
      {
        ATerm w_2 (ATerm t)
        {
          t = not_null(z_16);
          return(t);
        }
        t = short_description_1(t, w_2);
        {
          t = concat_strings_0(t);
          {
            c_17 = t;
            if(((b_17 != NULL) && (b_17 != c_17)))
              _fail(c_17);
            else
              b_17 = c_17;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATempty, not_null(b_17)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, u_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATempty, term_p_10));
      {
        t = printnl_0(t);
        {
          t = term_s_10;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm d_17 = NULL;
                  d_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_17)), term_u_10));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_2);
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm f_17 = NULL;
                    ATerm g_17 = NULL;
                    t = term_o_10;
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = not_null(z_16);
                        return(t);
                      }
                      t = long_description_1(t, c_3);
                      {
                        t = concat_strings_0(t);
                        {
                          g_17 = t;
                          if(((f_17 != NULL) && (f_17 != g_17)))
                            _fail(g_17);
                          else
                            f_17 = g_17;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_17)), term_v_10));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_3);
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
ATerm printnl_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      {
        ATerm w_10;
        w_10 = t;
        t = SSL_printnl(not_null(o_17), not_null(p_17));
        t = w_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_45 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_Undefined_1))
    {
      z_17 = ATgetArgument(y_17, 0);
      {
        ATerm c_18 = NULL,e_18 = NULL;
        ATerm d_18 = NULL;
        t = SSLgetAnnotations(not_null(y_17));
        {
          d_18 = t;
          if(((c_18 != NULL) && (c_18 != d_18)))
            _fail(d_18);
          else
            c_18 = d_18;
        }
        {
          t = not_null(z_17);
          {
            ATerm g_18 = NULL;
            t = d_45(t);
            {
              e_18 = t;
              {
                ATerm h_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_18)), not_null(c_18));
                {
                  h_18 = t;
                  if(((g_18 != NULL) && (g_18 != h_18)))
                    _fail(h_18);
                  else
                    g_18 = h_18;
                }
                t = not_null(g_18);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm m_18 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_67, _id);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = Cons_2(t, _id, m_18);
      }
    return(t);
  }
  t = m_18(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_55 (ATerm))
{
  t = fetch_1(t, z_55);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym_Help_0))
    {
      ATerm t_18 = NULL,v_18 = NULL;
      ATerm z_10;
      z_10 = t;
      {
        ATerm u_18 = NULL;
        t = SSLgetAnnotations(not_null(r_18));
        {
          u_18 = t;
          if(((t_18 != NULL) && (t_18 != u_18)))
            _fail(u_18);
          else
            t_18 = u_18;
        }
      }
      t = z_10;
      {
        ATerm w_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_18));
        {
          w_18 = t;
          if(((v_18 != NULL) && (v_18 != w_18)))
            _fail(w_18);
          else
            v_18 = w_18;
        }
        t = not_null(v_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm a_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_75(t);
      LocalPopChoice(f_11);
    }
  else
    {
      t = a_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym__2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      t = SSL_table_get(not_null(d_19), not_null(e_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,a_20 = NULL,b_20 = NULL;
  s_19 = t;
  q_19 :
  if(match_cons(s_19, sym__3))
    {
      t_19 = ATgetArgument(s_19, 0);
      a_20 = ATgetArgument(s_19, 1);
      b_20 = ATgetArgument(s_19, 2);
      {
        ATerm g_11;
        g_11 = t;
        {
          ATerm i_20 = NULL;
          ATerm j_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_19), not_null(a_20));
          {
            ATerm h_11 = t;
            int i_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_11);
              }
            else
              {
                t = h_11;
                t = (ATerm) ATempty;
              }
            {
              j_20 = t;
              if(((i_20 != NULL) && (i_20 != j_20)))
                _fail(j_20);
              else
                i_20 = j_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_19), not_null(a_20), (ATerm) ATinsert(CheckATermList(not_null(i_20)), not_null(b_20)));
            t = table_put_0(t);
          }
        }
        t = g_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm n_20 = NULL;
  ATerm o_20 = NULL;
  t = term_o_10;
  {
    t = z_54(t);
    {
      o_20 = t;
      if(((n_20 != NULL) && (n_20 != o_20)))
        _fail(o_20);
      else
        n_20 = o_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_10, term_r_10, not_null(n_20));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  w_20 :
  if(match_string(y_20, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_20) == AT_LIST) && ((ATermList) y_20 != ATempty)))
        {
          z_20 = ATgetFirst((ATermList) y_20);
          a_21 = (ATerm) ATgetNext((ATermList) y_20);
          {
            ATerm d_21 = NULL;
            ATerm n_11;
            n_11 = t;
            {
              t = not_null(z_20);
              t = a_0(t);
            }
            t = n_11;
            {
              ATerm e_21 = NULL;
              t = term_o_10;
              {
                t = b_0(t);
                {
                  e_21 = t;
                  if(((d_21 != NULL) && (d_21 != e_21)))
                    _fail(e_21);
                  else
                    d_21 = e_21;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_21)), not_null(d_21));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm j_21 = NULL;
    j_21 = t;
    i_21 :
    if(!(match_string(j_21, "--help")))
      {
        if(!(match_string(j_21, "-h")))
          {
            if(!(match_string(j_21, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_o_11;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_p_11;
    return(t);
  }
  t = Option_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(((ATgetType(m_21) == AT_LIST) && ((ATermList) m_21 != ATempty)))
    {
      n_21 = ATgetFirst((ATermList) m_21);
      o_21 = (ATerm) ATgetNext((ATermList) m_21);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_21)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_21)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_49 (ATerm), ATerm t_49 (ATerm))
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  x_21 :
  if(((ATgetType(y_21) == AT_LIST) && ((ATermList) y_21 != ATempty)))
    {
      z_21 = ATgetFirst((ATermList) y_21);
      a_22 = (ATerm) ATgetNext((ATermList) y_21);
      {
        ATerm e_22 = NULL,g_22 = NULL;
        ATerm f_22 = NULL;
        t = SSLgetAnnotations(not_null(y_21));
        {
          f_22 = t;
          if(((e_22 != NULL) && (e_22 != f_22)))
            _fail(f_22);
          else
            e_22 = f_22;
        }
        {
          t = not_null(z_21);
          {
            ATerm i_22 = NULL;
            t = s_49(t);
            {
              g_22 = t;
              {
                t = not_null(a_22);
                {
                  ATerm s_22 = NULL;
                  t = t_49(t);
                  {
                    i_22 = t;
                    {
                      ATerm t_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_22)), not_null(g_22)), not_null(e_22));
                      {
                        t_22 = t;
                        if(((s_22 != NULL) && (s_22 != t_22)))
                          _fail(t_22);
                        else
                          s_22 = t_22;
                      }
                      t = not_null(s_22);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  e_23 :
  if(((ATermList) f_23 == ATempty))
    {
      {
        ATerm h_23 = NULL,j_23 = NULL;
        ATerm q_11;
        q_11 = t;
        {
          ATerm i_23 = NULL;
          t = SSLgetAnnotations(not_null(f_23));
          {
            i_23 = t;
            if(((h_23 != NULL) && (h_23 != i_23)))
              _fail(i_23);
            else
              h_23 = i_23;
          }
        }
        t = q_11;
        {
          ATerm k_23 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_23));
          {
            k_23 = t;
            if(((j_23 != NULL) && (j_23 != k_23)))
              _fail(k_23);
            else
              j_23 = k_23;
          }
          t = not_null(j_23);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  p_23 :
  if(match_cons(q_23, sym__2))
    {
      r_23 = ATgetArgument(q_23, 0);
      s_23 = ATgetArgument(q_23, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_8, not_null(r_23), not_null(s_23));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm r_11;
  r_11 = t;
  {
    ATerm k_3 (ATerm t)
    {
      t = term_s_11;
      t = x_54(t);
      return(t);
    }
    t = try_1(t, k_3);
  }
  t = r_11;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm a_24 = NULL;
      ATerm t_11;
      t_11 = t;
      {
        ATerm y_23 = NULL;
        ATerm z_23 = NULL;
        z_23 = t;
        if(((y_23 != NULL) && (y_23 != z_23)))
          _fail(z_23);
        else
          y_23 = z_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(y_23));
          t = set_config_0(t);
        }
      }
      t = t_11;
      {
        ATerm b_24 = NULL;
        b_24 = t;
        if(((a_24 != NULL) && (a_24 != b_24)))
          _fail(b_24);
        else
          a_24 = b_24;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_24));
      }
      return(t);
    }
    ATerm m_3 (ATerm t)
    {
      ATerm y_11 = t;
      int z_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              {
                t = x_54(t);
                t = Cons_2(t, _id, m_3);
              }
            }
          LocalPopChoice(z_11);
        }
      else
        {
          t = y_11;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_3, m_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  ATerm c_12;
  c_12 = t;
  {
    ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
    k_24 = t;
    g_24 :
    if(match_cons(k_24, sym__3))
      {
        l_24 = ATgetArgument(k_24, 0);
        m_24 = ATgetArgument(k_24, 1);
        n_24 = ATgetArgument(k_24, 2);
        {
          if(((h_24 != NULL) && (h_24 != l_24)))
            _fail(l_24);
          else
            h_24 = l_24;
          {
            if(((i_24 != NULL) && (i_24 != m_24)))
              _fail(m_24);
            else
              i_24 = m_24;
            {
              if(((j_24 != NULL) && (j_24 != n_24)))
                _fail(n_24);
              else
                j_24 = n_24;
              t = SSL_table_put(not_null(h_24), not_null(i_24), not_null(j_24));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_54 (ATerm))
{
  ATerm q_24 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    t = term_i_12;
    t = table_put_0(t);
  }
  t = h_12;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm n_12 = t;
      int o_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_54(t);
          LocalPopChoice(o_12);
        }
      else
        {
          t = n_12;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_3);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm p_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_t_12;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_12);
          }
        else
          {
            t = p_12;
            {
              ATerm s_3 (ATerm t)
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm r_24 = NULL;
                  r_24 = t;
                  if(((q_24 != NULL) && (q_24 != r_24)))
                    _fail(r_24);
                  else
                    q_24 = r_24;
                  return(t);
                }
                t = Undefined_1(t, t_3);
                return(t);
              }
              t = option_defined_1(t, s_3);
              {
                ATerm v_12;
                v_12 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), term_x_12));
                  t = printnl_0(t);
                }
                t = v_12;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_4;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_3);
      {
        ATerm z_12;
        z_12 = t;
        {
          t = term_q_10;
          t = table_destroy_0(t);
        }
        t = z_12;
      }
    }
  }
  return(t);
}
ATerm xtc_register_0 (ATerm t)
{
  ATerm b_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parse_options_1(t, register_options_0);
      {
        ATerm u_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            t = term_v_13;
            return(t);
          }
          t = say_1(t, z_3);
          return(t);
        }
        t = if_verbose1_1(t, u_3);
        {
          t = register_it_0(t);
          {
            ATerm a_4 (ATerm t)
            {
              ATerm b_4 (ATerm t)
              {
                t = term_w_13;
                return(t);
              }
              t = say_1(t, b_4);
              return(t);
            }
            t = if_verbose1_1(t, a_4);
            {
              t = term_t_12;
              t = exit_0(t);
            }
          }
        }
      }
      LocalPopChoice(u_13);
    }
  else
    {
      t = b_13;
      {
        ATerm c_4 (ATerm t)
        {
          t = term_x_13;
          return(t);
        }
        t = debug_1(t, c_4);
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_register_0(t);
  return(t);
}

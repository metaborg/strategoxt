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
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_o_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_d_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_s_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_c_8;
ATerm term_y_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_y_6;
ATerm term_m_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_q_5;
ATerm term_n_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_a_5;
ATerm term_w_4;
ATerm term_s_4;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_r_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--r", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_l_7);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r rep | --repository rep     Tool repository", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_f_6, term_q_7);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --all                    List all registered tools", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t name | --tool name         Tool to register", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-V num | --Version num        Version of tool\n", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_w_5, term_q_7);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-l | --location               Give location (only) of tool", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i       Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_r_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__3, term_q_11, term_r_11, (ATerm) ATempty);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Options: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Read repositories: ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("done: ", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_57 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm g_50 (ATerm));
ATerm version_query_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm d_50 (ATerm));
ATerm tool_query_0 (ATerm);
ATerm print_0 (ATerm);
ATerm list_tool_0 (ATerm);
ATerm Tool_1 (ATerm, ATerm u_44 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm all_query_0 (ATerm);
ATerm answer_query_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm f_50 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm e_50 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm xtc_read_repository_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_get_repository_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm l_43 (ATerm), ATerm m_43 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm query_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_67 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_54 (ATerm));
ATerm map_1 (ATerm, ATerm g_67 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_54 (ATerm));
ATerm Program_1 (ATerm, ATerm f_45 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_55 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_49 (ATerm), ATerm w_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_55 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_54 (ATerm));
ATerm xtc_query_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  t = SSL_exit(not_null(f_1));
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm l_4;
  l_4 = t;
  {
    ATerm x_1 = NULL,z_1 = NULL;
    ATerm m_4;
    m_4 = t;
    {
      ATerm y_1 = NULL;
      t = t_57(t);
      {
        y_1 = t;
        if(((x_1 != NULL) && (x_1 != y_1)))
          _fail(y_1);
        else
          x_1 = y_1;
      }
    }
    t = m_4;
    {
      ATerm a_2 = NULL;
      a_2 = t;
      if(((z_1 != NULL) && (z_1 != a_2)))
        _fail(a_2);
      else
        z_1 = a_2;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_1)), not_null(x_1)));
        t = printnl_0(t);
      }
    }
  }
  t = l_4;
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm g_50 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    ATerm r_4;
    r_4 = t;
    {
      ATerm e_2 = NULL;
      ATerm f_2 = NULL;
      t = term_s_4;
      {
        t = get_config_0(t);
        {
          f_2 = t;
          if(((e_2 != NULL) && (e_2 != f_2)))
            _fail(f_2);
          else
            e_2 = f_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_2), term_w_4);
        t = geq_0(t);
      }
    }
    t = r_4;
    t = g_50(t);
    return(t);
  }
  t = try_1(t, c_0);
  return(t);
}
ATerm version_query_0 (ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL;
  ATerm z_4;
  z_4 = t;
  {
    ATerm n_2 = NULL;
    t = term_a_5;
    {
      t = get_config_0(t);
      {
        n_2 = t;
        if(((m_2 != NULL) && (m_2 != n_2)))
          _fail(n_2);
        else
          m_2 = n_2;
      }
    }
  }
  t = z_4;
  {
    ATerm d_0 (ATerm t)
    {
      ATerm q_2 = NULL,r_2 = NULL;
      q_2 = t;
      j_2 :
      if(match_cons(q_2, sym_Tool_1))
        {
          r_2 = ATgetArgument(q_2, 0);
          if(((o_2 != NULL) && (o_2 != r_2)))
            _fail(r_2);
          else
            o_2 = r_2;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    ATerm e_0 (ATerm t)
    {
      ATerm f_0 (ATerm t)
      {
        ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL;
        s_2 = t;
        l_2 :
        if(match_cons(s_2, sym__2))
          {
            t_2 = ATgetArgument(s_2, 0);
            u_2 = ATgetArgument(s_2, 1);
            {
              if(((m_2 != NULL) && (m_2 != t_2)))
                _fail(t_2);
              else
                m_2 = t_2;
              if(((p_2 != NULL) && (p_2 != u_2)))
                _fail(u_2);
              else
                p_2 = u_2;
            }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1(t, f_0);
      return(t);
    }
    t = _2(t, d_0, e_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(o_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_2), not_null(p_2))));
      t = list_tool_0(t);
    }
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm d_50 (ATerm))
{
  ATerm m_0 (ATerm t)
  {
    ATerm b_5;
    b_5 = t;
    {
      ATerm z_2 = NULL;
      ATerm a_3 = NULL;
      t = term_s_4;
      {
        t = get_config_0(t);
        {
          a_3 = t;
          if(((z_2 != NULL) && (z_2 != a_3)))
            _fail(a_3);
          else
            z_2 = a_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_2), term_c_5);
        t = geq_0(t);
      }
    }
    t = b_5;
    t = d_50(t);
    return(t);
  }
  t = try_1(t, m_0);
  return(t);
}
ATerm tool_query_0 (ATerm t)
{
  ATerm e_3 = NULL;
  t = term_d_5;
  {
    t = get_config_0(t);
    {
      ATerm n_0 (ATerm t)
      {
        ATerm f_3 = NULL;
        f_3 = t;
        {
          ATerm f_5 = t;
          int g_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_3 = NULL;
              ATerm o_0 (ATerm t)
              {
                ATerm p_0 (ATerm t)
                {
                  t = term_h_5;
                  return(t);
                }
                t = debug_1(t, p_0);
                return(t);
              }
              t = if_verbose3_1(t, o_0);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_3)));
                {
                  t = table_get_0(t);
                  {
                    h_3 = t;
                    {
                      if(((e_3 != NULL) && (e_3 != h_3)))
                        _fail(h_3);
                      else
                        e_3 = h_3;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, not_null(f_3)), not_null(e_3));
                        {
                          ATerm j_5 = t;
                          int l_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = version_query_0(t);
                              LocalPopChoice(l_5);
                            }
                          else
                            {
                              t = j_5;
                              t = list_tool_0(t);
                            }
                        }
                      }
                    }
                  }
                }
              }
              LocalPopChoice(g_5);
            }
          else
            {
              t = f_5;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATempty, term_q_5), not_null(f_3)));
                t = print_0(t);
              }
            }
        }
        return(t);
      }
      t = map_1(t, n_0);
    }
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
  m_3 = t;
  l_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      {
        ATerm r_5;
        r_5 = t;
        t = SSL_print(not_null(n_3), not_null(o_3));
        t = r_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_tool_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  x_3 = t;
  v_3 :
  if(match_cons(x_3, sym__2))
    {
      y_3 = ATgetArgument(x_3, 0);
      a_4 = ATgetArgument(x_3, 1);
      w_3 :
      if(match_cons(y_3, sym_Tool_1))
        {
          z_3 = ATgetArgument(y_3, 0);
          {
            t = not_null(a_4);
            {
              ATerm q_0 (ATerm t)
              {
                ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
                d_4 = t;
                u_3 :
                if(match_cons(d_4, sym__2))
                  {
                    e_4 = ATgetArgument(d_4, 0);
                    f_4 = ATgetArgument(d_4, 1);
                    {
                      ATerm s_5 = t;
                      int t_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_w_5;
                          {
                            t = get_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATempty, not_null(f_4)));
                              t = print_0(t);
                            }
                          }
                          LocalPopChoice(t_5);
                        }
                      else
                        {
                          t = s_5;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_6), not_null(f_4)), term_y_5), not_null(e_4)), term_x_5), not_null(z_3)));
                            t = print_0(t);
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
              t = map_1(t, q_0);
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
  return(t);
}
ATerm Tool_1 (ATerm t, ATerm u_44 (ATerm))
{
  ATerm p_4 = NULL,q_4 = NULL;
  p_4 = t;
  o_4 :
  if(match_cons(p_4, sym_Tool_1))
    {
      q_4 = ATgetArgument(p_4, 0);
      {
        ATerm t_4 = NULL,v_4 = NULL;
        ATerm u_4 = NULL;
        t = SSLgetAnnotations(not_null(p_4));
        {
          u_4 = t;
          if(((t_4 != NULL) && (t_4 != u_4)))
            _fail(u_4);
          else
            t_4 = u_4;
        }
        {
          t = not_null(q_4);
          {
            ATerm x_4 = NULL;
            t = u_44(t);
            {
              v_4 = t;
              {
                ATerm y_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Tool_1, not_null(v_4)), not_null(t_4));
                {
                  y_4 = t;
                  if(((x_4 != NULL) && (x_4 != y_4)))
                    _fail(y_4);
                  else
                    x_4 = y_4;
                }
                t = not_null(x_4);
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
ATerm table_keys_0 (ATerm t)
{
  ATerm e_5 = NULL;
  e_5 = t;
  t = SSL_table_keys(not_null(e_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm k_5 = NULL;
  k_5 = t;
  {
    t = table_keys_0(t);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm m_5 = NULL;
        ATerm o_5 = NULL;
        m_5 = t;
        {
          ATerm p_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), not_null(m_5));
          {
            t = table_get_0(t);
            {
              p_5 = t;
              if(((o_5 != NULL) && (o_5 != p_5)))
                _fail(p_5);
              else
                o_5 = p_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), not_null(o_5));
        }
        return(t);
      }
      t = map_1(t, r_0);
    }
  }
  return(t);
}
ATerm all_query_0 (ATerm t)
{
  t = term_f_6;
  {
    t = get_config_0(t);
    {
      t = term_i_5;
      {
        t = table_getlist_0(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = Tool_1(t, _id);
                return(t);
              }
              t = _2(t, u_0, _id);
              t = list_tool_0(t);
              return(t);
            }
            t = try_1(t, t_0);
            return(t);
          }
          t = map_1(t, s_0);
        }
      }
    }
  }
  return(t);
}
ATerm answer_query_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = all_query_0(t);
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      t = tool_query_0(t);
    }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm f_50 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm l_6;
    l_6 = t;
    {
      ATerm u_5 = NULL;
      ATerm v_5 = NULL;
      t = term_s_4;
      {
        t = get_config_0(t);
        {
          v_5 = t;
          if(((u_5 != NULL) && (u_5 != v_5)))
            _fail(v_5);
          else
            u_5 = v_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_5), term_m_6);
        t = geq_0(t);
      }
    }
    t = l_6;
    t = f_50(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym__2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      {
        t = not_null(d_6);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
            g_6 = t;
            z_5 :
            if(match_cons(g_6, sym__2))
              {
                h_6 = ATgetArgument(g_6, 0);
                i_6 = ATgetArgument(g_6, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_6), not_null(h_6), not_null(i_6));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_0);
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
  ATerm o_6 = NULL;
  o_6 = t;
  t = SSL_ReadFromFile(not_null(o_6));
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      {
        ATerm n_6;
        n_6 = t;
        {
          ATerm p_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_6), not_null(v_6));
              LocalPopChoice(q_6);
            }
          else
            {
              t = p_6;
              t = SSL_gtr(not_null(u_6), not_null(v_6));
            }
        }
        t = n_6;
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
  ATerm b_7 = NULL;
  ATerm r_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
      c_7 = t;
      a_7 :
      if(match_cons(c_7, sym__2))
        {
          d_7 = ATgetArgument(c_7, 0);
          e_7 = ATgetArgument(c_7, 1);
          {
            if(((b_7 != NULL) && (b_7 != d_7)))
              _fail(d_7);
            else
              b_7 = d_7;
            if(((b_7 != NULL) && (b_7 != e_7)))
              _fail(e_7);
            else
              b_7 = e_7;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_6);
    }
  else
    {
      t = r_6;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm e_50 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    ATerm x_6;
    x_6 = t;
    {
      ATerm h_7 = NULL;
      ATerm i_7 = NULL;
      t = term_s_4;
      {
        t = get_config_0(t);
        {
          i_7 = t;
          if(((h_7 != NULL) && (h_7 != i_7)))
            _fail(i_7);
          else
            h_7 = i_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), term_y_6);
        t = geq_0(t);
      }
    }
    t = x_6;
    t = e_50(t);
    return(t);
  }
  t = try_1(t, x_0);
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    ATerm z_6;
    z_6 = t;
    {
      ATerm p_7 = NULL;
      t = term_f_7;
      {
        p_7 = t;
        if(((o_7 != NULL) && (o_7 != p_7)))
          _fail(p_7);
        else
          o_7 = p_7;
      }
    }
    t = z_6;
    {
      t = SSL_open_file(not_null(m_7), not_null(o_7));
      t = SSL_close_file(not_null(m_7));
    }
  }
  return(t);
}
ATerm xtc_read_repository_0 (ATerm t)
{
  ATerm u_7 = NULL;
  ATerm w_7 = NULL;
  u_7 = t;
  {
    ATerm g_7 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(u_7)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_7;
      }
    {
      ATerm k_7;
      k_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_7, term_l_7, not_null(u_7));
        t = table_put_0(t);
      }
      t = k_7;
      {
        t = file_exists_0(t);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              t = term_n_7;
              return(t);
            }
            t = debug_1(t, z_0);
            return(t);
          }
          t = if_verbose4_1(t, y_0);
          {
            t = ReadFromFile_0(t);
            {
              ATerm x_7 = NULL;
              x_7 = t;
              if(((w_7 != NULL) && (w_7 != x_7)))
                _fail(x_7);
              else
                w_7 = x_7;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_j_7, not_null(w_7));
                {
                  t = table_putlist_0(t);
                  {
                    t = (ATerm) ATmakeAppl(sym__3, term_j_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(u_7)), term_q_7);
                    {
                      t = table_put_0(t);
                      {
                        ATerm a_1 (ATerm t)
                        {
                          t = term_s_7;
                          {
                            t = table_get_0(t);
                            {
                              ATerm b_1 (ATerm t)
                              {
                                t = try_1(t, xtc_read_repository_0);
                                return(t);
                              }
                              t = map_1(t, b_1);
                            }
                          }
                          return(t);
                        }
                        t = try_1(t, a_1);
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
ATerm getenv_0 (ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  t = SSL_getenv(not_null(b_8));
  return(t);
}
ATerm xtc_get_repository_0 (ATerm t)
{
  ATerm t_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_7;
      t = get_config_0(t);
      LocalPopChoice(v_7);
    }
  else
    {
      t = t_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_8;
            t = get_config_0(t);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            {
              ATerm d_8 = t;
              int e_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_g_8;
                  t = getenv_0(t);
                  LocalPopChoice(e_8);
                }
              else
                {
                  t = d_8;
                  t = XTC_REPOSITORY();
                }
            }
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm h_8;
  h_8 = t;
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_8;
        t = table_get_0(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          t = xtc_get_repository_0(t);
          t = xtc_read_repository_0(t);
        }
      }
  }
  t = h_8;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        t = term_s_8;
        return(t);
      }
      t = debug_1(t, d_1);
      return(t);
    }
    t = if_verbose5_1(t, c_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  t = SSL_string_to_int(not_null(f_8));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  n_8 = t;
  l_8 :
  if(match_string(n_8, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_8) == AT_LIST) && ((ATermList) n_8 != ATempty)))
        {
          o_8 = ATgetFirst((ATermList) n_8);
          p_8 = (ATerm) ATgetNext((ATermList) n_8);
          m_8 :
          if(((ATgetType(p_8) == AT_LIST) && ((ATermList) p_8 != ATempty)))
            {
              q_8 = ATgetFirst((ATermList) p_8);
              r_8 = (ATerm) ATgetNext((ATermList) p_8);
              {
                ATerm v_8 = NULL;
                ATerm t_8;
                t_8 = t;
                {
                  t = not_null(o_8);
                  t = j_0(t);
                }
                t = t_8;
                {
                  ATerm w_8 = NULL;
                  t = not_null(q_8);
                  {
                    t = k_0(t);
                    {
                      w_8 = t;
                      if(((v_8 != NULL) && (v_8 != w_8)))
                        _fail(w_8);
                      else
                        v_8 = w_8;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_8)), not_null(v_8));
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
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      {
        t = not_null(d_9);
        {
          ATerm e_1 (ATerm t)
          {
            t = not_null(e_9);
            return(t);
          }
          t = at_end_1(t, e_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm l_43 (ATerm), ATerm m_43 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm u_9 = NULL,w_9 = NULL;
        ATerm v_9 = NULL;
        t = SSLgetAnnotations(not_null(o_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        {
          t = not_null(p_9);
          {
            ATerm y_9 = NULL;
            t = l_43(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = m_43(t);
                  {
                    y_9 = t;
                    {
                      ATerm b_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_9), not_null(y_9)), not_null(u_9));
                      {
                        b_10 = t;
                        if(((a_10 != NULL) && (a_10 != b_10)))
                          _fail(b_10);
                        else
                          a_10 = b_10;
                      }
                      t = not_null(a_10);
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
  ATerm i_10 = NULL;
  i_10 = t;
  t = SSL_is_string(not_null(i_10));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = u_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_1);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
              r_10 = t;
              q_10 :
              if(match_cons(r_10, sym_Path_1))
                {
                  s_10 = ATgetArgument(r_10, 0);
                  t = not_null(s_10);
                }
              else
                {
                  if(match_cons(r_10, sym_Var_1))
                    {
                      s_10 = ATgetArgument(r_10, 0);
                      {
                        t = not_null(s_10);
                        {
                          ATerm a_9 = t;
                          int f_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(f_9);
                            }
                          else
                            {
                              t = a_9;
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = term_g_9;
                                  return(t);
                                }
                                t = debug_1(t, h_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_10, sym_Prefix_2))
                        {
                          s_10 = ATgetArgument(r_10, 0);
                          t_10 = ATgetArgument(r_10, 1);
                          {
                            ATerm y_10 = NULL,a_11 = NULL;
                            ATerm h_9;
                            h_9 = t;
                            {
                              ATerm z_10 = NULL;
                              t = not_null(s_10);
                              {
                                t = eval_config_0(t);
                                {
                                  z_10 = t;
                                  if(((y_10 != NULL) && (y_10 != z_10)))
                                    _fail(z_10);
                                  else
                                    y_10 = z_10;
                                }
                              }
                            }
                            t = h_9;
                            {
                              ATerm b_11 = NULL;
                              t = not_null(t_10);
                              {
                                t = eval_config_0(t);
                                {
                                  b_11 = t;
                                  if(((a_11 != NULL) && (a_11 != b_11)))
                                    _fail(b_11);
                                  else
                                    a_11 = b_11;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), not_null(a_11));
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
  ATerm j_11 = NULL;
  j_11 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_9, not_null(j_11));
    {
      t = table_get_0(t);
      {
        ATerm i_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_9;
            j_9 = t;
            {
              ATerm l_11 = NULL;
              ATerm m_11 = NULL;
              m_11 = t;
              if(((l_11 != NULL) && (l_11 != m_11)))
                _fail(m_11);
              else
                l_11 = m_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_9, not_null(j_11), not_null(l_11));
                t = table_put_0(t);
              }
            }
            t = j_9;
          }
          return(t);
        }
        t = try_1(t, i_1);
      }
    }
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym__2))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      {
        ATerm y_11 = NULL;
        ATerm z_11 = NULL,b_12 = NULL;
        ATerm a_12 = NULL;
        t = not_null(u_11);
        {
          ATerm k_9 = t;
          int l_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(l_9);
            }
          else
            {
              t = k_9;
              t = (ATerm) ATempty;
            }
          {
            a_12 = t;
            if(((z_11 != NULL) && (z_11 != a_12)))
              _fail(a_12);
            else
              z_11 = a_12;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(z_11));
          {
            t = conc_0(t);
            {
              b_12 = t;
              if(((y_11 != NULL) && (y_11 != b_12)))
                _fail(b_12);
              else
                y_11 = b_12;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_9, not_null(u_11), not_null(y_11));
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
ATerm query_options_0 (ATerm t)
{
  ATerm m_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm p_12 = NULL;
        p_12 = t;
        f_12 :
        if(!(match_string(p_12, "-r")))
          {
            if(!(match_string(p_12, "--repository")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        ATerm s_9;
        s_9 = t;
        {
          ATerm q_12 = NULL;
          ATerm r_12 = NULL;
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(q_12));
            t = set_config_0(t);
          }
        }
        t = s_9;
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_x_9;
        return(t);
      }
      t = ArgOption_3(t, j_1, k_1, l_1);
      LocalPopChoice(r_9);
    }
  else
    {
      t = m_9;
      {
        ATerm z_9 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm s_12 = NULL;
              s_12 = t;
              h_12 :
              if(!(match_string(s_12, "-a")))
                {
                  if(!(match_string(s_12, "--all")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm d_10;
              d_10 = t;
              {
                t = term_e_10;
                t = set_config_0(t);
              }
              t = d_10;
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = term_f_10;
              return(t);
            }
            t = Option_3(t, m_1, n_1, o_1);
            LocalPopChoice(c_10);
          }
        else
          {
            t = z_9;
            {
              ATerm g_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_1 (ATerm t)
                  {
                    ATerm t_12 = NULL;
                    t_12 = t;
                    i_12 :
                    if(!(match_string(t_12, "-t")))
                      {
                        if(!(match_string(t_12, "--tool")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm q_1 (ATerm t)
                  {
                    ATerm j_10;
                    j_10 = t;
                    {
                      ATerm u_12 = NULL;
                      ATerm v_12 = NULL;
                      v_12 = t;
                      if(((u_12 != NULL) && (u_12 != v_12)))
                        _fail(v_12);
                      else
                        u_12 = v_12;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_d_5, (ATerm) ATinsert(ATempty, not_null(u_12)));
                        t = extend_config_0(t);
                      }
                    }
                    t = j_10;
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_k_10;
                    return(t);
                  }
                  t = ArgOption_3(t, p_1, q_1, r_1);
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = g_10;
                  {
                    ATerm l_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_1 (ATerm t)
                        {
                          ATerm w_12 = NULL;
                          w_12 = t;
                          k_12 :
                          if(!(match_string(w_12, "-V")))
                            {
                              if(!(match_string(w_12, "--Version")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm t_1 (ATerm t)
                        {
                          ATerm n_10;
                          n_10 = t;
                          {
                            ATerm x_12 = NULL;
                            ATerm y_12 = NULL;
                            y_12 = t;
                            if(((x_12 != NULL) && (x_12 != y_12)))
                              _fail(y_12);
                            else
                              x_12 = y_12;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_a_5, not_null(x_12));
                              t = set_config_0(t);
                            }
                          }
                          t = n_10;
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          t = term_o_10;
                          return(t);
                        }
                        t = ArgOption_3(t, s_1, t_1, u_1);
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = l_10;
                        {
                          ATerm p_10 = t;
                          int u_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_1 (ATerm t)
                              {
                                ATerm z_12 = NULL;
                                z_12 = t;
                                m_12 :
                                if(!(match_string(z_12, "-l")))
                                  {
                                    if(!(match_string(z_12, "--location")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm w_1 (ATerm t)
                              {
                                ATerm v_10;
                                v_10 = t;
                                {
                                  t = term_w_10;
                                  t = set_config_0(t);
                                }
                                t = v_10;
                                return(t);
                              }
                              ATerm b_2 (ATerm t)
                              {
                                t = term_x_10;
                                return(t);
                              }
                              t = Option_3(t, v_1, w_1, b_2);
                              LocalPopChoice(u_10);
                            }
                          else
                            {
                              t = p_10;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  ATerm a_13 = NULL;
                                  a_13 = t;
                                  n_12 :
                                  if(!(match_string(a_13, "--verbose")))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                ATerm d_2 (ATerm t)
                                {
                                  ATerm c_11;
                                  c_11 = t;
                                  {
                                    ATerm b_13 = NULL;
                                    ATerm c_13 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      c_13 = t;
                                      if(((b_13 != NULL) && (b_13 != c_13)))
                                        _fail(c_13);
                                      else
                                        b_13 = c_13;
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_s_4, not_null(b_13));
                                      t = set_config_0(t);
                                    }
                                  }
                                  t = c_11;
                                  return(t);
                                }
                                ATerm g_2 (ATerm t)
                                {
                                  t = term_d_11;
                                  return(t);
                                }
                                t = ArgOption_3(t, c_2, d_2, g_2);
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
  ATerm i_13 = NULL;
  i_13 = t;
  t = SSL_table_destroy(not_null(i_13));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  t = SSL_implode_string(not_null(m_13));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_67 (ATerm))
{
  ATerm p_13 (ATerm t)
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_13);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          t = Nil_0(t);
          t = v_67(t);
        }
      }
    return(t);
  }
  t = p_13(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
        s_13 = t;
        r_13 :
        if(((ATgetType(s_13) == AT_LIST) && ((ATermList) s_13 != ATempty)))
          {
            t_13 = ATgetFirst((ATermList) s_13);
            u_13 = (ATerm) ATgetNext((ATermList) s_13);
            {
              t = not_null(t_13);
              {
                ATerm h_2 (ATerm t)
                {
                  t = not_null(u_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_2);
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
  ATerm a_14 = NULL;
  a_14 = t;
  t = SSL_explode_string(not_null(a_14));
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
ATerm long_description_1 (ATerm t, ATerm y_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm d_14 (ATerm t)
  {
    ATerm i_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = i_11;
        t = Cons_2(t, g_67, d_14);
      }
    return(t);
  }
  t = d_14(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  m_14 = t;
  j_14 :
  if(((ATgetType(m_14) == AT_LIST) && ((ATermList) m_14 != ATempty)))
    {
      k_14 = ATgetFirst((ATermList) m_14);
      l_14 = (ATerm) ATgetNext((ATermList) m_14);
      {
        ATerm p_14 = NULL;
        t = not_null(l_14);
        {
          ATerm n_11;
          n_11 = t;
          {
            ATerm q_14 = NULL,s_14 = NULL,u_14 = NULL;
            ATerm o_11;
            o_11 = t;
            {
              ATerm r_14 = NULL;
              t = i_0(t);
              {
                r_14 = t;
                if(((q_14 != NULL) && (q_14 != r_14)))
                  _fail(r_14);
                else
                  q_14 = r_14;
              }
            }
            t = o_11;
            {
              ATerm t_14 = NULL;
              t = not_null(k_14);
              {
                t = h_0(t);
                {
                  t_14 = t;
                  if(((s_14 != NULL) && (s_14 != t_14)))
                    _fail(t_14);
                  else
                    s_14 = t_14;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_14)), not_null(s_14));
                {
                  u_14 = t;
                  if(((p_14 != NULL) && (p_14 != u_14)))
                    _fail(u_14);
                  else
                    p_14 = u_14;
                }
              }
            }
          }
          t = n_11;
          {
            ATerm i_2 (ATerm t)
            {
              t = not_null(p_14);
              return(t);
            }
            t = reverse_acc_2(t, h_0, i_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) m_14 == ATempty))
        {
          {
            t = term_q_7;
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
  ATerm k_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_45 (ATerm))
{
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_Program_1))
    {
      g_15 = ATgetArgument(f_15, 0);
      {
        ATerm k_15 = NULL,m_15 = NULL;
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(f_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
        {
          t = not_null(g_15);
          {
            ATerm o_15 = NULL;
            t = f_45(t);
            {
              m_15 = t;
              {
                ATerm p_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_15)), not_null(k_15));
                {
                  p_15 = t;
                  if(((o_15 != NULL) && (o_15 != p_15)))
                    _fail(p_15);
                  else
                    o_15 = p_15;
                }
                t = not_null(o_15);
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
  ATerm z_15 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      ATerm a_16 = NULL;
      a_16 = t;
      if(((z_15 != NULL) && (z_15 != a_16)))
        _fail(a_16);
      else
        z_15 = a_16;
      return(t);
    }
    t = Program_1(t, w_2);
    return(t);
  }
  t = option_defined_1(t, v_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm d_16 = NULL;
      ATerm e_16 = NULL;
      t = term_q_7;
      {
        ATerm y_2 (ATerm t)
        {
          t = not_null(z_15);
          return(t);
        }
        t = short_description_1(t, y_2);
        {
          t = concat_strings_0(t);
          {
            e_16 = t;
            if(((d_16 != NULL) && (d_16 != e_16)))
              _fail(e_16);
            else
              d_16 = e_16;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_4, (ATerm) ATinsert(ATempty, not_null(d_16)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_4, (ATerm) ATinsert(ATempty, term_p_11));
      {
        t = printnl_0(t);
        {
          t = term_w_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm f_16 = NULL;
                  f_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_16)), term_x_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_3);
                {
                  ATerm c_3 (ATerm t)
                  {
                    ATerm j_16 = NULL;
                    ATerm p_16 = NULL;
                    t = term_q_7;
                    {
                      ATerm d_3 (ATerm t)
                      {
                        t = not_null(z_15);
                        return(t);
                      }
                      t = long_description_1(t, d_3);
                      {
                        t = concat_strings_0(t);
                        {
                          p_16 = t;
                          if(((j_16 != NULL) && (j_16 != p_16)))
                            _fail(p_16);
                          else
                            j_16 = p_16;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_16)), term_c_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_3);
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
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym__2))
    {
      x_16 = ATgetArgument(w_16, 0);
      y_16 = ATgetArgument(w_16, 1);
      {
        ATerm d_12;
        d_12 = t;
        t = SSL_printnl(not_null(x_16), not_null(y_16));
        t = d_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_45 (ATerm))
{
  ATerm h_17 = NULL,i_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym_Undefined_1))
    {
      i_17 = ATgetArgument(h_17, 0);
      {
        ATerm l_17 = NULL,n_17 = NULL;
        ATerm m_17 = NULL;
        t = SSLgetAnnotations(not_null(h_17));
        {
          m_17 = t;
          if(((l_17 != NULL) && (l_17 != m_17)))
            _fail(m_17);
          else
            l_17 = m_17;
        }
        {
          t = not_null(i_17);
          {
            ATerm p_17 = NULL;
            t = g_45(t);
            {
              n_17 = t;
              {
                ATerm q_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_17)), not_null(l_17));
                {
                  q_17 = t;
                  if(((p_17 != NULL) && (p_17 != q_17)))
                    _fail(q_17);
                  else
                    p_17 = q_17;
                }
                t = not_null(p_17);
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
ATerm fetch_1 (ATerm t, ATerm p_67 (ATerm))
{
  ATerm v_17 (ATerm t)
  {
    ATerm e_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_67, _id);
        LocalPopChoice(g_12);
      }
    else
      {
        t = e_12;
        t = Cons_2(t, _id, v_17);
      }
    return(t);
  }
  t = v_17(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_56 (ATerm))
{
  t = fetch_1(t, c_56);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_Help_0))
    {
      ATerm c_18 = NULL,e_18 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm d_18 = NULL;
        t = SSLgetAnnotations(not_null(a_18));
        {
          d_18 = t;
          if(((c_18 != NULL) && (c_18 != d_18)))
            _fail(d_18);
          else
            c_18 = d_18;
        }
      }
      t = j_12;
      {
        ATerm f_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_18));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        t = not_null(e_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm l_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_76(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = l_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      t = SSL_table_get(not_null(m_18), not_null(n_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym__3))
    {
      v_18 = ATgetArgument(u_18, 0);
      w_18 = ATgetArgument(u_18, 1);
      x_18 = ATgetArgument(u_18, 2);
      {
        ATerm d_13;
        d_13 = t;
        {
          ATerm b_19 = NULL;
          ATerm c_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), not_null(w_18));
          {
            ATerm e_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_13);
              }
            else
              {
                t = e_13;
                t = (ATerm) ATempty;
              }
            {
              c_19 = t;
              if(((b_19 != NULL) && (b_19 != c_19)))
                _fail(c_19);
              else
                b_19 = c_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_18), not_null(w_18), (ATerm) ATinsert(CheckATermList(not_null(b_19)), not_null(x_18)));
            t = table_put_0(t);
          }
        }
        t = d_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_55 (ATerm))
{
  ATerm g_19 = NULL;
  ATerm h_19 = NULL;
  t = term_q_7;
  {
    t = c_55(t);
    {
      h_19 = t;
      if(((g_19 != NULL) && (g_19 != h_19)))
        _fail(h_19);
      else
        g_19 = h_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_11, term_r_11, not_null(g_19));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_20 = NULL,b_20 = NULL,f_20 = NULL;
  a_20 = t;
  t_19 :
  if(match_string(a_20, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(a_20) == AT_LIST) && ((ATermList) a_20 != ATempty)))
        {
          b_20 = ATgetFirst((ATermList) a_20);
          f_20 = (ATerm) ATgetNext((ATermList) a_20);
          {
            ATerm i_20 = NULL;
            ATerm g_13;
            g_13 = t;
            {
              t = not_null(b_20);
              t = a_0(t);
            }
            t = g_13;
            {
              ATerm j_20 = NULL;
              t = term_q_7;
              {
                t = b_0(t);
                {
                  j_20 = t;
                  if(((i_20 != NULL) && (i_20 != j_20)))
                    _fail(j_20);
                  else
                    i_20 = j_20;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_20)), not_null(i_20));
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
  ATerm g_3 (ATerm t)
  {
    ATerm o_20 = NULL;
    o_20 = t;
    n_20 :
    if(!(match_string(o_20, "--help")))
      {
        if(!(match_string(o_20, "-h")))
          {
            if(!(match_string(o_20, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_j_13;
    return(t);
  }
  t = Option_3(t, g_3, i_3, j_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(((ATgetType(r_20) == AT_LIST) && ((ATermList) r_20 != ATempty)))
    {
      s_20 = ATgetFirst((ATermList) r_20);
      t_20 = (ATerm) ATgetNext((ATermList) r_20);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_20)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_20)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_49 (ATerm), ATerm w_49 (ATerm))
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  d_21 :
  if(((ATgetType(e_21) == AT_LIST) && ((ATermList) e_21 != ATempty)))
    {
      f_21 = ATgetFirst((ATermList) e_21);
      g_21 = (ATerm) ATgetNext((ATermList) e_21);
      {
        ATerm k_21 = NULL,m_21 = NULL;
        ATerm l_21 = NULL;
        t = SSLgetAnnotations(not_null(e_21));
        {
          l_21 = t;
          if(((k_21 != NULL) && (k_21 != l_21)))
            _fail(l_21);
          else
            k_21 = l_21;
        }
        {
          t = not_null(f_21);
          {
            ATerm o_21 = NULL;
            t = v_49(t);
            {
              m_21 = t;
              {
                t = not_null(g_21);
                {
                  ATerm q_21 = NULL;
                  t = w_49(t);
                  {
                    o_21 = t;
                    {
                      ATerm r_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_21)), not_null(m_21)), not_null(k_21));
                      {
                        r_21 = t;
                        if(((q_21 != NULL) && (q_21 != r_21)))
                          _fail(r_21);
                        else
                          q_21 = r_21;
                      }
                      t = not_null(q_21);
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
  ATerm b_22 = NULL;
  b_22 = t;
  a_22 :
  if(((ATermList) b_22 == ATempty))
    {
      {
        ATerm d_22 = NULL,f_22 = NULL;
        ATerm k_13;
        k_13 = t;
        {
          ATerm e_22 = NULL;
          t = SSLgetAnnotations(not_null(b_22));
          {
            e_22 = t;
            if(((d_22 != NULL) && (d_22 != e_22)))
              _fail(e_22);
            else
              d_22 = e_22;
          }
        }
        t = k_13;
        {
          ATerm g_22 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_22));
          {
            g_22 = t;
            if(((f_22 != NULL) && (f_22 != g_22)))
              _fail(g_22);
            else
              f_22 = g_22;
          }
          t = not_null(f_22);
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
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  t_22 :
  if(match_cons(u_22, sym__2))
    {
      v_22 = ATgetArgument(u_22, 0);
      w_22 = ATgetArgument(u_22, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_9, not_null(v_22), not_null(w_22));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm l_13;
  l_13 = t;
  {
    ATerm k_3 (ATerm t)
    {
      t = term_n_13;
      t = a_55(t);
      return(t);
    }
    t = try_1(t, k_3);
  }
  t = l_13;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm g_23 = NULL;
      ATerm o_13;
      o_13 = t;
      {
        ATerm e_23 = NULL;
        ATerm f_23 = NULL;
        f_23 = t;
        if(((e_23 != NULL) && (e_23 != f_23)))
          _fail(f_23);
        else
          e_23 = f_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_13, not_null(e_23));
          t = set_config_0(t);
        }
      }
      t = o_13;
      {
        ATerm h_23 = NULL;
        h_23 = t;
        if(((g_23 != NULL) && (g_23 != h_23)))
          _fail(h_23);
        else
          g_23 = h_23;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_23));
      }
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              {
                t = a_55(t);
                t = Cons_2(t, _id, q_3);
              }
            }
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_3, q_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
    q_23 = t;
    m_23 :
    if(match_cons(q_23, sym__3))
      {
        r_23 = ATgetArgument(q_23, 0);
        s_23 = ATgetArgument(q_23, 1);
        t_23 = ATgetArgument(q_23, 2);
        {
          if(((n_23 != NULL) && (n_23 != r_23)))
            _fail(r_23);
          else
            n_23 = r_23;
          {
            if(((o_23 != NULL) && (o_23 != s_23)))
              _fail(s_23);
            else
              o_23 = s_23;
            {
              if(((p_23 != NULL) && (p_23 != t_23)))
                _fail(t_23);
              else
                p_23 = t_23;
              t = SSL_table_put(not_null(n_23), not_null(o_23), not_null(p_23));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm w_23 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    t = term_c_14;
    t = table_put_0(t);
  }
  t = b_14;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_54(t);
          LocalPopChoice(f_14);
        }
      else
        {
          t = e_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_3);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_14;
                t = exit_0(t);
              }
            }
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            {
              ATerm t_3 (ATerm t)
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm x_23 = NULL;
                  x_23 = t;
                  if(((w_23 != NULL) && (w_23 != x_23)))
                    _fail(x_23);
                  else
                    w_23 = x_23;
                  return(t);
                }
                t = Undefined_1(t, b_4);
                return(t);
              }
              t = option_defined_1(t, t_3);
              {
                ATerm n_14;
                n_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_23)), term_o_14));
                  t = printnl_0(t);
                }
                t = n_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_14;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_3);
      {
        ATerm w_14;
        w_14 = t;
        {
          t = term_q_11;
          t = table_destroy_0(t);
        }
        t = w_14;
      }
    }
  }
  return(t);
}
ATerm xtc_query_0 (ATerm t)
{
  t = parse_options_1(t, query_options_0);
  {
    ATerm c_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = term_x_14;
        return(t);
      }
      t = debug_1(t, g_4);
      return(t);
    }
    t = if_verbose6_1(t, c_4);
    {
      t = xtc_load_0(t);
      {
        ATerm h_4 (ATerm t)
        {
          ATerm i_4 (ATerm t)
          {
            t = term_y_14;
            return(t);
          }
          t = debug_1(t, i_4);
          return(t);
        }
        t = if_verbose6_1(t, h_4);
        {
          t = answer_query_0(t);
          {
            ATerm j_4 (ATerm t)
            {
              ATerm k_4 (ATerm t)
              {
                t = term_z_14;
                return(t);
              }
              t = debug_1(t, k_4);
              return(t);
            }
            t = if_verbose6_1(t, j_4);
            {
              t = term_i_14;
              t = exit_0(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = xtc_query_0(t);
  return(t);
}

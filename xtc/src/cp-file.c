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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_CUT_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_p_14;
ATerm term_y_13;
ATerm term_e_13;
ATerm term_m_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_d_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_j_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_e_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_b_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_o_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_a_4;
ATerm term_u_3;
ATerm term_k_3;
void init_constant_terms (void)
{
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym__2, term_c_5, term_d_5);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_5);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym__2, term_b_6, term_e_6);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_e_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_e_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_v_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_e_6);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__3, term_u_10, term_v_10, (ATerm) ATempty);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm copy_file_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_59 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm h_46 (ATerm), ATerm i_46 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_65 (ATerm), ATerm v_65 (ATerm));
ATerm crush_2 (ATerm, ATerm s_64 (ATerm), ATerm t_64 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_54 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_75 (ATerm));
ATerm map_1 (ATerm, ATerm i_59 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_75 (ATerm));
ATerm Program_1 (ATerm, ATerm q_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_69 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_57 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_75 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_75 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_75 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm cp_file_0 (ATerm);
ATerm main_0 (ATerm);
ATerm copy_file_0 (ATerm t)
{
  ATerm g_1 = NULL,s_1 = NULL,t_1 = NULL;
  g_1 = t;
  q_0 :
  if(match_cons(g_1, sym__2))
    {
      s_1 = ATgetArgument(g_1, 0);
      t_1 = ATgetArgument(g_1, 1);
      t = SSL_copy(not_null(s_1), not_null(t_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  t = SSL_implode_string(not_null(c_2));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_2 = t;
  int o_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_2);
    }
  else
    {
      t = m_2;
      {
        ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
        h_2 = t;
        g_2 :
        if(((ATgetType(h_2) == AT_LIST) && !(ATisEmpty(h_2))))
          {
            i_2 = ATgetFirst((ATermList) h_2);
            j_2 = (ATerm) ATgetNext((ATermList) h_2);
            {
              t = not_null(i_2);
              {
                ATerm b_0 (ATerm t)
                {
                  t = not_null(j_2);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_0);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm t_2 = NULL;
  ATerm v_2 = NULL;
  t_2 = t;
  {
    ATerm w_2 = NULL;
    ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
    t = not_null(t_2);
    {
      w_2 = t;
      {
        t = SSL_explode_term(not_null(w_2));
        {
          y_2 = t;
          r_2 :
          if(match_cons(y_2, sym__2))
            {
              z_2 = ATgetArgument(y_2, 0);
              a_3 = ATgetArgument(y_2, 1);
              s_2 :
              if(match_string(z_2, ""))
                {
                  if(((v_2 != NULL) && (v_2 != a_3)))
                    _fail(a_3);
                  else
                    v_2 = a_3;
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
      }
    }
    {
      t = not_null(v_2);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm p_2 = t;
    int q_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_3);
        LocalPopChoice(q_2);
      }
    else
      {
        t = p_2;
        {
          t = Nil_0(t);
          t = x_59(t);
        }
      }
    return(t);
  }
  t = e_3(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
  h_3 = t;
  g_3 :
  if(match_cons(h_3, sym__2))
    {
      i_3 = ATgetArgument(h_3, 0);
      j_3 = ATgetArgument(h_3, 1);
      {
        t = not_null(i_3);
        {
          ATerm d_0 (ATerm t)
          {
            t = not_null(j_3);
            return(t);
          }
          t = at_end_1(t, d_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_2 = t;
  int x_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(x_2);
    }
  else
    {
      t = u_2;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  t = SSL_explode_string(not_null(o_3));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_46 (ATerm), ATerm i_46 (ATerm))
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
  x_3 = t;
  w_3 :
  if(match_cons(x_3, sym__2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      {
        ATerm d_4 = NULL,f_4 = NULL;
        ATerm e_4 = NULL;
        t = SSLgetAnnotations(not_null(x_3));
        {
          e_4 = t;
          if(((d_4 != NULL) && (d_4 != e_4)))
            _fail(e_4);
          else
            d_4 = e_4;
        }
        {
          t = not_null(y_3);
          {
            ATerm h_4 = NULL;
            t = h_46(t);
            {
              f_4 = t;
              {
                t = not_null(z_3);
                {
                  ATerm j_4 = NULL;
                  t = i_46(t);
                  {
                    h_4 = t;
                    {
                      ATerm k_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_4), not_null(h_4)), not_null(d_4));
                      {
                        k_4 = t;
                        if(((j_4 != NULL) && (j_4 != k_4)))
                          _fail(k_4);
                        else
                          j_4 = k_4;
                      }
                      t = not_null(j_4);
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
    ATerm b_3 = t;
    int c_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(c_3);
      }
    else
      {
        t = b_3;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm d_3;
  d_3 = t;
  {
    ATerm s_4 = NULL,u_4 = NULL;
    ATerm f_3;
    f_3 = t;
    {
      ATerm t_4 = NULL;
      t = u_69(t);
      {
        t_4 = t;
        if(((s_4 != NULL) && (s_4 != t_4)))
          _fail(t_4);
        else
          s_4 = t_4;
      }
    }
    t = f_3;
    {
      ATerm v_4 = NULL;
      v_4 = t;
      if(((u_4 != NULL) && (u_4 != v_4)))
        _fail(v_4);
      else
        u_4 = v_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_4)), not_null(s_4)));
        t = printnl_0(t);
      }
    }
  }
  t = d_3;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = SSL_is_string(not_null(z_4));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_3 = t;
  int m_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_3);
    }
  else
    {
      t = l_3;
      {
        ATerm n_3 = t;
        int p_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              ATerm q_3 = t;
              int r_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(r_3);
                }
              else
                {
                  t = q_3;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, f_0);
            LocalPopChoice(p_3);
          }
        else
          {
            t = n_3;
            {
              ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
              i_5 = t;
              h_5 :
              if(match_cons(i_5, sym_Path_1))
                {
                  j_5 = ATgetArgument(i_5, 0);
                  t = not_null(j_5);
                }
              else
                {
                  if(match_cons(i_5, sym_Var_1))
                    {
                      j_5 = ATgetArgument(i_5, 0);
                      {
                        t = not_null(j_5);
                        {
                          ATerm s_3 = t;
                          int t_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_3);
                            }
                          else
                            {
                              t = s_3;
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  t = term_u_3;
                                  return(t);
                                }
                                t = debug_1(t, h_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_5, sym_Prefix_2))
                        {
                          j_5 = ATgetArgument(i_5, 0);
                          k_5 = ATgetArgument(i_5, 1);
                          {
                            ATerm p_5 = NULL,r_5 = NULL;
                            ATerm v_3;
                            v_3 = t;
                            {
                              ATerm q_5 = NULL;
                              t = not_null(j_5);
                              {
                                t = eval_config_0(t);
                                {
                                  q_5 = t;
                                  if(((p_5 != NULL) && (p_5 != q_5)))
                                    _fail(q_5);
                                  else
                                    p_5 = q_5;
                                }
                              }
                            }
                            t = v_3;
                            {
                              ATerm s_5 = NULL;
                              t = not_null(k_5);
                              {
                                t = eval_config_0(t);
                                {
                                  s_5 = t;
                                  if(((r_5 != NULL) && (r_5 != s_5)))
                                    _fail(s_5);
                                  else
                                    r_5 = s_5;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), not_null(r_5));
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
  ATerm a_6 = NULL;
  a_6 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_4, not_null(a_6));
    {
      t = table_get_0(t);
      {
        ATerm b_4 = t;
        int c_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm g_4;
              g_4 = t;
              {
                ATerm c_6 = NULL;
                ATerm d_6 = NULL;
                d_6 = t;
                if(((c_6 != NULL) && (c_6 != d_6)))
                  _fail(d_6);
                else
                  c_6 = d_6;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_4, not_null(a_6), not_null(c_6));
                  t = table_put_0(t);
                }
              }
              t = g_4;
            }
            LocalPopChoice(c_4);
          }
        else
          {
            t = b_4;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_6 = NULL;
  h_6 = t;
  t = SSL_string_to_int(not_null(h_6));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
  p_6 = t;
  n_6 :
  if(match_string(p_6, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(p_6) == AT_LIST) && !(ATisEmpty(p_6))))
        {
          q_6 = ATgetFirst((ATermList) p_6);
          r_6 = (ATerm) ATgetNext((ATermList) p_6);
          o_6 :
          if(((ATgetType(r_6) == AT_LIST) && !(ATisEmpty(r_6))))
            {
              s_6 = ATgetFirst((ATermList) r_6);
              t_6 = (ATerm) ATgetNext((ATermList) r_6);
              {
                ATerm x_6 = NULL;
                ATerm i_4;
                i_4 = t;
                {
                  t = not_null(q_6);
                  t = j_0(t);
                }
                t = i_4;
                {
                  ATerm y_6 = NULL;
                  t = not_null(s_6);
                  {
                    t = k_0(t);
                    {
                      y_6 = t;
                      if(((x_6 != NULL) && (x_6 != y_6)))
                        _fail(y_6);
                      else
                        x_6 = y_6;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_6)), not_null(x_6));
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
ATerm io_options_0 (ATerm t)
{
  ATerm l_4 = t;
  int m_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_0 (ATerm t)
      {
        ATerm r_7 = NULL;
        r_7 = t;
        c_7 :
        if(!(match_string(r_7, "-i")))
          {
            if(!(match_string(r_7, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm u_7 = NULL;
        ATerm n_4;
        n_4 = t;
        {
          ATerm s_7 = NULL;
          ATerm t_7 = NULL;
          t_7 = t;
          if(((s_7 != NULL) && (s_7 != t_7)))
            _fail(t_7);
          else
            s_7 = t_7;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_o_4, not_null(s_7));
            t = set_config_0(t);
          }
        }
        t = n_4;
        {
          ATerm v_7 = NULL;
          v_7 = t;
          if(((u_7 != NULL) && (u_7 != v_7)))
            _fail(v_7);
          else
            u_7 = v_7;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_7));
        }
        return(t);
      }
      ATerm o_0 (ATerm t)
      {
        t = term_p_4;
        return(t);
      }
      t = ArgOption_3(t, m_0, n_0, o_0);
      LocalPopChoice(m_4);
    }
  else
    {
      t = l_4;
      {
        ATerm q_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              ATerm w_7 = NULL;
              w_7 = t;
              f_7 :
              if(!(match_string(w_7, "-o")))
                {
                  if(!(match_string(w_7, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_0 (ATerm t)
            {
              ATerm z_7 = NULL;
              ATerm w_4;
              w_4 = t;
              {
                ATerm x_7 = NULL;
                ATerm y_7 = NULL;
                y_7 = t;
                if(((x_7 != NULL) && (x_7 != y_7)))
                  _fail(y_7);
                else
                  x_7 = y_7;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_4, not_null(x_7));
                  t = set_config_0(t);
                }
              }
              t = w_4;
              {
                ATerm a_8 = NULL;
                a_8 = t;
                if(((z_7 != NULL) && (z_7 != a_8)))
                  _fail(a_8);
                else
                  z_7 = a_8;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_7));
              }
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = term_y_4;
              return(t);
            }
            t = ArgOption_3(t, p_0, r_0, s_0);
            LocalPopChoice(r_4);
          }
        else
          {
            t = q_4;
            {
              ATerm a_5 = t;
              int b_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_0 (ATerm t)
                  {
                    ATerm b_8 = NULL;
                    b_8 = t;
                    i_7 :
                    if(!(match_string(b_8, "-S")))
                      {
                        if(!(match_string(b_8, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_0 (ATerm t)
                  {
                    t = term_e_5;
                    t = set_config_0(t);
                    t = term_f_5;
                    return(t);
                  }
                  ATerm v_0 (ATerm t)
                  {
                    t = term_g_5;
                    return(t);
                  }
                  t = Option_3(t, t_0, u_0, v_0);
                  LocalPopChoice(b_5);
                }
              else
                {
                  t = a_5;
                  {
                    ATerm l_5 = t;
                    int m_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm c_8 = NULL;
                          c_8 = t;
                          j_7 :
                          if(!(match_string(c_8, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_0 (ATerm t)
                        {
                          ATerm f_8 = NULL;
                          ATerm n_5;
                          n_5 = t;
                          {
                            ATerm d_8 = NULL;
                            ATerm e_8 = NULL;
                            t = string_to_int_0(t);
                            {
                              e_8 = t;
                              if(((d_8 != NULL) && (d_8 != e_8)))
                                _fail(e_8);
                              else
                                d_8 = e_8;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_5, not_null(d_8));
                              t = set_config_0(t);
                            }
                          }
                          t = n_5;
                          {
                            ATerm g_8 = NULL;
                            g_8 = t;
                            if(((f_8 != NULL) && (f_8 != g_8)))
                              _fail(g_8);
                            else
                              f_8 = g_8;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_8));
                          }
                          return(t);
                        }
                        ATerm y_0 (ATerm t)
                        {
                          t = term_o_5;
                          return(t);
                        }
                        t = ArgOption_3(t, w_0, x_0, y_0);
                        LocalPopChoice(m_5);
                      }
                    else
                      {
                        t = l_5;
                        {
                          ATerm t_5 = t;
                          int u_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_0 (ATerm t)
                              {
                                ATerm h_8 = NULL;
                                h_8 = t;
                                m_7 :
                                if(!(match_string(h_8, "-k")))
                                  {
                                    if(!(match_string(h_8, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm a_1 (ATerm t)
                              {
                                ATerm v_5;
                                v_5 = t;
                                {
                                  ATerm i_8 = NULL;
                                  ATerm j_8 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    j_8 = t;
                                    if(((i_8 != NULL) && (i_8 != j_8)))
                                      _fail(j_8);
                                    else
                                      i_8 = j_8;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(i_8));
                                    t = set_config_0(t);
                                  }
                                }
                                t = v_5;
                                return(t);
                              }
                              ATerm b_1 (ATerm t)
                              {
                                t = term_x_5;
                                return(t);
                              }
                              t = ArgOption_3(t, z_0, a_1, b_1);
                              LocalPopChoice(u_5);
                            }
                          else
                            {
                              t = t_5;
                              {
                                ATerm y_5 = t;
                                int z_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_1 (ATerm t)
                                    {
                                      ATerm k_8 = NULL;
                                      k_8 = t;
                                      o_7 :
                                      if(!(match_string(k_8, "-v")))
                                        {
                                          if(!(match_string(k_8, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm d_1 (ATerm t)
                                    {
                                      t = term_f_6;
                                      t = set_config_0(t);
                                      t = term_g_6;
                                      return(t);
                                    }
                                    ATerm e_1 (ATerm t)
                                    {
                                      t = term_i_6;
                                      return(t);
                                    }
                                    t = Option_3(t, c_1, d_1, e_1);
                                    LocalPopChoice(z_5);
                                  }
                                else
                                  {
                                    t = y_5;
                                    {
                                      ATerm j_6 = t;
                                      int k_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_1 (ATerm t)
                                          {
                                            ATerm l_8 = NULL;
                                            l_8 = t;
                                            p_7 :
                                            if(!(match_string(l_8, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm h_1 (ATerm t)
                                          {
                                            t = term_m_6;
                                            t = set_config_0(t);
                                            t = term_u_6;
                                            return(t);
                                          }
                                          ATerm i_1 (ATerm t)
                                          {
                                            t = term_v_6;
                                            return(t);
                                          }
                                          t = Option_3(t, f_1, h_1, i_1);
                                          LocalPopChoice(k_6);
                                        }
                                      else
                                        {
                                          t = j_6;
                                          {
                                            ATerm j_1 (ATerm t)
                                            {
                                              ATerm m_8 = NULL;
                                              m_8 = t;
                                              q_7 :
                                              if(!(match_string(m_8, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm k_1 (ATerm t)
                                            {
                                              t = term_z_6;
                                              t = set_config_0(t);
                                              t = term_a_7;
                                              return(t);
                                            }
                                            ATerm l_1 (ATerm t)
                                            {
                                              t = term_b_7;
                                              return(t);
                                            }
                                            t = Option_3(t, j_1, k_1, l_1);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm w_8 = NULL;
  ATerm d_7;
  d_7 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm x_8 = NULL,y_8 = NULL;
      x_8 = t;
      v_8 :
      if(match_cons(x_8, sym_Program_1))
        {
          y_8 = ATgetArgument(x_8, 0);
          if(((w_8 != NULL) && (w_8 != y_8)))
            _fail(y_8);
          else
            w_8 = y_8;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, m_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(w_8)), term_e_7));
      {
        t = printnl_0(t);
        {
          t = term_h_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATempty, term_k_7));
  {
    t = printnl_0(t);
    {
      t = term_h_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  t = SSL_TicksToSeconds(not_null(b_9));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym__2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      {
        ATerm l_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_9), not_null(i_9));
            LocalPopChoice(n_7);
          }
        else
          {
            t = l_7;
            t = SSL_addr(not_null(h_9), not_null(i_9));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_65 (ATerm), ATerm v_65 (ATerm))
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_65(t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
        p_9 = t;
        o_9 :
        if(((ATgetType(p_9) == AT_LIST) && !(ATisEmpty(p_9))))
          {
            q_9 = ATgetFirst((ATermList) p_9);
            r_9 = (ATerm) ATgetNext((ATermList) p_9);
            {
              ATerm u_9 = NULL;
              ATerm v_9 = NULL;
              t = not_null(r_9);
              {
                t = foldr_2(t, u_65, v_65);
                {
                  v_9 = t;
                  if(((u_9 != NULL) && (u_9 != v_9)))
                    _fail(v_9);
                  else
                    u_9 = v_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), not_null(u_9));
                t = v_65(t);
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
ATerm crush_2 (ATerm t, ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm c_10 = NULL;
  ATerm e_10 = NULL;
  c_10 = t;
  {
    ATerm f_10 = NULL;
    ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
    t = not_null(c_10);
    {
      f_10 = t;
      {
        t = SSL_explode_term(not_null(f_10));
        {
          h_10 = t;
          b_10 :
          if(match_cons(h_10, sym__2))
            {
              i_10 = ATgetArgument(h_10, 0);
              j_10 = ATgetArgument(h_10, 1);
              if(((e_10 != NULL) && (e_10 != j_10)))
                _fail(j_10);
              else
                e_10 = j_10;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_10);
      t = foldr_2(t, s_64, t_64);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm n_1 (ATerm t)
    {
      t = term_d_5;
      return(t);
    }
    t = crush_2(t, n_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym__2))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      {
        ATerm p_8;
        p_8 = t;
        {
          ATerm q_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_10), not_null(r_10));
              LocalPopChoice(r_8);
            }
          else
            {
              t = q_8;
              t = SSL_gtr(not_null(q_10), not_null(r_10));
            }
        }
        t = p_8;
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
  ATerm x_10 = NULL;
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
      y_10 = t;
      w_10 :
      if(match_cons(y_10, sym__2))
        {
          z_10 = ATgetArgument(y_10, 0);
          a_11 = ATgetArgument(y_10, 1);
          {
            if(((x_10 != NULL) && (x_10 != z_10)))
              _fail(z_10);
            else
              x_10 = z_10;
            if(((x_10 != NULL) && (x_10 != a_11)))
              _fail(a_11);
            else
              x_10 = a_11;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm u_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9;
      a_9 = t;
      {
        ATerm d_11 = NULL;
        ATerm e_11 = NULL;
        t = term_c_5;
        {
          t = get_config_0(t);
          {
            e_11 = t;
            if(((d_11 != NULL) && (d_11 != e_11)))
              _fail(e_11);
            else
              d_11 = e_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_h_7);
          t = geq_0(t);
        }
      }
      t = a_9;
      t = d_54(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = u_8;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm i_11 = NULL,k_11 = NULL;
    ATerm c_9;
    c_9 = t;
    {
      ATerm j_11 = NULL;
      t = run_time_0(t);
      {
        j_11 = t;
        if(((i_11 != NULL) && (i_11 != j_11)))
          _fail(j_11);
        else
          i_11 = j_11;
      }
    }
    t = c_9;
    {
      ATerm l_11 = NULL;
      t = term_d_9;
      {
        t = get_config_0(t);
        {
          l_11 = t;
          if(((k_11 != NULL) && (k_11 != l_11)))
            _fail(l_11);
          else
            k_11 = l_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_9), not_null(i_11)), term_e_9), not_null(k_11)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_1);
  {
    t = term_d_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_Version_0))
    {
      ATerm u_11 = NULL,w_11 = NULL;
      ATerm k_9;
      k_9 = t;
      {
        ATerm v_11 = NULL;
        t = SSLgetAnnotations(not_null(s_11));
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
      }
      t = k_9;
      {
        ATerm x_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_11));
        {
          x_11 = t;
          if(((w_11 != NULL) && (w_11 != x_11)))
            _fail(x_11);
          else
            w_11 = x_11;
        }
        t = not_null(w_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm n_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_9);
            }
          else
            {
              t = n_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, p_1);
  t = u_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  t = SSL_table_create(not_null(c_12));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  {
    ATerm t_9;
    t_9 = t;
    {
      t = term_w_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_9, term_x_9, not_null(g_12));
          t = table_put_0(t);
        }
      }
    }
    t = t_9;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  t = SSL_table_destroy(not_null(k_12));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  t = SSL_exit(not_null(o_12));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(((ATgetType(s_12) == AT_LIST) && ATisEmpty(s_12)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
        {
          t_12 = ATgetFirst((ATermList) s_12);
          u_12 = (ATerm) ATgetNext((ATermList) s_12);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm y_9;
  y_9 = t;
  {
    ATerm x_12 = NULL;
    ATerm a_13 = NULL;
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        {
          ATerm y_12 = NULL;
          ATerm z_12 = NULL;
          z_12 = t;
          if(((y_12 != NULL) && (y_12 != z_12)))
            _fail(z_12);
          else
            y_12 = z_12;
          t = (ATerm) ATinsert(ATempty, not_null(y_12));
        }
      }
    {
      a_13 = t;
      if(((x_12 != NULL) && (x_12 != a_13)))
        _fail(a_13);
      else
        x_12 = a_13;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(x_12));
      t = printnl_0(t);
    }
  }
  t = y_9;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm d_13 (ATerm t)
  {
    ATerm g_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = g_10;
        t = Cons_2(t, i_59, d_13);
      }
    return(t);
  }
  t = d_13(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  m_13 = t;
  j_13 :
  if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
    {
      k_13 = ATgetFirst((ATermList) m_13);
      l_13 = (ATerm) ATgetNext((ATermList) m_13);
      {
        ATerm p_13 = NULL;
        t = not_null(l_13);
        {
          ATerm l_10;
          l_10 = t;
          {
            ATerm q_13 = NULL,s_13 = NULL,u_13 = NULL;
            ATerm m_10;
            m_10 = t;
            {
              ATerm r_13 = NULL;
              t = i_0(t);
              {
                r_13 = t;
                if(((q_13 != NULL) && (q_13 != r_13)))
                  _fail(r_13);
                else
                  q_13 = r_13;
              }
            }
            t = m_10;
            {
              ATerm t_13 = NULL;
              t = not_null(k_13);
              {
                t = g_0(t);
                {
                  t_13 = t;
                  if(((s_13 != NULL) && (s_13 != t_13)))
                    _fail(t_13);
                  else
                    s_13 = t_13;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_13)), not_null(s_13));
                {
                  u_13 = t;
                  if(((p_13 != NULL) && (p_13 != u_13)))
                    _fail(u_13);
                  else
                    p_13 = u_13;
                }
              }
            }
          }
          t = l_10;
          {
            ATerm q_1 (ATerm t)
            {
              t = not_null(p_13);
              return(t);
            }
            t = reverse_acc_2(t, g_0, q_1);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_13) == AT_LIST) && ATisEmpty(m_13)))
        {
          {
            t = term_e_6;
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
  ATerm r_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_1);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_52 (ATerm))
{
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Program_1))
    {
      g_14 = ATgetArgument(f_14, 0);
      {
        ATerm j_14 = NULL,l_14 = NULL;
        ATerm k_14 = NULL;
        t = SSLgetAnnotations(not_null(f_14));
        {
          k_14 = t;
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
        }
        {
          t = not_null(g_14);
          {
            ATerm n_14 = NULL;
            t = q_52(t);
            {
              l_14 = t;
              {
                ATerm o_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_14)), not_null(j_14));
                {
                  o_14 = t;
                  if(((n_14 != NULL) && (n_14 != o_14)))
                    _fail(o_14);
                  else
                    n_14 = o_14;
                }
                t = not_null(n_14);
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
  ATerm w_14 = NULL;
  ATerm n_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_14 = NULL;
      t = term_d_9;
      {
        t = get_config_0(t);
        {
          x_14 = t;
          if(((w_14 != NULL) && (w_14 != x_14)))
            _fail(x_14);
          else
            w_14 = x_14;
        }
      }
      LocalPopChoice(s_10);
    }
  else
    {
      t = n_10;
      {
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm y_14 = NULL;
            y_14 = t;
            if(((w_14 != NULL) && (w_14 != y_14)))
              _fail(y_14);
            else
              w_14 = y_14;
            return(t);
          }
          t = Program_1(t, v_1);
          return(t);
        }
        t = fetch_1(t, u_1);
      }
    }
  {
    t = term_t_10;
    {
      t = echo_0(t);
      {
        t = term_b_11;
        {
          t = table_get_0(t);
          {
            ATerm w_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, w_1);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm z_14 = NULL;
                ATerm a_15 = NULL;
                a_15 = t;
                if(((z_14 != NULL) && (z_14 != a_15)))
                  _fail(a_15);
                else
                  z_14 = a_15;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_14)), term_c_11);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, x_1);
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym__2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      {
        ATerm f_11;
        f_11 = t;
        t = SSL_printnl(not_null(h_15), not_null(i_15));
        t = f_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm g_11;
  g_11 = t;
  {
    ATerm n_15 = NULL;
    ATerm o_15 = NULL;
    o_15 = t;
    if(((n_15 != NULL) && (n_15 != o_15)))
      _fail(o_15);
    else
      n_15 = o_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATempty, not_null(n_15)));
      t = printnl_0(t);
    }
  }
  t = g_11;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm h_11;
  h_11 = t;
  {
    t = v_69(t);
    t = debug_0(t);
  }
  t = h_11;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_52 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_Undefined_1))
    {
      w_15 = ATgetArgument(v_15, 0);
      {
        ATerm z_15 = NULL,b_16 = NULL;
        ATerm a_16 = NULL;
        t = SSLgetAnnotations(not_null(v_15));
        {
          a_16 = t;
          if(((z_15 != NULL) && (z_15 != a_16)))
            _fail(a_16);
          else
            z_15 = a_16;
        }
        {
          t = not_null(w_15);
          {
            ATerm d_16 = NULL;
            t = r_52(t);
            {
              b_16 = t;
              {
                ATerm e_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_16)), not_null(z_15));
                {
                  e_16 = t;
                  if(((d_16 != NULL) && (d_16 != e_16)))
                    _fail(e_16);
                  else
                    d_16 = e_16;
                }
                t = not_null(d_16);
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
ATerm fetch_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm j_16 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_59, _id);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = Cons_2(t, _id, j_16);
      }
    return(t);
  }
  t = j_16(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_74 (ATerm))
{
  t = fetch_1(t, b_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_Help_0))
    {
      ATerm q_16 = NULL,s_16 = NULL;
      ATerm o_11;
      o_11 = t;
      {
        ATerm r_16 = NULL;
        t = SSLgetAnnotations(not_null(o_16));
        {
          r_16 = t;
          if(((q_16 != NULL) && (q_16 != r_16)))
            _fail(r_16);
          else
            q_16 = r_16;
        }
      }
      t = o_11;
      {
        ATerm t_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_16));
        {
          t_16 = t;
          if(((s_16 != NULL) && (s_16 != t_16)))
            _fail(t_16);
          else
            s_16 = t_16;
        }
        t = not_null(s_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_57(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,c_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym__2))
    {
      a_17 = ATgetArgument(z_16, 0);
      c_17 = ATgetArgument(z_16, 1);
      t = SSL_table_get(not_null(a_17), not_null(c_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym__3))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      m_17 = ATgetArgument(j_17, 2);
      {
        ATerm t_11;
        t_11 = t;
        {
          ATerm q_17 = NULL;
          ATerm r_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(l_17));
          {
            ATerm y_11 = t;
            int z_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_11);
              }
            else
              {
                t = y_11;
                t = (ATerm) ATempty;
              }
            {
              r_17 = t;
              if(((q_17 != NULL) && (q_17 != r_17)))
                _fail(r_17);
              else
                q_17 = r_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_17), not_null(l_17), (ATerm) ATinsert(CheckATermList(not_null(q_17)), not_null(m_17)));
            t = table_put_0(t);
          }
        }
        t = t_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm v_17 = NULL;
  ATerm w_17 = NULL;
  t = term_e_6;
  {
    t = g_75(t);
    {
      w_17 = t;
      if(((v_17 != NULL) && (v_17 != w_17)))
        _fail(w_17);
      else
        v_17 = w_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_10, term_v_10, not_null(v_17));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_string(f_18, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
        {
          g_18 = ATgetFirst((ATermList) f_18);
          h_18 = (ATerm) ATgetNext((ATermList) f_18);
          {
            ATerm k_18 = NULL;
            ATerm a_12;
            a_12 = t;
            {
              t = not_null(g_18);
              t = a_0(t);
            }
            t = a_12;
            {
              ATerm l_18 = NULL;
              t = term_e_6;
              {
                t = c_0(t);
                {
                  l_18 = t;
                  if(((k_18 != NULL) && (k_18 != l_18)))
                    _fail(l_18);
                  else
                    k_18 = l_18;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_18)), not_null(k_18));
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
  ATerm y_1 (ATerm t)
  {
    ATerm q_18 = NULL;
    q_18 = t;
    p_18 :
    if(!(match_string(q_18, "--help")))
      {
        if(!(match_string(q_18, "-h")))
          {
            if(!(match_string(q_18, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_d_12;
    {
      t = set_config_0(t);
      t = term_e_12;
    }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_f_12;
    return(t);
  }
  t = Option_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
    {
      u_18 = ATgetFirst((ATermList) t_18);
      v_18 = (ATerm) ATgetNext((ATermList) t_18);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_18)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_18)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL,o_19 = NULL;
  f_19 = t;
  e_19 :
  if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
    {
      g_19 = ATgetFirst((ATermList) f_19);
      o_19 = (ATerm) ATgetNext((ATermList) f_19);
      {
        ATerm s_19 = NULL,u_19 = NULL;
        ATerm t_19 = NULL;
        t = SSLgetAnnotations(not_null(f_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
        {
          t = not_null(g_19);
          {
            ATerm w_19 = NULL;
            t = q_47(t);
            {
              u_19 = t;
              {
                t = not_null(o_19);
                {
                  ATerm y_19 = NULL;
                  t = r_47(t);
                  {
                    w_19 = t;
                    {
                      ATerm z_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_19)), not_null(u_19)), not_null(s_19));
                      {
                        z_19 = t;
                        if(((y_19 != NULL) && (y_19 != z_19)))
                          _fail(z_19);
                        else
                          y_19 = z_19;
                      }
                      t = not_null(y_19);
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
  ATerm j_20 = NULL;
  j_20 = t;
  i_20 :
  if(((ATgetType(j_20) == AT_LIST) && ATisEmpty(j_20)))
    {
      {
        ATerm l_20 = NULL,n_20 = NULL;
        ATerm h_12;
        h_12 = t;
        {
          ATerm m_20 = NULL;
          t = SSLgetAnnotations(not_null(j_20));
          {
            m_20 = t;
            if(((l_20 != NULL) && (l_20 != m_20)))
              _fail(m_20);
            else
              l_20 = m_20;
          }
        }
        t = h_12;
        {
          ATerm o_20 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_20));
          {
            o_20 = t;
            if(((n_20 != NULL) && (n_20 != o_20)))
              _fail(o_20);
            else
              n_20 = o_20;
          }
          t = not_null(n_20);
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
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym__2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_4, not_null(v_20), not_null(w_20));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm i_12;
  i_12 = t;
  {
    ATerm j_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_12;
        t = e_75(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = j_12;
        {
        }
      }
  }
  t = i_12;
  {
    ATerm b_2 (ATerm t)
    {
      ATerm j_21 = NULL;
      ATerm n_12;
      n_12 = t;
      {
        ATerm h_21 = NULL;
        ATerm i_21 = NULL;
        i_21 = t;
        if(((h_21 != NULL) && (h_21 != i_21)))
          _fail(i_21);
        else
          h_21 = i_21;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(h_21));
          t = set_config_0(t);
        }
      }
      t = n_12;
      {
        ATerm k_21 = NULL;
        k_21 = t;
        if(((j_21 != NULL) && (j_21 != k_21)))
          _fail(k_21);
        else
          j_21 = k_21;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_21));
      }
      return(t);
    }
    ATerm d_2 (ATerm t)
    {
      ATerm p_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_12);
            }
          else
            {
              t = v_12;
              {
                t = e_75(t);
                t = Cons_2(t, _id, d_2);
              }
            }
          LocalPopChoice(q_12);
        }
      else
        {
          t = p_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_2, d_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_21 = NULL,u_21 = NULL,v_21 = NULL;
  ATerm b_13;
  b_13 = t;
  {
    ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
    w_21 = t;
    p_21 :
    if(match_cons(w_21, sym__3))
      {
        x_21 = ATgetArgument(w_21, 0);
        y_21 = ATgetArgument(w_21, 1);
        z_21 = ATgetArgument(w_21, 2);
        {
          if(((q_21 != NULL) && (q_21 != x_21)))
            _fail(x_21);
          else
            q_21 = x_21;
          {
            if(((u_21 != NULL) && (u_21 != y_21)))
              _fail(y_21);
            else
              u_21 = y_21;
            {
              if(((v_21 != NULL) && (v_21 != z_21)))
                _fail(z_21);
              else
                v_21 = z_21;
              t = SSL_table_put(not_null(q_21), not_null(u_21), not_null(v_21));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm c_22 = NULL;
  ATerm c_13;
  c_13 = t;
  {
    t = term_e_13;
    t = table_put_0(t);
  }
  t = c_13;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm f_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_75(t);
          LocalPopChoice(g_13);
        }
      else
        {
          t = f_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_2);
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_13;
          n_13 = t;
          {
            ATerm o_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_12;
                t = get_config_0(t);
                LocalPopChoice(v_13);
              }
            else
              {
                t = o_13;
                t = fetch_1(t, Help_0);
              }
          }
          t = n_13;
          {
            t = system_usage_0(t);
            {
              t = term_d_5;
              t = exit_0(t);
            }
          }
          LocalPopChoice(i_13);
        }
      else
        {
          t = h_13;
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_2 (ATerm t)
                {
                  ATerm k_2 (ATerm t)
                  {
                    ATerm d_22 = NULL;
                    d_22 = t;
                    if(((c_22 != NULL) && (c_22 != d_22)))
                      _fail(d_22);
                    else
                      c_22 = d_22;
                    return(t);
                  }
                  t = Undefined_1(t, k_2);
                  return(t);
                }
                t = fetch_1(t, f_2);
                {
                  ATerm l_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_22)), term_y_13);
                    return(t);
                  }
                  t = say_1(t, l_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_h_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                {
                }
              }
          }
        }
      {
        ATerm z_13;
        z_13 = t;
        {
          t = term_u_10;
          t = table_destroy_0(t);
        }
        t = z_13;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  t = parse_options_1(t, a_73);
  {
    t = store_options_0(t);
    {
      t = c_73(t);
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_73);
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm c_14 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_73(t);
                  t = report_success_0(t);
                  LocalPopChoice(d_14);
                }
              else
                {
                  t = c_14;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  t = option_wrap_4(t, e_73, default_usage_0, _id, f_73);
  return(t);
}
ATerm cp_file_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm h_22 = NULL,j_22 = NULL;
    ATerm h_14;
    h_14 = t;
    {
      ATerm i_22 = NULL;
      ATerm i_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_4;
          t = get_config_0(t);
          LocalPopChoice(m_14);
        }
      else
        {
          t = i_14;
          t = term_p_14;
        }
      {
        i_22 = t;
        if(((h_22 != NULL) && (h_22 != i_22)))
          _fail(i_22);
        else
          h_22 = i_22;
      }
    }
    t = h_14;
    {
      ATerm k_22 = NULL;
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_4;
          t = get_config_0(t);
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
          t = term_d_10;
        }
      {
        k_22 = t;
        if(((j_22 != NULL) && (j_22 != k_22)))
          _fail(k_22);
        else
          j_22 = k_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(j_22));
        t = copy_file_0(t);
      }
    }
    return(t);
  }
  t = option_wrap_2(t, io_options_0, n_2);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = cp_file_0(t);
  return(t);
}

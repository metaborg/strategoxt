#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_f_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_d_9;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_d_6;
ATerm term_a_6;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_v_4;
ATerm term_q_4;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_k_4;
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
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym__2, term_k_4, term_l_4);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(sym__2, term_z_4, term_a_5);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_5);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym__2, term_m_5, term_l_4);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym__2, term_m_6, term_l_4);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_a_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_l_4);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__3, term_u_10, term_a_11, (ATerm) ATempty);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm copy_file_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm u_47 (ATerm), ATerm v_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_71 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_67 (ATerm), ATerm k_67 (ATerm));
ATerm crush_2 (ATerm, ATerm h_66 (ATerm), ATerm i_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_55 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_77 (ATerm));
ATerm map_1 (ATerm, ATerm v_60 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_76 (ATerm));
ATerm Program_1 (ATerm, ATerm d_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_49 (ATerm), ATerm e_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm));
ATerm cp_file_0 (ATerm);
ATerm main_0 (ATerm);
ATerm copy_file_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL,s_1 = NULL;
  f_1 = t;
  q_0 :
  if(match_cons(f_1, sym__2))
    {
      g_1 = ATgetArgument(f_1, 0);
      s_1 = ATgetArgument(f_1, 1);
      t = SSL_copy(not_null(g_1), not_null(s_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_2 = NULL;
  b_2 = t;
  t = SSL_implode_string(not_null(b_2));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_2 = t;
  int o_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_2);
    }
  else
    {
      t = l_2;
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
        g_2 = t;
        f_2 :
        if(((ATgetType(g_2) == AT_LIST) && !(ATisEmpty(g_2))))
          {
            h_2 = ATgetFirst((ATermList) g_2);
            i_2 = (ATerm) ATgetNext((ATermList) g_2);
            {
              t = not_null(h_2);
              {
                ATerm b_0 (ATerm t)
                {
                  t = not_null(i_2);
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
  ATerm s_2 = NULL;
  ATerm u_2 = NULL;
  s_2 = t;
  {
    ATerm v_2 = NULL;
    ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
    t = not_null(s_2);
    {
      v_2 = t;
      {
        t = SSL_explode_term(not_null(v_2));
        {
          x_2 = t;
          q_2 :
          if(match_cons(x_2, sym__2))
            {
              y_2 = ATgetArgument(x_2, 0);
              z_2 = ATgetArgument(x_2, 1);
              r_2 :
              if(match_string(y_2, ""))
                {
                  if(((u_2 != NULL) && (u_2 != z_2)))
                    _fail(z_2);
                  else
                    u_2 = z_2;
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
      t = not_null(u_2);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    ATerm p_2 = t;
    int t_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_3);
        LocalPopChoice(t_2);
      }
    else
      {
        t = p_2;
        {
          t = Nil_0(t);
          t = k_61(t);
        }
      }
    return(t);
  }
  t = d_3(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  f_3 :
  if(match_cons(g_3, sym__2))
    {
      h_3 = ATgetArgument(g_3, 0);
      i_3 = ATgetArgument(g_3, 1);
      {
        t = not_null(h_3);
        {
          ATerm c_0 (ATerm t)
          {
            t = not_null(i_3);
            return(t);
          }
          t = at_end_1(t, c_0);
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
  ATerm w_2 = t;
  int a_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(a_3);
    }
  else
    {
      t = w_2;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  t = SSL_explode_string(not_null(n_3));
  return(t);
}
ATerm _2 (ATerm t, ATerm u_47 (ATerm), ATerm v_47 (ATerm))
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      {
        ATerm c_4 = NULL,e_4 = NULL;
        ATerm d_4 = NULL;
        t = SSLgetAnnotations(not_null(w_3));
        {
          d_4 = t;
          if(((c_4 != NULL) && (c_4 != d_4)))
            _fail(d_4);
          else
            c_4 = d_4;
        }
        {
          t = not_null(x_3);
          {
            ATerm g_4 = NULL;
            t = u_47(t);
            {
              e_4 = t;
              {
                t = not_null(y_3);
                {
                  ATerm i_4 = NULL;
                  t = v_47(t);
                  {
                    g_4 = t;
                    {
                      ATerm j_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_4), not_null(g_4)), not_null(c_4));
                      {
                        j_4 = t;
                        if(((i_4 != NULL) && (i_4 != j_4)))
                          _fail(j_4);
                        else
                          i_4 = j_4;
                      }
                      t = not_null(i_4);
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
ATerm debug_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm e_3;
  e_3 = t;
  {
    ATerm r_4 = NULL,t_4 = NULL;
    ATerm j_3;
    j_3 = t;
    {
      ATerm s_4 = NULL;
      t = t_71(t);
      {
        s_4 = t;
        if(((r_4 != NULL) && (r_4 != s_4)))
          _fail(s_4);
        else
          r_4 = s_4;
      }
    }
    t = j_3;
    {
      ATerm u_4 = NULL;
      u_4 = t;
      if(((t_4 != NULL) && (t_4 != u_4)))
        _fail(u_4);
      else
        t_4 = u_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_4)), not_null(r_4)));
        t = printnl_0(t);
      }
    }
  }
  t = e_3;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  t = SSL_is_string(not_null(y_4));
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
        ATerm o_3 = t;
        int p_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
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
            t = map_1(t, e_0);
            LocalPopChoice(p_3);
          }
        else
          {
            t = o_3;
            {
              ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
              h_5 = t;
              g_5 :
              if(match_cons(h_5, sym_Path_1))
                {
                  i_5 = ATgetArgument(h_5, 0);
                  t = not_null(i_5);
                }
              else
                {
                  if(match_cons(h_5, sym_Var_1))
                    {
                      i_5 = ATgetArgument(h_5, 0);
                      {
                        t = not_null(i_5);
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
                                ATerm f_0 (ATerm t)
                                {
                                  t = term_u_3;
                                  return(t);
                                }
                                t = debug_1(t, f_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_5, sym_Prefix_2))
                        {
                          i_5 = ATgetArgument(h_5, 0);
                          j_5 = ATgetArgument(h_5, 1);
                          {
                            ATerm o_5 = NULL,q_5 = NULL;
                            ATerm z_3;
                            z_3 = t;
                            {
                              ATerm p_5 = NULL;
                              t = not_null(i_5);
                              {
                                t = eval_config_0(t);
                                {
                                  p_5 = t;
                                  if(((o_5 != NULL) && (o_5 != p_5)))
                                    _fail(p_5);
                                  else
                                    o_5 = p_5;
                                }
                              }
                            }
                            t = z_3;
                            {
                              ATerm r_5 = NULL;
                              t = not_null(j_5);
                              {
                                t = eval_config_0(t);
                                {
                                  r_5 = t;
                                  if(((q_5 != NULL) && (q_5 != r_5)))
                                    _fail(r_5);
                                  else
                                    q_5 = r_5;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(q_5));
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
  ATerm z_5 = NULL;
  z_5 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_4, not_null(z_5));
    {
      t = table_get_0(t);
      {
        ATerm b_4 = t;
        int f_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm h_4;
              h_4 = t;
              {
                ATerm b_6 = NULL;
                ATerm c_6 = NULL;
                c_6 = t;
                if(((b_6 != NULL) && (b_6 != c_6)))
                  _fail(c_6);
                else
                  b_6 = c_6;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_4, not_null(z_5), not_null(b_6));
                  t = table_put_0(t);
                }
              }
              t = h_4;
            }
            LocalPopChoice(f_4);
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
ATerm version_option_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm g_6 = NULL;
    g_6 = t;
    f_6 :
    if(!(match_string(g_6, "-v")))
      {
        if(!(match_string(g_6, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    t = term_m_4;
    t = set_config_0(t);
    t = term_n_4;
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = term_o_4;
    return(t);
  }
  t = Option_3(t, m_0, n_0, o_0);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm j_6 = NULL;
    j_6 = t;
    h_6 :
    if(!(match_string(j_6, "-k")))
      {
        if(!(match_string(j_6, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_0 (ATerm t)
  {
    ATerm p_4;
    p_4 = t;
    {
      ATerm k_6 = NULL;
      ATerm l_6 = NULL;
      t = string_to_int_0(t);
      {
        l_6 = t;
        if(((k_6 != NULL) && (k_6 != l_6)))
          _fail(l_6);
        else
          k_6 = l_6;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_4, not_null(k_6));
        t = set_config_0(t);
      }
    }
    t = p_4;
    return(t);
  }
  ATerm s_0 (ATerm t)
  {
    t = term_v_4;
    return(t);
  }
  t = ArgOption_3(t, p_0, r_0, s_0);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  t = SSL_string_to_int(not_null(o_6));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_0 (ATerm t)
      {
        ATerm w_6 = NULL;
        w_6 = t;
        r_6 :
        if(!(match_string(w_6, "-S")))
          {
            if(!(match_string(w_6, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_0 (ATerm t)
      {
        t = term_b_5;
        t = set_config_0(t);
        t = term_c_5;
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        t = term_d_5;
        return(t);
      }
      t = Option_3(t, t_0, u_0, v_0);
      LocalPopChoice(x_4);
    }
  else
    {
      t = w_4;
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_6 = NULL;
              x_6 = t;
              s_6 :
              if(!(match_string(x_6, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              ATerm a_7 = NULL;
              ATerm k_5;
              k_5 = t;
              {
                ATerm y_6 = NULL;
                ATerm z_6 = NULL;
                t = string_to_int_0(t);
                {
                  z_6 = t;
                  if(((y_6 != NULL) && (y_6 != z_6)))
                    _fail(z_6);
                  else
                    y_6 = z_6;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_4, not_null(y_6));
                  t = set_config_0(t);
                }
              }
              t = k_5;
              {
                ATerm b_7 = NULL;
                b_7 = t;
                if(((a_7 != NULL) && (a_7 != b_7)))
                  _fail(b_7);
                else
                  a_7 = b_7;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_7));
              }
              return(t);
            }
            ATerm y_0 (ATerm t)
            {
              t = term_l_5;
              return(t);
            }
            t = ArgOption_3(t, w_0, x_0, y_0);
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            {
              ATerm z_0 (ATerm t)
              {
                ATerm c_7 = NULL;
                c_7 = t;
                v_6 :
                if(!(match_string(c_7, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_1 (ATerm t)
              {
                t = term_n_5;
                t = set_config_0(t);
                t = term_s_5;
                return(t);
              }
              ATerm b_1 (ATerm t)
              {
                t = term_t_5;
                return(t);
              }
              t = Option_3(t, z_0, a_1, b_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
      {
        ATerm w_5 = t;
        int x_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(x_5);
          }
        else
          {
            t = w_5;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm i_7 = NULL;
    i_7 = t;
    f_7 :
    if(!(match_string(i_7, "-o")))
      {
        if(!(match_string(i_7, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm l_7 = NULL;
    ATerm y_5;
    y_5 = t;
    {
      ATerm j_7 = NULL;
      ATerm k_7 = NULL;
      k_7 = t;
      if(((j_7 != NULL) && (j_7 != k_7)))
        _fail(k_7);
      else
        j_7 = k_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_6, not_null(j_7));
        t = set_config_0(t);
      }
    }
    t = y_5;
    {
      ATerm m_7 = NULL;
      m_7 = t;
      if(((l_7 != NULL) && (l_7 != m_7)))
        _fail(m_7);
      else
        l_7 = m_7;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_7));
    }
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_d_6;
    return(t);
  }
  t = ArgOption_3(t, c_1, d_1, e_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(i_6);
    }
  else
    {
      t = e_6;
      {
        ATerm h_1 (ATerm t)
        {
          ATerm q_7 = NULL;
          q_7 = t;
          p_7 :
          if(!(match_string(q_7, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_1 (ATerm t)
        {
          t = term_n_6;
          t = set_config_0(t);
          t = term_p_6;
          return(t);
        }
        ATerm j_1 (ATerm t)
        {
          t = term_q_6;
          return(t);
        }
        t = Option_3(t, h_1, i_1, j_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  w_7 = t;
  u_7 :
  if(match_string(w_7, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
        {
          x_7 = ATgetFirst((ATermList) w_7);
          y_7 = (ATerm) ATgetNext((ATermList) w_7);
          v_7 :
          if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
            {
              z_7 = ATgetFirst((ATermList) y_7);
              a_8 = (ATerm) ATgetNext((ATermList) y_7);
              {
                ATerm e_8 = NULL;
                ATerm t_6;
                t_6 = t;
                {
                  t = not_null(x_7);
                  t = j_0(t);
                }
                t = t_6;
                {
                  ATerm f_8 = NULL;
                  t = not_null(z_7);
                  {
                    t = k_0(t);
                    {
                      f_8 = t;
                      if(((e_8 != NULL) && (e_8 != f_8)))
                        _fail(f_8);
                      else
                        e_8 = f_8;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_8)), not_null(e_8));
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
ATerm input_option_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm m_8 = NULL;
    m_8 = t;
    j_8 :
    if(!(match_string(m_8, "-i")))
      {
        if(!(match_string(m_8, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm p_8 = NULL;
    ATerm u_6;
    u_6 = t;
    {
      ATerm n_8 = NULL;
      ATerm o_8 = NULL;
      o_8 = t;
      if(((n_8 != NULL) && (n_8 != o_8)))
        _fail(o_8);
      else
        n_8 = o_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(n_8));
        t = set_config_0(t);
      }
    }
    t = u_6;
    {
      ATerm q_8 = NULL;
      q_8 = t;
      if(((p_8 != NULL) && (p_8 != q_8)))
        _fail(q_8);
      else
        p_8 = q_8;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_8));
    }
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  t = ArgOption_3(t, k_1, l_1, m_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_8 = NULL;
  ATerm r_7;
  r_7 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm w_8 = NULL,x_8 = NULL;
      w_8 = t;
      u_8 :
      if(match_cons(w_8, sym_Program_1))
        {
          x_8 = ATgetArgument(w_8, 0);
          if(((v_8 != NULL) && (v_8 != x_8)))
            _fail(x_8);
          else
            v_8 = x_8;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, n_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(v_8)), term_s_7));
      {
        t = printnl_0(t);
        {
          t = term_b_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATempty, term_c_8));
  {
    t = printnl_0(t);
    {
      t = term_b_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_9 = NULL;
  a_9 = t;
  t = SSL_TicksToSeconds(not_null(a_9));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym__2))
    {
      g_9 = ATgetArgument(f_9, 0);
      h_9 = ATgetArgument(f_9, 1);
      {
        ATerm d_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_9), not_null(h_9));
            LocalPopChoice(g_8);
          }
        else
          {
            t = d_8;
            t = SSL_addr(not_null(g_9), not_null(h_9));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_67 (ATerm), ATerm k_67 (ATerm))
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_67(t);
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
        o_9 = t;
        n_9 :
        if(((ATgetType(o_9) == AT_LIST) && !(ATisEmpty(o_9))))
          {
            p_9 = ATgetFirst((ATermList) o_9);
            q_9 = (ATerm) ATgetNext((ATermList) o_9);
            {
              ATerm t_9 = NULL;
              ATerm u_9 = NULL;
              t = not_null(q_9);
              {
                t = foldr_2(t, j_67, k_67);
                {
                  u_9 = t;
                  if(((t_9 != NULL) && (t_9 != u_9)))
                    _fail(u_9);
                  else
                    t_9 = u_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(t_9));
                t = k_67(t);
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
ATerm crush_2 (ATerm t, ATerm h_66 (ATerm), ATerm i_66 (ATerm))
{
  ATerm b_10 = NULL;
  ATerm d_10 = NULL;
  b_10 = t;
  {
    ATerm e_10 = NULL;
    ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
    t = not_null(b_10);
    {
      e_10 = t;
      {
        t = SSL_explode_term(not_null(e_10));
        {
          g_10 = t;
          a_10 :
          if(match_cons(g_10, sym__2))
            {
              h_10 = ATgetArgument(g_10, 0);
              i_10 = ATgetArgument(g_10, 1);
              if(((d_10 != NULL) && (d_10 != i_10)))
                _fail(i_10);
              else
                d_10 = i_10;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_10);
      t = foldr_2(t, h_66, i_66);
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
    ATerm o_1 (ATerm t)
    {
      t = term_a_5;
      return(t);
    }
    t = crush_2(t, o_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym__2))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      {
        ATerm k_8;
        k_8 = t;
        {
          ATerm l_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_10), not_null(q_10));
              LocalPopChoice(r_8);
            }
          else
            {
              t = l_8;
              t = SSL_gtr(not_null(p_10), not_null(q_10));
            }
        }
        t = k_8;
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
  ATerm w_10 = NULL;
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
      x_10 = t;
      v_10 :
      if(match_cons(x_10, sym__2))
        {
          y_10 = ATgetArgument(x_10, 0);
          z_10 = ATgetArgument(x_10, 1);
          {
            if(((w_10 != NULL) && (w_10 != y_10)))
              _fail(y_10);
            else
              w_10 = y_10;
            if(((w_10 != NULL) && (w_10 != z_10)))
              _fail(z_10);
            else
              w_10 = z_10;
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
ATerm if_verbose1_1 (ATerm t, ATerm r_55 (ATerm))
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9;
      b_9 = t;
      {
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        t = term_z_4;
        {
          t = get_config_0(t);
          {
            d_11 = t;
            if(((c_11 != NULL) && (c_11 != d_11)))
              _fail(d_11);
            else
              c_11 = d_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_b_8);
          t = geq_0(t);
        }
      }
      t = b_9;
      t = r_55(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm h_11 = NULL,j_11 = NULL;
    ATerm c_9;
    c_9 = t;
    {
      ATerm i_11 = NULL;
      t = run_time_0(t);
      {
        i_11 = t;
        if(((h_11 != NULL) && (h_11 != i_11)))
          _fail(i_11);
        else
          h_11 = i_11;
      }
    }
    t = c_9;
    {
      ATerm k_11 = NULL;
      t = term_d_9;
      {
        t = get_config_0(t);
        {
          k_11 = t;
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_9), not_null(h_11)), term_i_9), not_null(j_11)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_1);
  {
    t = term_a_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_11 = NULL;
  r_11 = t;
  q_11 :
  if(match_cons(r_11, sym_Version_0))
    {
      ATerm t_11 = NULL,v_11 = NULL;
      ATerm k_9;
      k_9 = t;
      {
        ATerm u_11 = NULL;
        t = SSLgetAnnotations(not_null(r_11));
        {
          u_11 = t;
          if(((t_11 != NULL) && (t_11 != u_11)))
            _fail(u_11);
          else
            t_11 = u_11;
        }
      }
      t = k_9;
      {
        ATerm w_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_11));
        {
          w_11 = t;
          if(((v_11 != NULL) && (v_11 != w_11)))
            _fail(w_11);
          else
            v_11 = w_11;
        }
        t = not_null(v_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm q_1 (ATerm t)
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
          ATerm r_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_9);
            }
          else
            {
              t = r_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, q_1);
  t = s_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  t = SSL_table_create(not_null(b_12));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  {
    ATerm v_9;
    v_9 = t;
    {
      t = term_w_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_9, term_x_9, not_null(f_12));
          t = table_put_0(t);
        }
      }
    }
    t = v_9;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  t = SSL_table_destroy(not_null(j_12));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  t = SSL_exit(not_null(n_12));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  q_12 :
  if(((ATgetType(r_12) == AT_LIST) && ATisEmpty(r_12)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
        {
          s_12 = ATgetFirst((ATermList) r_12);
          t_12 = (ATerm) ATgetNext((ATermList) r_12);
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
    ATerm w_12 = NULL;
    ATerm z_12 = NULL;
    ATerm z_9 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(c_10);
      }
    else
      {
        t = z_9;
        {
          ATerm x_12 = NULL;
          ATerm y_12 = NULL;
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
          t = (ATerm) ATinsert(ATempty, not_null(x_12));
        }
      }
    {
      z_12 = t;
      if(((w_12 != NULL) && (w_12 != z_12)))
        _fail(z_12);
      else
        w_12 = z_12;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(w_12));
      t = printnl_0(t);
    }
  }
  t = y_9;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm c_13 (ATerm t)
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        t = Cons_2(t, v_60, c_13);
      }
    return(t);
  }
  t = c_13(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  l_13 = t;
  i_13 :
  if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
    {
      j_13 = ATgetFirst((ATermList) l_13);
      k_13 = (ATerm) ATgetNext((ATermList) l_13);
      {
        ATerm o_13 = NULL;
        t = not_null(k_13);
        {
          ATerm l_10;
          l_10 = t;
          {
            ATerm p_13 = NULL,r_13 = NULL,t_13 = NULL;
            ATerm m_10;
            m_10 = t;
            {
              ATerm q_13 = NULL;
              t = i_0(t);
              {
                q_13 = t;
                if(((p_13 != NULL) && (p_13 != q_13)))
                  _fail(q_13);
                else
                  p_13 = q_13;
              }
            }
            t = m_10;
            {
              ATerm s_13 = NULL;
              t = not_null(j_13);
              {
                t = h_0(t);
                {
                  s_13 = t;
                  if(((r_13 != NULL) && (r_13 != s_13)))
                    _fail(s_13);
                  else
                    r_13 = s_13;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_13)), not_null(r_13));
                {
                  t_13 = t;
                  if(((o_13 != NULL) && (o_13 != t_13)))
                    _fail(t_13);
                  else
                    o_13 = t_13;
                }
              }
            }
          }
          t = l_10;
          {
            ATerm r_1 (ATerm t)
            {
              t = not_null(o_13);
              return(t);
            }
            t = reverse_acc_2(t, h_0, r_1);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_13) == AT_LIST) && ATisEmpty(l_13)))
        {
          {
            t = term_l_4;
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
  ATerm t_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_1);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym_Program_1))
    {
      f_14 = ATgetArgument(e_14, 0);
      {
        ATerm i_14 = NULL,k_14 = NULL;
        ATerm j_14 = NULL;
        t = SSLgetAnnotations(not_null(e_14));
        {
          j_14 = t;
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
        }
        {
          t = not_null(f_14);
          {
            ATerm m_14 = NULL;
            t = d_54(t);
            {
              k_14 = t;
              {
                ATerm n_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_14)), not_null(i_14));
                {
                  n_14 = t;
                  if(((m_14 != NULL) && (m_14 != n_14)))
                    _fail(n_14);
                  else
                    m_14 = n_14;
                }
                t = not_null(m_14);
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
  ATerm v_14 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_14 = NULL;
      t = term_d_9;
      {
        t = get_config_0(t);
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
      }
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm x_14 = NULL;
            x_14 = t;
            if(((v_14 != NULL) && (v_14 != x_14)))
              _fail(x_14);
            else
              v_14 = x_14;
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
                ATerm y_14 = NULL;
                ATerm z_14 = NULL;
                z_14 = t;
                if(((y_14 != NULL) && (y_14 != z_14)))
                  _fail(z_14);
                else
                  y_14 = z_14;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_14)), term_e_11);
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
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym__2))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      {
        ATerm f_11;
        f_11 = t;
        t = SSL_printnl(not_null(g_15), not_null(h_15));
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
    ATerm m_15 = NULL;
    ATerm n_15 = NULL;
    n_15 = t;
    if(((m_15 != NULL) && (m_15 != n_15)))
      _fail(n_15);
    else
      m_15 = n_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_3, (ATerm) ATinsert(ATempty, not_null(m_15)));
      t = printnl_0(t);
    }
  }
  t = g_11;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm l_11;
  l_11 = t;
  {
    t = u_71(t);
    t = debug_0(t);
  }
  t = l_11;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym_Undefined_1))
    {
      v_15 = ATgetArgument(u_15, 0);
      {
        ATerm y_15 = NULL,a_16 = NULL;
        ATerm z_15 = NULL;
        t = SSLgetAnnotations(not_null(u_15));
        {
          z_15 = t;
          if(((y_15 != NULL) && (y_15 != z_15)))
            _fail(z_15);
          else
            y_15 = z_15;
        }
        {
          t = not_null(v_15);
          {
            ATerm c_16 = NULL;
            t = e_54(t);
            {
              a_16 = t;
              {
                ATerm d_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_16)), not_null(y_15));
                {
                  d_16 = t;
                  if(((c_16 != NULL) && (c_16 != d_16)))
                    _fail(d_16);
                  else
                    c_16 = d_16;
                }
                t = not_null(c_16);
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
ATerm fetch_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm i_16 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_61, _id);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = Cons_2(t, _id, i_16);
      }
    return(t);
  }
  t = i_16(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_75 (ATerm))
{
  t = fetch_1(t, z_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym_Help_0))
    {
      ATerm p_16 = NULL,r_16 = NULL;
      ATerm o_11;
      o_11 = t;
      {
        ATerm q_16 = NULL;
        t = SSLgetAnnotations(not_null(n_16));
        {
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
        }
      }
      t = o_11;
      {
        ATerm s_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_16));
        {
          s_16 = t;
          if(((r_16 != NULL) && (r_16 != s_16)))
            _fail(s_16);
          else
            r_16 = s_16;
        }
        t = not_null(r_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm p_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_59(t);
      LocalPopChoice(s_11);
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
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym__2))
    {
      z_16 = ATgetArgument(y_16, 0);
      a_17 = ATgetArgument(y_16, 1);
      t = SSL_table_get(not_null(z_16), not_null(a_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym__3))
    {
      i_17 = ATgetArgument(h_17, 0);
      j_17 = ATgetArgument(h_17, 1);
      l_17 = ATgetArgument(h_17, 2);
      {
        ATerm x_11;
        x_11 = t;
        {
          ATerm p_17 = NULL;
          ATerm q_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), not_null(j_17));
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
              q_17 = t;
              if(((p_17 != NULL) && (p_17 != q_17)))
                _fail(q_17);
              else
                p_17 = q_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_17), not_null(j_17), (ATerm) ATinsert(CheckATermList(not_null(p_17)), not_null(l_17)));
            t = table_put_0(t);
          }
        }
        t = x_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm u_17 = NULL;
  ATerm v_17 = NULL;
  t = term_l_4;
  {
    t = e_77(t);
    {
      v_17 = t;
      if(((u_17 != NULL) && (u_17 != v_17)))
        _fail(v_17);
      else
        u_17 = v_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_10, term_a_11, not_null(u_17));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_string(b_18, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
        {
          c_18 = ATgetFirst((ATermList) b_18);
          d_18 = (ATerm) ATgetNext((ATermList) b_18);
          {
            ATerm g_18 = NULL;
            ATerm a_12;
            a_12 = t;
            {
              t = not_null(c_18);
              t = a_0(t);
            }
            t = a_12;
            {
              ATerm h_18 = NULL;
              t = term_l_4;
              {
                t = d_0(t);
                {
                  h_18 = t;
                  if(((g_18 != NULL) && (g_18 != h_18)))
                    _fail(h_18);
                  else
                    g_18 = h_18;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_18)), not_null(g_18));
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
    ATerm p_18 = NULL;
    p_18 = t;
    o_18 :
    if(!(match_string(p_18, "--help")))
      {
        if(!(match_string(p_18, "-h")))
          {
            if(!(match_string(p_18, "-?")))
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
    t = term_g_12;
    return(t);
  }
  t = Option_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  r_18 :
  if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
    {
      t_18 = ATgetFirst((ATermList) s_18);
      u_18 = (ATerm) ATgetNext((ATermList) s_18);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_18)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_18)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_49 (ATerm), ATerm e_49 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
    {
      f_19 = ATgetFirst((ATermList) e_19);
      g_19 = (ATerm) ATgetNext((ATermList) e_19);
      {
        ATerm k_19 = NULL,m_19 = NULL;
        ATerm l_19 = NULL;
        t = SSLgetAnnotations(not_null(e_19));
        {
          l_19 = t;
          if(((k_19 != NULL) && (k_19 != l_19)))
            _fail(l_19);
          else
            k_19 = l_19;
        }
        {
          t = not_null(f_19);
          {
            ATerm o_19 = NULL;
            t = d_49(t);
            {
              m_19 = t;
              {
                t = not_null(g_19);
                {
                  ATerm q_19 = NULL;
                  t = e_49(t);
                  {
                    o_19 = t;
                    {
                      ATerm r_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_19)), not_null(m_19)), not_null(k_19));
                      {
                        r_19 = t;
                        if(((q_19 != NULL) && (q_19 != r_19)))
                          _fail(r_19);
                        else
                          q_19 = r_19;
                      }
                      t = not_null(q_19);
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
  ATerm i_20 = NULL;
  i_20 = t;
  h_20 :
  if(((ATgetType(i_20) == AT_LIST) && ATisEmpty(i_20)))
    {
      {
        ATerm k_20 = NULL,m_20 = NULL;
        ATerm h_12;
        h_12 = t;
        {
          ATerm l_20 = NULL;
          t = SSLgetAnnotations(not_null(i_20));
          {
            l_20 = t;
            if(((k_20 != NULL) && (k_20 != l_20)))
              _fail(l_20);
            else
              k_20 = l_20;
          }
        }
        t = h_12;
        {
          ATerm n_20 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_20));
          {
            n_20 = t;
            if(((m_20 != NULL) && (m_20 != n_20)))
              _fail(n_20);
            else
              m_20 = n_20;
          }
          t = not_null(m_20);
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
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_4, not_null(u_20), not_null(v_20));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm i_12;
  i_12 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_12;
        t = c_77(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
        }
      }
  }
  t = i_12;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm d_21 = NULL;
      ATerm o_12;
      o_12 = t;
      {
        ATerm b_21 = NULL;
        ATerm c_21 = NULL;
        c_21 = t;
        if(((b_21 != NULL) && (b_21 != c_21)))
          _fail(c_21);
        else
          b_21 = c_21;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(b_21));
          t = set_config_0(t);
        }
      }
      t = o_12;
      {
        ATerm e_21 = NULL;
        e_21 = t;
        if(((d_21 != NULL) && (d_21 != e_21)))
          _fail(e_21);
        else
          d_21 = e_21;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_21));
      }
      return(t);
    }
    ATerm d_2 (ATerm t)
    {
      ATerm p_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_13);
            }
          else
            {
              t = v_12;
              {
                t = c_77(t);
                t = Cons_2(t, _id, d_2);
              }
            }
          LocalPopChoice(u_12);
        }
      else
        {
          t = p_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_2, d_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  ATerm b_13;
  b_13 = t;
  {
    ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
    s_21 = t;
    j_21 :
    if(match_cons(s_21, sym__3))
      {
        t_21 = ATgetArgument(s_21, 0);
        u_21 = ATgetArgument(s_21, 1);
        v_21 = ATgetArgument(s_21, 2);
        {
          if(((k_21 != NULL) && (k_21 != t_21)))
            _fail(t_21);
          else
            k_21 = t_21;
          {
            if(((l_21 != NULL) && (l_21 != u_21)))
              _fail(u_21);
            else
              l_21 = u_21;
            {
              if(((m_21 != NULL) && (m_21 != v_21)))
                _fail(v_21);
              else
                m_21 = v_21;
              t = SSL_table_put(not_null(k_21), not_null(l_21), not_null(m_21));
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
ATerm parse_options_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm y_21 = NULL;
  ATerm d_13;
  d_13 = t;
  {
    t = term_e_13;
    t = table_put_0(t);
  }
  t = d_13;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm f_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_77(t);
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
      int m_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_13;
          n_13 = t;
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_12;
                t = get_config_0(t);
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                t = fetch_1(t, Help_0);
              }
          }
          t = n_13;
          {
            t = system_usage_0(t);
            {
              t = term_a_5;
              t = exit_0(t);
            }
          }
          LocalPopChoice(m_13);
        }
      else
        {
          t = h_13;
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm k_2 (ATerm t)
                  {
                    ATerm z_21 = NULL;
                    z_21 = t;
                    if(((y_21 != NULL) && (y_21 != z_21)))
                      _fail(z_21);
                    else
                      y_21 = z_21;
                    return(t);
                  }
                  t = Undefined_1(t, k_2);
                  return(t);
                }
                t = fetch_1(t, j_2);
                {
                  ATerm m_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), term_y_13);
                    return(t);
                  }
                  t = say_1(t, m_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_b_8;
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
ATerm option_wrap_4 (ATerm t, ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm))
{
  t = parse_options_1(t, y_74);
  {
    t = store_options_0(t);
    {
      t = a_75(t);
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_74);
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm c_14 = t;
              int g_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_14);
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
ATerm option_wrap_2 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm))
{
  t = option_wrap_4(t, c_75, default_usage_0, _id, d_75);
  return(t);
}
ATerm cp_file_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm d_22 = NULL,f_22 = NULL;
    ATerm h_14;
    h_14 = t;
    {
      ATerm e_22 = NULL;
      ATerm l_14 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_7;
          t = get_config_0(t);
          LocalPopChoice(o_14);
        }
      else
        {
          t = l_14;
          t = term_p_14;
        }
      {
        e_22 = t;
        if(((d_22 != NULL) && (d_22 != e_22)))
          _fail(e_22);
        else
          d_22 = e_22;
      }
    }
    t = h_14;
    {
      ATerm j_22 = NULL;
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_6;
          t = get_config_0(t);
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
          t = term_f_10;
        }
      {
        j_22 = t;
        if(((f_22 != NULL) && (f_22 != j_22)))
          _fail(j_22);
        else
          f_22 = j_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_22), not_null(f_22));
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

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Scopes_0;
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
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_l_14;
ATerm term_u_13;
ATerm term_c_13;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_h_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_j_4;
ATerm term_h_4;
ATerm term_q_3;
void init_constant_terms (void)
{
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym__2, term_l_4, term_m_4);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym__2, term_a_5, term_b_5);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_5);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym__2, term_r_5, term_m_4);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_m_4);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_m_4);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__3, term_y_10, term_b_11, (ATerm) ATempty);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm copy_file_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm x_50 (ATerm), ATerm y_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_78 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm f_71 (ATerm), ATerm g_71 (ATerm));
ATerm crush_2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_77 (ATerm));
ATerm map_1 (ATerm, ATerm r_64 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_77 (ATerm));
ATerm Program_1 (ATerm, ATerm b_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_78 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm a_76 (ATerm), ATerm b_76 (ATerm));
ATerm cp_file_0 (ATerm);
ATerm main_0 (ATerm);
ATerm copy_file_0 (ATerm t)
{
  ATerm r_0 = NULL,f_1 = NULL,g_1 = NULL;
  r_0 = t;
  q_0 :
  if(match_cons(r_0, sym__2))
    {
      f_1 = ATgetArgument(r_0, 0);
      g_1 = ATgetArgument(r_0, 1);
      t = SSL_copy(not_null(f_1), not_null(g_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_1 = NULL;
  y_1 = t;
  t = SSL_implode_string(not_null(y_1));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_2 = t;
  int i_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_3);
    }
  else
    {
      t = i_2;
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
        d_2 = t;
        c_2 :
        if(((ATgetType(d_2) == AT_LIST) && !(ATisEmpty(d_2))))
          {
            e_2 = ATgetFirst((ATermList) d_2);
            f_2 = (ATerm) ATgetNext((ATermList) d_2);
            {
              t = not_null(e_2);
              {
                ATerm b_0 (ATerm t)
                {
                  t = not_null(f_2);
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
  ATerm p_2 = NULL;
  ATerm r_2 = NULL;
  p_2 = t;
  {
    ATerm s_2 = NULL;
    ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
    t = not_null(p_2);
    {
      s_2 = t;
      {
        t = SSL_explode_term(not_null(s_2));
        {
          u_2 = t;
          n_2 :
          if(match_cons(u_2, sym__2))
            {
              v_2 = ATgetArgument(u_2, 0);
              w_2 = ATgetArgument(u_2, 1);
              o_2 :
              if(match_string(v_2, ""))
                {
                  if(((r_2 != NULL) && (r_2 != w_2)))
                    _fail(w_2);
                  else
                    r_2 = w_2;
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
      t = not_null(r_2);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm j_3 = t;
    int l_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_3);
        ;
        LocalPopChoice(l_3);
      }
    else
      {
        t = j_3;
        {
          t = Nil_0(t);
          t = g_65(t);
        }
      }
    return(t);
  }
  t = a_3(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      {
        t = not_null(e_3);
        {
          ATerm c_0 (ATerm t)
          {
            t = not_null(f_3);
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
  ATerm m_3 = t;
  int n_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_3);
    }
  else
    {
      t = m_3;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  t = SSL_explode_string(not_null(k_3));
  return(t);
}
ATerm _2 (ATerm t, ATerm x_50 (ATerm), ATerm y_50 (ATerm))
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      {
        ATerm z_3 = NULL,b_4 = NULL;
        ATerm a_4 = NULL;
        t = SSLgetAnnotations(not_null(t_3));
        {
          a_4 = t;
          if(((z_3 != NULL) && (z_3 != a_4)))
            _fail(a_4);
          else
            z_3 = a_4;
        }
        {
          t = not_null(u_3);
          {
            ATerm d_4 = NULL;
            t = x_50(t);
            {
              b_4 = t;
              {
                t = not_null(v_3);
                {
                  ATerm f_4 = NULL;
                  t = y_50(t);
                  {
                    d_4 = t;
                    {
                      ATerm g_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_4), not_null(d_4)), not_null(z_3));
                      {
                        g_4 = t;
                        if(((f_4 != NULL) && (f_4 != g_4)))
                          _fail(g_4);
                        else
                          f_4 = g_4;
                      }
                      t = not_null(f_4);
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
ATerm debug_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm o_3;
  o_3 = t;
  {
    ATerm o_4 = NULL,q_4 = NULL;
    ATerm p_3;
    p_3 = t;
    {
      ATerm p_4 = NULL;
      t = l_78(t);
      {
        p_4 = t;
        if(((o_4 != NULL) && (o_4 != p_4)))
          _fail(p_4);
        else
          o_4 = p_4;
      }
    }
    t = p_3;
    {
      ATerm r_4 = NULL;
      r_4 = t;
      if(((q_4 != NULL) && (q_4 != r_4)))
        _fail(r_4);
      else
        q_4 = r_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_4)), not_null(o_4)));
        t = printnl_0(t);
      }
    }
  }
  t = o_3;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  t = SSL_is_string(not_null(v_4));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_3 = t;
  int w_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(w_3);
    }
  else
    {
      t = r_3;
      {
        ATerm x_3 = t;
        int y_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_0);
            ;
            LocalPopChoice(y_3);
          }
        else
          {
            t = x_3;
            {
              ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
              e_5 = t;
              d_5 :
              if(match_cons(e_5, sym_Path_1))
                {
                  f_5 = ATgetArgument(e_5, 0);
                  t = not_null(f_5);
                }
              else
                {
                  if(match_cons(e_5, sym_Var_1))
                    {
                      f_5 = ATgetArgument(e_5, 0);
                      {
                        t = not_null(f_5);
                        {
                          ATerm c_4 = t;
                          int e_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_4);
                            }
                          else
                            {
                              t = c_4;
                              {
                                ATerm f_0 (ATerm t)
                                {
                                  t = term_h_4;
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
                      if(match_cons(e_5, sym_Prefix_2))
                        {
                          f_5 = ATgetArgument(e_5, 0);
                          g_5 = ATgetArgument(e_5, 1);
                          {
                            ATerm l_5 = NULL,n_5 = NULL;
                            ATerm i_4;
                            i_4 = t;
                            {
                              ATerm m_5 = NULL;
                              t = not_null(f_5);
                              {
                                t = eval_config_0(t);
                                {
                                  m_5 = t;
                                  if(((l_5 != NULL) && (l_5 != m_5)))
                                    _fail(m_5);
                                  else
                                    l_5 = m_5;
                                }
                              }
                            }
                            t = i_4;
                            {
                              ATerm o_5 = NULL;
                              t = not_null(g_5);
                              {
                                t = eval_config_0(t);
                                {
                                  o_5 = t;
                                  if(((n_5 != NULL) && (n_5 != o_5)))
                                    _fail(o_5);
                                  else
                                    n_5 = o_5;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), not_null(n_5));
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
  ATerm w_5 = NULL;
  w_5 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_4, not_null(w_5));
    {
      t = table_get_0(t);
      {
        ATerm m_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_4;
            k_4 = t;
            {
              ATerm y_5 = NULL;
              ATerm z_5 = NULL;
              z_5 = t;
              if(((y_5 != NULL) && (y_5 != z_5)))
                _fail(z_5);
              else
                y_5 = z_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_4, not_null(w_5), not_null(y_5));
                t = table_put_0(t);
              }
            }
            t = k_4;
          }
          return(t);
        }
        t = try_1(t, m_0);
      }
    }
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm d_6 = NULL;
    d_6 = t;
    c_6 :
    if(!(match_string(d_6, "-v")))
      {
        if(!(match_string(d_6, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = term_n_4;
    t = set_config_0(t);
    t = term_s_4;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = term_t_4;
    return(t);
  }
  t = Option_3(t, n_0, o_0, p_0);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm g_6 = NULL;
    g_6 = t;
    e_6 :
    if(!(match_string(g_6, "-k")))
      {
        if(!(match_string(g_6, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_4;
    u_4 = t;
    {
      ATerm h_6 = NULL;
      ATerm i_6 = NULL;
      t = string_to_int_0(t);
      {
        i_6 = t;
        if(((h_6 != NULL) && (h_6 != i_6)))
          _fail(i_6);
        else
          h_6 = i_6;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_4, not_null(h_6));
        t = set_config_0(t);
      }
    }
    t = u_4;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = term_x_4;
    return(t);
  }
  t = ArgOption_3(t, s_0, t_0, u_0);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  t = SSL_string_to_int(not_null(l_6));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_4 = t;
  int z_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm t_6 = NULL;
        t_6 = t;
        o_6 :
        if(!(match_string(t_6, "-S")))
          {
            if(!(match_string(t_6, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        t = term_c_5;
        t = set_config_0(t);
        t = term_h_5;
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        t = term_i_5;
        return(t);
      }
      t = Option_3(t, v_0, w_0, x_0);
      ;
      LocalPopChoice(z_4);
    }
  else
    {
      t = y_4;
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm u_6 = NULL;
              u_6 = t;
              p_6 :
              if(!(match_string(u_6, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_0 (ATerm t)
            {
              ATerm x_6 = NULL;
              ATerm p_5;
              p_5 = t;
              {
                ATerm v_6 = NULL;
                ATerm w_6 = NULL;
                t = string_to_int_0(t);
                {
                  w_6 = t;
                  if(((v_6 != NULL) && (v_6 != w_6)))
                    _fail(w_6);
                  else
                    v_6 = w_6;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_5, not_null(v_6));
                  t = set_config_0(t);
                }
              }
              t = p_5;
              {
                ATerm y_6 = NULL;
                y_6 = t;
                if(((x_6 != NULL) && (x_6 != y_6)))
                  _fail(y_6);
                else
                  x_6 = y_6;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_6));
              }
              return(t);
            }
            ATerm a_1 (ATerm t)
            {
              t = term_q_5;
              return(t);
            }
            t = ArgOption_3(t, y_0, z_0, a_1);
            ;
            LocalPopChoice(k_5);
          }
        else
          {
            t = j_5;
            {
              ATerm b_1 (ATerm t)
              {
                ATerm z_6 = NULL;
                z_6 = t;
                s_6 :
                if(!(match_string(z_6, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_1 (ATerm t)
              {
                t = term_s_5;
                t = set_config_0(t);
                t = term_t_5;
                return(t);
              }
              ATerm d_1 (ATerm t)
              {
                t = term_u_5;
                return(t);
              }
              t = Option_3(t, b_1, c_1, d_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm v_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_5);
    }
  else
    {
      t = v_5;
      {
        ATerm a_6 = t;
        int b_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(b_6);
          }
        else
          {
            t = a_6;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_7 = NULL;
    f_7 = t;
    c_7 :
    if(!(match_string(f_7, "-o")))
      {
        if(!(match_string(f_7, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm i_7 = NULL;
    ATerm f_6;
    f_6 = t;
    {
      ATerm g_7 = NULL;
      ATerm h_7 = NULL;
      h_7 = t;
      if(((g_7 != NULL) && (g_7 != h_7)))
        _fail(h_7);
      else
        g_7 = h_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(g_7));
        t = set_config_0(t);
      }
    }
    t = f_6;
    {
      ATerm j_7 = NULL;
      j_7 = t;
      if(((i_7 != NULL) && (i_7 != j_7)))
        _fail(j_7);
      else
        i_7 = j_7;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_7));
    }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_k_6;
    return(t);
  }
  t = ArgOption_3(t, e_1, h_1, i_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm n_7 = NULL;
          n_7 = t;
          m_7 :
          if(!(match_string(n_7, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          t = term_r_6;
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
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  t_7 = t;
  r_7 :
  if(match_string(t_7, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
        {
          u_7 = ATgetFirst((ATermList) t_7);
          v_7 = (ATerm) ATgetNext((ATermList) t_7);
          s_7 :
          if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
            {
              w_7 = ATgetFirst((ATermList) v_7);
              x_7 = (ATerm) ATgetNext((ATermList) v_7);
              {
                ATerm b_8 = NULL;
                ATerm d_7;
                d_7 = t;
                {
                  t = not_null(u_7);
                  t = j_0(t);
                }
                t = d_7;
                {
                  ATerm c_8 = NULL;
                  t = not_null(w_7);
                  {
                    t = k_0(t);
                    {
                      c_8 = t;
                      if(((b_8 != NULL) && (b_8 != c_8)))
                        _fail(c_8);
                      else
                        b_8 = c_8;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_7)), not_null(b_8));
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
  ATerm m_1 (ATerm t)
  {
    ATerm j_8 = NULL;
    j_8 = t;
    g_8 :
    if(!(match_string(j_8, "-i")))
      {
        if(!(match_string(j_8, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm m_8 = NULL;
    ATerm e_7;
    e_7 = t;
    {
      ATerm k_8 = NULL;
      ATerm l_8 = NULL;
      l_8 = t;
      if(((k_8 != NULL) && (k_8 != l_8)))
        _fail(l_8);
      else
        k_8 = l_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_7, not_null(k_8));
        t = set_config_0(t);
      }
    }
    t = e_7;
    {
      ATerm n_8 = NULL;
      n_8 = t;
      if(((m_8 != NULL) && (m_8 != n_8)))
        _fail(n_8);
      else
        m_8 = n_8;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_8));
    }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_l_7;
    return(t);
  }
  t = ArgOption_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm q_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(y_7);
          }
        else
          {
            t = q_7;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_8 = NULL;
  ATerm z_7;
  z_7 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm t_8 = NULL,u_8 = NULL;
      t_8 = t;
      r_8 :
      if(match_cons(t_8, sym_Program_1))
        {
          u_8 = ATgetArgument(t_8, 0);
          if(((s_8 != NULL) && (s_8 != u_8)))
            _fail(u_8);
          else
            s_8 = u_8;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), not_null(s_8)), term_a_8));
      {
        t = printnl_0(t);
        {
          t = term_e_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATempty, term_f_8));
  {
    t = printnl_0(t);
    {
      t = term_e_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  t = SSL_TicksToSeconds(not_null(x_8));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_9), not_null(e_9));
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            t = SSL_addr(not_null(d_9), not_null(e_9));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_71 (ATerm), ATerm g_71 (ATerm))
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_71(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
        l_9 = t;
        k_9 :
        if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
          {
            m_9 = ATgetFirst((ATermList) l_9);
            n_9 = (ATerm) ATgetNext((ATermList) l_9);
            {
              ATerm q_9 = NULL;
              ATerm r_9 = NULL;
              t = not_null(n_9);
              {
                t = foldr_2(t, f_71, g_71);
                {
                  r_9 = t;
                  if(((q_9 != NULL) && (q_9 != r_9)))
                    _fail(r_9);
                  else
                    q_9 = r_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(q_9));
                t = g_71(t);
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
ATerm crush_2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm y_9 = NULL;
  ATerm a_10 = NULL;
  y_9 = t;
  {
    ATerm b_10 = NULL;
    ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
    t = not_null(y_9);
    {
      b_10 = t;
      {
        t = SSL_explode_term(not_null(b_10));
        {
          d_10 = t;
          x_9 :
          if(match_cons(d_10, sym__2))
            {
              e_10 = ATgetArgument(d_10, 0);
              f_10 = ATgetArgument(d_10, 1);
              if(((a_10 != NULL) && (a_10 != f_10)))
                _fail(f_10);
              else
                a_10 = f_10;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_10);
      t = foldr_2(t, d_70, e_70);
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
    ATerm q_1 (ATerm t)
    {
      t = term_b_5;
      return(t);
    }
    t = crush_2(t, q_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym__2))
    {
      m_10 = ATgetArgument(l_10, 0);
      n_10 = ATgetArgument(l_10, 1);
      {
        ATerm q_8;
        q_8 = t;
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_10), not_null(n_10));
              ;
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              t = SSL_gtr(not_null(m_10), not_null(n_10));
            }
        }
        t = q_8;
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
  ATerm t_10 = NULL;
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
      u_10 = t;
      s_10 :
      if(match_cons(u_10, sym__2))
        {
          v_10 = ATgetArgument(u_10, 0);
          w_10 = ATgetArgument(u_10, 1);
          {
            if(((t_10 != NULL) && (t_10 != v_10)))
              _fail(v_10);
            else
              t_10 = v_10;
            if(((t_10 != NULL) && (t_10 != w_10)))
              _fail(w_10);
            else
              t_10 = w_10;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm a_9;
    a_9 = t;
    {
      ATerm z_10 = NULL;
      ATerm a_11 = NULL;
      t = term_a_5;
      {
        t = get_config_0(t);
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), term_e_8);
        t = geq_0(t);
      }
    }
    t = a_9;
    t = g_59(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm e_11 = NULL,g_11 = NULL;
    ATerm f_9;
    f_9 = t;
    {
      ATerm f_11 = NULL;
      t = run_time_0(t);
      {
        f_11 = t;
        if(((e_11 != NULL) && (e_11 != f_11)))
          _fail(f_11);
        else
          e_11 = f_11;
      }
    }
    t = f_9;
    {
      ATerm h_11 = NULL;
      t = term_g_9;
      {
        t = get_config_0(t);
        {
          h_11 = t;
          if(((g_11 != NULL) && (g_11 != h_11)))
            _fail(h_11);
          else
            g_11 = h_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), not_null(e_11)), term_h_9), not_null(g_11)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_1);
  {
    t = term_b_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Version_0))
    {
      ATerm q_11 = NULL,s_11 = NULL;
      ATerm j_9;
      j_9 = t;
      {
        ATerm r_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
      }
      t = j_9;
      {
        ATerm t_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_11));
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
        t = not_null(s_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_1);
  t = q_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_11 = NULL;
  y_11 = t;
  t = SSL_table_create(not_null(y_11));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  {
    ATerm u_9;
    u_9 = t;
    {
      t = term_v_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_w_9, not_null(c_12));
          t = table_put_0(t);
        }
      }
    }
    t = u_9;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  t = SSL_table_destroy(not_null(g_12));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  t = SSL_exit(not_null(k_12));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  n_12 :
  if(((ATgetType(o_12) == AT_LIST) && ATisEmpty(o_12)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
        {
          p_12 = ATgetFirst((ATermList) o_12);
          q_12 = (ATerm) ATgetNext((ATermList) o_12);
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
  ATerm z_9;
  z_9 = t;
  {
    ATerm t_12 = NULL;
    ATerm w_12 = NULL;
    ATerm c_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = c_10;
        {
          ATerm u_12 = NULL;
          ATerm v_12 = NULL;
          v_12 = t;
          if(((u_12 != NULL) && (u_12 != v_12)))
            _fail(v_12);
          else
            u_12 = v_12;
          t = (ATerm) ATinsert(ATempty, not_null(u_12));
        }
      }
    {
      w_12 = t;
      if(((t_12 != NULL) && (t_12 != w_12)))
        _fail(w_12);
      else
        t_12 = w_12;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(t_12));
      t = printnl_0(t);
    }
  }
  t = z_9;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm z_12 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = Cons_2(t, r_64, z_12);
      }
    return(t);
  }
  t = z_12(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  i_13 = t;
  f_13 :
  if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
    {
      g_13 = ATgetFirst((ATermList) i_13);
      h_13 = (ATerm) ATgetNext((ATermList) i_13);
      {
        ATerm l_13 = NULL;
        t = not_null(h_13);
        {
          ATerm o_10;
          o_10 = t;
          {
            ATerm m_13 = NULL,o_13 = NULL,q_13 = NULL;
            ATerm p_10;
            p_10 = t;
            {
              ATerm n_13 = NULL;
              t = i_0(t);
              {
                n_13 = t;
                if(((m_13 != NULL) && (m_13 != n_13)))
                  _fail(n_13);
                else
                  m_13 = n_13;
              }
            }
            t = p_10;
            {
              ATerm p_13 = NULL;
              t = not_null(g_13);
              {
                t = h_0(t);
                {
                  p_13 = t;
                  if(((o_13 != NULL) && (o_13 != p_13)))
                    _fail(p_13);
                  else
                    o_13 = p_13;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_13)), not_null(o_13));
                {
                  q_13 = t;
                  if(((l_13 != NULL) && (l_13 != q_13)))
                    _fail(q_13);
                  else
                    l_13 = q_13;
                }
              }
            }
          }
          t = o_10;
          {
            ATerm u_1 (ATerm t)
            {
              t = not_null(l_13);
              return(t);
            }
            t = reverse_acc_2(t, h_0, u_1);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_13) == AT_LIST) && ATisEmpty(i_13)))
        {
          {
            t = term_m_4;
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
  ATerm v_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_1);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym_Program_1))
    {
      c_14 = ATgetArgument(b_14, 0);
      {
        ATerm f_14 = NULL,h_14 = NULL;
        ATerm g_14 = NULL;
        t = SSLgetAnnotations(not_null(b_14));
        {
          g_14 = t;
          if(((f_14 != NULL) && (f_14 != g_14)))
            _fail(g_14);
          else
            f_14 = g_14;
        }
        {
          t = not_null(c_14);
          {
            ATerm j_14 = NULL;
            t = b_53(t);
            {
              h_14 = t;
              {
                ATerm k_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_14)), not_null(f_14));
                {
                  k_14 = t;
                  if(((j_14 != NULL) && (j_14 != k_14)))
                    _fail(k_14);
                  else
                    j_14 = k_14;
                }
                t = not_null(j_14);
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
  ATerm t_14 = NULL;
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14 = NULL;
      t = term_g_9;
      {
        t = get_config_0(t);
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
      }
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            ATerm v_14 = NULL;
            v_14 = t;
            if(((t_14 != NULL) && (t_14 != v_14)))
              _fail(v_14);
            else
              t_14 = v_14;
            return(t);
          }
          t = Program_1(t, x_1);
          return(t);
        }
        t = option_defined_1(t, w_1);
      }
    }
  {
    ATerm z_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        t = not_null(t_14);
        return(t);
      }
      t = short_description_1(t, a_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, z_1);
    {
      t = term_x_10;
      {
        t = echo_0(t);
        {
          t = term_c_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_2 (ATerm t)
                {
                  ATerm w_14 = NULL;
                  ATerm x_14 = NULL;
                  x_14 = t;
                  if(((w_14 != NULL) && (w_14 != x_14)))
                    _fail(x_14);
                  else
                    w_14 = x_14;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_14)), term_d_11);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_2);
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm y_14 = NULL;
                    ATerm z_14 = NULL;
                    ATerm h_2 (ATerm t)
                    {
                      t = not_null(t_14);
                      return(t);
                    }
                    t = long_description_1(t, h_2);
                    {
                      z_14 = t;
                      if(((y_14 != NULL) && (y_14 != z_14)))
                        _fail(z_14);
                      else
                        y_14 = z_14;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_14)), term_i_11);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_2);
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym__2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      {
        ATerm j_11;
        j_11 = t;
        t = SSL_printnl(not_null(h_15), not_null(i_15));
        t = j_11;
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
  ATerm k_11;
  k_11 = t;
  {
    ATerm n_15 = NULL;
    ATerm o_15 = NULL;
    o_15 = t;
    if(((n_15 != NULL) && (n_15 != o_15)))
      _fail(o_15);
    else
      n_15 = o_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATempty, not_null(n_15)));
      t = printnl_0(t);
    }
  }
  t = k_11;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm l_11;
  l_11 = t;
  {
    t = m_78(t);
    t = debug_0(t);
  }
  t = l_11;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_53 (ATerm))
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
            t = c_53(t);
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
ATerm fetch_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm j_16 (ATerm t)
  {
    ATerm m_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_65, _id);
        ;
        LocalPopChoice(p_11);
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
ATerm option_defined_1 (ATerm t, ATerm x_76 (ATerm))
{
  t = fetch_1(t, x_76);
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
      ATerm u_11;
      u_11 = t;
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
      t = u_11;
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
ATerm try_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_62(t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym__2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      t = SSL_table_get(not_null(a_17), not_null(b_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym__3))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      l_17 = ATgetArgument(i_17, 2);
      {
        ATerm x_11;
        x_11 = t;
        {
          ATerm p_17 = NULL;
          ATerm q_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_17), not_null(k_17));
          {
            ATerm z_11 = t;
            int a_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_12);
              }
            else
              {
                t = z_11;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_17), not_null(k_17), (ATerm) ATinsert(CheckATermList(not_null(p_17)), not_null(l_17)));
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
ATerm register_usage_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm u_17 = NULL;
  ATerm v_17 = NULL;
  t = term_m_4;
  {
    t = c_78(t);
    {
      v_17 = t;
      if(((u_17 != NULL) && (u_17 != v_17)))
        _fail(v_17);
      else
        u_17 = v_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_10, term_b_11, not_null(u_17));
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
            ATerm b_12;
            b_12 = t;
            {
              t = not_null(c_18);
              t = a_0(t);
            }
            t = b_12;
            {
              ATerm h_18 = NULL;
              t = term_m_4;
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
  ATerm j_2 (ATerm t)
  {
    ATerm m_18 = NULL;
    m_18 = t;
    l_18 :
    if(!(match_string(m_18, "--help")))
      {
        if(!(match_string(m_18, "-h")))
          {
            if(!(match_string(m_18, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_e_12;
    {
      t = set_config_0(t);
      t = term_f_12;
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_h_12;
    return(t);
  }
  t = Option_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(((ATgetType(p_18) == AT_LIST) && !(ATisEmpty(p_18))))
    {
      q_18 = ATgetFirst((ATermList) p_18);
      r_18 = (ATerm) ATgetNext((ATermList) p_18);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_18)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_18)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm))
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  a_19 :
  if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
    {
      c_19 = ATgetFirst((ATermList) b_19);
      d_19 = (ATerm) ATgetNext((ATermList) b_19);
      {
        ATerm h_19 = NULL,j_19 = NULL;
        ATerm i_19 = NULL;
        t = SSLgetAnnotations(not_null(b_19));
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
        {
          t = not_null(c_19);
          {
            ATerm l_19 = NULL;
            t = g_52(t);
            {
              j_19 = t;
              {
                t = not_null(d_19);
                {
                  ATerm n_19 = NULL;
                  t = h_52(t);
                  {
                    l_19 = t;
                    {
                      ATerm o_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_19)), not_null(j_19)), not_null(h_19));
                      {
                        o_19 = t;
                        if(((n_19 != NULL) && (n_19 != o_19)))
                          _fail(o_19);
                        else
                          n_19 = o_19;
                      }
                      t = not_null(n_19);
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
  ATerm z_19 = NULL;
  z_19 = t;
  y_19 :
  if(((ATgetType(z_19) == AT_LIST) && ATisEmpty(z_19)))
    {
      {
        ATerm b_20 = NULL,d_20 = NULL;
        ATerm i_12;
        i_12 = t;
        {
          ATerm c_20 = NULL;
          t = SSLgetAnnotations(not_null(z_19));
          {
            c_20 = t;
            if(((b_20 != NULL) && (b_20 != c_20)))
              _fail(c_20);
            else
              b_20 = c_20;
          }
        }
        t = i_12;
        {
          ATerm e_20 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_20));
          {
            e_20 = t;
            if(((d_20 != NULL) && (d_20 != e_20)))
              _fail(e_20);
            else
              d_20 = e_20;
          }
          t = not_null(d_20);
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
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_4, not_null(l_20), not_null(m_20));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm j_12;
  j_12 = t;
  {
    ATerm m_2 (ATerm t)
    {
      t = term_l_12;
      t = a_78(t);
      return(t);
    }
    t = try_1(t, m_2);
  }
  t = j_12;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm x_20 = NULL;
      ATerm m_12;
      m_12 = t;
      {
        ATerm v_20 = NULL;
        ATerm w_20 = NULL;
        w_20 = t;
        if(((v_20 != NULL) && (v_20 != w_20)))
          _fail(w_20);
        else
          v_20 = w_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(v_20));
          t = set_config_0(t);
        }
      }
      t = m_12;
      {
        ATerm y_20 = NULL;
        y_20 = t;
        if(((x_20 != NULL) && (x_20 != y_20)))
          _fail(y_20);
        else
          x_20 = y_20;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_20));
      }
      return(t);
    }
    ATerm t_2 (ATerm t)
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(y_12);
            }
          else
            {
              t = x_12;
              {
                t = a_78(t);
                t = Cons_2(t, _id, t_2);
              }
            }
          ;
          LocalPopChoice(s_12);
        }
      else
        {
          t = r_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_2, t_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  ATerm a_13;
  a_13 = t;
  {
    ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
    h_21 = t;
    d_21 :
    if(match_cons(h_21, sym__3))
      {
        i_21 = ATgetArgument(h_21, 0);
        j_21 = ATgetArgument(h_21, 1);
        k_21 = ATgetArgument(h_21, 2);
        {
          if(((e_21 != NULL) && (e_21 != i_21)))
            _fail(i_21);
          else
            e_21 = i_21;
          {
            if(((f_21 != NULL) && (f_21 != j_21)))
              _fail(j_21);
            else
              f_21 = j_21;
            {
              if(((g_21 != NULL) && (g_21 != k_21)))
                _fail(k_21);
              else
                g_21 = k_21;
              t = SSL_table_put(not_null(e_21), not_null(f_21), not_null(g_21));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm n_21 = NULL;
  ATerm b_13;
  b_13 = t;
  {
    t = term_c_13;
    t = table_put_0(t);
  }
  t = b_13;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_77(t);
          ;
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_2);
    {
      ATerm y_2 (ATerm t)
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_13;
            r_13 = t;
            {
              ATerm s_13 = t;
              int t_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_12;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(t_13);
                }
              else
                {
                  t = s_13;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_13;
            {
              t = system_usage_0(t);
              {
                t = term_b_5;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm z_2 (ATerm t)
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm o_21 = NULL;
                  o_21 = t;
                  if(((n_21 != NULL) && (n_21 != o_21)))
                    _fail(o_21);
                  else
                    n_21 = o_21;
                  return(t);
                }
                t = Undefined_1(t, b_3);
                return(t);
              }
              t = option_defined_1(t, z_2);
              {
                ATerm g_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_21)), term_u_13);
                  return(t);
                }
                t = say_1(t, g_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, y_2);
      {
        ATerm v_13;
        v_13 = t;
        {
          t = term_y_10;
          t = table_destroy_0(t);
        }
        t = v_13;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  t = parse_options_1(t, w_75);
  {
    t = store_options_0(t);
    {
      t = y_75(t);
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_75);
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm y_13 = t;
              int z_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_75(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(z_13);
                }
              else
                {
                  t = y_13;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm))
{
  t = option_wrap_4(t, a_76, default_usage_0, _id, b_76);
  return(t);
}
ATerm cp_file_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm s_21 = NULL,u_21 = NULL;
    ATerm d_14;
    d_14 = t;
    {
      ATerm t_21 = NULL;
      ATerm e_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_7;
          t = get_config_0(t);
          ;
          LocalPopChoice(i_14);
        }
      else
        {
          t = e_14;
          t = term_l_14;
        }
      {
        t_21 = t;
        if(((s_21 != NULL) && (s_21 != t_21)))
          _fail(t_21);
        else
          s_21 = t_21;
      }
    }
    t = d_14;
    {
      ATerm v_21 = NULL;
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_j_6;
          t = get_config_0(t);
          ;
          LocalPopChoice(n_14);
        }
      else
        {
          t = m_14;
          t = term_h_10;
        }
      {
        v_21 = t;
        if(((u_21 != NULL) && (u_21 != v_21)))
          _fail(v_21);
        else
          u_21 = v_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_21), not_null(u_21));
        t = copy_file_0(t);
      }
    }
    return(t);
  }
  t = option_wrap_2(t, io_options_0, h_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = cp_file_0(t);
  return(t);
}

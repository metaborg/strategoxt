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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  init_constant_terms();
}
ATerm term_p_16;
ATerm term_y_15;
ATerm term_n_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_11;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_b_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_x_6;
ATerm term_k_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_x_5;
ATerm term_v_5;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_l_4;
void init_constant_terms (void)
{
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_j_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_b_6, term_b_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_j_7);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_j_7);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_j_7);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__3, term_t_13, term_x_13, (ATerm) ATempty);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm foldr_3 (ATerm, ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm crush_3 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm term_size_0 (ATerm);
ATerm _2 (ATerm, ATerm x_47 (ATerm), ATerm y_47 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_63 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_76 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_74 (ATerm));
ATerm debug_1 (ATerm, ATerm t_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm input_file_0 (ATerm);
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
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm crush_2 (ATerm, ATerm h_68 (ATerm), ATerm i_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_76 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_78 (ATerm));
ATerm map_1 (ATerm, ATerm v_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_78 (ATerm));
ATerm Program_1 (ATerm, ATerm m_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_54 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm e_75 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_75 (ATerm));
ATerm main_0 (ATerm);
ATerm foldr_3 (ATerm t, ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  ATerm h_4 = t;
  int j_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_69(t);
      LocalPopChoice(j_4);
    }
  else
    {
      t = h_4;
      {
        ATerm g_1 = NULL,h_1 = NULL,s_1 = NULL;
        g_1 = t;
        f_1 :
        if(((ATgetType(g_1) == AT_LIST) && !(ATisEmpty(g_1))))
          {
            h_1 = ATgetFirst((ATermList) g_1);
            s_1 = (ATerm) ATgetNext((ATermList) g_1);
            {
              ATerm y_1 = NULL,a_2 = NULL;
              ATerm k_4;
              k_4 = t;
              {
                ATerm z_1 = NULL;
                t = not_null(h_1);
                {
                  t = n_69(t);
                  {
                    z_1 = t;
                    if(((y_1 != NULL) && (y_1 != z_1)))
                      _fail(z_1);
                    else
                      y_1 = z_1;
                  }
                }
              }
              t = k_4;
              {
                ATerm b_2 = NULL;
                t = not_null(s_1);
                {
                  t = foldr_3(t, l_69, m_69, n_69);
                  {
                    b_2 = t;
                    if(((a_2 != NULL) && (a_2 != b_2)))
                      _fail(b_2);
                    else
                      a_2 = b_2;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_1), not_null(a_2));
                  t = m_69(t);
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
  return(t);
}
ATerm crush_3 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  ATerm j_2 = NULL;
  ATerm l_2 = NULL;
  j_2 = t;
  {
    ATerm m_2 = NULL;
    ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
    t = not_null(j_2);
    {
      m_2 = t;
      {
        t = SSL_explode_term(not_null(m_2));
        {
          o_2 = t;
          i_2 :
          if(match_cons(o_2, sym__2))
            {
              p_2 = ATgetArgument(o_2, 0);
              q_2 = ATgetArgument(o_2, 1);
              if(((l_2 != NULL) && (l_2 != q_2)))
                _fail(q_2);
              else
                l_2 = q_2;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_2);
      t = foldr_3(t, j_68, k_68, l_68);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_l_4;
    return(t);
  }
  t = crush_3(t, b_0, add_0, term_size_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm x_47 (ATerm), ATerm y_47 (ATerm))
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
  a_3 = t;
  z_2 :
  if(match_cons(a_3, sym__2))
    {
      b_3 = ATgetArgument(a_3, 0);
      c_3 = ATgetArgument(a_3, 1);
      {
        ATerm g_3 = NULL,i_3 = NULL;
        ATerm h_3 = NULL;
        t = SSLgetAnnotations(not_null(a_3));
        {
          h_3 = t;
          if(((g_3 != NULL) && (g_3 != h_3)))
            _fail(h_3);
          else
            g_3 = h_3;
        }
        {
          t = not_null(b_3);
          {
            ATerm k_3 = NULL;
            t = x_47(t);
            {
              i_3 = t;
              {
                t = not_null(c_3);
                {
                  ATerm m_3 = NULL;
                  t = y_47(t);
                  {
                    k_3 = t;
                    {
                      ATerm n_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_3), not_null(k_3)), not_null(g_3));
                      {
                        n_3 = t;
                        if(((m_3 != NULL) && (m_3 != n_3)))
                          _fail(n_3);
                        else
                          m_3 = n_3;
                      }
                      t = not_null(m_3);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm v_3 = NULL;
  ATerm q_4;
  q_4 = t;
  {
    ATerm c_0 (ATerm t)
    {
      ATerm w_3 = NULL,x_3 = NULL;
      w_3 = t;
      u_3 :
      if(match_cons(w_3, sym_Program_1))
        {
          x_3 = ATgetArgument(w_3, 0);
          if(((v_3 != NULL) && (v_3 != x_3)))
            _fail(x_3);
          else
            v_3 = x_3;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, c_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_4), not_null(v_3)), term_s_4));
      {
        t = printnl_0(t);
        {
          t = term_l_4;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_4;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym__2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      {
        ATerm u_4;
        u_4 = t;
        t = SSL_printnl(not_null(c_4), not_null(d_4));
        t = u_4;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  t = SSL_implode_string(not_null(i_4));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      {
        ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL;
        n_4 = t;
        m_4 :
        if(((ATgetType(n_4) == AT_LIST) && !(ATisEmpty(n_4))))
          {
            o_4 = ATgetFirst((ATermList) n_4);
            p_4 = (ATerm) ATgetNext((ATermList) n_4);
            {
              t = not_null(o_4);
              {
                ATerm e_0 (ATerm t)
                {
                  t = not_null(p_4);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_0);
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
  ATerm z_4 = NULL;
  ATerm b_5 = NULL;
  z_4 = t;
  {
    ATerm c_5 = NULL;
    ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
    t = not_null(z_4);
    {
      c_5 = t;
      {
        t = SSL_explode_term(not_null(c_5));
        {
          e_5 = t;
          x_4 :
          if(match_cons(e_5, sym__2))
            {
              f_5 = ATgetArgument(e_5, 0);
              g_5 = ATgetArgument(e_5, 1);
              y_4 :
              if(match_string(f_5, ""))
                {
                  if(((b_5 != NULL) && (b_5 != g_5)))
                    _fail(g_5);
                  else
                    b_5 = g_5;
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
      t = not_null(b_5);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm a_5 = t;
    int d_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_5);
        LocalPopChoice(d_5);
      }
    else
      {
        t = a_5;
        {
          t = Nil_0(t);
          t = k_63(t);
        }
      }
    return(t);
  }
  t = k_5(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
  n_5 = t;
  m_5 :
  if(match_cons(n_5, sym__2))
    {
      o_5 = ATgetArgument(n_5, 0);
      p_5 = ATgetArgument(n_5, 1);
      {
        t = not_null(o_5);
        {
          ATerm f_0 (ATerm t)
          {
            t = not_null(p_5);
            return(t);
          }
          t = at_end_1(t, f_0);
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
  ATerm h_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(i_5);
    }
  else
    {
      t = h_5;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_5 = NULL;
  u_5 = t;
  t = SSL_explode_string(not_null(u_5));
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
  ATerm y_5 = NULL;
  y_5 = t;
  t = SSL_is_string(not_null(y_5));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_5);
    }
  else
    {
      t = j_5;
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_0);
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            {
              ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
              h_6 = t;
              g_6 :
              if(match_cons(h_6, sym_Path_1))
                {
                  i_6 = ATgetArgument(h_6, 0);
                  t = not_null(i_6);
                }
              else
                {
                  if(match_cons(h_6, sym_Var_1))
                    {
                      i_6 = ATgetArgument(h_6, 0);
                      {
                        t = not_null(i_6);
                        {
                          ATerm s_5 = t;
                          int t_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_5);
                            }
                          else
                            {
                              t = s_5;
                              {
                                ATerm n_0 (ATerm t)
                                {
                                  t = term_v_5;
                                  return(t);
                                }
                                t = debug_1(t, n_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_6, sym_Prefix_2))
                        {
                          i_6 = ATgetArgument(h_6, 0);
                          j_6 = ATgetArgument(h_6, 1);
                          {
                            ATerm o_6 = NULL,q_6 = NULL;
                            ATerm w_5;
                            w_5 = t;
                            {
                              ATerm p_6 = NULL;
                              t = not_null(i_6);
                              {
                                t = eval_config_0(t);
                                {
                                  p_6 = t;
                                  if(((o_6 != NULL) && (o_6 != p_6)))
                                    _fail(p_6);
                                  else
                                    o_6 = p_6;
                                }
                              }
                            }
                            t = w_5;
                            {
                              ATerm r_6 = NULL;
                              t = not_null(j_6);
                              {
                                t = eval_config_0(t);
                                {
                                  r_6 = t;
                                  if(((q_6 != NULL) && (q_6 != r_6)))
                                    _fail(r_6);
                                  else
                                    q_6 = r_6;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), not_null(q_6));
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
  ATerm z_6 = NULL;
  z_6 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_5, not_null(z_6));
    {
      t = table_get_0(t);
      {
        ATerm o_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_5;
            z_5 = t;
            {
              ATerm b_7 = NULL;
              ATerm c_7 = NULL;
              c_7 = t;
              if(((b_7 != NULL) && (b_7 != c_7)))
                _fail(c_7);
              else
                b_7 = c_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_5, not_null(z_6), not_null(b_7));
                t = table_put_0(t);
              }
            }
            t = z_5;
          }
          return(t);
        }
        t = try_1(t, o_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_76 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm a_6;
    a_6 = t;
    {
      ATerm g_7 = NULL;
      ATerm h_7 = NULL;
      t = term_b_6;
      {
        t = get_config_0(t);
        {
          h_7 = t;
          if(((g_7 != NULL) && (g_7 != h_7)))
            _fail(h_7);
          else
            g_7 = h_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), term_c_6);
        t = geq_0(t);
      }
    }
    t = a_6;
    t = q_76(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym__2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      t = SSL_WriteToTextFile(not_null(m_7), not_null(n_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym__2))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      t = SSL_WriteToBinaryFile(not_null(u_7), not_null(v_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm d_6;
  d_6 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm e_6 = t;
      int f_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_0 (ATerm t)
          {
            ATerm e_8 = NULL,f_8 = NULL;
            e_8 = t;
            a_8 :
            if(match_cons(e_8, sym_Output_1))
              {
                f_8 = ATgetArgument(e_8, 0);
                if(((d_8 != NULL) && (d_8 != f_8)))
                  _fail(f_8);
                else
                  d_8 = f_8;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_0);
          LocalPopChoice(f_6);
        }
      else
        {
          t = e_6;
          {
            ATerm g_8 = NULL;
            t = term_k_6;
            {
              g_8 = t;
              if(((d_8 != NULL) && (d_8 != g_8)))
                _fail(g_8);
              else
                d_8 = g_8;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_0, _id);
  }
  t = d_6;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        t = not_null(d_8);
        return(t);
      }
      t = split_2(t, t_0, _id);
      return(t);
    }
    t = _2(t, _id, s_0);
    {
      ATerm l_6 = t;
      int m_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm h_8 = NULL;
              h_8 = t;
              c_8 :
              if(!(match_cons(h_8, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_0);
            return(t);
          }
          t = _2(t, u_0, WriteToBinaryFile_0);
          LocalPopChoice(m_6);
        }
      else
        {
          t = l_6;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm n_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  ATerm n_6;
  n_6 = t;
  t = dtime_0(t);
  t = n_6;
  {
    t = x_74(t);
    {
      ATerm s_6;
      s_6 = t;
      {
        ATerm o_8 = NULL;
        t = dtime_0(t);
        {
          o_8 = t;
          if(((n_8 != NULL) && (n_8 != o_8)))
            _fail(o_8);
          else
            n_8 = o_8;
        }
      }
      t = s_6;
      {
        p_8 = t;
        m_8 :
        if(match_cons(p_8, sym__2))
          {
            q_8 = ATgetArgument(p_8, 0);
            r_8 = ATgetArgument(p_8, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_8)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_8))), not_null(r_8));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm t_6;
  t_6 = t;
  {
    ATerm y_8 = NULL,a_9 = NULL;
    ATerm u_6;
    u_6 = t;
    {
      ATerm z_8 = NULL;
      t = t_73(t);
      {
        z_8 = t;
        if(((y_8 != NULL) && (y_8 != z_8)))
          _fail(z_8);
        else
          y_8 = z_8;
      }
    }
    t = u_6;
    {
      ATerm b_9 = NULL;
      b_9 = t;
      if(((a_9 != NULL) && (a_9 != b_9)))
        _fail(b_9);
      else
        a_9 = b_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_9)), not_null(y_8)));
        t = printnl_0(t);
      }
    }
  }
  t = t_6;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm f_9 = NULL;
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL;
      g_9 = t;
      {
        if(((f_9 != NULL) && (f_9 != g_9)))
          _fail(g_9);
        else
          f_9 = g_9;
        t = SSL_ReadFromFile(not_null(f_9));
      }
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
      {
        ATerm w_0 (ATerm t)
        {
          t = term_x_6;
          return(t);
        }
        t = debug_1(t, w_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm k_9 = NULL,m_9 = NULL;
  ATerm y_6;
  y_6 = t;
  {
    ATerm l_9 = NULL;
    t = y_70(t);
    {
      l_9 = t;
      if(((k_9 != NULL) && (k_9 != l_9)))
        _fail(l_9);
      else
        k_9 = l_9;
    }
  }
  t = y_6;
  {
    ATerm n_9 = NULL;
    t = z_70(t);
    {
      n_9 = t;
      if(((m_9 != NULL) && (m_9 != n_9)))
        _fail(n_9);
      else
        m_9 = n_9;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), not_null(m_9));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_9 = NULL;
  ATerm a_7;
  a_7 = t;
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_0 (ATerm t)
        {
          ATerm u_9 = NULL,v_9 = NULL;
          u_9 = t;
          r_9 :
          if(match_cons(u_9, sym_Input_1))
            {
              v_9 = ATgetArgument(u_9, 0);
              if(((t_9 != NULL) && (t_9 != v_9)))
                _fail(v_9);
              else
                t_9 = v_9;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_0);
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        {
          ATerm w_9 = NULL;
          t = term_f_7;
          {
            w_9 = t;
            if(((t_9 != NULL) && (t_9 != w_9)))
              _fail(w_9);
            else
              t_9 = w_9;
          }
        }
      }
  }
  t = a_7;
  {
    ATerm y_0 (ATerm t)
    {
      t = not_null(t_9);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_0);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm a_10 = NULL;
    a_10 = t;
    z_9 :
    if(!(match_string(a_10, "-v")))
      {
        if(!(match_string(a_10, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    t = term_o_7;
    t = set_config_0(t);
    t = term_p_7;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    t = term_q_7;
    return(t);
  }
  t = Option_3(t, z_0, a_1, b_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_10 = NULL;
    d_10 = t;
    b_10 :
    if(!(match_string(d_10, "-k")))
      {
        if(!(match_string(d_10, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm r_7;
    r_7 = t;
    {
      ATerm e_10 = NULL;
      ATerm f_10 = NULL;
      t = string_to_int_0(t);
      {
        f_10 = t;
        if(((e_10 != NULL) && (e_10 != f_10)))
          _fail(f_10);
        else
          e_10 = f_10;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(e_10));
        t = set_config_0(t);
      }
    }
    t = r_7;
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_x_7;
    return(t);
  }
  t = ArgOption_3(t, c_1, d_1, e_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  t = SSL_string_to_int(not_null(i_10));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm q_10 = NULL;
        q_10 = t;
        l_10 :
        if(!(match_string(q_10, "-S")))
          {
            if(!(match_string(q_10, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = term_i_8;
        t = set_config_0(t);
        t = term_j_8;
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = term_k_8;
        return(t);
      }
      t = Option_3(t, i_1, j_1, k_1);
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm l_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              ATerm r_10 = NULL;
              r_10 = t;
              m_10 :
              if(!(match_string(r_10, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              ATerm u_10 = NULL;
              ATerm t_8;
              t_8 = t;
              {
                ATerm s_10 = NULL;
                ATerm t_10 = NULL;
                t = string_to_int_0(t);
                {
                  t_10 = t;
                  if(((s_10 != NULL) && (s_10 != t_10)))
                    _fail(t_10);
                  else
                    s_10 = t_10;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_6, not_null(s_10));
                  t = set_config_0(t);
                }
              }
              t = t_8;
              {
                ATerm v_10 = NULL;
                v_10 = t;
                if(((u_10 != NULL) && (u_10 != v_10)))
                  _fail(v_10);
                else
                  u_10 = v_10;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_10));
              }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              t = term_u_8;
              return(t);
            }
            t = ArgOption_3(t, l_1, m_1, n_1);
            LocalPopChoice(s_8);
          }
        else
          {
            t = l_8;
            {
              ATerm o_1 (ATerm t)
              {
                ATerm w_10 = NULL;
                w_10 = t;
                p_10 :
                if(!(match_string(w_10, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_1 (ATerm t)
              {
                t = term_w_8;
                t = set_config_0(t);
                t = term_x_8;
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = term_c_9;
                return(t);
              }
              t = Option_3(t, o_1, p_1, q_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm c_11 = NULL;
    c_11 = t;
    z_10 :
    if(!(match_string(c_11, "-o")))
      {
        if(!(match_string(c_11, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm f_11 = NULL;
    ATerm j_9;
    j_9 = t;
    {
      ATerm d_11 = NULL;
      ATerm e_11 = NULL;
      e_11 = t;
      if(((d_11 != NULL) && (d_11 != e_11)))
        _fail(e_11);
      else
        d_11 = e_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(d_11));
        t = set_config_0(t);
      }
    }
    t = j_9;
    {
      ATerm g_11 = NULL;
      g_11 = t;
      if(((f_11 != NULL) && (f_11 != g_11)))
        _fail(g_11);
      else
        f_11 = g_11;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_11));
    }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = term_p_9;
    return(t);
  }
  t = ArgOption_3(t, r_1, t_1, u_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = q_9;
      {
        ATerm v_1 (ATerm t)
        {
          ATerm k_11 = NULL;
          k_11 = t;
          j_11 :
          if(!(match_string(k_11, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          t = term_y_9;
          t = set_config_0(t);
          t = term_c_10;
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = term_g_10;
          return(t);
        }
        t = Option_3(t, v_1, w_1, x_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  q_11 = t;
  o_11 :
  if(match_string(q_11, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
        {
          r_11 = ATgetFirst((ATermList) q_11);
          s_11 = (ATerm) ATgetNext((ATermList) q_11);
          p_11 :
          if(((ATgetType(s_11) == AT_LIST) && !(ATisEmpty(s_11))))
            {
              t_11 = ATgetFirst((ATermList) s_11);
              u_11 = (ATerm) ATgetNext((ATermList) s_11);
              {
                ATerm y_11 = NULL;
                ATerm h_10;
                h_10 = t;
                {
                  t = not_null(r_11);
                  t = j_0(t);
                }
                t = h_10;
                {
                  ATerm z_11 = NULL;
                  t = not_null(t_11);
                  {
                    t = k_0(t);
                    {
                      z_11 = t;
                      if(((y_11 != NULL) && (y_11 != z_11)))
                        _fail(z_11);
                      else
                        y_11 = z_11;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_11)), not_null(y_11));
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
  ATerm c_2 (ATerm t)
  {
    ATerm g_12 = NULL;
    g_12 = t;
    d_12 :
    if(!(match_string(g_12, "-i")))
      {
        if(!(match_string(g_12, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm j_12 = NULL;
    ATerm j_10;
    j_10 = t;
    {
      ATerm h_12 = NULL;
      ATerm i_12 = NULL;
      i_12 = t;
      if(((h_12 != NULL) && (h_12 != i_12)))
        _fail(i_12);
      else
        h_12 = i_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(h_12));
        t = set_config_0(t);
      }
    }
    t = j_10;
    {
      ATerm k_12 = NULL;
      k_12 = t;
      if(((j_12 != NULL) && (j_12 != k_12)))
        _fail(k_12);
      else
        j_12 = k_12;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_12));
    }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  t = ArgOption_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = o_10;
      {
        ATerm y_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(a_11);
          }
        else
          {
            t = y_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_r_4, (ATerm) ATinsert(ATempty, term_b_11));
  {
    t = printnl_0(t);
    {
      t = term_l_4;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  t = SSL_TicksToSeconds(not_null(o_12));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_12), not_null(v_12));
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = SSL_addr(not_null(u_12), not_null(v_12));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_69(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
        c_13 = t;
        b_13 :
        if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
          {
            d_13 = ATgetFirst((ATermList) c_13);
            e_13 = (ATerm) ATgetNext((ATermList) c_13);
            {
              ATerm h_13 = NULL;
              ATerm i_13 = NULL;
              t = not_null(e_13);
              {
                t = foldr_2(t, j_69, k_69);
                {
                  i_13 = t;
                  if(((h_13 != NULL) && (h_13 != i_13)))
                    _fail(i_13);
                  else
                    h_13 = i_13;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), not_null(h_13));
                t = k_69(t);
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
ATerm crush_2 (ATerm t, ATerm h_68 (ATerm), ATerm i_68 (ATerm))
{
  ATerm p_13 = NULL;
  ATerm r_13 = NULL;
  p_13 = t;
  {
    ATerm s_13 = NULL;
    ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
    t = not_null(p_13);
    {
      s_13 = t;
      {
        t = SSL_explode_term(not_null(s_13));
        {
          u_13 = t;
          o_13 :
          if(match_cons(u_13, sym__2))
            {
              v_13 = ATgetArgument(u_13, 0);
              w_13 = ATgetArgument(u_13, 1);
              if(((r_13 != NULL) && (r_13 != w_13)))
                _fail(w_13);
              else
                r_13 = w_13;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_13);
      t = foldr_2(t, h_68, i_68);
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
    ATerm f_2 (ATerm t)
    {
      t = term_b_8;
      return(t);
    }
    t = crush_2(t, f_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  b_14 :
  if(match_cons(c_14, sym__2))
    {
      d_14 = ATgetArgument(c_14, 0);
      e_14 = ATgetArgument(c_14, 1);
      {
        ATerm n_11;
        n_11 = t;
        {
          ATerm v_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_14), not_null(e_14));
              LocalPopChoice(w_11);
            }
          else
            {
              t = v_11;
              t = SSL_gtr(not_null(d_14), not_null(e_14));
            }
        }
        t = n_11;
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
  ATerm k_14 = NULL;
  ATerm x_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
      l_14 = t;
      j_14 :
      if(match_cons(l_14, sym__2))
        {
          m_14 = ATgetArgument(l_14, 0);
          n_14 = ATgetArgument(l_14, 1);
          {
            if(((k_14 != NULL) && (k_14 != m_14)))
              _fail(m_14);
            else
              k_14 = m_14;
            if(((k_14 != NULL) && (k_14 != n_14)))
              _fail(n_14);
            else
              k_14 = n_14;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_12);
    }
  else
    {
      t = x_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm b_12;
    b_12 = t;
    {
      ATerm q_14 = NULL;
      ATerm r_14 = NULL;
      t = term_b_6;
      {
        t = get_config_0(t);
        {
          r_14 = t;
          if(((q_14 != NULL) && (q_14 != r_14)))
            _fail(r_14);
          else
            q_14 = r_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), term_l_4);
        t = geq_0(t);
      }
    }
    t = b_12;
    t = p_76(t);
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm v_14 = NULL,x_14 = NULL;
    ATerm c_12;
    c_12 = t;
    {
      ATerm w_14 = NULL;
      t = run_time_0(t);
      {
        w_14 = t;
        if(((v_14 != NULL) && (v_14 != w_14)))
          _fail(w_14);
        else
          v_14 = w_14;
      }
    }
    t = c_12;
    {
      ATerm y_14 = NULL;
      t = term_e_12;
      {
        t = get_config_0(t);
        {
          y_14 = t;
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_12), not_null(v_14)), term_f_12), not_null(x_14)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_2);
  {
    t = term_b_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_Version_0))
    {
      ATerm h_15 = NULL,j_15 = NULL;
      ATerm m_12;
      m_12 = t;
      {
        ATerm i_15 = NULL;
        t = SSLgetAnnotations(not_null(f_15));
        {
          i_15 = t;
          if(((h_15 != NULL) && (h_15 != i_15)))
            _fail(i_15);
          else
            h_15 = i_15;
        }
      }
      t = m_12;
      {
        ATerm k_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_15));
        {
          k_15 = t;
          if(((j_15 != NULL) && (j_15 != k_15)))
            _fail(k_15);
          else
            j_15 = k_15;
        }
        t = not_null(j_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm n_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_12);
      }
    else
      {
        t = n_12;
        {
          ATerm q_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_12);
            }
          else
            {
              t = q_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_2);
  t = v_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_table_create(not_null(p_15));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  {
    ATerm w_12;
    w_12 = t;
    {
      t = term_x_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_12, term_y_12, not_null(t_15));
          t = table_put_0(t);
        }
      }
    }
    t = w_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  t = SSL_table_destroy(not_null(x_15));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_exit(not_null(b_16));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  e_16 :
  if(((ATgetType(f_16) == AT_LIST) && ATisEmpty(f_16)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_16) == AT_LIST) && !(ATisEmpty(f_16))))
        {
          g_16 = ATgetFirst((ATermList) f_16);
          h_16 = (ATerm) ATgetNext((ATermList) f_16);
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
  ATerm z_12;
  z_12 = t;
  {
    ATerm k_16 = NULL;
    ATerm n_16 = NULL;
    ATerm a_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = a_13;
        {
          ATerm l_16 = NULL;
          ATerm m_16 = NULL;
          m_16 = t;
          if(((l_16 != NULL) && (l_16 != m_16)))
            _fail(m_16);
          else
            l_16 = m_16;
          t = (ATerm) ATinsert(ATempty, not_null(l_16));
        }
      }
    {
      n_16 = t;
      if(((k_16 != NULL) && (k_16 != n_16)))
        _fail(n_16);
      else
        k_16 = n_16;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(k_16));
      t = printnl_0(t);
    }
  }
  t = z_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm g_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = g_13;
        t = Cons_2(t, v_62, q_16);
      }
    return(t);
  }
  t = q_16(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  z_16 = t;
  w_16 :
  if(((ATgetType(z_16) == AT_LIST) && !(ATisEmpty(z_16))))
    {
      x_16 = ATgetFirst((ATermList) z_16);
      y_16 = (ATerm) ATgetNext((ATermList) z_16);
      {
        ATerm c_17 = NULL;
        t = not_null(y_16);
        {
          ATerm k_13;
          k_13 = t;
          {
            ATerm d_17 = NULL,f_17 = NULL,h_17 = NULL;
            ATerm l_13;
            l_13 = t;
            {
              ATerm e_17 = NULL;
              t = i_0(t);
              {
                e_17 = t;
                if(((d_17 != NULL) && (d_17 != e_17)))
                  _fail(e_17);
                else
                  d_17 = e_17;
              }
            }
            t = l_13;
            {
              ATerm g_17 = NULL;
              t = not_null(x_16);
              {
                t = h_0(t);
                {
                  g_17 = t;
                  if(((f_17 != NULL) && (f_17 != g_17)))
                    _fail(g_17);
                  else
                    f_17 = g_17;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_17)), not_null(f_17));
                {
                  h_17 = t;
                  if(((c_17 != NULL) && (c_17 != h_17)))
                    _fail(h_17);
                  else
                    c_17 = h_17;
                }
              }
            }
          }
          t = k_13;
          {
            ATerm n_2 (ATerm t)
            {
              t = not_null(c_17);
              return(t);
            }
            t = reverse_acc_2(t, h_0, n_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_16) == AT_LIST) && ATisEmpty(z_16)))
        {
          {
            t = term_j_7;
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
ATerm short_description_1 (ATerm t, ATerm s_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_54 (ATerm))
{
  ATerm s_17 = NULL,t_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_Program_1))
    {
      t_17 = ATgetArgument(s_17, 0);
      {
        ATerm w_17 = NULL,y_17 = NULL;
        ATerm x_17 = NULL;
        t = SSLgetAnnotations(not_null(s_17));
        {
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
        }
        {
          t = not_null(t_17);
          {
            ATerm a_18 = NULL;
            t = m_54(t);
            {
              y_17 = t;
              {
                ATerm b_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_17)), not_null(w_17));
                {
                  b_18 = t;
                  if(((a_18 != NULL) && (a_18 != b_18)))
                    _fail(b_18);
                  else
                    a_18 = b_18;
                }
                t = not_null(a_18);
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
  ATerm k_18 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL;
      t = term_e_12;
      {
        t = get_config_0(t);
        {
          l_18 = t;
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
        }
      }
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm s_2 (ATerm t)
        {
          ATerm t_2 (ATerm t)
          {
            ATerm m_18 = NULL;
            m_18 = t;
            if(((k_18 != NULL) && (k_18 != m_18)))
              _fail(m_18);
            else
              k_18 = m_18;
            return(t);
          }
          t = Program_1(t, t_2);
          return(t);
        }
        t = option_defined_1(t, s_2);
      }
    }
  {
    ATerm u_2 (ATerm t)
    {
      ATerm v_2 (ATerm t)
      {
        t = not_null(k_18);
        return(t);
      }
      t = short_description_1(t, v_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, u_2);
    {
      t = term_q_13;
      {
        t = echo_0(t);
        {
          t = term_y_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm w_2 (ATerm t)
                {
                  ATerm n_18 = NULL;
                  ATerm o_18 = NULL;
                  o_18 = t;
                  if(((n_18 != NULL) && (n_18 != o_18)))
                    _fail(o_18);
                  else
                    n_18 = o_18;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_18)), term_z_13);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, w_2);
                {
                  ATerm x_2 (ATerm t)
                  {
                    ATerm p_18 = NULL;
                    ATerm q_18 = NULL;
                    ATerm y_2 (ATerm t)
                    {
                      t = not_null(k_18);
                      return(t);
                    }
                    t = long_description_1(t, y_2);
                    {
                      q_18 = t;
                      if(((p_18 != NULL) && (p_18 != q_18)))
                        _fail(q_18);
                      else
                        p_18 = q_18;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_18)), term_a_14);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, x_2);
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
ATerm debug_0 (ATerm t)
{
  ATerm f_14;
  f_14 = t;
  {
    ATerm w_18 = NULL;
    ATerm x_18 = NULL;
    x_18 = t;
    if(((w_18 != NULL) && (w_18 != x_18)))
      _fail(x_18);
    else
      w_18 = x_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_4, (ATerm) ATinsert(ATempty, not_null(w_18)));
      t = printnl_0(t);
    }
  }
  t = f_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm g_14;
  g_14 = t;
  {
    t = u_73(t);
    t = debug_0(t);
  }
  t = g_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_54 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_Undefined_1))
    {
      f_19 = ATgetArgument(e_19, 0);
      {
        ATerm n_19 = NULL,p_19 = NULL;
        ATerm o_19 = NULL;
        t = SSLgetAnnotations(not_null(e_19));
        {
          o_19 = t;
          if(((n_19 != NULL) && (n_19 != o_19)))
            _fail(o_19);
          else
            n_19 = o_19;
        }
        {
          t = not_null(f_19);
          {
            ATerm r_19 = NULL;
            t = n_54(t);
            {
              p_19 = t;
              {
                ATerm s_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_19)), not_null(n_19));
                {
                  s_19 = t;
                  if(((r_19 != NULL) && (r_19 != s_19)))
                    _fail(s_19);
                  else
                    r_19 = s_19;
                }
                t = not_null(r_19);
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
ATerm fetch_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm x_19 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_63, _id);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = Cons_2(t, _id, x_19);
      }
    return(t);
  }
  t = x_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_77 (ATerm))
{
  t = fetch_1(t, s_77);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_Help_0))
    {
      ATerm h_20 = NULL,j_20 = NULL;
      ATerm o_14;
      o_14 = t;
      {
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
      }
      t = o_14;
      {
        ATerm k_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_20));
        {
          k_20 = t;
          if(((j_20 != NULL) && (j_20 != k_20)))
            _fail(k_20);
          else
            j_20 = k_20;
        }
        t = not_null(j_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm p_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_54(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = p_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym__2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      t = SSL_table_get(not_null(r_20), not_null(s_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__3))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      c_21 = ATgetArgument(z_20, 2);
      {
        ATerm t_14;
        t_14 = t;
        {
          ATerm g_21 = NULL;
          ATerm h_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), not_null(b_21));
          {
            ATerm u_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_14);
              }
            else
              {
                t = u_14;
                t = (ATerm) ATempty;
              }
            {
              h_21 = t;
              if(((g_21 != NULL) && (g_21 != h_21)))
                _fail(h_21);
              else
                g_21 = h_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_21), not_null(b_21), (ATerm) ATinsert(CheckATermList(not_null(g_21)), not_null(c_21)));
            t = table_put_0(t);
          }
        }
        t = t_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm l_21 = NULL;
  ATerm m_21 = NULL;
  t = term_j_7;
  {
    t = x_78(t);
    {
      m_21 = t;
      if(((l_21 != NULL) && (l_21 != m_21)))
        _fail(m_21);
      else
        l_21 = m_21;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_13, term_x_13, not_null(l_21));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_string(s_21, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
        {
          t_21 = ATgetFirst((ATermList) s_21);
          u_21 = (ATerm) ATgetNext((ATermList) s_21);
          {
            ATerm x_21 = NULL;
            ATerm a_15;
            a_15 = t;
            {
              t = not_null(t_21);
              t = a_0(t);
            }
            t = a_15;
            {
              ATerm y_21 = NULL;
              t = term_j_7;
              {
                t = d_0(t);
                {
                  y_21 = t;
                  if(((x_21 != NULL) && (x_21 != y_21)))
                    _fail(y_21);
                  else
                    x_21 = y_21;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_21)), not_null(x_21));
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
    ATerm d_22 = NULL;
    d_22 = t;
    c_22 :
    if(!(match_string(d_22, "--help")))
      {
        if(!(match_string(d_22, "-h")))
          {
            if(!(match_string(d_22, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_c_15;
    {
      t = set_config_0(t);
      t = term_d_15;
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_g_15;
    return(t);
  }
  t = Option_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
    {
      h_22 = ATgetFirst((ATermList) g_22);
      i_22 = (ATerm) ATgetNext((ATermList) g_22);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_22)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_22)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
    {
      t_22 = ATgetFirst((ATermList) s_22);
      u_22 = (ATerm) ATgetNext((ATermList) s_22);
      {
        ATerm y_22 = NULL,a_23 = NULL;
        ATerm z_22 = NULL;
        t = SSLgetAnnotations(not_null(s_22));
        {
          z_22 = t;
          if(((y_22 != NULL) && (y_22 != z_22)))
            _fail(z_22);
          else
            y_22 = z_22;
        }
        {
          t = not_null(t_22);
          {
            ATerm c_23 = NULL;
            t = g_49(t);
            {
              a_23 = t;
              {
                t = not_null(u_22);
                {
                  ATerm e_23 = NULL;
                  t = h_49(t);
                  {
                    c_23 = t;
                    {
                      ATerm f_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_23)), not_null(a_23)), not_null(y_22));
                      {
                        f_23 = t;
                        if(((e_23 != NULL) && (e_23 != f_23)))
                          _fail(f_23);
                        else
                          e_23 = f_23;
                      }
                      t = not_null(e_23);
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
  ATerm p_23 = NULL;
  p_23 = t;
  o_23 :
  if(((ATgetType(p_23) == AT_LIST) && ATisEmpty(p_23)))
    {
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm l_15;
        l_15 = t;
        {
          ATerm s_23 = NULL;
          t = SSLgetAnnotations(not_null(p_23));
          {
            s_23 = t;
            if(((r_23 != NULL) && (r_23 != s_23)))
              _fail(s_23);
            else
              r_23 = s_23;
          }
        }
        t = l_15;
        {
          ATerm u_23 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_23));
          {
            u_23 = t;
            if(((t_23 != NULL) && (t_23 != u_23)))
              _fail(u_23);
            else
              t_23 = u_23;
          }
          t = not_null(t_23);
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
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_5, not_null(b_24), not_null(c_24));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm m_15;
  m_15 = t;
  {
    ATerm j_3 (ATerm t)
    {
      t = term_n_15;
      t = v_78(t);
      return(t);
    }
    t = try_1(t, j_3);
  }
  t = m_15;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm k_24 = NULL;
      ATerm o_15;
      o_15 = t;
      {
        ATerm i_24 = NULL;
        ATerm j_24 = NULL;
        j_24 = t;
        if(((i_24 != NULL) && (i_24 != j_24)))
          _fail(j_24);
        else
          i_24 = j_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(i_24));
          t = set_config_0(t);
        }
      }
      t = o_15;
      {
        ATerm l_24 = NULL;
        l_24 = t;
        if(((k_24 != NULL) && (k_24 != l_24)))
          _fail(l_24);
        else
          k_24 = l_24;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_24));
      }
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = s_15;
              {
                t = v_78(t);
                t = Cons_2(t, _id, o_3);
              }
            }
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_3, o_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  ATerm v_15;
  v_15 = t;
  {
    ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
    w_24 = t;
    q_24 :
    if(match_cons(w_24, sym__3))
      {
        x_24 = ATgetArgument(w_24, 0);
        y_24 = ATgetArgument(w_24, 1);
        z_24 = ATgetArgument(w_24, 2);
        {
          if(((t_24 != NULL) && (t_24 != x_24)))
            _fail(x_24);
          else
            t_24 = x_24;
          {
            if(((u_24 != NULL) && (u_24 != y_24)))
              _fail(y_24);
            else
              u_24 = y_24;
            {
              if(((v_24 != NULL) && (v_24 != z_24)))
                _fail(z_24);
              else
                v_24 = z_24;
              t = SSL_table_put(not_null(t_24), not_null(u_24), not_null(v_24));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm c_25 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    t = term_y_15;
    t = table_put_0(t);
  }
  t = w_15;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_78(t);
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_3);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_16;
            i_16 = t;
            {
              ATerm j_16 = t;
              int o_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_b_15;
                  t = get_config_0(t);
                  LocalPopChoice(o_16);
                }
              else
                {
                  t = j_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = i_16;
            {
              t = system_usage_0(t);
              {
                t = term_b_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm d_25 = NULL;
                  d_25 = t;
                  if(((c_25 != NULL) && (c_25 != d_25)))
                    _fail(d_25);
                  else
                    c_25 = d_25;
                  return(t);
                }
                t = Undefined_1(t, s_3);
                return(t);
              }
              t = option_defined_1(t, r_3);
              {
                ATerm t_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_25)), term_p_16);
                  return(t);
                }
                t = say_1(t, t_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_4;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_3);
      {
        ATerm r_16;
        r_16 = t;
        {
          t = term_t_13;
          t = table_destroy_0(t);
        }
        t = r_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm e_75 (ATerm))
{
  t = parse_options_1(t, b_75);
  {
    t = store_options_0(t);
    {
      t = d_75(t);
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_75);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_75(t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_75);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_3, u_75, v_75, z_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm i_17;
      i_17 = t;
      {
        ATerm g_25 = NULL;
        ATerm h_25 = NULL;
        t = term_e_12;
        {
          t = get_config_0(t);
          {
            h_25 = t;
            if(((g_25 != NULL) && (g_25 != h_25)))
              _fail(h_25);
            else
              g_25 = h_25;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_4, (ATerm) ATinsert(ATempty, not_null(g_25)));
          t = printnl_0(t);
        }
      }
      t = i_17;
      return(t);
    }
    t = if_verbose2_1(t, f_4);
    return(t);
  }
  t = iowrap_4(t, m_75, n_75, o_75, e_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  t = iowrap_3(t, k_75, l_75, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = _2(t, _id, h_75);
    return(t);
  }
  t = iowrap_2(t, g_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, term_size_0);
  return(t);
}

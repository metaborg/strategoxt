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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_m_16;
ATerm term_v_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_h_11;
ATerm term_t_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_a_9;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_u_6;
ATerm term_g_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_q_5;
ATerm term_o_5;
ATerm term_t_4;
ATerm term_p_4;
ATerm term_m_4;
ATerm term_i_4;
void init_constant_terms (void)
{
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__2, term_x_5, term_f_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_8);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_j_7);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_j_7);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_t_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_j_7);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__3, term_s_13, term_t_13, (ATerm) ATempty);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm get_annotations_0 (ATerm);
ATerm rm_annotations_0 (ATerm);
ATerm has_annotation_0 (ATerm);
ATerm catch_annos_0 (ATerm);
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
ATerm if_verbose2_1 (ATerm, ATerm l_76 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_74 (ATerm));
ATerm debug_1 (ATerm, ATerm o_73 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm k_76 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_78 (ATerm));
ATerm map_1 (ATerm, ATerm v_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_78 (ATerm));
ATerm Program_1 (ATerm, ATerm k_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_77 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_54 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm z_74 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_75 (ATerm), ATerm g_75 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_75 (ATerm));
ATerm annos_to_term_0 (ATerm);
ATerm main_0 (ATerm);
ATerm get_annotations_0 (ATerm t)
{
  ATerm q_0 = NULL;
  q_0 = t;
  t = SSLgetAnnotations(not_null(q_0));
  return(t);
}
ATerm rm_annotations_0 (ATerm t)
{
  ATerm h_1 = NULL;
  h_1 = t;
  t = ATremoveAnnotations(not_null(h_1));
  return(t);
}
ATerm has_annotation_0 (ATerm t)
{
  ATerm d_2;
  d_2 = t;
  {
    t = get_annotations_0(t);
    {
      ATerm d_4 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_4;
        }
    }
  }
  t = d_2;
  return(t);
}
ATerm catch_annos_0 (ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_annotation_0(t);
      LocalPopChoice(f_4);
      {
        ATerm z_1 = NULL,b_2 = NULL;
        ATerm g_4;
        g_4 = t;
        {
          ATerm a_2 = NULL;
          t = rm_annotations_0(t);
          {
            t = _all(t, catch_annos_0);
            {
              a_2 = t;
              if(((z_1 != NULL) && (z_1 != a_2)))
                _fail(a_2);
              else
                z_1 = a_2;
            }
          }
        }
        t = g_4;
        {
          ATerm c_2 = NULL;
          t = get_annotations_0(t);
          {
            c_2 = t;
            if(((b_2 != NULL) && (b_2 != c_2)))
              _fail(c_2);
            else
              b_2 = c_2;
          }
          t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(z_1), not_null(b_2));
        }
      }
    }
  else
    {
      t = e_4;
      t = _all(t, catch_annos_0);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_47 (ATerm), ATerm y_47 (ATerm))
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  m_2 = t;
  l_2 :
  if(match_cons(m_2, sym__2))
    {
      n_2 = ATgetArgument(m_2, 0);
      o_2 = ATgetArgument(m_2, 1);
      {
        ATerm s_2 = NULL,u_2 = NULL;
        ATerm t_2 = NULL;
        t = SSLgetAnnotations(not_null(m_2));
        {
          t_2 = t;
          if(((s_2 != NULL) && (s_2 != t_2)))
            _fail(t_2);
          else
            s_2 = t_2;
        }
        {
          t = not_null(n_2);
          {
            ATerm w_2 = NULL;
            t = x_47(t);
            {
              u_2 = t;
              {
                t = not_null(o_2);
                {
                  ATerm y_2 = NULL;
                  t = y_47(t);
                  {
                    w_2 = t;
                    {
                      ATerm z_2 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_2), not_null(w_2)), not_null(s_2));
                      {
                        z_2 = t;
                        if(((y_2 != NULL) && (y_2 != z_2)))
                          _fail(z_2);
                        else
                          y_2 = z_2;
                      }
                      t = not_null(y_2);
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
  ATerm h_3 = NULL;
  ATerm h_4;
  h_4 = t;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm i_3 = NULL,j_3 = NULL;
      i_3 = t;
      g_3 :
      if(match_cons(i_3, sym_Program_1))
        {
          j_3 = ATgetArgument(i_3, 0);
          if(((h_3 != NULL) && (h_3 != j_3)))
            _fail(j_3);
          else
            h_3 = j_3;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, b_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_4), not_null(h_3)), term_m_4));
      {
        t = printnl_0(t);
        {
          t = term_t_4;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_4;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        ATerm u_4;
        u_4 = t;
        t = SSL_printnl(not_null(o_3), not_null(p_3));
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
  ATerm u_3 = NULL;
  u_3 = t;
  t = SSL_implode_string(not_null(u_3));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_4);
    }
  else
    {
      t = v_4;
      {
        ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
        z_3 = t;
        y_3 :
        if(((ATgetType(z_3) == AT_LIST) && !(ATisEmpty(z_3))))
          {
            a_4 = ATgetFirst((ATermList) z_3);
            b_4 = (ATerm) ATgetNext((ATermList) z_3);
            {
              t = not_null(a_4);
              {
                ATerm c_0 (ATerm t)
                {
                  t = not_null(b_4);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm n_4 = NULL;
  l_4 = t;
  {
    ATerm o_4 = NULL;
    ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
    t = not_null(l_4);
    {
      o_4 = t;
      {
        t = SSL_explode_term(not_null(o_4));
        {
          q_4 = t;
          j_4 :
          if(match_cons(q_4, sym__2))
            {
              r_4 = ATgetArgument(q_4, 0);
              s_4 = ATgetArgument(q_4, 1);
              k_4 :
              if(match_string(r_4, ""))
                {
                  if(((n_4 != NULL) && (n_4 != s_4)))
                    _fail(s_4);
                  else
                    n_4 = s_4;
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
      t = not_null(n_4);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm c_5 = t;
    int d_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_4);
        LocalPopChoice(d_5);
      }
    else
      {
        t = c_5;
        {
          t = Nil_0(t);
          t = k_63(t);
        }
      }
    return(t);
  }
  t = w_4(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym__2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      {
        t = not_null(a_5);
        {
          ATerm e_0 (ATerm t)
          {
            t = not_null(b_5);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  t = SSL_explode_string(not_null(g_5));
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
  ATerm k_5 = NULL;
  k_5 = t;
  t = SSL_is_string(not_null(k_5));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_5);
    }
  else
    {
      t = h_5;
      {
        ATerm j_5 = t;
        int l_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, f_0);
            LocalPopChoice(l_5);
          }
        else
          {
            t = j_5;
            {
              ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
              t_5 = t;
              s_5 :
              if(match_cons(t_5, sym_Path_1))
                {
                  u_5 = ATgetArgument(t_5, 0);
                  t = not_null(u_5);
                }
              else
                {
                  if(match_cons(t_5, sym_Var_1))
                    {
                      u_5 = ATgetArgument(t_5, 0);
                      {
                        t = not_null(u_5);
                        {
                          ATerm m_5 = t;
                          int n_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_5);
                            }
                          else
                            {
                              t = m_5;
                              {
                                ATerm m_0 (ATerm t)
                                {
                                  t = term_o_5;
                                  return(t);
                                }
                                t = debug_1(t, m_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_5, sym_Prefix_2))
                        {
                          u_5 = ATgetArgument(t_5, 0);
                          v_5 = ATgetArgument(t_5, 1);
                          {
                            ATerm a_6 = NULL,c_6 = NULL;
                            ATerm p_5;
                            p_5 = t;
                            {
                              ATerm b_6 = NULL;
                              t = not_null(u_5);
                              {
                                t = eval_config_0(t);
                                {
                                  b_6 = t;
                                  if(((a_6 != NULL) && (a_6 != b_6)))
                                    _fail(b_6);
                                  else
                                    a_6 = b_6;
                                }
                              }
                            }
                            t = p_5;
                            {
                              ATerm d_6 = NULL;
                              t = not_null(v_5);
                              {
                                t = eval_config_0(t);
                                {
                                  d_6 = t;
                                  if(((c_6 != NULL) && (c_6 != d_6)))
                                    _fail(d_6);
                                  else
                                    c_6 = d_6;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), not_null(c_6));
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
  ATerm l_6 = NULL;
  l_6 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_5, not_null(l_6));
    {
      t = table_get_0(t);
      {
        ATerm n_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_5;
            r_5 = t;
            {
              ATerm n_6 = NULL;
              ATerm o_6 = NULL;
              o_6 = t;
              if(((n_6 != NULL) && (n_6 != o_6)))
                _fail(o_6);
              else
                n_6 = o_6;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_5, not_null(l_6), not_null(n_6));
                t = table_put_0(t);
              }
            }
            t = r_5;
          }
          return(t);
        }
        t = try_1(t, n_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    ATerm w_5;
    w_5 = t;
    {
      ATerm s_6 = NULL;
      ATerm t_6 = NULL;
      t = term_x_5;
      {
        t = get_config_0(t);
        {
          t_6 = t;
          if(((s_6 != NULL) && (s_6 != t_6)))
            _fail(t_6);
          else
            s_6 = t_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), term_y_5);
        t = geq_0(t);
      }
    }
    t = w_5;
    t = l_76(t);
    return(t);
  }
  t = try_1(t, o_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym__2))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      t = SSL_WriteToTextFile(not_null(y_6), not_null(z_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      t = SSL_WriteToBinaryFile(not_null(g_7), not_null(h_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_7 = NULL;
  ATerm z_5;
  z_5 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm e_6 = t;
      int f_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_0 (ATerm t)
          {
            ATerm q_7 = NULL,r_7 = NULL;
            q_7 = t;
            m_7 :
            if(match_cons(q_7, sym_Output_1))
              {
                r_7 = ATgetArgument(q_7, 0);
                if(((p_7 != NULL) && (p_7 != r_7)))
                  _fail(r_7);
                else
                  p_7 = r_7;
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
            ATerm s_7 = NULL;
            t = term_g_6;
            {
              s_7 = t;
              if(((p_7 != NULL) && (p_7 != s_7)))
                _fail(s_7);
              else
                p_7 = s_7;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_0, _id);
  }
  t = z_5;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        t = not_null(p_7);
        return(t);
      }
      t = split_2(t, t_0, _id);
      return(t);
    }
    t = _2(t, _id, s_0);
    {
      ATerm h_6 = t;
      int i_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm t_7 = NULL;
              t_7 = t;
              o_7 :
              if(!(match_cons(t_7, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_0);
            return(t);
          }
          t = _2(t, u_0, WriteToBinaryFile_0);
          LocalPopChoice(i_6);
        }
      else
        {
          t = h_6;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm z_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  ATerm j_6;
  j_6 = t;
  t = dtime_0(t);
  t = j_6;
  {
    t = s_74(t);
    {
      ATerm k_6;
      k_6 = t;
      {
        ATerm a_8 = NULL;
        t = dtime_0(t);
        {
          a_8 = t;
          if(((z_7 != NULL) && (z_7 != a_8)))
            _fail(a_8);
          else
            z_7 = a_8;
        }
      }
      t = k_6;
      {
        b_8 = t;
        y_7 :
        if(match_cons(b_8, sym__2))
          {
            c_8 = ATgetArgument(b_8, 0);
            d_8 = ATgetArgument(b_8, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_8)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_7))), not_null(d_8));
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
ATerm debug_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm m_6;
  m_6 = t;
  {
    ATerm k_8 = NULL,m_8 = NULL;
    ATerm p_6;
    p_6 = t;
    {
      ATerm l_8 = NULL;
      t = o_73(t);
      {
        l_8 = t;
        if(((k_8 != NULL) && (k_8 != l_8)))
          _fail(l_8);
        else
          k_8 = l_8;
      }
    }
    t = p_6;
    {
      ATerm n_8 = NULL;
      n_8 = t;
      if(((m_8 != NULL) && (m_8 != n_8)))
        _fail(n_8);
      else
        m_8 = n_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), not_null(k_8)));
        t = printnl_0(t);
      }
    }
  }
  t = m_6;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm r_8 = NULL;
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 = NULL;
      s_8 = t;
      {
        if(((r_8 != NULL) && (r_8 != s_8)))
          _fail(s_8);
        else
          r_8 = s_8;
        t = SSL_ReadFromFile(not_null(r_8));
      }
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      {
        ATerm w_0 (ATerm t)
        {
          t = term_u_6;
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
  ATerm w_8 = NULL,y_8 = NULL;
  ATerm v_6;
  v_6 = t;
  {
    ATerm x_8 = NULL;
    t = y_70(t);
    {
      x_8 = t;
      if(((w_8 != NULL) && (w_8 != x_8)))
        _fail(x_8);
      else
        w_8 = x_8;
    }
  }
  t = v_6;
  {
    ATerm z_8 = NULL;
    t = z_70(t);
    {
      z_8 = t;
      if(((y_8 != NULL) && (y_8 != z_8)))
        _fail(z_8);
      else
        y_8 = z_8;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), not_null(y_8));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_9 = NULL;
  ATerm a_7;
  a_7 = t;
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_0 (ATerm t)
        {
          ATerm g_9 = NULL,h_9 = NULL;
          g_9 = t;
          d_9 :
          if(match_cons(g_9, sym_Input_1))
            {
              h_9 = ATgetArgument(g_9, 0);
              if(((f_9 != NULL) && (f_9 != h_9)))
                _fail(h_9);
              else
                f_9 = h_9;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_0);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        {
          ATerm i_9 = NULL;
          t = term_d_7;
          {
            i_9 = t;
            if(((f_9 != NULL) && (f_9 != i_9)))
              _fail(i_9);
            else
              f_9 = i_9;
          }
        }
      }
  }
  t = a_7;
  {
    ATerm y_0 (ATerm t)
    {
      t = not_null(f_9);
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
    ATerm m_9 = NULL;
    m_9 = t;
    l_9 :
    if(!(match_string(m_9, "-v")))
      {
        if(!(match_string(m_9, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    t = term_k_7;
    t = set_config_0(t);
    t = term_l_7;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    t = term_n_7;
    return(t);
  }
  t = Option_3(t, z_0, a_1, b_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm p_9 = NULL;
    p_9 = t;
    n_9 :
    if(!(match_string(p_9, "-k")))
      {
        if(!(match_string(p_9, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm u_7;
    u_7 = t;
    {
      ATerm q_9 = NULL;
      ATerm r_9 = NULL;
      t = string_to_int_0(t);
      {
        r_9 = t;
        if(((q_9 != NULL) && (q_9 != r_9)))
          _fail(r_9);
        else
          q_9 = r_9;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(q_9));
        t = set_config_0(t);
      }
    }
    t = u_7;
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_w_7;
    return(t);
  }
  t = ArgOption_3(t, c_1, d_1, e_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  t = SSL_string_to_int(not_null(u_9));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_7 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm c_10 = NULL;
        c_10 = t;
        x_9 :
        if(!(match_string(c_10, "-S")))
          {
            if(!(match_string(c_10, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = term_g_8;
        t = set_config_0(t);
        t = term_h_8;
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        t = term_i_8;
        return(t);
      }
      t = Option_3(t, f_1, g_1, i_1);
      LocalPopChoice(e_8);
    }
  else
    {
      t = x_7;
      {
        ATerm j_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              ATerm d_10 = NULL;
              d_10 = t;
              y_9 :
              if(!(match_string(d_10, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              ATerm g_10 = NULL;
              ATerm p_8;
              p_8 = t;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_x_5, not_null(e_10));
                  t = set_config_0(t);
                }
              }
              t = p_8;
              {
                ATerm h_10 = NULL;
                h_10 = t;
                if(((g_10 != NULL) && (g_10 != h_10)))
                  _fail(h_10);
                else
                  g_10 = h_10;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_10));
              }
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              t = term_q_8;
              return(t);
            }
            t = ArgOption_3(t, j_1, k_1, l_1);
            LocalPopChoice(o_8);
          }
        else
          {
            t = j_8;
            {
              ATerm m_1 (ATerm t)
              {
                ATerm i_10 = NULL;
                i_10 = t;
                b_10 :
                if(!(match_string(i_10, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_1 (ATerm t)
              {
                t = term_u_8;
                t = set_config_0(t);
                t = term_v_8;
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                t = term_a_9;
                return(t);
              }
              t = Option_3(t, m_1, n_1, o_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm e_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(j_9);
          }
        else
          {
            t = e_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm o_10 = NULL;
    o_10 = t;
    l_10 :
    if(!(match_string(o_10, "-o")))
      {
        if(!(match_string(o_10, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm r_10 = NULL;
    ATerm k_9;
    k_9 = t;
    {
      ATerm p_10 = NULL;
      ATerm q_10 = NULL;
      q_10 = t;
      if(((p_10 != NULL) && (p_10 != q_10)))
        _fail(q_10);
      else
        p_10 = q_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(p_10));
        t = set_config_0(t);
      }
    }
    t = k_9;
    {
      ATerm s_10 = NULL;
      s_10 = t;
      if(((r_10 != NULL) && (r_10 != s_10)))
        _fail(s_10);
      else
        r_10 = s_10;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_10));
    }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_s_9;
    return(t);
  }
  t = ArgOption_3(t, p_1, q_1, r_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = t_9;
      {
        ATerm s_1 (ATerm t)
        {
          ATerm w_10 = NULL;
          w_10 = t;
          v_10 :
          if(!(match_string(w_10, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_1 (ATerm t)
        {
          t = term_z_9;
          t = set_config_0(t);
          t = term_a_10;
          return(t);
        }
        ATerm u_1 (ATerm t)
        {
          t = term_j_10;
          return(t);
        }
        t = Option_3(t, s_1, t_1, u_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  c_11 = t;
  a_11 :
  if(match_string(c_11, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
        {
          d_11 = ATgetFirst((ATermList) c_11);
          e_11 = (ATerm) ATgetNext((ATermList) c_11);
          b_11 :
          if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
            {
              f_11 = ATgetFirst((ATermList) e_11);
              g_11 = (ATerm) ATgetNext((ATermList) e_11);
              {
                ATerm k_11 = NULL;
                ATerm k_10;
                k_10 = t;
                {
                  t = not_null(d_11);
                  t = j_0(t);
                }
                t = k_10;
                {
                  ATerm l_11 = NULL;
                  t = not_null(f_11);
                  {
                    t = k_0(t);
                    {
                      l_11 = t;
                      if(((k_11 != NULL) && (k_11 != l_11)))
                        _fail(l_11);
                      else
                        k_11 = l_11;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_11)), not_null(k_11));
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
  ATerm v_1 (ATerm t)
  {
    ATerm s_11 = NULL;
    s_11 = t;
    p_11 :
    if(!(match_string(s_11, "-i")))
      {
        if(!(match_string(s_11, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm v_11 = NULL;
    ATerm m_10;
    m_10 = t;
    {
      ATerm t_11 = NULL;
      ATerm u_11 = NULL;
      u_11 = t;
      if(((t_11 != NULL) && (t_11 != u_11)))
        _fail(u_11);
      else
        t_11 = u_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_10, not_null(t_11));
        t = set_config_0(t);
      }
    }
    t = m_10;
    {
      ATerm w_11 = NULL;
      w_11 = t;
      if(((v_11 != NULL) && (v_11 != w_11)))
        _fail(w_11);
      else
        v_11 = w_11;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_11));
    }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_t_10;
    return(t);
  }
  t = ArgOption_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = u_10;
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(z_10);
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
  t = (ATerm) ATmakeAppl(sym__2, term_i_4, (ATerm) ATinsert(ATempty, term_h_11));
  {
    t = printnl_0(t);
    {
      t = term_t_4;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_12 = NULL;
  a_12 = t;
  t = SSL_TicksToSeconds(not_null(a_12));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_12), not_null(h_12));
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = SSL_addr(not_null(g_12), not_null(h_12));
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_69(t);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
        o_12 = t;
        n_12 :
        if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
          {
            p_12 = ATgetFirst((ATermList) o_12);
            q_12 = (ATerm) ATgetNext((ATermList) o_12);
            {
              ATerm t_12 = NULL;
              ATerm u_12 = NULL;
              t = not_null(q_12);
              {
                t = foldr_2(t, j_69, k_69);
                {
                  u_12 = t;
                  if(((t_12 != NULL) && (t_12 != u_12)))
                    _fail(u_12);
                  else
                    t_12 = u_12;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), not_null(t_12));
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
  ATerm b_13 = NULL;
  ATerm d_13 = NULL;
  b_13 = t;
  {
    ATerm e_13 = NULL;
    ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
    t = not_null(b_13);
    {
      e_13 = t;
      {
        t = SSL_explode_term(not_null(e_13));
        {
          g_13 = t;
          a_13 :
          if(match_cons(g_13, sym__2))
            {
              h_13 = ATgetArgument(g_13, 0);
              i_13 = ATgetArgument(g_13, 1);
              if(((d_13 != NULL) && (d_13 != i_13)))
                _fail(i_13);
              else
                d_13 = i_13;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_13);
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
    ATerm y_1 (ATerm t)
    {
      t = term_f_8;
      return(t);
    }
    t = crush_2(t, y_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym__2))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      {
        ATerm o_11;
        o_11 = t;
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_13), not_null(q_13));
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              t = SSL_gtr(not_null(p_13), not_null(q_13));
            }
        }
        t = o_11;
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
  ATerm w_13 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
      x_13 = t;
      v_13 :
      if(match_cons(x_13, sym__2))
        {
          y_13 = ATgetArgument(x_13, 0);
          z_13 = ATgetArgument(x_13, 1);
          {
            if(((w_13 != NULL) && (w_13 != y_13)))
              _fail(y_13);
            else
              w_13 = y_13;
            if(((w_13 != NULL) && (w_13 != z_13)))
              _fail(z_13);
            else
              w_13 = z_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm z_11;
    z_11 = t;
    {
      ATerm c_14 = NULL;
      ATerm d_14 = NULL;
      t = term_x_5;
      {
        t = get_config_0(t);
        {
          d_14 = t;
          if(((c_14 != NULL) && (c_14 != d_14)))
            _fail(d_14);
          else
            c_14 = d_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), term_t_4);
        t = geq_0(t);
      }
    }
    t = z_11;
    t = k_76(t);
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm h_14 = NULL,j_14 = NULL;
    ATerm b_12;
    b_12 = t;
    {
      ATerm i_14 = NULL;
      t = run_time_0(t);
      {
        i_14 = t;
        if(((h_14 != NULL) && (h_14 != i_14)))
          _fail(i_14);
        else
          h_14 = i_14;
      }
    }
    t = b_12;
    {
      ATerm k_14 = NULL;
      t = term_c_12;
      {
        t = get_config_0(t);
        {
          k_14 = t;
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_12), not_null(h_14)), term_d_12), not_null(j_14)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_2);
  {
    t = term_f_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym_Version_0))
    {
      ATerm t_14 = NULL,v_14 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm u_14 = NULL;
        t = SSLgetAnnotations(not_null(r_14));
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
      }
      t = j_12;
      {
        ATerm w_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_14));
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
        t = not_null(v_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm m_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_12);
            }
          else
            {
              t = m_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, g_2);
  t = q_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  t = SSL_table_create(not_null(b_15));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  {
    ATerm s_12;
    s_12 = t;
    {
      t = term_v_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_12, term_w_12, not_null(f_15));
          t = table_put_0(t);
        }
      }
    }
    t = s_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  t = SSL_table_destroy(not_null(j_15));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  t = SSL_exit(not_null(n_15));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  q_15 :
  if(((ATgetType(r_15) == AT_LIST) && ATisEmpty(r_15)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
        {
          s_15 = ATgetFirst((ATermList) r_15);
          t_15 = (ATerm) ATgetNext((ATermList) r_15);
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
  ATerm x_12;
  x_12 = t;
  {
    ATerm w_15 = NULL;
    ATerm z_15 = NULL;
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        {
          ATerm x_15 = NULL;
          ATerm y_15 = NULL;
          y_15 = t;
          if(((x_15 != NULL) && (x_15 != y_15)))
            _fail(y_15);
          else
            x_15 = y_15;
          t = (ATerm) ATinsert(ATempty, not_null(x_15));
        }
      }
    {
      z_15 = t;
      if(((w_15 != NULL) && (w_15 != z_15)))
        _fail(z_15);
      else
        w_15 = z_15;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_6, not_null(w_15));
      t = printnl_0(t);
    }
  }
  t = x_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm c_16 (ATerm t)
  {
    ATerm c_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = c_13;
        t = Cons_2(t, v_62, c_16);
      }
    return(t);
  }
  t = c_16(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  l_16 = t;
  i_16 :
  if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
    {
      j_16 = ATgetFirst((ATermList) l_16);
      k_16 = (ATerm) ATgetNext((ATermList) l_16);
      {
        ATerm o_16 = NULL;
        t = not_null(k_16);
        {
          ATerm j_13;
          j_13 = t;
          {
            ATerm p_16 = NULL,r_16 = NULL,t_16 = NULL;
            ATerm k_13;
            k_13 = t;
            {
              ATerm q_16 = NULL;
              t = i_0(t);
              {
                q_16 = t;
                if(((p_16 != NULL) && (p_16 != q_16)))
                  _fail(q_16);
                else
                  p_16 = q_16;
              }
            }
            t = k_13;
            {
              ATerm s_16 = NULL;
              t = not_null(j_16);
              {
                t = h_0(t);
                {
                  s_16 = t;
                  if(((r_16 != NULL) && (r_16 != s_16)))
                    _fail(s_16);
                  else
                    r_16 = s_16;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_16)), not_null(r_16));
                {
                  t_16 = t;
                  if(((o_16 != NULL) && (o_16 != t_16)))
                    _fail(t_16);
                  else
                    o_16 = t_16;
                }
              }
            }
          }
          t = j_13;
          {
            ATerm h_2 (ATerm t)
            {
              t = not_null(o_16);
              return(t);
            }
            t = reverse_acc_2(t, h_0, h_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_16) == AT_LIST) && ATisEmpty(l_16)))
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
  ATerm i_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_54 (ATerm))
{
  ATerm e_17 = NULL,f_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym_Program_1))
    {
      f_17 = ATgetArgument(e_17, 0);
      {
        ATerm i_17 = NULL,k_17 = NULL;
        ATerm j_17 = NULL;
        t = SSLgetAnnotations(not_null(e_17));
        {
          j_17 = t;
          if(((i_17 != NULL) && (i_17 != j_17)))
            _fail(j_17);
          else
            i_17 = j_17;
        }
        {
          t = not_null(f_17);
          {
            ATerm m_17 = NULL;
            t = k_54(t);
            {
              k_17 = t;
              {
                ATerm n_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_17)), not_null(i_17));
                {
                  n_17 = t;
                  if(((m_17 != NULL) && (m_17 != n_17)))
                    _fail(n_17);
                  else
                    m_17 = n_17;
                }
                t = not_null(m_17);
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
  ATerm w_17 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL;
      t = term_c_12;
      {
        t = get_config_0(t);
        {
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
        }
      }
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm y_17 = NULL;
            y_17 = t;
            if(((w_17 != NULL) && (w_17 != y_17)))
              _fail(y_17);
            else
              w_17 = y_17;
            return(t);
          }
          t = Program_1(t, k_2);
          return(t);
        }
        t = option_defined_1(t, j_2);
      }
    }
  {
    ATerm p_2 (ATerm t)
    {
      ATerm q_2 (ATerm t)
      {
        t = not_null(w_17);
        return(t);
      }
      t = short_description_1(t, q_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_2);
    {
      t = term_r_13;
      {
        t = echo_0(t);
        {
          t = term_u_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_2 (ATerm t)
                {
                  ATerm z_17 = NULL;
                  ATerm a_18 = NULL;
                  a_18 = t;
                  if(((z_17 != NULL) && (z_17 != a_18)))
                    _fail(a_18);
                  else
                    z_17 = a_18;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_17)), term_a_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_2);
                {
                  ATerm v_2 (ATerm t)
                  {
                    ATerm b_18 = NULL;
                    ATerm c_18 = NULL;
                    ATerm x_2 (ATerm t)
                    {
                      t = not_null(w_17);
                      return(t);
                    }
                    t = long_description_1(t, x_2);
                    {
                      c_18 = t;
                      if(((b_18 != NULL) && (b_18 != c_18)))
                        _fail(c_18);
                      else
                        b_18 = c_18;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_18)), term_b_14);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_2);
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
  ATerm e_14;
  e_14 = t;
  {
    ATerm i_18 = NULL;
    ATerm j_18 = NULL;
    j_18 = t;
    if(((i_18 != NULL) && (i_18 != j_18)))
      _fail(j_18);
    else
      i_18 = j_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_4, (ATerm) ATinsert(ATempty, not_null(i_18)));
      t = printnl_0(t);
    }
  }
  t = e_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm f_14;
  f_14 = t;
  {
    t = p_73(t);
    t = debug_0(t);
  }
  t = f_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_54 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_Undefined_1))
    {
      r_18 = ATgetArgument(q_18, 0);
      {
        ATerm u_18 = NULL,w_18 = NULL;
        ATerm v_18 = NULL;
        t = SSLgetAnnotations(not_null(q_18));
        {
          v_18 = t;
          if(((u_18 != NULL) && (u_18 != v_18)))
            _fail(v_18);
          else
            u_18 = v_18;
        }
        {
          t = not_null(r_18);
          {
            ATerm y_18 = NULL;
            t = l_54(t);
            {
              w_18 = t;
              {
                ATerm z_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_18)), not_null(u_18));
                {
                  z_18 = t;
                  if(((y_18 != NULL) && (y_18 != z_18)))
                    _fail(z_18);
                  else
                    y_18 = z_18;
                }
                t = not_null(y_18);
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
  ATerm e_19 (ATerm t)
  {
    ATerm g_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_63, _id);
        LocalPopChoice(l_14);
      }
    else
      {
        t = g_14;
        t = Cons_2(t, _id, e_19);
      }
    return(t);
  }
  t = e_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_77 (ATerm))
{
  t = fetch_1(t, n_77);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Help_0))
    {
      ATerm q_19 = NULL,s_19 = NULL;
      ATerm m_14;
      m_14 = t;
      {
        ATerm r_19 = NULL;
        t = SSLgetAnnotations(not_null(o_19));
        {
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
        }
      }
      t = m_14;
      {
        ATerm t_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
        t = not_null(s_19);
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
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_54(t);
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,e_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym__2))
    {
      a_20 = ATgetArgument(z_19, 0);
      e_20 = ATgetArgument(z_19, 1);
      t = SSL_table_get(not_null(a_20), not_null(e_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym__3))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      o_20 = ATgetArgument(l_20, 2);
      {
        ATerm p_14;
        p_14 = t;
        {
          ATerm s_20 = NULL;
          ATerm t_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(n_20));
          {
            ATerm s_14 = t;
            int x_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_14);
              }
            else
              {
                t = s_14;
                t = (ATerm) ATempty;
              }
            {
              t_20 = t;
              if(((s_20 != NULL) && (s_20 != t_20)))
                _fail(t_20);
              else
                s_20 = t_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_20), not_null(n_20), (ATerm) ATinsert(CheckATermList(not_null(s_20)), not_null(o_20)));
            t = table_put_0(t);
          }
        }
        t = p_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm x_20 = NULL;
  ATerm y_20 = NULL;
  t = term_j_7;
  {
    t = s_78(t);
    {
      y_20 = t;
      if(((x_20 != NULL) && (x_20 != y_20)))
        _fail(y_20);
      else
        x_20 = y_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_13, term_t_13, not_null(x_20));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_string(e_21, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
        {
          f_21 = ATgetFirst((ATermList) e_21);
          g_21 = (ATerm) ATgetNext((ATermList) e_21);
          {
            ATerm j_21 = NULL;
            ATerm y_14;
            y_14 = t;
            {
              t = not_null(f_21);
              t = a_0(t);
            }
            t = y_14;
            {
              ATerm k_21 = NULL;
              t = term_j_7;
              {
                t = d_0(t);
                {
                  k_21 = t;
                  if(((j_21 != NULL) && (j_21 != k_21)))
                    _fail(k_21);
                  else
                    j_21 = k_21;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_21)), not_null(j_21));
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
  ATerm a_3 (ATerm t)
  {
    ATerm p_21 = NULL;
    p_21 = t;
    o_21 :
    if(!(match_string(p_21, "--help")))
      {
        if(!(match_string(p_21, "-h")))
          {
            if(!(match_string(p_21, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_a_15;
    {
      t = set_config_0(t);
      t = term_c_15;
    }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_d_15;
    return(t);
  }
  t = Option_3(t, a_3, b_3, c_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
    {
      t_21 = ATgetFirst((ATermList) s_21);
      u_21 = (ATerm) ATgetNext((ATermList) s_21);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_21)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_21)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
    {
      f_22 = ATgetFirst((ATermList) e_22);
      g_22 = (ATerm) ATgetNext((ATermList) e_22);
      {
        ATerm k_22 = NULL,m_22 = NULL;
        ATerm l_22 = NULL;
        t = SSLgetAnnotations(not_null(e_22));
        {
          l_22 = t;
          if(((k_22 != NULL) && (k_22 != l_22)))
            _fail(l_22);
          else
            k_22 = l_22;
        }
        {
          t = not_null(f_22);
          {
            ATerm o_22 = NULL;
            t = g_49(t);
            {
              m_22 = t;
              {
                t = not_null(g_22);
                {
                  ATerm q_22 = NULL;
                  t = h_49(t);
                  {
                    o_22 = t;
                    {
                      ATerm r_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_22)), not_null(m_22)), not_null(k_22));
                      {
                        r_22 = t;
                        if(((q_22 != NULL) && (q_22 != r_22)))
                          _fail(r_22);
                        else
                          q_22 = r_22;
                      }
                      t = not_null(q_22);
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
  ATerm b_23 = NULL;
  b_23 = t;
  a_23 :
  if(((ATgetType(b_23) == AT_LIST) && ATisEmpty(b_23)))
    {
      {
        ATerm d_23 = NULL,f_23 = NULL;
        ATerm e_15;
        e_15 = t;
        {
          ATerm e_23 = NULL;
          t = SSLgetAnnotations(not_null(b_23));
          {
            e_23 = t;
            if(((d_23 != NULL) && (d_23 != e_23)))
              _fail(e_23);
            else
              d_23 = e_23;
          }
        }
        t = e_15;
        {
          ATerm g_23 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_23));
          {
            g_23 = t;
            if(((f_23 != NULL) && (f_23 != g_23)))
              _fail(g_23);
            else
              f_23 = g_23;
          }
          t = not_null(f_23);
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
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_5, not_null(n_23), not_null(o_23));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm g_15;
  g_15 = t;
  {
    ATerm d_3 (ATerm t)
    {
      t = term_h_15;
      t = q_78(t);
      return(t);
    }
    t = try_1(t, d_3);
  }
  t = g_15;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm w_23 = NULL;
      ATerm i_15;
      i_15 = t;
      {
        ATerm u_23 = NULL;
        ATerm v_23 = NULL;
        v_23 = t;
        if(((u_23 != NULL) && (u_23 != v_23)))
          _fail(v_23);
        else
          u_23 = v_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_12, not_null(u_23));
          t = set_config_0(t);
        }
      }
      t = i_15;
      {
        ATerm x_23 = NULL;
        x_23 = t;
        if(((w_23 != NULL) && (w_23 != x_23)))
          _fail(x_23);
        else
          w_23 = x_23;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_23));
      }
      return(t);
    }
    ATerm f_3 (ATerm t)
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_15);
            }
          else
            {
              t = m_15;
              {
                t = q_78(t);
                t = Cons_2(t, _id, f_3);
              }
            }
          LocalPopChoice(l_15);
        }
      else
        {
          t = k_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_3, f_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  ATerm p_15;
  p_15 = t;
  {
    ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
    g_24 = t;
    c_24 :
    if(match_cons(g_24, sym__3))
      {
        h_24 = ATgetArgument(g_24, 0);
        i_24 = ATgetArgument(g_24, 1);
        j_24 = ATgetArgument(g_24, 2);
        {
          if(((d_24 != NULL) && (d_24 != h_24)))
            _fail(h_24);
          else
            d_24 = h_24;
          {
            if(((e_24 != NULL) && (e_24 != i_24)))
              _fail(i_24);
            else
              e_24 = i_24;
            {
              if(((f_24 != NULL) && (f_24 != j_24)))
                _fail(j_24);
              else
                f_24 = j_24;
              t = SSL_table_put(not_null(d_24), not_null(e_24), not_null(f_24));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm m_24 = NULL;
  ATerm u_15;
  u_15 = t;
  {
    t = term_v_15;
    t = table_put_0(t);
  }
  t = u_15;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_78(t);
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_3);
    {
      ATerm l_3 (ATerm t)
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_16;
            f_16 = t;
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_14;
                  t = get_config_0(t);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_16;
            {
              t = system_usage_0(t);
              {
                t = term_f_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm q_3 (ATerm t)
              {
                ATerm r_3 (ATerm t)
                {
                  ATerm n_24 = NULL;
                  n_24 = t;
                  if(((m_24 != NULL) && (m_24 != n_24)))
                    _fail(n_24);
                  else
                    m_24 = n_24;
                  return(t);
                }
                t = Undefined_1(t, r_3);
                return(t);
              }
              t = option_defined_1(t, q_3);
              {
                ATerm s_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_24)), term_m_16);
                  return(t);
                }
                t = say_1(t, s_3);
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
      t = try_1(t, l_3);
      {
        ATerm n_16;
        n_16 = t;
        {
          t = term_s_13;
          t = table_destroy_0(t);
        }
        t = n_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm z_74 (ATerm))
{
  t = parse_options_1(t, w_74);
  {
    t = store_options_0(t);
    {
      t = y_74(t);
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_74);
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            {
              ATerm w_16 = t;
              int x_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = w_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_75(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_75);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_3, p_75, q_75, v_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm j_75 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm a_17;
      a_17 = t;
      {
        ATerm q_24 = NULL;
        ATerm s_24 = NULL;
        t = term_c_12;
        {
          t = get_config_0(t);
          {
            s_24 = t;
            if(((q_24 != NULL) && (q_24 != s_24)))
              _fail(s_24);
            else
              q_24 = s_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_4, (ATerm) ATinsert(ATempty, not_null(q_24)));
          t = printnl_0(t);
        }
      }
      t = a_17;
      return(t);
    }
    t = if_verbose2_1(t, x_3);
    return(t);
  }
  t = iowrap_4(t, h_75, i_75, j_75, w_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_75 (ATerm), ATerm g_75 (ATerm))
{
  t = iowrap_3(t, f_75, g_75, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    t = _2(t, _id, c_75);
    return(t);
  }
  t = iowrap_2(t, c_4, _fail);
  return(t);
}
ATerm annos_to_term_0 (ATerm t)
{
  t = iowrap_1(t, catch_annos_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = annos_to_term_0(t);
  return(t);
}

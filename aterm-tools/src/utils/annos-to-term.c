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
ATerm term_r_16;
ATerm term_y_15;
ATerm term_k_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_w_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_y_10;
ATerm term_n_10;
ATerm term_e_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_z_6;
ATerm term_q_6;
ATerm term_c_6;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_l_5;
ATerm term_i_5;
ATerm term_z_3;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_v_3;
void init_constant_terms (void)
{
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__2, term_e_7, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym__2, term_t_5, term_z_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_7);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_f_7);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_f_7);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_f_7);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__3, term_q_13, term_v_13, (ATerm) ATempty);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm get_annotations_0 (ATerm);
ATerm rm_annotations_0 (ATerm);
ATerm has_annotation_0 (ATerm);
ATerm catch_annos_0 (ATerm);
ATerm _2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_62 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_75 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_74 (ATerm));
ATerm debug_1 (ATerm, ATerm a_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_70 (ATerm), ATerm l_70 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_68 (ATerm), ATerm w_68 (ATerm));
ATerm crush_2 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_75 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_78 (ATerm));
ATerm map_1 (ATerm, ATerm h_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_77 (ATerm));
ATerm Program_1 (ATerm, ATerm d_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm b_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_62 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_54 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_48 (ATerm), ATerm a_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_78 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm v_74 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_74 (ATerm), ATerm s_74 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_74 (ATerm));
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
  ATerm t_1 = NULL;
  t_1 = t;
  t = ATremoveAnnotations(not_null(t_1));
  return(t);
}
ATerm has_annotation_0 (ATerm t)
{
  ATerm h_2;
  h_2 = t;
  {
    t = get_annotations_0(t);
    {
      ATerm i_3 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_3;
        }
    }
  }
  t = h_2;
  return(t);
}
ATerm catch_annos_0 (ATerm t)
{
  ATerm j_3 = t;
  int o_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_annotation_0(t);
      LocalPopChoice(o_3);
      {
        ATerm c_2 = NULL,e_2 = NULL;
        ATerm p_3;
        p_3 = t;
        {
          ATerm d_2 = NULL;
          t = rm_annotations_0(t);
          {
            t = _all(t, catch_annos_0);
            {
              d_2 = t;
              if(((c_2 != NULL) && (c_2 != d_2)))
                _fail(d_2);
              else
                c_2 = d_2;
            }
          }
        }
        t = p_3;
        {
          ATerm g_2 = NULL;
          t = get_annotations_0(t);
          {
            g_2 = t;
            if(((e_2 != NULL) && (e_2 != g_2)))
              _fail(g_2);
            else
              e_2 = g_2;
          }
          t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(c_2), not_null(e_2));
        }
      }
    }
  else
    {
      t = j_3;
      t = _all(t, catch_annos_0);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm))
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
  q_2 = t;
  p_2 :
  if(match_cons(q_2, sym__2))
    {
      r_2 = ATgetArgument(q_2, 0);
      s_2 = ATgetArgument(q_2, 1);
      {
        ATerm w_2 = NULL,y_2 = NULL;
        ATerm x_2 = NULL;
        t = SSLgetAnnotations(not_null(q_2));
        {
          x_2 = t;
          if(((w_2 != NULL) && (w_2 != x_2)))
            _fail(x_2);
          else
            w_2 = x_2;
        }
        {
          t = not_null(r_2);
          {
            ATerm a_3 = NULL;
            t = q_47(t);
            {
              y_2 = t;
              {
                t = not_null(s_2);
                {
                  ATerm c_3 = NULL;
                  t = r_47(t);
                  {
                    a_3 = t;
                    {
                      ATerm d_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_2), not_null(a_3)), not_null(w_2));
                      {
                        d_3 = t;
                        if(((c_3 != NULL) && (c_3 != d_3)))
                          _fail(d_3);
                        else
                          c_3 = d_3;
                      }
                      t = not_null(c_3);
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
  ATerm l_3 = NULL;
  ATerm u_3;
  u_3 = t;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm m_3 = NULL,n_3 = NULL;
      m_3 = t;
      k_3 :
      if(match_cons(m_3, sym_Program_1))
        {
          n_3 = ATgetArgument(m_3, 0);
          if(((l_3 != NULL) && (l_3 != n_3)))
            _fail(n_3);
          else
            l_3 = n_3;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, b_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_3), not_null(l_3)), term_w_3));
      {
        t = printnl_0(t);
        {
          t = term_z_3;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_3;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym__2))
    {
      s_3 = ATgetArgument(r_3, 0);
      t_3 = ATgetArgument(r_3, 1);
      {
        ATerm a_4;
        a_4 = t;
        t = SSL_printnl(not_null(s_3), not_null(t_3));
        t = a_4;
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
  ATerm y_3 = NULL;
  y_3 = t;
  t = SSL_implode_string(not_null(y_3));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_4 = t;
  int g_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_4);
    }
  else
    {
      t = b_4;
      {
        ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
        d_4 = t;
        c_4 :
        if(((ATgetType(d_4) == AT_LIST) && !(ATisEmpty(d_4))))
          {
            e_4 = ATgetFirst((ATermList) d_4);
            f_4 = (ATerm) ATgetNext((ATermList) d_4);
            {
              t = not_null(e_4);
              {
                ATerm c_0 (ATerm t)
                {
                  t = not_null(f_4);
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
  ATerm p_4 = NULL;
  ATerm r_4 = NULL;
  p_4 = t;
  {
    ATerm s_4 = NULL;
    ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
    t = not_null(p_4);
    {
      s_4 = t;
      {
        t = SSL_explode_term(not_null(s_4));
        {
          u_4 = t;
          n_4 :
          if(match_cons(u_4, sym__2))
            {
              v_4 = ATgetArgument(u_4, 0);
              w_4 = ATgetArgument(u_4, 1);
              o_4 :
              if(match_string(v_4, ""))
                {
                  if(((r_4 != NULL) && (r_4 != w_4)))
                    _fail(w_4);
                  else
                    r_4 = w_4;
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
      t = not_null(r_4);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm h_4 = t;
    int i_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_5);
        LocalPopChoice(i_4);
      }
    else
      {
        t = h_4;
        {
          t = Nil_0(t);
          t = w_62(t);
        }
      }
    return(t);
  }
  t = a_5(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym__2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      {
        t = not_null(e_5);
        {
          ATerm e_0 (ATerm t)
          {
            t = not_null(f_5);
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
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_5 = NULL;
  k_5 = t;
  t = SSL_explode_string(not_null(k_5));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm l_4 = t;
    int m_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(m_4);
      }
    else
      {
        t = l_4;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_5 = NULL;
  o_5 = t;
  t = SSL_is_string(not_null(o_5));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_4 = t;
  int t_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_4);
    }
  else
    {
      t = q_4;
      {
        ATerm x_4 = t;
        int y_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              ATerm z_4 = t;
              int b_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(b_5);
                }
              else
                {
                  t = z_4;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, f_0);
            LocalPopChoice(y_4);
          }
        else
          {
            t = x_4;
            {
              ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
              x_5 = t;
              w_5 :
              if(match_cons(x_5, sym_Path_1))
                {
                  y_5 = ATgetArgument(x_5, 0);
                  t = not_null(y_5);
                }
              else
                {
                  if(match_cons(x_5, sym_Var_1))
                    {
                      y_5 = ATgetArgument(x_5, 0);
                      {
                        t = not_null(y_5);
                        {
                          ATerm g_5 = t;
                          int h_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_5);
                            }
                          else
                            {
                              t = g_5;
                              {
                                ATerm m_0 (ATerm t)
                                {
                                  t = term_i_5;
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
                      if(match_cons(x_5, sym_Prefix_2))
                        {
                          y_5 = ATgetArgument(x_5, 0);
                          z_5 = ATgetArgument(x_5, 1);
                          {
                            ATerm e_6 = NULL,g_6 = NULL;
                            ATerm j_5;
                            j_5 = t;
                            {
                              ATerm f_6 = NULL;
                              t = not_null(y_5);
                              {
                                t = eval_config_0(t);
                                {
                                  f_6 = t;
                                  if(((e_6 != NULL) && (e_6 != f_6)))
                                    _fail(f_6);
                                  else
                                    e_6 = f_6;
                                }
                              }
                            }
                            t = j_5;
                            {
                              ATerm h_6 = NULL;
                              t = not_null(z_5);
                              {
                                t = eval_config_0(t);
                                {
                                  h_6 = t;
                                  if(((g_6 != NULL) && (g_6 != h_6)))
                                    _fail(h_6);
                                  else
                                    g_6 = h_6;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(g_6));
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
  ATerm p_6 = NULL;
  p_6 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_5, not_null(p_6));
    {
      t = table_get_0(t);
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm p_5;
              p_5 = t;
              {
                ATerm r_6 = NULL;
                ATerm s_6 = NULL;
                s_6 = t;
                if(((r_6 != NULL) && (r_6 != s_6)))
                  _fail(s_6);
                else
                  r_6 = s_6;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_l_5, not_null(p_6), not_null(r_6));
                  t = table_put_0(t);
                }
              }
              t = p_5;
            }
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5;
      s_5 = t;
      {
        ATerm w_6 = NULL;
        ATerm x_6 = NULL;
        t = term_t_5;
        {
          t = get_config_0(t);
          {
            x_6 = t;
            if(((w_6 != NULL) && (w_6 != x_6)))
              _fail(x_6);
            else
              w_6 = x_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_6), term_u_5);
          t = geq_0(t);
        }
      }
      t = s_5;
      t = x_75(t);
      LocalPopChoice(r_5);
    }
  else
    {
      t = q_5;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym__2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      t = SSL_WriteToTextFile(not_null(c_7), not_null(d_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym__2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      t = SSL_WriteToBinaryFile(not_null(k_7), not_null(l_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_7 = NULL;
  ATerm v_5;
  v_5 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm a_6 = t;
      int b_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_0 (ATerm t)
          {
            ATerm u_7 = NULL,v_7 = NULL;
            u_7 = t;
            q_7 :
            if(match_cons(u_7, sym_Output_1))
              {
                v_7 = ATgetArgument(u_7, 0);
                if(((t_7 != NULL) && (t_7 != v_7)))
                  _fail(v_7);
                else
                  t_7 = v_7;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_0);
          LocalPopChoice(b_6);
        }
      else
        {
          t = a_6;
          {
            ATerm w_7 = NULL;
            t = term_c_6;
            {
              w_7 = t;
              if(((t_7 != NULL) && (t_7 != w_7)))
                _fail(w_7);
              else
                t_7 = w_7;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_0, _id);
  }
  t = v_5;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        t = not_null(t_7);
        return(t);
      }
      t = split_2(t, r_0, _id);
      return(t);
    }
    t = _2(t, _id, p_0);
    {
      ATerm d_6 = t;
      int i_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              ATerm x_7 = NULL;
              x_7 = t;
              s_7 :
              if(!(match_cons(x_7, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, t_0);
            return(t);
          }
          t = _2(t, s_0, WriteToBinaryFile_0);
          LocalPopChoice(i_6);
        }
      else
        {
          t = d_6;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm d_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  ATerm j_6;
  j_6 = t;
  t = dtime_0(t);
  t = j_6;
  {
    t = e_74(t);
    {
      ATerm k_6;
      k_6 = t;
      {
        ATerm e_8 = NULL;
        t = dtime_0(t);
        {
          e_8 = t;
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
        }
      }
      t = k_6;
      {
        f_8 = t;
        c_8 :
        if(match_cons(f_8, sym__2))
          {
            g_8 = ATgetArgument(f_8, 0);
            h_8 = ATgetArgument(f_8, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_8)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_8))), not_null(h_8));
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
ATerm debug_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm l_6;
  l_6 = t;
  {
    ATerm o_8 = NULL,q_8 = NULL;
    ATerm m_6;
    m_6 = t;
    {
      ATerm p_8 = NULL;
      t = a_73(t);
      {
        p_8 = t;
        if(((o_8 != NULL) && (o_8 != p_8)))
          _fail(p_8);
        else
          o_8 = p_8;
      }
    }
    t = m_6;
    {
      ATerm r_8 = NULL;
      r_8 = t;
      if(((q_8 != NULL) && (q_8 != r_8)))
        _fail(r_8);
      else
        q_8 = r_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_8)), not_null(o_8)));
        t = printnl_0(t);
      }
    }
  }
  t = l_6;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm v_8 = NULL;
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_8 = NULL;
      w_8 = t;
      {
        if(((v_8 != NULL) && (v_8 != w_8)))
          _fail(w_8);
        else
          v_8 = w_8;
        t = SSL_ReadFromFile(not_null(v_8));
      }
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm u_0 (ATerm t)
        {
          t = term_q_6;
          return(t);
        }
        t = debug_1(t, u_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_70 (ATerm), ATerm l_70 (ATerm))
{
  ATerm a_9 = NULL,c_9 = NULL;
  ATerm t_6;
  t_6 = t;
  {
    ATerm b_9 = NULL;
    t = k_70(t);
    {
      b_9 = t;
      if(((a_9 != NULL) && (a_9 != b_9)))
        _fail(b_9);
      else
        a_9 = b_9;
    }
  }
  t = t_6;
  {
    ATerm d_9 = NULL;
    t = l_70(t);
    {
      d_9 = t;
      if(((c_9 != NULL) && (c_9 != d_9)))
        _fail(d_9);
      else
        c_9 = d_9;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_9), not_null(c_9));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_9 = NULL;
  ATerm u_6;
  u_6 = t;
  {
    ATerm v_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 (ATerm t)
        {
          ATerm k_9 = NULL,l_9 = NULL;
          k_9 = t;
          h_9 :
          if(match_cons(k_9, sym_Input_1))
            {
              l_9 = ATgetArgument(k_9, 0);
              if(((j_9 != NULL) && (j_9 != l_9)))
                _fail(l_9);
              else
                j_9 = l_9;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, v_0);
        LocalPopChoice(y_6);
      }
    else
      {
        t = v_6;
        {
          ATerm m_9 = NULL;
          t = term_z_6;
          {
            m_9 = t;
            if(((j_9 != NULL) && (j_9 != m_9)))
              _fail(m_9);
            else
              j_9 = m_9;
          }
        }
      }
  }
  t = u_6;
  {
    ATerm w_0 (ATerm t)
    {
      t = not_null(j_9);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_0);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm q_9 = NULL;
    q_9 = t;
    p_9 :
    if(!(match_string(q_9, "-v")))
      {
        if(!(match_string(q_9, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    t = term_g_7;
    t = set_config_0(t);
    t = term_h_7;
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    t = term_m_7;
    return(t);
  }
  t = Option_3(t, x_0, y_0, z_0);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm t_9 = NULL;
    t_9 = t;
    r_9 :
    if(!(match_string(t_9, "-k")))
      {
        if(!(match_string(t_9, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm n_7;
    n_7 = t;
    {
      ATerm u_9 = NULL;
      ATerm v_9 = NULL;
      t = string_to_int_0(t);
      {
        v_9 = t;
        if(((u_9 != NULL) && (u_9 != v_9)))
          _fail(v_9);
        else
          u_9 = v_9;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, not_null(u_9));
        t = set_config_0(t);
      }
    }
    t = n_7;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_p_7;
    return(t);
  }
  t = ArgOption_3(t, a_1, b_1, c_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  t = SSL_string_to_int(not_null(y_9));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm g_10 = NULL;
        g_10 = t;
        b_10 :
        if(!(match_string(g_10, "-S")))
          {
            if(!(match_string(g_10, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        t = term_a_8;
        t = set_config_0(t);
        t = term_b_8;
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        t = term_i_8;
        return(t);
      }
      t = Option_3(t, d_1, e_1, f_1);
      LocalPopChoice(y_7);
    }
  else
    {
      t = r_7;
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              ATerm h_10 = NULL;
              h_10 = t;
              c_10 :
              if(!(match_string(h_10, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_1 (ATerm t)
            {
              ATerm k_10 = NULL;
              ATerm l_8;
              l_8 = t;
              {
                ATerm i_10 = NULL;
                ATerm j_10 = NULL;
                t = string_to_int_0(t);
                {
                  j_10 = t;
                  if(((i_10 != NULL) && (i_10 != j_10)))
                    _fail(j_10);
                  else
                    i_10 = j_10;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_5, not_null(i_10));
                  t = set_config_0(t);
                }
              }
              t = l_8;
              {
                ATerm l_10 = NULL;
                l_10 = t;
                if(((k_10 != NULL) && (k_10 != l_10)))
                  _fail(l_10);
                else
                  k_10 = l_10;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_10));
              }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              t = term_m_8;
              return(t);
            }
            t = ArgOption_3(t, g_1, h_1, i_1);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            {
              ATerm j_1 (ATerm t)
              {
                ATerm m_10 = NULL;
                m_10 = t;
                f_10 :
                if(!(match_string(m_10, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_1 (ATerm t)
              {
                t = term_s_8;
                t = set_config_0(t);
                t = term_t_8;
                return(t);
              }
              ATerm l_1 (ATerm t)
              {
                t = term_u_8;
                return(t);
              }
              t = Option_3(t, j_1, k_1, l_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm z_8 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(e_9);
          }
        else
          {
            t = z_8;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm s_10 = NULL;
    s_10 = t;
    p_10 :
    if(!(match_string(s_10, "-o")))
      {
        if(!(match_string(s_10, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm v_10 = NULL;
    ATerm f_9;
    f_9 = t;
    {
      ATerm t_10 = NULL;
      ATerm u_10 = NULL;
      u_10 = t;
      if(((t_10 != NULL) && (t_10 != u_10)))
        _fail(u_10);
      else
        t_10 = u_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(t_10));
        t = set_config_0(t);
      }
    }
    t = f_9;
    {
      ATerm w_10 = NULL;
      w_10 = t;
      if(((v_10 != NULL) && (v_10 != w_10)))
        _fail(w_10);
      else
        v_10 = w_10;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_10));
    }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_i_9;
    return(t);
  }
  t = ArgOption_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
        ATerm p_1 (ATerm t)
        {
          ATerm a_11 = NULL;
          a_11 = t;
          z_10 :
          if(!(match_string(a_11, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_1 (ATerm t)
        {
          t = term_w_9;
          t = set_config_0(t);
          t = term_x_9;
          return(t);
        }
        ATerm r_1 (ATerm t)
        {
          t = term_z_9;
          return(t);
        }
        t = Option_3(t, p_1, q_1, r_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  g_11 = t;
  e_11 :
  if(match_string(g_11, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
        {
          h_11 = ATgetFirst((ATermList) g_11);
          i_11 = (ATerm) ATgetNext((ATermList) g_11);
          f_11 :
          if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
            {
              j_11 = ATgetFirst((ATermList) i_11);
              k_11 = (ATerm) ATgetNext((ATermList) i_11);
              {
                ATerm o_11 = NULL;
                ATerm a_10;
                a_10 = t;
                {
                  t = not_null(h_11);
                  t = j_0(t);
                }
                t = a_10;
                {
                  ATerm p_11 = NULL;
                  t = not_null(j_11);
                  {
                    t = k_0(t);
                    {
                      p_11 = t;
                      if(((o_11 != NULL) && (o_11 != p_11)))
                        _fail(p_11);
                      else
                        o_11 = p_11;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_11)), not_null(o_11));
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
  ATerm s_1 (ATerm t)
  {
    ATerm w_11 = NULL;
    w_11 = t;
    t_11 :
    if(!(match_string(w_11, "-i")))
      {
        if(!(match_string(w_11, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    ATerm z_11 = NULL;
    ATerm d_10;
    d_10 = t;
    {
      ATerm x_11 = NULL;
      ATerm y_11 = NULL;
      y_11 = t;
      if(((x_11 != NULL) && (x_11 != y_11)))
        _fail(y_11);
      else
        x_11 = y_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(x_11));
        t = set_config_0(t);
      }
    }
    t = d_10;
    {
      ATerm a_12 = NULL;
      a_12 = t;
      if(((z_11 != NULL) && (z_11 != a_12)))
        _fail(a_12);
      else
        z_11 = a_12;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_11));
    }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  t = ArgOption_3(t, s_1, u_1, v_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = o_10;
      {
        ATerm r_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(x_10);
          }
        else
          {
            t = r_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATempty, term_y_10));
  {
    t = printnl_0(t);
    {
      t = term_z_3;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  t = SSL_TicksToSeconds(not_null(e_12));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym__2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_12), not_null(l_12));
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = SSL_addr(not_null(k_12), not_null(l_12));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_68 (ATerm), ATerm w_68 (ATerm))
{
  ATerm d_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_68(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = d_11;
      {
        ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
        s_12 = t;
        r_12 :
        if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
          {
            t_12 = ATgetFirst((ATermList) s_12);
            u_12 = (ATerm) ATgetNext((ATermList) s_12);
            {
              ATerm x_12 = NULL;
              ATerm y_12 = NULL;
              t = not_null(u_12);
              {
                t = foldr_2(t, v_68, w_68);
                {
                  y_12 = t;
                  if(((x_12 != NULL) && (x_12 != y_12)))
                    _fail(y_12);
                  else
                    x_12 = y_12;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), not_null(x_12));
                t = w_68(t);
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
ATerm crush_2 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm))
{
  ATerm f_13 = NULL;
  ATerm h_13 = NULL;
  f_13 = t;
  {
    ATerm i_13 = NULL;
    ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
    t = not_null(f_13);
    {
      i_13 = t;
      {
        t = SSL_explode_term(not_null(i_13));
        {
          k_13 = t;
          e_13 :
          if(match_cons(k_13, sym__2))
            {
              l_13 = ATgetArgument(k_13, 0);
              m_13 = ATgetArgument(k_13, 1);
              if(((h_13 != NULL) && (h_13 != m_13)))
                _fail(m_13);
              else
                h_13 = m_13;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_13);
      t = foldr_2(t, t_67, u_67);
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
    ATerm w_1 (ATerm t)
    {
      t = term_z_7;
      return(t);
    }
    t = crush_2(t, w_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym__2))
    {
      t_13 = ATgetArgument(s_13, 0);
      u_13 = ATgetArgument(s_13, 1);
      {
        ATerm m_11;
        m_11 = t;
        {
          ATerm n_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_13), not_null(u_13));
              LocalPopChoice(q_11);
            }
          else
            {
              t = n_11;
              t = SSL_gtr(not_null(t_13), not_null(u_13));
            }
        }
        t = m_11;
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
  ATerm a_14 = NULL;
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
      b_14 = t;
      z_13 :
      if(match_cons(b_14, sym__2))
        {
          c_14 = ATgetArgument(b_14, 0);
          d_14 = ATgetArgument(b_14, 1);
          {
            if(((a_14 != NULL) && (a_14 != c_14)))
              _fail(c_14);
            else
              a_14 = c_14;
            if(((a_14 != NULL) && (a_14 != d_14)))
              _fail(d_14);
            else
              a_14 = d_14;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_12;
      b_12 = t;
      {
        ATerm g_14 = NULL;
        ATerm h_14 = NULL;
        t = term_t_5;
        {
          t = get_config_0(t);
          {
            h_14 = t;
            if(((g_14 != NULL) && (g_14 != h_14)))
              _fail(h_14);
            else
              g_14 = h_14;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), term_z_3);
          t = geq_0(t);
        }
      }
      t = b_12;
      t = w_75(t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm l_14 = NULL,n_14 = NULL;
    ATerm c_12;
    c_12 = t;
    {
      ATerm m_14 = NULL;
      t = run_time_0(t);
      {
        m_14 = t;
        if(((l_14 != NULL) && (l_14 != m_14)))
          _fail(m_14);
        else
          l_14 = m_14;
      }
    }
    t = c_12;
    {
      ATerm o_14 = NULL;
      t = term_d_12;
      {
        t = get_config_0(t);
        {
          o_14 = t;
          if(((n_14 != NULL) && (n_14 != o_14)))
            _fail(o_14);
          else
            n_14 = o_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_12), not_null(l_14)), term_f_12), not_null(n_14)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_1);
  {
    t = term_z_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_Version_0))
    {
      ATerm x_14 = NULL,z_14 = NULL;
      ATerm h_12;
      h_12 = t;
      {
        ATerm y_14 = NULL;
        t = SSLgetAnnotations(not_null(v_14));
        {
          y_14 = t;
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
        }
      }
      t = h_12;
      {
        ATerm a_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_14));
        {
          a_15 = t;
          if(((z_14 != NULL) && (z_14 != a_15)))
            _fail(a_15);
          else
            z_14 = a_15;
        }
        t = not_null(z_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        {
          ATerm o_12 = t;
          int p_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_12);
            }
          else
            {
              t = o_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, y_1);
  t = c_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  t = SSL_table_create(not_null(f_15));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  {
    ATerm q_12;
    q_12 = t;
    {
      t = term_v_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_12, term_w_12, not_null(j_15));
          t = table_put_0(t);
        }
      }
    }
    t = q_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  t = SSL_table_destroy(not_null(n_15));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  t = SSL_exit(not_null(r_15));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(((ATgetType(v_15) == AT_LIST) && ATisEmpty(v_15)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
        {
          w_15 = ATgetFirst((ATermList) v_15);
          x_15 = (ATerm) ATgetNext((ATermList) v_15);
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
    ATerm a_16 = NULL;
    ATerm d_16 = NULL;
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm b_16 = NULL;
          ATerm c_16 = NULL;
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
          t = (ATerm) ATinsert(ATempty, not_null(b_16));
        }
      }
    {
      d_16 = t;
      if(((a_16 != NULL) && (a_16 != d_16)))
        _fail(d_16);
      else
        a_16 = d_16;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_6, not_null(a_16));
      t = printnl_0(t);
    }
  }
  t = z_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm g_16 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = Cons_2(t, h_62, g_16);
      }
    return(t);
  }
  t = g_16(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  p_16 = t;
  m_16 :
  if(((ATgetType(p_16) == AT_LIST) && !(ATisEmpty(p_16))))
    {
      n_16 = ATgetFirst((ATermList) p_16);
      o_16 = (ATerm) ATgetNext((ATermList) p_16);
      {
        ATerm s_16 = NULL;
        t = not_null(o_16);
        {
          ATerm g_13;
          g_13 = t;
          {
            ATerm t_16 = NULL,v_16 = NULL,x_16 = NULL;
            ATerm j_13;
            j_13 = t;
            {
              ATerm u_16 = NULL;
              t = i_0(t);
              {
                u_16 = t;
                if(((t_16 != NULL) && (t_16 != u_16)))
                  _fail(u_16);
                else
                  t_16 = u_16;
              }
            }
            t = j_13;
            {
              ATerm w_16 = NULL;
              t = not_null(n_16);
              {
                t = h_0(t);
                {
                  w_16 = t;
                  if(((v_16 != NULL) && (v_16 != w_16)))
                    _fail(w_16);
                  else
                    v_16 = w_16;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_16)), not_null(v_16));
                {
                  x_16 = t;
                  if(((s_16 != NULL) && (s_16 != x_16)))
                    _fail(x_16);
                  else
                    s_16 = x_16;
                }
              }
            }
          }
          t = g_13;
          {
            ATerm z_1 (ATerm t)
            {
              t = not_null(s_16);
              return(t);
            }
            t = reverse_acc_2(t, h_0, z_1);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_16) == AT_LIST) && ATisEmpty(p_16)))
        {
          {
            t = term_f_7;
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
  ATerm a_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_Program_1))
    {
      j_17 = ATgetArgument(i_17, 0);
      {
        ATerm m_17 = NULL,o_17 = NULL;
        ATerm n_17 = NULL;
        t = SSLgetAnnotations(not_null(i_17));
        {
          n_17 = t;
          if(((m_17 != NULL) && (m_17 != n_17)))
            _fail(n_17);
          else
            m_17 = n_17;
        }
        {
          t = not_null(j_17);
          {
            ATerm q_17 = NULL;
            t = d_54(t);
            {
              o_17 = t;
              {
                ATerm r_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_17)), not_null(m_17));
                {
                  r_17 = t;
                  if(((q_17 != NULL) && (q_17 != r_17)))
                    _fail(r_17);
                  else
                    q_17 = r_17;
                }
                t = not_null(q_17);
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
  ATerm z_17 = NULL;
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_18 = NULL;
      t = term_d_12;
      {
        t = get_config_0(t);
        {
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
        }
      }
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm b_2 (ATerm t)
        {
          ATerm f_2 (ATerm t)
          {
            ATerm b_18 = NULL;
            b_18 = t;
            if(((z_17 != NULL) && (z_17 != b_18)))
              _fail(b_18);
            else
              z_17 = b_18;
            return(t);
          }
          t = Program_1(t, f_2);
          return(t);
        }
        t = fetch_1(t, b_2);
      }
    }
  {
    t = term_p_13;
    {
      t = echo_0(t);
      {
        t = term_w_13;
        {
          t = table_get_0(t);
          {
            ATerm i_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, i_2);
            {
              ATerm j_2 (ATerm t)
              {
                ATerm c_18 = NULL;
                ATerm d_18 = NULL;
                d_18 = t;
                if(((c_18 != NULL) && (c_18 != d_18)))
                  _fail(d_18);
                else
                  c_18 = d_18;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_18)), term_x_13);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, j_2);
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
  ATerm y_13;
  y_13 = t;
  {
    ATerm i_18 = NULL;
    ATerm j_18 = NULL;
    j_18 = t;
    if(((i_18 != NULL) && (i_18 != j_18)))
      _fail(j_18);
    else
      i_18 = j_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATempty, not_null(i_18)));
      t = printnl_0(t);
    }
  }
  t = y_13;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm e_14;
  e_14 = t;
  {
    t = b_73(t);
    t = debug_0(t);
  }
  t = e_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_54 (ATerm))
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
            t = e_54(t);
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
ATerm fetch_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm j_19 (ATerm t)
  {
    ATerm f_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_62, _id);
        LocalPopChoice(i_14);
      }
    else
      {
        t = f_14;
        t = Cons_2(t, _id, j_19);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_76 (ATerm))
{
  t = fetch_1(t, z_76);
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
      ATerm j_14;
      j_14 = t;
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
      t = j_14;
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
ATerm try_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm k_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_54(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = k_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym__2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      t = SSL_table_get(not_null(d_20), not_null(e_20));
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
        ATerm q_14;
        q_14 = t;
        {
          ATerm s_20 = NULL;
          ATerm t_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(n_20));
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
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
        t = q_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm x_20 = NULL;
  ATerm y_20 = NULL;
  t = term_f_7;
  {
    t = e_78(t);
    {
      y_20 = t;
      if(((x_20 != NULL) && (x_20 != y_20)))
        _fail(y_20);
      else
        x_20 = y_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_13, term_v_13, not_null(x_20));
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
            ATerm t_14;
            t_14 = t;
            {
              t = not_null(f_21);
              t = a_0(t);
            }
            t = t_14;
            {
              ATerm k_21 = NULL;
              t = term_f_7;
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
  ATerm k_2 (ATerm t)
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
  ATerm l_2 (ATerm t)
  {
    t = term_b_15;
    {
      t = set_config_0(t);
      t = term_c_15;
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_d_15;
    return(t);
  }
  t = Option_3(t, k_2, l_2, m_2);
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
ATerm Cons_2 (ATerm t, ATerm z_48 (ATerm), ATerm a_49 (ATerm))
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
            t = z_48(t);
            {
              m_22 = t;
              {
                t = not_null(g_22);
                {
                  ATerm q_22 = NULL;
                  t = a_49(t);
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
        t = (ATerm) ATmakeAppl(sym__3, term_l_5, not_null(n_23), not_null(o_23));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm g_15;
  g_15 = t;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_15;
        t = c_78(t);
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        {
        }
      }
  }
  t = g_15;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm w_23 = NULL;
      ATerm l_15;
      l_15 = t;
      {
        ATerm u_23 = NULL;
        ATerm v_23 = NULL;
        v_23 = t;
        if(((u_23 != NULL) && (u_23 != v_23)))
          _fail(v_23);
        else
          u_23 = v_23;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_12, not_null(u_23));
          t = set_config_0(t);
        }
      }
      t = l_15;
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
    ATerm o_2 (ATerm t)
    {
      ATerm m_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              {
                t = c_78(t);
                t = Cons_2(t, _id, o_2);
              }
            }
          LocalPopChoice(o_15);
        }
      else
        {
          t = m_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_2, o_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  ATerm s_15;
  s_15 = t;
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
  t = s_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm n_24 = NULL;
  ATerm t_15;
  t_15 = t;
  {
    t = term_y_15;
    t = table_put_0(t);
  }
  t = t_15;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm z_15 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_78(t);
          LocalPopChoice(e_16);
        }
      else
        {
          t = z_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_2);
    {
      ATerm f_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_16;
          i_16 = t;
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_14;
                t = get_config_0(t);
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = fetch_1(t, Help_0);
              }
          }
          t = i_16;
          {
            t = system_usage_0(t);
            {
              t = term_z_7;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_16);
        }
      else
        {
          t = f_16;
          {
            ATerm l_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_2 (ATerm t)
                {
                  ATerm v_2 (ATerm t)
                  {
                    ATerm o_24 = NULL;
                    o_24 = t;
                    if(((n_24 != NULL) && (n_24 != o_24)))
                      _fail(o_24);
                    else
                      n_24 = o_24;
                    return(t);
                  }
                  t = Undefined_1(t, v_2);
                  return(t);
                }
                t = fetch_1(t, u_2);
                {
                  ATerm z_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_24)), term_r_16);
                    return(t);
                  }
                  t = say_1(t, z_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_3;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(q_16);
              }
            else
              {
                t = l_16;
                {
                }
              }
          }
        }
      {
        ATerm y_16;
        y_16 = t;
        {
          t = term_q_13;
          t = table_destroy_0(t);
        }
        t = y_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  t = parse_options_1(t, i_74);
  {
    t = store_options_0(t);
    {
      t = k_74(t);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_74);
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              ATerm b_17 = t;
              int c_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(c_17);
                }
              else
                {
                  t = b_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_75(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_74);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_3, b_75, c_75, e_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm v_74 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      ATerm f_17;
      f_17 = t;
      {
        ATerm r_24 = NULL;
        ATerm s_24 = NULL;
        t = term_d_12;
        {
          t = get_config_0(t);
          {
            s_24 = t;
            if(((r_24 != NULL) && (r_24 != s_24)))
              _fail(s_24);
            else
              r_24 = s_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_3, (ATerm) ATinsert(ATempty, not_null(r_24)));
          t = printnl_0(t);
        }
      }
      t = f_17;
      return(t);
    }
    t = if_verbose2_1(t, g_3);
    return(t);
  }
  t = iowrap_4(t, t_74, u_74, v_74, f_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_74 (ATerm), ATerm s_74 (ATerm))
{
  t = iowrap_3(t, r_74, s_74, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    t = _2(t, _id, o_74);
    return(t);
  }
  t = iowrap_2(t, h_3, _fail);
  return(t);
}
ATerm annos_to_term_0 (ATerm t)
{
  t = iowrap_1(t, catch_annos_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, catch_annos_0);
  return(t);
}

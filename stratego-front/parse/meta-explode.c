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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_RootApp_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Build_1;
Symbol sym_Path_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_d_13;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_s_9;
ATerm term_k_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_z_7;
ATerm term_s_7;
ATerm term_l_7;
ATerm term_r_6;
ATerm term_d_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
void init_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Cong_2, term_x_5, (ATerm) ATempty);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Op_2, term_x_5, (ATerm) ATempty);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_c_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_o_5);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_w_10);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_o_5);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_o_5);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_o_5);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_o_5);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm n_1 (ATerm q_0, ATerm);
ATerm str_explode_0_0 (ATerm);
ATerm TrmOp_0_0 (ATerm);
ATerm n_4 (ATerm s_30, ATerm t_30, ATerm);
ATerm foldr_3_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm p_4 (ATerm v_30, ATerm u_30, ATerm);
ATerm r_4 (ATerm a_135, ATerm);
ATerm s_4 (ATerm l_135, ATerm);
ATerm t_4 (ATerm p_134, ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm y_4 (ATerm s_50, ATerm t_50, ATerm);
ATerm z_4 (ATerm g_54, ATerm h_54, ATerm);
ATerm b_5 (ATerm i_103 (ATerm), ATerm a_441, ATerm k_54, ATerm);
ATerm a_5 (ATerm c_54, ATerm d_54, ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm a_12 (ATerm o_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_5 (ATerm i_54, ATerm);
ATerm d_5 (ATerm u_50, ATerm v_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_14 (ATerm t_12, ATerm);
ATerm u_14 (ATerm a_13, ATerm b_13, ATerm c_13, ATerm);
ATerm v_14 (ATerm z_13, ATerm a_14, ATerm b_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_91 (ATerm), ATerm);
ATerm x_4 (ATerm i_45, ATerm j_45, ATerm);
ATerm debug_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_104 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_5 (ATerm j_55, ATerm k_55, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_5 (ATerm h_60, ATerm i_60, ATerm g_60, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_5 (ATerm s_47, ATerm t_47, ATerm);
ATerm foldr_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_104 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm need_help_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_5 (ATerm y_61, ATerm z_61, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm l_109 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm parse_options_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm f_5 (ATerm);
ATerm iowrap_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL;
  b_0 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_p_5;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_5), f_0), term_q_5);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t = term_s_5;
  k_0 = t;
  t = SSL_exit(k_0);
  t = b_0;
  return(t);
}
ATerm n_1 (ATerm q_0, ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      r_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_0;
  t = map_1_0(str_explode_0_0, t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, r_0, t_0);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,a_1 = NULL;
  a_1 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      x_0 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_0), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          x_0 = ATgetArgument(t, 0);
          {
            ATerm t_5 = t;
            int u_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_1;
                t = t_4(x_0, t);
                ;
                LocalPopChoice(u_5);
              }
            else
              {
                t = t_5;
                t = n_1(a_1, t);
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              x_0 = ATgetArgument(t, 0);
              {
                ATerm v_5 = t;
                int w_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_1;
                    t = r_4(x_0, t);
                    ;
                    LocalPopChoice(w_5);
                  }
                else
                  {
                    t = v_5;
                    t = n_1(a_1, t);
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = term_z_5;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_0 = ATgetFirst((ATermList) t);
                      y_0 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm b_6 = t;
                        int c_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_1 = NULL,k_1 = NULL;
                            t = x_0;
                            t = str_explode_0_0(t);
                            j_1 = t;
                            t = y_0;
                            t = str_explode_0_0(t);
                            k_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Cong_2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, k_1), j_1));
                            ;
                            LocalPopChoice(c_6);
                          }
                        else
                          {
                            t = b_6;
                            t = n_1(a_1, t);
                          }
                      }
                    }
                  else
                    {
                      t = n_1(a_1, t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm o_1 = NULL,r_1 = NULL,t_1 = NULL,y_1 = NULL;
  y_1 = t;
  t = SSL_explode_term(y_1);
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_1;
  t = map_1_0(trm_explode_0_0, t);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, o_1, t_1);
  return(t);
}
ATerm n_4 (ATerm s_30, ATerm t_30, ATerm t)
{
  ATerm z_1 = NULL,k_2 = NULL;
  t = s_30;
  t = trm_explode_0_0(t);
  z_1 = t;
  t = t_30;
  t = trm_explode_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, k_2), z_1));
  return(t);
}
ATerm foldr_3_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,u_2 = NULL;
  r_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_2;
      t = w_96(t);
    }
  else
    {
      ATerm y_2 = NULL,a_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_2 = ATgetFirst((ATermList) t);
          u_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_2;
      t = y_96(t);
      y_2 = t;
      t = u_2;
      t = foldr_3_0(w_96, x_96, y_96, t);
      a_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_2, a_3);
      t = x_96(t);
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,o_0 = NULL;
  t_3 = t;
  t = SSL_explode_term(t_3);
  if(match_cons(t, sym__2))
    {
      ATerm f_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_6 = ATgetArgument(t, 1);
        if(((ATgetType(g_6) == AT_LIST) && !(ATisEmpty(g_6))))
          {
            u_3 = ATgetFirst((ATermList) g_6);
            {
              ATerm h_6 = (ATerm) ATgetNext((ATermList) g_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(t_3);
  if(match_cons(t, sym__2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_6 = ATgetArgument(t, 1);
        if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
          {
            ATerm l_6 = ATgetFirst((ATermList) k_6);
            ATerm n_6 = (ATerm) ATgetNext((ATermList) k_6);
            if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
              {
                o_0 = ATgetFirst((ATermList) n_6);
                {
                  ATerm o_6 = (ATerm) ATgetNext((ATermList) n_6);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, o_0), u_3));
  return(t);
}
ATerm p_4 (ATerm v_30, ATerm u_30, ATerm t)
{
  ATerm e_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = not_null(u_30);
    {
      ATerm p_6 = t;
      int q_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              o_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, term_r_6), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, o_3))));
          ;
          LocalPopChoice(q_6);
        }
      else
        {
          t = p_6;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = not_null(v_30);
  if(match_cons(t, sym_meta_listvar_1))
    {
      e_3 = ATgetArgument(t, 0);
      {
        ATerm s_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(e_3))));
            ;
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            t = not_null(v_30);
          }
      }
    }
  else
    {
      t = not_null(v_30);
    }
  t = foldr_3_0(p_0, v_0, trm_explode_0_0, t);
  return(t);
}
ATerm r_4 (ATerm a_135, ATerm t)
{
  t = a_135;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm s_4 (ATerm l_135, ATerm t)
{
  ATerm b_4 = NULL;
  t = l_135;
  t = MetaExplode_0_0(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, b_4);
  return(t);
}
ATerm t_4 (ATerm p_134, ATerm t)
{
  t = p_134;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm u_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          v_4 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, v_4);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              v_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, term_r_6), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, v_4))));
        }
      ;
      LocalPopChoice(w_6);
    }
  else
    {
      t = u_6;
      {
        ATerm d_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 = NULL,w_0 = NULL;
            w_0 = t;
            t = SSL_is_string(w_0);
            u_0 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, u_0);
            ;
            LocalPopChoice(g_7);
          }
        else
          {
            t = d_7;
            {
              ATerm h_7 = t;
              int i_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_5 = NULL,m_5 = NULL,n_5 = NULL;
                  i_5 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      m_5 = ATgetArgument(t, 0);
                      t = i_5;
                      t = t_4(m_5, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          m_5 = ATgetArgument(t, 0);
                          t = i_5;
                          t = s_4(m_5, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              m_5 = ATgetArgument(t, 0);
                              t = i_5;
                              t = r_4(m_5, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  m_5 = ATgetArgument(t, 0);
                                  n_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm f_1 = NULL,g_1 = NULL;
                                    t = m_5;
                                    t = trm_explode_0_0(t);
                                    f_1 = t;
                                    t = n_5;
                                    t = MetaExplode_0_0(t);
                                    g_1 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, f_1, g_1);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      m_5 = ATgetArgument(t, 0);
                                      n_5 = ATgetArgument(t, 1);
                                      t = i_5;
                                      t = p_4(m_5, n_5, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_r_6;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              m_5 = ATgetFirst((ATermList) t);
                                              n_5 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = i_5;
                                          t = n_4(m_5, n_5, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  ;
                  LocalPopChoice(i_7);
                }
              else
                {
                  t = h_7;
                  t = TrmOp_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm alltd_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_86(t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        t = SRTS_all(a_6, t);
      }
    return(t);
  }
  t = a_6(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm i_6 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      i_6 = ATgetArgument(t, 0);
      t = i_6;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          i_6 = ATgetArgument(t, 0);
          {
            ATerm m_6 = NULL;
            t = i_6;
            t = trm_explode_0_0(t);
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, m_6);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              i_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_6;
          t = str_explode_0_0(t);
        }
    }
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  t = alltd_1_0(z_0, t);
  return(t);
}
ATerm y_4 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_fputc(s_50, t_50);
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_6);
  return(t);
}
ATerm z_4 (ATerm g_54, ATerm h_54, ATerm t)
{
  ATerm a_7 = NULL;
  t = SSL_write_term_to_stream_text(g_54, h_54);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_7);
  return(t);
}
ATerm b_5 (ATerm i_103 (ATerm), ATerm a_441, ATerm k_54, ATerm t)
{
  ATerm b_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_441, term_l_7);
  t = open_stream_0_0(t);
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_7, k_54);
  t = i_103(t);
  t = fclose_0_0(t);
  t = k_54;
  return(t);
}
ATerm a_5 (ATerm c_54, ATerm d_54, ATerm t)
{
  ATerm c_7 = NULL;
  t = SSL_write_term_to_stream_baf(c_54, d_54);
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_7);
  return(t);
}
ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_7 = ATgetArgument(t, 0);
      if(match_cons(m_7, sym_Stream_1))
        {
          d_2 = ATgetArgument(m_7, 0);
        }
      else
        _fail(t);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(d_2, e_2, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if(match_cons(p_7, sym_Stream_1))
        {
          d_3 = ATgetArgument(p_7, 0);
        }
      else
        _fail(t);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(d_3, h_3, t);
  z_2 = t;
  t = term_s_7;
  b_3 = t;
  t = z_2;
  if(match_cons(t, sym_Stream_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, z_2);
  t = y_4(b_3, c_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,q_7 = NULL,r_7 = NULL,t_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,c_8 = NULL,d_8 = NULL,d_10 = NULL,e_10 = NULL,n_2 = NULL,n_0 = NULL;
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  if(match_cons(t, sym__2))
    {
      if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_7 = ATgetArgument(t, 0);
      if(((c_8 != NULL) && (c_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(o_7));
  if(((x_7 != NULL) && (x_7 != t)))
    _fail(t);
  else
    x_7 = t;
  t = not_null(y_7);
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((n_7 != NULL) && (n_7 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_1, t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = term_z_7;
        if(((n_7 != NULL) && (n_7 != t)))
          _fail(t);
        else
          n_7 = t;
      }
    if(((d_8 != NULL) && (d_8 != t)))
      _fail(t);
    else
      d_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(c_8));
    if(((n_0 != NULL) && (n_0 != t)))
      _fail(t);
    else
      n_0 = t;
    t = SSLsetAnnotations(not_null(n_0), not_null(x_7));
    t = not_null(o_7);
    if(match_cons(t, sym__2))
      {
        if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_7 = ATgetArgument(t, 0);
        if(((t_7 != NULL) && (t_7 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          t_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(o_7));
    if(((q_7 != NULL) && (q_7 != t)))
      _fail(t);
    else
      q_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), (ATerm) ATmakeAppl(sym__2, not_null(n_7), not_null(t_7)));
    if(((n_2 != NULL) && (n_2 != t)))
      _fail(t);
    else
      n_2 = t;
    t = SSLsetAnnotations(not_null(n_2), not_null(q_7));
    if(((w_7 != NULL) && (w_7 != t)))
      _fail(t);
    else
      w_7 = t;
    if(match_cons(t, sym__2))
      {
        if(((d_10 != NULL) && (d_10 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_10 = ATgetArgument(t, 0);
        if(((e_10 != NULL) && (e_10 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          e_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm b_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 = NULL,x_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(not_null(w_7));
          u_1 = t;
          t = not_null(d_10);
          t = fetch_1_0(c_1, t);
          x_1 = t;
          t = not_null(e_10);
          if(match_cons(t, sym__2))
            {
              b_2 = ATgetArgument(t, 0);
              c_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_5(d_1, b_2, c_2, t);
          a_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_1, a_2);
          o_2 = t;
          t = SSLsetAnnotations(o_2, u_1);
          ;
          LocalPopChoice(e_8);
        }
      else
        {
          t = b_8;
          {
            ATerm j_2 = NULL,q_2 = NULL,t_2 = NULL,v_2 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(not_null(w_7));
            j_2 = t;
            t = not_null(e_10);
            if(match_cons(t, sym__2))
              {
                t_2 = ATgetArgument(t, 0);
                v_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_5(e_1, t_2, v_2, t);
            q_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), q_2);
            w_3 = t;
            t = SSLsetAnnotations(w_3, j_2);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,o_10 = NULL,q_10 = NULL,z_10 = NULL;
  z_10 = t;
  t = dtime_0_0(t);
  t = z_10;
  t = k_106(t);
  q_10 = t;
  t = dtime_0_0(t);
  j_10 = t;
  t = q_10;
  if(match_cons(t, sym__2))
    {
      k_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_10), (ATerm) ATmakeAppl(sym_Runtime_1, j_10)), o_10);
  return(t);
}
ATerm a_12 (ATerm o_11, ATerm t)
{
  t = SSL_fclose(o_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_11 = NULL,w_11 = NULL;
  w_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_11 = ATgetArgument(t, 0);
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_11);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            t = a_12(w_11, t);
          }
      }
    }
  else
    {
      t = a_12(w_11, t);
    }
  return(t);
}
ATerm c_5 (ATerm i_54, ATerm t)
{
  t = SSL_read_term_from_stream(i_54);
  return(t);
}
ATerm d_5 (ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm b_12 = NULL;
  t = SSL_fopen(u_50, v_50);
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  t = SSL_stdin_stream();
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_12 = NULL;
  t = SSL_stdout_stream();
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  t = SSL_stderr_stream();
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_12);
  return(t);
}
ATerm t_14 (ATerm t_12, ATerm t)
{
  ATerm u_12 = NULL;
  t = SSL_explode_term(t_12);
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_8 = ATgetArgument(t, 1);
        if(((ATgetType(k_8) == AT_LIST) && !(ATisEmpty(k_8))))
          {
            u_12 = ATgetFirst((ATermList) k_8);
            {
              ATerm l_8 = (ATerm) ATgetNext((ATermList) k_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_14 (ATerm a_13, ATerm b_13, ATerm c_13, ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,q_13 = NULL,q_4 = NULL;
  t = SSLgetAnnotations(c_13);
  h_13 = t;
  t = a_13;
  if(match_cons(t, sym_Path_1))
    {
      q_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_13, b_13);
  q_4 = t;
  t = SSLsetAnnotations(q_4, h_13);
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(f_13, g_13, t);
  return(t);
}
ATerm v_14 (ATerm z_13, ATerm a_14, ATerm b_14, ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,h_14 = NULL,z_6 = NULL;
  t = SSLgetAnnotations(b_14);
  e_14 = t;
  t = SSL_is_string(z_13);
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_14, a_14);
  z_6 = t;
  t = SSLsetAnnotations(z_6, e_14);
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(c_14, d_14, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      ATerm n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_14 = t;
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
      {
        ATerm p_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_14(k_14, t);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = p_8;
            {
              ATerm s_8 = t;
              int t_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_14(l_14, m_14, k_14, t);
                  ;
                  LocalPopChoice(t_8);
                }
              else
                {
                  t = s_8;
                  t = v_14(l_14, m_14, k_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_14(k_14, t);
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL;
  ATerm y_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = NULL;
      d_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_15, term_c_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = y_8;
      t = debug_1_0(h_1, t);
      _fail(t);
    }
  y_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(z_14, t);
  w_14 = t;
  t = y_14;
  t = fclose_0_0(t);
  t = w_14;
  return(t);
}
ATerm fetch_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm x_16 (ATerm t)
  {
    ATerm s_16 = NULL,v_16 = NULL,w_16 = NULL;
    s_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_16 = ATgetFirst((ATermList) t);
        w_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 = NULL,k_4 = NULL,f_8 = NULL;
          t = SSLgetAnnotations(s_16);
          h_4 = t;
          t = v_16;
          t = b_91(t);
          k_4 = t;
          t = (ATerm) ATinsert(CheckATermList(w_16), k_4);
          f_8 = t;
          t = SSLsetAnnotations(f_8, h_4);
          ;
          LocalPopChoice(g_9);
        }
      else
        {
          t = e_9;
          {
            ATerm y_5 = NULL,e_6 = NULL,g_8 = NULL;
            t = SSLgetAnnotations(s_16);
            y_5 = t;
            t = w_16;
            t = x_16(t);
            e_6 = t;
            t = (ATerm) ATinsert(CheckATermList(e_6), v_16);
            g_8 = t;
            t = SSLsetAnnotations(g_8, y_5);
          }
        }
    }
    return(t);
  }
  t = x_16(t);
  return(t);
}
ATerm x_4 (ATerm i_45, ATerm j_45, ATerm t)
{
  t = SSL_strcat(i_45, j_45);
  return(t);
}
ATerm debug_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,h_17 = NULL,l_17 = NULL;
  c_17 = t;
  t = g_103(t);
  d_17 = t;
  t = term_p_5;
  h_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_17), d_17);
  l_17 = t;
  t = SSL_printnl(h_17, l_17);
  t = c_17;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_17 = NULL;
      s_17 = t;
      t = SSL_is_string(s_17);
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_1, t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
              y_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_17 = ATgetArgument(t, 0);
                  t = z_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_17 = ATgetArgument(t, 0);
                      t = z_17;
                      {
                        ATerm q_9 = t;
                        int r_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_9);
                          }
                        else
                          {
                            t = q_9;
                            t = debug_1_0(l_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_18 = NULL,j_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_17 = ATgetArgument(t, 0);
                          a_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_17;
                      t = eval_config_0_0(t);
                      g_18 = t;
                      t = a_18;
                      t = eval_config_0_0(t);
                      j_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_18, j_18);
                      t = x_4(g_18, j_18, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_18 = NULL,s_18 = NULL;
  p_18 = t;
  t = term_s_9;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, p_18);
  t = g_5(s_18, p_18, t);
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL,v_18 = NULL;
        t = eval_config_0_0(t);
        t_18 = t;
        t = term_s_9;
        v_18 = t;
        t = SSL_table_put(v_18, p_18, t_18);
        t = t_18;
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm z_18 = NULL;
  z_18 = t;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_19 = NULL;
        t = term_y_9;
        t = get_config_0_0(t);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_19, term_z_9);
        t = geq_0_0(t);
        t = z_18;
        t = t_104(t);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = z_18;
      }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  if(match_string(t, "-k"))
    {
      t = e_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_19;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  t = SSL_string_to_int(f_19);
  g_19 = t;
  t = term_a_10;
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, g_19);
  t = j_5(h_19, g_19, t);
  t = f_19;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_1, p_1, q_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  if(match_string(t, "-S"))
    {
      t = j_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_19;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  t = term_y_9;
  k_19 = t;
  t = term_c_10;
  l_19 = t;
  t = term_f_10;
  t = j_5(k_19, l_19, t);
  t = term_g_10;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  t = SSL_string_to_int(m_19);
  n_19 = t;
  t = term_y_9;
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, n_19);
  t = j_5(o_19, n_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_19);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm i_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  t = term_l_10;
  p_19 = t;
  t = term_o_5;
  q_19 = t;
  t = term_m_10;
  t = j_5(p_19, q_19, t);
  t = term_n_10;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_1, v_1, w_1, t);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_2, g_2, h_2, t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = Option_3_0(i_2, l_2, m_2, t);
          }
      }
    }
  return(t);
}
ATerm j_5 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm r_19 = NULL;
  t = term_s_9;
  r_19 = t;
  t = SSL_table_put(r_19, j_55, k_55);
  t = (ATerm) ATmakeAppl(sym__3, term_s_9, j_55, k_55);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
      t = term_o_5;
      t = d_0(t);
      w_19 = t;
      t = term_v_10;
      x_19 = t;
      t = term_w_10;
      y_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, w_19);
      t = h_5(x_19, y_19, w_19, t);
      _fail(t);
    }
  else
    {
      ATerm b_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_19 = ATgetFirst((ATermList) t);
          v_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_19;
      t = a_0(t);
      t = term_o_5;
      t = c_0(t);
      b_20 = t;
      t = (ATerm) ATinsert(CheckATermList(v_19), b_20);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  if(match_string(t, "-o"))
    {
      t = d_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_20;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  e_20 = t;
  t = term_x_10;
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, e_20);
  t = j_5(f_20, e_20, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_20);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, w_2, x_2, t);
  return(t);
}
ATerm h_5 (ATerm h_60, ATerm i_60, ATerm g_60, ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_60, i_60);
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_11 = ATgetArgument(t, 0);
            ATerm d_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_60, i_60);
        t = g_5(h_60, i_60, t);
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATempty;
      }
    i_20 = t;
    t = (ATerm) ATinsert(CheckATermList(i_20), g_60);
    j_20 = t;
    t = SSL_table_put(h_60, i_60, j_20);
    t = h_20;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
      t = term_o_5;
      t = j_0(t);
      u_20 = t;
      t = term_v_10;
      v_20 = t;
      t = term_w_10;
      w_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, u_20);
      t = h_5(v_20, w_20, u_20, t);
      _fail(t);
    }
  else
    {
      ATerm a_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_20 = ATgetFirst((ATermList) t);
          r_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_20 = ATgetFirst((ATermList) t);
          t_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_20;
      t = h_0(t);
      t = s_20;
      t = i_0(t);
      a_21 = t;
      t = (ATerm) ATinsert(CheckATermList(t_20), a_21);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  if(match_string(t, "-i"))
    {
      t = c_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_21;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  t = term_e_11;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, d_21);
  t = j_5(e_21, d_21, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_21);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, g_3, i_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_5;
  t = whoami_0_0(t);
  f_21 = t;
  t = term_p_5;
  h_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_11), f_21);
  i_21 = t;
  t = SSL_printnl(h_21, i_21);
  t = term_s_5;
  g_21 = t;
  t = SSL_exit(g_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_5 (ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_47, t_47);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = SSL_addr(s_47, t_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_21;
      t = u_96(t);
    }
  else
    {
      ATerm p_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_21 = ATgetFirst((ATermList) t);
          m_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_21;
      t = foldr_2_0(u_96, v_96, t);
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_21, p_21);
      t = v_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(e_7, f_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_21 = NULL,v_6 = NULL,y_6 = NULL;
  t = times_0_0(t);
  y_6 = t;
  t = SSL_explode_term(y_6);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6;
  t = foldr_2_0(j_3, k_3, t);
  s_21 = t;
  t = SSL_TicksToSeconds(s_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_22;
        if((e_22 != t))
          {
            _fail(t);
          }
        t = d_22;
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
        {
          ATerm n_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_22, f_22);
              ;
              LocalPopChoice(p_11);
            }
          else
            {
              t = n_11;
              t = SSL_gtr(e_22, f_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_22 = NULL;
        t = term_y_9;
        t = get_config_0_0(t);
        l_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_22, term_s_5);
        t = geq_0_0(t);
        t = j_22;
        t = s_104(t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = j_22;
      }
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,q_22 = NULL,r_22 = NULL;
  t = run_time_0_0(t);
  n_22 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  o_22 = t;
  t = term_p_5;
  q_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), n_22), term_s_11), o_22);
  r_22 = t;
  t = SSL_printnl(q_22, r_22);
  t = (ATerm) ATmakeAppl(sym__2, term_p_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), n_22), term_s_11), o_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_10;
  s_22 = t;
  t = SSL_exit(s_22);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  b_23 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_23;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_23 = ATgetArgument(t, 0);
          {
            ATerm a_8 = NULL,o_8 = NULL;
            t = SSLgetAnnotations(b_23);
            a_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_23);
            o_8 = t;
            t = SSLsetAnnotations(o_8, a_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_23;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm v_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = v_11;
      t = fetch_1_0(m_3, t);
    }
  t = i_107(t);
  return(t);
}
ATerm map_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm r_23 (ATerm t)
  {
    ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
    o_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_23;
      }
    else
      {
        ATerm q_8 = NULL,u_8 = NULL,f_9 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_23 = ATgetFirst((ATermList) t);
            q_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_23);
        q_8 = t;
        t = p_23;
        t = r_90(t);
        u_8 = t;
        t = q_23;
        t = r_23(t);
        f_9 = t;
        t = (ATerm) ATinsert(CheckATermList(f_9), u_8);
        v_8 = t;
        t = SSLsetAnnotations(v_8, q_8);
      }
    return(t);
  }
  t = r_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_23 = ATgetFirst((ATermList) t);
      v_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_23 = NULL,a_24 = NULL;
        ATerm n_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_23)), not_null(a_24));
          return(t);
        }
        t = not_null(v_23);
        t = g_0(t);
        if(((z_23 != NULL) && (z_23 != t)))
          _fail(t);
        else
          z_23 = t;
        t = not_null(u_23);
        t = e_0(t);
        if(((a_24 != NULL) && (a_24 != t)))
          _fail(t);
        else
          a_24 = t;
        t = not_null(v_23);
        t = reverse_acc_2_0(e_0, n_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_5;
      t = g_0(t);
    }
  return(t);
}
ATerm g_5 (ATerm y_61, ATerm z_61, ATerm t)
{
  t = SSL_table_get(y_61, z_61);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,x_8 = NULL;
  g_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_24);
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_24);
  x_8 = t;
  t = SSLsetAnnotations(x_8, e_24);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_24), term_z_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      t = fetch_1_0(p_3, t);
    }
  t = term_h_12;
  t = echo_0_0(t);
  t = term_v_10;
  c_24 = t;
  t = term_w_10;
  d_24 = t;
  t = term_i_12;
  t = g_5(c_24, d_24, t);
  t = reverse_acc_2_0(_id, q_3, t);
  t = map_1_0(r_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_12 = ATgetFirst((ATermList) t);
                ATerm m_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_24;
          }
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATinsert(ATempty, k_24);
      }
    l_24 = t;
    t = term_z_7;
    m_24 = t;
    t = SSL_printnl(m_24, l_24);
    t = k_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  t = term_n_12;
  q_24 = t;
  t = term_o_5;
  r_24 = t;
  t = term_o_12;
  t = j_5(q_24, r_24, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t = term_n_12;
  u_24 = t;
  t = term_o_5;
  v_24 = t;
  t = term_o_12;
  t = j_5(u_24, v_24, t);
  t = term_q_12;
  s_24 = t;
  t = term_o_5;
  t_24 = t;
  t = term_r_12;
  t = j_5(s_24, t_24, t);
  t = term_s_12;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_3, v_3, x_3, t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = Option_3_0(y_3, z_3, a_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,z_8 = NULL;
  b_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  w_24 = t;
  t = x_24;
  t = o_69(t);
  z_24 = t;
  t = y_24;
  t = p_69(t);
  a_25 = t;
  t = (ATerm) ATinsert(CheckATermList(a_25), z_24);
  z_8 = t;
  t = SSLsetAnnotations(z_8, w_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_109 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,l_25 = NULL,m_25 = NULL,b_9 = NULL;
  if(((g_25 != NULL) && (g_25 != t)))
    _fail(t);
  else
    g_25 = t;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_13;
        t = l_109(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
    t = not_null(g_25);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_25 != NULL) && (i_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_25 = ATgetFirst((ATermList) t);
        if(((j_25 != NULL) && (j_25 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          j_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(g_25));
    if(((h_25 != NULL) && (h_25 != t)))
      _fail(t);
    else
      h_25 = t;
    t = term_h_11;
    if(((m_25 != NULL) && (m_25 != t)))
      _fail(t);
    else
      m_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_11, not_null(i_25));
    t = j_5(not_null(m_25), not_null(i_25), t);
    t = not_null(j_25);
    {
      ATerm w_25 (ATerm t)
      {
        ATerm e_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_25 = NULL;
                p_25 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_25;
                ;
                LocalPopChoice(k_13);
              }
            else
              {
                t = j_13;
                t = l_109(t);
                t = Cons_2_0(_id, w_25, t);
              }
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = e_13;
            {
              ATerm s_25 = NULL,t_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_25 = ATgetFirst((ATermList) t);
                  t_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_25), (ATerm) ATmakeAppl(sym_Undefined_1, s_25));
            }
          }
        return(t);
      }
      t = w_25(t);
      if(((l_25 != NULL) && (l_25 != t)))
        _fail(t);
      else
        l_25 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(l_25)), (ATerm) ATmakeAppl(sym_Program_1, not_null(i_25)));
      if(((b_9 != NULL) && (b_9 != t)))
        _fail(t);
      else
        b_9 = t;
      t = SSLsetAnnotations(not_null(b_9), not_null(h_25));
    }
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  if(match_string(t, "--help"))
    {
      t = i_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_26;
        }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  t = term_y_11;
  j_26 = t;
  t = term_o_5;
  k_26 = t;
  t = term_l_13;
  t = j_5(j_26, k_26, t);
  t = term_m_13;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  t = term_v_10;
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  t = term_w_10;
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = (ATerm) ATempty;
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  t = SSL_table_put(not_null(f_26), not_null(g_26), not_null(h_26));
  t = not_null(d_26);
  {
    ATerm c_4 (ATerm t)
    {
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_109(t);
          ;
          LocalPopChoice(p_13);
        }
      else
        {
          t = o_13;
          {
            ATerm r_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_4, e_4, f_4, t);
                ;
                LocalPopChoice(s_13);
              }
            else
              {
                t = r_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_4, t);
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_26 = NULL;
          r_26 = t;
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_9 = NULL;
                t = r_26;
                {
                  ATerm x_13 = t;
                  int y_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = x_13;
                      t = fetch_1_0(g_4, t);
                    }
                  t = r_26;
                  t = default_system_usage_0_0(t);
                  t = term_c_10;
                  p_9 = t;
                  t = SSL_exit(p_9);
                }
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
                {
                  ATerm u_9 = NULL;
                  t = term_n_12;
                  t = get_config_0_0(t);
                  t = r_26;
                  t = default_system_about_0_0(t);
                  t = term_c_10;
                  u_9 = t;
                  t = SSL_exit(u_9);
                }
              }
          }
          ;
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          {
            ATerm f_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
                ATerm i_4 (ATerm t)
                {
                  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,d_9 = NULL;
                  x_26 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_26);
                  v_26 = t;
                  t = w_26;
                  if(((b_26 != NULL) && (b_26 != t)))
                    _fail(t);
                  else
                    b_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_26);
                  d_9 = t;
                  t = SSLsetAnnotations(d_9, v_26);
                  return(t);
                }
                t = fetch_1_0(i_4, t);
                t = term_p_5;
                if(((t_26 != NULL) && (t_26 != t)))
                  _fail(t);
                else
                  t_26 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_26)), term_i_14);
                if(((u_26 != NULL) && (u_26 != t)))
                  _fail(t);
                else
                  u_26 = t;
                t = SSL_printnl(not_null(t_26), not_null(u_26));
                t = (ATerm) ATmakeAppl(sym__2, term_p_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_26)), term_i_14));
                t = default_system_usage_0_0(t);
                t = term_s_5;
                if(((s_26 != NULL) && (s_26 != t)))
                  _fail(t);
                else
                  s_26 = t;
                t = SSL_exit(not_null(s_26));
                ;
                LocalPopChoice(g_14);
              }
            else
              {
                t = f_14;
              }
          }
        }
      if(((c_26 != NULL) && (c_26 != t)))
        _fail(t);
      else
        c_26 = t;
      t = term_v_10;
      if(((e_26 != NULL) && (e_26 != t)))
        _fail(t);
      else
        e_26 = t;
      t = SSL_table_destroy(not_null(e_26));
      t = not_null(c_26);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
  t = parse_options_1_0(k_107, t);
  c_27 = t;
  t = term_j_14;
  f_27 = t;
  t = SSL_table_create(f_27);
  t = term_j_14;
  d_27 = t;
  t = term_n_14;
  e_27 = t;
  t = SSL_table_put(d_27, e_27, c_27);
  t = c_27;
  t = m_107(t);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_107, t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = if_verbose2_1_0(f_5, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  t = term_s_14;
  g_27 = t;
  t = term_o_5;
  h_27 = t;
  t = term_x_14;
  t = j_5(g_27, h_27, t);
  t = term_a_15;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  i_27 = t;
  t = term_h_11;
  t = get_config_0_0(t);
  j_27 = t;
  t = term_p_5;
  k_27 = t;
  t = (ATerm) ATinsert(ATempty, j_27);
  l_27 = t;
  t = SSL_printnl(k_27, l_27);
  t = i_27;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm c_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_106(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = c_15;
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              {
                ATerm h_15 = t;
                int i_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_15);
                  }
                else
                  {
                    t = h_15;
                    {
                      ATerm j_15 = t;
                      int k_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_4, u_4, w_4, t);
                          ;
                          LocalPopChoice(k_15);
                        }
                      else
                        {
                          t = j_15;
                          {
                            ATerm l_15 = t;
                            int m_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_15);
                              }
                            else
                              {
                                t = l_15;
                                t = keep_option_0_0(t);
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
  ATerm m_4 (ATerm t)
  {
    ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
    if(((n_27 != NULL) && (n_27 != t)))
      _fail(t);
    else
      n_27 = t;
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_5, t);
          ;
          LocalPopChoice(o_15);
        }
      else
        {
          t = n_15;
          t = term_p_15;
          if(((m_27 != NULL) && (m_27 != t)))
            _fail(t);
          else
            m_27 = t;
        }
      t = not_null(m_27);
      t = ReadFromFile_0_0(t);
      if(((o_27 != NULL) && (o_27 != t)))
        _fail(t);
      else
        o_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), not_null(o_27));
      t = apply_strategy_1_0(t_106, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_4, v_106, l_4, m_4, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,h_9 = NULL;
  t_27 = t;
  if(match_cons(t, sym__2))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_27);
  p_27 = t;
  t = r_27;
  t = MetaExplode_0_0(t);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_27, s_27);
  h_9 = t;
  t = SSLsetAnnotations(h_9, p_27);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(l_5, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm n_4 (ATerm t_18, ATerm u_18, ATerm);
ATerm foldr_3_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm p_4 (ATerm w_18, ATerm v_18, ATerm);
ATerm r_4 (ATerm d_105, ATerm);
ATerm s_4 (ATerm o_105, ATerm);
ATerm t_4 (ATerm s_104, ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm v_74 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm y_4 (ATerm v_38, ATerm w_38, ATerm);
ATerm z_4 (ATerm j_42, ATerm k_42, ATerm);
ATerm b_5 (ATerm r_91 (ATerm), ATerm m_411, ATerm n_42, ATerm);
ATerm a_5 (ATerm f_42, ATerm g_42, ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_94 (ATerm), ATerm);
ATerm a_12 (ATerm o_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_5 (ATerm l_42, ATerm);
ATerm d_5 (ATerm x_38, ATerm y_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_14 (ATerm t_12, ATerm);
ATerm u_14 (ATerm a_13, ATerm b_13, ATerm c_13, ATerm);
ATerm v_14 (ATerm z_13, ATerm a_14, ATerm b_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_79 (ATerm), ATerm);
ATerm x_4 (ATerm l_33, ATerm m_33, ATerm);
ATerm debug_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_93 (ATerm), ATerm);
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
ATerm j_5 (ATerm m_43, ATerm n_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_5 (ATerm k_48, ATerm l_48, ATerm j_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_5 (ATerm v_35, ATerm w_35, ATerm);
ATerm foldr_2_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_93 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm need_help_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_78 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_5 (ATerm b_50, ATerm c_50, ATerm);
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
ATerm Cons_2_0 (ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_97 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm parse_options_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm f_5 (ATerm);
ATerm iowrap_3_0 (ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL;
  a_0 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_p_5;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_5), b_0), term_q_5);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_s_5;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
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
ATerm n_4 (ATerm t_18, ATerm u_18, ATerm t)
{
  ATerm z_1 = NULL,k_2 = NULL;
  t = t_18;
  t = trm_explode_0_0(t);
  z_1 = t;
  t = u_18;
  t = trm_explode_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, k_2), z_1));
  return(t);
}
ATerm foldr_3_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,u_2 = NULL;
  r_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_2;
      t = z_84(t);
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
      t = b_85(t);
      y_2 = t;
      t = u_2;
      t = foldr_3_0(z_84, a_85, b_85, t);
      a_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_2, a_3);
      t = a_85(t);
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
ATerm p_4 (ATerm w_18, ATerm v_18, ATerm t)
{
  ATerm e_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = v_18;
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
  t = w_18;
  if(match_cons(t, sym_meta_listvar_1))
    {
      e_3 = ATgetArgument(t, 0);
      {
        ATerm s_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, e_3)));
            ;
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            t = w_18;
          }
      }
    }
  else
    {
      t = w_18;
    }
  t = foldr_3_0(p_0, v_0, trm_explode_0_0, t);
  return(t);
}
ATerm r_4 (ATerm d_105, ATerm t)
{
  t = d_105;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm s_4 (ATerm o_105, ATerm t)
{
  ATerm b_4 = NULL;
  t = o_105;
  t = MetaExplode_0_0(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, b_4);
  return(t);
}
ATerm t_4 (ATerm s_104, ATerm t)
{
  t = s_104;
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
ATerm alltd_1_0 (ATerm v_74 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_74(t);
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
ATerm y_4 (ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_fputc(v_38, w_38);
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_6);
  return(t);
}
ATerm z_4 (ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm a_7 = NULL;
  t = SSL_write_term_to_stream_text(j_42, k_42);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_7);
  return(t);
}
ATerm b_5 (ATerm r_91 (ATerm), ATerm m_411, ATerm n_42, ATerm t)
{
  ATerm b_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_411, term_l_7);
  t = open_stream_0_0(t);
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_7, n_42);
  t = r_91(t);
  t = fclose_0_0(t);
  t = n_42;
  return(t);
}
ATerm a_5 (ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm c_7 = NULL;
  t = SSL_write_term_to_stream_baf(f_42, g_42);
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
  o_7 = t;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_7);
  x_7 = t;
  t = y_7;
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
        n_7 = t;
      }
    if(((d_8 != NULL) && (d_8 != t)))
      _fail(t);
    else
      d_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_8, c_8);
    if(((n_0 != NULL) && (n_0 != t)))
      _fail(t);
    else
      n_0 = t;
    t = SSLsetAnnotations(n_0, x_7);
    t = o_7;
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
    t = SSLgetAnnotations(o_7);
    if(((q_7 != NULL) && (q_7 != t)))
      _fail(t);
    else
      q_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_7, (ATerm) ATmakeAppl(sym__2, not_null(n_7), t_7));
    if(((n_2 != NULL) && (n_2 != t)))
      _fail(t);
    else
      n_2 = t;
    t = SSLsetAnnotations(n_2, q_7);
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
          t = SSLgetAnnotations(w_7);
          u_1 = t;
          t = d_10;
          t = fetch_1_0(c_1, t);
          x_1 = t;
          t = e_10;
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
            t = SSLgetAnnotations(w_7);
            j_2 = t;
            t = e_10;
            if(match_cons(t, sym__2))
              {
                t_2 = ATgetArgument(t, 0);
                v_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_5(e_1, t_2, v_2, t);
            q_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_10, q_2);
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
ATerm apply_strategy_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,o_10 = NULL,q_10 = NULL,z_10 = NULL;
  z_10 = t;
  t = dtime_0_0(t);
  t = z_10;
  t = t_94(t);
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
ATerm c_5 (ATerm l_42, ATerm t)
{
  t = SSL_read_term_from_stream(l_42);
  return(t);
}
ATerm d_5 (ATerm x_38, ATerm y_38, ATerm t)
{
  ATerm b_12 = NULL;
  t = SSL_fopen(x_38, y_38);
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
ATerm fetch_1_0 (ATerm e_79 (ATerm), ATerm t)
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
          t = e_79(t);
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
ATerm x_4 (ATerm l_33, ATerm m_33, ATerm t)
{
  t = SSL_strcat(l_33, m_33);
  return(t);
}
ATerm debug_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,h_17 = NULL,l_17 = NULL;
  c_17 = t;
  t = p_91(t);
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
              ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
              z_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_18 = ATgetArgument(t, 0);
                  t = a_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_18 = ATgetArgument(t, 0);
                      t = a_18;
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
                      ATerm i_18 = NULL,l_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_18 = ATgetArgument(t, 0);
                          b_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_18;
                      t = eval_config_0_0(t);
                      i_18 = t;
                      t = b_18;
                      t = eval_config_0_0(t);
                      l_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_18, l_18);
                      t = x_4(i_18, l_18, t);
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
  ATerm c_19 = NULL,f_19 = NULL;
  c_19 = t;
  t = term_s_9;
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, c_19);
  t = g_5(f_19, c_19, t);
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_19 = NULL,h_19 = NULL;
        t = eval_config_0_0(t);
        g_19 = t;
        t = term_s_9;
        h_19 = t;
        t = SSL_table_put(h_19, c_19, g_19);
        t = g_19;
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
ATerm if_verbose2_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm o_19 = NULL;
  o_19 = t;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_19 = NULL;
        t = term_y_9;
        t = get_config_0_0(t);
        q_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_19, term_z_9);
        t = geq_0_0(t);
        t = o_19;
        t = c_93(t);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = o_19;
      }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  if(match_string(t, "-k"))
    {
      t = t_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_19;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t = SSL_string_to_int(u_19);
  v_19 = t;
  t = term_a_10;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, v_19);
  t = j_5(w_19, v_19, t);
  t = u_19;
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
  ATerm y_19 = NULL;
  y_19 = t;
  if(match_string(t, "-S"))
    {
      t = y_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_19;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL;
  t = term_y_9;
  z_19 = t;
  t = term_c_10;
  a_20 = t;
  t = term_f_10;
  t = j_5(z_19, a_20, t);
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
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  t = SSL_string_to_int(b_20);
  c_20 = t;
  t = term_y_9;
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, c_20);
  t = j_5(d_20, c_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_20);
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
  ATerm e_20 = NULL,f_20 = NULL;
  t = term_l_10;
  e_20 = t;
  t = term_o_5;
  f_20 = t;
  t = term_m_10;
  t = j_5(e_20, f_20, t);
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
ATerm j_5 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm g_20 = NULL;
  t = term_s_9;
  g_20 = t;
  t = SSL_table_put(g_20, m_43, n_43);
  t = (ATerm) ATmakeAppl(sym__3, term_s_9, m_43, n_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
      t = term_o_5;
      t = h_0(t);
      l_20 = t;
      t = term_v_10;
      m_20 = t;
      t = term_w_10;
      n_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, l_20);
      t = h_5(m_20, n_20, l_20, t);
      _fail(t);
    }
  else
    {
      ATerm q_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_20 = ATgetFirst((ATermList) t);
          k_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_20;
      t = d_0(t);
      t = term_o_5;
      t = g_0(t);
      q_20 = t;
      t = (ATerm) ATinsert(CheckATermList(k_20), q_20);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  if(match_string(t, "-o"))
    {
      t = s_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_20;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t_20 = t;
  t = term_x_10;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, t_20);
  t = j_5(u_20, t_20, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_20);
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
ATerm h_5 (ATerm k_48, ATerm l_48, ATerm j_48, ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
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
        t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
        t = g_5(k_48, l_48, t);
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATempty;
      }
    x_20 = t;
    t = (ATerm) ATinsert(CheckATermList(x_20), j_48);
    y_20 = t;
    t = SSL_table_put(k_48, l_48, y_20);
    t = w_20;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
      t = term_o_5;
      t = m_0(t);
      l_21 = t;
      t = term_v_10;
      m_21 = t;
      t = term_w_10;
      n_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, l_21);
      t = h_5(m_21, n_21, l_21, t);
      _fail(t);
    }
  else
    {
      ATerm r_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_21 = ATgetFirst((ATermList) t);
          i_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_21 = ATgetFirst((ATermList) t);
          k_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_21;
      t = k_0(t);
      t = j_21;
      t = l_0(t);
      r_21 = t;
      t = (ATerm) ATinsert(CheckATermList(k_21), r_21);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  if(match_string(t, "-i"))
    {
      t = t_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_21;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  u_21 = t;
  t = term_e_11;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, u_21);
  t = j_5(v_21, u_21, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_21);
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
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_5;
  t = whoami_0_0(t);
  w_21 = t;
  t = term_p_5;
  y_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_11), w_21);
  z_21 = t;
  t = SSL_printnl(y_21, z_21);
  t = term_s_5;
  x_21 = t;
  t = SSL_exit(x_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_5 (ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_35, w_35);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = SSL_addr(v_35, w_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_22;
      t = x_84(t);
    }
  else
    {
      ATerm g_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_22 = ATgetFirst((ATermList) t);
          d_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_22;
      t = foldr_2_0(x_84, y_84, t);
      g_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_22, g_22);
      t = y_84(t);
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
  ATerm j_22 = NULL,v_6 = NULL,y_6 = NULL;
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
  j_22 = t;
  t = SSL_TicksToSeconds(j_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  if(match_cons(t, sym__2))
    {
      v_22 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_22;
        if((v_22 != t))
          {
            _fail(t);
          }
        t = u_22;
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATmakeAppl(sym__2, v_22, w_22);
        {
          ATerm n_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_22, w_22);
              ;
              LocalPopChoice(p_11);
            }
          else
            {
              t = n_11;
              t = SSL_gtr(v_22, w_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_22, w_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL;
        t = term_y_9;
        t = get_config_0_0(t);
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_23, term_s_5);
        t = geq_0_0(t);
        t = a_23;
        t = b_93(t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = a_23;
      }
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,h_23 = NULL,i_23 = NULL;
  t = run_time_0_0(t);
  e_23 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  f_23 = t;
  t = term_p_5;
  h_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), e_23), term_s_11), f_23);
  i_23 = t;
  t = SSL_printnl(h_23, i_23);
  t = (ATerm) ATmakeAppl(sym__2, term_p_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), e_23), term_s_11), f_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_10;
  j_23 = t;
  t = SSL_exit(j_23);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  s_23 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_23;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm a_8 = NULL,o_8 = NULL;
            t = SSLgetAnnotations(s_23);
            a_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_23);
            o_8 = t;
            t = SSLsetAnnotations(o_8, a_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_23;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_95 (ATerm), ATerm t)
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
  t = r_95(t);
  return(t);
}
ATerm map_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm i_24 (ATerm t)
  {
    ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
    f_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_24;
      }
    else
      {
        ATerm q_8 = NULL,u_8 = NULL,f_9 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_24 = ATgetFirst((ATermList) t);
            h_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_24);
        q_8 = t;
        t = g_24;
        t = u_78(t);
        u_8 = t;
        t = h_24;
        t = i_24(t);
        f_9 = t;
        t = (ATerm) ATinsert(CheckATermList(f_9), u_8);
        v_8 = t;
        t = SSLsetAnnotations(v_8, q_8);
      }
    return(t);
  }
  t = i_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_24 = ATgetFirst((ATermList) t);
      m_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_24 = NULL,r_24 = NULL;
        ATerm n_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_24)), not_null(r_24));
          return(t);
        }
        t = m_24;
        t = j_0(t);
        if(((q_24 != NULL) && (q_24 != t)))
          _fail(t);
        else
          q_24 = t;
        t = l_24;
        t = i_0(t);
        if(((r_24 != NULL) && (r_24 != t)))
          _fail(t);
        else
          r_24 = t;
        t = m_24;
        t = reverse_acc_2_0(i_0, n_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_5;
      t = j_0(t);
    }
  return(t);
}
ATerm g_5 (ATerm b_50, ATerm c_50, ATerm t)
{
  t = SSL_table_get(b_50, c_50);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,x_8 = NULL;
  x_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_24);
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_24);
  x_8 = t;
  t = SSLsetAnnotations(x_8, v_24);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_24), term_z_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
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
  t_24 = t;
  t = term_w_10;
  u_24 = t;
  t = term_i_12;
  t = g_5(t_24, u_24, t);
  t = reverse_acc_2_0(_id, q_3, t);
  t = map_1_0(r_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_25;
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
            t = b_25;
          }
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATinsert(ATempty, b_25);
      }
    c_25 = t;
    t = term_z_7;
    d_25 = t;
    t = SSL_printnl(d_25, c_25);
    t = b_25;
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
  ATerm h_25 = NULL,i_25 = NULL;
  t = term_n_12;
  h_25 = t;
  t = term_o_5;
  i_25 = t;
  t = term_o_12;
  t = j_5(h_25, i_25, t);
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
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  t = term_n_12;
  l_25 = t;
  t = term_o_5;
  m_25 = t;
  t = term_o_12;
  t = j_5(l_25, m_25, t);
  t = term_q_12;
  j_25 = t;
  t = term_o_5;
  k_25 = t;
  t = term_r_12;
  t = j_5(j_25, k_25, t);
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
ATerm Cons_2_0 (ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,z_8 = NULL;
  s_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_25 = ATgetFirst((ATermList) t);
      p_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  n_25 = t;
  t = o_25;
  t = r_57(t);
  q_25 = t;
  t = p_25;
  t = s_57(t);
  r_25 = t;
  t = (ATerm) ATinsert(CheckATermList(r_25), q_25);
  z_8 = t;
  t = SSLsetAnnotations(z_8, n_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,c_26 = NULL,d_26 = NULL,b_9 = NULL;
  x_25 = t;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_13;
        t = u_97(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
    t = x_25;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_25 = ATgetFirst((ATermList) t);
        a_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_25);
    y_25 = t;
    t = term_h_11;
    d_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_11, z_25);
    t = j_5(d_26, z_25, t);
    t = a_26;
    {
      ATerm n_26 (ATerm t)
      {
        ATerm e_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_26 = NULL;
                g_26 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_26;
                ;
                LocalPopChoice(k_13);
              }
            else
              {
                t = j_13;
                t = u_97(t);
                t = Cons_2_0(_id, n_26, t);
              }
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = e_13;
            {
              ATerm j_26 = NULL,k_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_26 = ATgetFirst((ATermList) t);
                  k_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_26), (ATerm) ATmakeAppl(sym_Undefined_1, j_26));
            }
          }
        return(t);
      }
      t = n_26(t);
      if(((c_26 != NULL) && (c_26 != t)))
        _fail(t);
      else
        c_26 = t;
      t = (ATerm) ATinsert(CheckATermList(c_26), (ATerm) ATmakeAppl(sym_Program_1, z_25));
      if(((b_9 != NULL) && (b_9 != t)))
        _fail(t);
      else
        b_9 = t;
      t = SSLsetAnnotations(b_9, y_25);
    }
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  if(match_string(t, "--help"))
    {
      t = d_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_27;
        }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  t = term_y_11;
  e_27 = t;
  t = term_o_5;
  f_27 = t;
  t = term_l_13;
  t = j_5(e_27, f_27, t);
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
ATerm parse_options_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  y_26 = t;
  t = term_v_10;
  a_27 = t;
  t = term_w_10;
  b_27 = t;
  t = (ATerm) ATempty;
  c_27 = t;
  t = SSL_table_put(a_27, b_27, c_27);
  t = y_26;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_97(t);
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
          ATerm m_27 = NULL;
          m_27 = t;
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_9 = NULL;
                t = m_27;
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
                  t = m_27;
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
                  t = m_27;
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
                ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
                ATerm i_4 (ATerm t)
                {
                  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,d_9 = NULL;
                  s_27 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_27);
                  q_27 = t;
                  t = r_27;
                  if(((s_26 != NULL) && (s_26 != t)))
                    _fail(t);
                  else
                    s_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_27);
                  d_9 = t;
                  t = SSLsetAnnotations(d_9, q_27);
                  return(t);
                }
                t = fetch_1_0(i_4, t);
                t = term_p_5;
                if(((o_27 != NULL) && (o_27 != t)))
                  _fail(t);
                else
                  o_27 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_26)), term_i_14);
                if(((p_27 != NULL) && (p_27 != t)))
                  _fail(t);
                else
                  p_27 = t;
                t = SSL_printnl(o_27, p_27);
                t = (ATerm) ATmakeAppl(sym__2, term_p_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_26)), term_i_14));
                t = default_system_usage_0_0(t);
                t = term_s_5;
                if(((n_27 != NULL) && (n_27 != t)))
                  _fail(t);
                else
                  n_27 = t;
                t = SSL_exit(n_27);
                ;
                LocalPopChoice(g_14);
              }
            else
              {
                t = f_14;
              }
          }
        }
      if(((t_26 != NULL) && (t_26 != t)))
        _fail(t);
      else
        t_26 = t;
      t = term_v_10;
      if(((z_26 != NULL) && (z_26 != t)))
        _fail(t);
      else
        z_26 = t;
      t = SSL_table_destroy(z_26);
      t = t_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  t = parse_options_1_0(t_95, t);
  x_27 = t;
  t = term_j_14;
  a_28 = t;
  t = SSL_table_create(a_28);
  t = term_j_14;
  y_27 = t;
  t = term_n_14;
  z_27 = t;
  t = SSL_table_put(y_27, z_27, x_27);
  t = x_27;
  t = v_95(t);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_95, t);
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
              t = w_95(t);
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
  ATerm b_28 = NULL,c_28 = NULL;
  t = term_s_14;
  b_28 = t;
  t = term_o_5;
  c_28 = t;
  t = term_x_14;
  t = j_5(b_28, c_28, t);
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
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  d_28 = t;
  t = term_h_11;
  t = get_config_0_0(t);
  e_28 = t;
  t = term_p_5;
  f_28 = t;
  t = (ATerm) ATinsert(ATempty, e_28);
  g_28 = t;
  t = SSL_printnl(f_28, g_28);
  t = d_28;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm c_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_95(t);
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
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
    i_28 = t;
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_28 != NULL) && (h_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_28 = ATgetArgument(t, 0);
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
          h_28 = t;
        }
      t = not_null(h_28);
      t = ReadFromFile_0_0(t);
      if(((j_28 != NULL) && (j_28 != t)))
        _fail(t);
      else
        j_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
      t = apply_strategy_1_0(c_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_4, e_95, l_4, m_4, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,h_9 = NULL;
  p_28 = t;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_28);
  k_28 = t;
  t = n_28;
  t = MetaExplode_0_0(t);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_28, o_28);
  h_9 = t;
  t = SSLsetAnnotations(h_9, k_28);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(l_5, _fail, default_usage_0_0, t);
  return(t);
}

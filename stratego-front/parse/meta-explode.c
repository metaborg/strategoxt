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
Symbol sym_Match_1;
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
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
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
ATerm term_e_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_g_8;
ATerm term_o_7;
ATerm term_o_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_m_5;
void init_constant_terms (void)
{
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Cong_2, term_j_6, (ATerm) ATempty);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Op_2, term_j_6, (ATerm) ATempty);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_m_5);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_m_11);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_m_5);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_m_5);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_m_5);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_m_5);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm a_2 (ATerm s_0, ATerm);
ATerm b_2 (ATerm v_0, ATerm);
ATerm str_explode_0_0 (ATerm);
ATerm TrmOp_0_0 (ATerm);
ATerm p_4 (ATerm t_18, ATerm u_18, ATerm);
ATerm foldr_3_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm r_4 (ATerm w_18, ATerm v_18, ATerm);
ATerm t_4 (ATerm e_105, ATerm);
ATerm u_4 (ATerm p_105, ATerm);
ATerm v_4 (ATerm t_104, ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm w_74 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm a_5 (ATerm w_38, ATerm x_38, ATerm);
ATerm b_5 (ATerm k_42, ATerm l_42, ATerm);
ATerm d_5 (ATerm s_91 (ATerm), ATerm t_412, ATerm o_42, ATerm);
ATerm c_5 (ATerm g_42, ATerm h_42, ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm h_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_94 (ATerm), ATerm);
ATerm k_12 (ATerm a_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm e_5 (ATerm m_42, ATerm);
ATerm f_5 (ATerm y_38, ATerm z_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_15 (ATerm e_13, ATerm);
ATerm d_15 (ATerm k_13, ATerm l_13, ATerm s_13, ATerm);
ATerm h_15 (ATerm h_14, ATerm i_14, ATerm j_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm z_4 (ATerm m_33, ATerm n_33, ATerm);
ATerm debug_1_0 (ATerm q_91 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_5 (ATerm n_43, ATerm o_43, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm u_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm j_5 (ATerm l_48, ATerm m_48, ATerm k_48, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm j_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_5 (ATerm w_35, ATerm x_35, ATerm);
ATerm foldr_2_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_93 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm need_help_1_0 (ATerm s_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_78 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm i_5 (ATerm c_50, ATerm d_50, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_57 (ATerm), ATerm t_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_97 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm parse_options_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm iowrap_3_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,m_0 = NULL,n_0 = NULL;
  a_0 = t;
  t = term_m_5;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_o_5;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_5), c_0), term_p_5);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_s_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm a_2 (ATerm s_0, ATerm t)
{
  ATerm t_0 = NULL;
  t = SSL_is_string(s_0);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, t_0));
  return(t);
}
ATerm b_2 (ATerm v_0, ATerm t)
{
  ATerm x_0 = NULL,z_0 = NULL,a_1 = NULL;
  t = SSL_explode_term(v_0);
  if(match_cons(t, sym__2))
    {
      x_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_0;
  t = map_1_0(str_explode_0_0, t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, x_0, a_1);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm d_1 = NULL,f_1 = NULL,g_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      d_1 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_1), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          d_1 = ATgetArgument(t, 0);
          {
            ATerm v_5 = t;
            int x_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_1;
                t = v_4(d_1, t);
                ;
                LocalPopChoice(x_5);
              }
            else
              {
                t = v_5;
                {
                  ATerm z_5 = t;
                  int a_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_2(g_1, t);
                      ;
                      LocalPopChoice(a_6);
                    }
                  else
                    {
                      t = z_5;
                      t = b_2(g_1, t);
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              d_1 = ATgetArgument(t, 0);
              {
                ATerm b_6 = t;
                int c_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_1;
                    t = t_4(d_1, t);
                    ;
                    LocalPopChoice(c_6);
                  }
                else
                  {
                    t = b_6;
                    {
                      ATerm d_6 = t;
                      int e_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_2(g_1, t);
                          ;
                          LocalPopChoice(e_6);
                        }
                      else
                        {
                          t = d_6;
                          t = b_2(g_1, t);
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_FromApp_1))
                {
                  d_1 = ATgetArgument(t, 0);
                  {
                    ATerm f_6 = t;
                    int g_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym_FromStrategy_1, d_1);
                        t = t_4(d_1, t);
                        ;
                        LocalPopChoice(g_6);
                      }
                    else
                      {
                        t = f_6;
                        {
                          ATerm h_6 = t;
                          int i_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = a_2(g_1, t);
                              ;
                              LocalPopChoice(i_6);
                            }
                          else
                            {
                              t = h_6;
                              t = b_2(g_1, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = term_k_6;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          d_1 = ATgetFirst((ATermList) t);
                          f_1 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm l_6 = t;
                            int m_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_1 = NULL,v_1 = NULL;
                                t = d_1;
                                t = str_explode_0_0(t);
                                t_1 = t;
                                t = f_1;
                                t = str_explode_0_0(t);
                                v_1 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, v_1), t_1));
                                ;
                                LocalPopChoice(m_6);
                              }
                            else
                              {
                                t = l_6;
                                {
                                  ATerm p_6 = t;
                                  int q_6 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_2(g_1, t);
                                      ;
                                      LocalPopChoice(q_6);
                                    }
                                  else
                                    {
                                      t = p_6;
                                      t = b_2(g_1, t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          ATerm r_6 = t;
                          int s_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = a_2(g_1, t);
                              ;
                              LocalPopChoice(s_6);
                            }
                          else
                            {
                              t = r_6;
                              t = b_2(g_1, t);
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL;
  q_2 = t;
  t = SSL_explode_term(q_2);
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_2;
  t = map_1_0(trm_explode_0_0, t);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, m_2, p_2);
  return(t);
}
ATerm p_4 (ATerm t_18, ATerm u_18, ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  t = t_18;
  t = trm_explode_0_0(t);
  s_2 = t;
  t = u_18;
  t = trm_explode_0_0(t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, t_2), s_2));
  return(t);
}
ATerm foldr_3_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL;
  a_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_3;
      t = a_85(t);
    }
  else
    {
      ATerm g_3 = NULL,h_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_3 = ATgetFirst((ATermList) t);
          d_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_3;
      t = c_85(t);
      g_3 = t;
      t = d_3;
      t = foldr_3_0(a_85, b_85, c_85, t);
      h_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
      t = b_85(t);
    }
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm d_4 = NULL,g_4 = NULL,l_0 = NULL;
  d_4 = t;
  t = SSL_explode_term(d_4);
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
          {
            g_4 = ATgetFirst((ATermList) u_6);
            {
              ATerm b_7 = (ATerm) ATgetNext((ATermList) u_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(d_4);
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_7 = ATgetArgument(t, 1);
        if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
          {
            ATerm g_7 = ATgetFirst((ATermList) e_7);
            ATerm h_7 = (ATerm) ATgetNext((ATermList) e_7);
            if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
              {
                l_0 = ATgetFirst((ATermList) h_7);
                {
                  ATerm k_7 = (ATerm) ATgetNext((ATermList) h_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, l_0), g_4));
  return(t);
}
ATerm r_4 (ATerm w_18, ATerm v_18, ATerm t)
{
  ATerm p_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = v_18;
    {
      ATerm m_7 = t;
      int n_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_3 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              y_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_o_7), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, y_3))));
          ;
          LocalPopChoice(n_7);
        }
      else
        {
          t = m_7;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = w_18;
  if(match_cons(t, sym_meta_listvar_1))
    {
      p_3 = ATgetArgument(t, 0);
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, p_3)));
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = w_18;
          }
      }
    }
  else
    {
      t = w_18;
    }
  t = foldr_3_0(o_0, r_0, trm_explode_0_0, t);
  return(t);
}
ATerm t_4 (ATerm e_105, ATerm t)
{
  t = e_105;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm u_4 (ATerm p_105, ATerm t)
{
  ATerm w_4 = NULL;
  t = p_105;
  t = MetaExplode_0_0(t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, w_4);
  return(t);
}
ATerm v_4 (ATerm t_104, ATerm t)
{
  t = t_104;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_5 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          q_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, q_5);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              q_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, term_o_7), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, q_5))));
        }
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm u_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 = NULL,q_0 = NULL;
            q_0 = t;
            t = SSL_is_string(q_0);
            p_0 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, p_0);
            ;
            LocalPopChoice(w_7);
          }
        else
          {
            t = u_7;
            {
              ATerm z_7 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_5 = NULL,u_5 = NULL,w_5 = NULL;
                  t_5 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      u_5 = ATgetArgument(t, 0);
                      t = t_5;
                      t = v_4(u_5, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          u_5 = ATgetArgument(t, 0);
                          t = t_5;
                          t = u_4(u_5, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              u_5 = ATgetArgument(t, 0);
                              t = t_5;
                              t = t_4(u_5, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  u_5 = ATgetArgument(t, 0);
                                  w_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_0 = NULL,b_1 = NULL;
                                    t = u_5;
                                    t = trm_explode_0_0(t);
                                    y_0 = t;
                                    t = w_5;
                                    t = MetaExplode_0_0(t);
                                    b_1 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, y_0, b_1);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      u_5 = ATgetArgument(t, 0);
                                      w_5 = ATgetArgument(t, 1);
                                      t = t_5;
                                      t = r_4(u_5, w_5, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_o_7;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              u_5 = ATgetFirst((ATermList) t);
                                              w_5 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = t_5;
                                          t = p_4(u_5, w_5, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  ;
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = z_7;
                  t = TrmOp_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm alltd_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_74(t);
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = SRTS_all(n_6, t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm a_7 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      a_7 = ATgetArgument(t, 0);
      t = a_7;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          a_7 = ATgetArgument(t, 0);
          {
            ATerm f_7 = NULL;
            t = a_7;
            t = trm_explode_0_0(t);
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, f_7);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              a_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_7;
          t = str_explode_0_0(t);
        }
    }
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  t = alltd_1_0(u_0, t);
  return(t);
}
ATerm a_5 (ATerm w_38, ATerm x_38, ATerm t)
{
  ATerm i_7 = NULL;
  t = SSL_fputc(w_38, x_38);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_7);
  return(t);
}
ATerm b_5 (ATerm k_42, ATerm l_42, ATerm t)
{
  ATerm j_7 = NULL;
  t = SSL_write_term_to_stream_text(k_42, l_42);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_7);
  return(t);
}
ATerm d_5 (ATerm s_91 (ATerm), ATerm t_412, ATerm o_42, ATerm t)
{
  ATerm l_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_412, term_g_8);
  t = open_stream_0_0(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_7, o_42);
  t = s_91(t);
  t = fclose_0_0(t);
  t = o_42;
  return(t);
}
ATerm c_5 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm r_7 = NULL;
  t = SSL_write_term_to_stream_baf(g_42, h_42);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
  return(t);
}
ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(match_cons(m_8, sym_Stream_1))
        {
          c_2 = ATgetArgument(m_8, 0);
        }
      else
        _fail(t);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(c_2, d_2, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm v_2 = NULL,x_2 = NULL,z_2 = NULL,b_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(match_cons(n_8, sym_Stream_1))
        {
          b_3 = ATgetArgument(n_8, 0);
        }
      else
        _fail(t);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(b_3, i_3, t);
  v_2 = t;
  t = term_p_8;
  x_2 = t;
  t = v_2;
  if(match_cons(t, sym_Stream_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, v_2);
  t = a_5(x_2, z_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,n_10 = NULL,o_10 = NULL,y_2 = NULL,w_2 = NULL;
  y_7 = t;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_7);
  i_8 = t;
  t = j_8;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_7 != NULL) && (x_7 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_0, t);
        ;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = term_s_8;
        x_7 = t;
      }
    l_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_8, k_8);
    w_2 = t;
    t = SSLsetAnnotations(w_2, i_8);
    t = y_7;
    if(match_cons(t, sym__2))
      {
        b_8 = ATgetArgument(t, 0);
        c_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_7);
    a_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_8, (ATerm) ATmakeAppl(sym__2, not_null(x_7), c_8));
    y_2 = t;
    t = SSLsetAnnotations(y_2, a_8);
    h_8 = t;
    if(match_cons(t, sym__2))
      {
        n_10 = ATgetArgument(t, 0);
        o_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm v_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,h_4 = NULL;
          t = SSLgetAnnotations(h_8);
          r_1 = t;
          t = n_10;
          t = fetch_1_0(c_1, t);
          w_1 = t;
          t = o_10;
          if(match_cons(t, sym__2))
            {
              y_1 = ATgetArgument(t, 0);
              z_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_5(e_1, y_1, z_1, t);
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
          h_4 = t;
          t = SSLsetAnnotations(h_4, r_1);
          ;
          LocalPopChoice(x_8);
        }
      else
        {
          t = v_8;
          {
            ATerm i_2 = NULL,l_2 = NULL,o_2 = NULL,r_2 = NULL,n_4 = NULL;
            t = SSLgetAnnotations(h_8);
            i_2 = t;
            t = o_10;
            if(match_cons(t, sym__2))
              {
                o_2 = ATgetArgument(t, 0);
                r_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_5(h_1, o_2, r_2, t);
            l_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_10, l_2);
            n_4 = t;
            t = SSLsetAnnotations(n_4, i_2);
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
ATerm apply_strategy_1_0 (ATerm u_94 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,h_11 = NULL,k_11 = NULL;
  k_11 = t;
  t = dtime_0_0(t);
  t = k_11;
  t = u_94(t);
  h_11 = t;
  t = dtime_0_0(t);
  d_11 = t;
  t = h_11;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_11), (ATerm) ATmakeAppl(sym_Runtime_1, d_11)), f_11);
  return(t);
}
ATerm k_12 (ATerm a_12, ATerm t)
{
  t = SSL_fclose(a_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_12 = NULL,i_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_12 = ATgetArgument(t, 0);
      {
        ATerm y_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_12);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = y_8;
            t = k_12(i_12, t);
          }
      }
    }
  else
    {
      t = k_12(i_12, t);
    }
  return(t);
}
ATerm e_5 (ATerm m_42, ATerm t)
{
  t = SSL_read_term_from_stream(m_42);
  return(t);
}
ATerm f_5 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_fopen(y_38, z_38);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  t = SSL_stdin_stream();
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_12 = NULL;
  t = SSL_stdout_stream();
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t = SSL_stderr_stream();
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_12);
  return(t);
}
ATerm c_15 (ATerm e_13, ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_explode_term(e_13);
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_9 = ATgetArgument(t, 1);
        if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
          {
            f_13 = ATgetFirst((ATermList) d_9);
            {
              ATerm f_9 = (ATerm) ATgetNext((ATermList) d_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm d_15 (ATerm k_13, ATerm l_13, ATerm s_13, ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,c_14 = NULL,f_14 = NULL,x_6 = NULL;
  t = SSLgetAnnotations(s_13);
  c_14 = t;
  t = k_13;
  if(match_cons(t, sym_Path_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_14, l_13);
  x_6 = t;
  t = SSLsetAnnotations(x_6, c_14);
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(t_13, u_13, t);
  return(t);
}
ATerm h_15 (ATerm h_14, ATerm i_14, ATerm j_14, ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,n_14 = NULL,q_14 = NULL,y_6 = NULL;
  t = SSLgetAnnotations(j_14);
  n_14 = t;
  t = SSL_is_string(h_14);
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_14, i_14);
  y_6 = t;
  t = SSLsetAnnotations(y_6, n_14);
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(k_14, l_14, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      ATerm j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  y_14 = t;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_15(y_14, t);
            ;
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
              ATerm m_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_15(z_14, a_15, y_14, t);
                  ;
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = m_9;
                  t = h_15(z_14, a_15, y_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_15(y_14, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL,n_15 = NULL;
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_15 = NULL;
      o_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_15, term_u_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  l_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(n_15, t);
  i_15 = t;
  t = l_15;
  t = fclose_0_0(t);
  t = i_15;
  return(t);
}
ATerm fetch_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm h_17 (ATerm t)
  {
    ATerm c_17 = NULL,f_17 = NULL,g_17 = NULL;
    c_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_17 = ATgetFirst((ATermList) t);
        g_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_4 = NULL,j_4 = NULL,w_8 = NULL;
          t = SSLgetAnnotations(c_17);
          e_4 = t;
          t = f_17;
          t = f_79(t);
          j_4 = t;
          t = (ATerm) ATinsert(CheckATermList(g_17), j_4);
          w_8 = t;
          t = SSLsetAnnotations(w_8, e_4);
          ;
          LocalPopChoice(y_9);
        }
      else
        {
          t = w_9;
          {
            ATerm n_5 = NULL,y_5 = NULL,z_8 = NULL;
            t = SSLgetAnnotations(c_17);
            n_5 = t;
            t = g_17;
            t = h_17(t);
            y_5 = t;
            t = (ATerm) ATinsert(CheckATermList(y_5), f_17);
            z_8 = t;
            t = SSLsetAnnotations(z_8, n_5);
          }
        }
    }
    return(t);
  }
  t = h_17(t);
  return(t);
}
ATerm z_4 (ATerm m_33, ATerm n_33, ATerm t)
{
  t = SSL_strcat(m_33, n_33);
  return(t);
}
ATerm debug_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  q_17 = t;
  t = q_91(t);
  r_17 = t;
  t = term_o_5;
  s_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_17), r_17);
  t_17 = t;
  t = SSL_printnl(s_17, t_17);
  t = q_17;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 = NULL;
      b_18 = t;
      t = SSL_is_string(b_18);
      ;
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_1, t);
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm i_18 = NULL,l_18 = NULL,o_18 = NULL;
              i_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_18 = ATgetArgument(t, 0);
                  t = l_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_18 = ATgetArgument(t, 0);
                      t = l_18;
                      {
                        ATerm g_10 = t;
                        int h_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_10);
                          }
                        else
                          {
                            t = g_10;
                            t = debug_1_0(k_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_19 = NULL,h_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_18 = ATgetArgument(t, 0);
                          o_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_18;
                      t = eval_config_0_0(t);
                      g_19 = t;
                      t = o_18;
                      t = eval_config_0_0(t);
                      h_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_19, h_19);
                      t = z_4(g_19, h_19, t);
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
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  t = term_i_10;
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, p_19);
  t = i_5(q_19, p_19, t);
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_19 = NULL,t_19 = NULL;
        t = eval_config_0_0(t);
        s_19 = t;
        t = term_i_10;
        t_19 = t;
        t = SSL_table_put(t_19, p_19, s_19);
        t = s_19;
        ;
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_19 = NULL;
        t = term_p_10;
        t = get_config_0_0(t);
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_19, term_q_10);
        t = geq_0_0(t);
        t = x_19;
        t = d_93(t);
        ;
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = x_19;
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  if(match_string(t, "-k"))
    {
      t = c_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_20;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  t = SSL_string_to_int(d_20);
  e_20 = t;
  t = term_r_10;
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, e_20);
  t = l_5(f_20, e_20, t);
  t = d_20;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_1, m_1, n_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  if(match_string(t, "-S"))
    {
      t = h_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_20;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  t = term_p_10;
  i_20 = t;
  t = term_t_10;
  j_20 = t;
  t = term_u_10;
  t = l_5(i_20, j_20, t);
  t = term_v_10;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm s_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  t = SSL_string_to_int(k_20);
  l_20 = t;
  t = term_p_10;
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, l_20);
  t = l_5(m_20, l_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_20);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  t = term_y_10;
  n_20 = t;
  t = term_m_5;
  o_20 = t;
  t = term_z_10;
  t = l_5(n_20, o_20, t);
  t = term_a_11;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_1, p_1, q_1, t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = c_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_1, u_1, e_2, t);
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = Option_3_0(f_2, g_2, h_2, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm p_20 = NULL;
  t = term_i_10;
  p_20 = t;
  t = SSL_table_put(p_20, n_43, o_43);
  t = (ATerm) ATmakeAppl(sym__3, term_i_10, n_43, o_43);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
      t = term_m_5;
      t = f_0(t);
      u_20 = t;
      t = term_l_11;
      v_20 = t;
      t = term_m_11;
      w_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_11, term_m_11, u_20);
      t = j_5(v_20, w_20, u_20, t);
      _fail(t);
    }
  else
    {
      ATerm z_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_20 = ATgetFirst((ATermList) t);
          t_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_20;
      t = b_0(t);
      t = term_m_5;
      t = d_0(t);
      z_20 = t;
      t = (ATerm) ATinsert(CheckATermList(t_20), z_20);
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  if(match_string(t, "-o"))
    {
      t = b_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_21;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  c_21 = t;
  t = term_n_11;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, c_21);
  t = l_5(d_21, c_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_21);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, u_2, t);
  return(t);
}
ATerm j_5 (ATerm l_48, ATerm m_48, ATerm k_48, ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,j_21 = NULL;
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_11 = ATgetArgument(t, 0);
            ATerm s_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
        t = i_5(l_48, m_48, t);
        ;
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATempty;
      }
    g_21 = t;
    t = (ATerm) ATinsert(CheckATermList(g_21), k_48);
    j_21 = t;
    t = SSL_table_put(l_48, m_48, j_21);
    t = f_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
      t = term_m_5;
      t = k_0(t);
      u_21 = t;
      t = term_l_11;
      v_21 = t;
      t = term_m_11;
      w_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_11, term_m_11, u_21);
      t = j_5(v_21, w_21, u_21, t);
      _fail(t);
    }
  else
    {
      ATerm a_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_21 = ATgetFirst((ATermList) t);
          r_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_21 = ATgetFirst((ATermList) t);
          t_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_21;
      t = i_0(t);
      t = s_21;
      t = j_0(t);
      a_22 = t;
      t = (ATerm) ATinsert(CheckATermList(t_21), a_22);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  if(match_string(t, "-i"))
    {
      t = c_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_22;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  d_22 = t;
  t = term_t_11;
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, d_22);
  t = l_5(e_22, d_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_22);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, j_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_5;
  t = whoami_0_0(t);
  f_22 = t;
  t = term_o_5;
  h_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_11), f_22);
  i_22 = t;
  t = SSL_printnl(h_22, i_22);
  t = term_s_5;
  g_22 = t;
  t = SSL_exit(g_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_5 (ATerm w_35, ATerm x_35, ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_35, x_35);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = SSL_addr(w_35, x_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_22;
      t = y_84(t);
    }
  else
    {
      ATerm p_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_22 = ATgetFirst((ATermList) t);
          m_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_22;
      t = foldr_2_0(y_84, z_84, t);
      p_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_22, p_22);
      t = z_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm z_6 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(z_6, c_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_22 = NULL,v_6 = NULL,w_6 = NULL;
  t = times_0_0(t);
  w_6 = t;
  t = SSL_explode_term(w_6);
  if(match_cons(t, sym__2))
    {
      ATerm z_11 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6;
  t = foldr_2_0(k_3, l_3, t);
  s_22 = t;
  t = SSL_TicksToSeconds(s_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_23;
        if((e_23 != t))
          {
            _fail(t);
          }
        t = d_23;
        ;
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = (ATerm) ATmakeAppl(sym__2, e_23, f_23);
        {
          ATerm d_12 = t;
          int e_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_23, f_23);
              ;
              LocalPopChoice(e_12);
            }
          else
            {
              t = d_12;
              t = SSL_gtr(e_23, f_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_23, f_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_23 = NULL;
        t = term_p_10;
        t = get_config_0_0(t);
        l_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_23, term_s_5);
        t = geq_0_0(t);
        t = j_23;
        t = c_93(t);
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = j_23;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,q_23 = NULL,r_23 = NULL;
  t = run_time_0_0(t);
  n_23 = t;
  t = term_m_5;
  t = whoami_0_0(t);
  o_23 = t;
  t = term_o_5;
  q_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_12), n_23), term_j_12), o_23);
  r_23 = t;
  t = SSL_printnl(q_23, r_23);
  t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_12), n_23), term_j_12), o_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_10;
  s_23 = t;
  t = SSL_exit(s_23);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  b_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_24 = ATgetArgument(t, 0);
          {
            ATerm v_7 = NULL,c_9 = NULL;
            t = SSLgetAnnotations(b_24);
            v_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_24);
            c_9 = t;
            t = SSLsetAnnotations(c_9, v_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_95 (ATerm), ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      t = fetch_1_0(n_3, t);
    }
  t = s_95(t);
  return(t);
}
ATerm map_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm r_24 (ATerm t)
  {
    ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
    o_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_24;
      }
    else
      {
        ATerm o_8 = NULL,t_8 = NULL,u_8 = NULL,e_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_24 = ATgetFirst((ATermList) t);
            q_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_24);
        o_8 = t;
        t = p_24;
        t = v_78(t);
        t_8 = t;
        t = q_24;
        t = r_24(t);
        u_8 = t;
        t = (ATerm) ATinsert(CheckATermList(u_8), t_8);
        e_9 = t;
        t = SSLsetAnnotations(e_9, o_8);
      }
    return(t);
  }
  t = r_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_24 = ATgetFirst((ATermList) t);
      v_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_24 = NULL,a_25 = NULL;
        ATerm o_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_24)), not_null(a_25));
          return(t);
        }
        t = v_24;
        t = h_0(t);
        if(((z_24 != NULL) && (z_24 != t)))
          _fail(t);
        else
          z_24 = t;
        t = u_24;
        t = g_0(t);
        if(((a_25 != NULL) && (a_25 != t)))
          _fail(t);
        else
          a_25 = t;
        t = v_24;
        t = reverse_acc_2_0(g_0, o_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_5;
      t = h_0(t);
    }
  return(t);
}
ATerm i_5 (ATerm c_50, ATerm d_50, ATerm t)
{
  t = SSL_table_get(c_50, d_50);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,g_9 = NULL;
  g_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_25);
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_25);
  g_9 = t;
  t = SSLsetAnnotations(g_9, e_25);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm i_25 = NULL;
  i_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_25), term_q_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = fetch_1_0(q_3, t);
    }
  t = term_w_12;
  t = echo_0_0(t);
  t = term_l_11;
  c_25 = t;
  t = term_m_11;
  d_25 = t;
  t = term_x_12;
  t = i_5(c_25, d_25, t);
  t = reverse_acc_2_0(_id, r_3, t);
  t = map_1_0(s_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_13 = ATgetFirst((ATermList) t);
                ATerm b_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_25;
          }
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = (ATerm) ATinsert(ATempty, k_25);
      }
    l_25 = t;
    t = term_s_8;
    m_25 = t;
    t = SSL_printnl(m_25, l_25);
    t = k_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  t = term_c_13;
  q_25 = t;
  t = term_m_5;
  r_25 = t;
  t = term_d_13;
  t = l_5(q_25, r_25, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t = term_c_13;
  u_25 = t;
  t = term_m_5;
  v_25 = t;
  t = term_d_13;
  t = l_5(u_25, v_25, t);
  t = term_h_13;
  s_25 = t;
  t = term_m_5;
  t_25 = t;
  t = term_i_13;
  t = l_5(s_25, t_25, t);
  t = term_j_13;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, u_3, v_3, t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = Option_3_0(w_3, x_3, z_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_57 (ATerm), ATerm t_57 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,i_9 = NULL;
  b_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_25 = ATgetFirst((ATermList) t);
      y_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_26);
  w_25 = t;
  t = x_25;
  t = s_57(t);
  z_25 = t;
  t = y_25;
  t = t_57(t);
  a_26 = t;
  t = (ATerm) ATinsert(CheckATermList(a_26), z_25);
  i_9 = t;
  t = SSLsetAnnotations(i_9, w_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL,m_26 = NULL,o_9 = NULL;
  g_26 = t;
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_13;
        t = v_97(t);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
      }
    t = g_26;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_26 = ATgetFirst((ATermList) t);
        j_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_26);
    h_26 = t;
    t = term_w_11;
    m_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_11, i_26);
    t = l_5(m_26, i_26, t);
    t = j_26;
    {
      ATerm a_27 (ATerm t)
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_26 = NULL;
                p_26 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_26;
                ;
                LocalPopChoice(y_13);
              }
            else
              {
                t = x_13;
                t = v_97(t);
                t = Cons_2_0(_id, a_27, t);
              }
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm s_26 = NULL,t_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_26 = ATgetFirst((ATermList) t);
                  t_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_26), (ATerm) ATmakeAppl(sym_Undefined_1, s_26));
            }
          }
        return(t);
      }
      t = a_27(t);
      l_26 = t;
      t = (ATerm) ATinsert(CheckATermList(l_26), (ATerm) ATmakeAppl(sym_Program_1, i_26));
      o_9 = t;
      t = SSLsetAnnotations(o_9, h_26);
    }
  }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  if(match_string(t, "--help"))
    {
      t = m_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_27;
        }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  t = term_o_12;
  n_27 = t;
  t = term_m_5;
  o_27 = t;
  t = term_z_13;
  t = l_5(n_27, o_27, t);
  t = term_a_14;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  h_27 = t;
  t = term_l_11;
  j_27 = t;
  t = term_m_11;
  k_27 = t;
  t = (ATerm) ATempty;
  l_27 = t;
  t = SSL_table_put(j_27, k_27, l_27);
  t = h_27;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm d_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_97(t);
          ;
          LocalPopChoice(e_14);
        }
      else
        {
          t = d_14;
          {
            ATerm g_14 = t;
            int m_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_4, c_4, f_4, t);
                ;
                LocalPopChoice(m_14);
              }
            else
              {
                t = g_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_4, t);
    {
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_27 = NULL;
          v_27 = t;
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_9 = NULL;
                t = v_27;
                {
                  ATerm t_14 = t;
                  int u_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_14);
                    }
                  else
                    {
                      t = t_14;
                      t = fetch_1_0(i_4, t);
                    }
                  t = v_27;
                  t = default_system_usage_0_0(t);
                  t = term_t_10;
                  n_9 = t;
                  t = SSL_exit(n_9);
                }
                ;
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
                {
                  ATerm t_9 = NULL;
                  t = term_c_13;
                  t = get_config_0_0(t);
                  t = v_27;
                  t = default_system_about_0_0(t);
                  t = term_t_10;
                  t_9 = t;
                  t = SSL_exit(t_9);
                }
              }
          }
          ;
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
          {
            ATerm v_14 = t;
            int w_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
                ATerm k_4 (ATerm t)
                {
                  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,v_9 = NULL;
                  b_28 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      a_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_28);
                  z_27 = t;
                  t = a_28;
                  if(((f_27 != NULL) && (f_27 != t)))
                    _fail(t);
                  else
                    f_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_28);
                  v_9 = t;
                  t = SSLsetAnnotations(v_9, z_27);
                  return(t);
                }
                t = fetch_1_0(k_4, t);
                t = term_o_5;
                x_27 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_27)), term_x_14);
                y_27 = t;
                t = SSL_printnl(x_27, y_27);
                t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_27)), term_x_14));
                t = default_system_usage_0_0(t);
                t = term_s_5;
                w_27 = t;
                t = SSL_exit(w_27);
                ;
                LocalPopChoice(w_14);
              }
            else
              {
                t = v_14;
              }
          }
        }
      g_27 = t;
      t = term_l_11;
      i_27 = t;
      t = SSL_table_destroy(i_27);
      t = g_27;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  t = parse_options_1_0(u_95, t);
  g_28 = t;
  t = term_b_15;
  j_28 = t;
  t = SSL_table_create(j_28);
  t = term_b_15;
  h_28 = t;
  t = term_e_15;
  i_28 = t;
  t = SSL_table_put(h_28, i_28, g_28);
  t = g_28;
  t = w_95(t);
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_95, t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm j_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_15);
            }
          else
            {
              t = j_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = if_verbose2_1_0(y_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  t = term_m_15;
  k_28 = t;
  t = term_m_5;
  l_28 = t;
  t = term_p_15;
  t = l_5(k_28, l_28, t);
  t = term_q_15;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm m_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  m_28 = t;
  t = term_w_11;
  t = get_config_0_0(t);
  o_28 = t;
  t = term_o_5;
  p_28 = t;
  t = (ATerm) ATinsert(ATempty, o_28);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = m_28;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_95(t);
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        {
          ATerm u_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_15);
            }
          else
            {
              t = u_15;
              {
                ATerm w_15 = t;
                int x_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_15);
                  }
                else
                  {
                    t = w_15;
                    {
                      ATerm y_15 = t;
                      int z_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_4, s_4, x_4, t);
                          ;
                          LocalPopChoice(z_15);
                        }
                      else
                        {
                          t = y_15;
                          {
                            ATerm a_16 = t;
                            int b_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_16);
                              }
                            else
                              {
                                t = a_16;
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
  ATerm o_4 (ATerm t)
  {
    ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
    s_28 = t;
    {
      ATerm c_16 = t;
      int d_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_28 != NULL) && (r_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_5, t);
          ;
          LocalPopChoice(d_16);
        }
      else
        {
          t = c_16;
          t = term_e_16;
          r_28 = t;
        }
      t = not_null(r_28);
      t = ReadFromFile_0_0(t);
      t_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_28, t_28);
      t = apply_strategy_1_0(d_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(l_4, f_95, m_4, o_4, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,x_9 = NULL;
  y_28 = t;
  if(match_cons(t, sym__2))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_28);
  u_28 = t;
  t = w_28;
  t = MetaExplode_0_0(t);
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_28, x_28);
  x_9 = t;
  t = SSLsetAnnotations(x_9, u_28);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_5, _fail, default_usage_0_0, t);
  return(t);
}

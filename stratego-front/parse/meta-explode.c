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
Symbol sym_Int_1;
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
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
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
ATerm term_j_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_u_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
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
ATerm term_n_10;
ATerm term_g_10;
ATerm term_z_9;
ATerm term_u_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_o_8;
ATerm term_q_7;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_x_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_k_5;
void init_constant_terms (void)
{
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_Cong_2, term_n_6, (ATerm) ATempty);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Op_2, term_n_6, (ATerm) ATempty);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_w_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_k_5);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_p_11);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_k_5);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_k_5);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_k_5);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_l_15, term_k_5);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm b_2 (ATerm s_0, ATerm);
ATerm c_2 (ATerm v_0, ATerm);
ATerm str_explode_0_0 (ATerm);
ATerm TrmOp_0_0 (ATerm);
ATerm q_4 (ATerm t_18, ATerm u_18, ATerm);
ATerm foldr_3_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm t_4 (ATerm w_18, ATerm v_18, ATerm);
ATerm v_4 (ATerm q_105, ATerm);
ATerm w_4 (ATerm b_106, ATerm);
ATerm x_4 (ATerm f_105, ATerm);
ATerm u_6 (ATerm n_5, ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm x_74 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm c_5 (ATerm x_38, ATerm y_38, ATerm);
ATerm d_5 (ATerm l_42, ATerm m_42, ATerm);
ATerm f_5 (ATerm t_91 (ATerm), ATerm o_414, ATerm p_42, ATerm);
ATerm e_5 (ATerm h_42, ATerm i_42, ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm x_12 (ATerm l_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_5 (ATerm n_42, ATerm);
ATerm h_5 (ATerm z_38, ATerm a_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_15 (ATerm r_13, ATerm);
ATerm p_15 (ATerm y_13, ATerm e_14, ATerm f_14, ATerm);
ATerm s_15 (ATerm r_14, ATerm s_14, ATerm u_14, ATerm);
ATerm i_5 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_79 (ATerm), ATerm);
ATerm b_5 (ATerm n_33, ATerm o_33, ATerm);
ATerm debug_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_93 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_5 (ATerm o_43, ATerm p_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm v_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_5 (ATerm m_48, ATerm n_48, ATerm l_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm j_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm j_5 (ATerm x_35, ATerm y_35, ATerm);
ATerm foldr_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm need_help_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm l_5 (ATerm d_50, ATerm e_50, ATerm);
ATerm p_3 (ATerm);
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
ATerm y_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_97 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm parse_options_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm y_4 (ATerm);
ATerm iowrap_3_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,f_0 = NULL,n_0 = NULL;
  a_0 = t;
  t = term_k_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_q_5;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_5), b_0), term_s_5);
  n_0 = t;
  t = SSL_printnl(f_0, n_0);
  t = term_x_5;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm b_2 (ATerm s_0, ATerm t)
{
  ATerm t_0 = NULL;
  t = SSL_is_string(s_0);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, t_0));
  return(t);
}
ATerm c_2 (ATerm v_0, ATerm t)
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
  ATerm d_1 = NULL,g_1 = NULL,h_1 = NULL;
  h_1 = t;
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
            ATerm y_5 = t;
            int z_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_1;
                t = x_4(d_1, t);
                ;
                LocalPopChoice(z_5);
              }
            else
              {
                t = y_5;
                {
                  ATerm b_6 = t;
                  int e_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_2(h_1, t);
                      ;
                      LocalPopChoice(e_6);
                    }
                  else
                    {
                      t = b_6;
                      t = c_2(h_1, t);
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
                ATerm f_6 = t;
                int g_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = h_1;
                    t = v_4(d_1, t);
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
                          t = b_2(h_1, t);
                          ;
                          LocalPopChoice(i_6);
                        }
                      else
                        {
                          t = h_6;
                          t = c_2(h_1, t);
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
                    ATerm j_6 = t;
                    int k_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym_FromStrategy_1, d_1);
                        t = v_4(d_1, t);
                        ;
                        LocalPopChoice(k_6);
                      }
                    else
                      {
                        t = j_6;
                        {
                          ATerm l_6 = t;
                          int m_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = b_2(h_1, t);
                              ;
                              LocalPopChoice(m_6);
                            }
                          else
                            {
                              t = l_6;
                              t = c_2(h_1, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = term_o_6;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          d_1 = ATgetFirst((ATermList) t);
                          g_1 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm p_6 = t;
                            int q_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_1 = NULL,w_1 = NULL;
                                t = d_1;
                                t = str_explode_0_0(t);
                                r_1 = t;
                                t = g_1;
                                t = str_explode_0_0(t);
                                w_1 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, w_1), r_1));
                                ;
                                LocalPopChoice(q_6);
                              }
                            else
                              {
                                t = p_6;
                                {
                                  ATerm s_6 = t;
                                  int t_6 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = b_2(h_1, t);
                                      ;
                                      LocalPopChoice(t_6);
                                    }
                                  else
                                    {
                                      t = s_6;
                                      t = c_2(h_1, t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          ATerm v_6 = t;
                          int w_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = b_2(h_1, t);
                              ;
                              LocalPopChoice(w_6);
                            }
                          else
                            {
                              t = v_6;
                              t = c_2(h_1, t);
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
  ATerm m_2 = NULL,o_2 = NULL,q_2 = NULL,r_2 = NULL;
  r_2 = t;
  t = SSL_explode_term(r_2);
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_2;
  t = map_1_0(trm_explode_0_0, t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, m_2, q_2);
  return(t);
}
ATerm q_4 (ATerm t_18, ATerm u_18, ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  t = t_18;
  t = trm_explode_0_0(t);
  t_2 = t;
  t = u_18;
  t = trm_explode_0_0(t);
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, u_2), t_2));
  return(t);
}
ATerm foldr_3_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL;
  a_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_3;
      t = b_85(t);
    }
  else
    {
      ATerm g_3 = NULL,h_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_3 = ATgetFirst((ATermList) t);
          d_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_3;
      t = d_85(t);
      g_3 = t;
      t = d_3;
      t = foldr_3_0(b_85, c_85, d_85, t);
      h_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
      t = c_85(t);
    }
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm e_4 = NULL,g_4 = NULL,e_0 = NULL;
  e_4 = t;
  t = SSL_explode_term(e_4);
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_7 = ATgetArgument(t, 1);
        if(((ATgetType(f_7) == AT_LIST) && !(ATisEmpty(f_7))))
          {
            g_4 = ATgetFirst((ATermList) f_7);
            {
              ATerm g_7 = (ATerm) ATgetNext((ATermList) f_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(e_4);
  if(match_cons(t, sym__2))
    {
      ATerm h_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_7 = ATgetArgument(t, 1);
        if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
          {
            ATerm j_7 = ATgetFirst((ATermList) i_7);
            ATerm k_7 = (ATerm) ATgetNext((ATermList) i_7);
            if(((ATgetType(k_7) == AT_LIST) && !(ATisEmpty(k_7))))
              {
                e_0 = ATgetFirst((ATermList) k_7);
                {
                  ATerm m_7 = (ATerm) ATgetNext((ATermList) k_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, e_0), g_4));
  return(t);
}
ATerm t_4 (ATerm w_18, ATerm v_18, ATerm t)
{
  ATerm q_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = v_18;
    {
      ATerm n_7 = t;
      int o_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_3 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              z_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, term_q_7), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, z_3))));
          ;
          LocalPopChoice(o_7);
        }
      else
        {
          t = n_7;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = w_18;
  if(match_cons(t, sym_meta_listvar_1))
    {
      q_3 = ATgetArgument(t, 0);
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, q_3)));
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
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
ATerm v_4 (ATerm q_105, ATerm t)
{
  t = q_105;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm w_4 (ATerm b_106, ATerm t)
{
  ATerm r_4 = NULL;
  t = b_106;
  t = MetaExplode_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, r_4);
  return(t);
}
ATerm x_4 (ATerm f_105, ATerm t)
{
  t = f_105;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm u_6 (ATerm n_5, ATerm t)
{
  ATerm r_5 = NULL;
  t = SSL_is_int(n_5);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, r_5);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_5 = NULL,w_5 = NULL;
      w_5 = t;
      if(match_cons(t, sym_meta_var_1))
        {
          u_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, u_5);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              u_5 = ATgetArgument(t, 0);
              {
                ATerm v_7 = t;
                int a_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, term_q_7), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, u_5))));
                    ;
                    LocalPopChoice(a_8);
                  }
                else
                  {
                    t = v_7;
                    t = u_6(w_5, t);
                  }
              }
            }
          else
            {
              t = u_6(w_5, t);
            }
        }
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 = NULL,q_0 = NULL;
            q_0 = t;
            t = SSL_is_string(q_0);
            p_0 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, p_0);
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            {
              ATerm e_8 = t;
              int f_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_6 = NULL,c_6 = NULL,d_6 = NULL;
                  a_6 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      c_6 = ATgetArgument(t, 0);
                      t = a_6;
                      t = x_4(c_6, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          c_6 = ATgetArgument(t, 0);
                          t = a_6;
                          t = w_4(c_6, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              c_6 = ATgetArgument(t, 0);
                              t = a_6;
                              t = v_4(c_6, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  c_6 = ATgetArgument(t, 0);
                                  d_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_0 = NULL,b_1 = NULL;
                                    t = c_6;
                                    t = trm_explode_0_0(t);
                                    y_0 = t;
                                    t = d_6;
                                    t = MetaExplode_0_0(t);
                                    b_1 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, y_0, b_1);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      c_6 = ATgetArgument(t, 0);
                                      d_6 = ATgetArgument(t, 1);
                                      t = a_6;
                                      t = t_4(c_6, d_6, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_q_7;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              c_6 = ATgetFirst((ATermList) t);
                                              d_6 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = a_6;
                                          t = q_4(c_6, d_6, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  ;
                  LocalPopChoice(f_8);
                }
              else
                {
                  t = e_8;
                  t = TrmOp_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm alltd_1_0 (ATerm x_74 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm g_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_74(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = g_8;
        t = SRTS_all(x_6, t);
      }
    return(t);
  }
  t = x_6(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm l_7 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      l_7 = ATgetArgument(t, 0);
      t = l_7;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          l_7 = ATgetArgument(t, 0);
          {
            ATerm p_7 = NULL;
            t = l_7;
            t = trm_explode_0_0(t);
            p_7 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, p_7);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              l_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_7;
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
ATerm c_5 (ATerm x_38, ATerm y_38, ATerm t)
{
  ATerm x_7 = NULL;
  t = SSL_fputc(x_38, y_38);
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_7);
  return(t);
}
ATerm d_5 (ATerm l_42, ATerm m_42, ATerm t)
{
  ATerm y_7 = NULL;
  t = SSL_write_term_to_stream_text(l_42, m_42);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_7);
  return(t);
}
ATerm f_5 (ATerm t_91 (ATerm), ATerm o_414, ATerm p_42, ATerm t)
{
  ATerm z_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_414, term_o_8);
  t = i_5(t);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, p_42);
  t = t_91(t);
  t = fclose_0_0(t);
  t = p_42;
  return(t);
}
ATerm e_5 (ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm b_8 = NULL;
  t = SSL_write_term_to_stream_baf(h_42, i_42);
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_8);
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
  ATerm a_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if(match_cons(q_8, sym_Stream_1))
        {
          a_2 = ATgetArgument(q_8, 0);
        }
      else
        _fail(t);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(a_2, d_2, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm s_2 = NULL,w_2 = NULL,z_2 = NULL,c_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if(match_cons(r_8, sym_Stream_1))
        {
          c_3 = ATgetArgument(r_8, 0);
        }
      else
        _fail(t);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(c_3, i_3, t);
  s_2 = t;
  t = term_v_8;
  w_2 = t;
  t = s_2;
  if(match_cons(t, sym_Stream_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, s_2);
  t = c_5(w_2, z_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,n_8 = NULL,p_8 = NULL,u_8 = NULL,w_8 = NULL,a_9 = NULL,d_9 = NULL,h_11 = NULL,i_11 = NULL,y_2 = NULL,x_2 = NULL;
  i_8 = t;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_8);
  u_8 = t;
  t = w_8;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_8 != NULL) && (h_8 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_0, t);
        ;
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        t = term_z_8;
        h_8 = t;
      }
    d_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_9, a_9);
    x_2 = t;
    t = SSLsetAnnotations(x_2, u_8);
    t = i_8;
    if(match_cons(t, sym__2))
      {
        k_8 = ATgetArgument(t, 0);
        n_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_8);
    j_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_8, (ATerm) ATmakeAppl(sym__2, not_null(h_8), n_8));
    y_2 = t;
    t = SSLsetAnnotations(y_2, j_8);
    p_8 = t;
    if(match_cons(t, sym__2))
      {
        h_11 = ATgetArgument(t, 0);
        i_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm b_9 = t;
      int c_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,h_4 = NULL;
          t = SSLgetAnnotations(p_8);
          s_1 = t;
          t = h_11;
          t = fetch_1_0(c_1, t);
          v_1 = t;
          t = i_11;
          if(match_cons(t, sym__2))
            {
              y_1 = ATgetArgument(t, 0);
              z_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_5(e_1, y_1, z_1, t);
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_1, x_1);
          h_4 = t;
          t = SSLsetAnnotations(h_4, s_1);
          ;
          LocalPopChoice(c_9);
        }
      else
        {
          t = b_9;
          {
            ATerm i_2 = NULL,l_2 = NULL,n_2 = NULL,p_2 = NULL,m_4 = NULL;
            t = SSLgetAnnotations(p_8);
            i_2 = t;
            t = i_11;
            if(match_cons(t, sym__2))
              {
                n_2 = ATgetArgument(t, 0);
                p_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_5(f_1, n_2, p_2, t);
            l_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_11, l_2);
            m_4 = t;
            t = SSLsetAnnotations(m_4, i_2);
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
ATerm apply_strategy_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,o_11 = NULL,r_11 = NULL,t_11 = NULL;
  t_11 = t;
  t = dtime_0_0(t);
  t = t_11;
  t = v_94(t);
  r_11 = t;
  t = dtime_0_0(t);
  l_11 = t;
  t = r_11;
  if(match_cons(t, sym__2))
    {
      m_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_11), (ATerm) ATmakeAppl(sym_Runtime_1, l_11)), o_11);
  return(t);
}
ATerm x_12 (ATerm l_12, ATerm t)
{
  t = SSL_fclose(l_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  r_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_12 = ATgetArgument(t, 0);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_12);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = x_12(r_12, t);
          }
      }
    }
  else
    {
      t = x_12(r_12, t);
    }
  return(t);
}
ATerm g_5 (ATerm n_42, ATerm t)
{
  t = SSL_read_term_from_stream(n_42);
  return(t);
}
ATerm h_5 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm d_13 = NULL;
  t = SSL_fopen(z_38, a_39);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_stdin_stream();
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_stdout_stream();
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_stderr_stream();
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm o_15 (ATerm r_13, ATerm t)
{
  ATerm s_13 = NULL;
  t = SSL_explode_term(r_13);
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_9 = ATgetArgument(t, 1);
        if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
          {
            s_13 = ATgetFirst((ATermList) j_9);
            {
              ATerm l_9 = (ATerm) ATgetNext((ATermList) j_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_15 (ATerm y_13, ATerm e_14, ATerm f_14, ATerm t)
{
  ATerm g_14 = NULL,j_14 = NULL,k_14 = NULL,n_14 = NULL,b_7 = NULL;
  t = SSLgetAnnotations(f_14);
  k_14 = t;
  t = y_13;
  if(match_cons(t, sym_Path_1))
    {
      n_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_14, e_14);
  b_7 = t;
  t = SSLsetAnnotations(b_7, k_14);
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(g_14, j_14, t);
  return(t);
}
ATerm s_15 (ATerm r_14, ATerm s_14, ATerm u_14, ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,g_15 = NULL,c_7 = NULL;
  t = SSLgetAnnotations(u_14);
  x_14 = t;
  t = SSL_is_string(r_14);
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_15, s_14);
  c_7 = t;
  t = SSLsetAnnotations(c_7, x_14);
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(v_14, w_14, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,m_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym__2))
    {
      k_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      {
        ATerm n_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_15(j_15, t);
            ;
            LocalPopChoice(q_9);
          }
        else
          {
            t = n_9;
            {
              ATerm r_9 = t;
              int s_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_15(k_15, m_15, j_15, t);
                  ;
                  LocalPopChoice(s_9);
                }
              else
                {
                  t = r_9;
                  t = s_15(k_15, m_15, j_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_15(j_15, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_u_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_15 = NULL,x_15 = NULL,a_16 = NULL;
  ATerm v_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = NULL;
      b_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_16, term_z_9);
      t = i_5(t);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = v_9;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  x_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_5(a_16, t);
  t_15 = t;
  t = x_15;
  t = fclose_0_0(t);
  t = t_15;
  return(t);
}
ATerm fetch_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm s_17 (ATerm t)
  {
    ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
    m_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_17 = ATgetFirst((ATermList) t);
        o_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_10 = t;
      int d_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_4 = NULL,j_4 = NULL,g_9 = NULL;
          t = SSLgetAnnotations(m_17);
          c_4 = t;
          t = n_17;
          t = g_79(t);
          j_4 = t;
          t = (ATerm) ATinsert(CheckATermList(o_17), j_4);
          g_9 = t;
          t = SSLsetAnnotations(g_9, c_4);
          ;
          LocalPopChoice(d_10);
        }
      else
        {
          t = b_10;
          {
            ATerm p_5 = NULL,v_5 = NULL,h_9 = NULL;
            t = SSLgetAnnotations(m_17);
            p_5 = t;
            t = o_17;
            t = s_17(t);
            v_5 = t;
            t = (ATerm) ATinsert(CheckATermList(v_5), n_17);
            h_9 = t;
            t = SSLsetAnnotations(h_9, p_5);
          }
        }
    }
    return(t);
  }
  t = s_17(t);
  return(t);
}
ATerm b_5 (ATerm n_33, ATerm o_33, ATerm t)
{
  t = SSL_strcat(n_33, o_33);
  return(t);
}
ATerm debug_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  z_17 = t;
  t = r_91(t);
  a_18 = t;
  t = term_q_5;
  b_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_17), a_18);
  c_18 = t;
  t = SSL_printnl(b_18, c_18);
  t = z_17;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_18 = NULL;
      k_18 = t;
      t = SSL_is_string(k_18);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_1, t);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
              e_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_19 = ATgetArgument(t, 0);
                  t = f_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_19 = ATgetArgument(t, 0);
                      t = f_19;
                      {
                        ATerm l_10 = t;
                        int m_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_10);
                          }
                        else
                          {
                            t = l_10;
                            t = debug_1_0(k_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_19 = NULL,r_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_19 = ATgetArgument(t, 0);
                          g_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_19;
                      t = eval_config_0_0(t);
                      o_19 = t;
                      t = g_19;
                      t = eval_config_0_0(t);
                      r_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_19, r_19);
                      t = b_5(o_19, r_19, t);
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
  ATerm x_19 = NULL,z_19 = NULL;
  x_19 = t;
  t = term_n_10;
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, x_19);
  t = l_5(z_19, x_19, t);
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL,b_20 = NULL;
        t = eval_config_0_0(t);
        a_20 = t;
        t = term_n_10;
        b_20 = t;
        t = SSL_table_put(b_20, x_19, a_20);
        t = a_20;
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL;
        t = term_s_10;
        t = get_config_0_0(t);
        h_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_20, term_t_10);
        t = geq_0_0(t);
        t = f_20;
        t = e_93(t);
        ;
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = f_20;
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  if(match_string(t, "-k"))
    {
      t = k_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_20;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  t = SSL_string_to_int(l_20);
  m_20 = t;
  t = term_u_10;
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, m_20);
  t = o_5(n_20, m_20, t);
  t = l_20;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_1, m_1, n_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  if(match_string(t, "-S"))
    {
      t = p_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_20;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  t = term_s_10;
  q_20 = t;
  t = term_w_10;
  r_20 = t;
  t = term_x_10;
  t = o_5(q_20, r_20, t);
  t = term_y_10;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm t_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  t = SSL_string_to_int(s_20);
  t_20 = t;
  t = term_s_10;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_10, t_20);
  t = o_5(u_20, t_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_20);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_a_11;
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
  ATerm v_20 = NULL,w_20 = NULL;
  t = term_b_11;
  v_20 = t;
  t = term_k_5;
  w_20 = t;
  t = term_c_11;
  t = o_5(v_20, w_20, t);
  t = term_d_11;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_1, p_1, q_1, t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_1, u_1, e_2, t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = Option_3_0(f_2, g_2, h_2, t);
          }
      }
    }
  return(t);
}
ATerm o_5 (ATerm o_43, ATerm p_43, ATerm t)
{
  ATerm x_20 = NULL;
  t = term_n_10;
  x_20 = t;
  t = SSL_table_put(x_20, o_43, p_43);
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, o_43, p_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
      t = term_k_5;
      t = h_0(t);
      c_21 = t;
      t = term_n_11;
      d_21 = t;
      t = term_p_11;
      e_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_11, term_p_11, c_21);
      t = m_5(d_21, e_21, c_21, t);
      _fail(t);
    }
  else
    {
      ATerm j_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_21 = ATgetFirst((ATermList) t);
          b_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_21;
      t = d_0(t);
      t = term_k_5;
      t = g_0(t);
      j_21 = t;
      t = (ATerm) ATinsert(CheckATermList(b_21), j_21);
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  if(match_string(t, "-o"))
    {
      t = l_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_21;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  m_21 = t;
  t = term_q_11;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, m_21);
  t = o_5(n_21, m_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_21);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, v_2, t);
  return(t);
}
ATerm m_5 (ATerm m_48, ATerm n_48, ATerm l_48, ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_11 = ATgetArgument(t, 0);
            ATerm x_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
        t = l_5(m_48, n_48, t);
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATempty;
      }
    q_21 = t;
    t = (ATerm) ATinsert(CheckATermList(q_21), l_48);
    r_21 = t;
    t = SSL_table_put(m_48, n_48, r_21);
    t = p_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
      t = term_k_5;
      t = m_0(t);
      c_22 = t;
      t = term_n_11;
      d_22 = t;
      t = term_p_11;
      e_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_11, term_p_11, c_22);
      t = m_5(d_22, e_22, c_22, t);
      _fail(t);
    }
  else
    {
      ATerm i_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          z_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_21;
      t = k_0(t);
      t = a_22;
      t = l_0(t);
      i_22 = t;
      t = (ATerm) ATinsert(CheckATermList(b_22), i_22);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  if(match_string(t, "-i"))
    {
      t = k_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_22;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  t = term_y_11;
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, l_22);
  t = o_5(m_22, l_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_22);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_z_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, j_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_5;
  t = whoami_0_0(t);
  n_22 = t;
  t = term_q_5;
  p_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_12), n_22);
  q_22 = t;
  t = SSL_printnl(p_22, q_22);
  t = term_x_5;
  o_22 = t;
  t = SSL_exit(o_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm j_5 (ATerm x_35, ATerm y_35, ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_35, y_35);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      t = SSL_addr(x_35, y_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_22;
      t = z_84(t);
    }
  else
    {
      ATerm x_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_22 = ATgetFirst((ATermList) t);
          u_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_22;
      t = foldr_2_0(z_84, a_85, t);
      x_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_22, x_22);
      t = a_85(t);
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
  t = term_w_10;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(d_7, e_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_23 = NULL,z_6 = NULL,a_7 = NULL;
  t = times_0_0(t);
  a_7 = t;
  t = SSL_explode_term(a_7);
  if(match_cons(t, sym__2))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6;
  t = foldr_2_0(k_3, l_3, t);
  a_23 = t;
  t = SSL_TicksToSeconds(a_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_23;
        if((m_23 != t))
          {
            _fail(t);
          }
        t = l_23;
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATmakeAppl(sym__2, m_23, n_23);
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_23, n_23);
              ;
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              t = SSL_gtr(m_23, n_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_23, n_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_23 = NULL;
        t = term_s_10;
        t = get_config_0_0(t);
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_23, term_x_5);
        t = geq_0_0(t);
        t = r_23;
        t = d_93(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = r_23;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,y_23 = NULL,z_23 = NULL;
  t = run_time_0_0(t);
  v_23 = t;
  t = term_k_5;
  t = whoami_0_0(t);
  w_23 = t;
  t = term_q_5;
  y_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_12), v_23), term_m_12), w_23);
  z_23 = t;
  t = SSL_printnl(y_23, z_23);
  t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_12), v_23), term_m_12), w_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_10;
  a_24 = t;
  t = SSL_exit(a_24);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  j_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_24 = ATgetArgument(t, 0);
          {
            ATerm w_7 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(j_24);
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_24);
            k_9 = t;
            t = SSLsetAnnotations(k_9, w_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      t = fetch_1_0(n_3, t);
    }
  t = t_95(t);
  return(t);
}
ATerm map_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm z_24 (ATerm t)
  {
    ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
    w_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_24;
      }
    else
      {
        ATerm m_8 = NULL,s_8 = NULL,t_8 = NULL,m_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_24 = ATgetFirst((ATermList) t);
            y_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_24);
        m_8 = t;
        t = x_24;
        t = w_78(t);
        s_8 = t;
        t = y_24;
        t = z_24(t);
        t_8 = t;
        t = (ATerm) ATinsert(CheckATermList(t_8), s_8);
        m_9 = t;
        t = SSLsetAnnotations(m_9, m_8);
      }
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_25 = ATgetFirst((ATermList) t);
      d_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_25 = NULL,i_25 = NULL;
        ATerm o_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_25)), not_null(i_25));
          return(t);
        }
        t = d_25;
        t = j_0(t);
        if(((h_25 != NULL) && (h_25 != t)))
          _fail(t);
        else
          h_25 = t;
        t = c_25;
        t = i_0(t);
        if(((i_25 != NULL) && (i_25 != t)))
          _fail(t);
        else
          i_25 = t;
        t = d_25;
        t = reverse_acc_2_0(i_0, o_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_5;
      t = j_0(t);
    }
  return(t);
}
ATerm l_5 (ATerm d_50, ATerm e_50, ATerm t)
{
  t = SSL_table_get(d_50, e_50);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,o_9 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_25);
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_25);
  o_9 = t;
  t = SSLsetAnnotations(o_9, m_25);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_25), term_t_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = fetch_1_0(p_3, t);
    }
  t = term_w_12;
  t = echo_0_0(t);
  t = term_n_11;
  k_25 = t;
  t = term_p_11;
  l_25 = t;
  t = term_y_12;
  t = l_5(k_25, l_25, t);
  t = reverse_acc_2_0(_id, r_3, t);
  t = map_1_0(s_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_13 = ATgetFirst((ATermList) t);
                ATerm c_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_25;
          }
        ;
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = (ATerm) ATinsert(ATempty, s_25);
      }
    t_25 = t;
    t = term_z_8;
    u_25 = t;
    t = SSL_printnl(u_25, t_25);
    t = s_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_12;
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
  ATerm y_25 = NULL,z_25 = NULL;
  t = term_h_13;
  y_25 = t;
  t = term_k_5;
  z_25 = t;
  t = term_i_13;
  t = o_5(y_25, z_25, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_j_13;
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
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  t = term_h_13;
  c_26 = t;
  t = term_k_5;
  d_26 = t;
  t = term_i_13;
  t = o_5(c_26, d_26, t);
  t = term_k_13;
  a_26 = t;
  t = term_k_5;
  b_26 = t;
  t = term_l_13;
  t = o_5(a_26, b_26, t);
  t = term_m_13;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, u_3, v_3, t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      t = Option_3_0(w_3, x_3, y_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,w_9 = NULL;
  j_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_26 = ATgetFirst((ATermList) t);
      g_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_26);
  e_26 = t;
  t = f_26;
  t = t_57(t);
  h_26 = t;
  t = g_26;
  t = u_57(t);
  i_26 = t;
  t = (ATerm) ATinsert(CheckATermList(i_26), h_26);
  w_9 = t;
  t = SSLsetAnnotations(w_9, e_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL,u_26 = NULL,y_9 = NULL;
  o_26 = t;
  {
    ATerm q_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_13;
        t = w_97(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = q_13;
      }
    t = o_26;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_26 = ATgetFirst((ATermList) t);
        r_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_26);
    p_26 = t;
    t = term_b_12;
    u_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_12, q_26);
    t = o_5(u_26, q_26, t);
    t = r_26;
    {
      ATerm i_27 (ATerm t)
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_27 = NULL;
                b_27 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_27;
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = x_13;
                t = w_97(t);
                t = Cons_2_0(_id, i_27, t);
              }
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm e_27 = NULL,f_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_27 = ATgetFirst((ATermList) t);
                  f_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_27), (ATerm) ATmakeAppl(sym_Undefined_1, e_27));
            }
          }
        return(t);
      }
      t = i_27(t);
      t_26 = t;
      t = (ATerm) ATinsert(CheckATermList(t_26), (ATerm) ATmakeAppl(sym_Program_1, q_26));
      y_9 = t;
      t = SSLsetAnnotations(y_9, p_26);
    }
  }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  if(match_string(t, "--help"))
    {
      t = u_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_27;
        }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  t = term_s_12;
  v_27 = t;
  t = term_k_5;
  w_27 = t;
  t = term_a_14;
  t = o_5(v_27, w_27, t);
  t = term_b_14;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  p_27 = t;
  t = term_n_11;
  r_27 = t;
  t = term_p_11;
  s_27 = t;
  t = (ATerm) ATempty;
  t_27 = t;
  t = SSL_table_put(r_27, s_27, t_27);
  t = p_27;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm d_14 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_97(t);
          ;
          LocalPopChoice(h_14);
        }
      else
        {
          t = d_14;
          {
            ATerm i_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_4, d_4, f_4, t);
                ;
                LocalPopChoice(l_14);
              }
            else
              {
                t = i_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_4, t);
    {
      ATerm m_14 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_28 = NULL;
          d_28 = t;
          {
            ATerm p_14 = t;
            int q_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_9 = NULL;
                t = d_28;
                {
                  ATerm t_14 = t;
                  int y_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_14);
                    }
                  else
                    {
                      t = t_14;
                      t = fetch_1_0(i_4, t);
                    }
                  t = d_28;
                  t = default_system_usage_0_0(t);
                  t = term_w_10;
                  p_9 = t;
                  t = SSL_exit(p_9);
                }
                ;
                LocalPopChoice(q_14);
              }
            else
              {
                t = p_14;
                {
                  ATerm t_9 = NULL;
                  t = term_h_13;
                  t = get_config_0_0(t);
                  t = d_28;
                  t = default_system_about_0_0(t);
                  t = term_w_10;
                  t_9 = t;
                  t = SSL_exit(t_9);
                }
              }
          }
          ;
          LocalPopChoice(o_14);
        }
      else
        {
          t = m_14;
          {
            ATerm z_14 = t;
            int a_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
                ATerm k_4 (ATerm t)
                {
                  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,a_10 = NULL;
                  j_28 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      i_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_28);
                  h_28 = t;
                  t = i_28;
                  if(((n_27 != NULL) && (n_27 != t)))
                    _fail(t);
                  else
                    n_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_28);
                  a_10 = t;
                  t = SSLsetAnnotations(a_10, h_28);
                  return(t);
                }
                t = fetch_1_0(k_4, t);
                t = term_q_5;
                f_28 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_27)), term_b_15);
                g_28 = t;
                t = SSL_printnl(f_28, g_28);
                t = (ATerm) ATmakeAppl(sym__2, term_q_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_27)), term_b_15));
                t = default_system_usage_0_0(t);
                t = term_x_5;
                e_28 = t;
                t = SSL_exit(e_28);
                ;
                LocalPopChoice(a_15);
              }
            else
              {
                t = z_14;
              }
          }
        }
      o_27 = t;
      t = term_n_11;
      q_27 = t;
      t = SSL_table_destroy(q_27);
      t = o_27;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  t = parse_options_1_0(v_95, t);
  p_28 = t;
  t = term_c_15;
  s_28 = t;
  t = SSL_table_create(s_28);
  t = term_c_15;
  q_28 = t;
  t = term_d_15;
  r_28 = t;
  t = SSL_table_put(q_28, r_28, p_28);
  t = p_28;
  t = x_95(t);
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_95, t);
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = if_verbose2_1_0(y_4, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  t = term_l_15;
  t_28 = t;
  t = term_k_5;
  u_28 = t;
  t = term_n_15;
  t = o_5(t_28, u_28, t);
  t = term_q_15;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  v_28 = t;
  t = term_b_12;
  t = get_config_0_0(t);
  w_28 = t;
  t = term_q_5;
  x_28 = t;
  t = (ATerm) ATinsert(ATempty, w_28);
  y_28 = t;
  t = SSL_printnl(x_28, y_28);
  t = v_28;
  return(t);
}
ATerm iowrap_3_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_95(t);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        {
          ATerm w_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(y_15);
            }
          else
            {
              t = w_15;
              {
                ATerm z_15 = t;
                int c_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_16);
                  }
                else
                  {
                    t = z_15;
                    {
                      ATerm d_16 = t;
                      int e_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_4, s_4, u_4, t);
                          ;
                          LocalPopChoice(e_16);
                        }
                      else
                        {
                          t = d_16;
                          {
                            ATerm f_16 = t;
                            int g_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(g_16);
                              }
                            else
                              {
                                t = f_16;
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
    ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
    a_29 = t;
    {
      ATerm h_16 = t;
      int i_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_28 != NULL) && (z_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_4, t);
          ;
          LocalPopChoice(i_16);
        }
      else
        {
          t = h_16;
          t = term_j_16;
          z_28 = t;
        }
      t = not_null(z_28);
      t = ReadFromFile_0_0(t);
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_29, b_29);
      t = apply_strategy_1_0(e_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(l_4, g_95, n_4, o_4, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,c_10 = NULL;
  g_29 = t;
  if(match_cons(t, sym__2))
    {
      d_29 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_29);
  c_29 = t;
  t = e_29;
  t = MetaExplode_0_0(t);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_29, f_29);
  c_10 = t;
  t = SSLsetAnnotations(c_10, c_29);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_5, _fail, default_usage_0_0, t);
  return(t);
}

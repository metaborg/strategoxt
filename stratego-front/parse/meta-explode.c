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
ATerm term_k_17;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_a_15;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_i_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_i_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_p_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_c_8;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_w_6;
ATerm term_g_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
void init_constant_terms (void)
{
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Cong_2, term_c_6, (ATerm) ATempty);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Op_2, term_c_6, (ATerm) ATempty);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_k_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_l_5);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_o_11);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_l_5);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_l_5);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_l_5);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_l_5);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm z_1 (ATerm q_0, ATerm);
ATerm str_explode_0_0 (ATerm);
ATerm TrmOp_0_0 (ATerm);
ATerm n_4 (ATerm s_30, ATerm t_30, ATerm);
ATerm foldr_3_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm p_4 (ATerm v_30, ATerm u_30, ATerm);
ATerm r_4 (ATerm a_135, ATerm);
ATerm s_4 (ATerm l_135, ATerm);
ATerm t_4 (ATerm p_134, ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm _2_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm);
ATerm y_4 (ATerm s_50, ATerm t_50, ATerm);
ATerm z_4 (ATerm g_54, ATerm h_54, ATerm);
ATerm b_5 (ATerm i_103 (ATerm), ATerm a_441, ATerm k_54, ATerm);
ATerm a_5 (ATerm c_54, ATerm d_54, ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm q_9 (ATerm b_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_5 (ATerm i_54, ATerm);
ATerm d_5 (ATerm u_50, ATerm v_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_91 (ATerm), ATerm);
ATerm x_4 (ATerm i_45, ATerm j_45, ATerm);
ATerm debug_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_104 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_5 (ATerm j_55, ATerm k_55, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_5 (ATerm h_60, ATerm i_60, ATerm g_60, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_5 (ATerm s_47, ATerm t_47, ATerm);
ATerm foldr_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_104 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm need_help_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_5 (ATerm y_61, ATerm z_61, ATerm);
ATerm Program_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_75 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm l_109 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm parse_options_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm f_5 (ATerm);
ATerm iowrap_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm);
ATerm k_5 (ATerm);
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
  t = term_l_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_m_5;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_5), f_0), term_n_5);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  t = term_p_5;
  m_0 = t;
  t = SSL_exit(m_0);
  t = b_0;
  return(t);
}
ATerm z_1 (ATerm q_0, ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL;
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_0;
  t = map_1_0(str_explode_0_0, t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, s_0, u_0);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm w_0 = NULL,y_0 = NULL,a_1 = NULL;
  a_1 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      w_0 = ATgetArgument(t, 0);
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_0), (ATerm) ATempty);
            ;
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            t = z_1(a_1, t);
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          w_0 = ATgetArgument(t, 0);
          {
            ATerm t_5 = t;
            int u_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_1;
                t = t_4(w_0, t);
                ;
                LocalPopChoice(u_5);
              }
            else
              {
                t = t_5;
                t = z_1(a_1, t);
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              w_0 = ATgetArgument(t, 0);
              {
                ATerm v_5 = t;
                int z_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_1;
                    t = r_4(w_0, t);
                    ;
                    LocalPopChoice(z_5);
                  }
                else
                  {
                    t = v_5;
                    t = z_1(a_1, t);
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm a_6 = t;
                  int b_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_6;
                      ;
                      LocalPopChoice(b_6);
                    }
                  else
                    {
                      t = a_6;
                      t = z_1(a_1, t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_0 = ATgetFirst((ATermList) t);
                      y_0 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm e_6 = t;
                        int f_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_1 = NULL,t_1 = NULL;
                            t = w_0;
                            t = str_explode_0_0(t);
                            k_1 = t;
                            t = y_0;
                            t = str_explode_0_0(t);
                            t_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Cong_2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, t_1), k_1));
                            ;
                            LocalPopChoice(f_6);
                          }
                        else
                          {
                            t = e_6;
                            t = z_1(a_1, t);
                          }
                      }
                    }
                  else
                    {
                      t = z_1(a_1, t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm a_2 = NULL,i_2 = NULL,m_2 = NULL,n_2 = NULL;
  a_2 = t;
  t = SSL_explode_term(a_2);
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_2;
  t = map_1_0(trm_explode_0_0, t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, i_2, n_2);
  return(t);
}
ATerm n_4 (ATerm s_30, ATerm t_30, ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  t = s_30;
  t = trm_explode_0_0(t);
  q_2 = t;
  t = t_30;
  t = trm_explode_0_0(t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, r_2), q_2));
  return(t);
}
ATerm foldr_3_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm t)
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_96(t);
      ;
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      {
        ATerm z_2 = NULL,a_3 = NULL,d_3 = NULL,e_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_2 = ATgetFirst((ATermList) t);
            a_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_2;
        t = y_96(t);
        d_3 = t;
        t = a_3;
        t = foldr_3_0(w_96, x_96, y_96, t);
        e_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_3, e_3);
        t = x_96(t);
      }
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL,p_0 = NULL;
  u_3 = t;
  t = SSL_explode_term(u_3);
  if(match_cons(t, sym__2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_6 = ATgetArgument(t, 1);
        if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
          {
            w_3 = ATgetFirst((ATermList) k_6);
            {
              ATerm l_6 = (ATerm) ATgetNext((ATermList) k_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(u_3);
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_6 = ATgetArgument(t, 1);
        if(((ATgetType(o_6) == AT_LIST) && !(ATisEmpty(o_6))))
          {
            ATerm p_6 = ATgetFirst((ATermList) o_6);
            ATerm q_6 = (ATerm) ATgetNext((ATermList) o_6);
            if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
              {
                p_0 = ATgetFirst((ATermList) q_6);
                {
                  ATerm r_6 = (ATerm) ATgetNext((ATermList) q_6);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, p_0), w_3));
  return(t);
}
ATerm p_4 (ATerm v_30, ATerm u_30, ATerm t)
{
  t = v_30;
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL;
        if(match_cons(t, sym_meta_listvar_1))
          {
            m_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, m_3)));
        ;
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
      }
    {
      ATerm h_1 (ATerm t)
      {
        t = u_30;
        {
          ATerm u_6 = t;
          int v_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_3 = NULL;
              if(match_cons(t, sym_meta_listvar_1))
                {
                  p_3 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, term_w_6), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, p_3))));
              ;
              LocalPopChoice(v_6);
            }
          else
            {
              t = u_6;
              t = trm_explode_0_0(t);
            }
        }
        return(t);
      }
      t = foldr_3_0(h_1, i_1, trm_explode_0_0, t);
    }
  }
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
  ATerm e_4 = NULL;
  t = l_135;
  t = MetaExplode_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, e_4);
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
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          s_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, s_5);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              s_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, term_w_6), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, s_5))));
        }
      ;
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      {
        ATerm z_6 = t;
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 = NULL,x_0 = NULL;
            x_0 = t;
            t = SSL_is_string(x_0);
            v_0 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, v_0);
            ;
            LocalPopChoice(b_7);
          }
        else
          {
            t = z_6;
            {
              ATerm c_7 = t;
              int d_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
                  w_5 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      x_5 = ATgetArgument(t, 0);
                      t = w_5;
                      t = t_4(x_5, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          x_5 = ATgetArgument(t, 0);
                          t = w_5;
                          t = s_4(x_5, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              x_5 = ATgetArgument(t, 0);
                              t = w_5;
                              t = r_4(x_5, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  x_5 = ATgetArgument(t, 0);
                                  y_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm f_1 = NULL,g_1 = NULL;
                                    t = x_5;
                                    t = trm_explode_0_0(t);
                                    f_1 = t;
                                    t = y_5;
                                    t = MetaExplode_0_0(t);
                                    g_1 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, f_1, g_1);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      x_5 = ATgetArgument(t, 0);
                                      y_5 = ATgetArgument(t, 1);
                                      t = w_5;
                                      t = p_4(x_5, y_5, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_w_6;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              x_5 = ATgetFirst((ATermList) t);
                                              y_5 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = w_5;
                                          t = n_4(x_5, y_5, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  ;
                  LocalPopChoice(d_7);
                }
              else
                {
                  t = c_7;
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
  ATerm m_6 (ATerm t)
  {
    ATerm f_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_86(t);
        ;
        LocalPopChoice(l_7);
      }
    else
      {
        t = f_7;
        t = SRTS_all(m_6, t);
      }
    return(t);
  }
  t = m_6(t);
  return(t);
}
ATerm j_1 (ATerm t)
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
            ATerm e_7 = NULL;
            t = a_7;
            t = trm_explode_0_0(t);
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, e_7);
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
  t = alltd_1_0(j_1, t);
  return(t);
}
ATerm _2_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,m_7 = NULL,n_0 = NULL,o_0 = NULL;
  m_7 = t;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_7);
  g_7 = t;
  t = h_7;
  t = z_64(t);
  j_7 = t;
  t = i_7;
  t = a_65(t);
  k_7 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_7, k_7);
  n_0 = t;
  t = SSLsetAnnotations(n_0, g_7);
  return(t);
}
ATerm y_4 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm q_7 = NULL;
  t = SSL_fputc(s_50, t_50);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_7);
  return(t);
}
ATerm z_4 (ATerm g_54, ATerm h_54, ATerm t)
{
  ATerm r_7 = NULL;
  t = SSL_write_term_to_stream_text(g_54, h_54);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
  return(t);
}
ATerm b_5 (ATerm i_103 (ATerm), ATerm a_441, ATerm k_54, ATerm t)
{
  ATerm t_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_441, term_n_7);
  t = open_stream_0_0(t);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_7, k_54);
  t = i_103(t);
  t = fclose_0_0(t);
  t = k_54;
  return(t);
}
ATerm a_5 (ATerm c_54, ATerm d_54, ATerm t)
{
  ATerm u_7 = NULL;
  t = SSL_write_term_to_stream_baf(c_54, d_54);
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_7);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = fetch_1_0(q_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm z_7 = NULL,b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(r_1, z_7, b_8, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      if(match_cons(o_7, sym_Stream_1))
        {
          d_8 = ATgetArgument(o_7, 0);
        }
      else
        _fail(t);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(d_8, e_8, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(u_1, f_8, g_8, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if(match_cons(p_7, sym_Stream_1))
        {
          i_8 = ATgetArgument(p_7, 0);
        }
      else
        _fail(t);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(i_8, j_8, t);
  h_8 = t;
  t = term_s_7;
  k_8 = t;
  t = h_8;
  if(match_cons(t, sym_Stream_1))
    {
      l_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, h_8);
  t = y_4(k_8, l_8, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_7 = NULL,x_7 = NULL;
  v_7 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm w_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
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
          t = fetch_1_0(m_1, t);
          ;
          LocalPopChoice(a_8);
        }
      else
        {
          t = w_7;
          t = term_c_8;
          if(((x_7 != NULL) && (x_7 != t)))
            _fail(t);
          else
            x_7 = t;
        }
      return(t);
    }
    t = _2_0(l_1, _id, t);
    t = v_7;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm y_7 = NULL;
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), y_7);
        return(t);
      }
      t = _2_0(_id, n_1, t);
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(o_1, p_1, t);
            ;
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            t = _2_0(_id, s_1, t);
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
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
  m_8 = t;
  t = dtime_0_0(t);
  t = m_8;
  t = k_106(t);
  n_8 = t;
  t = dtime_0_0(t);
  o_8 = t;
  t = n_8;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_8), (ATerm) ATmakeAppl(sym_Runtime_1, o_8)), q_8);
  return(t);
}
ATerm q_9 (ATerm b_9, ATerm t)
{
  t = SSL_fclose(b_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_9 = NULL,k_9 = NULL;
  k_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_9 = ATgetArgument(t, 0);
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_9);
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            t = q_9(k_9, t);
          }
      }
    }
  else
    {
      t = q_9(k_9, t);
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
  ATerm t_9 = NULL;
  t = SSL_fopen(u_50, v_50);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_9 = NULL;
  t = SSL_stdin_stream();
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  t = SSL_stdout_stream();
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_9 = NULL;
  t = SSL_stderr_stream();
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_9);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm o_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  t = SSL_is_string(v_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      ATerm w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_10 = NULL,w_1 = NULL;
        l_10 = t;
        t = SSL_explode_term(l_10);
        if(match_cons(t, sym__2))
          {
            ATerm z_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_9 = ATgetArgument(t, 1);
              if(((ATgetType(a_9) == AT_LIST) && !(ATisEmpty(a_9))))
                {
                  w_1 = ATgetFirst((ATermList) a_9);
                  {
                    ATerm c_9 = (ATerm) ATgetNext((ATermList) a_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = w_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = w_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_10 = NULL,n_10 = NULL;
              t = _2_0(v_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_10 = ATgetArgument(t, 0);
                  n_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_5(m_10, n_10, t);
              ;
              LocalPopChoice(e_9);
            }
          else
            {
              t = d_9;
              {
                ATerm q_10 = NULL,t_10 = NULL;
                t = _2_0(x_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_10 = ATgetArgument(t, 0);
                    t_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_5(q_10, t_10, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL;
      e_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_11, term_j_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = debug_1_0(y_1, t);
      _fail(t);
    }
  a_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(c_11, t);
  b_11 = t;
  t = a_11;
  t = fclose_0_0(t);
  t = b_11;
  return(t);
}
ATerm fetch_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_91, _id, t);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        t = Cons_2_0(_id, j_11, t);
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm x_4 (ATerm i_45, ATerm j_45, ATerm t)
{
  t = SSL_strcat(i_45, j_45);
  return(t);
}
ATerm debug_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  k_11 = t;
  t = g_103(t);
  l_11 = t;
  t = term_m_5;
  m_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_11), l_11);
  n_11 = t;
  t = SSL_printnl(m_11, n_11);
  t = k_11;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL;
      z_11 = t;
      t = SSL_is_string(z_11);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm w_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_2, t);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = w_9;
            {
              ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
              f_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_12 = ATgetArgument(t, 0);
                  t = g_12;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_12 = ATgetArgument(t, 0);
                      t = g_12;
                      {
                        ATerm z_9 = t;
                        int a_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_10);
                          }
                        else
                          {
                            t = z_9;
                            t = debug_1_0(c_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_12 = NULL,o_12 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_12 = ATgetArgument(t, 0);
                          h_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_12;
                      t = eval_config_0_0(t);
                      m_12 = t;
                      t = h_12;
                      t = eval_config_0_0(t);
                      o_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_12, o_12);
                      t = x_4(m_12, o_12, t);
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
  ATerm t_12 = NULL,u_12 = NULL;
  t_12 = t;
  t = term_b_10;
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, t_12);
  t = g_5(u_12, t_12, t);
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL,x_12 = NULL;
        t = eval_config_0_0(t);
        w_12 = t;
        t = term_b_10;
        x_12 = t;
        t = SSL_table_put(x_12, t_12, w_12);
        t = w_12;
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 = NULL,a_13 = NULL;
      y_12 = t;
      t = term_g_10;
      t = get_config_0_0(t);
      a_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_13, term_h_10);
      t = geq_0_0(t);
      t = y_12;
      t = t_104(t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  if(match_string(t, "-k"))
    {
      t = c_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_13;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,h_13 = NULL;
  d_13 = t;
  t = SSL_string_to_int(d_13);
  e_13 = t;
  t = term_i_10;
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, e_13);
  t = j_5(h_13, e_13, t);
  t = d_13;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, e_2, f_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  if(match_string(t, "-S"))
    {
      t = j_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_13;
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  t = term_g_10;
  k_13 = t;
  t = term_k_10;
  l_13 = t;
  t = term_p_10;
  t = j_5(k_13, l_13, t);
  t = term_r_10;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm m_13 = NULL,o_13 = NULL,p_13 = NULL;
  m_13 = t;
  t = SSL_string_to_int(m_13);
  o_13 = t;
  t = term_g_10;
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_10, o_13);
  t = j_5(p_13, o_13, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_13);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  t = term_w_10;
  q_13 = t;
  t = term_l_5;
  r_13 = t;
  t = term_x_10;
  t = j_5(q_13, r_13, t);
  t = term_y_10;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, h_2, j_2, t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = d_11;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, p_2, s_2, t);
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = Option_3_0(t_2, u_2, x_2, t);
          }
      }
    }
  return(t);
}
ATerm j_5 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm y_13 = NULL;
  t = term_b_10;
  y_13 = t;
  t = SSL_table_put(y_13, j_55, k_55);
  t = (ATerm) ATmakeAppl(sym__3, term_b_10, j_55, k_55);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
      t = term_l_5;
      t = d_0(t);
      e_14 = t;
      t = term_i_11;
      f_14 = t;
      t = term_o_11;
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_11, term_o_11, e_14);
      t = h_5(f_14, g_14, e_14, t);
      _fail(t);
    }
  else
    {
      ATerm m_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_14 = ATgetFirst((ATermList) t);
          c_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_14;
      t = a_0(t);
      t = term_l_5;
      t = c_0(t);
      m_14 = t;
      t = (ATerm) ATinsert(CheckATermList(c_14), m_14);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  if(match_string(t, "-o"))
    {
      t = o_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_14;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  p_14 = t;
  t = term_p_11;
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, p_14);
  t = j_5(q_14, p_14, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_14);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, b_3, c_3, t);
  return(t);
}
ATerm h_5 (ATerm h_60, ATerm i_60, ATerm g_60, ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,v_14 = NULL;
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_60, i_60);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_11 = ATgetArgument(t, 0);
            ATerm u_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_60, i_60);
        t = g_5(h_60, i_60, t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATempty;
      }
    t_14 = t;
    t = (ATerm) ATinsert(CheckATermList(t_14), g_60);
    v_14 = t;
    t = SSL_table_put(h_60, i_60, v_14);
    t = s_14;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,m_15 = NULL,p_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
      t = term_l_5;
      t = j_0(t);
      s_15 = t;
      t = term_i_11;
      t_15 = t;
      t = term_o_11;
      u_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_11, term_o_11, s_15);
      t = h_5(t_15, u_15, s_15, t);
      _fail(t);
    }
  else
    {
      ATerm d_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_15 = ATgetFirst((ATermList) t);
          g_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_15 = ATgetFirst((ATermList) t);
          p_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_15;
      t = h_0(t);
      t = m_15;
      t = i_0(t);
      d_16 = t;
      t = (ATerm) ATinsert(CheckATermList(p_15), d_16);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  if(match_string(t, "-i"))
    {
      t = i_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_16;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  j_16 = t;
  t = term_v_11;
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, j_16);
  t = j_5(k_16, j_16, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_16);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, g_3, h_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_5;
  t = whoami_0_0(t);
  l_16 = t;
  t = term_m_5;
  m_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_11), l_16);
  n_16 = t;
  t = SSL_printnl(m_16, n_16);
  t = term_p_5;
  o_16 = t;
  t = SSL_exit(o_16);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_5 (ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_47, t_47);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = SSL_addr(s_47, t_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_96(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm r_16 = NULL,s_16 = NULL,v_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_16 = ATgetFirst((ATermList) t);
            s_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_16;
        t = foldr_2_0(u_96, v_96, t);
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_16, v_16);
        t = v_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      v_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(v_2, w_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_16 = NULL,k_2 = NULL,l_2 = NULL;
  t = times_0_0(t);
  k_2 = t;
  t = SSL_explode_term(k_2);
  if(match_cons(t, sym__2))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2;
  t = foldr_2_0(i_3, j_3, t);
  y_16 = t;
  t = SSL_TicksToSeconds(y_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_17 = NULL,t_17 = NULL,u_17 = NULL;
  r_17 = t;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_17;
        if((t_17 != t))
          {
            _fail(t);
          }
        t = r_17;
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = (ATerm) ATmakeAppl(sym__2, t_17, u_17);
        {
          ATerm k_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_17, u_17);
              ;
              LocalPopChoice(l_12);
            }
          else
            {
              t = k_12;
              t = SSL_gtr(t_17, u_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_17, u_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm n_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL,z_17 = NULL;
      x_17 = t;
      t = term_g_10;
      t = get_config_0_0(t);
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_17, term_p_5);
      t = geq_0_0(t);
      t = x_17;
      t = s_104(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = n_12;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  t = run_time_0_0(t);
  b_18 = t;
  t = term_l_5;
  t = whoami_0_0(t);
  c_18 = t;
  t = term_m_5;
  d_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_12), b_18), term_q_12), c_18);
  e_18 = t;
  t = SSL_printnl(d_18, e_18);
  t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_12), b_18), term_q_12), c_18));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_10;
  f_18 = t;
  t = SSL_exit(f_18);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm s_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = s_12;
      {
        ATerm z_12 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = z_12;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = fetch_1_0(l_3, t);
    }
  t = i_107(t);
  return(t);
}
ATerm map_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm g_18 (ATerm t)
  {
    ATerm n_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = n_13;
        t = Cons_2_0(r_90, g_18, t);
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_18 = ATgetFirst((ATermList) t);
      j_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_18 = NULL,o_18 = NULL;
        t = j_18;
        t = g_0(t);
        n_18 = t;
        t = i_18;
        t = e_0(t);
        o_18 = t;
        t = j_18;
        {
          ATerm n_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_18), o_18);
            return(t);
          }
          t = reverse_acc_2_0(e_0, n_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_5;
      t = g_0(t);
    }
  return(t);
}
ATerm g_5 (ATerm y_61, ATerm z_61, ATerm t)
{
  t = SSL_table_get(y_61, z_61);
  return(t);
}
ATerm Program_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,r_0 = NULL,z_0 = NULL;
  s_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_18);
  p_18 = t;
  t = q_18;
  t = t_75(t);
  r_18 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_18);
  r_0 = t;
  t = SSLsetAnnotations(r_0, p_18);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_18), term_t_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      t = fetch_1_0(o_3, t);
    }
  t = term_w_13;
  t = echo_0_0(t);
  t = term_i_11;
  v_18 = t;
  t = term_o_11;
  w_18 = t;
  t = term_x_13;
  t = g_5(v_18, w_18, t);
  t = reverse_acc_2_0(_id, q_3, t);
  t = map_1_0(r_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,b_1 = NULL,c_1 = NULL;
  b_19 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      z_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_19);
  y_18 = t;
  t = z_18;
  t = u_75(t);
  a_19 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_19);
  b_1 = t;
  t = SSLsetAnnotations(b_1, y_18);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_14 = ATgetFirst((ATermList) t);
                ATerm h_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_19;
          }
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = (ATerm) ATinsert(ATempty, f_19);
      }
    g_19 = t;
    t = term_c_8;
    h_19 = t;
    t = SSL_printnl(h_19, g_19);
    t = f_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_11;
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
ATerm t_3 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  t = term_i_14;
  l_19 = t;
  t = term_l_5;
  m_19 = t;
  t = term_j_14;
  t = j_5(l_19, m_19, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  t = term_i_14;
  n_19 = t;
  t = term_l_5;
  o_19 = t;
  t = term_j_14;
  t = j_5(n_19, o_19, t);
  t = term_l_14;
  p_19 = t;
  t = term_l_5;
  q_19 = t;
  t = term_n_14;
  t = j_5(p_19, q_19, t);
  t = term_r_14;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_3, t_3, v_3, t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      t = Option_3_0(x_3, y_3, a_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,d_1 = NULL,e_1 = NULL;
  w_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_19 = ATgetFirst((ATermList) t);
      t_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_19);
  r_19 = t;
  t = s_19;
  t = o_69(t);
  u_19 = t;
  t = t_19;
  t = p_69(t);
  v_19 = t;
  e_1 = t;
  t = (ATerm) ATinsert(CheckATermList(v_19), u_19);
  d_1 = t;
  t = SSLsetAnnotations(d_1, r_19);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  t = term_y_11;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, b_20);
  t = j_5(c_20, b_20, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, b_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_109 (ATerm), ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_15;
        t = l_109(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
      }
    t = a_20;
    {
      ATerm c_4 (ATerm t)
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_15 = t;
            int e_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_15);
              }
            else
              {
                t = d_15;
                t = l_109(t);
                t = Cons_2_0(_id, c_4, t);
              }
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm e_20 = NULL,f_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_20 = ATgetFirst((ATermList) t);
                  f_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_20), (ATerm) ATmakeAppl(sym_Undefined_1, e_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_4, c_4, t);
    }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  if(match_string(t, "--help"))
    {
      t = t_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_20;
        }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  t = term_i_13;
  u_20 = t;
  t = term_l_5;
  v_20 = t;
  t = term_h_15;
  t = j_5(u_20, v_20, t);
  t = term_i_15;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  m_20 = t;
  t = term_i_11;
  p_20 = t;
  t = term_o_11;
  q_20 = t;
  t = (ATerm) ATempty;
  r_20 = t;
  t = SSL_table_put(p_20, q_20, r_20);
  t = m_20;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_109(t);
          ;
          LocalPopChoice(l_15);
        }
      else
        {
          t = k_15;
          {
            ATerm n_15 = t;
            int o_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_4, g_4, i_4, t);
                ;
                LocalPopChoice(o_15);
              }
            else
              {
                t = n_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_4, t);
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_21 = NULL;
          c_21 = t;
          {
            ATerm v_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_3 = NULL;
                t = c_21;
                {
                  ATerm x_15 = t;
                  int y_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_13;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_15);
                    }
                  else
                    {
                      t = x_15;
                      t = fetch_1_0(j_4, t);
                    }
                  t = c_21;
                  t = default_system_usage_0_0(t);
                  t = term_k_10;
                  z_3 = t;
                  t = SSL_exit(z_3);
                }
                ;
                LocalPopChoice(w_15);
              }
            else
              {
                t = v_15;
                {
                  ATerm h_4 = NULL;
                  t = term_i_14;
                  t = get_config_0_0(t);
                  t = c_21;
                  t = default_system_about_0_0(t);
                  t = term_k_10;
                  h_4 = t;
                  t = SSL_exit(h_4);
                }
              }
          }
          ;
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          {
            ATerm z_15 = t;
            int a_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
                ATerm k_4 (ATerm t)
                {
                  ATerm l_4 (ATerm t)
                  {
                    if(((n_20 != NULL) && (n_20 != t)))
                      _fail(t);
                    else
                      n_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(l_4, t);
                  return(t);
                }
                t = fetch_1_0(k_4, t);
                t = term_m_5;
                d_21 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_20)), term_b_16);
                e_21 = t;
                t = SSL_printnl(d_21, e_21);
                t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_20)), term_b_16));
                t = default_system_usage_0_0(t);
                t = term_p_5;
                f_21 = t;
                t = SSL_exit(f_21);
                ;
                LocalPopChoice(a_16);
              }
            else
              {
                t = z_15;
              }
          }
        }
      o_20 = t;
      t = term_i_11;
      s_20 = t;
      t = SSL_table_destroy(s_20);
      t = o_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  t = parse_options_1_0(k_107, t);
  i_21 = t;
  t = term_c_16;
  j_21 = t;
  t = SSL_table_create(j_21);
  t = term_c_16;
  k_21 = t;
  t = term_e_16;
  l_21 = t;
  t = SSL_table_put(k_21, l_21, i_21);
  t = i_21;
  t = m_107(t);
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_107, t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
          ATerm h_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_16);
            }
          else
            {
              t = h_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = if_verbose2_1_0(f_5, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  t = term_q_16;
  m_21 = t;
  t = term_l_5;
  n_21 = t;
  t = term_t_16;
  t = j_5(m_21, n_21, t);
  t = term_u_16;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  o_21 = t;
  t = term_y_11;
  t = get_config_0_0(t);
  p_21 = t;
  t = term_m_5;
  q_21 = t;
  t = (ATerm) ATinsert(ATempty, p_21);
  r_21 = t;
  t = SSL_printnl(q_21, r_21);
  t = o_21;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm x_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_106(t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = x_16;
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(b_17);
            }
          else
            {
              t = a_17;
              {
                ATerm c_17 = t;
                int d_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(d_17);
                  }
                else
                  {
                    t = c_17;
                    {
                      ATerm e_17 = t;
                      int f_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_4, v_4, w_4, t);
                          ;
                          LocalPopChoice(f_17);
                        }
                      else
                        {
                          t = e_17;
                          {
                            ATerm g_17 = t;
                            int h_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(h_17);
                              }
                            else
                              {
                                t = g_17;
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
  ATerm q_4 (ATerm t)
  {
    ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
    s_21 = t;
    {
      ATerm i_17 = t;
      int j_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_21 != NULL) && (t_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_5, t);
          ;
          LocalPopChoice(j_17);
        }
      else
        {
          t = i_17;
          t = term_k_17;
          t_21 = t;
        }
      t = not_null(t_21);
      t = ReadFromFile_0_0(t);
      u_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, u_21);
      t = apply_strategy_1_0(t_106, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_4, v_106, o_4, q_4, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = _2_0(_id, MetaExplode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_5, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Path_2;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_j_19;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_q_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_a_9;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_0;
void init_constant_terms (void)
{
  ATprotect(&(term_y_0));
  term_y_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_g_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_y_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_j_12);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_y_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_y_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_y_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_s_17, term_y_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm explanation_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_2 (ATerm p_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_4 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm h_31, ATerm f_31, ATerm e_31, ATerm g_31, ATerm);
ATerm RepairVarDec_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm);
ATerm map1_1_0 (ATerm w_92 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm n_1 (ATerm);
ATerm t_1 (ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm _2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm);
ATerm h_4 (ATerm n_56, ATerm o_56, ATerm);
ATerm i_4 (ATerm b_60, ATerm c_60, ATerm);
ATerm k_4 (ATerm n_108 (ATerm), ATerm r_481, ATerm f_60, ATerm);
ATerm j_4 (ATerm x_59, ATerm y_59, ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm p_111 (ATerm), ATerm);
ATerm r_7 (ATerm h_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_4 (ATerm d_60, ATerm);
ATerm m_4 (ATerm p_56, ATerm q_56, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm w_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_93 (ATerm), ATerm);
ATerm g_4 (ATerm d_54, ATerm e_54, ATerm);
ATerm debug_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_109 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm h_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_4 (ATerm e_61, ATerm f_61, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_4 (ATerm w_45, ATerm x_45, ATerm v_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_4 (ATerm a_44, ATerm b_44, ATerm);
ATerm foldr_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_109 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm need_help_1_0 (ATerm n_112 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm p_4 (ATerm n_47, ATerm o_47, ATerm);
ATerm Program_1_0 (ATerm t_84 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_114 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm parse_options_1_0 (ATerm p_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm iowrap_3_0 (ATerm y_111 (ATerm), ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,k_0 = NULL,l_0 = NULL,n_0 = NULL;
  c_0 = t;
  t = term_y_0;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_z_6;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_7), e_0), term_a_7);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  t = term_c_7;
  n_0 = t;
  t = SSL_exit(n_0);
  t = c_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL;
  t = term_z_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATempty, term_d_7);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, term_d_7));
  return(t);
}
ATerm at_end_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_0, t);
        ;
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_93(t);
      }
    return(t);
  }
  t = z_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_7);
    }
  else
    {
      t = g_7;
      {
        ATerm s_0 = NULL,t_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_0 = ATgetFirst((ATermList) t);
            t_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_0;
        {
          ATerm b_1 (ATerm t)
          {
            t = t_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_1, t);
        }
      }
    }
  return(t);
}
ATerm j_2 (ATerm p_1, ATerm t)
{
  ATerm z_1 = NULL;
  t = SSL_explode_term(p_1);
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,f_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              t = d_2;
              return(t);
            }
            t = c_2;
            t = at_end_1_0(c_1, t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            t = j_2(f_2, t);
          }
      }
    }
  else
    {
      t = j_2(f_2, t);
    }
  return(t);
}
ATerm e_4 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm h_31, ATerm f_31, ATerm e_31, ATerm g_31, ATerm t)
{
  ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  k_2 = t;
  t = z_84(t);
  m_2 = t;
  t = k_2;
  t = a_85(t);
  n_2 = t;
  t = term_z_6;
  q_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_7), n_2), term_q_7), m_2), term_p_7), h_31), term_o_7);
  r_2 = t;
  t = SSL_printnl(q_2, r_2);
  t = (ATerm) ATmakeAppl(sym__2, e_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, f_31)));
  t = conc_0_0(t);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_31, (ATerm) ATmakeAppl(sym_FunType_2, p_2, g_31));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_2 = ATgetArgument(t, 0);
      {
        ATerm t_7 = ATgetArgument(t, 1);
        if(match_cons(t_7, sym_FunType_2))
          {
            ATerm v_7 = ATgetArgument(t_7, 0);
            if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
              {
                ATerm x_7 = ATgetFirst((ATermList) v_7);
                if(match_cons(x_7, sym_ConstType_1))
                  {
                    t_2 = ATgetArgument(x_7, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm y_7 = (ATerm) ATgetNext((ATermList) v_7);
                  u_2 = y_7;
                  if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
                    {
                      ATerm z_7 = ATgetFirst((ATermList) y_7);
                      if(match_cons(z_7, sym_FunType_2))
                        {
                          ATerm d_8 = ATgetArgument(z_7, 0);
                          ATerm e_8 = ATgetArgument(z_7, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm a_8 = (ATerm) ATgetNext((ATermList) y_7);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            v_2 = ATgetArgument(t_7, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_4(z_84, a_85, s_2, t_2, u_2, v_2, t);
  return(t);
}
ATerm map1_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(w_92, _id, t);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(w_92, t);
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
            }
          return(t);
        }
        t = Cons_2_0(_id, d_1, t);
      }
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm f_1 (ATerm t)
        {
          t = map1_1_0(w_92, t);
          return(t);
        }
        t = Cons_2_0(_id, f_1, t);
      }
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_j_8;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_j_8;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm c_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      e_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
      g_3 = ATgetArgument(t, 2);
      c_3 = ATgetArgument(t, 3);
      {
        ATerm o_3 = NULL;
        t = f_3;
        {
          ATerm g_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = e_3;
              return(t);
            }
            t = RepairVarDec_2_0(h_1, i_1, t);
            return(t);
          }
          t = map1_1_0(g_1, t);
          o_3 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, e_3, o_3, g_3, c_3);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          e_3 = ATgetArgument(t, 0);
          f_3 = ATgetArgument(t, 1);
          g_3 = ATgetArgument(t, 2);
          {
            ATerm v_3 = NULL;
            t = f_3;
            {
              ATerm j_1 (ATerm t)
              {
                ATerm l_1 (ATerm t)
                {
                  t = e_3;
                  return(t);
                }
                t = RepairVarDec_2_0(k_1, l_1, t);
                return(t);
              }
              t = map1_1_0(j_1, t);
              v_3 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, e_3, v_3, g_3);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_3 = ATgetArgument(t, 0);
              f_3 = ATgetArgument(t, 1);
              g_3 = ATgetArgument(t, 2);
              c_3 = ATgetArgument(t, 3);
              {
                ATerm y_4 = NULL;
                t = f_3;
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm o_1 (ATerm t)
                    {
                      t = e_3;
                      return(t);
                    }
                    t = RepairVarDec_2_0(n_1, o_1, t);
                    return(t);
                  }
                  t = map1_1_0(m_1, t);
                  y_4 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_3, y_4, g_3, c_3);
                }
              }
            }
          else
            {
              ATerm e_5 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  e_3 = ATgetArgument(t, 0);
                  f_3 = ATgetArgument(t, 1);
                  g_3 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_3;
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = e_3;
                    return(t);
                  }
                  t = RepairVarDec_2_0(t_1, u_1, t);
                  return(t);
                }
                t = map1_1_0(q_1, t);
                e_5 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, e_3, e_5, g_3);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_88(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = SRTS_some(f_5, t);
      }
    return(t);
  }
  t = f_5(t);
  return(t);
}
ATerm _2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm t)
{
  ATerm g_5 = NULL,i_5 = NULL,j_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,m_0 = NULL,q_0 = NULL;
  o_5 = t;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_5);
  g_5 = t;
  t = i_5;
  t = h_67(t);
  m_5 = t;
  t = j_5;
  t = i_67(t);
  n_5 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, n_5);
  m_0 = t;
  t = SSLsetAnnotations(m_0, g_5);
  return(t);
}
ATerm h_4 (ATerm n_56, ATerm o_56, ATerm t)
{
  ATerm w_5 = NULL;
  t = SSL_fputc(n_56, o_56);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_5);
  return(t);
}
ATerm i_4 (ATerm b_60, ATerm c_60, ATerm t)
{
  ATerm y_5 = NULL;
  t = SSL_write_term_to_stream_text(b_60, c_60);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_5);
  return(t);
}
ATerm k_4 (ATerm n_108 (ATerm), ATerm r_481, ATerm f_60, ATerm t)
{
  ATerm z_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_481, term_n_8);
  t = open_stream_0_0(t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_5, f_60);
  t = n_108(t);
  t = fclose_0_0(t);
  t = f_60;
  return(t);
}
ATerm j_4 (ATerm x_59, ATerm y_59, ATerm t)
{
  ATerm a_6 = NULL;
  t = SSL_write_term_to_stream_baf(x_59, y_59);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_6);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = fetch_1_0(g_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL;
  if(match_cons(t, sym__2))
    {
      g_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(h_2, g_6, h_6, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if(match_cons(o_8, sym_Stream_1))
        {
          j_6 = ATgetArgument(o_8, 0);
        }
      else
        _fail(t);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(j_6, k_6, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm l_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(l_2, l_6, n_6, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if(match_cons(p_8, sym_Stream_1))
        {
          q_6 = ATgetArgument(p_8, 0);
        }
      else
        _fail(t);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(q_6, r_6, t);
  p_6 = t;
  t = term_q_8;
  s_6 = t;
  t = p_6;
  if(match_cons(t, sym_Stream_1))
    {
      t_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, p_6);
  t = h_4(s_6, t_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL;
  c_6 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm r_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((d_6 != NULL) && (d_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_1, t);
          ;
          LocalPopChoice(s_8);
        }
      else
        {
          t = r_8;
          t = term_a_9;
          if(((d_6 != NULL) && (d_6 != t)))
            _fail(t);
          else
            d_6 = t;
        }
      return(t);
    }
    t = _2_0(x_1, _id, t);
    t = c_6;
    {
      ATerm a_2 (ATerm t)
      {
        ATerm f_6 = NULL;
        f_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), f_6);
        return(t);
      }
      t = _2_0(_id, a_2, t);
      {
        ATerm b_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(b_2, e_2, t);
            ;
            LocalPopChoice(d_9);
          }
        else
          {
            t = b_9;
            t = _2_0(_id, i_2, t);
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
ATerm apply_strategy_1_0 (ATerm p_111 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
  u_6 = t;
  t = dtime_0_0(t);
  t = u_6;
  t = p_111(t);
  v_6 = t;
  t = dtime_0_0(t);
  w_6 = t;
  t = v_6;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_6), (ATerm) ATmakeAppl(sym_Runtime_1, w_6)), y_6);
  return(t);
}
ATerm r_7 (ATerm h_7, ATerm t)
{
  t = SSL_fclose(h_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_7 = NULL,n_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_7 = ATgetArgument(t, 0);
      {
        ATerm e_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_7);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = e_9;
            t = r_7(n_7, t);
          }
      }
    }
  else
    {
      t = r_7(n_7, t);
    }
  return(t);
}
ATerm l_4 (ATerm d_60, ATerm t)
{
  t = SSL_read_term_from_stream(d_60);
  return(t);
}
ATerm m_4 (ATerm p_56, ATerm q_56, ATerm t)
{
  ATerm u_7 = NULL;
  t = SSL_fopen(p_56, q_56);
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_7);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_7 = NULL;
  t = SSL_stdin_stream();
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_8 = NULL;
  t = SSL_stdout_stream();
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_8 = NULL;
  t = SSL_stderr_stream();
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_8);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm w_8 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      w_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  t = SSL_is_string(z_8);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      ATerm j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL,e_1 = NULL;
        t_8 = t;
        t = SSL_explode_term(t_8);
        if(match_cons(t, sym__2))
          {
            ATerm p_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_9 = ATgetArgument(t, 1);
              if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
                {
                  e_1 = ATgetFirst((ATermList) r_9);
                  {
                    ATerm s_9 = (ATerm) ATgetNext((ATermList) r_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = k_9;
        {
          ATerm u_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_8 = NULL,v_8 = NULL;
              t = _2_0(o_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_8 = ATgetArgument(t, 0);
                  v_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_4(u_8, v_8, t);
              ;
              LocalPopChoice(w_9);
            }
          else
            {
              t = u_9;
              {
                ATerm x_8 = NULL,y_8 = NULL;
                t = _2_0(w_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_8 = ATgetArgument(t, 0);
                    y_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_4(x_8, y_8, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_9 = NULL,f_9 = NULL,h_9 = NULL;
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_9 = NULL;
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_9, term_a_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = debug_1_0(x_2, t);
      _fail(t);
    }
  c_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(h_9, t);
  f_9 = t;
  t = c_9;
  t = fclose_0_0(t);
  t = f_9;
  return(t);
}
ATerm fetch_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_93, _id, t);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        t = Cons_2_0(_id, n_9, t);
      }
    return(t);
  }
  t = n_9(t);
  return(t);
}
ATerm g_4 (ATerm d_54, ATerm e_54, ATerm t)
{
  t = SSL_strcat(d_54, e_54);
  return(t);
}
ATerm debug_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,q_9 = NULL,t_9 = NULL,v_9 = NULL;
  o_9 = t;
  t = l_108(t);
  q_9 = t;
  t = term_z_6;
  t_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_9), q_9);
  v_9 = t;
  t = SSL_printnl(t_9, v_9);
  t = o_9;
  return(t);
}
ATerm y_2 (ATerm t)
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
ATerm a_3 (ATerm t)
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
      ATerm d_10 = NULL;
      d_10 = t;
      t = SSL_is_string(d_10);
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
            t = map_1_0(y_2, t);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
              l_10 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_10 = ATgetArgument(t, 0);
                  t = m_10;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_10 = ATgetArgument(t, 0);
                      t = m_10;
                      {
                        ATerm o_10 = t;
                        int p_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_10);
                          }
                        else
                          {
                            t = o_10;
                            t = debug_1_0(a_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_10 = NULL,u_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_10 = ATgetArgument(t, 0);
                          n_10 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_10;
                      t = eval_config_0_0(t);
                      t_10 = t;
                      t = n_10;
                      t = eval_config_0_0(t);
                      u_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
                      t = g_4(t_10, u_10, t);
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
  ATerm y_10 = NULL,a_11 = NULL;
  y_10 = t;
  t = term_q_10;
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, y_10);
  t = p_4(a_11, y_10, t);
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL,e_11 = NULL;
        t = eval_config_0_0(t);
        b_11 = t;
        t = term_q_10;
        e_11 = t;
        t = SSL_table_put(e_11, y_10, b_11);
        t = b_11;
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11 = NULL,i_11 = NULL;
      f_11 = t;
      t = term_x_10;
      t = get_config_0_0(t);
      i_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_11, term_z_10);
      t = geq_0_0(t);
      t = f_11;
      t = y_109(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  if(match_string(t, "-k"))
    {
      t = k_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_11;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  t = SSL_string_to_int(l_11);
  m_11 = t;
  t = term_c_11;
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, m_11);
  t = s_4(n_11, m_11, t);
  t = l_11;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, d_3, h_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  if(match_string(t, "-S"))
    {
      t = p_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_11;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm q_11 = NULL,t_11 = NULL;
  t = term_x_10;
  q_11 = t;
  t = term_g_11;
  t_11 = t;
  t = term_h_11;
  t = s_4(q_11, t_11, t);
  t = term_j_11;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t = SSL_string_to_int(u_11);
  v_11 = t;
  t = term_x_10;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, v_11);
  t = s_4(w_11, v_11, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_11);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  t = term_s_11;
  x_11 = t;
  t = term_y_0;
  y_11 = t;
  t = term_z_11;
  t = s_4(x_11, y_11, t);
  t = term_b_12;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, k_3, l_3, t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_3, n_3, p_3, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = Option_3_0(q_3, r_3, s_3, t);
          }
      }
    }
  return(t);
}
ATerm s_4 (ATerm e_61, ATerm f_61, ATerm t)
{
  ATerm a_12 = NULL;
  t = term_q_10;
  a_12 = t;
  t = SSL_table_put(a_12, e_61, f_61);
  t = (ATerm) ATmakeAppl(sym__3, term_q_10, e_61, f_61);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,k_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
      t = term_y_0;
      t = d_0(t);
      l_12 = t;
      t = term_i_12;
      m_12 = t;
      t = term_j_12;
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, l_12);
      t = q_4(m_12, n_12, l_12, t);
      _fail(t);
    }
  else
    {
      ATerm r_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_12 = ATgetFirst((ATermList) t);
          k_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_12;
      t = a_0(t);
      t = term_y_0;
      t = b_0(t);
      r_12 = t;
      t = (ATerm) ATinsert(CheckATermList(k_12), r_12);
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  if(match_string(t, "-o"))
    {
      t = t_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_12;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm v_12 = NULL,y_12 = NULL;
  v_12 = t;
  t = term_o_12;
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_12, v_12);
  t = s_4(y_12, v_12, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_12);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, w_3, t);
  return(t);
}
ATerm q_4 (ATerm w_45, ATerm x_45, ATerm v_45, ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_45, x_45);
  {
    ATerm q_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_12 = ATgetArgument(t, 0);
            ATerm w_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_45, x_45);
        t = p_4(w_45, x_45, t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = q_12;
        t = (ATerm) ATempty;
      }
    b_13 = t;
    t = (ATerm) ATinsert(CheckATermList(b_13), v_45);
    c_13 = t;
    t = SSL_table_put(w_45, x_45, c_13);
    t = a_13;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_13 = NULL,s_13 = NULL,y_13 = NULL;
      t = term_y_0;
      t = j_0(t);
      r_13 = t;
      t = term_i_12;
      s_13 = t;
      t = term_j_12;
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, r_13);
      t = q_4(s_13, y_13, r_13, t);
      _fail(t);
    }
  else
    {
      ATerm g_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_13 = ATgetFirst((ATermList) t);
          o_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_13 = ATgetFirst((ATermList) t);
          q_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_13;
      t = h_0(t);
      t = p_13;
      t = i_0(t);
      g_14 = t;
      t = (ATerm) ATinsert(CheckATermList(q_13), g_14);
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  if(match_string(t, "-i"))
    {
      t = k_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_14;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm l_14 = NULL,p_14 = NULL;
  l_14 = t;
  t = term_x_12;
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, l_14);
  t = s_4(p_14, l_14, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_14);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, z_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_0;
  t = whoami_0_0(t);
  r_14 = t;
  t = term_z_6;
  u_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_13), r_14);
  v_14 = t;
  t = SSL_printnl(u_14, v_14);
  t = term_c_7;
  w_14 = t;
  t = SSL_exit(w_14);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_4 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_44, b_44);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = SSL_addr(a_44, b_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_97(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm z_14 = NULL,a_15 = NULL,d_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_14 = ATgetFirst((ATermList) t);
            a_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_15;
        t = foldr_2_0(v_97, w_97, t);
        d_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_14, d_15);
        t = w_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(v_1, w_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_15 = NULL,r_1 = NULL,s_1 = NULL;
  t = times_0_0(t);
  r_1 = t;
  t = SSL_explode_term(r_1);
  if(match_cons(t, sym__2))
    {
      ATerm j_13 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_1;
  t = foldr_2_0(a_4, b_4, t);
  g_15 = t;
  t = SSL_TicksToSeconds(g_15);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL;
  x_15 = t;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_16;
        if((a_16 != t))
          {
            _fail(t);
          }
        t = x_15;
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = k_13;
        t = (ATerm) ATmakeAppl(sym__2, a_16, b_16);
        {
          ATerm n_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_16, b_16);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = n_13;
              t = SSL_gtr(a_16, b_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_16, b_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL,h_16 = NULL;
      f_16 = t;
      t = term_x_10;
      t = get_config_0_0(t);
      h_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_16, term_c_7);
      t = geq_0_0(t);
      t = f_16;
      t = x_109(t);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  t = run_time_0_0(t);
  j_16 = t;
  t = term_y_0;
  t = whoami_0_0(t);
  k_16 = t;
  t = term_z_6;
  l_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_13), j_16), term_w_13), k_16);
  m_16 = t;
  t = SSL_printnl(l_16, m_16);
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_13), j_16), term_w_13), k_16));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_11;
  n_16 = t;
  t = SSL_exit(n_16);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_112 (ATerm), ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      t = fetch_1_0(d_4, t);
    }
  t = n_112(t);
  return(t);
}
ATerm map_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm o_16 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = Cons_2_0(u_92, o_16, t);
      }
    return(t);
  }
  t = o_16(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_16 = ATgetFirst((ATermList) t);
      r_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_16 = NULL,w_16 = NULL;
        t = r_16;
        t = g_0(t);
        v_16 = t;
        t = q_16;
        t = f_0(t);
        w_16 = t;
        t = r_16;
        {
          ATerm f_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_16), w_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_0;
      t = g_0(t);
    }
  return(t);
}
ATerm p_4 (ATerm n_47, ATerm o_47, ATerm t)
{
  t = SSL_table_get(n_47, o_47);
  return(t);
}
ATerm Program_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,r_0 = NULL,u_0 = NULL;
  b_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  y_16 = t;
  t = z_16;
  t = t_84(t);
  a_17 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_17);
  r_0 = t;
  t = SSLsetAnnotations(r_0, y_16);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm g_17 = NULL;
  g_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_17), term_j_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = fetch_1_0(o_4, t);
    }
  t = term_o_14;
  t = echo_0_0(t);
  t = term_i_12;
  e_17 = t;
  t = term_j_12;
  f_17 = t;
  t = term_q_14;
  t = p_4(e_17, f_17, t);
  t = reverse_acc_2_0(_id, r_4, t);
  t = map_1_0(t_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,v_0 = NULL,w_0 = NULL;
  k_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_17);
  h_17 = t;
  t = i_17;
  t = u_84(t);
  j_17 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_17);
  v_0 = t;
  t = SSLsetAnnotations(v_0, h_17);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_14 = ATgetFirst((ATermList) t);
                ATerm y_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_17;
          }
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = (ATerm) ATinsert(ATempty, o_17);
      }
    p_17 = t;
    t = term_a_9;
    q_17 = t;
    t = SSL_printnl(q_17, p_17);
    t = o_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  t = term_b_15;
  u_17 = t;
  t = term_y_0;
  v_17 = t;
  t = term_c_15;
  t = s_4(u_17, v_17, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_e_15;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  t = term_b_15;
  w_17 = t;
  t = term_y_0;
  x_17 = t;
  t = term_c_15;
  t = s_4(w_17, x_17, t);
  t = term_f_15;
  y_17 = t;
  t = term_y_0;
  z_17 = t;
  t = term_h_15;
  t = s_4(y_17, z_17, t);
  t = term_i_15;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, v_4, w_4, t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = Option_3_0(x_4, z_4, a_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,x_0 = NULL,a_1 = NULL;
  f_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_18 = ATgetFirst((ATermList) t);
      c_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  a_18 = t;
  t = b_18;
  t = w_71(t);
  d_18 = t;
  t = c_18;
  t = x_71(t);
  e_18 = t;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(e_18), d_18);
  x_0 = t;
  t = SSLsetAnnotations(x_0, a_18);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  k_18 = t;
  t = term_e_13;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, k_18);
  t = s_4(l_18, k_18, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, k_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_114 (ATerm), ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_15;
        t = q_114(t);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
      }
    t = j_18;
    {
      ATerm c_5 (ATerm t)
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_15);
              }
            else
              {
                t = r_15;
                t = q_114(t);
                t = Cons_2_0(_id, c_5, t);
              }
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm n_18 = NULL,o_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_18 = ATgetFirst((ATermList) t);
                  o_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_18), (ATerm) ATmakeAppl(sym_Undefined_1, n_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_5, c_5, t);
    }
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  if(match_string(t, "--help"))
    {
      t = c_19;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_19;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_19;
        }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  t = term_f_14;
  d_19 = t;
  t = term_y_0;
  e_19 = t;
  t = term_t_15;
  t = s_4(d_19, e_19, t);
  t = term_u_15;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  v_18 = t;
  t = term_i_12;
  y_18 = t;
  t = term_j_12;
  z_18 = t;
  t = (ATerm) ATempty;
  a_19 = t;
  t = SSL_table_put(y_18, z_18, a_19);
  t = v_18;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm w_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_114(t);
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
                t = Option_3_0(h_5, k_5, l_5, t);
                ;
                LocalPopChoice(c_16);
              }
            else
              {
                t = z_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_5, t);
    {
      ATerm d_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_19 = NULL;
          l_19 = t;
          {
            ATerm g_16 = t;
            int i_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_2 = NULL;
                t = l_19;
                {
                  ATerm p_16 = t;
                  int s_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_16);
                    }
                  else
                    {
                      t = p_16;
                      t = fetch_1_0(p_5, t);
                    }
                  t = l_19;
                  t = default_system_usage_0_0(t);
                  t = term_g_11;
                  z_2 = t;
                  t = SSL_exit(z_2);
                }
                ;
                LocalPopChoice(i_16);
              }
            else
              {
                t = g_16;
                {
                  ATerm j_3 = NULL;
                  t = term_b_15;
                  t = get_config_0_0(t);
                  t = l_19;
                  t = default_system_about_0_0(t);
                  t = term_g_11;
                  j_3 = t;
                  t = SSL_exit(j_3);
                }
              }
          }
          ;
          LocalPopChoice(e_16);
        }
      else
        {
          t = d_16;
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
                ATerm q_5 (ATerm t)
                {
                  ATerm r_5 (ATerm t)
                  {
                    if(((w_18 != NULL) && (w_18 != t)))
                      _fail(t);
                    else
                      w_18 = t;
                    return(t);
                  }
                  t = Undefined_1_0(r_5, t);
                  return(t);
                }
                t = fetch_1_0(q_5, t);
                t = term_z_6;
                m_19 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_18)), term_x_16);
                n_19 = t;
                t = SSL_printnl(m_19, n_19);
                t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_18)), term_x_16));
                t = default_system_usage_0_0(t);
                t = term_c_7;
                o_19 = t;
                t = SSL_exit(o_19);
                ;
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
              }
          }
        }
      x_18 = t;
      t = term_i_12;
      b_19 = t;
      t = SSL_table_destroy(b_19);
      t = x_18;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  t = parse_options_1_0(p_112, t);
  r_19 = t;
  t = term_c_17;
  s_19 = t;
  t = SSL_table_create(s_19);
  t = term_c_17;
  t_19 = t;
  t = term_d_17;
  u_19 = t;
  t = SSL_table_put(t_19, u_19, r_19);
  t = r_19;
  t = r_112(t);
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_112, t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        {
          ATerm n_17 = t;
          int r_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_17);
            }
          else
            {
              t = n_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = if_verbose2_1_0(e_6, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  t = term_s_17;
  v_19 = t;
  t = term_y_0;
  w_19 = t;
  t = term_t_17;
  t = s_4(v_19, w_19, t);
  t = term_g_18;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  x_19 = t;
  t = term_e_13;
  t = get_config_0_0(t);
  y_19 = t;
  t = term_z_6;
  z_19 = t;
  t = (ATerm) ATinsert(ATempty, y_19);
  a_20 = t;
  t = SSL_printnl(z_19, a_20);
  t = x_19;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_111 (ATerm), ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm i_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_111(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = i_18;
        {
          ATerm p_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_18);
            }
          else
            {
              t = p_18;
              {
                ATerm r_18 = t;
                int s_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_18);
                  }
                else
                  {
                    t = r_18;
                    {
                      ATerm t_18 = t;
                      int u_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_5, x_5, b_6, t);
                          ;
                          LocalPopChoice(u_18);
                        }
                      else
                        {
                          t = t_18;
                          {
                            ATerm f_19 = t;
                            int g_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(g_19);
                              }
                            else
                              {
                                t = f_19;
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
  ATerm u_5 (ATerm t)
  {
    ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
    b_20 = t;
    {
      ATerm h_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_20 != NULL) && (c_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_6, t);
          ;
          LocalPopChoice(i_19);
        }
      else
        {
          t = h_19;
          t = term_j_19;
          c_20 = t;
        }
      t = not_null(c_20);
      t = ReadFromFile_0_0(t);
      d_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_20, d_20);
      t = apply_strategy_1_0(y_111, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(s_5, a_112, t_5, u_5, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = _2_0(_id, o_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm k_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_20 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      e_20 = t;
      t = explanation_0_0(t);
      t = e_20;
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = k_19;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_6, _fail, default_usage_0_0, t);
  return(t);
}

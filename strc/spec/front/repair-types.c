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
ATerm term_z_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_d_10;
ATerm term_v_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_j_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_y_0;
void init_constant_terms (void)
{
  ATprotect(&(term_y_0));
  term_y_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_o_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_y_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_e_11);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_y_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_y_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_y_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_y_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm explanation_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_2 (ATerm n_2, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_4 (ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm s_18, ATerm q_18, ATerm p_18, ATerm r_18, ATerm);
ATerm RepairVarDec_2_0 (ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm);
ATerm map1_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm a_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm u_75 (ATerm), ATerm);
ATerm h_4 (ATerm a_44, ATerm b_44, ATerm);
ATerm i_4 (ATerm o_47, ATerm p_47, ATerm);
ATerm k_4 (ATerm g_96 (ATerm), ATerm c_452, ATerm s_47, ATerm);
ATerm j_4 (ATerm k_47, ATerm l_47, ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm x_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm e_13 (ATerm v_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_4 (ATerm q_47, ATerm);
ATerm m_4 (ATerm c_44, ATerm d_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_15 (ATerm c_14, ATerm);
ATerm x_15 (ATerm g_14, ATerm h_14, ATerm j_14, ATerm);
ATerm b_16 (ATerm t_14, ATerm w_14, ATerm z_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm g_4 (ATerm q_41, ATerm r_41, ATerm);
ATerm debug_1_0 (ATerm e_96 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_4 (ATerm r_48, ATerm s_48, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_4 (ATerm h_33, ATerm i_33, ATerm g_33, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_4 (ATerm l_31, ATerm m_31, ATerm);
ATerm foldr_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm need_help_1_0 (ATerm g_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm p_4 (ATerm y_34, ATerm z_34, ATerm);
ATerm d_4 (ATerm);
ATerm o_4 (ATerm);
ATerm u_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm c_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_102 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm parse_options_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm iowrap_3_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,l_0 = NULL,m_0 = NULL;
  a_0 = t;
  t = term_y_0;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_l_6;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_6), c_0), term_m_6);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t = term_r_6;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm n_0 = NULL,p_0 = NULL;
  t = term_l_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATempty, term_s_6);
  p_0 = t;
  t = SSL_printnl(n_0, p_0);
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATempty, term_s_6));
  return(t);
}
ATerm at_end_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm d_2 = NULL,e_2 = NULL,g_2 = NULL;
    g_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_2 = ATgetFirst((ATermList) t);
        e_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_0 = NULL,b_1 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(g_2);
          w_0 = t;
          t = e_2;
          t = h_2(t);
          b_1 = t;
          t = (ATerm) ATinsert(CheckATermList(b_1), d_2);
          d_1 = t;
          t = SSLsetAnnotations(d_1, w_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_2;
        t = x_80(t);
      }
    return(t);
  }
  t = h_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  r_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_0;
    }
  else
    {
      ATerm o_0 (ATerm t)
      {
        t = not_null(t_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_0 = ATgetFirst((ATermList) t);
          if(((t_0 != NULL) && (t_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_0;
      t = at_end_1_0(o_0, t);
    }
  return(t);
}
ATerm y_2 (ATerm n_2, ATerm t)
{
  ATerm o_2 = NULL;
  t = SSL_explode_term(n_2);
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  t_2 = t;
  if(match_cons(t, sym__2))
    {
      r_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
      {
        ATerm u_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = s_2;
              return(t);
            }
            t = r_2;
            t = at_end_1_0(q_0, t);
            ;
            LocalPopChoice(w_6);
          }
        else
          {
            t = u_6;
            t = y_2(t_2, t);
          }
      }
    }
  else
    {
      t = y_2(t_2, t);
    }
  return(t);
}
ATerm e_4 (ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm s_18, ATerm q_18, ATerm p_18, ATerm r_18, ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  c_3 = t;
  t = m_72(t);
  d_3 = t;
  t = c_3;
  t = n_72(t);
  e_3 = t;
  t = term_l_6;
  f_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_7), e_3), term_z_6), d_3), term_y_6), s_18), term_x_6);
  g_3 = t;
  t = SSL_printnl(f_3, g_3);
  t = (ATerm) ATmakeAppl(sym__2, p_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, q_18)));
  t = conc_0_0(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_18, (ATerm) ATmakeAppl(sym_FunType_2, a_3, r_18));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_3 = ATgetArgument(t, 0);
      {
        ATerm c_7 = ATgetArgument(t, 1);
        if(match_cons(c_7, sym_FunType_2))
          {
            ATerm d_7 = ATgetArgument(c_7, 0);
            if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
              {
                ATerm f_7 = ATgetFirst((ATermList) d_7);
                if(match_cons(f_7, sym_ConstType_1))
                  {
                    k_3 = ATgetArgument(f_7, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_7 = (ATerm) ATgetNext((ATermList) d_7);
                  m_3 = g_7;
                  if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
                    {
                      ATerm h_7 = ATgetFirst((ATermList) g_7);
                      if(match_cons(h_7, sym_FunType_2))
                        {
                          ATerm j_7 = ATgetArgument(h_7, 0);
                          ATerm k_7 = ATgetArgument(h_7, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_7 = (ATerm) ATgetNext((ATermList) g_7);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            n_3 = ATgetArgument(c_7, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_4(m_72, n_72, j_3, k_3, m_3, n_3, t);
  return(t);
}
ATerm map1_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm w_5 = NULL,a_6 = NULL,b_6 = NULL;
  w_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_6 = ATgetFirst((ATermList) t);
      b_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL,u_1 = NULL,w_1 = NULL,p_1 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(w_5);
        r_1 = t;
        t = a_6;
        t = j_80(t);
        u_1 = t;
        t = (ATerm) ATinsert(CheckATermList(b_6), u_1);
        o_1 = t;
        t = SSLsetAnnotations(o_1, r_1);
        w_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_1 = ATgetFirst((ATermList) t);
            n_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_1);
        l_1 = t;
        t = n_1;
        {
          ATerm o_7 = t;
          int p_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(j_80, t);
              ;
              LocalPopChoice(p_7);
            }
          else
            {
              t = o_7;
            }
          q_1 = t;
          t = (ATerm) ATinsert(CheckATermList(q_1), m_1);
          p_1 = t;
          t = SSLsetAnnotations(p_1, l_1);
        }
        ;
        LocalPopChoice(n_7);
      }
    else
      {
        t = l_7;
        {
          ATerm w_2 = NULL,b_3 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(w_5);
          w_2 = t;
          t = b_6;
          t = map1_1_0(j_80, t);
          b_3 = t;
          t = (ATerm) ATinsert(CheckATermList(b_3), a_6);
          v_1 = t;
          t = SSLsetAnnotations(v_1, w_2);
        }
      }
  }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_q_7;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_q_7;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_s_7;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_s_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm k_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      n_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
      q_6 = ATgetArgument(t, 2);
      k_6 = ATgetArgument(t, 3);
      {
        ATerm e_7 = NULL;
        t = o_6;
        {
          ATerm u_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              t = n_6;
              return(t);
            }
            t = RepairVarDec_2_0(v_0, x_0, t);
            return(t);
          }
          t = map1_1_0(u_0, t);
          e_7 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, n_6, e_7, q_6, k_6);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          n_6 = ATgetArgument(t, 0);
          o_6 = ATgetArgument(t, 1);
          q_6 = ATgetArgument(t, 2);
          {
            ATerm m_7 = NULL;
            t = o_6;
            {
              ATerm z_0 (ATerm t)
              {
                ATerm c_1 (ATerm t)
                {
                  t = n_6;
                  return(t);
                }
                t = RepairVarDec_2_0(a_1, c_1, t);
                return(t);
              }
              t = map1_1_0(z_0, t);
              m_7 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, n_6, m_7, q_6);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_6 = ATgetArgument(t, 0);
              o_6 = ATgetArgument(t, 1);
              q_6 = ATgetArgument(t, 2);
              k_6 = ATgetArgument(t, 3);
              {
                ATerm r_7 = NULL;
                t = o_6;
                {
                  ATerm e_1 (ATerm t)
                  {
                    ATerm g_1 (ATerm t)
                    {
                      t = n_6;
                      return(t);
                    }
                    t = RepairVarDec_2_0(f_1, g_1, t);
                    return(t);
                  }
                  t = map1_1_0(e_1, t);
                  r_7 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_6, r_7, q_6, k_6);
                }
              }
            }
          else
            {
              ATerm v_7 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  n_6 = ATgetArgument(t, 0);
                  o_6 = ATgetArgument(t, 1);
                  q_6 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = o_6;
              {
                ATerm h_1 (ATerm t)
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = n_6;
                    return(t);
                  }
                  t = RepairVarDec_2_0(i_1, j_1, t);
                  return(t);
                }
                t = map1_1_0(h_1, t);
                v_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, n_6, v_7, q_6);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_75(t);
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        t = SRTS_some(w_7, t);
      }
    return(t);
  }
  t = w_7(t);
  return(t);
}
ATerm h_4 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm x_7 = NULL;
  t = SSL_fputc(a_44, b_44);
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_7);
  return(t);
}
ATerm i_4 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm y_7 = NULL;
  t = SSL_write_term_to_stream_text(o_47, p_47);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_7);
  return(t);
}
ATerm k_4 (ATerm g_96 (ATerm), ATerm c_452, ATerm s_47, ATerm t)
{
  ATerm g_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_452, term_a_8);
  t = open_stream_0_0(t);
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_8, s_47);
  t = g_96(t);
  t = fclose_0_0(t);
  t = s_47;
  return(t);
}
ATerm j_4 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm h_8 = NULL;
  t = SSL_write_term_to_stream_baf(k_47, l_47);
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_8);
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm y_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Stream_1))
        {
          y_3 = ATgetArgument(b_8, 0);
        }
      else
        _fail(t);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(y_3, a_4, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm p_5 = NULL,s_5 = NULL,t_5 = NULL,x_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if(match_cons(d_8, sym_Stream_1))
        {
          x_5 = ATgetArgument(d_8, 0);
        }
      else
        _fail(t);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(x_5, y_5, t);
  p_5 = t;
  t = term_e_8;
  s_5 = t;
  t = p_5;
  if(match_cons(t, sym_Stream_1))
    {
      t_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, p_5);
  t = h_4(s_5, t_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,b_9 = NULL,d_9 = NULL,k_9 = NULL,p_9 = NULL,r_9 = NULL,s_9 = NULL,v_11 = NULL,w_11 = NULL,z_3 = NULL,i_2 = NULL;
  w_8 = t;
  if(match_cons(t, sym__2))
    {
      p_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  k_9 = t;
  t = p_9;
  {
    ATerm f_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_1, t);
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = f_8;
        t = term_j_8;
        v_8 = t;
      }
    s_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_9, r_9);
    i_2 = t;
    t = SSLsetAnnotations(i_2, k_9);
    t = w_8;
    if(match_cons(t, sym__2))
      {
        y_8 = ATgetArgument(t, 0);
        b_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_8);
    x_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_8, (ATerm) ATmakeAppl(sym__2, not_null(v_8), b_9));
    z_3 = t;
    t = SSLsetAnnotations(z_3, x_8);
    d_9 = t;
    if(match_cons(t, sym__2))
      {
        v_11 = ATgetArgument(t, 0);
        w_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_8 = t;
      int l_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,f_4 = NULL;
          t = SSLgetAnnotations(d_9);
          r_3 = t;
          t = v_11;
          t = fetch_1_0(s_1, t);
          u_3 = t;
          t = w_11;
          if(match_cons(t, sym__2))
            {
              w_3 = ATgetArgument(t, 0);
              x_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_4(t_1, w_3, x_3, t);
          v_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_3, v_3);
          f_4 = t;
          t = SSLsetAnnotations(f_4, r_3);
          ;
          LocalPopChoice(l_8);
        }
      else
        {
          t = k_8;
          {
            ATerm r_4 = NULL,e_5 = NULL,f_5 = NULL,o_5 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(d_9);
            r_4 = t;
            t = w_11;
            if(match_cons(t, sym__2))
              {
                f_5 = ATgetArgument(t, 0);
                o_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_4(x_1, f_5, o_5, t);
            e_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_11, e_5);
            t_4 = t;
            t = SSLsetAnnotations(t_4, r_4);
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
ATerm apply_strategy_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  i_12 = t;
  t = dtime_0_0(t);
  t = i_12;
  t = i_99(t);
  h_12 = t;
  t = dtime_0_0(t);
  b_12 = t;
  t = h_12;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_12), (ATerm) ATmakeAppl(sym_Runtime_1, b_12)), g_12);
  return(t);
}
ATerm e_13 (ATerm v_12, ATerm t)
{
  t = SSL_fclose(v_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_13 = ATgetArgument(t, 0);
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_13);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            t = e_13(b_13, t);
          }
      }
    }
  else
    {
      t = e_13(b_13, t);
    }
  return(t);
}
ATerm l_4 (ATerm q_47, ATerm t)
{
  t = SSL_read_term_from_stream(q_47);
  return(t);
}
ATerm m_4 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_fopen(c_44, d_44);
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_stdin_stream();
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_13 = NULL;
  t = SSL_stdout_stream();
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_13 = NULL;
  t = SSL_stderr_stream();
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_13);
  return(t);
}
ATerm w_15 (ATerm c_14, ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_explode_term(c_14);
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_8 = ATgetArgument(t, 1);
        if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
          {
            d_14 = ATgetFirst((ATermList) p_8);
            {
              ATerm q_8 = (ATerm) ATgetNext((ATermList) p_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_15 (ATerm g_14, ATerm h_14, ATerm j_14, ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,o_14 = NULL,r_14 = NULL,a_5 = NULL;
  t = SSLgetAnnotations(j_14);
  o_14 = t;
  t = g_14;
  if(match_cons(t, sym_Path_1))
    {
      r_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_14, h_14);
  a_5 = t;
  t = SSLsetAnnotations(a_5, o_14);
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(k_14, l_14, t);
  return(t);
}
ATerm b_16 (ATerm t_14, ATerm w_14, ATerm z_14, ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,p_15 = NULL,b_5 = NULL;
  t = SSLgetAnnotations(z_14);
  c_15 = t;
  t = SSL_is_string(t_14);
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_15, w_14);
  b_5 = t;
  t = SSLsetAnnotations(b_5, c_15);
  if(match_cons(t, sym__2))
    {
      a_15 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(a_15, b_15, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      ATerm c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  r_15 = t;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_15(r_15, t);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
              ATerm g_9 = t;
              int h_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_15(s_15, v_15, r_15, t);
                  ;
                  LocalPopChoice(h_9);
                }
              else
                {
                  t = g_9;
                  t = b_16(s_15, v_15, r_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_15(r_15, t);
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_i_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,n_16 = NULL;
  ATerm j_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_16 = NULL;
      o_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_16, term_m_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = j_9;
      t = debug_1_0(y_1, t);
      _fail(t);
    }
  g_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(n_16, t);
  f_16 = t;
  t = g_16;
  t = fclose_0_0(t);
  t = f_16;
  return(t);
}
ATerm fetch_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm e_19 (ATerm t)
  {
    ATerm w_18 = NULL,x_18 = NULL,b_19 = NULL;
    w_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_18 = ATgetFirst((ATermList) t);
        b_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_6 = NULL,a_7 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(w_18);
          v_6 = t;
          t = x_18;
          t = r_80(t);
          a_7 = t;
          t = (ATerm) ATinsert(CheckATermList(b_19), a_7);
          g_5 = t;
          t = SSLsetAnnotations(g_5, v_6);
          ;
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm z_7 = NULL,c_8 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(w_18);
            z_7 = t;
            t = b_19;
            t = e_19(t);
            c_8 = t;
            t = (ATerm) ATinsert(CheckATermList(c_8), x_18);
            h_5 = t;
            t = SSLsetAnnotations(h_5, z_7);
          }
        }
    }
    return(t);
  }
  t = e_19(t);
  return(t);
}
ATerm g_4 (ATerm q_41, ATerm r_41, ATerm t)
{
  t = SSL_strcat(q_41, r_41);
  return(t);
}
ATerm debug_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  h_19 = t;
  t = e_96(t);
  i_19 = t;
  t = term_l_6;
  j_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_19), i_19);
  k_19 = t;
  t = SSL_printnl(j_19, k_19);
  t = h_19;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm q_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = q_9;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 = NULL;
      s_19 = t;
      t = SSL_is_string(s_19);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_1, t);
            ;
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            {
              ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
              y_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_19 = ATgetArgument(t, 0);
                  t = z_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_19 = ATgetArgument(t, 0);
                      t = z_19;
                      {
                        ATerm b_10 = t;
                        int c_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_10);
                          }
                        else
                          {
                            t = b_10;
                            t = debug_1_0(a_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_20 = NULL,f_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_19 = ATgetArgument(t, 0);
                          a_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_19;
                      t = eval_config_0_0(t);
                      e_20 = t;
                      t = a_20;
                      t = eval_config_0_0(t);
                      f_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_20, f_20);
                      t = g_4(e_20, f_20, t);
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
  ATerm j_20 = NULL,k_20 = NULL;
  j_20 = t;
  t = term_d_10;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, j_20);
  t = p_4(k_20, j_20, t);
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_20 = NULL,m_20 = NULL;
        t = eval_config_0_0(t);
        l_20 = t;
        t = term_d_10;
        m_20 = t;
        t = SSL_table_put(m_20, j_20, l_20);
        t = l_20;
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_20 = NULL;
        t = term_i_10;
        t = get_config_0_0(t);
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_20, term_k_10);
        t = geq_0_0(t);
        t = q_20;
        t = r_97(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = q_20;
      }
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm v_20 = NULL;
  v_20 = t;
  if(match_string(t, "-k"))
    {
      t = v_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_20;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  t = SSL_string_to_int(w_20);
  x_20 = t;
  t = term_l_10;
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, x_20);
  t = s_4(y_20, x_20, t);
  t = w_20;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_2, c_2, f_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  if(match_string(t, "-S"))
    {
      t = a_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_21;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  t = term_i_10;
  b_21 = t;
  t = term_o_10;
  c_21 = t;
  t = term_q_10;
  t = s_4(b_21, c_21, t);
  t = term_r_10;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  t = SSL_string_to_int(d_21);
  e_21 = t;
  t = term_i_10;
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, e_21);
  t = s_4(f_21, e_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_21);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  t = term_u_10;
  g_21 = t;
  t = term_y_0;
  h_21 = t;
  t = term_v_10;
  t = s_4(g_21, h_21, t);
  t = term_w_10;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_2, k_2, l_2, t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, p_2, q_2, t);
            ;
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            t = Option_3_0(u_2, v_2, x_2, t);
          }
      }
    }
  return(t);
}
ATerm s_4 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm i_21 = NULL;
  t = term_d_10;
  i_21 = t;
  t = SSL_table_put(i_21, r_48, s_48);
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, r_48, s_48);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
      t = term_y_0;
      t = f_0(t);
      n_21 = t;
      t = term_c_11;
      o_21 = t;
      t = term_e_11;
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_11, term_e_11, n_21);
      t = q_4(o_21, p_21, n_21, t);
      _fail(t);
    }
  else
    {
      ATerm s_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_21 = ATgetFirst((ATermList) t);
          m_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_21;
      t = b_0(t);
      t = term_y_0;
      t = d_0(t);
      s_21 = t;
      t = (ATerm) ATinsert(CheckATermList(m_21), s_21);
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  if(match_string(t, "-o"))
    {
      t = u_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_21;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  t = term_f_11;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, v_21);
  t = s_4(w_21, v_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_21);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, h_3, i_3, t);
  return(t);
}
ATerm q_4 (ATerm h_33, ATerm i_33, ATerm g_33, ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_33, i_33);
  {
    ATerm h_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            ATerm l_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_33, i_33);
        t = p_4(h_33, i_33, t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATempty;
      }
    z_21 = t;
    t = (ATerm) ATinsert(CheckATermList(z_21), g_33);
    a_22 = t;
    t = SSL_table_put(h_33, i_33, a_22);
    t = y_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
      t = term_y_0;
      t = k_0(t);
      l_22 = t;
      t = term_c_11;
      m_22 = t;
      t = term_e_11;
      n_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_11, term_e_11, l_22);
      t = q_4(m_22, n_22, l_22, t);
      _fail(t);
    }
  else
    {
      ATerm r_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_22 = ATgetFirst((ATermList) t);
          i_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_22 = ATgetFirst((ATermList) t);
          k_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_22;
      t = i_0(t);
      t = j_22;
      t = j_0(t);
      r_22 = t;
      t = (ATerm) ATinsert(CheckATermList(k_22), r_22);
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  if(match_string(t, "-i"))
    {
      t = t_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_22;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  u_22 = t;
  t = term_m_11;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, u_22);
  t = s_4(v_22, u_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_22);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, o_3, p_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_0;
  t = whoami_0_0(t);
  w_22 = t;
  t = term_l_6;
  y_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_11), w_22);
  z_22 = t;
  t = SSL_printnl(y_22, z_22);
  t = term_r_6;
  x_22 = t;
  t = SSL_exit(x_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_4 (ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_31, m_31);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = SSL_addr(l_31, m_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_23;
      t = i_85(t);
    }
  else
    {
      ATerm g_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_23 = ATgetFirst((ATermList) t);
          d_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_23;
      t = foldr_2_0(i_85, j_85, t);
      g_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_23, g_23);
      t = j_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(z_8, a_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_23 = NULL,r_8 = NULL,s_8 = NULL;
  t = times_0_0(t);
  s_8 = t;
  t = SSL_explode_term(s_8);
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = foldr_2_0(q_3, s_3, t);
  j_23 = t;
  t = SSL_TicksToSeconds(j_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_23;
        if((v_23 != t))
          {
            _fail(t);
          }
        t = u_23;
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_23, w_23);
              ;
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              t = SSL_gtr(v_23, w_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 = NULL;
        t = term_i_10;
        t = get_config_0_0(t);
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_24, term_r_6);
        t = geq_0_0(t);
        t = a_24;
        t = q_97(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = a_24;
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,h_24 = NULL,i_24 = NULL;
  t = run_time_0_0(t);
  e_24 = t;
  t = term_y_0;
  t = whoami_0_0(t);
  f_24 = t;
  t = term_l_6;
  h_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_12), e_24), term_c_12), f_24);
  i_24 = t;
  t = SSL_printnl(h_24, i_24);
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_12), e_24), term_c_12), f_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_10;
  j_24 = t;
  t = SSL_exit(j_24);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  s_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_24 = ATgetArgument(t, 0);
          {
            ATerm w_9 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(s_24);
            w_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_24);
            k_5 = t;
            t = SSLsetAnnotations(k_5, w_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_100 (ATerm), ATerm t)
{
  ATerm e_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = e_12;
      t = fetch_1_0(b_4, t);
    }
  t = g_100(t);
  return(t);
}
ATerm map_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm i_25 (ATerm t)
  {
    ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
    f_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_25;
      }
    else
      {
        ATerm j_10 = NULL,n_10 = NULL,p_10 = NULL,m_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_25 = ATgetFirst((ATermList) t);
            h_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_25);
        j_10 = t;
        t = g_25;
        t = h_80(t);
        n_10 = t;
        t = h_25;
        t = i_25(t);
        p_10 = t;
        t = (ATerm) ATinsert(CheckATermList(p_10), n_10);
        m_5 = t;
        t = SSLsetAnnotations(m_5, j_10);
      }
    return(t);
  }
  t = i_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_25 = ATgetFirst((ATermList) t);
      m_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_25 = NULL,r_25 = NULL;
        ATerm c_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_25)), not_null(r_25));
          return(t);
        }
        t = m_25;
        t = h_0(t);
        if(((q_25 != NULL) && (q_25 != t)))
          _fail(t);
        else
          q_25 = t;
        t = l_25;
        t = g_0(t);
        if(((r_25 != NULL) && (r_25 != t)))
          _fail(t);
        else
          r_25 = t;
        t = m_25;
        t = reverse_acc_2_0(g_0, c_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_0;
      t = h_0(t);
    }
  return(t);
}
ATerm p_4 (ATerm y_34, ATerm z_34, ATerm t)
{
  t = SSL_table_get(y_34, z_34);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,q_5 = NULL;
  c_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_26);
  q_5 = t;
  t = SSLsetAnnotations(q_5, a_26);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_26), term_l_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      t = fetch_1_0(d_4, t);
    }
  t = term_o_12;
  t = echo_0_0(t);
  t = term_c_11;
  t_25 = t;
  t = term_e_11;
  u_25 = t;
  t = term_p_12;
  t = p_4(t_25, u_25, t);
  t = reverse_acc_2_0(_id, o_4, t);
  t = map_1_0(u_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_12 = ATgetFirst((ATermList) t);
                ATerm t_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_26;
          }
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = (ATerm) ATinsert(ATempty, g_26);
      }
    h_26 = t;
    t = term_j_8;
    i_26 = t;
    t = SSL_printnl(i_26, h_26);
    t = g_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  t = term_u_12;
  m_26 = t;
  t = term_y_0;
  n_26 = t;
  t = term_w_12;
  t = s_4(m_26, n_26, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  t = term_u_12;
  s_26 = t;
  t = term_y_0;
  t_26 = t;
  t = term_w_12;
  t = s_4(s_26, t_26, t);
  t = term_y_12;
  q_26 = t;
  t = term_y_0;
  r_26 = t;
  t = term_z_12;
  t = s_4(q_26, r_26, t);
  t = term_c_13;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_4, w_4, x_4, t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      t = Option_3_0(y_4, z_4, c_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,u_5 = NULL;
  z_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_26 = ATgetFirst((ATermList) t);
      w_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_26);
  u_26 = t;
  t = v_26;
  t = j_59(t);
  x_26 = t;
  t = w_26;
  t = k_59(t);
  y_26 = t;
  t = (ATerm) ATinsert(CheckATermList(y_26), x_26);
  u_5 = t;
  t = SSLsetAnnotations(u_5, u_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,c_6 = NULL;
  e_27 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_13;
        t = j_102(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
      }
    t = e_27;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_27 = ATgetFirst((ATermList) t);
        h_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_27);
    f_27 = t;
    t = term_p_11;
    k_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_11, g_27);
    t = s_4(k_27, g_27, t);
    t = h_27;
    {
      ATerm u_27 (ATerm t)
      {
        ATerm m_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_27 = NULL;
                n_27 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_27;
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = q_13;
                t = j_102(t);
                t = Cons_2_0(_id, u_27, t);
              }
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = m_13;
            {
              ATerm q_27 = NULL,r_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_27 = ATgetFirst((ATermList) t);
                  r_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_27), (ATerm) ATmakeAppl(sym_Undefined_1, q_27));
            }
          }
        return(t);
      }
      t = u_27(t);
      j_27 = t;
      t = (ATerm) ATinsert(CheckATermList(j_27), (ATerm) ATmakeAppl(sym_Program_1, g_27));
      c_6 = t;
      t = SSLsetAnnotations(c_6, f_27);
    }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  if(match_string(t, "--help"))
    {
      t = h_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_28;
        }
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  t = term_k_12;
  i_28 = t;
  t = term_y_0;
  j_28 = t;
  t = term_s_13;
  t = s_4(i_28, j_28, t);
  t = term_t_13;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,g_28 = NULL;
  b_28 = t;
  t = term_c_11;
  d_28 = t;
  t = term_e_11;
  e_28 = t;
  t = (ATerm) ATempty;
  g_28 = t;
  t = SSL_table_put(d_28, e_28, g_28);
  t = b_28;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_102(t);
          ;
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          {
            ATerm x_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_5, j_5, l_5, t);
                ;
                LocalPopChoice(y_13);
              }
            else
              {
                t = x_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_5, t);
    {
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_28 = NULL;
          q_28 = t;
          {
            ATerm b_14 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_11 = NULL;
                t = q_28;
                {
                  ATerm f_14 = t;
                  int i_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_14);
                    }
                  else
                    {
                      t = f_14;
                      t = fetch_1_0(n_5, t);
                    }
                  t = q_28;
                  t = default_system_usage_0_0(t);
                  t = term_o_10;
                  d_11 = t;
                  t = SSL_exit(d_11);
                }
                ;
                LocalPopChoice(e_14);
              }
            else
              {
                t = b_14;
                {
                  ATerm i_11 = NULL;
                  t = term_u_12;
                  t = get_config_0_0(t);
                  t = q_28;
                  t = default_system_about_0_0(t);
                  t = term_o_10;
                  i_11 = t;
                  t = SSL_exit(i_11);
                }
              }
          }
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          {
            ATerm m_14 = t;
            int n_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
                ATerm r_5 (ATerm t)
                {
                  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,t_8 = NULL;
                  w_28 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      v_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_28);
                  u_28 = t;
                  t = v_28;
                  if(((z_27 != NULL) && (z_27 != t)))
                    _fail(t);
                  else
                    z_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_28);
                  t_8 = t;
                  t = SSLsetAnnotations(t_8, u_28);
                  return(t);
                }
                t = fetch_1_0(r_5, t);
                t = term_l_6;
                s_28 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_27)), term_p_14);
                t_28 = t;
                t = SSL_printnl(s_28, t_28);
                t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_27)), term_p_14));
                t = default_system_usage_0_0(t);
                t = term_r_6;
                r_28 = t;
                t = SSL_exit(r_28);
                ;
                LocalPopChoice(n_14);
              }
            else
              {
                t = m_14;
              }
          }
        }
      a_28 = t;
      t = term_c_11;
      c_28 = t;
      t = SSL_table_destroy(c_28);
      t = a_28;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  t = parse_options_1_0(i_100, t);
  b_29 = t;
  t = term_q_14;
  e_29 = t;
  t = SSL_table_create(e_29);
  t = term_q_14;
  c_29 = t;
  t = term_s_14;
  d_29 = t;
  t = SSL_table_put(c_29, d_29, b_29);
  t = b_29;
  t = k_100(t);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_100, t);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_100(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = if_verbose2_1_0(h_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  t = term_d_15;
  f_29 = t;
  t = term_y_0;
  g_29 = t;
  t = term_e_15;
  t = s_4(f_29, g_29, t);
  t = term_f_15;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_g_15;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  j_29 = t;
  t = term_p_11;
  t = get_config_0_0(t);
  k_29 = t;
  t = term_l_6;
  l_29 = t;
  t = (ATerm) ATinsert(ATempty, k_29);
  m_29 = t;
  t = SSL_printnl(l_29, m_29);
  t = j_29;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_99(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_15);
                  }
                else
                  {
                    t = l_15;
                    {
                      ATerm n_15 = t;
                      int o_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_6, f_6, g_6, t);
                          ;
                          LocalPopChoice(o_15);
                        }
                      else
                        {
                          t = n_15;
                          {
                            ATerm q_15 = t;
                            int t_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_15);
                              }
                            else
                              {
                                t = q_15;
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
  ATerm d_6 (ATerm t)
  {
    ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
    o_29 = t;
    {
      ATerm u_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_29 != NULL) && (n_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_6, t);
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = u_15;
          t = term_z_15;
          n_29 = t;
        }
      t = not_null(n_29);
      t = ReadFromFile_0_0(t);
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
      t = apply_strategy_1_0(r_99, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_5, t_99, z_5, d_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,t_9 = NULL;
  v_29 = t;
  if(match_cons(t, sym__2))
    {
      s_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  r_29 = t;
  t = t_29;
  {
    ATerm a_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        w_29 = t;
        t = explanation_0_0(t);
        t = w_29;
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = a_16;
      }
    u_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_29, u_29);
    t_9 = t;
    t = SSLsetAnnotations(t_9, r_29);
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_6, _fail, default_usage_0_0, t);
  return(t);
}

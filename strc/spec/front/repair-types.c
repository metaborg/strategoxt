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
ATerm term_v_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_r_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_k_8;
ATerm term_f_8;
ATerm term_b_8;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_y_0;
void init_constant_terms (void)
{
  ATprotect(&(term_y_0));
  term_y_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_m_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_y_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_c_11);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_y_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_y_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_y_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_y_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm explanation_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_2 (ATerm n_2, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_4 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t_18, ATerm r_18, ATerm q_18, ATerm s_18, ATerm);
ATerm RepairVarDec_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm);
ATerm map1_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm a_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm h_4 (ATerm e_44, ATerm f_44, ATerm);
ATerm i_4 (ATerm s_47, ATerm t_47, ATerm);
ATerm k_4 (ATerm l_96 (ATerm), ATerm i_456, ATerm w_47, ATerm);
ATerm j_4 (ATerm o_47, ATerm p_47, ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm x_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm f_13 (ATerm w_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_4 (ATerm u_47, ATerm);
ATerm m_4 (ATerm g_44, ATerm h_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_15 (ATerm d_14, ATerm);
ATerm y_15 (ATerm h_14, ATerm i_14, ATerm k_14, ATerm);
ATerm c_16 (ATerm u_14, ATerm x_14, ATerm a_15, ATerm);
ATerm n_4 (ATerm);
ATerm y_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm g_4 (ATerm u_41, ATerm v_41, ATerm);
ATerm debug_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_97 (ATerm), ATerm);
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
ATerm t_4 (ATerm v_48, ATerm w_48, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_4 (ATerm k_33, ATerm l_33, ATerm j_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_4 (ATerm o_31, ATerm p_31, ATerm);
ATerm foldr_2_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm need_help_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm q_4 (ATerm b_35, ATerm c_35, ATerm);
ATerm d_4 (ATerm);
ATerm p_4 (ATerm);
ATerm v_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_102 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm parse_options_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm iowrap_3_0 (ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm);
ATerm k_6 (ATerm);
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
  t = term_y_0;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_m_6;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_6), b_0), term_n_6);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_s_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm n_0 = NULL,p_0 = NULL;
  t = term_m_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATempty, term_t_6);
  p_0 = t;
  t = SSL_printnl(n_0, p_0);
  t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATempty, term_t_6));
  return(t);
}
ATerm at_end_1_0 (ATerm c_81 (ATerm), ATerm t)
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
        t = c_81(t);
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
      ATerm u_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_6) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm v_6 = t;
        int x_6 = stack_ptr;
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
            LocalPopChoice(x_6);
          }
        else
          {
            t = v_6;
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
ATerm e_4 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t_18, ATerm r_18, ATerm q_18, ATerm s_18, ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  c_3 = t;
  t = r_72(t);
  d_3 = t;
  t = c_3;
  t = s_72(t);
  e_3 = t;
  t = term_m_6;
  f_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_7), e_3), term_a_7), d_3), term_z_6), t_18), term_y_6);
  g_3 = t;
  t = SSL_printnl(f_3, g_3);
  t = (ATerm) ATmakeAppl(sym__2, q_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, r_18)));
  t = conc_0_0(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_18, (ATerm) ATmakeAppl(sym_FunType_2, a_3, s_18));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_3 = ATgetArgument(t, 0);
      {
        ATerm d_7 = ATgetArgument(t, 1);
        if(match_cons(d_7, sym_FunType_2))
          {
            ATerm e_7 = ATgetArgument(d_7, 0);
            if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
              {
                ATerm g_7 = ATgetFirst((ATermList) e_7);
                if(match_cons(g_7, sym_ConstType_1))
                  {
                    k_3 = ATgetArgument(g_7, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm h_7 = (ATerm) ATgetNext((ATermList) e_7);
                  m_3 = h_7;
                  if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
                    {
                      ATerm i_7 = ATgetFirst((ATermList) h_7);
                      if(match_cons(i_7, sym_FunType_2))
                        {
                          ATerm k_7 = ATgetArgument(i_7, 0);
                          ATerm l_7 = ATgetArgument(i_7, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_7 = (ATerm) ATgetNext((ATermList) h_7);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            n_3 = ATgetArgument(d_7, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_4(r_72, s_72, j_3, k_3, m_3, n_3, t);
  return(t);
}
ATerm map1_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,b_6 = NULL,c_6 = NULL;
  x_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_6 = ATgetFirst((ATermList) t);
      c_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm m_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL,u_1 = NULL,w_1 = NULL,p_1 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(x_5);
        r_1 = t;
        t = b_6;
        t = o_80(t);
        u_1 = t;
        t = (ATerm) ATinsert(CheckATermList(c_6), u_1);
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
          ATerm p_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(o_80, t);
              ;
              LocalPopChoice(q_7);
            }
          else
            {
              t = p_7;
            }
          q_1 = t;
          t = (ATerm) ATinsert(CheckATermList(q_1), m_1);
          p_1 = t;
          t = SSLsetAnnotations(p_1, l_1);
        }
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = m_7;
        {
          ATerm w_2 = NULL,b_3 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(x_5);
          w_2 = t;
          t = c_6;
          t = map1_1_0(o_80, t);
          b_3 = t;
          t = (ATerm) ATinsert(CheckATermList(b_3), b_6);
          v_1 = t;
          t = SSLsetAnnotations(v_1, w_2);
        }
      }
  }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_r_7;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm l_6 = NULL,o_6 = NULL,p_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      o_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
      r_6 = ATgetArgument(t, 2);
      l_6 = ATgetArgument(t, 3);
      {
        ATerm f_7 = NULL;
        t = p_6;
        {
          ATerm u_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              t = o_6;
              return(t);
            }
            t = RepairVarDec_2_0(v_0, x_0, t);
            return(t);
          }
          t = map1_1_0(u_0, t);
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, o_6, f_7, r_6, l_6);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          o_6 = ATgetArgument(t, 0);
          p_6 = ATgetArgument(t, 1);
          r_6 = ATgetArgument(t, 2);
          {
            ATerm n_7 = NULL;
            t = p_6;
            {
              ATerm z_0 (ATerm t)
              {
                ATerm c_1 (ATerm t)
                {
                  t = o_6;
                  return(t);
                }
                t = RepairVarDec_2_0(a_1, c_1, t);
                return(t);
              }
              t = map1_1_0(z_0, t);
              n_7 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, o_6, n_7, r_6);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              o_6 = ATgetArgument(t, 0);
              p_6 = ATgetArgument(t, 1);
              r_6 = ATgetArgument(t, 2);
              l_6 = ATgetArgument(t, 3);
              {
                ATerm s_7 = NULL;
                t = p_6;
                {
                  ATerm e_1 (ATerm t)
                  {
                    ATerm g_1 (ATerm t)
                    {
                      t = o_6;
                      return(t);
                    }
                    t = RepairVarDec_2_0(f_1, g_1, t);
                    return(t);
                  }
                  t = map1_1_0(e_1, t);
                  s_7 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, o_6, s_7, r_6, l_6);
                }
              }
            }
          else
            {
              ATerm w_7 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  o_6 = ATgetArgument(t, 0);
                  p_6 = ATgetArgument(t, 1);
                  r_6 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_6;
              {
                ATerm h_1 (ATerm t)
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = o_6;
                    return(t);
                  }
                  t = RepairVarDec_2_0(i_1, j_1, t);
                  return(t);
                }
                t = map1_1_0(h_1, t);
                w_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, o_6, w_7, r_6);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_75(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = SRTS_some(x_7, t);
      }
    return(t);
  }
  t = x_7(t);
  return(t);
}
ATerm h_4 (ATerm e_44, ATerm f_44, ATerm t)
{
  ATerm y_7 = NULL;
  t = SSL_fputc(e_44, f_44);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_7);
  return(t);
}
ATerm i_4 (ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm z_7 = NULL;
  t = SSL_write_term_to_stream_text(s_47, t_47);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_7);
  return(t);
}
ATerm k_4 (ATerm l_96 (ATerm), ATerm i_456, ATerm w_47, ATerm t)
{
  ATerm h_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_456, term_b_8);
  t = n_4(t);
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_8, w_47);
  t = l_96(t);
  t = fclose_0_0(t);
  t = w_47;
  return(t);
}
ATerm j_4 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_write_term_to_stream_baf(o_47, p_47);
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
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
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          y_3 = ATgetArgument(c_8, 0);
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
  ATerm q_5 = NULL,t_5 = NULL,u_5 = NULL,y_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if(match_cons(e_8, sym_Stream_1))
        {
          y_5 = ATgetArgument(e_8, 0);
        }
      else
        _fail(t);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(y_5, z_5, t);
  q_5 = t;
  t = term_f_8;
  t_5 = t;
  t = q_5;
  if(match_cons(t, sym_Stream_1))
    {
      u_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, q_5);
  t = h_4(t_5, u_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,c_9 = NULL,e_9 = NULL,l_9 = NULL,q_9 = NULL,s_9 = NULL,t_9 = NULL,w_11 = NULL,x_11 = NULL,z_3 = NULL,i_2 = NULL;
  x_8 = t;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_8);
  l_9 = t;
  t = q_9;
  {
    ATerm g_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_8 != NULL) && (w_8 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_1, t);
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = g_8;
        t = term_k_8;
        w_8 = t;
      }
    t_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_9, s_9);
    i_2 = t;
    t = SSLsetAnnotations(i_2, l_9);
    t = x_8;
    if(match_cons(t, sym__2))
      {
        z_8 = ATgetArgument(t, 0);
        c_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_8);
    y_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_8, (ATerm) ATmakeAppl(sym__2, not_null(w_8), c_9));
    z_3 = t;
    t = SSLsetAnnotations(z_3, y_8);
    e_9 = t;
    if(match_cons(t, sym__2))
      {
        w_11 = ATgetArgument(t, 0);
        x_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm l_8 = t;
      int m_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,f_4 = NULL;
          t = SSLgetAnnotations(e_9);
          r_3 = t;
          t = w_11;
          t = fetch_1_0(s_1, t);
          u_3 = t;
          t = x_11;
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
          LocalPopChoice(m_8);
        }
      else
        {
          t = l_8;
          {
            ATerm s_4 = NULL,f_5 = NULL,g_5 = NULL,p_5 = NULL,u_4 = NULL;
            t = SSLgetAnnotations(e_9);
            s_4 = t;
            t = x_11;
            if(match_cons(t, sym__2))
              {
                g_5 = ATgetArgument(t, 0);
                p_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_4(x_1, g_5, p_5, t);
            f_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_11, f_5);
            u_4 = t;
            t = SSLsetAnnotations(u_4, s_4);
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
ATerm apply_strategy_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  j_12 = t;
  t = dtime_0_0(t);
  t = j_12;
  t = n_99(t);
  i_12 = t;
  t = dtime_0_0(t);
  c_12 = t;
  t = i_12;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_12), (ATerm) ATmakeAppl(sym_Runtime_1, c_12)), h_12);
  return(t);
}
ATerm f_13 (ATerm w_12, ATerm t)
{
  t = SSL_fclose(w_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL;
  c_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_13 = ATgetArgument(t, 0);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_13);
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = f_13(c_13, t);
          }
      }
    }
  else
    {
      t = f_13(c_13, t);
    }
  return(t);
}
ATerm l_4 (ATerm u_47, ATerm t)
{
  t = SSL_read_term_from_stream(u_47);
  return(t);
}
ATerm m_4 (ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_fopen(g_44, h_44);
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_stdin_stream();
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_13 = NULL;
  t = SSL_stdout_stream();
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_13 = NULL;
  t = SSL_stderr_stream();
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_13);
  return(t);
}
ATerm x_15 (ATerm d_14, ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_explode_term(d_14);
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
          {
            e_14 = ATgetFirst((ATermList) q_8);
            {
              ATerm r_8 = (ATerm) ATgetNext((ATermList) q_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm y_15 (ATerm h_14, ATerm i_14, ATerm k_14, ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,p_14 = NULL,s_14 = NULL,b_5 = NULL;
  t = SSLgetAnnotations(k_14);
  p_14 = t;
  t = h_14;
  if(match_cons(t, sym_Path_1))
    {
      s_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_14, i_14);
  b_5 = t;
  t = SSLsetAnnotations(b_5, p_14);
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(l_14, m_14, t);
  return(t);
}
ATerm c_16 (ATerm u_14, ATerm x_14, ATerm a_15, ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,q_15 = NULL,c_5 = NULL;
  t = SSLgetAnnotations(a_15);
  d_15 = t;
  t = SSL_is_string(u_14);
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_15, x_14);
  c_5 = t;
  t = SSLsetAnnotations(c_5, d_15);
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(b_15, c_15, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,w_15 = NULL;
  s_15 = t;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
      {
        ATerm v_8 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_15(s_15, t);
            ;
            LocalPopChoice(d_9);
          }
        else
          {
            t = v_8;
            {
              ATerm f_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_15(t_15, w_15, s_15, t);
                  ;
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = f_9;
                  t = c_16(t_15, w_15, s_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_15(s_15, t);
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_h_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,o_16 = NULL;
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = NULL;
      p_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_16, term_k_9);
      t = n_4(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = debug_1_0(y_1, t);
      _fail(t);
    }
  h_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(o_16, t);
  g_16 = t;
  t = h_16;
  t = fclose_0_0(t);
  t = g_16;
  return(t);
}
ATerm fetch_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm f_19 (ATerm t)
  {
    ATerm x_18 = NULL,y_18 = NULL,c_19 = NULL;
    x_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_18 = ATgetFirst((ATermList) t);
        c_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_6 = NULL,b_7 = NULL,h_5 = NULL;
          t = SSLgetAnnotations(x_18);
          w_6 = t;
          t = y_18;
          t = w_80(t);
          b_7 = t;
          t = (ATerm) ATinsert(CheckATermList(c_19), b_7);
          h_5 = t;
          t = SSLsetAnnotations(h_5, w_6);
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          {
            ATerm a_8 = NULL,d_8 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(x_18);
            a_8 = t;
            t = c_19;
            t = f_19(t);
            d_8 = t;
            t = (ATerm) ATinsert(CheckATermList(d_8), y_18);
            i_5 = t;
            t = SSLsetAnnotations(i_5, a_8);
          }
        }
    }
    return(t);
  }
  t = f_19(t);
  return(t);
}
ATerm g_4 (ATerm u_41, ATerm v_41, ATerm t)
{
  t = SSL_strcat(u_41, v_41);
  return(t);
}
ATerm debug_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  i_19 = t;
  t = j_96(t);
  j_19 = t;
  t = term_m_6;
  k_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_19), j_19);
  l_19 = t;
  t = SSL_printnl(k_19, l_19);
  t = i_19;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_r_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_19 = NULL;
      t_19 = t;
      t = SSL_is_string(t_19);
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_1, t);
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
              z_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_20 = ATgetArgument(t, 0);
                  t = a_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_20 = ATgetArgument(t, 0);
                      t = a_20;
                      {
                        ATerm a_10 = t;
                        int b_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_10);
                          }
                        else
                          {
                            t = a_10;
                            t = debug_1_0(a_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_20 = NULL,g_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_20 = ATgetArgument(t, 0);
                          b_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_20;
                      t = eval_config_0_0(t);
                      f_20 = t;
                      t = b_20;
                      t = eval_config_0_0(t);
                      g_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_20, g_20);
                      t = g_4(f_20, g_20, t);
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
  ATerm k_20 = NULL,l_20 = NULL;
  k_20 = t;
  t = term_c_10;
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, k_20);
  t = q_4(l_20, k_20, t);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL,n_20 = NULL;
        t = eval_config_0_0(t);
        m_20 = t;
        t = term_c_10;
        n_20 = t;
        t = SSL_table_put(n_20, k_20, m_20);
        t = m_20;
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL;
        t = term_h_10;
        t = get_config_0_0(t);
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_20, term_i_10);
        t = geq_0_0(t);
        t = r_20;
        t = w_97(t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = r_20;
      }
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm w_20 = NULL;
  w_20 = t;
  if(match_string(t, "-k"))
    {
      t = w_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_20;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
  x_20 = t;
  t = SSL_string_to_int(x_20);
  y_20 = t;
  t = term_j_10;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, y_20);
  t = t_4(z_20, y_20, t);
  t = x_20;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_2, c_2, f_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  if(match_string(t, "-S"))
    {
      t = b_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_21;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  t = term_h_10;
  c_21 = t;
  t = term_m_10;
  d_21 = t;
  t = term_n_10;
  t = t_4(c_21, d_21, t);
  t = term_p_10;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_r_10;
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
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  t = SSL_string_to_int(e_21);
  f_21 = t;
  t = term_h_10;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, f_21);
  t = t_4(g_21, f_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_21);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_s_10;
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
  ATerm h_21 = NULL,i_21 = NULL;
  t = term_t_10;
  h_21 = t;
  t = term_y_0;
  i_21 = t;
  t = term_u_10;
  t = t_4(h_21, i_21, t);
  t = term_v_10;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_2, k_2, l_2, t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, p_2, q_2, t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            t = Option_3_0(u_2, v_2, x_2, t);
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm j_21 = NULL;
  t = term_c_10;
  j_21 = t;
  t = SSL_table_put(j_21, v_48, w_48);
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, v_48, w_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
      t = term_y_0;
      t = h_0(t);
      o_21 = t;
      t = term_b_11;
      p_21 = t;
      t = term_c_11;
      q_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_11, term_c_11, o_21);
      t = r_4(p_21, q_21, o_21, t);
      _fail(t);
    }
  else
    {
      ATerm t_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_21 = ATgetFirst((ATermList) t);
          n_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_21;
      t = d_0(t);
      t = term_y_0;
      t = g_0(t);
      t_21 = t;
      t = (ATerm) ATinsert(CheckATermList(n_21), t_21);
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  if(match_string(t, "-o"))
    {
      t = v_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_21;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  w_21 = t;
  t = term_d_11;
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, w_21);
  t = t_4(x_21, w_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_21);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, h_3, i_3, t);
  return(t);
}
ATerm r_4 (ATerm k_33, ATerm l_33, ATerm j_33, ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_11 = ATgetArgument(t, 0);
            ATerm k_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        t = q_4(k_33, l_33, t);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATempty;
      }
    a_22 = t;
    t = (ATerm) ATinsert(CheckATermList(a_22), j_33);
    b_22 = t;
    t = SSL_table_put(k_33, l_33, b_22);
    t = z_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
      t = term_y_0;
      t = m_0(t);
      m_22 = t;
      t = term_b_11;
      n_22 = t;
      t = term_c_11;
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_11, term_c_11, m_22);
      t = r_4(n_22, o_22, m_22, t);
      _fail(t);
    }
  else
    {
      ATerm s_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_22 = ATgetFirst((ATermList) t);
          j_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_22 = ATgetFirst((ATermList) t);
          l_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_22;
      t = k_0(t);
      t = k_22;
      t = l_0(t);
      s_22 = t;
      t = (ATerm) ATinsert(CheckATermList(l_22), s_22);
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  if(match_string(t, "-i"))
    {
      t = u_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_22;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  t = term_l_11;
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, v_22);
  t = t_4(w_22, v_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_22);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, o_3, p_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_0;
  t = whoami_0_0(t);
  x_22 = t;
  t = term_m_6;
  z_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_11), x_22);
  a_23 = t;
  t = SSL_printnl(z_22, a_23);
  t = term_s_6;
  y_22 = t;
  t = SSL_exit(y_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_4 (ATerm o_31, ATerm p_31, ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_31, p_31);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = SSL_addr(o_31, p_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_23;
      t = n_85(t);
    }
  else
    {
      ATerm h_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_23 = ATgetFirst((ATermList) t);
          e_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_23;
      t = foldr_2_0(n_85, o_85, t);
      h_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_23, h_23);
      t = o_85(t);
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
  t = term_m_10;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(a_9, b_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_23 = NULL,s_8 = NULL,t_8 = NULL;
  t = times_0_0(t);
  t_8 = t;
  t = SSL_explode_term(t_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8;
  t = foldr_2_0(q_3, s_3, t);
  k_23 = t;
  t = SSL_TicksToSeconds(k_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_23;
        if((w_23 != t))
          {
            _fail(t);
          }
        t = v_23;
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATmakeAppl(sym__2, w_23, x_23);
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_23, x_23);
              ;
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              t = SSL_gtr(w_23, x_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_23, x_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL;
        t = term_h_10;
        t = get_config_0_0(t);
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_24, term_s_6);
        t = geq_0_0(t);
        t = b_24;
        t = v_97(t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = b_24;
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL;
  t = run_time_0_0(t);
  f_24 = t;
  t = term_y_0;
  t = whoami_0_0(t);
  g_24 = t;
  t = term_m_6;
  i_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_12), f_24), term_a_12), g_24);
  j_24 = t;
  t = SSL_printnl(i_24, j_24);
  t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_12), f_24), term_a_12), g_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_10;
  k_24 = t;
  t = SSL_exit(k_24);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  t_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_24 = ATgetArgument(t, 0);
          {
            ATerm x_9 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(t_24);
            x_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_24);
            l_5 = t;
            t = SSLsetAnnotations(l_5, x_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = fetch_1_0(b_4, t);
    }
  t = l_100(t);
  return(t);
}
ATerm map_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm j_25 (ATerm t)
  {
    ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
    g_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_25;
      }
    else
      {
        ATerm k_10 = NULL,o_10 = NULL,q_10 = NULL,n_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_25 = ATgetFirst((ATermList) t);
            i_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_25);
        k_10 = t;
        t = h_25;
        t = m_80(t);
        o_10 = t;
        t = i_25;
        t = j_25(t);
        q_10 = t;
        t = (ATerm) ATinsert(CheckATermList(q_10), o_10);
        n_5 = t;
        t = SSLsetAnnotations(n_5, k_10);
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_25 = ATgetFirst((ATermList) t);
      n_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_25 = NULL,s_25 = NULL;
        ATerm c_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_25)), not_null(s_25));
          return(t);
        }
        t = n_25;
        t = j_0(t);
        if(((r_25 != NULL) && (r_25 != t)))
          _fail(t);
        else
          r_25 = t;
        t = m_25;
        t = i_0(t);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = n_25;
        t = reverse_acc_2_0(i_0, c_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_0;
      t = j_0(t);
    }
  return(t);
}
ATerm q_4 (ATerm b_35, ATerm c_35, ATerm t)
{
  t = SSL_table_get(b_35, c_35);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,r_5 = NULL;
  d_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_26);
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_26);
  r_5 = t;
  t = SSLsetAnnotations(r_5, b_26);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_26), term_k_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = fetch_1_0(d_4, t);
    }
  t = term_n_12;
  t = echo_0_0(t);
  t = term_b_11;
  u_25 = t;
  t = term_c_11;
  v_25 = t;
  t = term_o_12;
  t = q_4(u_25, v_25, t);
  t = reverse_acc_2_0(_id, p_4, t);
  t = map_1_0(v_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_12 = ATgetFirst((ATermList) t);
                ATerm s_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_26;
          }
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = (ATerm) ATinsert(ATempty, h_26);
      }
    i_26 = t;
    t = term_k_8;
    j_26 = t;
    t = SSL_printnl(j_26, i_26);
    t = h_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  t = term_t_12;
  n_26 = t;
  t = term_y_0;
  o_26 = t;
  t = term_u_12;
  t = t_4(n_26, o_26, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  t = term_t_12;
  t_26 = t;
  t = term_y_0;
  u_26 = t;
  t = term_u_12;
  t = t_4(t_26, u_26, t);
  t = term_x_12;
  r_26 = t;
  t = term_y_0;
  s_26 = t;
  t = term_y_12;
  t = t_4(r_26, s_26, t);
  t = term_z_12;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, x_4, y_4, t);
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      t = Option_3_0(z_4, a_5, d_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,v_5 = NULL;
  a_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_26 = ATgetFirst((ATermList) t);
      x_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_27);
  v_26 = t;
  t = w_26;
  t = n_59(t);
  y_26 = t;
  t = x_26;
  t = o_59(t);
  z_26 = t;
  t = (ATerm) ATinsert(CheckATermList(z_26), y_26);
  v_5 = t;
  t = SSLsetAnnotations(v_5, v_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,k_27 = NULL,l_27 = NULL,d_6 = NULL;
  f_27 = t;
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_13;
        t = o_102(t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
      }
    t = f_27;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_27 = ATgetFirst((ATermList) t);
        i_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_27);
    g_27 = t;
    t = term_o_11;
    l_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_11, h_27);
    t = t_4(l_27, h_27, t);
    t = i_27;
    {
      ATerm v_27 (ATerm t)
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_13 = t;
            int q_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_27 = NULL;
                o_27 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_27;
                ;
                LocalPopChoice(q_13);
              }
            else
              {
                t = n_13;
                t = o_102(t);
                t = Cons_2_0(_id, v_27, t);
              }
            ;
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            {
              ATerm r_27 = NULL,s_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_27 = ATgetFirst((ATermList) t);
                  s_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_27), (ATerm) ATmakeAppl(sym_Undefined_1, r_27));
            }
          }
        return(t);
      }
      t = v_27(t);
      k_27 = t;
      t = (ATerm) ATinsert(CheckATermList(k_27), (ATerm) ATmakeAppl(sym_Program_1, h_27));
      d_6 = t;
      t = SSLsetAnnotations(d_6, g_27);
    }
  }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  if(match_string(t, "--help"))
    {
      t = i_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_28;
        }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  t = term_f_12;
  j_28 = t;
  t = term_y_0;
  k_28 = t;
  t = term_r_13;
  t = t_4(j_28, k_28, t);
  t = term_s_13;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,h_28 = NULL;
  c_28 = t;
  t = term_b_11;
  e_28 = t;
  t = term_c_11;
  f_28 = t;
  t = (ATerm) ATempty;
  h_28 = t;
  t = SSL_table_put(e_28, f_28, h_28);
  t = c_28;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_102(t);
          ;
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_5, k_5, m_5, t);
                ;
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_5, t);
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_28 = NULL;
          r_28 = t;
          {
            ATerm a_14 = t;
            int b_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_11 = NULL;
                t = r_28;
                {
                  ATerm c_14 = t;
                  int f_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_14);
                    }
                  else
                    {
                      t = c_14;
                      t = fetch_1_0(o_5, t);
                    }
                  t = r_28;
                  t = default_system_usage_0_0(t);
                  t = term_m_10;
                  e_11 = t;
                  t = SSL_exit(e_11);
                }
                ;
                LocalPopChoice(b_14);
              }
            else
              {
                t = a_14;
                {
                  ATerm j_11 = NULL;
                  t = term_t_12;
                  t = get_config_0_0(t);
                  t = r_28;
                  t = default_system_about_0_0(t);
                  t = term_m_10;
                  j_11 = t;
                  t = SSL_exit(j_11);
                }
              }
          }
          ;
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
            ATerm g_14 = t;
            int j_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
                ATerm s_5 (ATerm t)
                {
                  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,u_8 = NULL;
                  x_28 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_28);
                  v_28 = t;
                  t = w_28;
                  if(((a_28 != NULL) && (a_28 != t)))
                    _fail(t);
                  else
                    a_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_28);
                  u_8 = t;
                  t = SSLsetAnnotations(u_8, v_28);
                  return(t);
                }
                t = fetch_1_0(s_5, t);
                t = term_m_6;
                t_28 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_28)), term_n_14);
                u_28 = t;
                t = SSL_printnl(t_28, u_28);
                t = (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_28)), term_n_14));
                t = default_system_usage_0_0(t);
                t = term_s_6;
                s_28 = t;
                t = SSL_exit(s_28);
                ;
                LocalPopChoice(j_14);
              }
            else
              {
                t = g_14;
              }
          }
        }
      b_28 = t;
      t = term_b_11;
      d_28 = t;
      t = SSL_table_destroy(d_28);
      t = b_28;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  t = parse_options_1_0(n_100, t);
  c_29 = t;
  t = term_o_14;
  f_29 = t;
  t = SSL_table_create(f_29);
  t = term_o_14;
  d_29 = t;
  t = term_q_14;
  e_29 = t;
  t = SSL_table_put(d_29, e_29, c_29);
  t = c_29;
  t = p_100(t);
  {
    ATerm r_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_100, t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = r_14;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_100(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = if_verbose2_1_0(i_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  t = term_y_14;
  g_29 = t;
  t = term_y_0;
  h_29 = t;
  t = term_z_14;
  t = t_4(g_29, h_29, t);
  t = term_e_15;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  k_29 = t;
  t = term_o_11;
  t = get_config_0_0(t);
  l_29 = t;
  t = term_m_6;
  m_29 = t;
  t = (ATerm) ATinsert(ATempty, l_29);
  n_29 = t;
  t = SSL_printnl(m_29, n_29);
  t = k_29;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_99(t);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              {
                ATerm k_15 = t;
                int l_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(l_15);
                  }
                else
                  {
                    t = k_15;
                    {
                      ATerm m_15 = t;
                      int n_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_6, g_6, h_6, t);
                          ;
                          LocalPopChoice(n_15);
                        }
                      else
                        {
                          t = m_15;
                          {
                            ATerm o_15 = t;
                            int p_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_15);
                              }
                            else
                              {
                                t = o_15;
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
  ATerm e_6 (ATerm t)
  {
    ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
    p_29 = t;
    {
      ATerm r_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_29 != NULL) && (o_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_6, t);
          ;
          LocalPopChoice(u_15);
        }
      else
        {
          t = r_15;
          t = term_v_15;
          o_29 = t;
        }
      t = not_null(o_29);
      t = ReadFromFile_0_0(t);
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_29, q_29);
      t = apply_strategy_1_0(w_99, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(w_5, y_99, a_6, e_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,u_9 = NULL;
  w_29 = t;
  if(match_cons(t, sym__2))
    {
      t_29 = ATgetArgument(t, 0);
      u_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_29);
  s_29 = t;
  t = u_29;
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        x_29 = t;
        t = explanation_0_0(t);
        t = x_29;
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
      }
    v_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_29, v_29);
    u_9 = t;
    t = SSLsetAnnotations(u_9, s_29);
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_6, _fail, default_usage_0_0, t);
  return(t);
}

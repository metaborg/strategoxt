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
Symbol sym_S_1;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_u_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_y_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_u_6;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_r_5;
ATerm term_o_5;
ATerm term_l_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
void init_constant_terms (void)
{
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym__2, term_z_6, term_d_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_d_5);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_r_7);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym__2, term_a_9, term_d_5);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_d_5);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_d_5);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_d_5);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm Box_0_0 (ATerm);
ATerm t_3 (ATerm c_13, ATerm d_13, ATerm);
ATerm u_3 (ATerm d_37, ATerm e_37, ATerm);
ATerm w_3 (ATerm f_77 (ATerm), ATerm l_426, ATerm h_37, ATerm);
ATerm v_3 (ATerm z_36, ATerm a_37, ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm k_27 (ATerm e_27, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm f_37, ATerm);
ATerm y_3 (ATerm e_13, ATerm f_13, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_28 (ATerm u_27, ATerm);
ATerm w_28 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm);
ATerm x_28 (ATerm i_28, ATerm j_28, ATerm k_28, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_63 (ATerm), ATerm);
ATerm s_3 (ATerm e_32, ATerm f_32, ATerm);
ATerm debug_1_0 (ATerm d_77 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_75 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm s_35, ATerm t_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm l_25, ATerm m_25, ATerm k_25, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm p_23, ATerm q_23, ATerm);
ATerm foldr_2_0 (ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_75 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm need_help_1_0 (ATerm g_79 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_62 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_4 (ATerm c_27, ATerm d_27, ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_50 (ATerm), ATerm w_50 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_81 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm parse_options_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm iowrap_3_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,e_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_d_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_e_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_5), e_0), term_f_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_h_5;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm a_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,c_0 = NULL;
  f_10 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_10);
  a_10 = t;
  t = c_10;
  if(match_cons(t, sym_VS_0))
    {
      t = c_10;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = c_10;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = c_10;
        }
    }
  t = SSL_is_string(d_10);
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, c_10, e_10);
  c_0 = t;
  t = SSLsetAnnotations(c_0, a_10);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,q_0 = NULL;
  d_11 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      a_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_11);
  z_10 = t;
  t = a_11;
  if(match_cons(t, sym_VS_0))
    {
      t = a_11;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = a_11;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = a_11;
        }
    }
  t = SSL_is_string(b_11);
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, a_11, c_11);
  q_0 = t;
  t = SSLsetAnnotations(q_0, z_10);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,h_12 = NULL,s_0 = NULL;
  h_12 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_12);
  b_12 = t;
  t = c_12;
  if(match_cons(t, sym_VS_0))
    {
      t = c_12;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = c_12;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = c_12;
        }
    }
  t = SSL_is_string(d_12);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, c_12, e_12);
  s_0 = t;
  t = SSLsetAnnotations(s_0, b_12);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm s_21 = NULL,v_21 = NULL,w_21 = NULL;
  s_21 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
      {
        ATerm r_22 = NULL,u_22 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(s_21);
        r_22 = t;
        t = v_21;
        if(match_cons(t, sym_FN_0))
          {
            t = v_21;
          }
        else
          {
            if(match_cons(t, sym_FM_0))
              {
                t = v_21;
              }
            else
              {
                if(match_cons(t, sym_SE_0))
                  {
                    t = v_21;
                  }
                else
                  {
                    if(match_cons(t, sym_SH_0))
                      {
                        t = v_21;
                      }
                    else
                      {
                        if(match_cons(t, sym_SZ_0))
                          {
                            t = v_21;
                          }
                        else
                          {
                            if(!(match_cons(t, sym_CL_0)))
                              _fail(t);
                            t = v_21;
                          }
                      }
                  }
              }
          }
        t = SSL_is_string(w_21);
        u_22 = t;
        t = (ATerm) ATmakeAppl(sym_FNAT_2, v_21, u_22);
        v_0 = t;
        t = SSLsetAnnotations(v_0, r_22);
      }
    }
  else
    {
      ATerm l_23 = NULL,o_23 = NULL,w_0 = NULL;
      if(match_cons(t, sym_FFID_2))
        {
          v_21 = ATgetArgument(t, 0);
          w_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_21);
      l_23 = t;
      t = v_21;
      if(match_cons(t, sym_FN_0))
        {
          t = v_21;
        }
      else
        {
          if(match_cons(t, sym_FM_0))
            {
              t = v_21;
            }
          else
            {
              if(match_cons(t, sym_SE_0))
                {
                  t = v_21;
                }
              else
                {
                  if(match_cons(t, sym_SH_0))
                    {
                      t = v_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_SZ_0))
                        {
                          t = v_21;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_CL_0)))
                            _fail(t);
                          t = v_21;
                        }
                    }
                }
            }
        }
      t = SSL_is_string(w_21);
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym_FFID_2, v_21, o_23);
      w_0 = t;
      t = SSLsetAnnotations(w_0, l_23);
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  a_33 = t;
  if(match_cons(t, sym_AL_1))
    {
      b_33 = ATgetArgument(t, 0);
      {
        ATerm f_41 = NULL,h_41 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(a_33);
        f_41 = t;
        t = b_33;
        t = map_1_0(u_1, t);
        h_41 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, h_41);
        a_1 = t;
        t = SSLsetAnnotations(a_1, f_41);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          b_33 = ATgetArgument(t, 0);
          {
            ATerm a_42 = NULL,c_42 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(a_33);
            a_42 = t;
            t = b_33;
            t = map_1_0(v_1, t);
            c_42 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, c_42);
            c_1 = t;
            t = SSLsetAnnotations(c_1, a_42);
          }
        }
      else
        {
          ATerm v_42 = NULL,x_42 = NULL,e_1 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              b_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_33);
          v_42 = t;
          t = b_33;
          t = map_1_0(w_1, t);
          x_42 = t;
          t = (ATerm) ATmakeAppl(sym_AR_1, x_42);
          e_1 = t;
          t = SSLsetAnnotations(e_1, v_42);
        }
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,z_0 = NULL;
  w_41 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      t_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_41);
  s_41 = t;
  t = t_41;
  if(match_cons(t, sym_VS_0))
    {
      t = t_41;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = t_41;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = t_41;
        }
    }
  t = SSL_is_string(u_41);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, t_41, v_41);
  z_0 = t;
  t = SSLsetAnnotations(z_0, s_41);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,b_1 = NULL;
  r_42 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  n_42 = t;
  t = o_42;
  if(match_cons(t, sym_VS_0))
    {
      t = o_42;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = o_42;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = o_42;
        }
    }
  t = SSL_is_string(p_42);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, o_42, q_42);
  b_1 = t;
  t = SSLsetAnnotations(b_1, n_42);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,d_1 = NULL;
  m_43 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      j_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_43);
  i_43 = t;
  t = j_43;
  if(match_cons(t, sym_VS_0))
    {
      t = j_43;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = j_43;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = j_43;
        }
    }
  t = SSL_is_string(k_43);
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, j_43, l_43);
  d_1 = t;
  t = SSLsetAnnotations(d_1, i_43);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm o_33 = NULL,w_33 = NULL,i_34 = NULL,j_34 = NULL,v_34 = NULL,g_1 = NULL;
  v_34 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      w_33 = ATgetArgument(t, 0);
      i_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_34);
  o_33 = t;
  t = w_33;
  if(match_cons(t, sym_VS_0))
    {
      t = w_33;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = w_33;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = w_33;
        }
    }
  t = SSL_is_string(i_34);
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, w_33, j_34);
  g_1 = t;
  t = SSLsetAnnotations(g_1, o_33);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,i_1 = NULL;
  b_44 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      y_43 = ATgetArgument(t, 0);
      z_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_44);
  x_43 = t;
  t = y_43;
  if(match_cons(t, sym_VS_0))
    {
      t = y_43;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = y_43;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = y_43;
        }
    }
  t = SSL_is_string(z_43);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, y_43, a_44);
  i_1 = t;
  t = SSLsetAnnotations(i_1, x_43);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,m_1 = NULL;
  r_45 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      o_45 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_45);
  n_45 = t;
  t = o_45;
  if(match_cons(t, sym_VS_0))
    {
      t = o_45;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = o_45;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = o_45;
        }
    }
  t = SSL_is_string(p_45);
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, o_45, q_45);
  m_1 = t;
  t = SSLsetAnnotations(m_1, n_45);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_i_5;
  return(t);
}
ATerm Box_0_0 (ATerm t)
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL,k_21 = NULL,t_21 = NULL,u_21 = NULL;
      u_21 = t;
      if(match_cons(t, sym_S_1))
        {
          k_21 = ATgetArgument(t, 0);
          {
            ATerm z_8 = NULL,b_9 = NULL,b_0 = NULL;
            t = SSLgetAnnotations(u_21);
            z_8 = t;
            t = SSL_is_string(k_21);
            b_9 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, b_9);
            b_0 = t;
            t = SSLsetAnnotations(b_0, z_8);
          }
        }
      else
        {
          if(match_cons(t, sym_H_2))
            {
              k_21 = ATgetArgument(t, 0);
              t_21 = ATgetArgument(t, 1);
              {
                ATerm r_9 = NULL,w_9 = NULL,x_9 = NULL,p_0 = NULL;
                t = SSLgetAnnotations(u_21);
                r_9 = t;
                t = k_21;
                t = map_1_0(p_1, t);
                w_9 = t;
                t = t_21;
                t = map_1_0(Box_0_0, t);
                x_9 = t;
                t = (ATerm) ATmakeAppl(sym_H_2, w_9, x_9);
                p_0 = t;
                t = SSLsetAnnotations(p_0, r_9);
              }
            }
          else
            {
              if(match_cons(t, sym_V_2))
                {
                  k_21 = ATgetArgument(t, 0);
                  t_21 = ATgetArgument(t, 1);
                  {
                    ATerm s_10 = NULL,w_10 = NULL,x_10 = NULL,r_0 = NULL;
                    t = SSLgetAnnotations(u_21);
                    s_10 = t;
                    t = k_21;
                    t = map_1_0(q_1, t);
                    w_10 = t;
                    t = t_21;
                    t = map_1_0(Box_0_0, t);
                    x_10 = t;
                    t = (ATerm) ATmakeAppl(sym_V_2, w_10, x_10);
                    r_0 = t;
                    t = SSLsetAnnotations(r_0, s_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_HV_2))
                    {
                      k_21 = ATgetArgument(t, 0);
                      t_21 = ATgetArgument(t, 1);
                      {
                        ATerm p_11 = NULL,w_11 = NULL,z_11 = NULL,t_0 = NULL;
                        t = SSLgetAnnotations(u_21);
                        p_11 = t;
                        t = k_21;
                        t = map_1_0(r_1, t);
                        w_11 = t;
                        t = t_21;
                        t = map_1_0(Box_0_0, t);
                        z_11 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, w_11, z_11);
                        t_0 = t;
                        t = SSLsetAnnotations(t_0, p_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ALT_2))
                        {
                          k_21 = ATgetArgument(t, 0);
                          t_21 = ATgetArgument(t, 1);
                          {
                            ATerm q_12 = NULL,v_12 = NULL,x_12 = NULL,u_0 = NULL;
                            t = SSLgetAnnotations(u_21);
                            q_12 = t;
                            t = k_21;
                            t = Box_0_0(t);
                            v_12 = t;
                            t = t_21;
                            t = Box_0_0(t);
                            x_12 = t;
                            t = (ATerm) ATmakeAppl(sym_ALT_2, v_12, x_12);
                            u_0 = t;
                            t = SSLsetAnnotations(u_0, q_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FBOX_2))
                            {
                              k_21 = ATgetArgument(t, 0);
                              t_21 = ATgetArgument(t, 1);
                              {
                                ATerm l_13 = NULL,r_13 = NULL,t_13 = NULL,y_0 = NULL,r_16 = NULL;
                                t = SSLgetAnnotations(u_21);
                                l_13 = t;
                                t = k_21;
                                if(match_cons(t, sym_F_1))
                                  {
                                    r_16 = ATgetArgument(t, 0);
                                    {
                                      ATerm k_20 = NULL,o_20 = NULL,x_0 = NULL;
                                      t = SSLgetAnnotations(k_21);
                                      k_20 = t;
                                      t = r_16;
                                      t = map_1_0(s_1, t);
                                      o_20 = t;
                                      t = (ATerm) ATmakeAppl(sym_F_1, o_20);
                                      x_0 = t;
                                      t = SSLsetAnnotations(x_0, k_20);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_KW_0))
                                      {
                                        t = k_21;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_VAR_0))
                                          {
                                            t = k_21;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_NUM_0))
                                              {
                                                t = k_21;
                                              }
                                            else
                                              {
                                                if(!(match_cons(t, sym_MATH_0)))
                                                  _fail(t);
                                                t = k_21;
                                              }
                                          }
                                      }
                                  }
                                r_13 = t;
                                t = t_21;
                                t = Box_0_0(t);
                                t_13 = t;
                                t = (ATerm) ATmakeAppl(sym_FBOX_2, r_13, t_13);
                                y_0 = t;
                                t = SSLsetAnnotations(y_0, l_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_A_3))
                                {
                                  k_21 = ATgetArgument(t, 0);
                                  t_21 = ATgetArgument(t, 1);
                                  i_21 = ATgetArgument(t, 2);
                                  {
                                    ATerm k_24 = NULL,v_24 = NULL,w_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,h_1 = NULL,f_1 = NULL;
                                    t = SSLgetAnnotations(u_21);
                                    k_24 = t;
                                    t = k_21;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        b_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(k_21);
                                    a_25 = t;
                                    t = b_25;
                                    t = map_1_0(t_1, t);
                                    c_25 = t;
                                    t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, c_25);
                                    f_1 = t;
                                    t = SSLsetAnnotations(f_1, a_25);
                                    d_25 = t;
                                    t = t_21;
                                    t = map_1_0(x_1, t);
                                    v_24 = t;
                                    t = i_21;
                                    t = map_1_0(Box_0_0, t);
                                    w_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_A_3, d_25, v_24, w_24);
                                    h_1 = t;
                                    t = SSLsetAnnotations(h_1, k_24);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_R_2))
                                    {
                                      k_21 = ATgetArgument(t, 0);
                                      t_21 = ATgetArgument(t, 1);
                                      {
                                        ATerm r_43 = NULL,u_43 = NULL,v_43 = NULL,j_1 = NULL;
                                        t = SSLgetAnnotations(u_21);
                                        r_43 = t;
                                        t = k_21;
                                        t = map_1_0(y_1, t);
                                        u_43 = t;
                                        t = t_21;
                                        t = map_1_0(Box_0_0, t);
                                        v_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_R_2, u_43, v_43);
                                        j_1 = t;
                                        t = SSLsetAnnotations(j_1, r_43);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBL_2))
                                        {
                                          k_21 = ATgetArgument(t, 0);
                                          t_21 = ATgetArgument(t, 1);
                                          {
                                            ATerm j_44 = NULL,m_44 = NULL,n_44 = NULL,k_1 = NULL;
                                            t = SSLgetAnnotations(u_21);
                                            j_44 = t;
                                            t = SSL_is_string(k_21);
                                            m_44 = t;
                                            t = t_21;
                                            t = Box_0_0(t);
                                            n_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_LBL_2, m_44, n_44);
                                            k_1 = t;
                                            t = SSLsetAnnotations(k_1, j_44);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REF_2))
                                            {
                                              k_21 = ATgetArgument(t, 0);
                                              t_21 = ATgetArgument(t, 1);
                                              {
                                                ATerm v_44 = NULL,y_44 = NULL,z_44 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(u_21);
                                                v_44 = t;
                                                t = SSL_is_string(k_21);
                                                y_44 = t;
                                                t = t_21;
                                                t = Box_0_0(t);
                                                z_44 = t;
                                                t = (ATerm) ATmakeAppl(sym_REF_2, y_44, z_44);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, v_44);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  k_21 = ATgetArgument(t, 0);
                                                  t_21 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm h_45 = NULL,k_45 = NULL,l_45 = NULL,n_1 = NULL;
                                                    t = SSLgetAnnotations(u_21);
                                                    h_45 = t;
                                                    t = k_21;
                                                    t = map_1_0(z_1, t);
                                                    k_45 = t;
                                                    t = t_21;
                                                    t = map_1_0(Box_0_0, t);
                                                    l_45 = t;
                                                    t = (ATerm) ATmakeAppl(sym_C_2, k_45, l_45);
                                                    n_1 = t;
                                                    t = SSLsetAnnotations(n_1, h_45);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_L_2))
                                                    {
                                                      k_21 = ATgetArgument(t, 0);
                                                      t_21 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm z_45 = NULL,c_46 = NULL,d_46 = NULL,o_1 = NULL;
                                                        t = SSLgetAnnotations(u_21);
                                                        z_45 = t;
                                                        t = k_21;
                                                        t = Box_0_0(t);
                                                        c_46 = t;
                                                        t = t_21;
                                                        t = Box_0_0(t);
                                                        d_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_L_2, c_46, d_46);
                                                        o_1 = t;
                                                        t = SSLsetAnnotations(o_1, z_45);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = u_21;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      t = debug_1_0(a_2, t);
    }
  return(t);
}
ATerm t_3 (ATerm c_13, ATerm d_13, ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_fputc(c_13, d_13);
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
  return(t);
}
ATerm u_3 (ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm b_23 = NULL;
  t = SSL_write_term_to_stream_text(d_37, e_37);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_23);
  return(t);
}
ATerm w_3 (ATerm f_77 (ATerm), ATerm l_426, ATerm h_37, ATerm t)
{
  ATerm g_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_426, term_l_5);
  t = open_stream_0_0(t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_23, h_37);
  t = f_77(t);
  t = fclose_0_0(t);
  t = h_37;
  return(t);
}
ATerm v_3 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm i_23 = NULL;
  t = SSL_write_term_to_stream_baf(z_36, a_37);
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_23);
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_5 = ATgetArgument(t, 0);
      if(match_cons(m_5, sym_Stream_1))
        {
          r_46 = ATgetArgument(m_5, 0);
        }
      else
        _fail(t);
      s_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(r_46, s_46, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_5 = ATgetArgument(t, 0);
      if(match_cons(n_5, sym_Stream_1))
        {
          g_47 = ATgetArgument(n_5, 0);
        }
      else
        _fail(t);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(g_47, h_47, t);
  d_47 = t;
  t = term_o_5;
  e_47 = t;
  t = d_47;
  if(match_cons(t, sym_Stream_1))
    {
      f_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_5, d_47);
  t = t_3(e_47, f_47, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,b_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,m_24 = NULL,m_26 = NULL,n_26 = NULL,s_2 = NULL,r_2 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_23);
  d_24 = t;
  t = e_24;
  {
    ATerm p_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_23 != NULL) && (t_23 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_2, t);
        ;
        LocalPopChoice(q_5);
      }
    else
      {
        t = p_5;
        t = term_r_5;
        t_23 = t;
      }
    if(((m_24 != NULL) && (m_24 != t)))
      _fail(t);
    else
      m_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_24, f_24);
    if(((r_2 != NULL) && (r_2 != t)))
      _fail(t);
    else
      r_2 = t;
    t = SSLsetAnnotations(r_2, d_24);
    t = u_23;
    if(match_cons(t, sym__2))
      {
        if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          w_23 = ATgetArgument(t, 0);
        if(((x_23 != NULL) && (x_23 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          x_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_23);
    if(((v_23 != NULL) && (v_23 != t)))
      _fail(t);
    else
      v_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_23, (ATerm) ATmakeAppl(sym__2, not_null(t_23), x_23));
    if(((s_2 != NULL) && (s_2 != t)))
      _fail(t);
    else
      s_2 = t;
    t = SSLsetAnnotations(s_2, v_23);
    if(((b_24 != NULL) && (b_24 != t)))
      _fail(t);
    else
      b_24 = t;
    if(match_cons(t, sym__2))
      {
        if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_26 = ATgetArgument(t, 0);
        if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          n_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm s_5 = t;
      int t_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,t_2 = NULL;
          t = SSLgetAnnotations(b_24);
          k_46 = t;
          t = m_26;
          t = fetch_1_0(c_2, t);
          n_46 = t;
          t = n_26;
          if(match_cons(t, sym__2))
            {
              p_46 = ATgetArgument(t, 0);
              q_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(d_2, p_46, q_46, t);
          o_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
          t_2 = t;
          t = SSLsetAnnotations(t_2, k_46);
          ;
          LocalPopChoice(t_5);
        }
      else
        {
          t = s_5;
          {
            ATerm x_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,u_2 = NULL;
            t = SSLgetAnnotations(b_24);
            x_46 = t;
            t = n_26;
            if(match_cons(t, sym__2))
              {
                b_47 = ATgetArgument(t, 0);
                c_47 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(e_2, b_47, c_47, t);
            a_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_26, a_47);
            u_2 = t;
            t = SSLsetAnnotations(u_2, x_46);
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
ATerm apply_strategy_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  u_26 = t;
  t = dtime_0_0(t);
  t = u_26;
  t = i_78(t);
  t_26 = t;
  t = dtime_0_0(t);
  q_26 = t;
  t = t_26;
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_26), (ATerm) ATmakeAppl(sym_Runtime_1, q_26)), s_26);
  return(t);
}
ATerm k_27 (ATerm e_27, ATerm t)
{
  t = SSL_fclose(e_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_27 = ATgetArgument(t, 0);
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_27);
            ;
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            t = k_27(i_27, t);
          }
      }
    }
  else
    {
      t = k_27(i_27, t);
    }
  return(t);
}
ATerm x_3 (ATerm f_37, ATerm t)
{
  t = SSL_read_term_from_stream(f_37);
  return(t);
}
ATerm y_3 (ATerm e_13, ATerm f_13, ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_fopen(e_13, f_13);
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  t = SSL_stdin_stream();
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  t = SSL_stdout_stream();
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_27 = NULL;
  t = SSL_stderr_stream();
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_27);
  return(t);
}
ATerm v_28 (ATerm u_27, ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_explode_term(u_27);
  if(match_cons(t, sym__2))
    {
      ATerm w_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_5 = ATgetArgument(t, 1);
        if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
          {
            v_27 = ATgetFirst((ATermList) x_5);
            {
              ATerm y_5 = (ATerm) ATgetNext((ATermList) x_5);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_28 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,g_28 = NULL,z_2 = NULL;
  t = SSLgetAnnotations(a_28);
  d_28 = t;
  t = y_27;
  if(match_cons(t, sym_Path_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_28, z_27);
  z_2 = t;
  t = SSLsetAnnotations(z_2, d_28);
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(b_28, c_28, t);
  return(t);
}
ATerm x_28 (ATerm i_28, ATerm j_28, ATerm k_28, ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,q_28 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(k_28);
  n_28 = t;
  t = SSL_is_string(i_28);
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_28, j_28);
  a_3 = t;
  t = SSLsetAnnotations(a_3, n_28);
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(l_28, m_28, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      ATerm a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  s_28 = t;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_28(s_28, t);
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
                  t = w_28(t_28, u_28, s_28, t);
                  ;
                  LocalPopChoice(e_6);
                }
              else
                {
                  t = d_6;
                  t = x_28(t_28, u_28, s_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_28(s_28, t);
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_f_6;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL;
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, term_i_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      t = debug_1_0(f_2, t);
      _fail(t);
    }
  z_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(a_29, t);
  y_28 = t;
  t = z_28;
  t = fclose_0_0(t);
  t = y_28;
  return(t);
}
ATerm fetch_1_0 (ATerm h_63 (ATerm), ATerm t)
{
  ATerm z_29 (ATerm t)
  {
    ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
    w_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_29 = ATgetFirst((ATermList) t);
        y_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_47 = NULL,w_47 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(w_29);
          t_47 = t;
          t = x_29;
          t = h_63(t);
          w_47 = t;
          t = (ATerm) ATinsert(CheckATermList(y_29), w_47);
          d_3 = t;
          t = SSLsetAnnotations(d_3, t_47);
          ;
          LocalPopChoice(k_6);
        }
      else
        {
          t = j_6;
          {
            ATerm e_48 = NULL,h_48 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(w_29);
            e_48 = t;
            t = y_29;
            t = z_29(t);
            h_48 = t;
            t = (ATerm) ATinsert(CheckATermList(h_48), x_29);
            e_3 = t;
            t = SSLsetAnnotations(e_3, e_48);
          }
        }
    }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm s_3 (ATerm e_32, ATerm f_32, ATerm t)
{
  t = SSL_strcat(e_32, f_32);
  return(t);
}
ATerm debug_1_0 (ATerm d_77 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  c_30 = t;
  t = d_77(t);
  d_30 = t;
  t = term_e_5;
  e_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_30), d_30);
  f_30 = t;
  t = SSL_printnl(e_30, f_30);
  t = c_30;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_n_6;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_30 = NULL;
      m_30 = t;
      t = SSL_is_string(m_30);
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
        ATerm q_6 = t;
        int r_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_2, t);
            ;
            LocalPopChoice(r_6);
          }
        else
          {
            t = q_6;
            {
              ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
              s_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_30 = ATgetArgument(t, 0);
                  t = t_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_30 = ATgetArgument(t, 0);
                      t = t_30;
                      {
                        ATerm s_6 = t;
                        int t_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_6);
                          }
                        else
                          {
                            t = s_6;
                            t = debug_1_0(h_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_30 = NULL,z_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_30 = ATgetArgument(t, 0);
                          u_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_30;
                      t = eval_config_0_0(t);
                      y_30 = t;
                      t = u_30;
                      t = eval_config_0_0(t);
                      z_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_30, z_30);
                      t = s_3(y_30, z_30, t);
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
  ATerm d_31 = NULL,e_31 = NULL;
  d_31 = t;
  t = term_u_6;
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, d_31);
  t = b_4(e_31, d_31, t);
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_31 = NULL,g_31 = NULL;
        t = eval_config_0_0(t);
        f_31 = t;
        t = term_u_6;
        g_31 = t;
        t = SSL_table_put(g_31, d_31, f_31);
        t = f_31;
        ;
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_75 (ATerm), ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_31 = NULL;
        t = term_z_6;
        t = get_config_0_0(t);
        m_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_31, term_a_7);
        t = geq_0_0(t);
        t = k_31;
        t = d_75(t);
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = k_31;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  if(match_string(t, "-k"))
    {
      t = p_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_31;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  t = SSL_string_to_int(q_31);
  r_31 = t;
  t = term_b_7;
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, r_31);
  t = e_4(s_31, r_31, t);
  t = q_31;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, k_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  if(match_string(t, "-S"))
    {
      t = u_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_31;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  t = term_z_6;
  v_31 = t;
  t = term_d_7;
  w_31 = t;
  t = term_e_7;
  t = e_4(v_31, w_31, t);
  t = term_f_7;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_g_7;
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
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  t = SSL_string_to_int(x_31);
  y_31 = t;
  t = term_z_6;
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, y_31);
  t = e_4(z_31, y_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_31);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  t = term_i_7;
  a_32 = t;
  t = term_d_5;
  b_32 = t;
  t = term_j_7;
  t = e_4(a_32, b_32, t);
  t = term_k_7;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_2, m_2, n_2, t);
      ;
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, p_2, q_2, t);
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            t = Option_3_0(v_2, w_2, x_2, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm c_32 = NULL;
  t = term_u_6;
  c_32 = t;
  t = SSL_table_put(c_32, s_35, t_35);
  t = (ATerm) ATmakeAppl(sym__3, term_u_6, s_35, t_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
      t = term_d_5;
      t = h_0(t);
      j_32 = t;
      t = term_q_7;
      k_32 = t;
      t = term_r_7;
      l_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_7, term_r_7, j_32);
      t = c_4(k_32, l_32, j_32, t);
      _fail(t);
    }
  else
    {
      ATerm o_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_32 = ATgetFirst((ATermList) t);
          i_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_32;
      t = d_0(t);
      t = term_d_5;
      t = g_0(t);
      o_32 = t;
      t = (ATerm) ATinsert(CheckATermList(i_32), o_32);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  if(match_string(t, "-o"))
    {
      t = q_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_32;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  r_32 = t;
  t = term_s_7;
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, r_32);
  t = e_4(s_32, r_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_32);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, b_3, c_3, t);
  return(t);
}
ATerm c_4 (ATerm l_25, ATerm m_25, ATerm k_25, ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_25, m_25);
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_7 = ATgetArgument(t, 0);
            ATerm x_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_25, m_25);
        t = b_4(l_25, m_25, t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = (ATerm) ATempty;
      }
    v_32 = t;
    t = (ATerm) ATinsert(CheckATermList(v_32), k_25);
    w_32 = t;
    t = SSL_table_put(l_25, m_25, w_32);
    t = u_32;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
      t = term_d_5;
      t = m_0(t);
      h_33 = t;
      t = term_q_7;
      i_33 = t;
      t = term_r_7;
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_7, term_r_7, h_33);
      t = c_4(i_33, j_33, h_33, t);
      _fail(t);
    }
  else
    {
      ATerm n_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_33 = ATgetFirst((ATermList) t);
          e_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_33 = ATgetFirst((ATermList) t);
          g_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_33;
      t = k_0(t);
      t = f_33;
      t = l_0(t);
      n_33 = t;
      t = (ATerm) ATinsert(CheckATermList(g_33), n_33);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  if(match_string(t, "-i"))
    {
      t = p_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_33;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  q_33 = t;
  t = term_y_7;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, q_33);
  t = e_4(r_33, q_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_33);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, g_3, i_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_5;
  t = whoami_0_0(t);
  s_33 = t;
  t = term_e_5;
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_8), s_33);
  v_33 = t;
  t = SSL_printnl(u_33, v_33);
  t = term_h_5;
  t_33 = t;
  t = SSL_exit(t_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_8;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm p_23, ATerm q_23, ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_23, q_23);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = SSL_addr(p_23, q_23);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_33;
      t = p_69(t);
    }
  else
    {
      ATerm c_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_33 = ATgetFirst((ATermList) t);
          z_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_33;
      t = foldr_2_0(p_69, q_69, t);
      c_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_33, c_34);
      t = q_69(t);
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
  t = term_d_7;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(y_48, z_48, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_34 = NULL,u_48 = NULL,v_48 = NULL;
  t = times_0_0(t);
  v_48 = t;
  t = SSL_explode_term(v_48);
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_48;
  t = foldr_2_0(k_3, m_3, t);
  f_34 = t;
  t = SSL_TicksToSeconds(f_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  if(match_cons(t, sym__2))
    {
      r_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_34;
        if((r_34 != t))
          {
            _fail(t);
          }
        t = q_34;
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = (ATerm) ATmakeAppl(sym__2, r_34, s_34);
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_34, s_34);
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              t = SSL_gtr(r_34, s_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_34, s_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_75 (ATerm), ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_34 = NULL;
        t = term_z_6;
        t = get_config_0_0(t);
        y_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_34, term_h_5);
        t = geq_0_0(t);
        t = w_34;
        t = c_75(t);
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = w_34;
      }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,d_35 = NULL,e_35 = NULL;
  t = run_time_0_0(t);
  a_35 = t;
  t = term_d_5;
  t = whoami_0_0(t);
  b_35 = t;
  t = term_e_5;
  d_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_8), a_35), term_l_8), b_35);
  e_35 = t;
  t = SSL_printnl(d_35, e_35);
  t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_8), a_35), term_l_8), b_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_7;
  f_35 = t;
  t = SSL_exit(f_35);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  o_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_35 = ATgetArgument(t, 0);
          {
            ATerm l_49 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(o_35);
            l_49 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_35);
            h_3 = t;
            t = SSLsetAnnotations(h_3, l_49);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      t = fetch_1_0(q_3, t);
    }
  t = g_79(t);
  return(t);
}
ATerm map_1_0 (ATerm x_62 (ATerm), ATerm t)
{
  ATerm l_36 (ATerm t)
  {
    ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
    i_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_36;
      }
    else
      {
        ATerm t_49 = NULL,w_49 = NULL,x_49 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_36 = ATgetFirst((ATermList) t);
            k_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_36);
        t_49 = t;
        t = j_36;
        t = x_62(t);
        w_49 = t;
        t = k_36;
        t = l_36(t);
        x_49 = t;
        t = (ATerm) ATinsert(CheckATermList(x_49), w_49);
        j_3 = t;
        t = SSLsetAnnotations(j_3, t_49);
      }
    return(t);
  }
  t = l_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_36 = ATgetFirst((ATermList) t);
      p_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_36 = NULL,u_36 = NULL;
        ATerm a_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_36)), not_null(u_36));
          return(t);
        }
        t = p_36;
        t = j_0(t);
        if(((t_36 != NULL) && (t_36 != t)))
          _fail(t);
        else
          t_36 = t;
        t = o_36;
        t = i_0(t);
        if(((u_36 != NULL) && (u_36 != t)))
          _fail(t);
        else
          u_36 = t;
        t = p_36;
        t = reverse_acc_2_0(i_0, a_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_5;
      t = j_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm c_27, ATerm d_27, ATerm t)
{
  t = SSL_table_get(c_27, d_27);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm y_36 = NULL,b_37 = NULL,c_37 = NULL,l_3 = NULL;
  c_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_37);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_37);
  l_3 = t;
  t = SSLsetAnnotations(l_3, y_36);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_37), term_q_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      t = fetch_1_0(f_4, t);
    }
  t = term_t_8;
  t = echo_0_0(t);
  t = term_q_7;
  w_36 = t;
  t = term_r_7;
  x_36 = t;
  t = term_u_8;
  t = b_4(w_36, x_36, t);
  t = reverse_acc_2_0(_id, g_4, t);
  t = map_1_0(h_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_8 = ATgetFirst((ATermList) t);
                ATerm y_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_37;
          }
        ;
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATinsert(ATempty, l_37);
      }
    m_37 = t;
    t = term_r_5;
    n_37 = t;
    t = SSL_printnl(n_37, m_37);
    t = l_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_8;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL;
  t = term_a_9;
  r_37 = t;
  t = term_d_5;
  s_37 = t;
  t = term_c_9;
  t = e_4(r_37, s_37, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  t = term_a_9;
  v_37 = t;
  t = term_d_5;
  w_37 = t;
  t = term_c_9;
  t = e_4(v_37, w_37, t);
  t = term_e_9;
  t_37 = t;
  t = term_d_5;
  u_37 = t;
  t = term_f_9;
  t = e_4(t_37, u_37, t);
  t = term_g_9;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_h_9;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = Option_3_0(l_4, m_4, n_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_50 (ATerm), ATerm w_50 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,n_3 = NULL;
  c_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_37 = ATgetFirst((ATermList) t);
      z_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_38);
  x_37 = t;
  t = y_37;
  t = v_50(t);
  a_38 = t;
  t = z_37;
  t = w_50(t);
  b_38 = t;
  t = (ATerm) ATinsert(CheckATermList(b_38), a_38);
  n_3 = t;
  t = SSLsetAnnotations(n_3, x_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,v_38 = NULL,w_38 = NULL,p_3 = NULL;
  l_38 = t;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_9;
        t = e_81(t);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
      }
    t = l_38;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_38 = ATgetFirst((ATermList) t);
        t_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_38);
    r_38 = t;
    t = term_b_8;
    w_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_8, s_38);
    t = e_4(w_38, s_38, t);
    t = t_38;
    {
      ATerm h_39 (ATerm t)
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = t;
            int q_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_38 = NULL;
                z_38 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_38;
                ;
                LocalPopChoice(q_9);
              }
            else
              {
                t = p_9;
                t = e_81(t);
                t = Cons_2_0(_id, h_39, t);
              }
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm d_39 = NULL,e_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_39 = ATgetFirst((ATermList) t);
                  e_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_39), (ATerm) ATmakeAppl(sym_Undefined_1, d_39));
            }
          }
        return(t);
      }
      t = h_39(t);
      if(((v_38 != NULL) && (v_38 != t)))
        _fail(t);
      else
        v_38 = t;
      t = (ATerm) ATinsert(CheckATermList(v_38), (ATerm) ATmakeAppl(sym_Program_1, s_38));
      if(((p_3 != NULL) && (p_3 != t)))
        _fail(t);
      else
        p_3 = t;
      t = SSLsetAnnotations(p_3, r_38);
    }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm t_39 = NULL;
  t_39 = t;
  if(match_string(t, "--help"))
    {
      t = t_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_39;
        }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  t = term_p_8;
  u_39 = t;
  t = term_d_5;
  v_39 = t;
  t = term_s_9;
  t = e_4(u_39, v_39, t);
  t = term_t_9;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_u_9;
  return(t);
}
ATerm s_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  o_39 = t;
  t = term_q_7;
  q_39 = t;
  t = term_r_7;
  r_39 = t;
  t = (ATerm) ATempty;
  s_39 = t;
  t = SSL_table_put(q_39, r_39, s_39);
  t = o_39;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm v_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_81(t);
          ;
          LocalPopChoice(y_9);
        }
      else
        {
          t = v_9;
          {
            ATerm z_9 = t;
            int b_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_4, q_4, r_4, t);
                ;
                LocalPopChoice(b_10);
              }
            else
              {
                t = z_9;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
    {
      ATerm g_10 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_40 = NULL;
          c_40 = t;
          {
            ATerm i_10 = t;
            int j_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_50 = NULL;
                t = c_40;
                {
                  ATerm k_10 = t;
                  int l_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_8;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_10);
                    }
                  else
                    {
                      t = k_10;
                      t = fetch_1_0(s_4, t);
                    }
                  t = c_40;
                  t = default_system_usage_0_0(t);
                  t = term_d_7;
                  e_50 = t;
                  t = SSL_exit(e_50);
                }
                ;
                LocalPopChoice(j_10);
              }
            else
              {
                t = i_10;
                {
                  ATerm i_50 = NULL;
                  t = term_a_9;
                  t = get_config_0_0(t);
                  t = c_40;
                  t = default_system_about_0_0(t);
                  t = term_d_7;
                  i_50 = t;
                  t = SSL_exit(i_50);
                }
              }
          }
          ;
          LocalPopChoice(h_10);
        }
      else
        {
          t = g_10;
          {
            ATerm m_10 = t;
            int n_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
                ATerm t_4 (ATerm t)
                {
                  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,r_3 = NULL;
                  i_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_40);
                  g_40 = t;
                  t = h_40;
                  if(((m_39 != NULL) && (m_39 != t)))
                    _fail(t);
                  else
                    m_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_40);
                  r_3 = t;
                  t = SSLsetAnnotations(r_3, g_40);
                  return(t);
                }
                t = fetch_1_0(t_4, t);
                t = term_e_5;
                if(((e_40 != NULL) && (e_40 != t)))
                  _fail(t);
                else
                  e_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_39)), term_o_10);
                if(((f_40 != NULL) && (f_40 != t)))
                  _fail(t);
                else
                  f_40 = t;
                t = SSL_printnl(e_40, f_40);
                t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_39)), term_o_10));
                t = default_system_usage_0_0(t);
                t = term_h_5;
                if(((d_40 != NULL) && (d_40 != t)))
                  _fail(t);
                else
                  d_40 = t;
                t = SSL_exit(d_40);
                ;
                LocalPopChoice(n_10);
              }
            else
              {
                t = m_10;
              }
          }
        }
      if(((n_39 != NULL) && (n_39 != t)))
        _fail(t);
      else
        n_39 = t;
      t = term_q_7;
      if(((p_39 != NULL) && (p_39 != t)))
        _fail(t);
      else
        p_39 = t;
      t = SSL_table_destroy(p_39);
      t = n_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  t = parse_options_1_0(i_79, t);
  n_40 = t;
  t = term_p_10;
  q_40 = t;
  t = SSL_table_create(q_40);
  t = term_p_10;
  o_40 = t;
  t = term_q_10;
  p_40 = t;
  t = SSL_table_put(o_40, p_40, n_40);
  t = n_40;
  t = k_79(t);
  {
    ATerm r_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_79, t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = r_10;
        {
          ATerm u_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_79(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_10);
            }
          else
            {
              t = u_10;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = if_verbose2_1_0(a_5, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  t = term_y_10;
  r_40 = t;
  t = term_d_5;
  s_40 = t;
  t = term_e_11;
  t = e_4(r_40, s_40, t);
  t = term_f_11;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  t_40 = t;
  t = term_b_8;
  t = get_config_0_0(t);
  u_40 = t;
  t = term_e_5;
  v_40 = t;
  t = (ATerm) ATinsert(ATempty, u_40);
  w_40 = t;
  t = SSL_printnl(v_40, w_40);
  t = t_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_78(t);
        ;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        {
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              {
                ATerm l_11 = t;
                int m_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_11);
                  }
                else
                  {
                    t = l_11;
                    {
                      ATerm n_11 = t;
                      int o_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_4, y_4, z_4, t);
                          ;
                          LocalPopChoice(o_11);
                        }
                      else
                        {
                          t = n_11;
                          {
                            ATerm q_11 = t;
                            int r_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_11);
                              }
                            else
                              {
                                t = q_11;
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
  ATerm w_4 (ATerm t)
  {
    ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
    y_40 = t;
    {
      ATerm s_11 = t;
      int t_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_40 != NULL) && (x_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_5, t);
          ;
          LocalPopChoice(t_11);
        }
      else
        {
          t = s_11;
          t = term_u_11;
          x_40 = t;
        }
      t = not_null(x_40);
      t = ReadFromFile_0_0(t);
      if(((z_40 != NULL) && (z_40 != t)))
        _fail(t);
      else
        z_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_40, z_40);
      t = apply_strategy_1_0(r_78, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(u_4, t_78, v_4, w_4, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,d_4 = NULL;
  e_41 = t;
  if(match_cons(t, sym__2))
    {
      b_41 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  a_41 = t;
  t = c_41;
  t = Box_0_0(t);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, d_41);
  d_4 = t;
  t = SSLsetAnnotations(d_4, a_41);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(c_5, _fail, default_usage_0_0, t);
  return(t);
}

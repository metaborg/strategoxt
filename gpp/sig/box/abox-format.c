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
ATerm term_z_10;
ATerm term_w_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
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
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_d_5);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_d_5);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_d_5);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_d_5);
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
ATerm t_3 (ATerm p_24, ATerm q_24, ATerm);
ATerm u_3 (ATerm o_48, ATerm p_48, ATerm);
ATerm w_3 (ATerm k_88 (ATerm), ATerm h_449, ATerm s_48, ATerm);
ATerm v_3 (ATerm k_48, ATerm l_48, ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_89 (ATerm), ATerm);
ATerm x_26 (ATerm r_26, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm q_48, ATerm);
ATerm y_3 (ATerm r_24, ATerm s_24, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_28 (ATerm j_27, ATerm);
ATerm l_28 (ATerm n_27, ATerm o_27, ATerm p_27, ATerm);
ATerm m_28 (ATerm x_27, ATerm y_27, ATerm z_27, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm s_3 (ATerm p_43, ATerm q_43, ATerm);
ATerm debug_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_86 (ATerm), ATerm);
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
ATerm e_4 (ATerm d_47, ATerm e_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm y_36, ATerm z_36, ATerm x_36, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm c_35, ATerm d_35, ATerm);
ATerm foldr_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm need_help_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_74 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm p_38, ATerm q_38, ATerm);
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
ATerm Cons_2_0 (ATerm g_62 (ATerm), ATerm h_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_92 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm parse_options_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm iowrap_3_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  b_0 = t;
  t = term_d_5;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_e_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_5), l_0), term_f_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_h_5;
  m_0 = t;
  t = SSL_exit(m_0);
  t = b_0;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,k_0 = NULL;
  g_10 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      d_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_10);
  c_10 = t;
  t = d_10;
  if(match_cons(t, sym_VS_0))
    {
      t = d_10;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = d_10;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = d_10;
        }
    }
  t = SSL_is_string(e_10);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, d_10, f_10);
  k_0 = t;
  t = SSLsetAnnotations(k_0, c_10);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,q_0 = NULL;
  e_11 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      b_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_11);
  a_11 = t;
  t = b_11;
  if(match_cons(t, sym_VS_0))
    {
      t = b_11;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = b_11;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = b_11;
        }
    }
  t = SSL_is_string(c_11);
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, b_11, d_11);
  q_0 = t;
  t = SSLsetAnnotations(q_0, a_11);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,h_12 = NULL,i_12 = NULL,s_0 = NULL;
  i_12 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_12);
  c_12 = t;
  t = d_12;
  if(match_cons(t, sym_VS_0))
    {
      t = d_12;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = d_12;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = d_12;
        }
    }
  t = SSL_is_string(e_12);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, d_12, h_12);
  s_0 = t;
  t = SSLsetAnnotations(s_0, c_12);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm d_22 = NULL,f_22 = NULL,g_22 = NULL;
  d_22 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
      {
        ATerm t_22 = NULL,y_22 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(d_22);
        t_22 = t;
        t = f_22;
        if(match_cons(t, sym_FN_0))
          {
            t = f_22;
          }
        else
          {
            if(match_cons(t, sym_FM_0))
              {
                t = f_22;
              }
            else
              {
                if(match_cons(t, sym_SE_0))
                  {
                    t = f_22;
                  }
                else
                  {
                    if(match_cons(t, sym_SH_0))
                      {
                        t = f_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_SZ_0))
                          {
                            t = f_22;
                          }
                        else
                          {
                            if(!(match_cons(t, sym_CL_0)))
                              _fail(t);
                            t = f_22;
                          }
                      }
                  }
              }
          }
        t = SSL_is_string(g_22);
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym_FNAT_2, f_22, y_22);
        v_0 = t;
        t = SSLsetAnnotations(v_0, t_22);
      }
    }
  else
    {
      ATerm o_23 = NULL,u_23 = NULL,w_0 = NULL;
      if(match_cons(t, sym_FFID_2))
        {
          f_22 = ATgetArgument(t, 0);
          g_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_22);
      o_23 = t;
      t = f_22;
      if(match_cons(t, sym_FN_0))
        {
          t = f_22;
        }
      else
        {
          if(match_cons(t, sym_FM_0))
            {
              t = f_22;
            }
          else
            {
              if(match_cons(t, sym_SE_0))
                {
                  t = f_22;
                }
              else
                {
                  if(match_cons(t, sym_SH_0))
                    {
                      t = f_22;
                    }
                  else
                    {
                      if(match_cons(t, sym_SZ_0))
                        {
                          t = f_22;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_CL_0)))
                            _fail(t);
                          t = f_22;
                        }
                    }
                }
            }
        }
      t = SSL_is_string(g_22);
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym_FFID_2, f_22, u_23);
      w_0 = t;
      t = SSLsetAnnotations(w_0, o_23);
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm e_33 = NULL,m_33 = NULL;
  e_33 = t;
  if(match_cons(t, sym_AL_1))
    {
      m_33 = ATgetArgument(t, 0);
      {
        ATerm w_40 = NULL,y_40 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(e_33);
        w_40 = t;
        t = m_33;
        t = map_1_0(u_1, t);
        y_40 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, y_40);
        a_1 = t;
        t = SSLsetAnnotations(a_1, w_40);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          m_33 = ATgetArgument(t, 0);
          {
            ATerm r_41 = NULL,t_41 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(e_33);
            r_41 = t;
            t = m_33;
            t = map_1_0(v_1, t);
            t_41 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, t_41);
            c_1 = t;
            t = SSLsetAnnotations(c_1, r_41);
          }
        }
      else
        {
          ATerm m_42 = NULL,o_42 = NULL,e_1 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              m_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_33);
          m_42 = t;
          t = m_33;
          t = map_1_0(w_1, t);
          o_42 = t;
          t = (ATerm) ATmakeAppl(sym_AR_1, o_42);
          e_1 = t;
          t = SSLsetAnnotations(e_1, m_42);
        }
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,z_0 = NULL;
  n_41 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_41);
  j_41 = t;
  t = k_41;
  if(match_cons(t, sym_VS_0))
    {
      t = k_41;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = k_41;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = k_41;
        }
    }
  t = SSL_is_string(l_41);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, k_41, m_41);
  z_0 = t;
  t = SSLsetAnnotations(z_0, j_41);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,b_1 = NULL;
  i_42 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      f_42 = ATgetArgument(t, 0);
      g_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_42);
  e_42 = t;
  t = f_42;
  if(match_cons(t, sym_VS_0))
    {
      t = f_42;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = f_42;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = f_42;
        }
    }
  t = SSL_is_string(g_42);
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, f_42, h_42);
  b_1 = t;
  t = SSLsetAnnotations(b_1, e_42);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,d_1 = NULL;
  d_43 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      a_43 = ATgetArgument(t, 0);
      b_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_43);
  z_42 = t;
  t = a_43;
  if(match_cons(t, sym_VS_0))
    {
      t = a_43;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = a_43;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = a_43;
        }
    }
  t = SSL_is_string(b_43);
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, a_43, c_43);
  d_1 = t;
  t = SSLsetAnnotations(d_1, z_42);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,l_34 = NULL,w_34 = NULL,x_34 = NULL,g_1 = NULL;
  x_34 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      z_33 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  y_33 = t;
  t = z_33;
  if(match_cons(t, sym_VS_0))
    {
      t = z_33;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = z_33;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = z_33;
        }
    }
  t = SSL_is_string(l_34);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, z_33, w_34);
  g_1 = t;
  t = SSLsetAnnotations(g_1, y_33);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm o_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,i_1 = NULL;
  u_43 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      r_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_43);
  o_43 = t;
  t = r_43;
  if(match_cons(t, sym_VS_0))
    {
      t = r_43;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = r_43;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = r_43;
        }
    }
  t = SSL_is_string(s_43);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, r_43, t_43);
  i_1 = t;
  t = SSLsetAnnotations(i_1, o_43);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,m_1 = NULL;
  k_45 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      h_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_45);
  g_45 = t;
  t = h_45;
  if(match_cons(t, sym_VS_0))
    {
      t = h_45;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = h_45;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = h_45;
        }
    }
  t = SSL_is_string(i_45);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, h_45, j_45);
  m_1 = t;
  t = SSLsetAnnotations(m_1, g_45);
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
      ATerm a_21 = NULL,h_21 = NULL,i_21 = NULL,m_21 = NULL;
      m_21 = t;
      if(match_cons(t, sym_S_1))
        {
          h_21 = ATgetArgument(t, 0);
          {
            ATerm a_9 = NULL,f_9 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(m_21);
            a_9 = t;
            t = SSL_is_string(h_21);
            f_9 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, f_9);
            f_0 = t;
            t = SSLsetAnnotations(f_0, a_9);
          }
        }
      else
        {
          if(match_cons(t, sym_H_2))
            {
              h_21 = ATgetArgument(t, 0);
              i_21 = ATgetArgument(t, 1);
              {
                ATerm t_9 = NULL,x_9 = NULL,z_9 = NULL,p_0 = NULL;
                t = SSLgetAnnotations(m_21);
                t_9 = t;
                t = h_21;
                t = map_1_0(p_1, t);
                x_9 = t;
                t = i_21;
                t = map_1_0(Box_0_0, t);
                z_9 = t;
                t = (ATerm) ATmakeAppl(sym_H_2, x_9, z_9);
                p_0 = t;
                t = SSLsetAnnotations(p_0, t_9);
              }
            }
          else
            {
              if(match_cons(t, sym_V_2))
                {
                  h_21 = ATgetArgument(t, 0);
                  i_21 = ATgetArgument(t, 1);
                  {
                    ATerm u_10 = NULL,x_10 = NULL,y_10 = NULL,r_0 = NULL;
                    t = SSLgetAnnotations(m_21);
                    u_10 = t;
                    t = h_21;
                    t = map_1_0(q_1, t);
                    x_10 = t;
                    t = i_21;
                    t = map_1_0(Box_0_0, t);
                    y_10 = t;
                    t = (ATerm) ATmakeAppl(sym_V_2, x_10, y_10);
                    r_0 = t;
                    t = SSLsetAnnotations(r_0, u_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_HV_2))
                    {
                      h_21 = ATgetArgument(t, 0);
                      i_21 = ATgetArgument(t, 1);
                      {
                        ATerm q_11 = NULL,z_11 = NULL,a_12 = NULL,t_0 = NULL;
                        t = SSLgetAnnotations(m_21);
                        q_11 = t;
                        t = h_21;
                        t = map_1_0(r_1, t);
                        z_11 = t;
                        t = i_21;
                        t = map_1_0(Box_0_0, t);
                        a_12 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, z_11, a_12);
                        t_0 = t;
                        t = SSLsetAnnotations(t_0, q_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ALT_2))
                        {
                          h_21 = ATgetArgument(t, 0);
                          i_21 = ATgetArgument(t, 1);
                          {
                            ATerm s_12 = NULL,x_12 = NULL,z_12 = NULL,u_0 = NULL;
                            t = SSLgetAnnotations(m_21);
                            s_12 = t;
                            t = h_21;
                            t = Box_0_0(t);
                            x_12 = t;
                            t = i_21;
                            t = Box_0_0(t);
                            z_12 = t;
                            t = (ATerm) ATmakeAppl(sym_ALT_2, x_12, z_12);
                            u_0 = t;
                            t = SSLsetAnnotations(u_0, s_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FBOX_2))
                            {
                              h_21 = ATgetArgument(t, 0);
                              i_21 = ATgetArgument(t, 1);
                              {
                                ATerm l_13 = NULL,p_13 = NULL,s_13 = NULL,y_0 = NULL,v_16 = NULL;
                                t = SSLgetAnnotations(m_21);
                                l_13 = t;
                                t = h_21;
                                if(match_cons(t, sym_F_1))
                                  {
                                    v_16 = ATgetArgument(t, 0);
                                    {
                                      ATerm o_20 = NULL,q_20 = NULL,x_0 = NULL;
                                      t = SSLgetAnnotations(h_21);
                                      o_20 = t;
                                      t = v_16;
                                      t = map_1_0(s_1, t);
                                      q_20 = t;
                                      t = (ATerm) ATmakeAppl(sym_F_1, q_20);
                                      x_0 = t;
                                      t = SSLsetAnnotations(x_0, o_20);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_KW_0))
                                      {
                                        t = h_21;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_VAR_0))
                                          {
                                            t = h_21;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_NUM_0))
                                              {
                                                t = h_21;
                                              }
                                            else
                                              {
                                                if(!(match_cons(t, sym_MATH_0)))
                                                  _fail(t);
                                                t = h_21;
                                              }
                                          }
                                      }
                                  }
                                p_13 = t;
                                t = i_21;
                                t = Box_0_0(t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_FBOX_2, p_13, s_13);
                                y_0 = t;
                                t = SSLsetAnnotations(y_0, l_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_A_3))
                                {
                                  h_21 = ATgetArgument(t, 0);
                                  i_21 = ATgetArgument(t, 1);
                                  a_21 = ATgetArgument(t, 2);
                                  {
                                    ATerm o_24 = NULL,w_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,h_1 = NULL,f_1 = NULL;
                                    t = SSLgetAnnotations(m_21);
                                    o_24 = t;
                                    t = h_21;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        c_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(h_21);
                                    b_25 = t;
                                    t = c_25;
                                    t = map_1_0(t_1, t);
                                    d_25 = t;
                                    t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, d_25);
                                    f_1 = t;
                                    t = SSLsetAnnotations(f_1, b_25);
                                    e_25 = t;
                                    t = i_21;
                                    t = map_1_0(x_1, t);
                                    w_24 = t;
                                    t = a_21;
                                    t = map_1_0(Box_0_0, t);
                                    a_25 = t;
                                    t = (ATerm) ATmakeAppl(sym_A_3, e_25, w_24, a_25);
                                    h_1 = t;
                                    t = SSLsetAnnotations(h_1, o_24);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_R_2))
                                    {
                                      h_21 = ATgetArgument(t, 0);
                                      i_21 = ATgetArgument(t, 1);
                                      {
                                        ATerm i_43 = NULL,l_43 = NULL,m_43 = NULL,j_1 = NULL;
                                        t = SSLgetAnnotations(m_21);
                                        i_43 = t;
                                        t = h_21;
                                        t = map_1_0(y_1, t);
                                        l_43 = t;
                                        t = i_21;
                                        t = map_1_0(Box_0_0, t);
                                        m_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_R_2, l_43, m_43);
                                        j_1 = t;
                                        t = SSLsetAnnotations(j_1, i_43);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBL_2))
                                        {
                                          h_21 = ATgetArgument(t, 0);
                                          i_21 = ATgetArgument(t, 1);
                                          {
                                            ATerm c_44 = NULL,f_44 = NULL,g_44 = NULL,k_1 = NULL;
                                            t = SSLgetAnnotations(m_21);
                                            c_44 = t;
                                            t = SSL_is_string(h_21);
                                            f_44 = t;
                                            t = i_21;
                                            t = Box_0_0(t);
                                            g_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_LBL_2, f_44, g_44);
                                            k_1 = t;
                                            t = SSLsetAnnotations(k_1, c_44);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REF_2))
                                            {
                                              h_21 = ATgetArgument(t, 0);
                                              i_21 = ATgetArgument(t, 1);
                                              {
                                                ATerm o_44 = NULL,r_44 = NULL,s_44 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(m_21);
                                                o_44 = t;
                                                t = SSL_is_string(h_21);
                                                r_44 = t;
                                                t = i_21;
                                                t = Box_0_0(t);
                                                s_44 = t;
                                                t = (ATerm) ATmakeAppl(sym_REF_2, r_44, s_44);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, o_44);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  h_21 = ATgetArgument(t, 0);
                                                  i_21 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm a_45 = NULL,d_45 = NULL,e_45 = NULL,n_1 = NULL;
                                                    t = SSLgetAnnotations(m_21);
                                                    a_45 = t;
                                                    t = h_21;
                                                    t = map_1_0(z_1, t);
                                                    d_45 = t;
                                                    t = i_21;
                                                    t = map_1_0(Box_0_0, t);
                                                    e_45 = t;
                                                    t = (ATerm) ATmakeAppl(sym_C_2, d_45, e_45);
                                                    n_1 = t;
                                                    t = SSLsetAnnotations(n_1, a_45);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_L_2))
                                                    {
                                                      h_21 = ATgetArgument(t, 0);
                                                      i_21 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm s_45 = NULL,v_45 = NULL,w_45 = NULL,o_1 = NULL;
                                                        t = SSLgetAnnotations(m_21);
                                                        s_45 = t;
                                                        t = h_21;
                                                        t = Box_0_0(t);
                                                        v_45 = t;
                                                        t = i_21;
                                                        t = Box_0_0(t);
                                                        w_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_L_2, v_45, w_45);
                                                        o_1 = t;
                                                        t = SSLsetAnnotations(o_1, s_45);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = m_21;
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
ATerm t_3 (ATerm p_24, ATerm q_24, ATerm t)
{
  ATerm p_22 = NULL;
  t = SSL_fputc(p_24, q_24);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_22);
  return(t);
}
ATerm u_3 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm u_22 = NULL;
  t = SSL_write_term_to_stream_text(o_48, p_48);
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_22);
  return(t);
}
ATerm w_3 (ATerm k_88 (ATerm), ATerm h_449, ATerm s_48, ATerm t)
{
  ATerm w_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_449, term_l_5);
  t = open_stream_0_0(t);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_22, s_48);
  t = k_88(t);
  t = fclose_0_0(t);
  t = s_48;
  return(t);
}
ATerm v_3 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_write_term_to_stream_baf(k_48, l_48);
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
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
  ATerm k_46 = NULL,l_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_5 = ATgetArgument(t, 0);
      if(match_cons(m_5, sym_Stream_1))
        {
          k_46 = ATgetArgument(m_5, 0);
        }
      else
        _fail(t);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(k_46, l_46, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_5 = ATgetArgument(t, 0);
      if(match_cons(n_5, sym_Stream_1))
        {
          z_46 = ATgetArgument(n_5, 0);
        }
      else
        _fail(t);
      a_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(z_46, a_47, t);
  w_46 = t;
  t = term_o_5;
  x_46 = t;
  t = w_46;
  if(match_cons(t, sym_Stream_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_5, w_46);
  t = t_3(x_46, y_46, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,y_23 = NULL,z_23 = NULL,b_26 = NULL,c_26 = NULL,s_2 = NULL,r_2 = NULL;
  if(((h_23 != NULL) && (h_23 != t)))
    _fail(t);
  else
    h_23 = t;
  if(match_cons(t, sym__2))
    {
      if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_23 = ATgetArgument(t, 0);
      if(((y_23 != NULL) && (y_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(h_23));
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  t = not_null(r_23);
  {
    ATerm p_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((g_23 != NULL) && (g_23 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_23 = ATgetArgument(t, 0);
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
        if(((g_23 != NULL) && (g_23 != t)))
          _fail(t);
        else
          g_23 = t;
      }
    if(((z_23 != NULL) && (z_23 != t)))
      _fail(t);
    else
      z_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), not_null(y_23));
    if(((r_2 != NULL) && (r_2 != t)))
      _fail(t);
    else
      r_2 = t;
    t = SSLsetAnnotations(not_null(r_2), not_null(q_23));
    t = not_null(h_23);
    if(match_cons(t, sym__2))
      {
        if(((j_23 != NULL) && (j_23 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_23 = ATgetArgument(t, 0);
        if(((k_23 != NULL) && (k_23 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          k_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(h_23));
    if(((i_23 != NULL) && (i_23 != t)))
      _fail(t);
    else
      i_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(k_23)));
    if(((s_2 != NULL) && (s_2 != t)))
      _fail(t);
    else
      s_2 = t;
    t = SSLsetAnnotations(not_null(s_2), not_null(i_23));
    if(((p_23 != NULL) && (p_23 != t)))
      _fail(t);
    else
      p_23 = t;
    if(match_cons(t, sym__2))
      {
        if(((b_26 != NULL) && (b_26 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          b_26 = ATgetArgument(t, 0);
        if(((c_26 != NULL) && (c_26 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          c_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm s_5 = t;
      int t_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,t_2 = NULL;
          t = SSLgetAnnotations(not_null(p_23));
          d_46 = t;
          t = not_null(b_26);
          t = fetch_1_0(c_2, t);
          g_46 = t;
          t = not_null(c_26);
          if(match_cons(t, sym__2))
            {
              i_46 = ATgetArgument(t, 0);
              j_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(d_2, i_46, j_46, t);
          h_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
          t_2 = t;
          t = SSLsetAnnotations(t_2, d_46);
          ;
          LocalPopChoice(t_5);
        }
      else
        {
          t = s_5;
          {
            ATerm q_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,u_2 = NULL;
            t = SSLgetAnnotations(not_null(p_23));
            q_46 = t;
            t = not_null(c_26);
            if(match_cons(t, sym__2))
              {
                u_46 = ATgetArgument(t, 0);
                v_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(e_2, u_46, v_46, t);
            t_46 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), t_46);
            u_2 = t;
            t = SSLsetAnnotations(u_2, q_46);
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
ATerm apply_strategy_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  j_26 = t;
  t = dtime_0_0(t);
  t = j_26;
  t = n_89(t);
  i_26 = t;
  t = dtime_0_0(t);
  f_26 = t;
  t = i_26;
  if(match_cons(t, sym__2))
    {
      g_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_26), (ATerm) ATmakeAppl(sym_Runtime_1, f_26)), h_26);
  return(t);
}
ATerm x_26 (ATerm r_26, ATerm t)
{
  t = SSL_fclose(r_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  v_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_26 = ATgetArgument(t, 0);
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_26);
            ;
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            t = x_26(v_26, t);
          }
      }
    }
  else
    {
      t = x_26(v_26, t);
    }
  return(t);
}
ATerm x_3 (ATerm q_48, ATerm t)
{
  t = SSL_read_term_from_stream(q_48);
  return(t);
}
ATerm y_3 (ATerm r_24, ATerm s_24, ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_fopen(r_24, s_24);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_stdin_stream();
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_stdout_stream();
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_stderr_stream();
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
  return(t);
}
ATerm k_28 (ATerm j_27, ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_explode_term(j_27);
  if(match_cons(t, sym__2))
    {
      ATerm w_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_5 = ATgetArgument(t, 1);
        if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
          {
            k_27 = ATgetFirst((ATermList) x_5);
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
  t = k_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm l_28 (ATerm n_27, ATerm o_27, ATerm p_27, ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,v_27 = NULL,z_2 = NULL;
  t = SSLgetAnnotations(p_27);
  s_27 = t;
  t = n_27;
  if(match_cons(t, sym_Path_1))
    {
      v_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_27, o_27);
  z_2 = t;
  t = SSLsetAnnotations(z_2, s_27);
  if(match_cons(t, sym__2))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(q_27, r_27, t);
  return(t);
}
ATerm m_28 (ATerm x_27, ATerm y_27, ATerm z_27, ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,f_28 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(z_27);
  c_28 = t;
  t = SSL_is_string(x_27);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_28, y_27);
  a_3 = t;
  t = SSLsetAnnotations(a_3, c_28);
  if(match_cons(t, sym__2))
    {
      a_28 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(a_28, b_28, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      ATerm a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  h_28 = t;
  if(match_cons(t, sym__2))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_28(h_28, t);
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
                  t = l_28(i_28, j_28, h_28, t);
                  ;
                  LocalPopChoice(e_6);
                }
              else
                {
                  t = d_6;
                  t = m_28(i_28, j_28, h_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_28(h_28, t);
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
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_28 = NULL;
      q_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_28, term_i_6);
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
  o_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(p_28, t);
  n_28 = t;
  t = o_28;
  t = fclose_0_0(t);
  t = n_28;
  return(t);
}
ATerm fetch_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm o_29 (ATerm t)
  {
    ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
    l_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_29 = ATgetFirst((ATermList) t);
        n_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_47 = NULL,r_47 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(l_29);
          o_47 = t;
          t = m_29;
          t = s_74(t);
          r_47 = t;
          t = (ATerm) ATinsert(CheckATermList(n_29), r_47);
          d_3 = t;
          t = SSLsetAnnotations(d_3, o_47);
          ;
          LocalPopChoice(k_6);
        }
      else
        {
          t = j_6;
          {
            ATerm z_47 = NULL,c_48 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(l_29);
            z_47 = t;
            t = n_29;
            t = o_29(t);
            c_48 = t;
            t = (ATerm) ATinsert(CheckATermList(c_48), m_29);
            e_3 = t;
            t = SSLsetAnnotations(e_3, z_47);
          }
        }
    }
    return(t);
  }
  t = o_29(t);
  return(t);
}
ATerm s_3 (ATerm p_43, ATerm q_43, ATerm t)
{
  t = SSL_strcat(p_43, q_43);
  return(t);
}
ATerm debug_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  r_29 = t;
  t = i_88(t);
  s_29 = t;
  t = term_e_5;
  t_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_29), s_29);
  u_29 = t;
  t = SSL_printnl(t_29, u_29);
  t = r_29;
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
      ATerm b_30 = NULL;
      b_30 = t;
      t = SSL_is_string(b_30);
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
              ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
              h_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_30 = ATgetArgument(t, 0);
                  t = i_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_30 = ATgetArgument(t, 0);
                      t = i_30;
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
                      ATerm n_30 = NULL,o_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_30 = ATgetArgument(t, 0);
                          j_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_30;
                      t = eval_config_0_0(t);
                      n_30 = t;
                      t = j_30;
                      t = eval_config_0_0(t);
                      o_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_30, o_30);
                      t = s_3(n_30, o_30, t);
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
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  t = term_u_6;
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, s_30);
  t = b_4(t_30, s_30, t);
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,v_30 = NULL;
        t = eval_config_0_0(t);
        u_30 = t;
        t = term_u_6;
        v_30 = t;
        t = SSL_table_put(v_30, s_30, u_30);
        t = u_30;
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
ATerm if_verbose2_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_31 = NULL;
        t = term_z_6;
        t = get_config_0_0(t);
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_31, term_a_7);
        t = geq_0_0(t);
        t = z_30;
        t = i_86(t);
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = z_30;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  if(match_string(t, "-k"))
    {
      t = e_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_31;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  t = SSL_string_to_int(f_31);
  g_31 = t;
  t = term_b_7;
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, g_31);
  t = e_4(h_31, g_31, t);
  t = f_31;
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
  ATerm j_31 = NULL;
  j_31 = t;
  if(match_string(t, "-S"))
    {
      t = j_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_31;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  t = term_z_6;
  k_31 = t;
  t = term_d_7;
  l_31 = t;
  t = term_e_7;
  t = e_4(k_31, l_31, t);
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
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  t = SSL_string_to_int(m_31);
  n_31 = t;
  t = term_z_6;
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, n_31);
  t = e_4(o_31, n_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_31);
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
  ATerm p_31 = NULL,q_31 = NULL;
  t = term_i_7;
  p_31 = t;
  t = term_d_5;
  q_31 = t;
  t = term_j_7;
  t = e_4(p_31, q_31, t);
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
ATerm e_4 (ATerm d_47, ATerm e_47, ATerm t)
{
  ATerm r_31 = NULL;
  t = term_u_6;
  r_31 = t;
  t = SSL_table_put(r_31, d_47, e_47);
  t = (ATerm) ATmakeAppl(sym__3, term_u_6, d_47, e_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
      t = term_d_5;
      t = d_0(t);
      x_31 = t;
      t = term_q_7;
      y_31 = t;
      t = term_r_7;
      z_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_7, term_r_7, x_31);
      t = c_4(y_31, z_31, x_31, t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_31 = ATgetFirst((ATermList) t);
          v_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_31;
      t = a_0(t);
      t = term_d_5;
      t = c_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(v_31), c_32);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  if(match_string(t, "-o"))
    {
      t = e_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_32;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  t = term_s_7;
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, f_32);
  t = e_4(g_32, f_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_32);
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
ATerm c_4 (ATerm y_36, ATerm z_36, ATerm x_36, ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
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
        t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        t = b_4(y_36, z_36, t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = (ATerm) ATempty;
      }
    j_32 = t;
    t = (ATerm) ATinsert(CheckATermList(j_32), x_36);
    k_32 = t;
    t = SSL_table_put(y_36, z_36, k_32);
    t = i_32;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
      t = term_d_5;
      t = j_0(t);
      v_32 = t;
      t = term_q_7;
      w_32 = t;
      t = term_r_7;
      x_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_7, term_r_7, v_32);
      t = c_4(w_32, x_32, v_32, t);
      _fail(t);
    }
  else
    {
      ATerm d_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_32 = ATgetFirst((ATermList) t);
          s_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_32 = ATgetFirst((ATermList) t);
          u_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_32;
      t = h_0(t);
      t = t_32;
      t = i_0(t);
      d_33 = t;
      t = (ATerm) ATinsert(CheckATermList(u_32), d_33);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  if(match_string(t, "-i"))
    {
      t = f_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_33;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  g_33 = t;
  t = term_y_7;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, g_33);
  t = e_4(h_33, g_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_33);
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
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_5;
  t = whoami_0_0(t);
  i_33 = t;
  t = term_e_5;
  k_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_8), i_33);
  l_33 = t;
  t = SSL_printnl(k_33, l_33);
  t = term_h_5;
  j_33 = t;
  t = SSL_exit(j_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_8;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm c_35, ATerm d_35, ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_35, d_35);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = SSL_addr(c_35, d_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_33;
      t = a_81(t);
    }
  else
    {
      ATerm s_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_33 = ATgetFirst((ATermList) t);
          p_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_33;
      t = foldr_2_0(a_81, b_81, t);
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_33, s_33);
      t = b_81(t);
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
  ATerm z_48 = NULL,a_49 = NULL;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(z_48, a_49, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_33 = NULL,v_48 = NULL,w_48 = NULL;
  t = times_0_0(t);
  w_48 = t;
  t = SSL_explode_term(w_48);
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_48;
  t = foldr_2_0(k_3, m_3, t);
  v_33 = t;
  t = SSL_TicksToSeconds(v_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      i_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_34;
        if((h_34 != t))
          {
            _fail(t);
          }
        t = g_34;
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_34, i_34);
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              t = SSL_gtr(h_34, i_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL;
        t = term_z_6;
        t = get_config_0_0(t);
        o_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_34, term_h_5);
        t = geq_0_0(t);
        t = m_34;
        t = h_86(t);
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = m_34;
      }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,t_34 = NULL,u_34 = NULL;
  t = run_time_0_0(t);
  q_34 = t;
  t = term_d_5;
  t = whoami_0_0(t);
  r_34 = t;
  t = term_e_5;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_8), q_34), term_l_8), r_34);
  u_34 = t;
  t = SSL_printnl(t_34, u_34);
  t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_8), q_34), term_l_8), r_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_7;
  v_34 = t;
  t = SSL_exit(v_34);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  g_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_35 = ATgetArgument(t, 0);
          {
            ATerm m_49 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(g_35);
            m_49 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_35);
            h_3 = t;
            t = SSLsetAnnotations(h_3, m_49);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_90 (ATerm), ATerm t)
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
  t = l_90(t);
  return(t);
}
ATerm map_1_0 (ATerm i_74 (ATerm), ATerm t)
{
  ATerm w_35 (ATerm t)
  {
    ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
    t_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_35;
      }
    else
      {
        ATerm u_49 = NULL,x_49 = NULL,y_49 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_35 = ATgetFirst((ATermList) t);
            v_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_35);
        u_49 = t;
        t = u_35;
        t = i_74(t);
        x_49 = t;
        t = v_35;
        t = w_35(t);
        y_49 = t;
        t = (ATerm) ATinsert(CheckATermList(y_49), x_49);
        j_3 = t;
        t = SSLsetAnnotations(j_3, u_49);
      }
    return(t);
  }
  t = w_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_35 = ATgetFirst((ATermList) t);
      a_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_36 = NULL,f_36 = NULL;
        ATerm a_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_36)), not_null(f_36));
          return(t);
        }
        t = not_null(a_36);
        t = g_0(t);
        if(((e_36 != NULL) && (e_36 != t)))
          _fail(t);
        else
          e_36 = t;
        t = not_null(z_35);
        t = e_0(t);
        if(((f_36 != NULL) && (f_36 != t)))
          _fail(t);
        else
          f_36 = t;
        t = not_null(a_36);
        t = reverse_acc_2_0(e_0, a_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_5;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_table_get(p_38, q_38);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,l_3 = NULL;
  m_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_36);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_36);
  l_3 = t;
  t = SSLsetAnnotations(l_3, k_36);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_36), term_q_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_36 = NULL,j_36 = NULL;
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
  h_36 = t;
  t = term_r_7;
  j_36 = t;
  t = term_u_8;
  t = b_4(h_36, j_36, t);
  t = reverse_acc_2_0(_id, g_4, t);
  t = map_1_0(h_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_36;
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
            t = q_36;
          }
        ;
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATinsert(ATempty, q_36);
      }
    r_36 = t;
    t = term_r_5;
    s_36 = t;
    t = SSL_printnl(s_36, r_36);
    t = q_36;
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
  ATerm w_36 = NULL,a_37 = NULL;
  t = term_z_8;
  w_36 = t;
  t = term_d_5;
  a_37 = t;
  t = term_b_9;
  t = e_4(w_36, a_37, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_c_9;
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
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  t = term_z_8;
  d_37 = t;
  t = term_d_5;
  e_37 = t;
  t = term_b_9;
  t = e_4(d_37, e_37, t);
  t = term_d_9;
  b_37 = t;
  t = term_d_5;
  c_37 = t;
  t = term_e_9;
  t = e_4(b_37, c_37, t);
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
ATerm Cons_2_0 (ATerm g_62 (ATerm), ATerm h_62 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,n_3 = NULL;
  k_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_37 = ATgetFirst((ATermList) t);
      h_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_37);
  f_37 = t;
  t = g_37;
  t = g_62(t);
  i_37 = t;
  t = h_37;
  t = h_62(t);
  j_37 = t;
  t = (ATerm) ATinsert(CheckATermList(j_37), i_37);
  n_3 = t;
  t = SSLsetAnnotations(n_3, f_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,u_37 = NULL,v_37 = NULL,p_3 = NULL;
  if(((p_37 != NULL) && (p_37 != t)))
    _fail(t);
  else
    p_37 = t;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_9;
        t = j_92(t);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
      }
    t = not_null(p_37);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_37 != NULL) && (r_37 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_37 = ATgetFirst((ATermList) t);
        if(((s_37 != NULL) && (s_37 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          s_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(p_37));
    if(((q_37 != NULL) && (q_37 != t)))
      _fail(t);
    else
      q_37 = t;
    t = term_b_8;
    if(((v_37 != NULL) && (v_37 != t)))
      _fail(t);
    else
      v_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(r_37));
    t = e_4(not_null(v_37), not_null(r_37), t);
    t = not_null(s_37);
    {
      ATerm f_38 (ATerm t)
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = t;
            int q_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_37 = NULL;
                y_37 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_37;
                ;
                LocalPopChoice(q_9);
              }
            else
              {
                t = p_9;
                t = j_92(t);
                t = Cons_2_0(_id, f_38, t);
              }
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm b_38 = NULL,c_38 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_38 = ATgetFirst((ATermList) t);
                  c_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_38), (ATerm) ATmakeAppl(sym_Undefined_1, b_38));
            }
          }
        return(t);
      }
      t = f_38(t);
      if(((u_37 != NULL) && (u_37 != t)))
        _fail(t);
      else
        u_37 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(u_37)), (ATerm) ATmakeAppl(sym_Program_1, not_null(r_37)));
      if(((p_3 != NULL) && (p_3 != t)))
        _fail(t);
      else
        p_3 = t;
      t = SSLsetAnnotations(not_null(p_3), not_null(q_37));
    }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  if(match_string(t, "--help"))
    {
      t = t_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_38;
        }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  t = term_p_8;
  u_38 = t;
  t = term_d_5;
  v_38 = t;
  t = term_r_9;
  t = e_4(u_38, v_38, t);
  t = term_s_9;
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
ATerm parse_options_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,r_38 = NULL,s_38 = NULL;
  if(((m_38 != NULL) && (m_38 != t)))
    _fail(t);
  else
    m_38 = t;
  t = term_q_7;
  if(((o_38 != NULL) && (o_38 != t)))
    _fail(t);
  else
    o_38 = t;
  t = term_r_7;
  if(((r_38 != NULL) && (r_38 != t)))
    _fail(t);
  else
    r_38 = t;
  t = (ATerm) ATempty;
  if(((s_38 != NULL) && (s_38 != t)))
    _fail(t);
  else
    s_38 = t;
  t = SSL_table_put(not_null(o_38), not_null(r_38), not_null(s_38));
  t = not_null(m_38);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_92(t);
          ;
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm y_9 = t;
            int a_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_4, q_4, r_4, t);
                ;
                LocalPopChoice(a_10);
              }
            else
              {
                t = y_9;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
    {
      ATerm b_10 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_39 = NULL;
          c_39 = t;
          {
            ATerm i_10 = t;
            int j_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_50 = NULL;
                t = c_39;
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
                  t = c_39;
                  t = default_system_usage_0_0(t);
                  t = term_d_7;
                  f_50 = t;
                  t = SSL_exit(f_50);
                }
                ;
                LocalPopChoice(j_10);
              }
            else
              {
                t = i_10;
                {
                  ATerm j_50 = NULL;
                  t = term_z_8;
                  t = get_config_0_0(t);
                  t = c_39;
                  t = default_system_about_0_0(t);
                  t = term_d_7;
                  j_50 = t;
                  t = SSL_exit(j_50);
                }
              }
          }
          ;
          LocalPopChoice(h_10);
        }
      else
        {
          t = b_10;
          {
            ATerm m_10 = t;
            int n_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
                ATerm t_4 (ATerm t)
                {
                  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,r_3 = NULL;
                  i_39 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_39 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_39);
                  g_39 = t;
                  t = h_39;
                  if(((k_38 != NULL) && (k_38 != t)))
                    _fail(t);
                  else
                    k_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_39);
                  r_3 = t;
                  t = SSLsetAnnotations(r_3, g_39);
                  return(t);
                }
                t = fetch_1_0(t_4, t);
                t = term_e_5;
                if(((e_39 != NULL) && (e_39 != t)))
                  _fail(t);
                else
                  e_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_38)), term_o_10);
                if(((f_39 != NULL) && (f_39 != t)))
                  _fail(t);
                else
                  f_39 = t;
                t = SSL_printnl(not_null(e_39), not_null(f_39));
                t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_38)), term_o_10));
                t = default_system_usage_0_0(t);
                t = term_h_5;
                if(((d_39 != NULL) && (d_39 != t)))
                  _fail(t);
                else
                  d_39 = t;
                t = SSL_exit(not_null(d_39));
                ;
                LocalPopChoice(n_10);
              }
            else
              {
                t = m_10;
              }
          }
        }
      if(((l_38 != NULL) && (l_38 != t)))
        _fail(t);
      else
        l_38 = t;
      t = term_q_7;
      if(((n_38 != NULL) && (n_38 != t)))
        _fail(t);
      else
        n_38 = t;
      t = SSL_table_destroy(not_null(n_38));
      t = not_null(l_38);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  t = parse_options_1_0(n_90, t);
  n_39 = t;
  t = term_p_10;
  q_39 = t;
  t = SSL_table_create(q_39);
  t = term_p_10;
  o_39 = t;
  t = term_q_10;
  p_39 = t;
  t = SSL_table_put(o_39, p_39, n_39);
  t = n_39;
  t = p_90(t);
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_90, t);
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm t_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_90(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_10);
            }
          else
            {
              t = t_10;
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
  ATerm r_39 = NULL,s_39 = NULL;
  t = term_w_10;
  r_39 = t;
  t = term_d_5;
  s_39 = t;
  t = term_z_10;
  t = e_4(r_39, s_39, t);
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
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  t_39 = t;
  t = term_b_8;
  t = get_config_0_0(t);
  u_39 = t;
  t = term_e_5;
  v_39 = t;
  t = (ATerm) ATinsert(ATempty, u_39);
  w_39 = t;
  t = SSL_printnl(v_39, w_39);
  t = t_39;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_89(t);
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
                            ATerm p_11 = t;
                            int r_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_11);
                              }
                            else
                              {
                                t = p_11;
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
    ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
    if(((y_39 != NULL) && (y_39 != t)))
      _fail(t);
    else
      y_39 = t;
    {
      ATerm s_11 = t;
      int t_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_39 != NULL) && (x_39 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_39 = ATgetArgument(t, 0);
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
          if(((x_39 != NULL) && (x_39 != t)))
            _fail(t);
          else
            x_39 = t;
        }
      t = not_null(x_39);
      t = ReadFromFile_0_0(t);
      if(((z_39 != NULL) && (z_39 != t)))
        _fail(t);
      else
        z_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_39), not_null(z_39));
      t = apply_strategy_1_0(w_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(u_4, y_89, v_4, w_4, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,d_4 = NULL;
  e_40 = t;
  if(match_cons(t, sym__2))
    {
      b_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_40);
  a_40 = t;
  t = c_40;
  t = Box_0_0(t);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, d_40);
  d_4 = t;
  t = SSLsetAnnotations(d_4, a_40);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(c_5, _fail, default_usage_0_0, t);
  return(t);
}

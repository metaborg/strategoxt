#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_S_1;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
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
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_SOpt_2;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
static void init_module_constructors (void)
{
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
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
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
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
}
ATerm term_s_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_l_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
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
ATerm term_y_6;
ATerm term_t_6;
ATerm term_m_6;
ATerm term_h_6;
ATerm term_e_6;
ATerm term_s_5;
ATerm term_p_5;
ATerm term_m_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__2, term_y_6, term_c_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_e_5);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_q_7);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_e_5);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_e_5);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_e_5);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_e_5);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm Box_0_0 (ATerm t);
static ATerm t_3 (ATerm h_15, ATerm i_15, ATerm t);
static ATerm u_3 (ATerm n_40, ATerm o_40, ATerm t);
static ATerm w_3 (ATerm j_83 (ATerm), ATerm p_448, ATerm r_40, ATerm t);
static ATerm v_3 (ATerm j_40, ATerm k_40, ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_84 (ATerm), ATerm t);
static ATerm h_27 (ATerm a_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_3 (ATerm p_40, ATerm t);
static ATerm y_3 (ATerm j_15, ATerm k_15, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_28 (ATerm r_27, ATerm t);
static ATerm w_28 (ATerm v_27, ATerm w_27, ATerm x_27, ATerm t);
static ATerm x_28 (ATerm f_28, ATerm g_28, ATerm h_28, ATerm t);
static ATerm z_3 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_70 (ATerm), ATerm t);
static ATerm s_3 (ATerm k_35, ATerm l_35, ATerm t);
ATerm debug_1_0 (ATerm h_83 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm h_81 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_4 (ATerm c_39, ATerm d_39, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_4 (ATerm r_28, ATerm s_28, ATerm q_28, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_4 (ATerm z_25, ATerm a_26, ATerm t);
ATerm foldr_2_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_81 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm need_help_1_0 (ATerm k_85 (ATerm), ATerm t);
ATerm map_1_0 (ATerm v_69 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm c_4 (ATerm i_30, ATerm j_30, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_58 (ATerm), ATerm m_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_87 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm parse_options_1_0 (ATerm h_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm iowrap_3_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,e_0 = NULL,f_0 = NULL,j_0 = NULL,s_0 = NULL;
  a_0 = t;
  t = term_e_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_f_5;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_5), e_0), term_g_5);
  s_0 = t;
  t = SSL_printnl(j_0, s_0);
  t = term_i_5;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm c_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,c_0 = NULL;
  h_10 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_10);
  c_10 = t;
  t = e_10;
  if(match_cons(t, sym_VS_0))
    {
      t = e_10;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = e_10;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = e_10;
        }
    }
  t = SSL_is_string(f_10);
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, e_10, g_10);
  c_0 = t;
  t = SSLsetAnnotations(c_0, c_10);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_0 = NULL;
  l_11 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      g_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_11);
  f_11 = t;
  t = g_11;
  if(match_cons(t, sym_VS_0))
    {
      t = g_11;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = g_11;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = g_11;
        }
    }
  t = SSL_is_string(j_11);
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, g_11, k_11);
  m_0 = t;
  t = SSLsetAnnotations(m_0, f_11);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,j_12 = NULL,k_12 = NULL,r_0 = NULL;
  k_12 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  f_12 = t;
  t = g_12;
  if(match_cons(t, sym_VS_0))
    {
      t = g_12;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = g_12;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = g_12;
        }
    }
  t = SSL_is_string(h_12);
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, g_12, j_12);
  r_0 = t;
  t = SSLsetAnnotations(r_0, f_12);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,x_21 = NULL;
  u_21 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      v_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
      {
        ATerm r_22 = NULL,v_22 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(u_21);
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
        t = SSL_is_string(x_21);
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym_FNAT_2, v_21, v_22);
        v_0 = t;
        t = SSLsetAnnotations(v_0, r_22);
      }
    }
  else
    {
      ATerm m_23 = NULL,p_23 = NULL,w_0 = NULL;
      if(match_cons(t, sym_FFID_2))
        {
          v_21 = ATgetArgument(t, 0);
          x_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_21);
      m_23 = t;
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
      t = SSL_is_string(x_21);
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym_FFID_2, v_21, p_23);
      w_0 = t;
      t = SSLsetAnnotations(w_0, m_23);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm t_32 = NULL,a_33 = NULL;
  t_32 = t;
  if(match_cons(t, sym_AL_1))
    {
      a_33 = ATgetArgument(t, 0);
      {
        ATerm g_41 = NULL,i_41 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(t_32);
        g_41 = t;
        t = a_33;
        t = map_1_0(u_1, t);
        i_41 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, i_41);
        a_1 = t;
        t = SSLsetAnnotations(a_1, g_41);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          a_33 = ATgetArgument(t, 0);
          {
            ATerm b_42 = NULL,d_42 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(t_32);
            b_42 = t;
            t = a_33;
            t = map_1_0(v_1, t);
            d_42 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, d_42);
            c_1 = t;
            t = SSLsetAnnotations(c_1, b_42);
          }
        }
      else
        {
          ATerm w_42 = NULL,y_42 = NULL,e_1 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              a_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_32);
          w_42 = t;
          t = a_33;
          t = map_1_0(w_1, t);
          y_42 = t;
          t = (ATerm) ATmakeAppl(sym_AR_1, y_42);
          e_1 = t;
          t = SSLsetAnnotations(e_1, w_42);
        }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_0 = NULL;
  x_41 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      u_41 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_41);
  t_41 = t;
  t = u_41;
  if(match_cons(t, sym_VS_0))
    {
      t = u_41;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = u_41;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = u_41;
        }
    }
  t = SSL_is_string(v_41);
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, u_41, w_41);
  z_0 = t;
  t = SSLsetAnnotations(z_0, t_41);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,b_1 = NULL;
  s_42 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  o_42 = t;
  t = p_42;
  if(match_cons(t, sym_VS_0))
    {
      t = p_42;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = p_42;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = p_42;
        }
    }
  t = SSL_is_string(q_42);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, p_42, r_42);
  b_1 = t;
  t = SSLsetAnnotations(b_1, o_42);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,d_1 = NULL;
  n_43 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      k_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_43);
  j_43 = t;
  t = k_43;
  if(match_cons(t, sym_VS_0))
    {
      t = k_43;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = k_43;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = k_43;
        }
    }
  t = SSL_is_string(l_43);
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, k_43, m_43);
  d_1 = t;
  t = SSLsetAnnotations(d_1, j_43);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm b_33 = NULL,o_33 = NULL,w_33 = NULL,i_34 = NULL,j_34 = NULL,g_1 = NULL;
  j_34 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      o_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_34);
  b_33 = t;
  t = o_33;
  if(match_cons(t, sym_VS_0))
    {
      t = o_33;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = o_33;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = o_33;
        }
    }
  t = SSL_is_string(w_33);
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, o_33, i_34);
  g_1 = t;
  t = SSLsetAnnotations(g_1, b_33);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,i_1 = NULL;
  c_44 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      z_43 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_44);
  y_43 = t;
  t = z_43;
  if(match_cons(t, sym_VS_0))
    {
      t = z_43;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = z_43;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = z_43;
        }
    }
  t = SSL_is_string(a_44);
  b_44 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, z_43, b_44);
  i_1 = t;
  t = SSLsetAnnotations(i_1, y_43);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,m_1 = NULL;
  s_45 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      p_45 = ATgetArgument(t, 0);
      q_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_45);
  o_45 = t;
  t = p_45;
  if(match_cons(t, sym_VS_0))
    {
      t = p_45;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = p_45;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = p_45;
        }
    }
  t = SSL_is_string(q_45);
  r_45 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, p_45, r_45);
  m_1 = t;
  t = SSLsetAnnotations(m_1, o_45);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_j_5;
  return(t);
}
ATerm Box_0_0 (ATerm t)
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_21 = NULL,r_21 = NULL,s_21 = NULL,w_21 = NULL;
      w_21 = t;
      if(match_cons(t, sym_S_1))
        {
          r_21 = ATgetArgument(t, 0);
          {
            ATerm g_9 = NULL,i_9 = NULL,b_0 = NULL;
            t = SSLgetAnnotations(w_21);
            g_9 = t;
            t = SSL_is_string(r_21);
            i_9 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, i_9);
            b_0 = t;
            t = SSLsetAnnotations(b_0, g_9);
          }
        }
      else
        {
          if(match_cons(t, sym_H_2))
            {
              r_21 = ATgetArgument(t, 0);
              s_21 = ATgetArgument(t, 1);
              {
                ATerm w_9 = NULL,z_9 = NULL,a_10 = NULL,h_0 = NULL;
                t = SSLgetAnnotations(w_21);
                w_9 = t;
                t = r_21;
                t = map_1_0(p_1, t);
                z_9 = t;
                t = s_21;
                t = map_1_0(Box_0_0, t);
                a_10 = t;
                t = (ATerm) ATmakeAppl(sym_H_2, z_9, a_10);
                h_0 = t;
                t = SSLsetAnnotations(h_0, w_9);
              }
            }
          else
            {
              if(match_cons(t, sym_V_2))
                {
                  r_21 = ATgetArgument(t, 0);
                  s_21 = ATgetArgument(t, 1);
                  {
                    ATerm s_10 = NULL,c_11 = NULL,d_11 = NULL,q_0 = NULL;
                    t = SSLgetAnnotations(w_21);
                    s_10 = t;
                    t = r_21;
                    t = map_1_0(q_1, t);
                    c_11 = t;
                    t = s_21;
                    t = map_1_0(Box_0_0, t);
                    d_11 = t;
                    t = (ATerm) ATmakeAppl(sym_V_2, c_11, d_11);
                    q_0 = t;
                    t = SSLsetAnnotations(q_0, s_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_HV_2))
                    {
                      r_21 = ATgetArgument(t, 0);
                      s_21 = ATgetArgument(t, 1);
                      {
                        ATerm w_11 = NULL,b_12 = NULL,c_12 = NULL,t_0 = NULL;
                        t = SSLgetAnnotations(w_21);
                        w_11 = t;
                        t = r_21;
                        t = map_1_0(r_1, t);
                        b_12 = t;
                        t = s_21;
                        t = map_1_0(Box_0_0, t);
                        c_12 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, b_12, c_12);
                        t_0 = t;
                        t = SSLsetAnnotations(t_0, w_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ALT_2))
                        {
                          r_21 = ATgetArgument(t, 0);
                          s_21 = ATgetArgument(t, 1);
                          {
                            ATerm z_12 = NULL,c_13 = NULL,e_13 = NULL,u_0 = NULL;
                            t = SSLgetAnnotations(w_21);
                            z_12 = t;
                            t = r_21;
                            t = Box_0_0(t);
                            c_13 = t;
                            t = s_21;
                            t = Box_0_0(t);
                            e_13 = t;
                            t = (ATerm) ATmakeAppl(sym_ALT_2, c_13, e_13);
                            u_0 = t;
                            t = SSLsetAnnotations(u_0, z_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FBOX_2))
                            {
                              r_21 = ATgetArgument(t, 0);
                              s_21 = ATgetArgument(t, 1);
                              {
                                ATerm r_13 = NULL,a_14 = NULL,b_14 = NULL,y_0 = NULL,x_15 = NULL;
                                t = SSLgetAnnotations(w_21);
                                r_13 = t;
                                t = r_21;
                                if(match_cons(t, sym_F_1))
                                  {
                                    x_15 = ATgetArgument(t, 0);
                                    {
                                      ATerm l_19 = NULL,p_19 = NULL,x_0 = NULL;
                                      t = SSLgetAnnotations(r_21);
                                      l_19 = t;
                                      t = x_15;
                                      t = map_1_0(s_1, t);
                                      p_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_F_1, p_19);
                                      x_0 = t;
                                      t = SSLsetAnnotations(x_0, l_19);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_KW_0))
                                      {
                                        t = r_21;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_VAR_0))
                                          {
                                            t = r_21;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_NUM_0))
                                              {
                                                t = r_21;
                                              }
                                            else
                                              {
                                                if(!(match_cons(t, sym_MATH_0)))
                                                  _fail(t);
                                                t = r_21;
                                              }
                                          }
                                      }
                                  }
                                a_14 = t;
                                t = s_21;
                                t = Box_0_0(t);
                                b_14 = t;
                                t = (ATerm) ATmakeAppl(sym_FBOX_2, a_14, b_14);
                                y_0 = t;
                                t = SSLsetAnnotations(y_0, r_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_A_3))
                                {
                                  r_21 = ATgetArgument(t, 0);
                                  s_21 = ATgetArgument(t, 1);
                                  k_21 = ATgetArgument(t, 2);
                                  {
                                    ATerm i_24 = NULL,s_24 = NULL,u_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,h_1 = NULL,f_1 = NULL;
                                    t = SSLgetAnnotations(w_21);
                                    i_24 = t;
                                    t = r_21;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        z_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(r_21);
                                    y_24 = t;
                                    t = z_24;
                                    t = map_1_0(t_1, t);
                                    a_25 = t;
                                    t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, a_25);
                                    f_1 = t;
                                    t = SSLsetAnnotations(f_1, y_24);
                                    b_25 = t;
                                    t = s_21;
                                    t = map_1_0(x_1, t);
                                    s_24 = t;
                                    t = k_21;
                                    t = map_1_0(Box_0_0, t);
                                    u_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_A_3, b_25, s_24, u_24);
                                    h_1 = t;
                                    t = SSLsetAnnotations(h_1, i_24);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_R_2))
                                    {
                                      r_21 = ATgetArgument(t, 0);
                                      s_21 = ATgetArgument(t, 1);
                                      {
                                        ATerm s_43 = NULL,v_43 = NULL,w_43 = NULL,j_1 = NULL;
                                        t = SSLgetAnnotations(w_21);
                                        s_43 = t;
                                        t = r_21;
                                        t = map_1_0(y_1, t);
                                        v_43 = t;
                                        t = s_21;
                                        t = map_1_0(Box_0_0, t);
                                        w_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_R_2, v_43, w_43);
                                        j_1 = t;
                                        t = SSLsetAnnotations(j_1, s_43);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBL_2))
                                        {
                                          r_21 = ATgetArgument(t, 0);
                                          s_21 = ATgetArgument(t, 1);
                                          {
                                            ATerm k_44 = NULL,n_44 = NULL,o_44 = NULL,k_1 = NULL;
                                            t = SSLgetAnnotations(w_21);
                                            k_44 = t;
                                            t = SSL_is_string(r_21);
                                            n_44 = t;
                                            t = s_21;
                                            t = Box_0_0(t);
                                            o_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_LBL_2, n_44, o_44);
                                            k_1 = t;
                                            t = SSLsetAnnotations(k_1, k_44);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REF_2))
                                            {
                                              r_21 = ATgetArgument(t, 0);
                                              s_21 = ATgetArgument(t, 1);
                                              {
                                                ATerm w_44 = NULL,z_44 = NULL,a_45 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(w_21);
                                                w_44 = t;
                                                t = SSL_is_string(r_21);
                                                z_44 = t;
                                                t = s_21;
                                                t = Box_0_0(t);
                                                a_45 = t;
                                                t = (ATerm) ATmakeAppl(sym_REF_2, z_44, a_45);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, w_44);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  r_21 = ATgetArgument(t, 0);
                                                  s_21 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm i_45 = NULL,l_45 = NULL,m_45 = NULL,n_1 = NULL;
                                                    t = SSLgetAnnotations(w_21);
                                                    i_45 = t;
                                                    t = r_21;
                                                    t = map_1_0(z_1, t);
                                                    l_45 = t;
                                                    t = s_21;
                                                    t = map_1_0(Box_0_0, t);
                                                    m_45 = t;
                                                    t = (ATerm) ATmakeAppl(sym_C_2, l_45, m_45);
                                                    n_1 = t;
                                                    t = SSLsetAnnotations(n_1, i_45);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_L_2))
                                                    {
                                                      r_21 = ATgetArgument(t, 0);
                                                      s_21 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm a_46 = NULL,d_46 = NULL,e_46 = NULL,o_1 = NULL;
                                                        t = SSLgetAnnotations(w_21);
                                                        a_46 = t;
                                                        t = r_21;
                                                        t = Box_0_0(t);
                                                        d_46 = t;
                                                        t = s_21;
                                                        t = Box_0_0(t);
                                                        e_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_L_2, d_46, e_46);
                                                        o_1 = t;
                                                        t = SSLsetAnnotations(o_1, a_46);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = w_21;
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
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      t = debug_1_0(a_2, t);
    }
  return(t);
}
static ATerm t_3 (ATerm h_15, ATerm i_15, ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_fputc(h_15, i_15);
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
  return(t);
}
static ATerm u_3 (ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm f_23 = NULL;
  t = SSL_write_term_to_stream_text(n_40, o_40);
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_23);
  return(t);
}
static ATerm w_3 (ATerm j_83 (ATerm), ATerm p_448, ATerm r_40, ATerm t)
{
  ATerm h_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_448, term_m_5);
  t = z_3(t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_23, r_40);
  t = j_83(t);
  t = fclose_0_0(t);
  t = r_40;
  return(t);
}
static ATerm v_3 (ATerm j_40, ATerm k_40, ATerm t)
{
  ATerm l_23 = NULL;
  t = SSL_write_term_to_stream_baf(j_40, k_40);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_23);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_5 = ATgetArgument(t, 0);
      if(match_cons(n_5, sym_Stream_1))
        {
          s_46 = ATgetArgument(n_5, 0);
        }
      else
        _fail(t);
      t_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(s_46, t_46, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_5 = ATgetArgument(t, 0);
      if(match_cons(o_5, sym_Stream_1))
        {
          h_47 = ATgetArgument(o_5, 0);
        }
      else
        _fail(t);
      i_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(h_47, i_47, t);
  e_47 = t;
  t = term_p_5;
  f_47 = t;
  t = e_47;
  if(match_cons(t, sym_Stream_1))
    {
      g_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_5, e_47);
  t = t_3(f_47, g_47, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,l_24 = NULL,m_24 = NULL,k_26 = NULL,l_26 = NULL,s_2 = NULL,r_2 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_23);
  d_24 = t;
  t = e_24;
  {
    ATerm q_5 = t;
    int r_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_2 (ATerm t)
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
        LocalPopChoice(r_5);
      }
    else
      {
        t = q_5;
        t = term_s_5;
        t_23 = t;
      }
  }
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_24, l_24);
  r_2 = t;
  t = SSLsetAnnotations(r_2, d_24);
  t = u_23;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_23);
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_23, (ATerm) ATmakeAppl(sym__2, not_null(t_23), x_23));
  s_2 = t;
  t = SSLsetAnnotations(s_2, v_23);
  c_24 = t;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,t_2 = NULL;
        t = SSLgetAnnotations(c_24);
        l_46 = t;
        t = k_26;
        t = fetch_1_0(c_2, t);
        o_46 = t;
        t = l_26;
        if(match_cons(t, sym__2))
          {
            q_46 = ATgetArgument(t, 0);
            r_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_3(d_2, q_46, r_46, t);
        p_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_46, p_46);
        t_2 = t;
        t = SSLsetAnnotations(t_2, l_46);
        LocalPopChoice(u_5);
      }
    else
      {
        t = t_5;
        {
          ATerm y_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,u_2 = NULL;
          t = SSLgetAnnotations(c_24);
          y_46 = t;
          t = l_26;
          if(match_cons(t, sym__2))
            {
              c_47 = ATgetArgument(t, 0);
              d_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(e_2, c_47, d_47, t);
          b_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_26, b_47);
          u_2 = t;
          t = SSLsetAnnotations(u_2, y_46);
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
ATerm apply_strategy_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  s_26 = t;
  t = dtime_0_0(t);
  t = s_26;
  t = m_84(t);
  r_26 = t;
  t = dtime_0_0(t);
  o_26 = t;
  t = r_26;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_26), (ATerm) ATmakeAppl(sym_Runtime_1, o_26)), q_26);
  return(t);
}
static ATerm h_27 (ATerm a_27, ATerm t)
{
  t = SSL_fclose(a_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_27 = ATgetArgument(t, 0);
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_27);
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            t = h_27(e_27, t);
          }
      }
    }
  else
    {
      t = h_27(e_27, t);
    }
  return(t);
}
static ATerm x_3 (ATerm p_40, ATerm t)
{
  t = SSL_read_term_from_stream(p_40);
  return(t);
}
static ATerm y_3 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm i_27 = NULL;
  t = SSL_fopen(j_15, k_15);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_27 = NULL;
  t = SSL_stdin_stream();
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_stdout_stream();
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_stderr_stream();
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
  return(t);
}
static ATerm v_28 (ATerm r_27, ATerm t)
{
  ATerm s_27 = NULL;
  t = SSL_explode_term(r_27);
  if(match_cons(t, sym__2))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_5 = ATgetArgument(t, 1);
        if(((ATgetType(y_5) == AT_LIST) && !(ATisEmpty(y_5))))
          {
            s_27 = ATgetFirst((ATermList) y_5);
            {
              ATerm z_5 = (ATerm) ATgetNext((ATermList) y_5);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_28 (ATerm v_27, ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,d_28 = NULL,z_2 = NULL;
  t = SSLgetAnnotations(x_27);
  a_28 = t;
  t = v_27;
  if(match_cons(t, sym_Path_1))
    {
      d_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_28, w_27);
  z_2 = t;
  t = SSLsetAnnotations(z_2, a_28);
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(y_27, z_27, t);
  return(t);
}
static ATerm x_28 (ATerm f_28, ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,n_28 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(h_28);
  k_28 = t;
  t = SSL_is_string(f_28);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, g_28);
  a_3 = t;
  t = SSLsetAnnotations(a_3, k_28);
  if(match_cons(t, sym__2))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(i_28, j_28, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm p_28 = NULL,t_28 = NULL,u_28 = NULL;
  p_28 = t;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
      {
        ATerm a_6 = t;
        int b_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_28(p_28, t);
            LocalPopChoice(b_6);
          }
        else
          {
            t = a_6;
            {
              ATerm c_6 = t;
              int d_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_28(t_28, u_28, p_28, t);
                  LocalPopChoice(d_6);
                }
              else
                {
                  t = c_6;
                  t = x_28(t_28, u_28, p_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_28(p_28, t);
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL;
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, term_h_6);
      t = z_3(t);
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
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
ATerm fetch_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  static ATerm z_29 (ATerm t)
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
      ATerm i_6 = t;
      int j_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_47 = NULL,x_47 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(w_29);
          u_47 = t;
          t = x_29;
          t = f_70(t);
          x_47 = t;
          t = (ATerm) ATinsert(CheckATermList(y_29), x_47);
          d_3 = t;
          t = SSLsetAnnotations(d_3, u_47);
          LocalPopChoice(j_6);
        }
      else
        {
          t = i_6;
          {
            ATerm f_48 = NULL,i_48 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(w_29);
            f_48 = t;
            t = y_29;
            t = z_29(t);
            i_48 = t;
            t = (ATerm) ATinsert(CheckATermList(i_48), x_29);
            e_3 = t;
            t = SSLsetAnnotations(e_3, f_48);
          }
        }
    }
    return(t);
  }
  t = z_29(t);
  return(t);
}
static ATerm s_3 (ATerm k_35, ATerm l_35, ATerm t)
{
  t = SSL_strcat(k_35, l_35);
  return(t);
}
ATerm debug_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  c_30 = t;
  t = h_83(t);
  d_30 = t;
  t = term_f_5;
  e_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_30), d_30);
  f_30 = t;
  t = SSL_printnl(e_30, f_30);
  t = c_30;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_m_6;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_30 = NULL;
      o_30 = t;
      t = SSL_is_string(o_30);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_2, t);
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
            {
              ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
              u_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_30 = ATgetArgument(t, 0);
                  t = v_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_30 = ATgetArgument(t, 0);
                      t = v_30;
                      {
                        ATerm r_6 = t;
                        int s_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(s_6);
                          }
                        else
                          {
                            t = r_6;
                            t = debug_1_0(h_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_31 = NULL,b_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_30 = ATgetArgument(t, 0);
                          w_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_30;
                      t = eval_config_0_0(t);
                      a_31 = t;
                      t = w_30;
                      t = eval_config_0_0(t);
                      b_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_31, b_31);
                      t = s_3(a_31, b_31, t);
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
  ATerm f_31 = NULL,g_31 = NULL;
  f_31 = t;
  t = term_t_6;
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, f_31);
  t = c_4(g_31, f_31, t);
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_31 = NULL,i_31 = NULL;
        t = eval_config_0_0(t);
        h_31 = t;
        t = term_t_6;
        i_31 = t;
        t = SSL_table_put(i_31, f_31, h_31);
        t = h_31;
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_31 = NULL;
        t = term_y_6;
        t = get_config_0_0(t);
        o_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_31, term_z_6);
        t = geq_0_0(t);
        t = m_31;
        t = h_81(t);
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        t = m_31;
      }
  }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  if(match_string(t, "-k"))
    {
      t = r_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_31;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  t = SSL_string_to_int(s_31);
  t_31 = t;
  t = term_a_7;
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, t_31);
  t = f_4(u_31, t_31, t);
  t = s_31;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, k_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  if(match_string(t, "-S"))
    {
      t = w_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_31;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  t = term_y_6;
  x_31 = t;
  t = term_c_7;
  y_31 = t;
  t = term_d_7;
  t = f_4(x_31, y_31, t);
  t = term_e_7;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  t = SSL_string_to_int(z_31);
  a_32 = t;
  t = term_y_6;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, a_32);
  t = f_4(b_32, a_32, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_31);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_g_7;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  t = term_h_7;
  c_32 = t;
  t = term_e_5;
  d_32 = t;
  t = term_i_7;
  t = f_4(c_32, d_32, t);
  t = term_j_7;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_2, m_2, n_2, t);
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, p_2, q_2, t);
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            t = Option_3_0(v_2, w_2, x_2, t);
          }
      }
    }
  return(t);
}
static ATerm f_4 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm e_32 = NULL;
  t = term_t_6;
  e_32 = t;
  t = SSL_table_put(e_32, c_39, d_39);
  t = (ATerm) ATmakeAppl(sym__3, term_t_6, c_39, d_39);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
      t = term_e_5;
      t = i_0(t);
      j_32 = t;
      t = term_p_7;
      k_32 = t;
      t = term_q_7;
      l_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_7, term_q_7, j_32);
      t = d_4(k_32, l_32, j_32, t);
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
      t = term_e_5;
      t = g_0(t);
      o_32 = t;
      t = (ATerm) ATinsert(CheckATermList(i_32), o_32);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
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
static ATerm b_3 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  r_32 = t;
  t = term_r_7;
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, r_32);
  t = f_4(s_32, r_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_32);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_s_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, b_3, c_3, t);
  return(t);
}
static ATerm d_4 (ATerm r_28, ATerm s_28, ATerm q_28, ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_7 = ATgetArgument(t, 0);
            ATerm w_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
        t = c_4(r_28, s_28, t);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        t = (ATerm) ATempty;
      }
  }
  v_32 = t;
  t = (ATerm) ATinsert(CheckATermList(v_32), q_28);
  w_32 = t;
  t = SSL_table_put(r_28, s_28, w_32);
  t = u_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
      t = term_e_5;
      t = p_0(t);
      h_33 = t;
      t = term_p_7;
      i_33 = t;
      t = term_q_7;
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_7, term_q_7, h_33);
      t = d_4(i_33, j_33, h_33, t);
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
      t = n_0(t);
      t = f_33;
      t = o_0(t);
      n_33 = t;
      t = (ATerm) ATinsert(CheckATermList(g_33), n_33);
    }
  return(t);
}
static ATerm f_3 (ATerm t)
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
static ATerm g_3 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  q_33 = t;
  t = term_x_7;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, q_33);
  t = f_4(r_33, q_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_33);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_y_7;
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
  t = term_e_5;
  t = whoami_0_0(t);
  s_33 = t;
  t = term_f_5;
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_7), s_33);
  v_33 = t;
  t = SSL_printnl(u_33, v_33);
  t = term_i_5;
  t_33 = t;
  t = SSL_exit(t_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_8;
  t = get_config_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm z_25, ATerm a_26, ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_25, a_26);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      t = SSL_addr(z_25, a_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_33;
      t = n_76(t);
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
      t = foldr_2_0(n_76, o_76, t);
      c_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_33, c_34);
      t = o_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(z_48, a_49, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_34 = NULL,v_48 = NULL,w_48 = NULL;
  t = times_0_0(t);
  w_48 = t;
  t = SSL_explode_term(w_48);
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_48;
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
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_34;
        if((r_34 != t))
          {
            _fail(t);
          }
        t = q_34;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = (ATerm) ATmakeAppl(sym__2, r_34, s_34);
        {
          ATerm g_8 = t;
          int h_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_34, s_34);
              LocalPopChoice(h_8);
            }
          else
            {
              t = g_8;
              t = SSL_gtr(r_34, s_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_34, s_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_34 = NULL;
        t = term_y_6;
        t = get_config_0_0(t);
        y_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_34, term_i_5);
        t = geq_0_0(t);
        t = w_34;
        t = g_81(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = w_34;
      }
  }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,d_35 = NULL,e_35 = NULL;
  t = run_time_0_0(t);
  a_35 = t;
  t = term_e_5;
  t = whoami_0_0(t);
  b_35 = t;
  t = term_f_5;
  d_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_8), a_35), term_k_8), b_35);
  e_35 = t;
  t = SSL_printnl(d_35, e_35);
  t = (ATerm) ATmakeAppl(sym__2, term_f_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_8), a_35), term_k_8), b_35));
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
  t = term_c_7;
  f_35 = t;
  t = SSL_exit(f_35);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  q_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_35 = ATgetArgument(t, 0);
          {
            ATerm m_49 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(q_35);
            m_49 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_35);
            h_3 = t;
            t = SSLsetAnnotations(h_3, m_49);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_8;
      t = get_config_0_0(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      t = fetch_1_0(q_3, t);
    }
  t = k_85(t);
  return(t);
}
ATerm map_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  static ATerm g_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
    d_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_36;
      }
    else
      {
        ATerm u_49 = NULL,x_49 = NULL,y_49 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_36 = ATgetFirst((ATermList) t);
            f_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_36);
        u_49 = t;
        t = e_36;
        t = v_69(t);
        x_49 = t;
        t = f_36;
        t = g_36(t);
        y_49 = t;
        t = (ATerm) ATinsert(CheckATermList(y_49), x_49);
        j_3 = t;
        t = SSLsetAnnotations(j_3, u_49);
      }
    return(t);
  }
  t = g_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_36 = ATgetFirst((ATermList) t);
      k_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_36 = NULL,p_36 = NULL;
        static ATerm b_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_36)), not_null(p_36));
          return(t);
        }
        t = k_36;
        t = l_0(t);
        if(((o_36 != NULL) && (o_36 != t)))
          _fail(t);
        else
          o_36 = t;
        t = j_36;
        t = k_0(t);
        if(((p_36 != NULL) && (p_36 != t)))
          _fail(t);
        else
          p_36 = t;
        t = k_36;
        t = reverse_acc_2_0(k_0, b_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm c_4 (ATerm i_30, ATerm j_30, ATerm t)
{
  t = SSL_table_get(i_30, j_30);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,l_3 = NULL;
  v_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_36);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_36);
  l_3 = t;
  t = SSLsetAnnotations(l_3, t_36);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_36), term_p_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_8;
      t = get_config_0_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      t = fetch_1_0(g_4, t);
    }
  t = term_s_8;
  t = echo_0_0(t);
  t = term_p_7;
  r_36 = t;
  t = term_q_7;
  s_36 = t;
  t = term_t_8;
  t = c_4(r_36, s_36, t);
  t = reverse_acc_2_0(_id, h_4, t);
  t = map_1_0(i_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_8 = ATgetFirst((ATermList) t);
                ATerm x_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_36;
          }
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = (ATerm) ATinsert(ATempty, z_36);
      }
  }
  a_37 = t;
  t = term_s_5;
  b_37 = t;
  t = SSL_printnl(b_37, a_37);
  t = z_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_8;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL;
  t = term_y_8;
  f_37 = t;
  t = term_e_5;
  g_37 = t;
  t = term_z_8;
  t = f_4(f_37, g_37, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  t = term_y_8;
  j_37 = t;
  t = term_e_5;
  k_37 = t;
  t = term_z_8;
  t = f_4(j_37, k_37, t);
  t = term_b_9;
  h_37 = t;
  t = term_e_5;
  i_37 = t;
  t = term_c_9;
  t = f_4(h_37, i_37, t);
  t = term_d_9;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_4, k_4, l_4, t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = f_9;
      t = Option_3_0(m_4, n_4, o_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_58 (ATerm), ATerm m_58 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,n_3 = NULL;
  q_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_37 = ATgetFirst((ATermList) t);
      n_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_37);
  l_37 = t;
  t = m_37;
  t = l_58(t);
  o_37 = t;
  t = n_37;
  t = m_58(t);
  p_37 = t;
  t = (ATerm) ATinsert(CheckATermList(p_37), o_37);
  n_3 = t;
  t = SSLsetAnnotations(n_3, l_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,a_38 = NULL,b_38 = NULL,p_3 = NULL;
  v_37 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_9;
        t = i_87(t);
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
      }
  }
  t = v_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_37 = ATgetFirst((ATermList) t);
      y_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_37);
  w_37 = t;
  t = term_a_8;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_8, x_37);
  t = f_4(b_38, x_37, t);
  t = y_37;
  {
    static ATerm l_38 (ATerm t)
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_38 = NULL;
              e_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_38;
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = i_87(t);
              t = Cons_2_0(_id, l_38, t);
            }
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          {
            ATerm h_38 = NULL,i_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_38 = ATgetFirst((ATermList) t);
                i_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_38), (ATerm) ATmakeAppl(sym_Undefined_1, h_38));
          }
        }
      return(t);
    }
    t = l_38(t);
  }
  a_38 = t;
  t = (ATerm) ATinsert(CheckATermList(a_38), (ATerm) ATmakeAppl(sym_Program_1, x_37));
  p_3 = t;
  t = SSLsetAnnotations(p_3, w_37);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_38 = NULL;
  x_38 = t;
  if(match_string(t, "--help"))
    {
      t = x_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_38;
        }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  t = term_o_8;
  y_38 = t;
  t = term_e_5;
  z_38 = t;
  t = term_q_9;
  t = f_4(y_38, z_38, t);
  t = term_r_9;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_s_9;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  s_38 = t;
  t = term_p_7;
  u_38 = t;
  t = term_q_7;
  v_38 = t;
  t = (ATerm) ATempty;
  w_38 = t;
  t = SSL_table_put(u_38, v_38, w_38);
  t = s_38;
  {
    static ATerm p_4 (ATerm t)
    {
      ATerm t_9 = t;
      int u_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_87(t);
          LocalPopChoice(u_9);
        }
      else
        {
          t = t_9;
          {
            ATerm v_9 = t;
            int x_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_4, r_4, s_4, t);
                LocalPopChoice(x_9);
              }
            else
              {
                t = v_9;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_4, t);
  }
  {
    ATerm y_9 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_39 = NULL;
        i_39 = t;
        {
          ATerm d_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_50 = NULL;
              t = i_39;
              {
                ATerm j_10 = t;
                int k_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_8;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_10);
                  }
                else
                  {
                    t = j_10;
                    t = fetch_1_0(t_4, t);
                  }
              }
              t = i_39;
              t = default_system_usage_0_0(t);
              t = term_c_7;
              f_50 = t;
              t = SSL_exit(f_50);
              LocalPopChoice(i_10);
            }
          else
            {
              t = d_10;
              {
                ATerm j_50 = NULL;
                t = term_y_8;
                t = get_config_0_0(t);
                t = i_39;
                t = default_system_about_0_0(t);
                t = term_c_7;
                j_50 = t;
                t = SSL_exit(j_50);
              }
            }
        }
        LocalPopChoice(b_10);
      }
    else
      {
        t = y_9;
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_39 = NULL,k_39 = NULL,q_39 = NULL;
              static ATerm u_4 (ATerm t)
              {
                ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,r_3 = NULL;
                t_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_39);
                r_39 = t;
                t = s_39;
                if(((q_38 != NULL) && (q_38 != t)))
                  _fail(t);
                else
                  q_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_39);
                r_3 = t;
                t = SSLsetAnnotations(r_3, r_39);
                return(t);
              }
              t = fetch_1_0(u_4, t);
              t = term_f_5;
              k_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_n_10);
              q_39 = t;
              t = SSL_printnl(k_39, q_39);
              t = (ATerm) ATmakeAppl(sym__2, term_f_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_n_10));
              t = default_system_usage_0_0(t);
              t = term_i_5;
              j_39 = t;
              t = SSL_exit(j_39);
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
            }
        }
      }
  }
  r_38 = t;
  t = term_p_7;
  t_38 = t;
  t = SSL_table_destroy(t_38);
  t = r_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  t = parse_options_1_0(m_85, t);
  y_39 = t;
  t = term_o_10;
  b_40 = t;
  t = SSL_table_create(b_40);
  t = term_o_10;
  z_39 = t;
  t = term_p_10;
  a_40 = t;
  t = SSL_table_put(z_39, a_40, y_39);
  t = y_39;
  t = o_85(t);
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_85, t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        {
          ATerm t_10 = t;
          int u_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_10);
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
static ATerm w_4 (ATerm t)
{
  t = if_verbose2_1_0(b_5, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  t = term_v_10;
  c_40 = t;
  t = term_e_5;
  d_40 = t;
  t = term_w_10;
  t = f_4(c_40, d_40, t);
  t = term_x_10;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_y_10;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  e_40 = t;
  t = term_a_8;
  t = get_config_0_0(t);
  f_40 = t;
  t = term_f_5;
  g_40 = t;
  t = (ATerm) ATinsert(ATempty, f_40);
  h_40 = t;
  t = SSL_printnl(g_40, h_40);
  t = e_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  static ATerm v_4 (ATerm t)
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_84(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        {
          ATerm b_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(e_11);
            }
          else
            {
              t = b_11;
              {
                ATerm h_11 = t;
                int i_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(i_11);
                  }
                else
                  {
                    t = h_11;
                    {
                      ATerm m_11 = t;
                      int n_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_4, z_4, a_5, t);
                          LocalPopChoice(n_11);
                        }
                      else
                        {
                          t = m_11;
                          {
                            ATerm o_11 = t;
                            int p_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(p_11);
                              }
                            else
                              {
                                t = o_11;
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
  static ATerm x_4 (ATerm t)
  {
    ATerm i_40 = NULL,l_40 = NULL,m_40 = NULL;
    l_40 = t;
    {
      ATerm q_11 = t;
      int r_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm c_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_40 != NULL) && (i_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_5, t);
          LocalPopChoice(r_11);
        }
      else
        {
          t = q_11;
          t = term_s_11;
          i_40 = t;
        }
    }
    t = not_null(i_40);
    t = ReadFromFile_0_0(t);
    m_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_40, m_40);
    t = apply_strategy_1_0(v_84, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_4, x_84, w_4, x_4, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,e_4 = NULL;
  w_40 = t;
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_40);
  s_40 = t;
  t = u_40;
  t = Box_0_0(t);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_40, v_40);
  e_4 = t;
  t = SSLsetAnnotations(e_4, s_40);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_5, _fail, default_usage_0_0, t);
  return(t);
}

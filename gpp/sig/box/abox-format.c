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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_n_11;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_e_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_t_5;
ATerm term_q_5;
ATerm term_n_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_o_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__2, term_o_6, term_t_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_y_6, term_f_5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_r_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_g_8);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_h_7);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_f_5);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_f_5);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_f_5);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_r_8);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_f_5);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm e_85 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm Box_0_0 (ATerm t);
static ATerm o_3 (ATerm i_15, ATerm j_15, ATerm t);
static ATerm p_3 (ATerm d_41, ATerm e_41, ATerm t);
static ATerm r_3 (ATerm g_85 (ATerm), ATerm g_455, ATerm j_41, ATerm t);
static ATerm q_3 (ATerm z_40, ATerm a_41, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_86 (ATerm), ATerm t);
static ATerm c_28 (ATerm w_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_3 (ATerm f_41, ATerm t);
static ATerm t_3 (ATerm f_36, ATerm g_36, ATerm t);
static ATerm u_3 (ATerm k_15, ATerm l_15, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_29 (ATerm m_28, ATerm t);
static ATerm r_29 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t);
static ATerm s_29 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm t);
static ATerm v_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_71 (ATerm), ATerm t);
static ATerm y_3 (ATerm s_30, ATerm t_30, ATerm t);
ATerm if_verbose2_1_0 (ATerm e_83 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_4 (ATerm x_39, ATerm y_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_3 (ATerm b_29, ATerm c_29, ATerm a_29, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_3 (ATerm j_26, ATerm k_26, ATerm t);
ATerm foldr_2_0 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_83 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm need_help_1_0 (ATerm h_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_89 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm parse_options_1_0 (ATerm e_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm iowrap_3_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,t_0 = NULL,v_0 = NULL,k_1 = NULL;
  a_0 = t;
  t = term_f_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_g_5;
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_5), b_0), term_h_5);
  k_1 = t;
  t = SSL_printnl(v_0, k_1);
  t = term_j_5;
  t_0 = t;
  t = SSL_exit(t_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL;
  l_1 = t;
  t = e_85(t);
  n_1 = t;
  t = term_g_5;
  o_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_1), n_1);
  q_1 = t;
  t = SSL_printnl(o_1, q_1);
  t = l_1;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,d_10 = NULL,h_0 = NULL;
  d_10 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_10);
  x_9 = t;
  t = y_9;
  if(match_cons(t, sym_VS_0))
    {
      t = y_9;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = y_9;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = y_9;
        }
    }
  t = SSL_is_string(z_9);
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, y_9, a_10);
  h_0 = t;
  t = SSLsetAnnotations(h_0, x_9);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,b_11 = NULL,m_0 = NULL;
  b_11 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_11);
  v_10 = t;
  t = x_10;
  if(match_cons(t, sym_VS_0))
    {
      t = x_10;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = x_10;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = x_10;
        }
    }
  t = SSL_is_string(y_10);
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, x_10, z_10);
  m_0 = t;
  t = SSLsetAnnotations(m_0, v_10);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm u_11 = NULL,x_11 = NULL,y_11 = NULL,a_12 = NULL,b_12 = NULL,p_0 = NULL;
  b_12 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      x_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_12);
  u_11 = t;
  t = x_11;
  if(match_cons(t, sym_VS_0))
    {
      t = x_11;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = x_11;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = x_11;
        }
    }
  t = SSL_is_string(y_11);
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, x_11, a_12);
  p_0 = t;
  t = SSLsetAnnotations(p_0, u_11);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm r_20 = NULL,u_20 = NULL,w_21 = NULL;
  r_20 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      u_20 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
      {
        ATerm h_22 = NULL,l_22 = NULL,s_0 = NULL;
        t = SSLgetAnnotations(r_20);
        h_22 = t;
        t = u_20;
        if(match_cons(t, sym_FN_0))
          {
            t = u_20;
          }
        else
          {
            if(match_cons(t, sym_FM_0))
              {
                t = u_20;
              }
            else
              {
                if(match_cons(t, sym_SE_0))
                  {
                    t = u_20;
                  }
                else
                  {
                    if(match_cons(t, sym_SH_0))
                      {
                        t = u_20;
                      }
                    else
                      {
                        if(match_cons(t, sym_SZ_0))
                          {
                            t = u_20;
                          }
                        else
                          {
                            if(!(match_cons(t, sym_CL_0)))
                              _fail(t);
                            t = u_20;
                          }
                      }
                  }
              }
          }
        t = SSL_is_string(w_21);
        l_22 = t;
        t = (ATerm) ATmakeAppl(sym_FNAT_2, u_20, l_22);
        s_0 = t;
        t = SSLsetAnnotations(s_0, h_22);
      }
    }
  else
    {
      ATerm h_23 = NULL,m_23 = NULL,u_0 = NULL;
      if(match_cons(t, sym_FFID_2))
        {
          u_20 = ATgetArgument(t, 0);
          w_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_20);
      h_23 = t;
      t = u_20;
      if(match_cons(t, sym_FN_0))
        {
          t = u_20;
        }
      else
        {
          if(match_cons(t, sym_FM_0))
            {
              t = u_20;
            }
          else
            {
              if(match_cons(t, sym_SE_0))
                {
                  t = u_20;
                }
              else
                {
                  if(match_cons(t, sym_SH_0))
                    {
                      t = u_20;
                    }
                  else
                    {
                      if(match_cons(t, sym_SZ_0))
                        {
                          t = u_20;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_CL_0)))
                            _fail(t);
                          t = u_20;
                        }
                    }
                }
            }
        }
      t = SSL_is_string(w_21);
      m_23 = t;
      t = (ATerm) ATmakeAppl(sym_FFID_2, u_20, m_23);
      u_0 = t;
      t = SSLsetAnnotations(u_0, h_23);
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym_AL_1))
    {
      j_28 = ATgetArgument(t, 0);
      {
        ATerm b_41 = NULL,g_41 = NULL,z_0 = NULL;
        t = SSLgetAnnotations(i_28);
        b_41 = t;
        t = j_28;
        t = map_1_0(y_1, t);
        g_41 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, g_41);
        z_0 = t;
        t = SSLsetAnnotations(z_0, b_41);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          j_28 = ATgetArgument(t, 0);
          {
            ATerm a_42 = NULL,c_42 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(i_28);
            a_42 = t;
            t = j_28;
            t = map_1_0(z_1, t);
            c_42 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, c_42);
            b_1 = t;
            t = SSLsetAnnotations(b_1, a_42);
          }
        }
      else
        {
          ATerm v_42 = NULL,x_42 = NULL,d_1 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              j_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_28);
          v_42 = t;
          t = j_28;
          t = map_1_0(a_2, t);
          x_42 = t;
          t = (ATerm) ATmakeAppl(sym_AR_1, x_42);
          d_1 = t;
          t = SSLsetAnnotations(d_1, v_42);
        }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,y_0 = NULL;
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
  y_0 = t;
  t = SSLsetAnnotations(y_0, s_41);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,a_1 = NULL;
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
  a_1 = t;
  t = SSLsetAnnotations(a_1, n_42);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,c_1 = NULL;
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
  c_1 = t;
  t = SSLsetAnnotations(c_1, i_43);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,t_29 = NULL,e_30 = NULL,f_30 = NULL,f_1 = NULL;
  f_30 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      l_28 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_30);
  k_28 = t;
  t = l_28;
  if(match_cons(t, sym_VS_0))
    {
      t = l_28;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = l_28;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = l_28;
        }
    }
  t = SSL_is_string(t_29);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, l_28, e_30);
  f_1 = t;
  t = SSLsetAnnotations(f_1, k_28);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,h_1 = NULL;
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
  h_1 = t;
  t = SSLsetAnnotations(h_1, x_43);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,p_1 = NULL;
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
  p_1 = t;
  t = SSLsetAnnotations(p_1, n_45);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_k_5;
  return(t);
}
ATerm Box_0_0 (ATerm t)
{
  ATerm l_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_22 = NULL,c_22 = NULL,g_22 = NULL,i_22 = NULL;
      i_22 = t;
      if(match_cons(t, sym_S_1))
        {
          c_22 = ATgetArgument(t, 0);
          {
            ATerm b_9 = NULL,d_9 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(i_22);
            b_9 = t;
            t = SSL_is_string(c_22);
            d_9 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, d_9);
            f_0 = t;
            t = SSLsetAnnotations(f_0, b_9);
          }
        }
      else
        {
          if(match_cons(t, sym_H_2))
            {
              c_22 = ATgetArgument(t, 0);
              g_22 = ATgetArgument(t, 1);
              {
                ATerm q_9 = NULL,t_9 = NULL,u_9 = NULL,j_0 = NULL;
                t = SSLgetAnnotations(i_22);
                q_9 = t;
                t = c_22;
                t = map_1_0(t_1, t);
                t_9 = t;
                t = g_22;
                t = map_1_0(Box_0_0, t);
                u_9 = t;
                t = (ATerm) ATmakeAppl(sym_H_2, t_9, u_9);
                j_0 = t;
                t = SSLsetAnnotations(j_0, q_9);
              }
            }
          else
            {
              if(match_cons(t, sym_V_2))
                {
                  c_22 = ATgetArgument(t, 0);
                  g_22 = ATgetArgument(t, 1);
                  {
                    ATerm m_10 = NULL,s_10 = NULL,t_10 = NULL,o_0 = NULL;
                    t = SSLgetAnnotations(i_22);
                    m_10 = t;
                    t = c_22;
                    t = map_1_0(u_1, t);
                    s_10 = t;
                    t = g_22;
                    t = map_1_0(Box_0_0, t);
                    t_10 = t;
                    t = (ATerm) ATmakeAppl(sym_V_2, s_10, t_10);
                    o_0 = t;
                    t = SSLsetAnnotations(o_0, m_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_HV_2))
                    {
                      c_22 = ATgetArgument(t, 0);
                      g_22 = ATgetArgument(t, 1);
                      {
                        ATerm l_11 = NULL,q_11 = NULL,s_11 = NULL,q_0 = NULL;
                        t = SSLgetAnnotations(i_22);
                        l_11 = t;
                        t = c_22;
                        t = map_1_0(v_1, t);
                        q_11 = t;
                        t = g_22;
                        t = map_1_0(Box_0_0, t);
                        s_11 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, q_11, s_11);
                        q_0 = t;
                        t = SSLsetAnnotations(q_0, l_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ALT_2))
                        {
                          c_22 = ATgetArgument(t, 0);
                          g_22 = ATgetArgument(t, 1);
                          {
                            ATerm q_12 = NULL,v_12 = NULL,w_12 = NULL,r_0 = NULL;
                            t = SSLgetAnnotations(i_22);
                            q_12 = t;
                            t = c_22;
                            t = Box_0_0(t);
                            v_12 = t;
                            t = g_22;
                            t = Box_0_0(t);
                            w_12 = t;
                            t = (ATerm) ATmakeAppl(sym_ALT_2, v_12, w_12);
                            r_0 = t;
                            t = SSLsetAnnotations(r_0, q_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FBOX_2))
                            {
                              c_22 = ATgetArgument(t, 0);
                              g_22 = ATgetArgument(t, 1);
                              {
                                ATerm k_13 = NULL,q_13 = NULL,r_13 = NULL,x_0 = NULL,n_15 = NULL;
                                t = SSLgetAnnotations(i_22);
                                k_13 = t;
                                t = c_22;
                                if(match_cons(t, sym_F_1))
                                  {
                                    n_15 = ATgetArgument(t, 0);
                                    {
                                      ATerm l_18 = NULL,p_18 = NULL,w_0 = NULL;
                                      t = SSLgetAnnotations(c_22);
                                      l_18 = t;
                                      t = n_15;
                                      t = map_1_0(w_1, t);
                                      p_18 = t;
                                      t = (ATerm) ATmakeAppl(sym_F_1, p_18);
                                      w_0 = t;
                                      t = SSLsetAnnotations(w_0, l_18);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_KW_0))
                                      {
                                        t = c_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_VAR_0))
                                          {
                                            t = c_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_NUM_0))
                                              {
                                                t = c_22;
                                              }
                                            else
                                              {
                                                if(!(match_cons(t, sym_MATH_0)))
                                                  _fail(t);
                                                t = c_22;
                                              }
                                          }
                                      }
                                  }
                                q_13 = t;
                                t = g_22;
                                t = Box_0_0(t);
                                r_13 = t;
                                t = (ATerm) ATmakeAppl(sym_FBOX_2, q_13, r_13);
                                x_0 = t;
                                t = SSLsetAnnotations(x_0, k_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_A_3))
                                {
                                  c_22 = ATgetArgument(t, 0);
                                  g_22 = ATgetArgument(t, 1);
                                  b_22 = ATgetArgument(t, 2);
                                  {
                                    ATerm d_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,g_1 = NULL,e_1 = NULL;
                                    t = SSLgetAnnotations(i_22);
                                    d_24 = t;
                                    t = c_22;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        k_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(c_22);
                                    j_24 = t;
                                    t = k_24;
                                    t = map_1_0(x_1, t);
                                    l_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, l_24);
                                    e_1 = t;
                                    t = SSLsetAnnotations(e_1, j_24);
                                    m_24 = t;
                                    t = g_22;
                                    t = map_1_0(b_2, t);
                                    h_24 = t;
                                    t = b_22;
                                    t = map_1_0(Box_0_0, t);
                                    i_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_A_3, m_24, h_24, i_24);
                                    g_1 = t;
                                    t = SSLsetAnnotations(g_1, d_24);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_R_2))
                                    {
                                      c_22 = ATgetArgument(t, 0);
                                      g_22 = ATgetArgument(t, 1);
                                      {
                                        ATerm r_43 = NULL,u_43 = NULL,v_43 = NULL,i_1 = NULL;
                                        t = SSLgetAnnotations(i_22);
                                        r_43 = t;
                                        t = c_22;
                                        t = map_1_0(c_2, t);
                                        u_43 = t;
                                        t = g_22;
                                        t = map_1_0(Box_0_0, t);
                                        v_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_R_2, u_43, v_43);
                                        i_1 = t;
                                        t = SSLsetAnnotations(i_1, r_43);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBL_2))
                                        {
                                          c_22 = ATgetArgument(t, 0);
                                          g_22 = ATgetArgument(t, 1);
                                          {
                                            ATerm j_44 = NULL,m_44 = NULL,n_44 = NULL,j_1 = NULL;
                                            t = SSLgetAnnotations(i_22);
                                            j_44 = t;
                                            t = SSL_is_string(c_22);
                                            m_44 = t;
                                            t = g_22;
                                            t = Box_0_0(t);
                                            n_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_LBL_2, m_44, n_44);
                                            j_1 = t;
                                            t = SSLsetAnnotations(j_1, j_44);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REF_2))
                                            {
                                              c_22 = ATgetArgument(t, 0);
                                              g_22 = ATgetArgument(t, 1);
                                              {
                                                ATerm v_44 = NULL,y_44 = NULL,z_44 = NULL,m_1 = NULL;
                                                t = SSLgetAnnotations(i_22);
                                                v_44 = t;
                                                t = SSL_is_string(c_22);
                                                y_44 = t;
                                                t = g_22;
                                                t = Box_0_0(t);
                                                z_44 = t;
                                                t = (ATerm) ATmakeAppl(sym_REF_2, y_44, z_44);
                                                m_1 = t;
                                                t = SSLsetAnnotations(m_1, v_44);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  c_22 = ATgetArgument(t, 0);
                                                  g_22 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm h_45 = NULL,k_45 = NULL,l_45 = NULL,r_1 = NULL;
                                                    t = SSLgetAnnotations(i_22);
                                                    h_45 = t;
                                                    t = c_22;
                                                    t = map_1_0(d_2, t);
                                                    k_45 = t;
                                                    t = g_22;
                                                    t = map_1_0(Box_0_0, t);
                                                    l_45 = t;
                                                    t = (ATerm) ATmakeAppl(sym_C_2, k_45, l_45);
                                                    r_1 = t;
                                                    t = SSLsetAnnotations(r_1, h_45);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_L_2))
                                                    {
                                                      c_22 = ATgetArgument(t, 0);
                                                      g_22 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm z_45 = NULL,c_46 = NULL,d_46 = NULL,s_1 = NULL;
                                                        t = SSLgetAnnotations(i_22);
                                                        z_45 = t;
                                                        t = c_22;
                                                        t = Box_0_0(t);
                                                        c_46 = t;
                                                        t = g_22;
                                                        t = Box_0_0(t);
                                                        d_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_L_2, c_46, d_46);
                                                        s_1 = t;
                                                        t = SSLsetAnnotations(s_1, z_45);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = i_22;
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
      LocalPopChoice(m_5);
    }
  else
    {
      t = l_5;
      t = debug_1_0(e_2, t);
    }
  return(t);
}
static ATerm o_3 (ATerm i_15, ATerm j_15, ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_fputc(i_15, j_15);
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_23);
  return(t);
}
static ATerm p_3 (ATerm d_41, ATerm e_41, ATerm t)
{
  ATerm w_23 = NULL;
  t = SSL_write_term_to_stream_text(d_41, e_41);
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_23);
  return(t);
}
static ATerm r_3 (ATerm g_85 (ATerm), ATerm g_455, ATerm j_41, ATerm t)
{
  ATerm x_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_455, term_n_5);
  t = v_3(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, j_41);
  t = g_85(t);
  t = fclose_0_0(t);
  t = j_41;
  return(t);
}
static ATerm q_3 (ATerm z_40, ATerm a_41, ATerm t)
{
  ATerm y_23 = NULL;
  t = SSL_write_term_to_stream_baf(z_40, a_41);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_23);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_5 = ATgetArgument(t, 0);
      if(match_cons(o_5, sym_Stream_1))
        {
          r_46 = ATgetArgument(o_5, 0);
        }
      else
        _fail(t);
      s_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(r_46, s_46, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_5 = ATgetArgument(t, 0);
      if(match_cons(p_5, sym_Stream_1))
        {
          g_47 = ATgetArgument(p_5, 0);
        }
      else
        _fail(t);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(g_47, h_47, t);
  d_47 = t;
  t = term_q_5;
  e_47 = t;
  t = d_47;
  if(match_cons(t, sym_Stream_1))
    {
      f_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_5, d_47);
  t = o_3(e_47, f_47, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL,v_24 = NULL,y_24 = NULL,a_25 = NULL,b_25 = NULL,d_27 = NULL,g_27 = NULL,w_2 = NULL,v_2 = NULL;
  p_24 = t;
  if(match_cons(t, sym__2))
    {
      y_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_24);
  v_24 = t;
  t = y_24;
  {
    ATerm r_5 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_2, t);
        LocalPopChoice(s_5);
      }
    else
      {
        t = r_5;
        t = term_t_5;
        o_24 = t;
      }
  }
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_25, a_25);
  v_2 = t;
  t = SSLsetAnnotations(v_2, v_24);
  t = p_24;
  if(match_cons(t, sym__2))
    {
      r_24 = ATgetArgument(t, 0);
      s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_24);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_24, (ATerm) ATmakeAppl(sym__2, not_null(o_24), s_24));
  w_2 = t;
  t = SSLsetAnnotations(w_2, q_24);
  u_24 = t;
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,x_2 = NULL;
        t = SSLgetAnnotations(u_24);
        k_46 = t;
        t = d_27;
        t = fetch_1_0(g_2, t);
        n_46 = t;
        t = g_27;
        if(match_cons(t, sym__2))
          {
            p_46 = ATgetArgument(t, 0);
            q_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_3(h_2, p_46, q_46, t);
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
        x_2 = t;
        t = SSLsetAnnotations(x_2, k_46);
        LocalPopChoice(v_5);
      }
    else
      {
        t = u_5;
        {
          ATerm x_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,y_2 = NULL;
          t = SSLgetAnnotations(u_24);
          x_46 = t;
          t = g_27;
          if(match_cons(t, sym__2))
            {
              b_47 = ATgetArgument(t, 0);
              c_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_3(i_2, b_47, c_47, t);
          a_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_27, a_47);
          y_2 = t;
          t = SSLsetAnnotations(y_2, x_46);
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
ATerm apply_strategy_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  n_27 = t;
  t = dtime_0_0(t);
  t = n_27;
  t = j_86(t);
  m_27 = t;
  t = dtime_0_0(t);
  j_27 = t;
  t = m_27;
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_27), (ATerm) ATmakeAppl(sym_Runtime_1, j_27)), l_27);
  return(t);
}
static ATerm c_28 (ATerm w_27, ATerm t)
{
  t = SSL_fclose(w_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_27 = ATgetArgument(t, 0);
      {
        ATerm w_5 = t;
        int x_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_27);
            LocalPopChoice(x_5);
          }
        else
          {
            t = w_5;
            t = c_28(a_28, t);
          }
      }
    }
  else
    {
      t = c_28(a_28, t);
    }
  return(t);
}
static ATerm s_3 (ATerm f_41, ATerm t)
{
  t = SSL_read_term_from_stream(f_41);
  return(t);
}
static ATerm t_3 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_strcat(f_36, g_36);
  return(t);
}
static ATerm u_3 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm d_28 = NULL;
  t = SSL_fopen(k_15, l_15);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_28 = NULL;
  t = SSL_stdin_stream();
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_28 = NULL;
  t = SSL_stdout_stream();
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_28 = NULL;
  t = SSL_stderr_stream();
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_28);
  return(t);
}
static ATerm q_29 (ATerm m_28, ATerm t)
{
  ATerm n_28 = NULL;
  t = SSL_explode_term(m_28);
  if(match_cons(t, sym__2))
    {
      ATerm y_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_5 = ATgetArgument(t, 1);
        if(((ATgetType(z_5) == AT_LIST) && !(ATisEmpty(z_5))))
          {
            n_28 = ATgetFirst((ATermList) z_5);
            {
              ATerm a_6 = (ATerm) ATgetNext((ATermList) z_5);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_29 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,y_28 = NULL,d_3 = NULL;
  t = SSLgetAnnotations(s_28);
  v_28 = t;
  t = q_28;
  if(match_cons(t, sym_Path_1))
    {
      y_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_28, r_28);
  d_3 = t;
  t = SSLsetAnnotations(d_3, v_28);
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(t_28, u_28, t);
  return(t);
}
static ATerm s_29 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,l_29 = NULL,e_3 = NULL;
  t = SSLgetAnnotations(f_29);
  i_29 = t;
  t = SSL_is_string(d_29);
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_29, e_29);
  e_3 = t;
  t = SSLsetAnnotations(e_3, i_29);
  if(match_cons(t, sym__2))
    {
      g_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(g_29, h_29, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_29(n_29, t);
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
                  t = r_29(o_29, p_29, n_29, t);
                  LocalPopChoice(e_6);
                }
              else
                {
                  t = d_6;
                  t = s_29(o_29, p_29, n_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_29(n_29, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,b_30 = NULL;
  b_30 = t;
  {
    ATerm f_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_30, term_h_6);
        t = v_3(t);
        LocalPopChoice(g_6);
      }
    else
      {
        t = f_6;
        {
          ATerm s_47 = NULL,t_47 = NULL;
          t = term_i_6;
          t_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_6, b_30);
          t = t_3(t_47, b_30, t);
          s_47 = t;
          t = SSL_perror(s_47);
          _fail(t);
        }
      }
  }
  v_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3(w_29, t);
  u_29 = t;
  t = v_29;
  t = fclose_0_0(t);
  t = u_29;
  return(t);
}
ATerm fetch_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  static ATerm c_31 (ATerm t)
  {
    ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
    z_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_31 = ATgetFirst((ATermList) t);
        b_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_47 = NULL,b_48 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(z_30);
          y_47 = t;
          t = a_31;
          t = o_71(t);
          b_48 = t;
          t = (ATerm) ATinsert(CheckATermList(b_31), b_48);
          h_3 = t;
          t = SSLsetAnnotations(h_3, y_47);
          LocalPopChoice(k_6);
        }
      else
        {
          t = j_6;
          {
            ATerm j_48 = NULL,m_48 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(z_30);
            j_48 = t;
            t = b_31;
            t = c_31(t);
            m_48 = t;
            t = (ATerm) ATinsert(CheckATermList(m_48), a_31);
            i_3 = t;
            t = SSLsetAnnotations(i_3, j_48);
          }
        }
    }
    return(t);
  }
  t = c_31(t);
  return(t);
}
static ATerm y_3 (ATerm s_30, ATerm t_30, ATerm t)
{
  t = SSL_table_get(s_30, t_30);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  {
    ATerm l_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
        t = term_n_6;
        j_31 = t;
        t = term_o_6;
        k_31 = t;
        t = term_p_6;
        t = y_3(j_31, k_31, t);
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_31, term_q_6);
        t = geq_0_0(t);
        t = g_31;
        t = e_83(t);
        LocalPopChoice(m_6);
      }
    else
      {
        t = l_6;
        t = g_31;
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  if(match_string(t, "-k"))
    {
      t = n_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_31;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = SSL_string_to_int(o_31);
  p_31 = t;
  t = term_r_6;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, p_31);
  t = b_4(q_31, p_31, t);
  t = o_31;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  if(match_string(t, "-S"))
    {
      t = s_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_31;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  t = term_o_6;
  t_31 = t;
  t = term_t_6;
  u_31 = t;
  t = term_u_6;
  t = b_4(t_31, u_31, t);
  t = term_v_6;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_w_6;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  t = SSL_string_to_int(v_31);
  w_31 = t;
  t = term_o_6;
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_6, w_31);
  t = b_4(x_31, w_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_31);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  t = term_y_6;
  y_31 = t;
  t = term_f_5;
  z_31 = t;
  t = term_z_6;
  t = b_4(y_31, z_31, t);
  t = term_a_7;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_2, n_2, o_2, t);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, q_2, r_2, t);
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
static ATerm b_4 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm a_32 = NULL;
  t = term_n_6;
  a_32 = t;
  t = SSL_table_put(a_32, x_39, y_39);
  t = (ATerm) ATmakeAppl(sym__3, term_n_6, x_39, y_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
      t = term_f_5;
      t = e_0(t);
      f_32 = t;
      t = term_g_7;
      g_32 = t;
      t = term_h_7;
      h_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_h_7, f_32);
      t = z_3(g_32, h_32, f_32, t);
      _fail(t);
    }
  else
    {
      ATerm k_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_32 = ATgetFirst((ATermList) t);
          e_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_32;
      t = c_0(t);
      t = term_f_5;
      t = d_0(t);
      k_32 = t;
      t = (ATerm) ATinsert(CheckATermList(e_32), k_32);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  if(match_string(t, "-o"))
    {
      t = m_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_32;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  n_32 = t;
  t = term_i_7;
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, n_32);
  t = b_4(o_32, n_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_32);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
static ATerm z_3 (ATerm b_29, ATerm c_29, ATerm a_29, ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_7 = ATgetArgument(t, 0);
            ATerm n_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
        t = y_3(b_29, c_29, t);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        t = (ATerm) ATempty;
      }
  }
  r_32 = t;
  t = (ATerm) ATinsert(CheckATermList(r_32), a_29);
  s_32 = t;
  t = SSL_table_put(b_29, c_29, s_32);
  t = q_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
      t = term_f_5;
      t = n_0(t);
      d_33 = t;
      t = term_g_7;
      e_33 = t;
      t = term_h_7;
      f_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_7, term_h_7, d_33);
      t = z_3(e_33, f_33, d_33, t);
      _fail(t);
    }
  else
    {
      ATerm j_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_32 = ATgetFirst((ATermList) t);
          a_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_33 = ATgetFirst((ATermList) t);
          c_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_32;
      t = k_0(t);
      t = b_33;
      t = l_0(t);
      j_33 = t;
      t = (ATerm) ATinsert(CheckATermList(c_33), j_33);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  if(match_string(t, "-i"))
    {
      t = l_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_33;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  m_33 = t;
  t = term_o_7;
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_7, m_33);
  t = b_4(n_33, m_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_33);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_p_7;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, f_3, g_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_5;
  t = whoami_0_0(t);
  o_33 = t;
  t = term_g_5;
  q_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_7), o_33);
  r_33 = t;
  t = SSL_printnl(q_33, r_33);
  t = term_j_5;
  p_33 = t;
  t = SSL_exit(p_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  t = term_n_6;
  s_33 = t;
  t = term_r_7;
  t_33 = t;
  t = term_s_7;
  t = y_3(s_33, t_33, t);
  return(t);
}
static ATerm w_3 (ATerm j_26, ATerm k_26, ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_26, k_26);
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      t = SSL_addr(j_26, k_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_33;
      t = k_78(t);
    }
  else
    {
      ATerm a_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_33 = ATgetFirst((ATermList) t);
          x_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_33;
      t = foldr_2_0(k_78, l_78, t);
      a_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_33, a_34);
      t = l_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_t_6;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(v_48, w_48, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_34 = NULL,r_48 = NULL,s_48 = NULL;
  t = times_0_0(t);
  s_48 = t;
  t = SSL_explode_term(s_48);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      r_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_48;
  t = foldr_2_0(j_3, k_3, t);
  d_34 = t;
  t = SSL_TicksToSeconds(d_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  if(match_cons(t, sym__2))
    {
      p_34 = ATgetArgument(t, 0);
      q_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_34;
        if((p_34 != t))
          {
            _fail(t);
          }
        t = o_34;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = (ATerm) ATmakeAppl(sym__2, p_34, q_34);
        {
          ATerm y_7 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_34, q_34);
              LocalPopChoice(z_7);
            }
          else
            {
              t = y_7;
              t = SSL_gtr(p_34, q_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_34, q_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
        t = term_n_6;
        x_34 = t;
        t = term_o_6;
        y_34 = t;
        t = term_p_6;
        t = y_3(x_34, y_34, t);
        w_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_34, term_j_5);
        t = geq_0_0(t);
        t = u_34;
        t = d_83(t);
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        t = u_34;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,d_35 = NULL,e_35 = NULL;
  t = run_time_0_0(t);
  a_35 = t;
  t = term_f_5;
  t = whoami_0_0(t);
  b_35 = t;
  t = term_g_5;
  d_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_35), term_c_8), b_35);
  e_35 = t;
  t = SSL_printnl(d_35, e_35);
  t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_8), a_35), term_c_8), b_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_6;
  f_35 = t;
  t = SSL_exit(f_35);
  return(t);
}
static ATerm x_3 (ATerm t)
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
            ATerm i_49 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(q_35);
            i_49 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_35);
            l_3 = t;
            t = SSLsetAnnotations(l_3, i_49);
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
ATerm need_help_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_35 = NULL,j_35 = NULL;
      t = term_n_6;
      i_35 = t;
      t = term_g_8;
      j_35 = t;
      t = term_h_8;
      t = y_3(i_35, j_35, t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      t = fetch_1_0(x_3, t);
    }
  t = h_87(t);
  return(t);
}
ATerm map_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  static ATerm i_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,h_36 = NULL;
    d_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_36;
      }
    else
      {
        ATerm q_49 = NULL,t_49 = NULL,u_49 = NULL,n_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_36 = ATgetFirst((ATermList) t);
            h_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_36);
        q_49 = t;
        t = e_36;
        t = e_71(t);
        t_49 = t;
        t = h_36;
        t = i_36(t);
        u_49 = t;
        t = (ATerm) ATinsert(CheckATermList(u_49), t_49);
        n_3 = t;
        t = SSLsetAnnotations(n_3, q_49);
      }
    return(t);
  }
  t = i_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_36 = ATgetFirst((ATermList) t);
      m_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_36 = NULL,r_36 = NULL;
        static ATerm c_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_36)), not_null(r_36));
          return(t);
        }
        t = m_36;
        t = i_0(t);
        if(((q_36 != NULL) && (q_36 != t)))
          _fail(t);
        else
          q_36 = t;
        t = l_36;
        t = g_0(t);
        if(((r_36 != NULL) && (r_36 != t)))
          _fail(t);
        else
          r_36 = t;
        t = m_36;
        t = reverse_acc_2_0(g_0, c_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_4 = NULL;
  z_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_36);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_36);
  a_4 = t;
  t = SSLsetAnnotations(a_4, x_36);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_37), term_i_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL,w_36 = NULL;
      t = term_n_6;
      v_36 = t;
      t = term_r_7;
      w_36 = t;
      t = term_s_7;
      t = y_3(v_36, w_36, t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      t = fetch_1_0(e_4, t);
    }
  t = term_l_8;
  t = echo_0_0(t);
  t = term_g_7;
  t_36 = t;
  t = term_h_7;
  u_36 = t;
  t = term_m_8;
  t = y_3(t_36, u_36, t);
  t = reverse_acc_2_0(_id, g_4, t);
  t = map_1_0(i_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_8 = ATgetFirst((ATermList) t);
                ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_37;
          }
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        t = (ATerm) ATinsert(ATempty, d_37);
      }
  }
  e_37 = t;
  t = term_t_5;
  f_37 = t;
  t = SSL_printnl(f_37, e_37);
  t = d_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL;
  t = term_n_6;
  j_37 = t;
  t = term_r_7;
  k_37 = t;
  t = term_s_7;
  t = y_3(j_37, k_37, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL;
  t = term_r_8;
  l_37 = t;
  t = term_f_5;
  m_37 = t;
  t = term_s_8;
  t = b_4(l_37, m_37, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_t_8;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
  t = term_r_8;
  p_37 = t;
  t = term_f_5;
  q_37 = t;
  t = term_s_8;
  t = b_4(p_37, q_37, t);
  t = term_u_8;
  n_37 = t;
  t = term_f_5;
  o_37 = t;
  t = term_v_8;
  t = b_4(n_37, o_37, t);
  t = term_w_8;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = Option_3_0(n_4, o_4, p_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,d_4 = NULL;
  w_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_37 = ATgetFirst((ATermList) t);
      t_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_37);
  r_37 = t;
  t = s_37;
  t = t_59(t);
  u_37 = t;
  t = t_37;
  t = u_59(t);
  v_37 = t;
  t = (ATerm) ATinsert(CheckATermList(v_37), u_37);
  d_4 = t;
  t = SSLsetAnnotations(d_4, r_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_89 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,g_38 = NULL,h_38 = NULL,f_4 = NULL;
  b_38 = t;
  {
    ATerm a_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_9;
        t = f_89(t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = a_9;
      }
  }
  t = b_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  c_38 = t;
  t = term_r_7;
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, d_38);
  t = b_4(h_38, d_38, t);
  t = e_38;
  {
    static ATerm r_38 (ATerm t)
    {
      ATerm f_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_38 = NULL;
              k_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_38;
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              t = f_89(t);
              t = Cons_2_0(_id, r_38, t);
            }
          LocalPopChoice(g_9);
        }
      else
        {
          t = f_9;
          {
            ATerm n_38 = NULL,o_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_38 = ATgetFirst((ATermList) t);
                o_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_38), (ATerm) ATmakeAppl(sym_Undefined_1, n_38));
          }
        }
      return(t);
    }
    t = r_38(t);
  }
  g_38 = t;
  t = (ATerm) ATinsert(CheckATermList(g_38), (ATerm) ATmakeAppl(sym_Program_1, d_38));
  f_4 = t;
  t = SSLsetAnnotations(f_4, c_38);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  if(match_string(t, "--help"))
    {
      t = d_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_39;
        }
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  t = term_g_8;
  e_39 = t;
  t = term_f_5;
  f_39 = t;
  t = term_j_9;
  t = b_4(e_39, f_39, t);
  t = term_k_9;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_l_9;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  y_38 = t;
  t = term_g_7;
  a_39 = t;
  t = term_h_7;
  b_39 = t;
  t = (ATerm) ATempty;
  c_39 = t;
  t = SSL_table_put(a_39, b_39, c_39);
  t = y_38;
  {
    static ATerm q_4 (ATerm t)
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_89(t);
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          {
            ATerm o_9 = t;
            int p_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_4, s_4, t_4, t);
                LocalPopChoice(p_9);
              }
            else
              {
                t = o_9;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_4, t);
  }
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_39 = NULL;
        q_39 = t;
        {
          ATerm v_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_50 = NULL;
              t = q_39;
              {
                ATerm b_10 = t;
                int c_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_50 = NULL,d_50 = NULL;
                    t = term_n_6;
                    c_50 = t;
                    t = term_g_8;
                    d_50 = t;
                    t = term_h_8;
                    t = y_3(c_50, d_50, t);
                    LocalPopChoice(c_10);
                  }
                else
                  {
                    t = b_10;
                    t = fetch_1_0(u_4, t);
                  }
              }
              t = q_39;
              t = default_system_usage_0_0(t);
              t = term_t_6;
              b_50 = t;
              t = SSL_exit(b_50);
              LocalPopChoice(w_9);
            }
          else
            {
              t = v_9;
              {
                ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
                t = term_n_6;
                i_50 = t;
                t = term_r_8;
                j_50 = t;
                t = term_e_10;
                t = y_3(i_50, j_50, t);
                t = q_39;
                t = default_system_about_0_0(t);
                t = term_t_6;
                h_50 = t;
                t = SSL_exit(h_50);
              }
            }
        }
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        {
          ATerm f_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
              static ATerm v_4 (ATerm t)
              {
                ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,h_4 = NULL;
                w_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_39);
                u_39 = t;
                t = v_39;
                if(((w_38 != NULL) && (w_38 != t)))
                  _fail(t);
                else
                  w_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_39);
                h_4 = t;
                t = SSLsetAnnotations(h_4, u_39);
                return(t);
              }
              t = fetch_1_0(v_4, t);
              t = term_g_5;
              s_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_38)), term_h_10);
              t_39 = t;
              t = SSL_printnl(s_39, t_39);
              t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_38)), term_h_10));
              t = default_system_usage_0_0(t);
              t = term_j_5;
              r_39 = t;
              t = SSL_exit(r_39);
              LocalPopChoice(g_10);
            }
          else
            {
              t = f_10;
            }
        }
      }
  }
  x_38 = t;
  t = term_g_7;
  z_38 = t;
  t = SSL_table_destroy(z_38);
  t = x_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  t = parse_options_1_0(j_87, t);
  d_40 = t;
  t = term_i_10;
  g_40 = t;
  t = SSL_table_create(g_40);
  t = term_i_10;
  e_40 = t;
  t = term_j_10;
  f_40 = t;
  t = SSL_table_put(e_40, f_40, d_40);
  t = d_40;
  t = l_87(t);
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_87, t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        {
          ATerm n_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(o_10);
            }
          else
            {
              t = n_10;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = if_verbose2_1_0(c_5, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  t = term_p_10;
  h_40 = t;
  t = term_f_5;
  i_40 = t;
  t = term_q_10;
  t = b_4(h_40, i_40, t);
  t = term_r_10;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  j_40 = t;
  t = term_n_6;
  n_40 = t;
  t = term_r_7;
  o_40 = t;
  t = term_s_7;
  t = y_3(n_40, o_40, t);
  k_40 = t;
  t = term_g_5;
  l_40 = t;
  t = (ATerm) ATinsert(ATempty, k_40);
  m_40 = t;
  t = SSL_printnl(l_40, m_40);
  t = j_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t)
{
  static ATerm w_4 (ATerm t)
  {
    ATerm w_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_86(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = w_10;
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              {
                ATerm e_11 = t;
                int f_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(f_11);
                  }
                else
                  {
                    t = e_11;
                    {
                      ATerm g_11 = t;
                      int h_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_4, a_5, b_5, t);
                          LocalPopChoice(h_11);
                        }
                      else
                        {
                          t = g_11;
                          {
                            ATerm i_11 = t;
                            int j_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(j_11);
                              }
                            else
                              {
                                t = i_11;
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
  static ATerm y_4 (ATerm t)
  {
    ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
    q_40 = t;
    {
      ATerm k_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_40 != NULL) && (p_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_5, t);
          LocalPopChoice(m_11);
        }
      else
        {
          t = k_11;
          t = term_n_11;
          p_40 = t;
        }
    }
    t = not_null(p_40);
    t = ReadFromFile_0_0(t);
    r_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
    t = apply_strategy_1_0(s_86, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(w_4, u_86, x_4, y_4, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,j_4 = NULL;
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
  j_4 = t;
  t = SSLsetAnnotations(j_4, s_40);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(e_5, _fail, default_usage_0_0, t);
  return(t);
}

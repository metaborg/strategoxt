#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_CL_0;
Symbol sym_SZ_0;
Symbol sym_SH_0;
Symbol sym_SE_0;
Symbol sym_FM_0;
Symbol sym_FN_0;
Symbol sym_MATH_0;
Symbol sym_NUM_0;
Symbol sym_VAR_0;
Symbol sym_KW_0;
Symbol sym_F_1;
Symbol sym_FFID_2;
Symbol sym_FNAT_2;
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_REF_2;
Symbol sym_LBL_2;
Symbol sym_FBOX_2;
Symbol sym_R_2;
Symbol sym_A_3;
Symbol sym_ALT_2;
Symbol sym_HV_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Undefined_0;
Symbol sym_Hashtable_1;
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
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_w_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
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
ATerm term_m_6;
ATerm term_l_6;
ATerm term_x_5;
ATerm term_u_5;
ATerm term_r_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_j_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_s_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_x_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_j_5);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_v_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_k_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_k_7, term_l_7);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_j_5);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_c_9, term_j_5);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_j_5);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__3, term_k_7, term_l_7, (ATerm) ATempty);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_z_8);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_j_5);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm b_100 (ATerm), ATerm t);
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
static ATerm a_4 (ATerm n_15, ATerm o_15, ATerm t);
static ATerm b_4 (ATerm r_52, ATerm s_52, ATerm t);
static ATerm d_4 (ATerm d_100 (ATerm), ATerm y_552, ATerm x_52, ATerm t);
static ATerm c_4 (ATerm n_52, ATerm o_52, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm g_101 (ATerm), ATerm t);
static ATerm v_28 (ATerm p_28, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm t_52, ATerm t);
static ATerm f_4 (ATerm t_47, ATerm u_47, ATerm t);
static ATerm g_4 (ATerm p_15, ATerm q_15, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_30 (ATerm q_29, ATerm t);
static ATerm w_30 (ATerm u_29, ATerm v_29, ATerm w_29, ATerm t);
static ATerm x_30 (ATerm e_30, ATerm f_30, ATerm g_30, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_83 (ATerm), ATerm t);
static ATerm m_4 (ATerm z_30, ATerm a_31, ATerm t);
ATerm if_verbose2_1_0 (ATerm b_98 (ATerm), ATerm t);
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
static ATerm p_4 (ATerm l_51, ATerm m_51, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm g_29, ATerm h_29, ATerm f_29, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm o_26, ATerm p_26, ATerm t);
ATerm foldr_2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_98 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm need_help_1_0 (ATerm e_102 (ATerm), ATerm t);
static ATerm q_4 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t);
static ATerm r_4 (ATerm b_34, ATerm c_34, ATerm t);
ATerm lookup_table_0_1 (ATerm s_30, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_34, ATerm h_34, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm d_34, ATerm e_34, ATerm t);
static ATerm l_4 (ATerm i_34, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_104 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm parse_options_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm iowrap_3_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,t_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_j_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_k_5;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_5), b_0), term_l_5);
  v_0 = t;
  t = SSL_printnl(t_0, v_0);
  t = term_n_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,n_1 = NULL,o_1 = NULL;
  k_1 = t;
  t = b_100(t);
  l_1 = t;
  t = term_k_5;
  n_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_1), l_1);
  o_1 = t;
  t = SSL_printnl(n_1, o_1);
  t = k_1;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,f_0 = NULL;
  l_10 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_10);
  h_10 = t;
  t = i_10;
  if(match_cons(t, sym_VS_0))
    {
      t = i_10;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = i_10;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = i_10;
        }
    }
  t = SSL_is_string(j_10);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, i_10, k_10);
  f_0 = t;
  t = SSLsetAnnotations(f_0, h_10);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_0 = NULL;
  j_11 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_11);
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
  t = SSL_is_string(h_11);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, g_11, i_11);
  k_0 = t;
  t = SSLsetAnnotations(k_0, f_11);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,g_12 = NULL,i_12 = NULL,j_12 = NULL,q_0 = NULL;
  j_12 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      e_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_12);
  d_12 = t;
  t = e_12;
  if(match_cons(t, sym_VS_0))
    {
      t = e_12;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = e_12;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = e_12;
        }
    }
  t = SSL_is_string(g_12);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, e_12, i_12);
  q_0 = t;
  t = SSLsetAnnotations(q_0, d_12);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm v_20 = NULL,y_20 = NULL,z_20 = NULL;
  v_20 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
      {
        ATerm r_21 = NULL,m_22 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(v_20);
        r_21 = t;
        t = y_20;
        if(match_cons(t, sym_FN_0))
          {
            t = y_20;
          }
        else
          {
            if(match_cons(t, sym_FM_0))
              {
                t = y_20;
              }
            else
              {
                if(match_cons(t, sym_SE_0))
                  {
                    t = y_20;
                  }
                else
                  {
                    if(match_cons(t, sym_SH_0))
                      {
                        t = y_20;
                      }
                    else
                      {
                        if(match_cons(t, sym_SZ_0))
                          {
                            t = y_20;
                          }
                        else
                          {
                            if(!(match_cons(t, sym_CL_0)))
                              _fail(t);
                            t = y_20;
                          }
                      }
                  }
              }
          }
        t = SSL_is_string(z_20);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym_FNAT_2, y_20, m_22);
        u_0 = t;
        t = SSLsetAnnotations(u_0, r_21);
      }
    }
  else
    {
      ATerm e_23 = NULL,z_23 = NULL,w_0 = NULL;
      if(match_cons(t, sym_FFID_2))
        {
          y_20 = ATgetArgument(t, 0);
          z_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_20);
      e_23 = t;
      t = y_20;
      if(match_cons(t, sym_FN_0))
        {
          t = y_20;
        }
      else
        {
          if(match_cons(t, sym_FM_0))
            {
              t = y_20;
            }
          else
            {
              if(match_cons(t, sym_SE_0))
                {
                  t = y_20;
                }
              else
                {
                  if(match_cons(t, sym_SH_0))
                    {
                      t = y_20;
                    }
                  else
                    {
                      if(match_cons(t, sym_SZ_0))
                        {
                          t = y_20;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_CL_0)))
                            _fail(t);
                          t = y_20;
                        }
                    }
                }
            }
        }
      t = SSL_is_string(z_20);
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym_FFID_2, y_20, z_23);
      w_0 = t;
      t = SSLsetAnnotations(w_0, e_23);
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm z_27 = NULL,b_28 = NULL;
  z_27 = t;
  if(match_cons(t, sym_AL_1))
    {
      b_28 = ATgetArgument(t, 0);
      {
        ATerm r_34 = NULL,f_35 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(z_27);
        r_34 = t;
        t = b_28;
        t = map_1_0(y_1, t);
        f_35 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, f_35);
        a_1 = t;
        t = SSLsetAnnotations(a_1, r_34);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          b_28 = ATgetArgument(t, 0);
          {
            ATerm m_41 = NULL,o_41 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(z_27);
            m_41 = t;
            t = b_28;
            t = map_1_0(z_1, t);
            o_41 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, o_41);
            c_1 = t;
            t = SSLsetAnnotations(c_1, m_41);
          }
        }
      else
        {
          ATerm i_44 = NULL,k_44 = NULL,e_1 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              b_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_27);
          i_44 = t;
          t = b_28;
          t = map_1_0(a_2, t);
          k_44 = t;
          t = (ATerm) ATmakeAppl(sym_AR_1, k_44);
          e_1 = t;
          t = SSLsetAnnotations(e_1, i_44);
        }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_39 = NULL,l_39 = NULL,v_39 = NULL,q_40 = NULL,r_40 = NULL,z_0 = NULL;
  r_40 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      l_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_40);
  d_39 = t;
  t = l_39;
  if(match_cons(t, sym_VS_0))
    {
      t = l_39;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = l_39;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = l_39;
        }
    }
  t = SSL_is_string(v_39);
  q_40 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, l_39, q_40);
  z_0 = t;
  t = SSLsetAnnotations(z_0, d_39);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,b_1 = NULL;
  e_44 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      b_44 = ATgetArgument(t, 0);
      c_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_44);
  a_44 = t;
  t = b_44;
  if(match_cons(t, sym_VS_0))
    {
      t = b_44;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = b_44;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = b_44;
        }
    }
  t = SSL_is_string(c_44);
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, b_44, d_44);
  b_1 = t;
  t = SSLsetAnnotations(b_1, a_44);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,d_1 = NULL;
  z_44 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      w_44 = ATgetArgument(t, 0);
      x_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_44);
  v_44 = t;
  t = w_44;
  if(match_cons(t, sym_VS_0))
    {
      t = w_44;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = w_44;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = w_44;
        }
    }
  t = SSL_is_string(x_44);
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, w_44, y_44);
  d_1 = t;
  t = SSLsetAnnotations(d_1, v_44);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,g_1 = NULL;
  g_28 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      d_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_28);
  c_28 = t;
  t = d_28;
  if(match_cons(t, sym_VS_0))
    {
      t = d_28;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = d_28;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = d_28;
        }
    }
  t = SSL_is_string(e_28);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, d_28, f_28);
  g_1 = t;
  t = SSLsetAnnotations(g_1, c_28);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,i_1 = NULL;
  o_45 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      l_45 = ATgetArgument(t, 0);
      m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_45);
  k_45 = t;
  t = l_45;
  if(match_cons(t, sym_VS_0))
    {
      t = l_45;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = l_45;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = l_45;
        }
    }
  t = SSL_is_string(m_45);
  n_45 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, l_45, n_45);
  i_1 = t;
  t = SSLsetAnnotations(i_1, k_45);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,q_1 = NULL;
  e_47 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      b_47 = ATgetArgument(t, 0);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_47);
  a_47 = t;
  t = b_47;
  if(match_cons(t, sym_VS_0))
    {
      t = b_47;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = b_47;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = b_47;
        }
    }
  t = SSL_is_string(c_47);
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, b_47, d_47);
  q_1 = t;
  t = SSLsetAnnotations(q_1, a_47);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_o_5;
  return(t);
}
ATerm Box_0_0 (ATerm t)
{
  ATerm p_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_22 = NULL,s_22 = NULL,t_22 = NULL,w_22 = NULL;
      w_22 = t;
      if(match_cons(t, sym_S_1))
        {
          s_22 = ATgetArgument(t, 0);
          {
            ATerm j_9 = NULL,m_9 = NULL,c_0 = NULL;
            t = SSLgetAnnotations(w_22);
            j_9 = t;
            t = SSL_is_string(s_22);
            m_9 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, m_9);
            c_0 = t;
            t = SSLsetAnnotations(c_0, j_9);
          }
        }
      else
        {
          if(match_cons(t, sym_H_2))
            {
              s_22 = ATgetArgument(t, 0);
              t_22 = ATgetArgument(t, 1);
              {
                ATerm v_9 = NULL,d_10 = NULL,e_10 = NULL,i_0 = NULL;
                t = SSLgetAnnotations(w_22);
                v_9 = t;
                t = s_22;
                t = map_1_0(t_1, t);
                d_10 = t;
                t = t_22;
                t = map_1_0(Box_0_0, t);
                e_10 = t;
                t = (ATerm) ATmakeAppl(sym_H_2, d_10, e_10);
                i_0 = t;
                t = SSLsetAnnotations(i_0, v_9);
              }
            }
          else
            {
              if(match_cons(t, sym_V_2))
                {
                  s_22 = ATgetArgument(t, 0);
                  t_22 = ATgetArgument(t, 1);
                  {
                    ATerm v_10 = NULL,y_10 = NULL,b_11 = NULL,n_0 = NULL;
                    t = SSLgetAnnotations(w_22);
                    v_10 = t;
                    t = s_22;
                    t = map_1_0(u_1, t);
                    y_10 = t;
                    t = t_22;
                    t = map_1_0(Box_0_0, t);
                    b_11 = t;
                    t = (ATerm) ATmakeAppl(sym_V_2, y_10, b_11);
                    n_0 = t;
                    t = SSLsetAnnotations(n_0, v_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_HV_2))
                    {
                      s_22 = ATgetArgument(t, 0);
                      t_22 = ATgetArgument(t, 1);
                      {
                        ATerm u_11 = NULL,x_11 = NULL,z_11 = NULL,r_0 = NULL;
                        t = SSLgetAnnotations(w_22);
                        u_11 = t;
                        t = s_22;
                        t = map_1_0(v_1, t);
                        x_11 = t;
                        t = t_22;
                        t = map_1_0(Box_0_0, t);
                        z_11 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, x_11, z_11);
                        r_0 = t;
                        t = SSLsetAnnotations(r_0, u_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ALT_2))
                        {
                          s_22 = ATgetArgument(t, 0);
                          t_22 = ATgetArgument(t, 1);
                          {
                            ATerm u_12 = NULL,b_13 = NULL,c_13 = NULL,s_0 = NULL;
                            t = SSLgetAnnotations(w_22);
                            u_12 = t;
                            t = s_22;
                            t = Box_0_0(t);
                            b_13 = t;
                            t = t_22;
                            t = Box_0_0(t);
                            c_13 = t;
                            t = (ATerm) ATmakeAppl(sym_ALT_2, b_13, c_13);
                            s_0 = t;
                            t = SSLsetAnnotations(s_0, u_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FBOX_2))
                            {
                              s_22 = ATgetArgument(t, 0);
                              t_22 = ATgetArgument(t, 1);
                              {
                                ATerm p_13 = NULL,s_13 = NULL,t_13 = NULL,y_0 = NULL,u_15 = NULL;
                                t = SSLgetAnnotations(w_22);
                                p_13 = t;
                                t = s_22;
                                if(match_cons(t, sym_F_1))
                                  {
                                    u_15 = ATgetArgument(t, 0);
                                    {
                                      ATerm a_19 = NULL,d_19 = NULL,x_0 = NULL;
                                      t = SSLgetAnnotations(s_22);
                                      a_19 = t;
                                      t = u_15;
                                      t = map_1_0(w_1, t);
                                      d_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_F_1, d_19);
                                      x_0 = t;
                                      t = SSLsetAnnotations(x_0, a_19);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_KW_0))
                                      {
                                        t = s_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_VAR_0))
                                          {
                                            t = s_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_NUM_0))
                                              {
                                                t = s_22;
                                              }
                                            else
                                              {
                                                if(!(match_cons(t, sym_MATH_0)))
                                                  _fail(t);
                                                t = s_22;
                                              }
                                          }
                                      }
                                  }
                                s_13 = t;
                                t = t_22;
                                t = Box_0_0(t);
                                t_13 = t;
                                t = (ATerm) ATmakeAppl(sym_FBOX_2, s_13, t_13);
                                y_0 = t;
                                t = SSLsetAnnotations(y_0, p_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_A_3))
                                {
                                  s_22 = ATgetArgument(t, 0);
                                  t_22 = ATgetArgument(t, 1);
                                  p_22 = ATgetArgument(t, 2);
                                  {
                                    ATerm j_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,w_24 = NULL,h_1 = NULL,f_1 = NULL;
                                    t = SSLgetAnnotations(w_22);
                                    j_24 = t;
                                    t = s_22;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        s_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(s_22);
                                    r_24 = t;
                                    t = s_24;
                                    t = map_1_0(x_1, t);
                                    t_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, t_24);
                                    f_1 = t;
                                    t = SSLsetAnnotations(f_1, r_24);
                                    w_24 = t;
                                    t = t_22;
                                    t = map_1_0(b_2, t);
                                    p_24 = t;
                                    t = p_22;
                                    t = map_1_0(Box_0_0, t);
                                    q_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_A_3, w_24, p_24, q_24);
                                    h_1 = t;
                                    t = SSLsetAnnotations(h_1, j_24);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_R_2))
                                    {
                                      s_22 = ATgetArgument(t, 0);
                                      t_22 = ATgetArgument(t, 1);
                                      {
                                        ATerm e_45 = NULL,h_45 = NULL,i_45 = NULL,j_1 = NULL;
                                        t = SSLgetAnnotations(w_22);
                                        e_45 = t;
                                        t = s_22;
                                        t = map_1_0(c_2, t);
                                        h_45 = t;
                                        t = t_22;
                                        t = map_1_0(Box_0_0, t);
                                        i_45 = t;
                                        t = (ATerm) ATmakeAppl(sym_R_2, h_45, i_45);
                                        j_1 = t;
                                        t = SSLsetAnnotations(j_1, e_45);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBL_2))
                                        {
                                          s_22 = ATgetArgument(t, 0);
                                          t_22 = ATgetArgument(t, 1);
                                          {
                                            ATerm w_45 = NULL,z_45 = NULL,a_46 = NULL,m_1 = NULL;
                                            t = SSLgetAnnotations(w_22);
                                            w_45 = t;
                                            t = SSL_is_string(s_22);
                                            z_45 = t;
                                            t = t_22;
                                            t = Box_0_0(t);
                                            a_46 = t;
                                            t = (ATerm) ATmakeAppl(sym_LBL_2, z_45, a_46);
                                            m_1 = t;
                                            t = SSLsetAnnotations(m_1, w_45);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REF_2))
                                            {
                                              s_22 = ATgetArgument(t, 0);
                                              t_22 = ATgetArgument(t, 1);
                                              {
                                                ATerm i_46 = NULL,l_46 = NULL,m_46 = NULL,p_1 = NULL;
                                                t = SSLgetAnnotations(w_22);
                                                i_46 = t;
                                                t = SSL_is_string(s_22);
                                                l_46 = t;
                                                t = t_22;
                                                t = Box_0_0(t);
                                                m_46 = t;
                                                t = (ATerm) ATmakeAppl(sym_REF_2, l_46, m_46);
                                                p_1 = t;
                                                t = SSLsetAnnotations(p_1, i_46);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  s_22 = ATgetArgument(t, 0);
                                                  t_22 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm u_46 = NULL,x_46 = NULL,y_46 = NULL,r_1 = NULL;
                                                    t = SSLgetAnnotations(w_22);
                                                    u_46 = t;
                                                    t = s_22;
                                                    t = map_1_0(d_2, t);
                                                    x_46 = t;
                                                    t = t_22;
                                                    t = map_1_0(Box_0_0, t);
                                                    y_46 = t;
                                                    t = (ATerm) ATmakeAppl(sym_C_2, x_46, y_46);
                                                    r_1 = t;
                                                    t = SSLsetAnnotations(r_1, u_46);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_L_2))
                                                    {
                                                      s_22 = ATgetArgument(t, 0);
                                                      t_22 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm m_47 = NULL,p_47 = NULL,q_47 = NULL,s_1 = NULL;
                                                        t = SSLgetAnnotations(w_22);
                                                        m_47 = t;
                                                        t = s_22;
                                                        t = Box_0_0(t);
                                                        p_47 = t;
                                                        t = t_22;
                                                        t = Box_0_0(t);
                                                        q_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_L_2, p_47, q_47);
                                                        s_1 = t;
                                                        t = SSLsetAnnotations(s_1, m_47);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = w_22;
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
      LocalPopChoice(q_5);
    }
  else
    {
      t = p_5;
      t = debug_1_0(e_2, t);
    }
  return(t);
}
static ATerm a_4 (ATerm n_15, ATerm o_15, ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_fputc(n_15, o_15);
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_23);
  return(t);
}
static ATerm b_4 (ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm w_23 = NULL;
  t = SSL_write_term_to_stream_text(r_52, s_52);
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_23);
  return(t);
}
static ATerm d_4 (ATerm d_100 (ATerm), ATerm y_552, ATerm x_52, ATerm t)
{
  ATerm x_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_552, term_r_5);
  t = h_4(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, x_52);
  t = d_100(t);
  t = fclose_0_0(t);
  t = x_52;
  return(t);
}
static ATerm c_4 (ATerm n_52, ATerm o_52, ATerm t)
{
  ATerm y_23 = NULL;
  t = SSL_write_term_to_stream_baf(n_52, o_52);
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
  ATerm g_48 = NULL,h_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_5 = ATgetArgument(t, 0);
      if(match_cons(s_5, sym_Stream_1))
        {
          g_48 = ATgetArgument(s_5, 0);
        }
      else
        _fail(t);
      h_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(g_48, h_48, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_5 = ATgetArgument(t, 0);
      if(match_cons(t_5, sym_Stream_1))
        {
          v_48 = ATgetArgument(t_5, 0);
        }
      else
        _fail(t);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(v_48, w_48, t);
  s_48 = t;
  t = term_u_5;
  t_48 = t;
  t = s_48;
  if(match_cons(t, sym_Stream_1))
    {
      u_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, s_48);
  t = a_4(t_48, u_48, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_24 = NULL,n_24 = NULL,u_24 = NULL,v_24 = NULL,z_24 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,e_27 = NULL,f_27 = NULL,w_2 = NULL,v_2 = NULL;
  n_24 = t;
  if(match_cons(t, sym__2))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_24);
  d_25 = t;
  t = e_25;
  {
    ATerm v_5 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_24 != NULL) && (l_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_2, t);
        LocalPopChoice(w_5);
      }
    else
      {
        t = v_5;
        t = term_x_5;
        l_24 = t;
      }
  }
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_25, f_25);
  v_2 = t;
  t = SSLsetAnnotations(v_2, d_25);
  t = n_24;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_24);
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_24, (ATerm) ATmakeAppl(sym__2, not_null(l_24), z_24));
  w_2 = t;
  t = SSLsetAnnotations(w_2, u_24);
  c_25 = t;
  if(match_cons(t, sym__2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_47 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,x_2 = NULL;
        t = SSLgetAnnotations(c_25);
        z_47 = t;
        t = e_27;
        t = fetch_1_0(g_2, t);
        c_48 = t;
        t = f_27;
        if(match_cons(t, sym__2))
          {
            e_48 = ATgetArgument(t, 0);
            f_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(h_2, e_48, f_48, t);
        d_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_48, d_48);
        x_2 = t;
        t = SSLsetAnnotations(x_2, z_47);
        LocalPopChoice(z_5);
      }
    else
      {
        t = y_5;
        {
          ATerm m_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,y_2 = NULL;
          t = SSLgetAnnotations(c_25);
          m_48 = t;
          t = f_27;
          if(match_cons(t, sym__2))
            {
              q_48 = ATgetArgument(t, 0);
              r_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(i_2, q_48, r_48, t);
          p_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_27, p_48);
          y_2 = t;
          t = SSLsetAnnotations(y_2, m_48);
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
ATerm apply_strategy_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  s_27 = t;
  t = dtime_0_0(t);
  t = s_27;
  t = g_101(t);
  r_27 = t;
  t = dtime_0_0(t);
  o_27 = t;
  t = r_27;
  if(match_cons(t, sym__2))
    {
      p_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_27), (ATerm) ATmakeAppl(sym_Runtime_1, o_27)), q_27);
  return(t);
}
static ATerm v_28 (ATerm p_28, ATerm t)
{
  t = SSL_fclose(p_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  t_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_28 = ATgetArgument(t, 0);
      {
        ATerm a_6 = t;
        int b_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_28);
            LocalPopChoice(b_6);
          }
        else
          {
            t = a_6;
            t = v_28(t_28, t);
          }
      }
    }
  else
    {
      t = v_28(t_28, t);
    }
  return(t);
}
static ATerm e_4 (ATerm t_52, ATerm t)
{
  t = SSL_read_term_from_stream(t_52);
  return(t);
}
static ATerm f_4 (ATerm t_47, ATerm u_47, ATerm t)
{
  t = SSL_strcat(t_47, u_47);
  return(t);
}
static ATerm g_4 (ATerm p_15, ATerm q_15, ATerm t)
{
  ATerm y_28 = NULL;
  t = SSL_fopen(p_15, q_15);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_29 = NULL;
  t = SSL_stdin_stream();
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_29 = NULL;
  t = SSL_stdout_stream();
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_29 = NULL;
  t = SSL_stderr_stream();
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_29);
  return(t);
}
static ATerm r_30 (ATerm q_29, ATerm t)
{
  ATerm r_29 = NULL;
  t = SSL_explode_term(q_29);
  if(match_cons(t, sym__2))
    {
      ATerm c_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_6 = ATgetArgument(t, 1);
        if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
          {
            r_29 = ATgetFirst((ATermList) d_6);
            {
              ATerm e_6 = (ATerm) ATgetNext((ATermList) d_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_30 (ATerm u_29, ATerm v_29, ATerm w_29, ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,c_30 = NULL,d_3 = NULL;
  t = SSLgetAnnotations(w_29);
  z_29 = t;
  t = u_29;
  if(match_cons(t, sym_Path_1))
    {
      c_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_30, v_29);
  d_3 = t;
  t = SSLsetAnnotations(d_3, z_29);
  if(match_cons(t, sym__2))
    {
      x_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(x_29, y_29, t);
  return(t);
}
static ATerm x_30 (ATerm e_30, ATerm f_30, ATerm g_30, ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,m_30 = NULL,e_3 = NULL;
  t = SSLgetAnnotations(g_30);
  j_30 = t;
  t = SSL_is_string(e_30);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, f_30);
  e_3 = t;
  t = SSLsetAnnotations(e_3, j_30);
  if(match_cons(t, sym__2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(h_30, i_30, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym__2))
    {
      p_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
      {
        ATerm f_6 = t;
        int g_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_30(o_30, t);
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
                  t = w_30(p_30, q_30, o_30, t);
                  LocalPopChoice(i_6);
                }
              else
                {
                  t = h_6;
                  t = x_30(p_30, q_30, o_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_30(o_30, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,i_31 = NULL;
  i_31 = t;
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_31, term_l_6);
        t = h_4(t);
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        {
          ATerm h_49 = NULL,i_49 = NULL;
          t = term_m_6;
          i_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_6, i_31);
          t = f_4(i_49, i_31, t);
          h_49 = t;
          t = SSL_perror(h_49);
          _fail(t);
        }
      }
  }
  c_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(d_31, t);
  b_31 = t;
  t = c_31;
  t = fclose_0_0(t);
  t = b_31;
  return(t);
}
ATerm fetch_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  static ATerm h_32 (ATerm t)
  {
    ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
    e_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_32 = ATgetFirst((ATermList) t);
        g_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_49 = NULL,q_49 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(e_32);
          n_49 = t;
          t = f_32;
          t = m_83(t);
          q_49 = t;
          t = (ATerm) ATinsert(CheckATermList(g_32), q_49);
          h_3 = t;
          t = SSLsetAnnotations(h_3, n_49);
          LocalPopChoice(o_6);
        }
      else
        {
          t = n_6;
          {
            ATerm y_49 = NULL,b_50 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(e_32);
            y_49 = t;
            t = g_32;
            t = h_32(t);
            b_50 = t;
            t = (ATerm) ATinsert(CheckATermList(b_50), f_32);
            i_3 = t;
            t = SSLsetAnnotations(i_3, y_49);
          }
        }
    }
    return(t);
  }
  t = h_32(t);
  return(t);
}
static ATerm m_4 (ATerm z_30, ATerm a_31, ATerm t)
{
  ATerm k_32 = NULL;
  t = lookup_table_0_1(z_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(a_31, k_32, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
        t = term_r_6;
        q_32 = t;
        t = term_s_6;
        r_32 = t;
        t = term_t_6;
        t = m_4(q_32, r_32, t);
        p_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_32, term_u_6);
        t = geq_0_0(t);
        t = n_32;
        t = b_98(t);
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = n_32;
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  if(match_string(t, "-k"))
    {
      t = u_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_32;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  v_32 = t;
  t = SSL_string_to_int(v_32);
  w_32 = t;
  t = term_v_6;
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, w_32);
  t = p_4(x_32, w_32, t);
  t = v_32;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm z_32 = NULL;
  z_32 = t;
  if(match_string(t, "-S"))
    {
      t = z_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_32;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  t = term_s_6;
  a_33 = t;
  t = term_x_6;
  b_33 = t;
  t = term_y_6;
  t = p_4(a_33, b_33, t);
  t = term_z_6;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_a_7;
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
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  t = SSL_string_to_int(c_33);
  d_33 = t;
  t = term_s_6;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, d_33);
  t = p_4(e_33, d_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_33);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_b_7;
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
  ATerm f_33 = NULL,g_33 = NULL;
  t = term_c_7;
  f_33 = t;
  t = term_j_5;
  g_33 = t;
  t = term_d_7;
  t = p_4(f_33, g_33, t);
  t = term_e_7;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_2, n_2, o_2, t);
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, q_2, r_2, t);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm l_51, ATerm m_51, ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  t = term_r_6;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_6, l_51, m_51);
  t = lookup_table_0_1(h_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(l_51, m_51, i_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_6, l_51, m_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
      t = term_j_5;
      t = h_0(t);
      o_33 = t;
      t = term_k_7;
      p_33 = t;
      t = term_l_7;
      q_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_7, term_l_7, o_33);
      t = n_4(p_33, q_33, o_33, t);
      _fail(t);
    }
  else
    {
      ATerm t_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_33 = ATgetFirst((ATermList) t);
          n_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_33;
      t = d_0(t);
      t = term_j_5;
      t = g_0(t);
      t_33 = t;
      t = (ATerm) ATinsert(CheckATermList(n_33), t_33);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  if(match_string(t, "-o"))
    {
      t = v_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_33;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  w_33 = t;
  t = term_m_7;
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, w_33);
  t = p_4(x_33, w_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_33);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
static ATerm n_4 (ATerm g_29, ATerm h_29, ATerm f_29, ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_7 = ATgetArgument(t, 0);
            ATerm r_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
        t = m_4(g_29, h_29, t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = (ATerm) ATempty;
      }
  }
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_29, h_29, (ATerm) ATinsert(CheckATermList(k_34), f_29));
  t = lookup_table_0_1(g_29, t);
  n_34 = t;
  t = (ATerm) ATinsert(CheckATermList(k_34), f_29);
  l_34 = t;
  t = n_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(h_29, l_34, m_34, t);
  t = j_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
      t = term_j_5;
      t = p_0(t);
      y_34 = t;
      t = term_k_7;
      z_34 = t;
      t = term_l_7;
      a_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_7, term_l_7, y_34);
      t = n_4(z_34, a_35, y_34, t);
      _fail(t);
    }
  else
    {
      ATerm e_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_34 = ATgetFirst((ATermList) t);
          v_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_34 = ATgetFirst((ATermList) t);
          x_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_34;
      t = m_0(t);
      t = w_34;
      t = o_0(t);
      e_35 = t;
      t = (ATerm) ATinsert(CheckATermList(x_34), e_35);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm g_35 = NULL;
  g_35 = t;
  if(match_string(t, "-i"))
    {
      t = g_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_35;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL;
  h_35 = t;
  t = term_s_7;
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, h_35);
  t = p_4(i_35, h_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_35);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, f_3, g_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_5;
  t = whoami_0_0(t);
  j_35 = t;
  t = term_k_5;
  l_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_7), j_35);
  m_35 = t;
  t = SSL_printnl(l_35, m_35);
  t = term_n_5;
  k_35 = t;
  t = SSL_exit(k_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  t = term_r_6;
  n_35 = t;
  t = term_v_7;
  o_35 = t;
  t = term_w_7;
  t = m_4(n_35, o_35, t);
  return(t);
}
static ATerm i_4 (ATerm o_26, ATerm p_26, ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_26, p_26);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = SSL_addr(o_26, p_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_35;
      t = q_90(t);
    }
  else
    {
      ATerm v_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_35 = ATgetFirst((ATermList) t);
          s_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_35;
      t = foldr_2_0(q_90, r_90, t);
      v_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_35, v_35);
      t = r_90(t);
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
  t = term_x_6;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL;
  if(match_cons(t, sym__2))
    {
      k_50 = ATgetArgument(t, 0);
      l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(k_50, l_50, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_35 = NULL,g_50 = NULL,h_50 = NULL;
  t = times_0_0(t);
  h_50 = t;
  t = SSL_explode_term(h_50);
  if(match_cons(t, sym__2))
    {
      ATerm z_7 = ATgetArgument(t, 0);
      g_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_50;
  t = foldr_2_0(j_3, k_3, t);
  y_35 = t;
  t = SSL_TicksToSeconds(y_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_36;
        if((k_36 != t))
          {
            _fail(t);
          }
        t = j_36;
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        {
          ATerm c_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_36, l_36);
              LocalPopChoice(d_8);
            }
          else
            {
              t = c_8;
              t = SSL_gtr(k_36, l_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
        t = term_r_6;
        s_36 = t;
        t = term_s_6;
        t_36 = t;
        t = term_t_6;
        t = m_4(s_36, t_36, t);
        r_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_36, term_n_5);
        t = geq_0_0(t);
        t = p_36;
        t = a_98(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = p_36;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,y_36 = NULL,z_36 = NULL;
  t = run_time_0_0(t);
  v_36 = t;
  t = term_j_5;
  t = whoami_0_0(t);
  w_36 = t;
  t = term_k_5;
  y_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_8), v_36), term_g_8), w_36);
  z_36 = t;
  t = SSL_printnl(y_36, z_36);
  t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_8), v_36), term_g_8), w_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_6;
  a_37 = t;
  t = SSL_exit(a_37);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL;
  l_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_37 = ATgetArgument(t, 0);
          {
            ATerm x_50 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(l_37);
            x_50 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_37);
            l_3 = t;
            t = SSLsetAnnotations(l_3, x_50);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_37 = NULL,e_37 = NULL;
      t = term_r_6;
      d_37 = t;
      t = term_k_8;
      e_37 = t;
      t = term_l_8;
      t = m_4(d_37, e_37, t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      t = fetch_1_0(o_3, t);
    }
  t = e_102(t);
  return(t);
}
static ATerm q_4 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm n_37 = NULL;
  t = SSL_hashtable_put(a_34, y_33, z_33);
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_37);
  return(t);
}
static ATerm r_4 (ATerm b_34, ATerm c_34, ATerm t)
{
  t = SSL_hashtable_get(c_34, b_34);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_30, ATerm t)
{
  ATerm w_37 = NULL;
  t = table_hashtable_0_0(t);
  w_37 = t;
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_51 = NULL;
        t = w_37;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(s_30, d_51, t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        {
          ATerm i_51 = NULL;
          t = s_30;
          t = table_create_0_0(t);
          t = w_37;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(s_30, i_51, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm z_37 = NULL;
  t = SSL_hashtable_create(g_34, h_34);
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_37);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,e_38 = NULL,f_38 = NULL;
  a_38 = t;
  t = term_o_8;
  e_38 = t;
  t = term_p_8;
  f_38 = t;
  t = a_38;
  t = new_hashtable_0_2(e_38, f_38, t);
  b_38 = t;
  t = a_38;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(a_38, b_38, c_38, t);
  t = a_38;
  return(t);
}
static ATerm k_4 (ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm g_38 = NULL;
  t = SSL_hashtable_remove(e_34, d_34);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_38);
  return(t);
}
static ATerm l_4 (ATerm i_34, ATerm t)
{
  ATerm h_38 = NULL;
  t = SSL_hashtable_destroy(i_34);
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_38);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_38 = NULL;
  t = SSL_table_hashtable();
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_38);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  j_38 = t;
  t = table_hashtable_0_0(t);
  k_38 = t;
  t = lookup_table_0_1(j_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(m_38, t);
  t = k_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(j_38, l_38, t);
  t = j_38;
  return(t);
}
ATerm map_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  static ATerm b_39 (ATerm t)
  {
    ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
    y_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_38;
      }
    else
      {
        ATerm p_51 = NULL,s_51 = NULL,t_51 = NULL,n_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_38 = ATgetFirst((ATermList) t);
            a_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_38);
        p_51 = t;
        t = z_38;
        t = c_83(t);
        s_51 = t;
        t = a_39;
        t = b_39(t);
        t_51 = t;
        t = (ATerm) ATinsert(CheckATermList(t_51), s_51);
        n_3 = t;
        t = SSLsetAnnotations(n_3, p_51);
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_39 = ATgetFirst((ATermList) t);
      f_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_39 = NULL,k_39 = NULL;
        static ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_39)), not_null(k_39));
          return(t);
        }
        t = f_39;
        t = l_0(t);
        if(((j_39 != NULL) && (j_39 != t)))
          _fail(t);
        else
          j_39 = t;
        t = e_39;
        t = j_0(t);
        if(((k_39 != NULL) && (k_39 != t)))
          _fail(t);
        else
          k_39 = t;
        t = f_39;
        t = reverse_acc_2_0(j_0, q_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,p_3 = NULL;
  s_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_39);
  p_3 = t;
  t = SSLsetAnnotations(p_3, q_39);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_39), term_q_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL;
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_39 = NULL,p_39 = NULL;
      t = term_r_6;
      o_39 = t;
      t = term_v_7;
      p_39 = t;
      t = term_w_7;
      t = m_4(o_39, p_39, t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      t = fetch_1_0(s_3, t);
    }
  t = term_t_8;
  t = echo_0_0(t);
  t = term_k_7;
  m_39 = t;
  t = term_l_7;
  n_39 = t;
  t = term_u_8;
  t = m_4(m_39, n_39, t);
  t = reverse_acc_2_0(_id, u_3, t);
  t = map_1_0(w_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_39;
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
            t = w_39;
          }
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATinsert(ATempty, w_39);
      }
  }
  x_39 = t;
  t = term_x_5;
  y_39 = t;
  t = SSL_printnl(y_39, x_39);
  t = w_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  t = term_r_6;
  c_40 = t;
  t = term_v_7;
  d_40 = t;
  t = term_w_7;
  t = m_4(c_40, d_40, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  t = term_z_8;
  e_40 = t;
  t = term_j_5;
  f_40 = t;
  t = term_a_9;
  t = p_4(e_40, f_40, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_b_9;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  t = term_z_8;
  i_40 = t;
  t = term_j_5;
  j_40 = t;
  t = term_a_9;
  t = p_4(i_40, j_40, t);
  t = term_c_9;
  g_40 = t;
  t = term_j_5;
  h_40 = t;
  t = term_d_9;
  t = p_4(g_40, h_40, t);
  t = term_e_9;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, j_4, t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = Option_3_0(o_4, s_4, t_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,r_3 = NULL;
  p_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_40 = ATgetFirst((ATermList) t);
      m_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_40);
  k_40 = t;
  t = l_40;
  t = n_64(t);
  n_40 = t;
  t = m_40;
  t = o_64(t);
  o_40 = t;
  t = (ATerm) ATinsert(CheckATermList(o_40), n_40);
  r_3 = t;
  t = SSLsetAnnotations(r_3, k_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_104 (ATerm), ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,z_40 = NULL,a_41 = NULL,t_3 = NULL;
  u_40 = t;
  {
    ATerm i_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_9;
        t = c_104(t);
        LocalPopChoice(k_9);
      }
    else
      {
        t = i_9;
      }
  }
  t = u_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_40 = ATgetFirst((ATermList) t);
      x_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_40);
  v_40 = t;
  t = term_v_7;
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, w_40);
  t = p_4(a_41, w_40, t);
  t = x_40;
  {
    static ATerm k_41 (ATerm t)
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_41 = NULL;
              d_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_41;
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = c_104(t);
              t = Cons_2_0(_id, k_41, t);
            }
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm g_41 = NULL,h_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_41 = ATgetFirst((ATermList) t);
                h_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_41), (ATerm) ATmakeAppl(sym_Undefined_1, g_41));
          }
        }
      return(t);
    }
    t = k_41(t);
  }
  z_40 = t;
  t = (ATerm) ATinsert(CheckATermList(z_40), (ATerm) ATmakeAppl(sym_Program_1, w_40));
  t_3 = t;
  t = SSLsetAnnotations(t_3, v_40);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  if(match_string(t, "--help"))
    {
      t = x_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_41;
        }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  t = term_k_8;
  y_41 = t;
  t = term_j_5;
  z_41 = t;
  t = term_r_9;
  t = p_4(y_41, z_41, t);
  t = term_s_9;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_t_9;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  r_41 = t;
  t = term_k_7;
  s_41 = t;
  t = term_u_9;
  t = lookup_table_0_1(s_41, t);
  w_41 = t;
  t = term_l_7;
  t_41 = t;
  t = (ATerm) ATempty;
  u_41 = t;
  t = w_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(t_41, u_41, v_41, t);
  t = r_41;
  {
    static ATerm u_4 (ATerm t)
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_104(t);
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          {
            ATerm y_9 = t;
            int z_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_4, w_4, x_4, t);
                LocalPopChoice(z_9);
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
    t = parse_options_p__1_0(u_4, t);
  }
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_42 = NULL;
        k_42 = t;
        {
          ATerm c_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_52 = NULL;
              t = k_42;
              {
                ATerm g_10 = t;
                int m_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_52 = NULL,c_52 = NULL;
                    t = term_r_6;
                    b_52 = t;
                    t = term_k_8;
                    c_52 = t;
                    t = term_l_8;
                    t = m_4(b_52, c_52, t);
                    LocalPopChoice(m_10);
                  }
                else
                  {
                    t = g_10;
                    t = fetch_1_0(y_4, t);
                  }
              }
              t = k_42;
              t = default_system_usage_0_0(t);
              t = term_x_6;
              a_52 = t;
              t = SSL_exit(a_52);
              LocalPopChoice(f_10);
            }
          else
            {
              t = c_10;
              {
                ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
                t = term_r_6;
                h_52 = t;
                t = term_z_8;
                i_52 = t;
                t = term_n_10;
                t = m_4(h_52, i_52, t);
                t = k_42;
                t = default_system_about_0_0(t);
                t = term_x_6;
                g_52 = t;
                t = SSL_exit(g_52);
              }
            }
        }
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
              static ATerm z_4 (ATerm t)
              {
                ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,v_3 = NULL;
                q_42 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_42);
                o_42 = t;
                t = p_42;
                if(((p_41 != NULL) && (p_41 != t)))
                  _fail(t);
                else
                  p_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_42);
                v_3 = t;
                t = SSLsetAnnotations(v_3, o_42);
                return(t);
              }
              t = fetch_1_0(z_4, t);
              t = term_k_5;
              m_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_41)), term_q_10);
              n_42 = t;
              t = SSL_printnl(m_42, n_42);
              t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_41)), term_q_10));
              t = default_system_usage_0_0(t);
              t = term_n_5;
              l_42 = t;
              t = SSL_exit(l_42);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
            }
        }
      }
  }
  q_41 = t;
  t = term_k_7;
  t = table_destroy_0_0(t);
  t = q_41;
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  t = parse_options_1_0(g_102, t);
  v_42 = t;
  t = term_r_10;
  t = table_create_0_0(t);
  t = term_r_10;
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_10, term_s_10, v_42);
  t = lookup_table_0_1(w_42, t);
  z_42 = t;
  t = term_s_10;
  x_42 = t;
  t = z_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(x_42, v_42, y_42, t);
  t = v_42;
  t = i_102(t);
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_102, t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm w_10 = t;
          int x_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_10);
            }
          else
            {
              t = w_10;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = if_verbose2_1_0(g_5, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = term_z_10;
  a_43 = t;
  t = term_j_5;
  b_43 = t;
  t = term_a_11;
  t = p_4(a_43, b_43, t);
  t = term_c_11;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_d_11;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  c_43 = t;
  t = term_r_6;
  g_43 = t;
  t = term_v_7;
  h_43 = t;
  t = term_w_7;
  t = m_4(g_43, h_43, t);
  d_43 = t;
  t = term_k_5;
  e_43 = t;
  t = (ATerm) ATinsert(ATempty, d_43);
  f_43 = t;
  t = SSL_printnl(e_43, f_43);
  t = c_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t)
{
  static ATerm a_5 (ATerm t)
  {
    ATerm e_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_101(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = e_11;
        {
          ATerm l_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(o_11);
                  }
                else
                  {
                    t = n_11;
                    {
                      ATerm p_11 = t;
                      int q_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_5, e_5, f_5, t);
                          LocalPopChoice(q_11);
                        }
                      else
                        {
                          t = p_11;
                          {
                            ATerm r_11 = t;
                            int s_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_11);
                              }
                            else
                              {
                                t = r_11;
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
  static ATerm c_5 (ATerm t)
  {
    ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
    j_43 = t;
    {
      ATerm t_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm h_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_43 != NULL) && (i_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_5, t);
          LocalPopChoice(v_11);
        }
      else
        {
          t = t_11;
          t = term_w_11;
          i_43 = t;
        }
    }
    t = not_null(i_43);
    t = ReadFromFile_0_0(t);
    k_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
    t = apply_strategy_1_0(p_101, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_5, r_101, b_5, c_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,x_3 = NULL;
  p_43 = t;
  if(match_cons(t, sym__2))
    {
      m_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_43);
  l_43 = t;
  t = n_43;
  t = Box_0_0(t);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_43, o_43);
  x_3 = t;
  t = SSLsetAnnotations(x_3, l_43);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_5, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_a_12;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_m_9;
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
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_j_5);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__3, term_k_7, term_l_7, (ATerm) ATempty);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_z_8);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_j_5);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm n_86 (ATerm), ATerm t);
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
static ATerm a_4 (ATerm i_15, ATerm j_15, ATerm t);
static ATerm b_4 (ATerm m_42, ATerm n_42, ATerm t);
static ATerm d_4 (ATerm p_86 (ATerm), ATerm v_471, ATerm s_42, ATerm t);
static ATerm c_4 (ATerm i_42, ATerm j_42, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm s_87 (ATerm), ATerm t);
static ATerm y_28 (ATerm q_28, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm o_42, ATerm t);
static ATerm f_4 (ATerm o_37, ATerm p_37, ATerm t);
static ATerm g_4 (ATerm k_15, ATerm l_15, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_30 (ATerm r_29, ATerm t);
static ATerm z_30 (ATerm v_29, ATerm w_29, ATerm x_29, ATerm t);
static ATerm a_31 (ATerm f_30, ATerm g_30, ATerm h_30, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_72 (ATerm), ATerm t);
static ATerm m_4 (ATerm u_30, ATerm v_30, ATerm t);
ATerm if_verbose2_1_0 (ATerm n_84 (ATerm), ATerm t);
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
static ATerm p_4 (ATerm g_41, ATerm h_41, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm b_29, ATerm c_29, ATerm a_29, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm j_26, ATerm k_26, ATerm t);
ATerm foldr_2_0 (ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_84 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm need_help_1_0 (ATerm q_88 (ATerm), ATerm t);
static ATerm q_4 (ATerm i_32, ATerm j_32, ATerm k_32, ATerm t);
static ATerm r_4 (ATerm l_32, ATerm m_32, ATerm t);
ATerm lookup_table_0_1 (ATerm n_30, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_32, ATerm r_32, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm n_32, ATerm o_32, ATerm t);
static ATerm l_4 (ATerm s_32, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_72 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_90 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm parse_options_1_0 (ATerm n_90 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm iowrap_3_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,t_0 = NULL,v_0 = NULL,k_1 = NULL;
  a_0 = t;
  t = term_j_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_k_5;
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_5), b_0), term_l_5);
  k_1 = t;
  t = SSL_printnl(v_0, k_1);
  t = term_n_5;
  t_0 = t;
  t = SSL_exit(t_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL;
  l_1 = t;
  t = n_86(t);
  n_1 = t;
  t = term_k_5;
  o_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_1), n_1);
  q_1 = t;
  t = SSL_printnl(o_1, q_1);
  t = l_1;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,h_0 = NULL;
  i_10 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      e_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_10);
  d_10 = t;
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
  t = SSL_is_string(g_10);
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, e_10, h_10);
  h_0 = t;
  t = SSLsetAnnotations(h_0, d_10);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_10 = NULL,b_11 = NULL,c_11 = NULL,f_11 = NULL,g_11 = NULL,m_0 = NULL;
  g_11 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      b_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_11);
  y_10 = t;
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
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, b_11, f_11);
  m_0 = t;
  t = SSLsetAnnotations(m_0, y_10);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm x_11 = NULL,z_11 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL,p_0 = NULL;
  e_12 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      z_11 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_12);
  x_11 = t;
  t = z_11;
  if(match_cons(t, sym_VS_0))
    {
      t = z_11;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = z_11;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = z_11;
        }
    }
  t = SSL_is_string(b_12);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, z_11, d_12);
  p_0 = t;
  t = SSLsetAnnotations(p_0, x_11);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm p_20 = NULL,s_20 = NULL,t_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      s_20 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
      {
        ATerm k_21 = NULL,r_21 = NULL,s_0 = NULL;
        t = SSLgetAnnotations(p_20);
        k_21 = t;
        t = s_20;
        if(match_cons(t, sym_FN_0))
          {
            t = s_20;
          }
        else
          {
            if(match_cons(t, sym_FM_0))
              {
                t = s_20;
              }
            else
              {
                if(match_cons(t, sym_SE_0))
                  {
                    t = s_20;
                  }
                else
                  {
                    if(match_cons(t, sym_SH_0))
                      {
                        t = s_20;
                      }
                    else
                      {
                        if(match_cons(t, sym_SZ_0))
                          {
                            t = s_20;
                          }
                        else
                          {
                            if(!(match_cons(t, sym_CL_0)))
                              _fail(t);
                            t = s_20;
                          }
                      }
                  }
              }
          }
        t = SSL_is_string(t_20);
        r_21 = t;
        t = (ATerm) ATmakeAppl(sym_FNAT_2, s_20, r_21);
        s_0 = t;
        t = SSLsetAnnotations(s_0, k_21);
      }
    }
  else
    {
      ATerm y_22 = NULL,e_23 = NULL,u_0 = NULL;
      if(match_cons(t, sym_FFID_2))
        {
          s_20 = ATgetArgument(t, 0);
          t_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_20);
      y_22 = t;
      t = s_20;
      if(match_cons(t, sym_FN_0))
        {
          t = s_20;
        }
      else
        {
          if(match_cons(t, sym_FM_0))
            {
              t = s_20;
            }
          else
            {
              if(match_cons(t, sym_SE_0))
                {
                  t = s_20;
                }
              else
                {
                  if(match_cons(t, sym_SH_0))
                    {
                      t = s_20;
                    }
                  else
                    {
                      if(match_cons(t, sym_SZ_0))
                        {
                          t = s_20;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_CL_0)))
                            _fail(t);
                          t = s_20;
                        }
                    }
                }
            }
        }
      t = SSL_is_string(t_20);
      e_23 = t;
      t = (ATerm) ATmakeAppl(sym_FFID_2, s_20, e_23);
      u_0 = t;
      t = SSLsetAnnotations(u_0, y_22);
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  if(match_cons(t, sym_AL_1))
    {
      y_27 = ATgetArgument(t, 0);
      {
        ATerm v_33 = NULL,j_34 = NULL,z_0 = NULL;
        t = SSLgetAnnotations(x_27);
        v_33 = t;
        t = y_27;
        t = map_1_0(y_1, t);
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, j_34);
        z_0 = t;
        t = SSLsetAnnotations(z_0, v_33);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          y_27 = ATgetArgument(t, 0);
          {
            ATerm v_40 = NULL,q_41 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(x_27);
            v_40 = t;
            t = y_27;
            t = map_1_0(z_1, t);
            q_41 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, q_41);
            b_1 = t;
            t = SSLsetAnnotations(b_1, v_40);
          }
        }
      else
        {
          ATerm q_44 = NULL,s_44 = NULL,d_1 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              y_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_27);
          q_44 = t;
          t = y_27;
          t = map_1_0(a_2, t);
          s_44 = t;
          t = (ATerm) ATmakeAppl(sym_AR_1, s_44);
          d_1 = t;
          t = SSLsetAnnotations(d_1, q_44);
        }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm s_37 = NULL,q_38 = NULL,r_38 = NULL,g_39 = NULL,o_39 = NULL,y_0 = NULL;
  o_39 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_39);
  s_37 = t;
  t = q_38;
  if(match_cons(t, sym_VS_0))
    {
      t = q_38;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = q_38;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = q_38;
        }
    }
  t = SSL_is_string(r_38);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, q_38, g_39);
  y_0 = t;
  t = SSLsetAnnotations(y_0, s_37);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,l_44 = NULL,m_44 = NULL,a_1 = NULL;
  m_44 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      a_44 = ATgetArgument(t, 0);
      b_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  z_43 = t;
  t = a_44;
  if(match_cons(t, sym_VS_0))
    {
      t = a_44;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = a_44;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = a_44;
        }
    }
  t = SSL_is_string(b_44);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, a_44, l_44);
  a_1 = t;
  t = SSLsetAnnotations(a_1, z_43);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,c_1 = NULL;
  h_45 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      e_45 = ATgetArgument(t, 0);
      f_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_45);
  d_45 = t;
  t = e_45;
  if(match_cons(t, sym_VS_0))
    {
      t = e_45;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = e_45;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = e_45;
        }
    }
  t = SSL_is_string(f_45);
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, e_45, g_45);
  c_1 = t;
  t = SSLsetAnnotations(c_1, d_45);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,f_1 = NULL;
  d_28 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      a_28 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  z_27 = t;
  t = a_28;
  if(match_cons(t, sym_VS_0))
    {
      t = a_28;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = a_28;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = a_28;
        }
    }
  t = SSL_is_string(b_28);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, a_28, c_28);
  f_1 = t;
  t = SSLsetAnnotations(f_1, z_27);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,h_1 = NULL;
  w_45 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      t_45 = ATgetArgument(t, 0);
      u_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_45);
  s_45 = t;
  t = t_45;
  if(match_cons(t, sym_VS_0))
    {
      t = t_45;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = t_45;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = t_45;
        }
    }
  t = SSL_is_string(u_45);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, t_45, v_45);
  h_1 = t;
  t = SSLsetAnnotations(h_1, s_45);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,p_1 = NULL;
  m_47 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      j_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_47);
  i_47 = t;
  t = j_47;
  if(match_cons(t, sym_VS_0))
    {
      t = j_47;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = j_47;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = j_47;
        }
    }
  t = SSL_is_string(k_47);
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, j_47, l_47);
  p_1 = t;
  t = SSLsetAnnotations(p_1, i_47);
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
      ATerm s_22 = NULL,t_22 = NULL,w_22 = NULL,x_22 = NULL;
      x_22 = t;
      if(match_cons(t, sym_S_1))
        {
          t_22 = ATgetArgument(t, 0);
          {
            ATerm g_9 = NULL,i_9 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(x_22);
            g_9 = t;
            t = SSL_is_string(t_22);
            i_9 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, i_9);
            f_0 = t;
            t = SSLsetAnnotations(f_0, g_9);
          }
        }
      else
        {
          if(match_cons(t, sym_H_2))
            {
              t_22 = ATgetArgument(t, 0);
              w_22 = ATgetArgument(t, 1);
              {
                ATerm r_9 = NULL,v_9 = NULL,x_9 = NULL,j_0 = NULL;
                t = SSLgetAnnotations(x_22);
                r_9 = t;
                t = t_22;
                t = map_1_0(t_1, t);
                v_9 = t;
                t = w_22;
                t = map_1_0(Box_0_0, t);
                x_9 = t;
                t = (ATerm) ATmakeAppl(sym_H_2, v_9, x_9);
                j_0 = t;
                t = SSLsetAnnotations(j_0, r_9);
              }
            }
          else
            {
              if(match_cons(t, sym_V_2))
                {
                  t_22 = ATgetArgument(t, 0);
                  w_22 = ATgetArgument(t, 1);
                  {
                    ATerm r_10 = NULL,v_10 = NULL,w_10 = NULL,o_0 = NULL;
                    t = SSLgetAnnotations(x_22);
                    r_10 = t;
                    t = t_22;
                    t = map_1_0(u_1, t);
                    v_10 = t;
                    t = w_22;
                    t = map_1_0(Box_0_0, t);
                    w_10 = t;
                    t = (ATerm) ATmakeAppl(sym_V_2, v_10, w_10);
                    o_0 = t;
                    t = SSLsetAnnotations(o_0, r_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_HV_2))
                    {
                      t_22 = ATgetArgument(t, 0);
                      w_22 = ATgetArgument(t, 1);
                      {
                        ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL,q_0 = NULL;
                        t = SSLgetAnnotations(x_22);
                        r_11 = t;
                        t = t_22;
                        t = map_1_0(v_1, t);
                        u_11 = t;
                        t = w_22;
                        t = map_1_0(Box_0_0, t);
                        v_11 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, u_11, v_11);
                        q_0 = t;
                        t = SSLsetAnnotations(q_0, r_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ALT_2))
                        {
                          t_22 = ATgetArgument(t, 0);
                          w_22 = ATgetArgument(t, 1);
                          {
                            ATerm q_12 = NULL,u_12 = NULL,w_12 = NULL,r_0 = NULL;
                            t = SSLgetAnnotations(x_22);
                            q_12 = t;
                            t = t_22;
                            t = Box_0_0(t);
                            u_12 = t;
                            t = w_22;
                            t = Box_0_0(t);
                            w_12 = t;
                            t = (ATerm) ATmakeAppl(sym_ALT_2, u_12, w_12);
                            r_0 = t;
                            t = SSLsetAnnotations(r_0, q_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FBOX_2))
                            {
                              t_22 = ATgetArgument(t, 0);
                              w_22 = ATgetArgument(t, 1);
                              {
                                ATerm m_13 = NULL,p_13 = NULL,q_13 = NULL,x_0 = NULL,p_15 = NULL;
                                t = SSLgetAnnotations(x_22);
                                m_13 = t;
                                t = t_22;
                                if(match_cons(t, sym_F_1))
                                  {
                                    p_15 = ATgetArgument(t, 0);
                                    {
                                      ATerm o_18 = NULL,z_18 = NULL,w_0 = NULL;
                                      t = SSLgetAnnotations(t_22);
                                      o_18 = t;
                                      t = p_15;
                                      t = map_1_0(w_1, t);
                                      z_18 = t;
                                      t = (ATerm) ATmakeAppl(sym_F_1, z_18);
                                      w_0 = t;
                                      t = SSLsetAnnotations(w_0, o_18);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_KW_0))
                                      {
                                        t = t_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_VAR_0))
                                          {
                                            t = t_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_NUM_0))
                                              {
                                                t = t_22;
                                              }
                                            else
                                              {
                                                if(!(match_cons(t, sym_MATH_0)))
                                                  _fail(t);
                                                t = t_22;
                                              }
                                          }
                                      }
                                  }
                                p_13 = t;
                                t = w_22;
                                t = Box_0_0(t);
                                q_13 = t;
                                t = (ATerm) ATmakeAppl(sym_FBOX_2, p_13, q_13);
                                x_0 = t;
                                t = SSLsetAnnotations(x_0, m_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_A_3))
                                {
                                  t_22 = ATgetArgument(t, 0);
                                  w_22 = ATgetArgument(t, 1);
                                  s_22 = ATgetArgument(t, 2);
                                  {
                                    ATerm h_24 = NULL,l_24 = NULL,m_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,g_1 = NULL,e_1 = NULL;
                                    t = SSLgetAnnotations(x_22);
                                    h_24 = t;
                                    t = t_22;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        p_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(t_22);
                                    o_24 = t;
                                    t = p_24;
                                    t = map_1_0(x_1, t);
                                    q_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, q_24);
                                    e_1 = t;
                                    t = SSLsetAnnotations(e_1, o_24);
                                    r_24 = t;
                                    t = w_22;
                                    t = map_1_0(b_2, t);
                                    l_24 = t;
                                    t = s_22;
                                    t = map_1_0(Box_0_0, t);
                                    m_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_A_3, r_24, l_24, m_24);
                                    g_1 = t;
                                    t = SSLsetAnnotations(g_1, h_24);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_R_2))
                                    {
                                      t_22 = ATgetArgument(t, 0);
                                      w_22 = ATgetArgument(t, 1);
                                      {
                                        ATerm m_45 = NULL,p_45 = NULL,q_45 = NULL,i_1 = NULL;
                                        t = SSLgetAnnotations(x_22);
                                        m_45 = t;
                                        t = t_22;
                                        t = map_1_0(c_2, t);
                                        p_45 = t;
                                        t = w_22;
                                        t = map_1_0(Box_0_0, t);
                                        q_45 = t;
                                        t = (ATerm) ATmakeAppl(sym_R_2, p_45, q_45);
                                        i_1 = t;
                                        t = SSLsetAnnotations(i_1, m_45);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBL_2))
                                        {
                                          t_22 = ATgetArgument(t, 0);
                                          w_22 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_46 = NULL,h_46 = NULL,i_46 = NULL,j_1 = NULL;
                                            t = SSLgetAnnotations(x_22);
                                            e_46 = t;
                                            t = SSL_is_string(t_22);
                                            h_46 = t;
                                            t = w_22;
                                            t = Box_0_0(t);
                                            i_46 = t;
                                            t = (ATerm) ATmakeAppl(sym_LBL_2, h_46, i_46);
                                            j_1 = t;
                                            t = SSLsetAnnotations(j_1, e_46);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REF_2))
                                            {
                                              t_22 = ATgetArgument(t, 0);
                                              w_22 = ATgetArgument(t, 1);
                                              {
                                                ATerm q_46 = NULL,t_46 = NULL,u_46 = NULL,m_1 = NULL;
                                                t = SSLgetAnnotations(x_22);
                                                q_46 = t;
                                                t = SSL_is_string(t_22);
                                                t_46 = t;
                                                t = w_22;
                                                t = Box_0_0(t);
                                                u_46 = t;
                                                t = (ATerm) ATmakeAppl(sym_REF_2, t_46, u_46);
                                                m_1 = t;
                                                t = SSLsetAnnotations(m_1, q_46);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  t_22 = ATgetArgument(t, 0);
                                                  w_22 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm c_47 = NULL,f_47 = NULL,g_47 = NULL,r_1 = NULL;
                                                    t = SSLgetAnnotations(x_22);
                                                    c_47 = t;
                                                    t = t_22;
                                                    t = map_1_0(d_2, t);
                                                    f_47 = t;
                                                    t = w_22;
                                                    t = map_1_0(Box_0_0, t);
                                                    g_47 = t;
                                                    t = (ATerm) ATmakeAppl(sym_C_2, f_47, g_47);
                                                    r_1 = t;
                                                    t = SSLsetAnnotations(r_1, c_47);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_L_2))
                                                    {
                                                      t_22 = ATgetArgument(t, 0);
                                                      w_22 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm u_47 = NULL,x_47 = NULL,y_47 = NULL,s_1 = NULL;
                                                        t = SSLgetAnnotations(x_22);
                                                        u_47 = t;
                                                        t = t_22;
                                                        t = Box_0_0(t);
                                                        x_47 = t;
                                                        t = w_22;
                                                        t = Box_0_0(t);
                                                        y_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_L_2, x_47, y_47);
                                                        s_1 = t;
                                                        t = SSLsetAnnotations(s_1, u_47);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = x_22;
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
static ATerm a_4 (ATerm i_15, ATerm j_15, ATerm t)
{
  ATerm w_23 = NULL;
  t = SSL_fputc(i_15, j_15);
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_23);
  return(t);
}
static ATerm b_4 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm x_23 = NULL;
  t = SSL_write_term_to_stream_text(m_42, n_42);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_23);
  return(t);
}
static ATerm d_4 (ATerm p_86 (ATerm), ATerm v_471, ATerm s_42, ATerm t)
{
  ATerm y_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_471, term_r_5);
  t = h_4(t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, s_42);
  t = p_86(t);
  t = fclose_0_0(t);
  t = s_42;
  return(t);
}
static ATerm c_4 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm f_24 = NULL;
  t = SSL_write_term_to_stream_baf(i_42, j_42);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_24);
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
  ATerm m_48 = NULL,n_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_5 = ATgetArgument(t, 0);
      if(match_cons(s_5, sym_Stream_1))
        {
          m_48 = ATgetArgument(s_5, 0);
        }
      else
        _fail(t);
      n_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(m_48, n_48, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_5 = ATgetArgument(t, 0);
      if(match_cons(t_5, sym_Stream_1))
        {
          b_49 = ATgetArgument(t_5, 0);
        }
      else
        _fail(t);
      c_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(b_49, c_49, t);
  y_48 = t;
  t = term_u_5;
  z_48 = t;
  t = y_48;
  if(match_cons(t, sym_Stream_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, y_48);
  t = a_4(z_48, a_49, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_24 = NULL,u_24 = NULL,v_24 = NULL,z_24 = NULL,b_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,f_27 = NULL,g_27 = NULL,w_2 = NULL,v_2 = NULL;
  u_24 = t;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  e_25 = t;
  t = f_25;
  {
    ATerm v_5 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((n_24 != NULL) && (n_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_24 = ATgetArgument(t, 0);
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
        n_24 = t;
      }
  }
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_25, g_25);
  v_2 = t;
  t = SSLsetAnnotations(v_2, e_25);
  t = u_24;
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_24, (ATerm) ATmakeAppl(sym__2, not_null(n_24), b_25));
  w_2 = t;
  t = SSLsetAnnotations(w_2, v_24);
  d_25 = t;
  if(match_cons(t, sym__2))
    {
      f_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,x_2 = NULL;
        t = SSLgetAnnotations(d_25);
        f_48 = t;
        t = f_27;
        t = fetch_1_0(g_2, t);
        i_48 = t;
        t = g_27;
        if(match_cons(t, sym__2))
          {
            k_48 = ATgetArgument(t, 0);
            l_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(h_2, k_48, l_48, t);
        j_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_48, j_48);
        x_2 = t;
        t = SSLsetAnnotations(x_2, f_48);
        LocalPopChoice(z_5);
      }
    else
      {
        t = y_5;
        {
          ATerm s_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_2 = NULL;
          t = SSLgetAnnotations(d_25);
          s_48 = t;
          t = g_27;
          if(match_cons(t, sym__2))
            {
              w_48 = ATgetArgument(t, 0);
              x_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(i_2, w_48, x_48, t);
          v_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_27, v_48);
          y_2 = t;
          t = SSLsetAnnotations(y_2, s_48);
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
ATerm apply_strategy_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,w_27 = NULL;
  w_27 = t;
  t = dtime_0_0(t);
  t = w_27;
  t = s_87(t);
  t_27 = t;
  t = dtime_0_0(t);
  q_27 = t;
  t = t_27;
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_27), (ATerm) ATmakeAppl(sym_Runtime_1, q_27)), s_27);
  return(t);
}
static ATerm y_28 (ATerm q_28, ATerm t)
{
  t = SSL_fclose(q_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  u_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_28 = ATgetArgument(t, 0);
      {
        ATerm a_6 = t;
        int b_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_28);
            LocalPopChoice(b_6);
          }
        else
          {
            t = a_6;
            t = y_28(u_28, t);
          }
      }
    }
  else
    {
      t = y_28(u_28, t);
    }
  return(t);
}
static ATerm e_4 (ATerm o_42, ATerm t)
{
  t = SSL_read_term_from_stream(o_42);
  return(t);
}
static ATerm f_4 (ATerm o_37, ATerm p_37, ATerm t)
{
  t = SSL_strcat(o_37, p_37);
  return(t);
}
static ATerm g_4 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm d_29 = NULL;
  t = SSL_fopen(k_15, l_15);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_29 = NULL;
  t = SSL_stdin_stream();
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_29 = NULL;
  t = SSL_stdout_stream();
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_29 = NULL;
  t = SSL_stderr_stream();
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_29);
  return(t);
}
static ATerm y_30 (ATerm r_29, ATerm t)
{
  ATerm s_29 = NULL;
  t = SSL_explode_term(r_29);
  if(match_cons(t, sym__2))
    {
      ATerm c_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_6 = ATgetArgument(t, 1);
        if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
          {
            s_29 = ATgetFirst((ATermList) d_6);
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
  t = s_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_30 (ATerm v_29, ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,d_30 = NULL,d_3 = NULL;
  t = SSLgetAnnotations(x_29);
  a_30 = t;
  t = v_29;
  if(match_cons(t, sym_Path_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_30, w_29);
  d_3 = t;
  t = SSLsetAnnotations(d_3, a_30);
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(y_29, z_29, t);
  return(t);
}
static ATerm a_31 (ATerm f_30, ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,r_30 = NULL,e_3 = NULL;
  t = SSLgetAnnotations(h_30);
  k_30 = t;
  t = SSL_is_string(f_30);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_30, g_30);
  e_3 = t;
  t = SSLsetAnnotations(e_3, k_30);
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(i_30, j_30, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm t_30 = NULL,w_30 = NULL,x_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym__2))
    {
      w_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
      {
        ATerm f_6 = t;
        int g_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_30(t_30, t);
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
                  t = z_30(w_30, x_30, t_30, t);
                  LocalPopChoice(i_6);
                }
              else
                {
                  t = h_6;
                  t = a_31(w_30, x_30, t_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_30(t_30, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,j_31 = NULL;
  j_31 = t;
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_31, term_l_6);
        t = h_4(t);
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        {
          ATerm n_49 = NULL,o_49 = NULL;
          t = term_m_6;
          o_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_6, j_31);
          t = f_4(o_49, j_31, t);
          n_49 = t;
          t = SSL_perror(n_49);
          _fail(t);
        }
      }
  }
  d_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(e_31, t);
  c_31 = t;
  t = d_31;
  t = fclose_0_0(t);
  t = c_31;
  return(t);
}
ATerm fetch_1_0 (ATerm x_72 (ATerm), ATerm t)
{
  static ATerm p_32 (ATerm t)
  {
    ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
    f_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_32 = ATgetFirst((ATermList) t);
        h_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_49 = NULL,w_49 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(f_32);
          t_49 = t;
          t = g_32;
          t = x_72(t);
          w_49 = t;
          t = (ATerm) ATinsert(CheckATermList(h_32), w_49);
          h_3 = t;
          t = SSLsetAnnotations(h_3, t_49);
          LocalPopChoice(o_6);
        }
      else
        {
          t = n_6;
          {
            ATerm e_50 = NULL,h_50 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(f_32);
            e_50 = t;
            t = h_32;
            t = p_32(t);
            h_50 = t;
            t = (ATerm) ATinsert(CheckATermList(h_50), g_32);
            i_3 = t;
            t = SSLsetAnnotations(i_3, e_50);
          }
        }
    }
    return(t);
  }
  t = p_32(t);
  return(t);
}
static ATerm m_4 (ATerm u_30, ATerm v_30, ATerm t)
{
  ATerm v_32 = NULL;
  t = lookup_table_0_1(u_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(v_30, v_32, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
        t = term_r_6;
        b_33 = t;
        t = term_s_6;
        c_33 = t;
        t = term_t_6;
        t = m_4(b_33, c_33, t);
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_33, term_u_6);
        t = geq_0_0(t);
        t = y_32;
        t = n_84(t);
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = y_32;
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  if(match_string(t, "-k"))
    {
      t = f_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_33;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  t = SSL_string_to_int(g_33);
  h_33 = t;
  t = term_v_6;
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, h_33);
  t = p_4(i_33, h_33, t);
  t = g_33;
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
  ATerm k_33 = NULL;
  k_33 = t;
  if(match_string(t, "-S"))
    {
      t = k_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_33;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  t = term_s_6;
  l_33 = t;
  t = term_x_6;
  m_33 = t;
  t = term_y_6;
  t = p_4(l_33, m_33, t);
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
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  t = SSL_string_to_int(n_33);
  o_33 = t;
  t = term_s_6;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, o_33);
  t = p_4(p_33, o_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_33);
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
  ATerm q_33 = NULL,r_33 = NULL;
  t = term_c_7;
  q_33 = t;
  t = term_j_5;
  r_33 = t;
  t = term_d_7;
  t = p_4(q_33, r_33, t);
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
static ATerm p_4 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  t = term_r_6;
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_6, g_41, h_41);
  t = lookup_table_0_1(s_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(g_41, h_41, t_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_6, g_41, h_41);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
      t = term_j_5;
      t = e_0(t);
      z_33 = t;
      t = term_k_7;
      a_34 = t;
      t = term_l_7;
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_7, term_l_7, z_33);
      t = n_4(a_34, b_34, z_33, t);
      _fail(t);
    }
  else
    {
      ATerm e_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_33 = ATgetFirst((ATermList) t);
          y_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_33;
      t = c_0(t);
      t = term_j_5;
      t = d_0(t);
      e_34 = t;
      t = (ATerm) ATinsert(CheckATermList(y_33), e_34);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  if(match_string(t, "-o"))
    {
      t = g_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_34;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  t = term_m_7;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, h_34);
  t = p_4(i_34, h_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_34);
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
static ATerm n_4 (ATerm b_29, ATerm c_29, ATerm a_29, ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
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
        t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
        t = m_4(b_29, c_29, t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = (ATerm) ATempty;
      }
  }
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_29, c_29, (ATerm) ATinsert(CheckATermList(l_34), a_29));
  t = lookup_table_0_1(b_29, t);
  o_34 = t;
  t = (ATerm) ATinsert(CheckATermList(l_34), a_29);
  m_34 = t;
  t = o_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(c_29, m_34, n_34, t);
  t = k_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
      t = term_j_5;
      t = n_0(t);
      z_34 = t;
      t = term_k_7;
      a_35 = t;
      t = term_l_7;
      b_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_7, term_l_7, z_34);
      t = n_4(a_35, b_35, z_34, t);
      _fail(t);
    }
  else
    {
      ATerm f_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_34 = ATgetFirst((ATermList) t);
          w_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_34 = ATgetFirst((ATermList) t);
          y_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_34;
      t = k_0(t);
      t = x_34;
      t = l_0(t);
      f_35 = t;
      t = (ATerm) ATinsert(CheckATermList(y_34), f_35);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  if(match_string(t, "-i"))
    {
      t = h_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_35;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  t = term_s_7;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, i_35);
  t = p_4(j_35, i_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_35);
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
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_5;
  t = whoami_0_0(t);
  k_35 = t;
  t = term_k_5;
  m_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_7), k_35);
  n_35 = t;
  t = SSL_printnl(m_35, n_35);
  t = term_n_5;
  l_35 = t;
  t = SSL_exit(l_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL;
  t = term_r_6;
  o_35 = t;
  t = term_v_7;
  p_35 = t;
  t = term_w_7;
  t = m_4(o_35, p_35, t);
  return(t);
}
static ATerm i_4 (ATerm j_26, ATerm k_26, ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_26, k_26);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = SSL_addr(j_26, k_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_35;
      t = t_79(t);
    }
  else
    {
      ATerm w_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_35 = ATgetFirst((ATermList) t);
          t_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_35;
      t = foldr_2_0(t_79, u_79, t);
      w_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_35, w_35);
      t = u_79(t);
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
  ATerm q_50 = NULL,r_50 = NULL;
  if(match_cons(t, sym__2))
    {
      q_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(q_50, r_50, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_35 = NULL,m_50 = NULL,n_50 = NULL;
  t = times_0_0(t);
  n_50 = t;
  t = SSL_explode_term(n_50);
  if(match_cons(t, sym__2))
    {
      ATerm z_7 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_50;
  t = foldr_2_0(j_3, k_3, t);
  z_35 = t;
  t = SSL_TicksToSeconds(z_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym__2))
    {
      l_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_36;
        if((l_36 != t))
          {
            _fail(t);
          }
        t = k_36;
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        t = (ATerm) ATmakeAppl(sym__2, l_36, m_36);
        {
          ATerm c_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_36, m_36);
              LocalPopChoice(d_8);
            }
          else
            {
              t = c_8;
              t = SSL_gtr(l_36, m_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_36, m_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
        t = term_r_6;
        t_36 = t;
        t = term_s_6;
        u_36 = t;
        t = term_t_6;
        t = m_4(t_36, u_36, t);
        s_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_36, term_n_5);
        t = geq_0_0(t);
        t = q_36;
        t = m_84(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = q_36;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,z_36 = NULL,a_37 = NULL;
  t = run_time_0_0(t);
  w_36 = t;
  t = term_j_5;
  t = whoami_0_0(t);
  x_36 = t;
  t = term_k_5;
  z_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_8), w_36), term_g_8), x_36);
  a_37 = t;
  t = SSL_printnl(z_36, a_37);
  t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_8), w_36), term_g_8), x_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_6;
  b_37 = t;
  t = SSL_exit(b_37);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_37 = ATgetArgument(t, 0);
          {
            ATerm d_51 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(m_37);
            d_51 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_37);
            l_3 = t;
            t = SSLsetAnnotations(l_3, d_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_37 = NULL,f_37 = NULL;
      t = term_r_6;
      e_37 = t;
      t = term_k_8;
      f_37 = t;
      t = term_l_8;
      t = m_4(e_37, f_37, t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      t = fetch_1_0(o_3, t);
    }
  t = q_88(t);
  return(t);
}
static ATerm q_4 (ATerm i_32, ATerm j_32, ATerm k_32, ATerm t)
{
  ATerm q_37 = NULL;
  t = SSL_hashtable_put(k_32, i_32, j_32);
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_37);
  return(t);
}
static ATerm r_4 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_hashtable_get(m_32, l_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_30, ATerm t)
{
  ATerm z_37 = NULL;
  t = table_hashtable_0_0(t);
  z_37 = t;
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_51 = NULL;
        t = z_37;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(n_30, j_51, t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        {
          ATerm o_51 = NULL;
          t = n_30;
          t = table_create_0_0(t);
          t = z_37;
          if(match_cons(t, sym_Hashtable_1))
            {
              o_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(n_30, o_51, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_32, ATerm r_32, ATerm t)
{
  ATerm c_38 = NULL;
  t = SSL_hashtable_create(q_32, r_32);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_38);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,h_38 = NULL,i_38 = NULL;
  d_38 = t;
  t = term_o_8;
  h_38 = t;
  t = term_p_8;
  i_38 = t;
  t = d_38;
  t = new_hashtable_0_2(h_38, i_38, t);
  e_38 = t;
  t = d_38;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(d_38, e_38, f_38, t);
  t = d_38;
  return(t);
}
static ATerm k_4 (ATerm n_32, ATerm o_32, ATerm t)
{
  ATerm j_38 = NULL;
  t = SSL_hashtable_remove(o_32, n_32);
  j_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_38);
  return(t);
}
static ATerm l_4 (ATerm s_32, ATerm t)
{
  ATerm k_38 = NULL;
  t = SSL_hashtable_destroy(s_32);
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_38);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_38 = NULL;
  t = SSL_table_hashtable();
  l_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_38);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  m_38 = t;
  t = table_hashtable_0_0(t);
  n_38 = t;
  t = lookup_table_0_1(m_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(p_38, t);
  t = n_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(m_38, o_38, t);
  t = m_38;
  return(t);
}
ATerm map_1_0 (ATerm n_72 (ATerm), ATerm t)
{
  static ATerm e_39 (ATerm t)
  {
    ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
    b_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_39;
      }
    else
      {
        ATerm t_51 = NULL,w_51 = NULL,x_51 = NULL,n_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_39 = ATgetFirst((ATermList) t);
            d_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_39);
        t_51 = t;
        t = c_39;
        t = n_72(t);
        w_51 = t;
        t = d_39;
        t = e_39(t);
        x_51 = t;
        t = (ATerm) ATinsert(CheckATermList(x_51), w_51);
        n_3 = t;
        t = SSLsetAnnotations(n_3, t_51);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_39 = ATgetFirst((ATermList) t);
      i_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_39 = NULL,n_39 = NULL;
        static ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_39)), not_null(n_39));
          return(t);
        }
        t = i_39;
        t = i_0(t);
        if(((m_39 != NULL) && (m_39 != t)))
          _fail(t);
        else
          m_39 = t;
        t = h_39;
        t = g_0(t);
        if(((n_39 != NULL) && (n_39 != t)))
          _fail(t);
        else
          n_39 = t;
        t = i_39;
        t = reverse_acc_2_0(g_0, q_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,p_3 = NULL;
  v_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_39);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_39);
  p_3 = t;
  t = SSLsetAnnotations(p_3, t_39);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_39), term_q_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_39 = NULL,s_39 = NULL;
      t = term_r_6;
      r_39 = t;
      t = term_v_7;
      s_39 = t;
      t = term_w_7;
      t = m_4(r_39, s_39, t);
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
  p_39 = t;
  t = term_l_7;
  q_39 = t;
  t = term_u_8;
  t = m_4(p_39, q_39, t);
  t = reverse_acc_2_0(_id, u_3, t);
  t = map_1_0(w_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_39;
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
            t = z_39;
          }
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATinsert(ATempty, z_39);
      }
  }
  a_40 = t;
  t = term_x_5;
  b_40 = t;
  t = SSL_printnl(b_40, a_40);
  t = z_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  t = term_r_6;
  f_40 = t;
  t = term_v_7;
  g_40 = t;
  t = term_w_7;
  t = m_4(f_40, g_40, t);
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
  ATerm h_40 = NULL,i_40 = NULL;
  t = term_z_8;
  h_40 = t;
  t = term_j_5;
  i_40 = t;
  t = term_a_9;
  t = p_4(h_40, i_40, t);
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
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  t = term_z_8;
  l_40 = t;
  t = term_j_5;
  m_40 = t;
  t = term_a_9;
  t = p_4(l_40, m_40, t);
  t = term_c_9;
  j_40 = t;
  t = term_j_5;
  k_40 = t;
  t = term_d_9;
  t = p_4(j_40, k_40, t);
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
  ATerm h_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, j_4, t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = h_9;
      t = Option_3_0(o_4, s_4, t_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,r_3 = NULL;
  s_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_40 = ATgetFirst((ATermList) t);
      p_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_40);
  n_40 = t;
  t = o_40;
  t = c_61(t);
  q_40 = t;
  t = p_40;
  t = d_61(t);
  r_40 = t;
  t = (ATerm) ATinsert(CheckATermList(r_40), q_40);
  r_3 = t;
  t = SSLsetAnnotations(r_3, n_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,c_41 = NULL,d_41 = NULL,t_3 = NULL;
  x_40 = t;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_9;
        t = o_90(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
      }
  }
  t = x_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_40 = ATgetFirst((ATermList) t);
      a_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_40);
  y_40 = t;
  t = term_v_7;
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, z_40);
  t = p_4(d_41, z_40, t);
  t = a_41;
  {
    static ATerm p_41 (ATerm t)
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_41 = NULL;
              i_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_41;
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = o_90(t);
              t = Cons_2_0(_id, p_41, t);
            }
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm l_41 = NULL,m_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_41 = ATgetFirst((ATermList) t);
                m_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_41), (ATerm) ATmakeAppl(sym_Undefined_1, l_41));
          }
        }
      return(t);
    }
    t = p_41(t);
  }
  c_41 = t;
  t = (ATerm) ATinsert(CheckATermList(c_41), (ATerm) ATmakeAppl(sym_Program_1, z_40));
  t_3 = t;
  t = SSLsetAnnotations(t_3, y_40);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm c_42 = NULL;
  c_42 = t;
  if(match_string(t, "--help"))
    {
      t = c_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_42;
        }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL;
  t = term_k_8;
  d_42 = t;
  t = term_j_5;
  e_42 = t;
  t = term_s_9;
  t = p_4(d_42, e_42, t);
  t = term_t_9;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_u_9;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  w_41 = t;
  t = term_k_7;
  x_41 = t;
  t = term_w_9;
  t = lookup_table_0_1(x_41, t);
  b_42 = t;
  t = term_l_7;
  y_41 = t;
  t = (ATerm) ATempty;
  z_41 = t;
  t = b_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(y_41, z_41, a_42, t);
  t = w_41;
  {
    static ATerm u_4 (ATerm t)
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_90(t);
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
          {
            ATerm a_10 = t;
            int b_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_4, w_4, x_4, t);
                LocalPopChoice(b_10);
              }
            else
              {
                t = a_10;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_4, t);
  }
  {
    ATerm c_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_42 = NULL;
        w_42 = t;
        {
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_52 = NULL;
              t = w_42;
              {
                ATerm l_10 = t;
                int m_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_52 = NULL,g_52 = NULL;
                    t = term_r_6;
                    f_52 = t;
                    t = term_k_8;
                    g_52 = t;
                    t = term_l_8;
                    t = m_4(f_52, g_52, t);
                    LocalPopChoice(m_10);
                  }
                else
                  {
                    t = l_10;
                    t = fetch_1_0(y_4, t);
                  }
              }
              t = w_42;
              t = default_system_usage_0_0(t);
              t = term_x_6;
              e_52 = t;
              t = SSL_exit(e_52);
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              {
                ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
                t = term_r_6;
                l_52 = t;
                t = term_z_8;
                m_52 = t;
                t = term_n_10;
                t = m_4(l_52, m_52, t);
                t = w_42;
                t = default_system_about_0_0(t);
                t = term_x_6;
                k_52 = t;
                t = SSL_exit(k_52);
              }
            }
        }
        LocalPopChoice(f_10);
      }
    else
      {
        t = c_10;
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
              static ATerm z_4 (ATerm t)
              {
                ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,v_3 = NULL;
                c_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_43);
                a_43 = t;
                t = b_43;
                if(((u_41 != NULL) && (u_41 != t)))
                  _fail(t);
                else
                  u_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_43);
                v_3 = t;
                t = SSLsetAnnotations(v_3, a_43);
                return(t);
              }
              t = fetch_1_0(z_4, t);
              t = term_k_5;
              y_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_41)), term_q_10);
              z_42 = t;
              t = SSL_printnl(y_42, z_42);
              t = (ATerm) ATmakeAppl(sym__2, term_k_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_41)), term_q_10));
              t = default_system_usage_0_0(t);
              t = term_n_5;
              x_42 = t;
              t = SSL_exit(x_42);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
            }
        }
      }
  }
  v_41 = t;
  t = term_k_7;
  t = table_destroy_0_0(t);
  t = v_41;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  t = parse_options_1_0(s_88, t);
  h_43 = t;
  t = term_s_10;
  t = table_create_0_0(t);
  t = term_s_10;
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_10, term_t_10, h_43);
  t = lookup_table_0_1(i_43, t);
  l_43 = t;
  t = term_t_10;
  j_43 = t;
  t = l_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(j_43, h_43, k_43, t);
  t = h_43;
  t = u_88(t);
  {
    ATerm u_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_88, t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = u_10;
        {
          ATerm z_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_11);
            }
          else
            {
              t = z_10;
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
  ATerm m_43 = NULL,n_43 = NULL;
  t = term_d_11;
  m_43 = t;
  t = term_j_5;
  n_43 = t;
  t = term_e_11;
  t = p_4(m_43, n_43, t);
  t = term_h_11;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_i_11;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,c_44 = NULL;
  o_43 = t;
  t = term_r_6;
  w_43 = t;
  t = term_v_7;
  c_44 = t;
  t = term_w_7;
  t = m_4(w_43, c_44, t);
  p_43 = t;
  t = term_k_5;
  u_43 = t;
  t = (ATerm) ATinsert(ATempty, p_43);
  v_43 = t;
  t = SSL_printnl(u_43, v_43);
  t = o_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  static ATerm a_5 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_88(t);
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
                            ATerm s_11 = t;
                            int t_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(t_11);
                              }
                            else
                              {
                                t = s_11;
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
    ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
    e_44 = t;
    {
      ATerm w_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm h_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_44 != NULL) && (d_44 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_5, t);
          LocalPopChoice(y_11);
        }
      else
        {
          t = w_11;
          t = term_a_12;
          d_44 = t;
        }
    }
    t = not_null(d_44);
    t = ReadFromFile_0_0(t);
    f_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_44, f_44);
    t = apply_strategy_1_0(b_88, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_5, d_88, b_5, c_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,x_3 = NULL;
  k_44 = t;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_44);
  g_44 = t;
  t = i_44;
  t = Box_0_0(t);
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_44, j_44);
  x_3 = t;
  t = SSLsetAnnotations(x_3, g_44);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_5, _fail, default_usage_0_0, t);
  return(t);
}

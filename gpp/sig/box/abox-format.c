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
ATerm term_r_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
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
ATerm term_x_6;
ATerm term_s_6;
ATerm term_l_6;
ATerm term_g_6;
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
static void init_module_constant_terms (void)
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
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_b_7);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_d_5);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_p_7);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_d_5);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_a_9, term_d_5);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_d_5);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_d_5);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_stdin_0);
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
static ATerm u_3 (ATerm p_40, ATerm q_40, ATerm t);
static ATerm w_3 (ATerm h_84 (ATerm), ATerm l_452, ATerm v_40, ATerm t);
static ATerm v_3 (ATerm l_40, ATerm m_40, ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm k_85 (ATerm), ATerm t);
static ATerm k_27 (ATerm d_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_3 (ATerm r_40, ATerm t);
static ATerm z_3 (ATerm j_15, ATerm k_15, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_28 (ATerm u_27, ATerm t);
static ATerm z_28 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t);
static ATerm a_29 (ATerm i_28, ATerm j_28, ATerm k_28, ATerm t);
static ATerm a_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t);
static ATerm y_3 (ATerm m_35, ATerm n_35, ATerm t);
ATerm debug_1_0 (ATerm f_84 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm f_82 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_4 (ATerm e_39, ATerm f_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_4 (ATerm t_28, ATerm u_28, ATerm s_28, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_4 (ATerm b_26, ATerm c_26, ATerm t);
ATerm foldr_2_0 (ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_82 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm need_help_1_0 (ATerm i_86 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_4 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm s_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_88 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm parse_options_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm iowrap_3_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,j_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  a_0 = t;
  t = term_d_5;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_e_5;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_5), j_0), term_f_5);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_h_5;
  o_0 = t;
  t = SSL_exit(o_0);
  t = a_0;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,m_10 = NULL,f_0 = NULL;
  m_10 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_10);
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
static ATerm q_1 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,k_11 = NULL,l_11 = NULL,m_0 = NULL;
  l_11 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
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
  t = SSL_is_string(h_11);
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, g_11, k_11);
  m_0 = t;
  t = SSLsetAnnotations(m_0, f_11);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,j_12 = NULL,k_12 = NULL,s_0 = NULL;
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
  s_0 = t;
  t = SSLsetAnnotations(s_0, f_12);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,x_21 = NULL;
  t_21 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      u_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
      {
        ATerm r_22 = NULL,v_22 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(t_21);
        r_22 = t;
        t = u_21;
        if(match_cons(t, sym_FN_0))
          {
            t = u_21;
          }
        else
          {
            if(match_cons(t, sym_FM_0))
              {
                t = u_21;
              }
            else
              {
                if(match_cons(t, sym_SE_0))
                  {
                    t = u_21;
                  }
                else
                  {
                    if(match_cons(t, sym_SH_0))
                      {
                        t = u_21;
                      }
                    else
                      {
                        if(match_cons(t, sym_SZ_0))
                          {
                            t = u_21;
                          }
                        else
                          {
                            if(!(match_cons(t, sym_CL_0)))
                              _fail(t);
                            t = u_21;
                          }
                      }
                  }
              }
          }
        t = SSL_is_string(x_21);
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym_FNAT_2, u_21, v_22);
        v_0 = t;
        t = SSLsetAnnotations(v_0, r_22);
      }
    }
  else
    {
      ATerm m_23 = NULL,p_23 = NULL,w_0 = NULL;
      if(match_cons(t, sym_FFID_2))
        {
          u_21 = ATgetArgument(t, 0);
          x_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_21);
      m_23 = t;
      t = u_21;
      if(match_cons(t, sym_FN_0))
        {
          t = u_21;
        }
      else
        {
          if(match_cons(t, sym_FM_0))
            {
              t = u_21;
            }
          else
            {
              if(match_cons(t, sym_SE_0))
                {
                  t = u_21;
                }
              else
                {
                  if(match_cons(t, sym_SH_0))
                    {
                      t = u_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_SZ_0))
                        {
                          t = u_21;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_CL_0)))
                            _fail(t);
                          t = u_21;
                        }
                    }
                }
            }
        }
      t = SSL_is_string(x_21);
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym_FFID_2, u_21, p_23);
      w_0 = t;
      t = SSLsetAnnotations(w_0, m_23);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm z_31 = NULL,e_32 = NULL;
  z_31 = t;
  if(match_cons(t, sym_AL_1))
    {
      e_32 = ATgetArgument(t, 0);
      {
        ATerm l_41 = NULL,n_41 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(z_31);
        l_41 = t;
        t = e_32;
        t = map_1_0(u_1, t);
        n_41 = t;
        t = (ATerm) ATmakeAppl(sym_AL_1, n_41);
        a_1 = t;
        t = SSLsetAnnotations(a_1, l_41);
      }
    }
  else
    {
      if(match_cons(t, sym_AC_1))
        {
          e_32 = ATgetArgument(t, 0);
          {
            ATerm g_42 = NULL,i_42 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(z_31);
            g_42 = t;
            t = e_32;
            t = map_1_0(v_1, t);
            i_42 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, i_42);
            c_1 = t;
            t = SSLsetAnnotations(c_1, g_42);
          }
        }
      else
        {
          ATerm b_43 = NULL,d_43 = NULL,e_1 = NULL;
          if(match_cons(t, sym_AR_1))
            {
              e_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_31);
          b_43 = t;
          t = e_32;
          t = map_1_0(w_1, t);
          d_43 = t;
          t = (ATerm) ATmakeAppl(sym_AR_1, d_43);
          e_1 = t;
          t = SSLsetAnnotations(e_1, b_43);
        }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,z_0 = NULL;
  c_42 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_42);
  y_41 = t;
  t = z_41;
  if(match_cons(t, sym_VS_0))
    {
      t = z_41;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = z_41;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = z_41;
        }
    }
  t = SSL_is_string(a_42);
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, z_41, b_42);
  z_0 = t;
  t = SSLsetAnnotations(z_0, y_41);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,b_1 = NULL;
  x_42 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      u_42 = ATgetArgument(t, 0);
      v_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_42);
  t_42 = t;
  t = u_42;
  if(match_cons(t, sym_VS_0))
    {
      t = u_42;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = u_42;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = u_42;
        }
    }
  t = SSL_is_string(v_42);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, u_42, w_42);
  b_1 = t;
  t = SSLsetAnnotations(b_1, t_42);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,d_1 = NULL;
  s_43 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      p_43 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_43);
  o_43 = t;
  t = p_43;
  if(match_cons(t, sym_VS_0))
    {
      t = p_43;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = p_43;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = p_43;
        }
    }
  t = SSL_is_string(q_43);
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, p_43, r_43);
  d_1 = t;
  t = SSLsetAnnotations(d_1, o_43);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm o_32 = NULL,y_32 = NULL,c_33 = NULL,j_33 = NULL,k_33 = NULL,g_1 = NULL;
  k_33 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      y_32 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_33);
  o_32 = t;
  t = y_32;
  if(match_cons(t, sym_VS_0))
    {
      t = y_32;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = y_32;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = y_32;
        }
    }
  t = SSL_is_string(c_33);
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, y_32, j_33);
  g_1 = t;
  t = SSLsetAnnotations(g_1, o_32);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_1 = NULL;
  h_44 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      e_44 = ATgetArgument(t, 0);
      f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_44);
  d_44 = t;
  t = e_44;
  if(match_cons(t, sym_VS_0))
    {
      t = e_44;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = e_44;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = e_44;
        }
    }
  t = SSL_is_string(f_44);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, e_44, g_44);
  i_1 = t;
  t = SSLsetAnnotations(i_1, d_44);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,m_1 = NULL;
  x_45 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_45);
  t_45 = t;
  t = u_45;
  if(match_cons(t, sym_VS_0))
    {
      t = u_45;
    }
  else
    {
      if(match_cons(t, sym_HS_0))
        {
          t = u_45;
        }
      else
        {
          if(!(match_cons(t, sym_IS_0)))
            _fail(t);
          t = u_45;
        }
    }
  t = SSL_is_string(v_45);
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, u_45, w_45);
  m_1 = t;
  t = SSLsetAnnotations(m_1, t_45);
  return(t);
}
static ATerm a_2 (ATerm t)
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
      ATerm m_21 = NULL,o_21 = NULL,v_21 = NULL,w_21 = NULL;
      w_21 = t;
      if(match_cons(t, sym_S_1))
        {
          o_21 = ATgetArgument(t, 0);
          {
            ATerm k_9 = NULL,n_9 = NULL,b_0 = NULL;
            t = SSLgetAnnotations(w_21);
            k_9 = t;
            t = SSL_is_string(o_21);
            n_9 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, n_9);
            b_0 = t;
            t = SSLsetAnnotations(b_0, k_9);
          }
        }
      else
        {
          if(match_cons(t, sym_H_2))
            {
              o_21 = ATgetArgument(t, 0);
              v_21 = ATgetArgument(t, 1);
              {
                ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,h_0 = NULL;
                t = SSLgetAnnotations(w_21);
                a_10 = t;
                t = o_21;
                t = map_1_0(p_1, t);
                e_10 = t;
                t = v_21;
                t = map_1_0(Box_0_0, t);
                f_10 = t;
                t = (ATerm) ATmakeAppl(sym_H_2, e_10, f_10);
                h_0 = t;
                t = SSLsetAnnotations(h_0, a_10);
              }
            }
          else
            {
              if(match_cons(t, sym_V_2))
                {
                  o_21 = ATgetArgument(t, 0);
                  v_21 = ATgetArgument(t, 1);
                  {
                    ATerm v_10 = NULL,z_10 = NULL,d_11 = NULL,r_0 = NULL;
                    t = SSLgetAnnotations(w_21);
                    v_10 = t;
                    t = o_21;
                    t = map_1_0(q_1, t);
                    z_10 = t;
                    t = v_21;
                    t = map_1_0(Box_0_0, t);
                    d_11 = t;
                    t = (ATerm) ATmakeAppl(sym_V_2, z_10, d_11);
                    r_0 = t;
                    t = SSLsetAnnotations(r_0, v_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_HV_2))
                    {
                      o_21 = ATgetArgument(t, 0);
                      v_21 = ATgetArgument(t, 1);
                      {
                        ATerm u_11 = NULL,a_12 = NULL,b_12 = NULL,t_0 = NULL;
                        t = SSLgetAnnotations(w_21);
                        u_11 = t;
                        t = o_21;
                        t = map_1_0(r_1, t);
                        a_12 = t;
                        t = v_21;
                        t = map_1_0(Box_0_0, t);
                        b_12 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, a_12, b_12);
                        t_0 = t;
                        t = SSLsetAnnotations(t_0, u_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ALT_2))
                        {
                          o_21 = ATgetArgument(t, 0);
                          v_21 = ATgetArgument(t, 1);
                          {
                            ATerm v_12 = NULL,d_13 = NULL,e_13 = NULL,u_0 = NULL;
                            t = SSLgetAnnotations(w_21);
                            v_12 = t;
                            t = o_21;
                            t = Box_0_0(t);
                            d_13 = t;
                            t = v_21;
                            t = Box_0_0(t);
                            e_13 = t;
                            t = (ATerm) ATmakeAppl(sym_ALT_2, d_13, e_13);
                            u_0 = t;
                            t = SSLsetAnnotations(u_0, v_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FBOX_2))
                            {
                              o_21 = ATgetArgument(t, 0);
                              v_21 = ATgetArgument(t, 1);
                              {
                                ATerm n_13 = NULL,v_13 = NULL,z_13 = NULL,y_0 = NULL,t_15 = NULL;
                                t = SSLgetAnnotations(w_21);
                                n_13 = t;
                                t = o_21;
                                if(match_cons(t, sym_F_1))
                                  {
                                    t_15 = ATgetArgument(t, 0);
                                    {
                                      ATerm k_19 = NULL,o_19 = NULL,x_0 = NULL;
                                      t = SSLgetAnnotations(o_21);
                                      k_19 = t;
                                      t = t_15;
                                      t = map_1_0(s_1, t);
                                      o_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_F_1, o_19);
                                      x_0 = t;
                                      t = SSLsetAnnotations(x_0, k_19);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_KW_0))
                                      {
                                        t = o_21;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_VAR_0))
                                          {
                                            t = o_21;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_NUM_0))
                                              {
                                                t = o_21;
                                              }
                                            else
                                              {
                                                if(!(match_cons(t, sym_MATH_0)))
                                                  _fail(t);
                                                t = o_21;
                                              }
                                          }
                                      }
                                  }
                                v_13 = t;
                                t = v_21;
                                t = Box_0_0(t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_FBOX_2, v_13, z_13);
                                y_0 = t;
                                t = SSLsetAnnotations(y_0, n_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_A_3))
                                {
                                  o_21 = ATgetArgument(t, 0);
                                  v_21 = ATgetArgument(t, 1);
                                  m_21 = ATgetArgument(t, 2);
                                  {
                                    ATerm j_24 = NULL,n_24 = NULL,o_24 = NULL,v_24 = NULL,w_24 = NULL,y_24 = NULL,c_25 = NULL,h_1 = NULL,f_1 = NULL;
                                    t = SSLgetAnnotations(w_21);
                                    j_24 = t;
                                    t = o_21;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        w_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(o_21);
                                    v_24 = t;
                                    t = w_24;
                                    t = map_1_0(t_1, t);
                                    y_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, y_24);
                                    f_1 = t;
                                    t = SSLsetAnnotations(f_1, v_24);
                                    c_25 = t;
                                    t = v_21;
                                    t = map_1_0(x_1, t);
                                    n_24 = t;
                                    t = m_21;
                                    t = map_1_0(Box_0_0, t);
                                    o_24 = t;
                                    t = (ATerm) ATmakeAppl(sym_A_3, c_25, n_24, o_24);
                                    h_1 = t;
                                    t = SSLsetAnnotations(h_1, j_24);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_R_2))
                                    {
                                      o_21 = ATgetArgument(t, 0);
                                      v_21 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_43 = NULL,a_44 = NULL,b_44 = NULL,j_1 = NULL;
                                        t = SSLgetAnnotations(w_21);
                                        x_43 = t;
                                        t = o_21;
                                        t = map_1_0(y_1, t);
                                        a_44 = t;
                                        t = v_21;
                                        t = map_1_0(Box_0_0, t);
                                        b_44 = t;
                                        t = (ATerm) ATmakeAppl(sym_R_2, a_44, b_44);
                                        j_1 = t;
                                        t = SSLsetAnnotations(j_1, x_43);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LBL_2))
                                        {
                                          o_21 = ATgetArgument(t, 0);
                                          v_21 = ATgetArgument(t, 1);
                                          {
                                            ATerm p_44 = NULL,s_44 = NULL,t_44 = NULL,k_1 = NULL;
                                            t = SSLgetAnnotations(w_21);
                                            p_44 = t;
                                            t = SSL_is_string(o_21);
                                            s_44 = t;
                                            t = v_21;
                                            t = Box_0_0(t);
                                            t_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_LBL_2, s_44, t_44);
                                            k_1 = t;
                                            t = SSLsetAnnotations(k_1, p_44);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_REF_2))
                                            {
                                              o_21 = ATgetArgument(t, 0);
                                              v_21 = ATgetArgument(t, 1);
                                              {
                                                ATerm b_45 = NULL,e_45 = NULL,f_45 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(w_21);
                                                b_45 = t;
                                                t = SSL_is_string(o_21);
                                                e_45 = t;
                                                t = v_21;
                                                t = Box_0_0(t);
                                                f_45 = t;
                                                t = (ATerm) ATmakeAppl(sym_REF_2, e_45, f_45);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, b_45);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  o_21 = ATgetArgument(t, 0);
                                                  v_21 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm n_45 = NULL,q_45 = NULL,r_45 = NULL,n_1 = NULL;
                                                    t = SSLgetAnnotations(w_21);
                                                    n_45 = t;
                                                    t = o_21;
                                                    t = map_1_0(z_1, t);
                                                    q_45 = t;
                                                    t = v_21;
                                                    t = map_1_0(Box_0_0, t);
                                                    r_45 = t;
                                                    t = (ATerm) ATmakeAppl(sym_C_2, q_45, r_45);
                                                    n_1 = t;
                                                    t = SSLsetAnnotations(n_1, n_45);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_L_2))
                                                    {
                                                      o_21 = ATgetArgument(t, 0);
                                                      v_21 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm f_46 = NULL,i_46 = NULL,j_46 = NULL,o_1 = NULL;
                                                        t = SSLgetAnnotations(w_21);
                                                        f_46 = t;
                                                        t = o_21;
                                                        t = Box_0_0(t);
                                                        i_46 = t;
                                                        t = v_21;
                                                        t = Box_0_0(t);
                                                        j_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_L_2, i_46, j_46);
                                                        o_1 = t;
                                                        t = SSLsetAnnotations(o_1, f_46);
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
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      t = debug_1_0(a_2, t);
    }
  return(t);
}
static ATerm t_3 (ATerm h_15, ATerm i_15, ATerm t)
{
  ATerm d_23 = NULL;
  t = SSL_fputc(h_15, i_15);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_23);
  return(t);
}
static ATerm u_3 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_write_term_to_stream_text(p_40, q_40);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_23);
  return(t);
}
static ATerm w_3 (ATerm h_84 (ATerm), ATerm l_452, ATerm v_40, ATerm t)
{
  ATerm j_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_452, term_l_5);
  t = a_4(t);
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_23, v_40);
  t = h_84(t);
  t = fclose_0_0(t);
  t = v_40;
  return(t);
}
static ATerm v_3 (ATerm l_40, ATerm m_40, ATerm t)
{
  ATerm l_23 = NULL;
  t = SSL_write_term_to_stream_baf(l_40, m_40);
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
  ATerm x_46 = NULL,y_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_5 = ATgetArgument(t, 0);
      if(match_cons(m_5, sym_Stream_1))
        {
          x_46 = ATgetArgument(m_5, 0);
        }
      else
        _fail(t);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(x_46, y_46, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_5 = ATgetArgument(t, 0);
      if(match_cons(n_5, sym_Stream_1))
        {
          m_47 = ATgetArgument(n_5, 0);
        }
      else
        _fail(t);
      n_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(m_47, n_47, t);
  j_47 = t;
  t = term_o_5;
  k_47 = t;
  t = j_47;
  if(match_cons(t, sym_Stream_1))
    {
      l_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_5, j_47);
  t = t_3(k_47, l_47, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,e_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,p_24 = NULL,n_26 = NULL,o_26 = NULL,s_2 = NULL,r_2 = NULL;
  x_23 = t;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_23);
  g_24 = t;
  t = h_24;
  {
    ATerm p_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_2, t);
        LocalPopChoice(q_5);
      }
    else
      {
        t = p_5;
        t = term_r_5;
        w_23 = t;
      }
  }
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_24, i_24);
  r_2 = t;
  t = SSLsetAnnotations(r_2, g_24);
  t = x_23;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_23);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_23, (ATerm) ATmakeAppl(sym__2, not_null(w_23), a_24));
  s_2 = t;
  t = SSLsetAnnotations(s_2, y_23);
  e_24 = t;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,t_2 = NULL;
        t = SSLgetAnnotations(e_24);
        q_46 = t;
        t = n_26;
        t = fetch_1_0(c_2, t);
        t_46 = t;
        t = o_26;
        if(match_cons(t, sym__2))
          {
            v_46 = ATgetArgument(t, 0);
            w_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_3(d_2, v_46, w_46, t);
        u_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_46, u_46);
        t_2 = t;
        t = SSLsetAnnotations(t_2, q_46);
        LocalPopChoice(t_5);
      }
    else
      {
        t = s_5;
        {
          ATerm d_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,u_2 = NULL;
          t = SSLgetAnnotations(e_24);
          d_47 = t;
          t = o_26;
          if(match_cons(t, sym__2))
            {
              h_47 = ATgetArgument(t, 0);
              i_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(e_2, h_47, i_47, t);
          g_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_26, g_47);
          u_2 = t;
          t = SSLsetAnnotations(u_2, d_47);
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
ATerm apply_strategy_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  v_26 = t;
  t = dtime_0_0(t);
  t = v_26;
  t = k_85(t);
  u_26 = t;
  t = dtime_0_0(t);
  r_26 = t;
  t = u_26;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_26), (ATerm) ATmakeAppl(sym_Runtime_1, r_26)), t_26);
  return(t);
}
static ATerm k_27 (ATerm d_27, ATerm t)
{
  t = SSL_fclose(d_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_27 = NULL,i_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_27 = ATgetArgument(t, 0);
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_27);
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
static ATerm x_3 (ATerm r_40, ATerm t)
{
  t = SSL_read_term_from_stream(r_40);
  return(t);
}
static ATerm z_3 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_fopen(j_15, k_15);
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
static ATerm y_28 (ATerm u_27, ATerm t)
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
static ATerm z_28 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t)
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
  t = z_3(b_28, c_28, t);
  return(t);
}
static ATerm a_29 (ATerm i_28, ATerm j_28, ATerm k_28, ATerm t)
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
  t = z_3(l_28, m_28, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  if(match_cons(t, sym__2))
    {
      w_28 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
      {
        ATerm z_5 = t;
        int a_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_28(v_28, t);
            LocalPopChoice(a_6);
          }
        else
          {
            t = z_5;
            {
              ATerm b_6 = t;
              int c_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_28(w_28, x_28, v_28, t);
                  LocalPopChoice(c_6);
                }
              else
                {
                  t = b_6;
                  t = a_29(w_28, x_28, v_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_28(v_28, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,j_29 = NULL;
  j_29 = t;
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_29, term_f_6);
        t = a_4(t);
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        {
          ATerm y_47 = NULL,z_47 = NULL;
          t = term_g_6;
          z_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_6, j_29);
          t = y_3(z_47, j_29, t);
          y_47 = t;
          t = SSL_perror(y_47);
          _fail(t);
        }
      }
  }
  d_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(e_29, t);
  c_29 = t;
  t = d_29;
  t = fclose_0_0(t);
  t = c_29;
  return(t);
}
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  static ATerm i_30 (ATerm t)
  {
    ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
    f_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_30 = ATgetFirst((ATermList) t);
        h_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_6 = t;
      int i_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_48 = NULL,h_48 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(f_30);
          e_48 = t;
          t = g_30;
          t = z_70(t);
          h_48 = t;
          t = (ATerm) ATinsert(CheckATermList(h_30), h_48);
          d_3 = t;
          t = SSLsetAnnotations(d_3, e_48);
          LocalPopChoice(i_6);
        }
      else
        {
          t = h_6;
          {
            ATerm p_48 = NULL,s_48 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(f_30);
            p_48 = t;
            t = h_30;
            t = i_30(t);
            s_48 = t;
            t = (ATerm) ATinsert(CheckATermList(s_48), g_30);
            e_3 = t;
            t = SSLsetAnnotations(e_3, p_48);
          }
        }
    }
    return(t);
  }
  t = i_30(t);
  return(t);
}
static ATerm y_3 (ATerm m_35, ATerm n_35, ATerm t)
{
  t = SSL_strcat(m_35, n_35);
  return(t);
}
ATerm debug_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  n_30 = t;
  t = f_84(t);
  o_30 = t;
  t = term_e_5;
  p_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_30), o_30);
  q_30 = t;
  t = SSL_printnl(p_30, q_30);
  t = n_30;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_l_6;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_30 = NULL;
      x_30 = t;
      t = SSL_is_string(x_30);
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      {
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_2, t);
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
            {
              ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
              d_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_31 = ATgetArgument(t, 0);
                  t = e_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_31 = ATgetArgument(t, 0);
                      t = e_31;
                      {
                        ATerm q_6 = t;
                        int r_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(r_6);
                          }
                        else
                          {
                            t = q_6;
                            t = debug_1_0(g_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_31 = NULL,k_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_31 = ATgetArgument(t, 0);
                          f_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_31;
                      t = eval_config_0_0(t);
                      j_31 = t;
                      t = f_31;
                      t = eval_config_0_0(t);
                      k_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_31, k_31);
                      t = y_3(j_31, k_31, t);
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
  ATerm o_31 = NULL,p_31 = NULL;
  o_31 = t;
  t = term_s_6;
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, o_31);
  t = d_4(p_31, o_31, t);
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_31 = NULL,r_31 = NULL;
        t = eval_config_0_0(t);
        q_31 = t;
        t = term_s_6;
        r_31 = t;
        t = SSL_table_put(r_31, o_31, q_31);
        t = q_31;
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_31 = NULL;
        t = term_x_6;
        t = get_config_0_0(t);
        x_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_31, term_y_6);
        t = geq_0_0(t);
        t = v_31;
        t = f_82(t);
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        t = v_31;
      }
  }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  if(match_string(t, "-k"))
    {
      t = a_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_32;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  t = SSL_string_to_int(b_32);
  c_32 = t;
  t = term_z_6;
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, c_32);
  t = g_4(d_32, c_32, t);
  t = b_32;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_2, i_2, j_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm f_32 = NULL;
  f_32 = t;
  if(match_string(t, "-S"))
    {
      t = f_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_32;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL;
  t = term_x_6;
  g_32 = t;
  t = term_b_7;
  h_32 = t;
  t = term_c_7;
  t = g_4(g_32, h_32, t);
  t = term_d_7;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  t = SSL_string_to_int(i_32);
  j_32 = t;
  t = term_x_6;
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, j_32);
  t = g_4(k_32, j_32, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_32);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  t = term_g_7;
  l_32 = t;
  t = term_d_5;
  m_32 = t;
  t = term_h_7;
  t = g_4(l_32, m_32, t);
  t = term_i_7;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_2, l_2, m_2, t);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm m_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_2, o_2, p_2, t);
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            t = Option_3_0(q_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm g_4 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm n_32 = NULL;
  t = term_s_6;
  n_32 = t;
  t = SSL_table_put(n_32, e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__3, term_s_6, e_39, f_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
      t = term_d_5;
      t = e_0(t);
      s_32 = t;
      t = term_o_7;
      t_32 = t;
      t = term_p_7;
      u_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_7, term_p_7, s_32);
      t = e_4(t_32, u_32, s_32, t);
      _fail(t);
    }
  else
    {
      ATerm x_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_32 = ATgetFirst((ATermList) t);
          r_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_32;
      t = c_0(t);
      t = term_d_5;
      t = d_0(t);
      x_32 = t;
      t = (ATerm) ATinsert(CheckATermList(r_32), x_32);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm z_32 = NULL;
  z_32 = t;
  if(match_string(t, "-o"))
    {
      t = z_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_32;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  a_33 = t;
  t = term_q_7;
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_7, a_33);
  t = g_4(b_33, a_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_33);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_r_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, b_3, t);
  return(t);
}
static ATerm e_4 (ATerm t_28, ATerm u_28, ATerm s_28, ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_28, u_28);
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_7 = ATgetArgument(t, 0);
            ATerm v_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_28, u_28);
        t = d_4(t_28, u_28, t);
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        t = (ATerm) ATempty;
      }
  }
  e_33 = t;
  t = (ATerm) ATinsert(CheckATermList(e_33), s_28);
  f_33 = t;
  t = SSL_table_put(t_28, u_28, f_33);
  t = d_33;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
      t = term_d_5;
      t = n_0(t);
      q_33 = t;
      t = term_o_7;
      r_33 = t;
      t = term_p_7;
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_7, term_p_7, q_33);
      t = e_4(r_33, s_33, q_33, t);
      _fail(t);
    }
  else
    {
      ATerm w_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_33 = ATgetFirst((ATermList) t);
          n_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_33 = ATgetFirst((ATermList) t);
          p_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_33;
      t = k_0(t);
      t = o_33;
      t = l_0(t);
      w_33 = t;
      t = (ATerm) ATinsert(CheckATermList(p_33), w_33);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  if(match_string(t, "-i"))
    {
      t = y_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_33;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  t = term_w_7;
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, z_33);
  t = g_4(a_34, z_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_33);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, f_3, g_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_5;
  t = whoami_0_0(t);
  b_34 = t;
  t = term_e_5;
  d_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_7), b_34);
  e_34 = t;
  t = SSL_printnl(d_34, e_34);
  t = term_h_5;
  c_34 = t;
  t = SSL_exit(c_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_7;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_4 (ATerm b_26, ATerm c_26, ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_26, c_26);
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      t = SSL_addr(b_26, c_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_34;
      t = l_77(t);
    }
  else
    {
      ATerm l_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_34 = ATgetFirst((ATermList) t);
          i_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_34;
      t = foldr_2_0(l_77, m_77, t);
      l_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_34, l_34);
      t = m_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(j_49, k_49, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_34 = NULL,f_49 = NULL,g_49 = NULL;
  t = times_0_0(t);
  g_49 = t;
  t = SSL_explode_term(g_49);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_49;
  t = foldr_2_0(i_3, k_3, t);
  o_34 = t;
  t = SSL_TicksToSeconds(o_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  if(match_cons(t, sym__2))
    {
      a_35 = ATgetArgument(t, 0);
      b_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_35;
        if((a_35 != t))
          {
            _fail(t);
          }
        t = z_34;
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = (ATerm) ATmakeAppl(sym__2, a_35, b_35);
        {
          ATerm f_8 = t;
          int g_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_35, b_35);
              LocalPopChoice(g_8);
            }
          else
            {
              t = f_8;
              t = SSL_gtr(a_35, b_35);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_35, b_35);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL;
        t = term_x_6;
        t = get_config_0_0(t);
        h_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_35, term_h_5);
        t = geq_0_0(t);
        t = f_35;
        t = e_82(t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = f_35;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,o_35 = NULL,p_35 = NULL;
  t = run_time_0_0(t);
  j_35 = t;
  t = term_d_5;
  t = whoami_0_0(t);
  k_35 = t;
  t = term_e_5;
  o_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_8), j_35), term_j_8), k_35);
  p_35 = t;
  t = SSL_printnl(o_35, p_35);
  t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_8), j_35), term_j_8), k_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_7;
  q_35 = t;
  t = SSL_exit(q_35);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  z_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_35 = ATgetArgument(t, 0);
          {
            ATerm w_49 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(z_35);
            w_49 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_35);
            h_3 = t;
            t = SSLsetAnnotations(h_3, w_49);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_8;
      t = get_config_0_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      t = fetch_1_0(o_3, t);
    }
  t = i_86(t);
  return(t);
}
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t)
{
  static ATerm p_36 (ATerm t)
  {
    ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
    m_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_36;
      }
    else
      {
        ATerm e_50 = NULL,h_50 = NULL,i_50 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_36 = ATgetFirst((ATermList) t);
            o_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_36);
        e_50 = t;
        t = n_36;
        t = p_70(t);
        h_50 = t;
        t = o_36;
        t = p_36(t);
        i_50 = t;
        t = (ATerm) ATinsert(CheckATermList(i_50), h_50);
        j_3 = t;
        t = SSLsetAnnotations(j_3, e_50);
      }
    return(t);
  }
  t = p_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_36 = ATgetFirst((ATermList) t);
      t_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_36 = NULL,y_36 = NULL;
        static ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_36)), not_null(y_36));
          return(t);
        }
        t = t_36;
        t = i_0(t);
        if(((x_36 != NULL) && (x_36 != t)))
          _fail(t);
        else
          x_36 = t;
        t = s_36;
        t = g_0(t);
        if(((y_36 != NULL) && (y_36 != t)))
          _fail(t);
        else
          y_36 = t;
        t = t_36;
        t = reverse_acc_2_0(g_0, q_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm d_4 (ATerm k_30, ATerm l_30, ATerm t)
{
  t = SSL_table_get(k_30, l_30);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,l_3 = NULL;
  e_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_37);
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_37);
  l_3 = t;
  t = SSLsetAnnotations(l_3, c_37);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_37), term_o_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_7;
      t = get_config_0_0(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      t = fetch_1_0(s_3, t);
    }
  t = term_r_8;
  t = echo_0_0(t);
  t = term_o_7;
  a_37 = t;
  t = term_p_7;
  b_37 = t;
  t = term_s_8;
  t = d_4(a_37, b_37, t);
  t = reverse_acc_2_0(_id, f_4, t);
  t = map_1_0(h_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  i_37 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_8 = ATgetFirst((ATermList) t);
                ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_37;
          }
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        t = (ATerm) ATinsert(ATempty, i_37);
      }
  }
  j_37 = t;
  t = term_r_5;
  k_37 = t;
  t = SSL_printnl(k_37, j_37);
  t = i_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_7;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  t = term_x_8;
  o_37 = t;
  t = term_d_5;
  p_37 = t;
  t = term_y_8;
  t = g_4(o_37, p_37, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  t = term_x_8;
  s_37 = t;
  t = term_d_5;
  t_37 = t;
  t = term_y_8;
  t = g_4(s_37, t_37, t);
  t = term_a_9;
  q_37 = t;
  t = term_d_5;
  r_37 = t;
  t = term_b_9;
  t = g_4(q_37, r_37, t);
  t = term_c_9;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      t = Option_3_0(l_4, m_4, n_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,n_3 = NULL;
  z_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_37 = ATgetFirst((ATermList) t);
      w_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_37);
  u_37 = t;
  t = v_37;
  t = f_59(t);
  x_37 = t;
  t = w_37;
  t = g_59(t);
  y_37 = t;
  t = (ATerm) ATinsert(CheckATermList(y_37), x_37);
  n_3 = t;
  t = SSLsetAnnotations(n_3, u_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,j_38 = NULL,k_38 = NULL,p_3 = NULL;
  e_38 = t;
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_9;
        t = g_88(t);
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
      }
  }
  t = e_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_38 = ATgetFirst((ATermList) t);
      h_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_38);
  f_38 = t;
  t = term_z_7;
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, g_38);
  t = g_4(k_38, g_38, t);
  t = h_38;
  {
    static ATerm u_38 (ATerm t)
    {
      ATerm j_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_9 = t;
          int o_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_38 = NULL;
              n_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_38;
              LocalPopChoice(o_9);
            }
          else
            {
              t = m_9;
              t = g_88(t);
              t = Cons_2_0(_id, u_38, t);
            }
          LocalPopChoice(l_9);
        }
      else
        {
          t = j_9;
          {
            ATerm q_38 = NULL,r_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_38 = ATgetFirst((ATermList) t);
                r_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_38), (ATerm) ATmakeAppl(sym_Undefined_1, q_38));
          }
        }
      return(t);
    }
    t = u_38(t);
  }
  j_38 = t;
  t = (ATerm) ATinsert(CheckATermList(j_38), (ATerm) ATmakeAppl(sym_Program_1, g_38));
  p_3 = t;
  t = SSLsetAnnotations(p_3, f_38);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  if(match_string(t, "--help"))
    {
      t = i_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_39;
        }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  t = term_n_8;
  j_39 = t;
  t = term_d_5;
  k_39 = t;
  t = term_p_9;
  t = g_4(j_39, k_39, t);
  t = term_q_9;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_r_9;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,g_39 = NULL,h_39 = NULL;
  b_39 = t;
  t = term_o_7;
  d_39 = t;
  t = term_p_7;
  g_39 = t;
  t = (ATerm) ATempty;
  h_39 = t;
  t = SSL_table_put(d_39, g_39, h_39);
  t = b_39;
  {
    static ATerm o_4 (ATerm t)
    {
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_88(t);
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          {
            ATerm u_9 = t;
            int v_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_4, q_4, r_4, t);
                LocalPopChoice(v_9);
              }
            else
              {
                t = u_9;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
  }
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_39 = NULL;
        w_39 = t;
        {
          ATerm y_9 = t;
          int z_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_50 = NULL;
              t = w_39;
              {
                ATerm b_10 = t;
                int c_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_n_8;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_10);
                  }
                else
                  {
                    t = b_10;
                    t = fetch_1_0(s_4, t);
                  }
              }
              t = w_39;
              t = default_system_usage_0_0(t);
              t = term_b_7;
              p_50 = t;
              t = SSL_exit(p_50);
              LocalPopChoice(z_9);
            }
          else
            {
              t = y_9;
              {
                ATerm t_50 = NULL;
                t = term_x_8;
                t = get_config_0_0(t);
                t = w_39;
                t = default_system_about_0_0(t);
                t = term_b_7;
                t_50 = t;
                t = SSL_exit(t_50);
              }
            }
        }
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
          ATerm d_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
              static ATerm t_4 (ATerm t)
              {
                ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,r_3 = NULL;
                c_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_40);
                a_40 = t;
                t = b_40;
                if(((z_38 != NULL) && (z_38 != t)))
                  _fail(t);
                else
                  z_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_40);
                r_3 = t;
                t = SSLsetAnnotations(r_3, a_40);
                return(t);
              }
              t = fetch_1_0(t_4, t);
              t = term_e_5;
              y_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_38)), term_l_10);
              z_39 = t;
              t = SSL_printnl(y_39, z_39);
              t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_38)), term_l_10));
              t = default_system_usage_0_0(t);
              t = term_h_5;
              x_39 = t;
              t = SSL_exit(x_39);
              LocalPopChoice(g_10);
            }
          else
            {
              t = d_10;
            }
        }
      }
  }
  a_39 = t;
  t = term_o_7;
  c_39 = t;
  t = SSL_table_destroy(c_39);
  t = a_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  t = parse_options_1_0(k_86, t);
  h_40 = t;
  t = term_n_10;
  k_40 = t;
  t = SSL_table_create(k_40);
  t = term_n_10;
  i_40 = t;
  t = term_o_10;
  j_40 = t;
  t = SSL_table_put(i_40, j_40, h_40);
  t = h_40;
  t = m_86(t);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_86, t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = if_verbose2_1_0(a_5, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL;
  t = term_t_10;
  n_40 = t;
  t = term_d_5;
  o_40 = t;
  t = term_u_10;
  t = g_4(n_40, o_40, t);
  t = term_w_10;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_x_10;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,w_40 = NULL,x_40 = NULL;
  s_40 = t;
  t = term_z_7;
  t = get_config_0_0(t);
  t_40 = t;
  t = term_e_5;
  w_40 = t;
  t = (ATerm) ATinsert(ATempty, t_40);
  x_40 = t;
  t = SSL_printnl(w_40, x_40);
  t = s_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  static ATerm u_4 (ATerm t)
  {
    ATerm y_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_85(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = y_10;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              {
                ATerm e_11 = t;
                int i_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(i_11);
                  }
                else
                  {
                    t = e_11;
                    {
                      ATerm j_11 = t;
                      int m_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_4, y_4, z_4, t);
                          LocalPopChoice(m_11);
                        }
                      else
                        {
                          t = j_11;
                          {
                            ATerm n_11 = t;
                            int o_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_11);
                              }
                            else
                              {
                                t = n_11;
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
  static ATerm w_4 (ATerm t)
  {
    ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
    z_40 = t;
    {
      ATerm p_11 = t;
      int q_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm b_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_40 != NULL) && (y_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_5, t);
          LocalPopChoice(q_11);
        }
      else
        {
          t = p_11;
          t = term_r_11;
          y_40 = t;
        }
    }
    t = not_null(y_40);
    t = ReadFromFile_0_0(t);
    a_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_40, a_41);
    t = apply_strategy_1_0(t_85, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(u_4, v_85, v_4, w_4, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,c_4 = NULL;
  f_41 = t;
  if(match_cons(t, sym__2))
    {
      c_41 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  b_41 = t;
  t = d_41;
  t = Box_0_0(t);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_41, e_41);
  c_4 = t;
  t = SSLsetAnnotations(c_4, b_41);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(c_5, _fail, default_usage_0_0, t);
  return(t);
}

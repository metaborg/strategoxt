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
ATerm term_b_27;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_c_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_x_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_c_21;
ATerm term_w_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_j_16;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_y_13;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_v_9;
void init_constant_terms (void)
{
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_i_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_r_17, term_v_9);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_b_18);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_v_9);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_v_9);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_v_9);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_v_9);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm L_2_0 (ATerm m_62 (ATerm), ATerm n_62 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm);
ATerm C_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm);
ATerm REF_2_0 (ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm);
ATerm LBL_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm);
ATerm R_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm);
ATerm AR_1_0 (ATerm k_63 (ATerm), ATerm);
ATerm AC_1_0 (ATerm j_63 (ATerm), ATerm);
ATerm AL_1_0 (ATerm i_63 (ATerm), ATerm);
ATerm AOPTIONS_1_0 (ATerm l_63 (ATerm), ATerm);
ATerm A_3_0 (ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm f_63 (ATerm), ATerm);
ATerm FFID_2_0 (ATerm y_62 (ATerm), ATerm z_62 (ATerm), ATerm);
ATerm FNAT_2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm);
ATerm F_1_0 (ATerm a_63 (ATerm), ATerm);
ATerm FBOX_2_0 (ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm);
ATerm ALT_2_0 (ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm);
ATerm HV_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm V_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm);
ATerm H_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm S_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm t_6 (ATerm);
ATerm Box_0_0 (ATerm);
ATerm _2_0 (ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm);
ATerm t_3 (ATerm p_24, ATerm q_24, ATerm);
ATerm u_3 (ATerm o_48, ATerm p_48, ATerm);
ATerm w_3 (ATerm k_88 (ATerm), ATerm h_449, ATerm s_48, ATerm);
ATerm v_3 (ATerm k_48, ATerm l_48, ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_89 (ATerm), ATerm);
ATerm d_21 (ATerm x_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm q_48, ATerm);
ATerm y_3 (ATerm r_24, ATerm s_24, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm s_3 (ATerm p_43, ATerm q_43, ATerm);
ATerm debug_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_86 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm o_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm d_47, ATerm e_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm y_36, ATerm z_36, ATerm x_36, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm c_35, ATerm d_35, ATerm);
ATerm foldr_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm need_help_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_74 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm p_38, ATerm q_38, ATerm);
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_62 (ATerm), ATerm h_62 (ATerm), ATerm);
ATerm b_9 (ATerm);
ATerm parse_options_p__1_0 (ATerm j_92 (ATerm), ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm parse_options_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm iowrap_3_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm);
ATerm u_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  f_0 = t;
  t = term_v_9;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_x_9;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_10), l_0), term_y_9);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_c_10;
  o_0 = t;
  t = SSL_exit(o_0);
  t = f_0;
  return(t);
}
ATerm L_2_0 (ATerm m_62 (ATerm), ATerm n_62 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,d_1 = NULL,e_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL,b_0 = NULL,k_0 = NULL;
  r_1 = t;
  if(match_cons(t, sym_L_2))
    {
      d_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_1);
  x_0 = t;
  t = d_1;
  t = m_62(t);
  n_1 = t;
  t = e_1;
  t = n_62(t);
  q_1 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym_L_2, n_1, q_1);
  b_0 = t;
  t = SSLsetAnnotations(b_0, x_0);
  return(t);
}
ATerm SOpt_2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm t)
{
  ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL,q_0 = NULL,s_0 = NULL;
  d_2 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_2);
  v_1 = t;
  t = x_1;
  t = u_63(t);
  a_2 = t;
  t = y_1;
  t = v_63(t);
  b_2 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, a_2, b_2);
  q_0 = t;
  t = SSLsetAnnotations(q_0, v_1);
  return(t);
}
ATerm C_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,o_2 = NULL,q_2 = NULL,u_0 = NULL,v_0 = NULL;
  q_2 = t;
  if(match_cons(t, sym_C_2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_2);
  g_2 = t;
  t = h_2;
  t = q_62(t);
  j_2 = t;
  t = i_2;
  t = r_62(t);
  o_2 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_C_2, j_2, o_2);
  u_0 = t;
  t = SSLsetAnnotations(u_0, g_2);
  return(t);
}
ATerm REF_2_0 (ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL,w_0 = NULL,y_0 = NULL;
  c_3 = t;
  if(match_cons(t, sym_REF_2))
    {
      u_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_3);
  t_2 = t;
  t = u_2;
  t = u_62(t);
  z_2 = t;
  t = y_2;
  t = v_62(t);
  a_3 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_REF_2, z_2, a_3);
  w_0 = t;
  t = SSLsetAnnotations(w_0, t_2);
  return(t);
}
ATerm LBL_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,g_4 = NULL,p_4 = NULL,e_5 = NULL,z_0 = NULL,a_1 = NULL;
  e_5 = t;
  if(match_cons(t, sym_LBL_2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_5);
  i_3 = t;
  t = j_3;
  t = s_62(t);
  g_4 = t;
  t = k_3;
  t = t_62(t);
  p_4 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_LBL_2, g_4, p_4);
  z_0 = t;
  t = SSLsetAnnotations(z_0, i_3);
  return(t);
}
ATerm R_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,d_6 = NULL,k_6 = NULL,l_6 = NULL,b_1 = NULL,c_1 = NULL;
  l_6 = t;
  if(match_cons(t, sym_R_2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  x_5 = t;
  t = y_5;
  t = g_63(t);
  d_6 = t;
  t = z_5;
  t = h_63(t);
  k_6 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_R_2, d_6, k_6);
  b_1 = t;
  t = SSLsetAnnotations(b_1, x_5);
  return(t);
}
ATerm AR_1_0 (ATerm k_63 (ATerm), ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,u_6 = NULL,v_6 = NULL,g_1 = NULL,h_1 = NULL;
  v_6 = t;
  if(match_cons(t, sym_AR_1))
    {
      s_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_6);
  r_6 = t;
  t = s_6;
  t = k_63(t);
  u_6 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_AR_1, u_6);
  g_1 = t;
  t = SSLsetAnnotations(g_1, r_6);
  return(t);
}
ATerm AC_1_0 (ATerm j_63 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,n_7 = NULL,q_7 = NULL,r_7 = NULL,i_1 = NULL,j_1 = NULL;
  r_7 = t;
  if(match_cons(t, sym_AC_1))
    {
      n_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_7);
  g_7 = t;
  t = n_7;
  t = j_63(t);
  q_7 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_AC_1, q_7);
  i_1 = t;
  t = SSLsetAnnotations(i_1, g_7);
  return(t);
}
ATerm AL_1_0 (ATerm i_63 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,m_8 = NULL,n_8 = NULL,q_8 = NULL,k_1 = NULL,l_1 = NULL;
  q_8 = t;
  if(match_cons(t, sym_AL_1))
    {
      m_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_8);
  h_8 = t;
  t = m_8;
  t = i_63(t);
  n_8 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_AL_1, n_8);
  k_1 = t;
  t = SSLsetAnnotations(k_1, h_8);
  return(t);
}
ATerm AOPTIONS_1_0 (ATerm l_63 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,l_9 = NULL,m_1 = NULL,o_1 = NULL;
  l_9 = t;
  if(match_cons(t, sym_AOPTIONS_1))
    {
      v_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_9);
  u_8 = t;
  t = v_8;
  t = l_63(t);
  w_8 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_AOPTIONS_1, w_8);
  m_1 = t;
  t = SSLsetAnnotations(m_1, u_8);
  return(t);
}
ATerm A_3_0 (ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm f_63 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,w_9 = NULL,z_9 = NULL,b_10 = NULL,e_10 = NULL,g_10 = NULL,k_10 = NULL,l_10 = NULL,p_1 = NULL,s_1 = NULL;
  l_10 = t;
  if(match_cons(t, sym_A_3))
    {
      w_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
      b_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_10);
  s_9 = t;
  t = w_9;
  t = d_63(t);
  e_10 = t;
  t = z_9;
  t = e_63(t);
  g_10 = t;
  t = b_10;
  t = f_63(t);
  k_10 = t;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_A_3, e_10, g_10, k_10);
  p_1 = t;
  t = SSLsetAnnotations(p_1, s_9);
  return(t);
}
ATerm FFID_2_0 (ATerm y_62 (ATerm), ATerm z_62 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,t_1 = NULL,u_1 = NULL;
  g_11 = t;
  if(match_cons(t, sym_FFID_2))
    {
      c_11 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_11);
  q_10 = t;
  t = c_11;
  t = y_62(t);
  e_11 = t;
  t = d_11;
  t = z_62(t);
  f_11 = t;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_FFID_2, e_11, f_11);
  t_1 = t;
  t = SSLsetAnnotations(t_1, q_10);
  return(t);
}
ATerm FNAT_2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,b_12 = NULL,c_2 = NULL,e_2 = NULL;
  b_12 = t;
  if(match_cons(t, sym_FNAT_2))
    {
      m_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_12);
  l_11 = t;
  t = m_11;
  t = w_62(t);
  q_11 = t;
  t = p_11;
  t = x_62(t);
  r_11 = t;
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_FNAT_2, q_11, r_11);
  c_2 = t;
  t = SSLsetAnnotations(c_2, l_11);
  return(t);
}
ATerm F_1_0 (ATerm a_63 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,f_2 = NULL,k_2 = NULL;
  n_12 = t;
  if(match_cons(t, sym_F_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  j_12 = t;
  t = l_12;
  t = a_63(t);
  m_12 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_F_1, m_12);
  f_2 = t;
  t = SSLsetAnnotations(f_2, j_12);
  return(t);
}
ATerm FBOX_2_0 (ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,e_13 = NULL,g_13 = NULL,n_2 = NULL,p_2 = NULL;
  g_13 = t;
  if(match_cons(t, sym_FBOX_2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_13);
  w_12 = t;
  t = x_12;
  t = b_63(t);
  z_12 = t;
  t = y_12;
  t = c_63(t);
  e_13 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_FBOX_2, z_12, e_13);
  n_2 = t;
  t = SSLsetAnnotations(n_2, w_12);
  return(t);
}
ATerm ALT_2_0 (ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,w_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,r_2 = NULL,s_2 = NULL;
  b_14 = t;
  if(match_cons(t, sym_ALT_2))
    {
      t_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_14);
  s_13 = t;
  t = t_13;
  t = m_63(t);
  z_13 = t;
  t = w_13;
  t = n_63(t);
  a_14 = t;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym_ALT_2, z_13, a_14);
  r_2 = t;
  t = SSLsetAnnotations(r_2, s_13);
  return(t);
}
ATerm HV_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,q_14 = NULL,r_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,v_2 = NULL,w_2 = NULL;
  w_14 = t;
  if(match_cons(t, sym_HV_2))
    {
      q_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_14);
  m_14 = t;
  t = q_14;
  t = s_63(t);
  u_14 = t;
  t = r_14;
  t = t_63(t);
  v_14 = t;
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym_HV_2, u_14, v_14);
  v_2 = t;
  t = SSLsetAnnotations(v_2, m_14);
  return(t);
}
ATerm V_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,n_15 = NULL,x_15 = NULL,z_15 = NULL,c_16 = NULL,d_16 = NULL,x_2 = NULL,b_3 = NULL;
  d_16 = t;
  if(match_cons(t, sym_V_2))
    {
      n_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_16);
  f_15 = t;
  t = n_15;
  t = q_63(t);
  z_15 = t;
  t = x_15;
  t = r_63(t);
  c_16 = t;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_V_2, z_15, c_16);
  x_2 = t;
  t = SSLsetAnnotations(x_2, f_15);
  return(t);
}
ATerm H_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,y_16 = NULL,d_3 = NULL,e_3 = NULL;
  y_16 = t;
  if(match_cons(t, sym_H_2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  i_16 = t;
  t = l_16;
  t = o_63(t);
  n_16 = t;
  t = m_16;
  t = p_63(t);
  o_16 = t;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, n_16, o_16);
  d_3 = t;
  t = SSLsetAnnotations(d_3, i_16);
  return(t);
}
ATerm S_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,e_18 = NULL,l_18 = NULL,u_18 = NULL,f_3 = NULL,g_3 = NULL;
  u_18 = t;
  if(match_cons(t, sym_S_1))
    {
      e_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_18);
  x_17 = t;
  t = e_18;
  t = i_62(t);
  l_18 = t;
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, l_18);
  f_3 = t;
  t = SSLsetAnnotations(f_3, x_17);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  t = SSL_is_string(x_18);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = map_1_0(j_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = map_1_0(Box_0_0, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = SOpt_2_0(k_4, l_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm d_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = d_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  t = SSL_is_string(y_18);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = map_1_0(o_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = map_1_0(Box_0_0, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = SOpt_2_0(q_4, r_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm j_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = j_10;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm z_18 = NULL;
  z_18 = t;
  t = SSL_is_string(z_18);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = map_1_0(u_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = map_1_0(Box_0_0, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = SOpt_2_0(v_4, w_4, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm p_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = p_10;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_is_string(a_19);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F_1_0(y_4, t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_KW_0)))
              _fail(t);
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_VAR_0)))
                    _fail(t);
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
                        if(!(match_cons(t, sym_NUM_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(b_11);
                      }
                    else
                      {
                        t = a_11;
                        if(!(match_cons(t, sym_MATH_0)))
                          _fail(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = map_1_0(z_4, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FNAT_2_0(a_5, b_5, t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      t = FFID_2_0(c_5, d_5, t);
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_FN_0)))
        _fail(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_FM_0)))
              _fail(t);
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm s_11 = t;
              int t_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_SE_0)))
                    _fail(t);
                  ;
                  LocalPopChoice(t_11);
                }
              else
                {
                  t = s_11;
                  {
                    ATerm u_11 = t;
                    int v_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_SH_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(v_11);
                      }
                    else
                      {
                        t = u_11;
                        {
                          ATerm w_11 = t;
                          int x_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_SZ_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(x_11);
                            }
                          else
                            {
                              t = w_11;
                              if(!(match_cons(t, sym_CL_0)))
                                _fail(t);
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
ATerm b_5 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  t = SSL_is_string(b_19);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_FN_0)))
        _fail(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm a_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_FM_0)))
              _fail(t);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = a_12;
            {
              ATerm d_12 = t;
              int e_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_SE_0)))
                    _fail(t);
                  ;
                  LocalPopChoice(e_12);
                }
              else
                {
                  t = d_12;
                  {
                    ATerm f_12 = t;
                    int g_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_SH_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(g_12);
                      }
                    else
                      {
                        t = f_12;
                        {
                          ATerm h_12 = t;
                          int i_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_SZ_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(i_12);
                            }
                          else
                            {
                              t = h_12;
                              if(!(match_cons(t, sym_CL_0)))
                                _fail(t);
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
ATerm d_5 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  t = SSL_is_string(c_19);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = AOPTIONS_1_0(i_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = map_1_0(w_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = map_1_0(Box_0_0, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = map_1_0(j_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm k_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1_0(k_5, t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = k_12;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AC_1_0(o_5, t);
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = AR_1_0(s_5, t);
          }
      }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = map_1_0(l_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = SOpt_2_0(m_5, n_5, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm p_0 = NULL;
  p_0 = t;
  t = SSL_is_string(p_0);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = map_1_0(p_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = SOpt_2_0(q_5, r_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm v_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = v_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm r_0 = NULL;
  r_0 = t;
  t = SSL_is_string(r_0);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = map_1_0(t_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = SOpt_2_0(u_5, v_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm d_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = d_13;
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  t = SSL_is_string(t_0);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = SOpt_2_0(a_6, b_6, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_is_string(g_19);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = map_1_0(f_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = map_1_0(Box_0_0, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = SOpt_2_0(g_6, h_6, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  t = SSL_is_string(h_19);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm i_19 = NULL;
  i_19 = t;
  t = SSL_is_string(i_19);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  t = SSL_is_string(j_19);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = map_1_0(o_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = map_1_0(Box_0_0, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = SOpt_2_0(p_6, q_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm r_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_VS_0)))
        _fail(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = r_13;
      {
        ATerm v_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_HS_0)))
              _fail(t);
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = v_13;
            if(!(match_cons(t, sym_IS_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  t = SSL_is_string(k_19);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm Box_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1_0(f_4, t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = H_2_0(h_4, i_4, t);
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            {
              ATerm g_14 = t;
              int h_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = V_2_0(m_4, n_4, t);
                  ;
                  LocalPopChoice(h_14);
                }
              else
                {
                  t = g_14;
                  {
                    ATerm i_14 = t;
                    int j_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = HV_2_0(s_4, t_4, t);
                        ;
                        LocalPopChoice(j_14);
                      }
                    else
                      {
                        t = i_14;
                        {
                          ATerm k_14 = t;
                          int l_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2_0(Box_0_0, Box_0_0, t);
                              ;
                              LocalPopChoice(l_14);
                            }
                          else
                            {
                              t = k_14;
                              {
                                ATerm n_14 = t;
                                int o_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = FBOX_2_0(x_4, Box_0_0, t);
                                    ;
                                    LocalPopChoice(o_14);
                                  }
                                else
                                  {
                                    t = n_14;
                                    {
                                      ATerm p_14 = t;
                                      int s_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = A_3_0(f_5, g_5, h_5, t);
                                          ;
                                          LocalPopChoice(s_14);
                                        }
                                      else
                                        {
                                          t = p_14;
                                          {
                                            ATerm t_14 = t;
                                            int x_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = R_2_0(c_6, e_6, t);
                                                ;
                                                LocalPopChoice(x_14);
                                              }
                                            else
                                              {
                                                t = t_14;
                                                {
                                                  ATerm y_14 = t;
                                                  int z_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LBL_2_0(i_6, Box_0_0, t);
                                                      ;
                                                      LocalPopChoice(z_14);
                                                    }
                                                  else
                                                    {
                                                      t = y_14;
                                                      {
                                                        ATerm a_15 = t;
                                                        int b_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = REF_2_0(j_6, Box_0_0, t);
                                                            ;
                                                            LocalPopChoice(b_15);
                                                          }
                                                        else
                                                          {
                                                            t = a_15;
                                                            {
                                                              ATerm c_15 = t;
                                                              int d_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = C_2_0(m_6, n_6, t);
                                                                  ;
                                                                  LocalPopChoice(d_15);
                                                                }
                                                              else
                                                                {
                                                                  t = c_15;
                                                                  {
                                                                    ATerm e_15 = t;
                                                                    int g_15 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = L_2_0(Box_0_0, Box_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(g_15);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_15;
                                                                        {
                                                                          ATerm h_15 = t;
                                                                          int i_15 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              ;
                                                                              LocalPopChoice(i_15);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_15;
                                                                              t = debug_1_0(t_6, t);
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
    }
  return(t);
}
ATerm _2_0 (ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,h_3 = NULL,l_3 = NULL;
  q_19 = t;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  l_19 = t;
  t = m_19;
  t = r_57(t);
  o_19 = t;
  t = n_19;
  t = s_57(t);
  p_19 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_19, p_19);
  h_3 = t;
  t = SSLsetAnnotations(h_3, l_19);
  return(t);
}
ATerm t_3 (ATerm p_24, ATerm q_24, ATerm t)
{
  ATerm t_19 = NULL;
  t = SSL_fputc(p_24, q_24);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_19);
  return(t);
}
ATerm u_3 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm u_19 = NULL;
  t = SSL_write_term_to_stream_text(o_48, p_48);
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_19);
  return(t);
}
ATerm w_3 (ATerm k_88 (ATerm), ATerm h_449, ATerm s_48, ATerm t)
{
  ATerm v_19 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_449, term_j_15);
  t = open_stream_0_0(t);
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_19, s_48);
  t = k_88(t);
  t = fclose_0_0(t);
  t = s_48;
  return(t);
}
ATerm v_3 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm w_19 = NULL;
  t = SSL_write_term_to_stream_baf(k_48, l_48);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_19);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = fetch_1_0(b_7, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(c_7, a_20, b_20, t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if(match_cons(k_15, sym_Stream_1))
        {
          c_20 = ATgetArgument(k_15, 0);
        }
      else
        _fail(t);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(c_20, d_20, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(e_7, e_20, f_20, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym_Stream_1))
        {
          h_20 = ATgetArgument(l_15, 0);
        }
      else
        _fail(t);
      i_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(h_20, i_20, t);
  g_20 = t;
  t = term_m_15;
  j_20 = t;
  t = g_20;
  if(match_cons(t, sym_Stream_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, g_20);
  t = t_3(j_20, k_20, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm o_15 = t;
      int p_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_6, t);
          ;
          LocalPopChoice(p_15);
        }
      else
        {
          t = o_15;
          t = term_q_15;
          if(((y_19 != NULL) && (y_19 != t)))
            _fail(t);
          else
            y_19 = t;
        }
      return(t);
    }
    t = _2_0(w_6, _id, t);
    t = x_19;
    {
      ATerm y_6 (ATerm t)
      {
        ATerm z_19 = NULL;
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), z_19);
        return(t);
      }
      t = _2_0(_id, y_6, t);
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(z_6, a_7, t);
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            t = _2_0(_id, d_7, t);
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
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  l_20 = t;
  t = dtime_0_0(t);
  t = l_20;
  t = n_89(t);
  m_20 = t;
  t = dtime_0_0(t);
  n_20 = t;
  t = m_20;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_20), (ATerm) ATmakeAppl(sym_Runtime_1, n_20)), p_20);
  return(t);
}
ATerm d_21 (ATerm x_20, ATerm t)
{
  t = SSL_fclose(x_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  b_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_21 = ATgetArgument(t, 0);
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_21);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            t = d_21(b_21, t);
          }
      }
    }
  else
    {
      t = d_21(b_21, t);
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
  ATerm e_21 = NULL;
  t = SSL_fopen(r_24, s_24);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_21 = NULL;
  t = SSL_stdin_stream();
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  t = SSL_stdout_stream();
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_21 = NULL;
  t = SSL_stderr_stream();
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_21);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm r_21 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_21;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  t = SSL_is_string(u_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      ATerm w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL,f_1 = NULL;
        o_21 = t;
        t = SSL_explode_term(o_21);
        if(match_cons(t, sym__2))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_16 = ATgetArgument(t, 1);
              if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
                {
                  f_1 = ATgetFirst((ATermList) e_16);
                  {
                    ATerm f_16 = (ATerm) ATgetNext((ATermList) e_16);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = f_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = f_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = y_15;
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_21 = NULL,q_21 = NULL;
              t = _2_0(f_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_21 = ATgetArgument(t, 0);
                  q_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_3(p_21, q_21, t);
              ;
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              {
                ATerm s_21 = NULL,t_21 = NULL;
                t = _2_0(h_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_21 = ATgetArgument(t, 0);
                    t_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_3(s_21, t_21, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  ATerm k_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_21 = NULL;
      z_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, term_q_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = k_16;
      t = debug_1_0(i_7, t);
      _fail(t);
    }
  w_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(y_21, t);
  x_21 = t;
  t = w_21;
  t = fclose_0_0(t);
  t = x_21;
  return(t);
}
ATerm fetch_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm b_22 (ATerm t)
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_74, _id, t);
        ;
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        t = Cons_2_0(_id, b_22, t);
      }
    return(t);
  }
  t = b_22(t);
  return(t);
}
ATerm s_3 (ATerm p_43, ATerm q_43, ATerm t)
{
  t = SSL_strcat(p_43, q_43);
  return(t);
}
ATerm debug_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  c_22 = t;
  t = i_88(t);
  d_22 = t;
  t = term_x_9;
  e_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_22), d_22);
  f_22 = t;
  t = SSL_printnl(e_22, f_22);
  t = c_22;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL;
      l_22 = t;
      t = SSL_is_string(l_22);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_7, t);
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
              p_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_22 = ATgetArgument(t, 0);
                  t = q_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_22 = ATgetArgument(t, 0);
                      t = q_22;
                      {
                        ATerm b_17 = t;
                        int c_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_17);
                          }
                        else
                          {
                            t = b_17;
                            t = debug_1_0(k_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_22 = NULL,w_22 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_22 = ATgetArgument(t, 0);
                          r_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_22;
                      t = eval_config_0_0(t);
                      v_22 = t;
                      t = r_22;
                      t = eval_config_0_0(t);
                      w_22 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_22, w_22);
                      t = s_3(v_22, w_22, t);
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
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  t = term_d_17;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, z_22);
  t = b_4(a_23, z_22, t);
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL,c_23 = NULL;
        t = eval_config_0_0(t);
        b_23 = t;
        t = term_d_17;
        c_23 = t;
        t = SSL_table_put(c_23, z_22, b_23);
        t = b_23;
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL,f_23 = NULL;
      d_23 = t;
      t = term_i_17;
      t = get_config_0_0(t);
      f_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_23, term_j_17);
      t = geq_0_0(t);
      t = d_23;
      t = i_86(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  if(match_string(t, "-k"))
    {
      t = h_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_23;
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  t = SSL_string_to_int(i_23);
  j_23 = t;
  t = term_k_17;
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, j_23);
  t = e_4(k_23, j_23, t);
  t = i_23;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_l_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_7, m_7, o_7, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm m_23 = NULL;
  m_23 = t;
  if(match_string(t, "-S"))
    {
      t = m_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_23;
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  t = term_i_17;
  n_23 = t;
  t = term_m_17;
  o_23 = t;
  t = term_n_17;
  t = e_4(n_23, o_23, t);
  t = term_o_17;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  t = SSL_string_to_int(p_23);
  q_23 = t;
  t = term_i_17;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, q_23);
  t = e_4(r_23, q_23, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_23);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  t = term_r_17;
  s_23 = t;
  t = term_v_9;
  t_23 = t;
  t = term_s_17;
  t = e_4(s_23, t_23, t);
  t = term_t_17;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_7, s_7, t_7, t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_7, v_7, w_7, t);
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            t = Option_3_0(x_7, y_7, z_7, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm d_47, ATerm e_47, ATerm t)
{
  ATerm u_23 = NULL;
  t = term_d_17;
  u_23 = t;
  t = SSL_table_put(u_23, d_47, e_47);
  t = (ATerm) ATmakeAppl(sym__3, term_d_17, d_47, e_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
      t = term_v_9;
      t = d_0(t);
      z_23 = t;
      t = term_a_18;
      a_24 = t;
      t = term_b_18;
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_18, term_b_18, z_23);
      t = c_4(a_24, b_24, z_23, t);
      _fail(t);
    }
  else
    {
      ATerm e_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_23 = ATgetFirst((ATermList) t);
          y_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_23;
      t = a_0(t);
      t = term_v_9;
      t = c_0(t);
      e_24 = t;
      t = (ATerm) ATinsert(CheckATermList(y_23), e_24);
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  if(match_string(t, "-o"))
    {
      t = g_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_24;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  h_24 = t;
  t = term_c_18;
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, h_24);
  t = e_4(i_24, h_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_24);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_8, b_8, c_8, t);
  return(t);
}
ATerm c_4 (ATerm y_36, ATerm z_36, ATerm x_36, ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_18 = ATgetArgument(t, 0);
            ATerm i_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        t = b_4(y_36, z_36, t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = (ATerm) ATempty;
      }
    l_24 = t;
    t = (ATerm) ATinsert(CheckATermList(l_24), x_36);
    m_24 = t;
    t = SSL_table_put(y_36, z_36, m_24);
    t = k_24;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
      t = term_v_9;
      t = j_0(t);
      d_25 = t;
      t = term_a_18;
      e_25 = t;
      t = term_b_18;
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_18, term_b_18, d_25);
      t = c_4(e_25, f_25, d_25, t);
      _fail(t);
    }
  else
    {
      ATerm j_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_24 = ATgetFirst((ATermList) t);
          a_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_25 = ATgetFirst((ATermList) t);
          c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_24;
      t = h_0(t);
      t = b_25;
      t = i_0(t);
      j_25 = t;
      t = (ATerm) ATinsert(CheckATermList(c_25), j_25);
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  if(match_string(t, "-i"))
    {
      t = l_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_25;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  m_25 = t;
  t = term_j_18;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_18, m_25);
  t = e_4(n_25, m_25, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_25);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_8, e_8, f_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_9;
  t = whoami_0_0(t);
  o_25 = t;
  t = term_x_9;
  p_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_18), o_25);
  q_25 = t;
  t = SSL_printnl(p_25, q_25);
  t = term_c_10;
  r_25 = t;
  t = SSL_exit(r_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm c_35, ATerm d_35, ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_35, d_35);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      t = SSL_addr(c_35, d_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_81(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm u_25 = NULL,v_25 = NULL,y_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_25 = ATgetFirst((ATermList) t);
            v_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_25;
        t = foldr_2_0(a_81, b_81, t);
        y_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_25, y_25);
        t = b_81(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(l_2, m_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_26 = NULL,w_1 = NULL,z_1 = NULL;
  t = times_0_0(t);
  w_1 = t;
  t = SSL_explode_term(w_1);
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
  t = foldr_2_0(g_8, i_8, t);
  b_26 = t;
  t = SSL_TicksToSeconds(b_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_26;
        if((n_26 != t))
          {
            _fail(t);
          }
        t = m_26;
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATmakeAppl(sym__2, n_26, o_26);
        {
          ATerm w_18 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_26, o_26);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = w_18;
              t = SSL_gtr(n_26, o_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_26, o_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_26 = NULL,t_26 = NULL;
      r_26 = t;
      t = term_i_17;
      t = get_config_0_0(t);
      t_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_26, term_c_10);
      t = geq_0_0(t);
      t = r_26;
      t = h_86(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  t = run_time_0_0(t);
  v_26 = t;
  t = term_v_9;
  t = whoami_0_0(t);
  w_26 = t;
  t = term_x_9;
  x_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_19), v_26), term_r_19), w_26);
  y_26 = t;
  t = SSL_printnl(x_26, y_26);
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_19), v_26), term_r_19), w_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_17;
  z_26 = t;
  t = SSL_exit(z_26);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      t = fetch_1_0(k_8, t);
    }
  t = l_90(t);
  return(t);
}
ATerm map_1_0 (ATerm i_74 (ATerm), ATerm t)
{
  ATerm a_27 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = Cons_2_0(i_74, a_27, t);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      f_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_27 = NULL,k_27 = NULL;
        t = f_27;
        t = g_0(t);
        j_27 = t;
        t = e_27;
        t = e_0(t);
        k_27 = t;
        t = f_27;
        {
          ATerm l_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_27), k_27);
            return(t);
          }
          t = reverse_acc_2_0(e_0, l_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_9;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_table_get(p_38, q_38);
  return(t);
}
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,m_3 = NULL,o_3 = NULL;
  o_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_27);
  l_27 = t;
  t = m_27;
  t = y_68(t);
  n_27 = t;
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_27);
  m_3 = t;
  t = SSLsetAnnotations(m_3, l_27);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_27), term_c_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = fetch_1_0(o_8, t);
    }
  t = term_k_21;
  t = echo_0_0(t);
  t = term_a_18;
  r_27 = t;
  t = term_b_18;
  s_27 = t;
  t = term_l_21;
  t = b_4(r_27, s_27, t);
  t = reverse_acc_2_0(_id, p_8, t);
  t = map_1_0(r_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,p_3 = NULL,q_3 = NULL;
  x_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_27);
  u_27 = t;
  t = v_27;
  t = z_68(t);
  w_27 = t;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_27);
  p_3 = t;
  t = SSLsetAnnotations(p_3, u_27);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_21 = ATgetFirst((ATermList) t);
                ATerm a_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_28;
          }
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = (ATerm) ATinsert(ATempty, b_28);
      }
    c_28 = t;
    t = term_q_15;
    d_28 = t;
    t = SSL_printnl(d_28, c_28);
    t = b_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  t = term_g_22;
  h_28 = t;
  t = term_v_9;
  i_28 = t;
  t = term_h_22;
  t = e_4(h_28, i_28, t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  t = term_g_22;
  j_28 = t;
  t = term_v_9;
  k_28 = t;
  t = term_h_22;
  t = e_4(j_28, k_28, t);
  t = term_j_22;
  l_28 = t;
  t = term_v_9;
  m_28 = t;
  t = term_k_22;
  t = e_4(l_28, m_28, t);
  t = term_m_22;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_8, t_8, x_8, t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = o_22;
      t = Option_3_0(y_8, z_8, a_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_62 (ATerm), ATerm h_62 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,a_4 = NULL,d_4 = NULL;
  s_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_28 = ATgetFirst((ATermList) t);
      p_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_28);
  n_28 = t;
  t = o_28;
  t = g_62(t);
  q_28 = t;
  t = p_28;
  t = h_62(t);
  r_28 = t;
  d_4 = t;
  t = (ATerm) ATinsert(CheckATermList(r_28), q_28);
  a_4 = t;
  t = SSLsetAnnotations(a_4, n_28);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  x_28 = t;
  t = term_n_18;
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_18, x_28);
  t = e_4(y_28, x_28, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_22;
        t = j_92(t);
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
      }
    t = w_28;
    {
      ATerm c_9 (ATerm t)
      {
        ATerm y_22 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_23 = t;
            int l_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_23);
              }
            else
              {
                t = g_23;
                t = j_92(t);
                t = Cons_2_0(_id, c_9, t);
              }
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = y_22;
            {
              ATerm a_29 = NULL,b_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_29 = ATgetFirst((ATermList) t);
                  b_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_29), (ATerm) ATmakeAppl(sym_Undefined_1, a_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_9, c_9, t);
    }
  }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  if(match_string(t, "--help"))
    {
      t = p_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_29;
        }
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  t = term_w_20;
  q_29 = t;
  t = term_v_9;
  r_29 = t;
  t = term_v_23;
  t = e_4(q_29, r_29, t);
  t = term_w_23;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm h_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
  i_29 = t;
  t = term_a_18;
  l_29 = t;
  t = term_b_18;
  m_29 = t;
  t = (ATerm) ATempty;
  n_29 = t;
  t = SSL_table_put(l_29, m_29, n_29);
  t = i_29;
  {
    ATerm d_9 (ATerm t)
    {
      ATerm d_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_92(t);
          ;
          LocalPopChoice(f_24);
        }
      else
        {
          t = d_24;
          {
            ATerm j_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_9, f_9, g_9, t);
                ;
                LocalPopChoice(n_24);
              }
            else
              {
                t = j_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_9, t);
    {
      ATerm o_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_29 = NULL;
          y_29 = t;
          {
            ATerm u_24 = t;
            int v_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_3 = NULL;
                t = y_29;
                {
                  ATerm w_24 = t;
                  int x_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_24);
                    }
                  else
                    {
                      t = w_24;
                      t = fetch_1_0(h_9, t);
                    }
                  t = y_29;
                  t = default_system_usage_0_0(t);
                  t = term_m_17;
                  n_3 = t;
                  t = SSL_exit(n_3);
                }
                ;
                LocalPopChoice(v_24);
              }
            else
              {
                t = u_24;
                {
                  ATerm r_3 = NULL;
                  t = term_g_22;
                  t = get_config_0_0(t);
                  t = y_29;
                  t = default_system_about_0_0(t);
                  t = term_m_17;
                  r_3 = t;
                  t = SSL_exit(r_3);
                }
              }
          }
          ;
          LocalPopChoice(t_24);
        }
      else
        {
          t = o_24;
          {
            ATerm y_24 = t;
            int g_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
                ATerm i_9 (ATerm t)
                {
                  ATerm j_9 (ATerm t)
                  {
                    if(((j_29 != NULL) && (j_29 != t)))
                      _fail(t);
                    else
                      j_29 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_9, t);
                  return(t);
                }
                t = fetch_1_0(i_9, t);
                t = term_x_9;
                z_29 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_29)), term_h_25);
                a_30 = t;
                t = SSL_printnl(z_29, a_30);
                t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_29)), term_h_25));
                t = default_system_usage_0_0(t);
                t = term_c_10;
                b_30 = t;
                t = SSL_exit(b_30);
                ;
                LocalPopChoice(g_25);
              }
            else
              {
                t = y_24;
              }
          }
        }
      k_29 = t;
      t = term_a_18;
      o_29 = t;
      t = SSL_table_destroy(o_29);
      t = k_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  t = parse_options_1_0(n_90, t);
  e_30 = t;
  t = term_i_25;
  f_30 = t;
  t = SSL_table_create(f_30);
  t = term_i_25;
  g_30 = t;
  t = term_k_25;
  h_30 = t;
  t = SSL_table_put(g_30, h_30, e_30);
  t = e_30;
  t = p_90(t);
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_90, t);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm w_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_90(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_25);
            }
          else
            {
              t = w_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = if_verbose2_1_0(r_9, t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  t = term_z_25;
  i_30 = t;
  t = term_v_9;
  j_30 = t;
  t = term_a_26;
  t = e_4(i_30, j_30, t);
  t = term_c_26;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  k_30 = t;
  t = term_n_18;
  t = get_config_0_0(t);
  l_30 = t;
  t = term_x_9;
  m_30 = t;
  t = (ATerm) ATinsert(ATempty, l_30);
  n_30 = t;
  t = SSL_printnl(m_30, n_30);
  t = k_30;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  ATerm k_9 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_89(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm g_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_26);
            }
          else
            {
              t = g_26;
              {
                ATerm i_26 = t;
                int j_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_26);
                  }
                else
                  {
                    t = i_26;
                    {
                      ATerm k_26 = t;
                      int l_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_9, p_9, q_9, t);
                          ;
                          LocalPopChoice(l_26);
                        }
                      else
                        {
                          t = k_26;
                          {
                            ATerm p_26 = t;
                            int q_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_26);
                              }
                            else
                              {
                                t = p_26;
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
  ATerm n_9 (ATerm t)
  {
    ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
    o_30 = t;
    {
      ATerm s_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_30 != NULL) && (p_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_9, t);
          ;
          LocalPopChoice(u_26);
        }
      else
        {
          t = s_26;
          t = term_b_27;
          p_30 = t;
        }
      t = not_null(p_30);
      t = ReadFromFile_0_0(t);
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_30, q_30);
      t = apply_strategy_1_0(w_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_9, y_89, m_9, n_9, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = _2_0(_id, Box_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_9, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_S_1;
Symbol sym_NatCon_1;
Symbol sym_plus_1;
Symbol sym_minus_1;
Symbol sym_L_2;
Symbol sym_LNAT_2;
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
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
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
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_m_15;
ATerm term_c_15;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_x_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_z_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
void init_constant_terms (void)
{
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_t_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_t_8);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_t_8);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_t_8);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__3, term_e_13, term_h_13, (ATerm) ATempty);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm L_2 (ATerm, ATerm m_48 (ATerm), ATerm n_48 (ATerm));
ATerm list_1 (ATerm, ATerm u_59 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm u_49 (ATerm), ATerm v_49 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm q_48 (ATerm), ATerm r_48 (ATerm));
ATerm REF_2 (ATerm, ATerm u_48 (ATerm), ATerm v_48 (ATerm));
ATerm LBL_2 (ATerm, ATerm s_48 (ATerm), ATerm t_48 (ATerm));
ATerm R_2 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm AR_1 (ATerm, ATerm k_49 (ATerm));
ATerm AC_1 (ATerm, ATerm j_49 (ATerm));
ATerm AL_1 (ATerm, ATerm i_49 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm AOPTIONS_1 (ATerm, ATerm l_49 (ATerm));
ATerm A_3 (ATerm, ATerm d_49 (ATerm), ATerm e_49 (ATerm), ATerm f_49 (ATerm));
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm FN_0 (ATerm);
ATerm Font_Param_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm y_48 (ATerm), ATerm z_48 (ATerm));
ATerm FNAT_2 (ATerm, ATerm w_48 (ATerm), ATerm x_48 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm a_49 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm b_49 (ATerm), ATerm c_49 (ATerm));
ATerm ALT_2 (ATerm, ATerm m_49 (ATerm), ATerm n_49 (ATerm));
ATerm HV_2 (ATerm, ATerm s_49 (ATerm), ATerm t_49 (ATerm));
ATerm V_2 (ATerm, ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm H_2 (ATerm, ATerm o_49 (ATerm), ATerm p_49 (ATerm));
ATerm S_1 (ATerm, ATerm i_48 (ATerm));
ATerm Box_0 (ATerm);
ATerm abox_format_0 (ATerm);
ATerm _2 (ATerm, ATerm x_46 (ATerm), ATerm y_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_60 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_72 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_74 (ATerm));
ATerm debug_1 (ATerm, ATerm f_55 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_69 (ATerm), ATerm z_69 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_66 (ATerm), ATerm h_66 (ATerm));
ATerm crush_2 (ATerm, ATerm e_65 (ATerm), ATerm f_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_72 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_76 (ATerm));
ATerm map_1 (ATerm, ATerm s_59 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_76 (ATerm));
ATerm Program_1 (ATerm, ATerm s_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_55 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_76 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_48 (ATerm), ATerm h_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_76 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_76 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm u_74 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_74 (ATerm));
ATerm io_abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm L_2 (ATerm t, ATerm m_48 (ATerm), ATerm n_48 (ATerm))
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
  b_1 = t;
  x_0 :
  if(match_cons(b_1, sym_L_2))
    {
      c_1 = ATgetArgument(b_1, 0);
      d_1 = ATgetArgument(b_1, 1);
      {
        ATerm z_3 = NULL,b_4 = NULL;
        ATerm a_4 = NULL;
        t = SSLgetAnnotations(not_null(b_1));
        {
          a_4 = t;
          if(((z_3 != NULL) && (z_3 != a_4)))
            _fail(a_4);
          else
            z_3 = a_4;
        }
        {
          t = not_null(c_1);
          {
            ATerm g_4 = NULL;
            t = m_48(t);
            {
              b_4 = t;
              {
                t = not_null(d_1);
                {
                  ATerm l_4 = NULL;
                  t = n_48(t);
                  {
                    g_4 = t;
                    {
                      ATerm m_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(b_4), not_null(g_4)), not_null(z_3));
                      {
                        m_4 = t;
                        if(((l_4 != NULL) && (l_4 != m_4)))
                          _fail(m_4);
                        else
                          l_4 = m_4;
                      }
                      t = not_null(l_4);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm w_3 = t;
    int x_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_3);
      }
    else
      {
        t = w_3;
        t = Cons_2(t, u_59, y_4);
      }
    return(t);
  }
  t = y_4(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  f_5 :
  if(match_cons(j_5, sym_IS_0))
    {
      ATerm l_5 = NULL,q_5 = NULL;
      ATerm y_3;
      y_3 = t;
      {
        ATerm p_5 = NULL;
        t = SSLgetAnnotations(not_null(j_5));
        {
          p_5 = t;
          if(((l_5 != NULL) && (l_5 != p_5)))
            _fail(p_5);
          else
            l_5 = p_5;
        }
      }
      t = y_3;
      {
        ATerm r_5 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(l_5));
        {
          r_5 = t;
          if(((q_5 != NULL) && (q_5 != r_5)))
            _fail(r_5);
          else
            q_5 = r_5;
        }
        t = not_null(q_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_HS_0))
    {
      ATerm s_9 = NULL,u_9 = NULL;
      ATerm c_4;
      c_4 = t;
      {
        ATerm t_9 = NULL;
        t = SSLgetAnnotations(not_null(g_9));
        {
          t_9 = t;
          if(((s_9 != NULL) && (s_9 != t_9)))
            _fail(t_9);
          else
            s_9 = t_9;
        }
      }
      t = c_4;
      {
        ATerm y_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(s_9));
        {
          y_9 = t;
          if(((u_9 != NULL) && (u_9 != y_9)))
            _fail(y_9);
          else
            u_9 = y_9;
        }
        t = not_null(u_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_VS_0))
    {
      ATerm i_10 = NULL,k_10 = NULL;
      ATerm d_4;
      d_4 = t;
      {
        ATerm j_10 = NULL;
        t = SSLgetAnnotations(not_null(g_10));
        {
          j_10 = t;
          if(((i_10 != NULL) && (i_10 != j_10)))
            _fail(j_10);
          else
            i_10 = j_10;
        }
      }
      t = d_4;
      {
        ATerm l_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(i_10));
        {
          l_10 = t;
          if(((k_10 != NULL) && (k_10 != l_10)))
            _fail(l_10);
          else
            k_10 = l_10;
        }
        t = not_null(k_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Space_Symbol_0 (ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = VS_0(t);
      ;
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
        ATerm h_4 = t;
        int i_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HS_0(t);
            ;
            LocalPopChoice(i_4);
          }
        else
          {
            t = h_4;
            t = IS_0(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm u_49 (ATerm), ATerm v_49 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_SOpt_2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      {
        ATerm b_11 = NULL,d_11 = NULL;
        ATerm c_11 = NULL;
        t = SSLgetAnnotations(not_null(v_10));
        {
          c_11 = t;
          if(((b_11 != NULL) && (b_11 != c_11)))
            _fail(c_11);
          else
            b_11 = c_11;
        }
        {
          t = not_null(w_10);
          {
            ATerm f_11 = NULL;
            t = u_49(t);
            {
              d_11 = t;
              {
                t = not_null(x_10);
                {
                  ATerm h_11 = NULL;
                  t = v_49(t);
                  {
                    f_11 = t;
                    {
                      ATerm i_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(d_11), not_null(f_11)), not_null(b_11));
                      {
                        i_11 = t;
                        if(((h_11 != NULL) && (h_11 != i_11)))
                          _fail(i_11);
                        else
                          h_11 = i_11;
                      }
                      t = not_null(h_11);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm S_Option_0 (ATerm t)
{
  t = SOpt_2(t, Space_Symbol_0, is_string_0);
  return(t);
}
ATerm C_2 (ATerm t, ATerm q_48 (ATerm), ATerm r_48 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_C_2))
    {
      v_11 = ATgetArgument(u_11, 0);
      w_11 = ATgetArgument(u_11, 1);
      {
        ATerm a_12 = NULL,c_12 = NULL;
        ATerm b_12 = NULL;
        t = SSLgetAnnotations(not_null(u_11));
        {
          b_12 = t;
          if(((a_12 != NULL) && (a_12 != b_12)))
            _fail(b_12);
          else
            a_12 = b_12;
        }
        {
          t = not_null(v_11);
          {
            ATerm e_12 = NULL;
            t = q_48(t);
            {
              c_12 = t;
              {
                t = not_null(w_11);
                {
                  ATerm g_12 = NULL;
                  t = r_48(t);
                  {
                    e_12 = t;
                    {
                      ATerm h_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(c_12), not_null(e_12)), not_null(a_12));
                      {
                        h_12 = t;
                        if(((g_12 != NULL) && (g_12 != h_12)))
                          _fail(h_12);
                        else
                          g_12 = h_12;
                      }
                      t = not_null(g_12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm REF_2 (ATerm t, ATerm u_48 (ATerm), ATerm v_48 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_REF_2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        ATerm z_12 = NULL,b_13 = NULL;
        ATerm a_13 = NULL;
        t = SSLgetAnnotations(not_null(t_12));
        {
          a_13 = t;
          if(((z_12 != NULL) && (z_12 != a_13)))
            _fail(a_13);
          else
            z_12 = a_13;
        }
        {
          t = not_null(u_12);
          {
            ATerm d_13 = NULL;
            t = u_48(t);
            {
              b_13 = t;
              {
                t = not_null(v_12);
                {
                  ATerm f_13 = NULL;
                  t = v_48(t);
                  {
                    d_13 = t;
                    {
                      ATerm g_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_REF_2, not_null(b_13), not_null(d_13)), not_null(z_12));
                      {
                        g_13 = t;
                        if(((f_13 != NULL) && (f_13 != g_13)))
                          _fail(g_13);
                        else
                          f_13 = g_13;
                      }
                      t = not_null(f_13);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LBL_2 (ATerm t, ATerm s_48 (ATerm), ATerm t_48 (ATerm))
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym_LBL_2))
    {
      t_13 = ATgetArgument(s_13, 0);
      u_13 = ATgetArgument(s_13, 1);
      {
        ATerm y_13 = NULL,a_14 = NULL;
        ATerm z_13 = NULL;
        t = SSLgetAnnotations(not_null(s_13));
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        {
          t = not_null(t_13);
          {
            ATerm c_14 = NULL;
            t = s_48(t);
            {
              a_14 = t;
              {
                t = not_null(u_13);
                {
                  ATerm e_14 = NULL;
                  t = t_48(t);
                  {
                    c_14 = t;
                    {
                      ATerm f_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LBL_2, not_null(a_14), not_null(c_14)), not_null(y_13));
                      {
                        f_14 = t;
                        if(((e_14 != NULL) && (e_14 != f_14)))
                          _fail(f_14);
                        else
                          e_14 = f_14;
                      }
                      t = not_null(e_14);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym_R_2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      {
        ATerm x_14 = NULL,z_14 = NULL;
        ATerm y_14 = NULL;
        t = SSLgetAnnotations(not_null(r_14));
        {
          y_14 = t;
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
        }
        {
          t = not_null(s_14);
          {
            ATerm b_15 = NULL;
            t = g_49(t);
            {
              z_14 = t;
              {
                t = not_null(t_14);
                {
                  ATerm d_15 = NULL;
                  t = h_49(t);
                  {
                    b_15 = t;
                    {
                      ATerm e_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(z_14), not_null(b_15)), not_null(x_14));
                      {
                        e_15 = t;
                        if(((d_15 != NULL) && (d_15 != e_15)))
                          _fail(e_15);
                        else
                          d_15 = e_15;
                      }
                      t = not_null(d_15);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AR_1 (ATerm t, ATerm k_49 (ATerm))
{
  ATerm p_15 = NULL,q_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym_AR_1))
    {
      q_15 = ATgetArgument(p_15, 0);
      {
        ATerm t_15 = NULL,v_15 = NULL;
        ATerm u_15 = NULL;
        t = SSLgetAnnotations(not_null(p_15));
        {
          u_15 = t;
          if(((t_15 != NULL) && (t_15 != u_15)))
            _fail(u_15);
          else
            t_15 = u_15;
        }
        {
          t = not_null(q_15);
          {
            ATerm x_15 = NULL;
            t = k_49(t);
            {
              v_15 = t;
              {
                ATerm y_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(v_15)), not_null(t_15));
                {
                  y_15 = t;
                  if(((x_15 != NULL) && (x_15 != y_15)))
                    _fail(y_15);
                  else
                    x_15 = y_15;
                }
                t = not_null(x_15);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AC_1 (ATerm t, ATerm j_49 (ATerm))
{
  ATerm i_16 = NULL,j_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym_AC_1))
    {
      j_16 = ATgetArgument(i_16, 0);
      {
        ATerm m_16 = NULL,o_16 = NULL;
        ATerm n_16 = NULL;
        t = SSLgetAnnotations(not_null(i_16));
        {
          n_16 = t;
          if(((m_16 != NULL) && (m_16 != n_16)))
            _fail(n_16);
          else
            m_16 = n_16;
        }
        {
          t = not_null(j_16);
          {
            ATerm q_16 = NULL;
            t = j_49(t);
            {
              o_16 = t;
              {
                ATerm r_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(o_16)), not_null(m_16));
                {
                  r_16 = t;
                  if(((q_16 != NULL) && (q_16 != r_16)))
                    _fail(r_16);
                  else
                    q_16 = r_16;
                }
                t = not_null(q_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AL_1 (ATerm t, ATerm i_49 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym_AL_1))
    {
      c_17 = ATgetArgument(b_17, 0);
      {
        ATerm f_17 = NULL,h_17 = NULL;
        ATerm g_17 = NULL;
        t = SSLgetAnnotations(not_null(b_17));
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
        {
          t = not_null(c_17);
          {
            ATerm j_17 = NULL;
            t = i_49(t);
            {
              h_17 = t;
              {
                ATerm k_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(h_17)), not_null(f_17));
                {
                  k_17 = t;
                  if(((j_17 != NULL) && (j_17 != k_17)))
                    _fail(k_17);
                  else
                    j_17 = k_17;
                }
                t = not_null(j_17);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm A_Option_0 (ATerm t)
{
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = list_1(t, S_Option_0);
        return(t);
      }
      t = AL_1(t, b_0);
      ;
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm n_4 = t;
        int o_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, c_0);
            ;
            LocalPopChoice(o_4);
          }
        else
          {
            t = n_4;
            {
              ATerm e_0 (ATerm t)
              {
                t = list_1(t, S_Option_0);
                return(t);
              }
              t = AR_1(t, e_0);
            }
          }
      }
    }
  return(t);
}
ATerm AOPTIONS_1 (ATerm t, ATerm l_49 (ATerm))
{
  ATerm w_17 = NULL,x_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym_AOPTIONS_1))
    {
      x_17 = ATgetArgument(w_17, 0);
      {
        ATerm f_18 = NULL,h_18 = NULL;
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(w_17));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        {
          t = not_null(x_17);
          {
            ATerm j_18 = NULL;
            t = l_49(t);
            {
              h_18 = t;
              {
                ATerm k_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AOPTIONS_1, not_null(h_18)), not_null(f_18));
                {
                  k_18 = t;
                  if(((j_18 != NULL) && (j_18 != k_18)))
                    _fail(k_18);
                  else
                    j_18 = k_18;
                }
                t = not_null(j_18);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm A_3 (ATerm t, ATerm d_49 (ATerm), ATerm e_49 (ATerm), ATerm f_49 (ATerm))
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym_A_3))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      e_19 = ATgetArgument(b_19, 2);
      {
        ATerm j_19 = NULL,l_19 = NULL;
        ATerm k_19 = NULL;
        t = SSLgetAnnotations(not_null(b_19));
        {
          k_19 = t;
          if(((j_19 != NULL) && (j_19 != k_19)))
            _fail(k_19);
          else
            j_19 = k_19;
        }
        {
          t = not_null(c_19);
          {
            ATerm n_19 = NULL;
            t = d_49(t);
            {
              l_19 = t;
              {
                t = not_null(d_19);
                {
                  ATerm s_19 = NULL;
                  t = e_49(t);
                  {
                    n_19 = t;
                    {
                      t = not_null(e_19);
                      {
                        ATerm u_19 = NULL;
                        t = f_49(t);
                        {
                          s_19 = t;
                          {
                            ATerm v_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, not_null(l_19), not_null(n_19), not_null(s_19)), not_null(j_19));
                            {
                              v_19 = t;
                              if(((u_19 != NULL) && (u_19 != v_19)))
                                _fail(v_19);
                              else
                                u_19 = v_19;
                            }
                            t = not_null(u_19);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_MATH_0))
    {
      ATerm i_20 = NULL,k_20 = NULL;
      ATerm p_4;
      p_4 = t;
      {
        ATerm j_20 = NULL;
        t = SSLgetAnnotations(not_null(g_20));
        {
          j_20 = t;
          if(((i_20 != NULL) && (i_20 != j_20)))
            _fail(j_20);
          else
            i_20 = j_20;
        }
      }
      t = p_4;
      {
        ATerm l_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(i_20));
        {
          l_20 = t;
          if(((k_20 != NULL) && (k_20 != l_20)))
            _fail(l_20);
          else
            k_20 = l_20;
        }
        t = not_null(k_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym_NUM_0))
    {
      ATerm v_20 = NULL,x_20 = NULL;
      ATerm q_4;
      q_4 = t;
      {
        ATerm w_20 = NULL;
        t = SSLgetAnnotations(not_null(t_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
      }
      t = q_4;
      {
        ATerm y_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(v_20));
        {
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
        }
        t = not_null(x_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym_VAR_0))
    {
      ATerm i_21 = NULL,k_21 = NULL;
      ATerm r_4;
      r_4 = t;
      {
        ATerm j_21 = NULL;
        t = SSLgetAnnotations(not_null(g_21));
        {
          j_21 = t;
          if(((i_21 != NULL) && (i_21 != j_21)))
            _fail(j_21);
          else
            i_21 = j_21;
        }
      }
      t = r_4;
      {
        ATerm l_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(i_21));
        {
          l_21 = t;
          if(((k_21 != NULL) && (k_21 != l_21)))
            _fail(l_21);
          else
            k_21 = l_21;
        }
        t = not_null(k_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym_KW_0))
    {
      ATerm v_21 = NULL,x_21 = NULL;
      ATerm s_4;
      s_4 = t;
      {
        ATerm w_21 = NULL;
        t = SSLgetAnnotations(not_null(t_21));
        {
          w_21 = t;
          if(((v_21 != NULL) && (v_21 != w_21)))
            _fail(w_21);
          else
            v_21 = w_21;
        }
      }
      t = s_4;
      {
        ATerm y_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(v_21));
        {
          y_21 = t;
          if(((x_21 != NULL) && (x_21 != y_21)))
            _fail(y_21);
          else
            x_21 = y_21;
        }
        t = not_null(x_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym_CL_0))
    {
      ATerm i_22 = NULL,k_22 = NULL;
      ATerm t_4;
      t_4 = t;
      {
        ATerm j_22 = NULL;
        t = SSLgetAnnotations(not_null(g_22));
        {
          j_22 = t;
          if(((i_22 != NULL) && (i_22 != j_22)))
            _fail(j_22);
          else
            i_22 = j_22;
        }
      }
      t = t_4;
      {
        ATerm l_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(i_22));
        {
          l_22 = t;
          if(((k_22 != NULL) && (k_22 != l_22)))
            _fail(l_22);
          else
            k_22 = l_22;
        }
        t = not_null(k_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_SZ_0))
    {
      ATerm v_22 = NULL,x_22 = NULL;
      ATerm u_4;
      u_4 = t;
      {
        ATerm w_22 = NULL;
        t = SSLgetAnnotations(not_null(t_22));
        {
          w_22 = t;
          if(((v_22 != NULL) && (v_22 != w_22)))
            _fail(w_22);
          else
            v_22 = w_22;
        }
      }
      t = u_4;
      {
        ATerm y_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(v_22));
        {
          y_22 = t;
          if(((x_22 != NULL) && (x_22 != y_22)))
            _fail(y_22);
          else
            x_22 = y_22;
        }
        t = not_null(x_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm g_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_SH_0))
    {
      ATerm i_23 = NULL,k_23 = NULL;
      ATerm v_4;
      v_4 = t;
      {
        ATerm j_23 = NULL;
        t = SSLgetAnnotations(not_null(g_23));
        {
          j_23 = t;
          if(((i_23 != NULL) && (i_23 != j_23)))
            _fail(j_23);
          else
            i_23 = j_23;
        }
      }
      t = v_4;
      {
        ATerm l_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(i_23));
        {
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
        t = not_null(k_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_SE_0))
    {
      ATerm v_23 = NULL,x_23 = NULL;
      ATerm w_4;
      w_4 = t;
      {
        ATerm w_23 = NULL;
        t = SSLgetAnnotations(not_null(t_23));
        {
          w_23 = t;
          if(((v_23 != NULL) && (v_23 != w_23)))
            _fail(w_23);
          else
            v_23 = w_23;
        }
      }
      t = w_4;
      {
        ATerm y_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(v_23));
        {
          y_23 = t;
          if(((x_23 != NULL) && (x_23 != y_23)))
            _fail(y_23);
          else
            x_23 = y_23;
        }
        t = not_null(x_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_FM_0))
    {
      ATerm j_24 = NULL,l_24 = NULL;
      ATerm x_4;
      x_4 = t;
      {
        ATerm k_24 = NULL;
        t = SSLgetAnnotations(not_null(h_24));
        {
          k_24 = t;
          if(((j_24 != NULL) && (j_24 != k_24)))
            _fail(k_24);
          else
            j_24 = k_24;
        }
      }
      t = x_4;
      {
        ATerm m_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(j_24));
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
        t = not_null(l_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FN_0 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_FN_0))
    {
      ATerm w_24 = NULL,y_24 = NULL;
      ATerm z_4;
      z_4 = t;
      {
        ATerm x_24 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          x_24 = t;
          if(((w_24 != NULL) && (w_24 != x_24)))
            _fail(x_24);
          else
            w_24 = x_24;
        }
      }
      t = z_4;
      {
        ATerm z_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FN_0), not_null(w_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
        t = not_null(y_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Font_Param_0 (ATerm t)
{
  ATerm a_5 = t;
  int b_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FN_0(t);
      ;
      LocalPopChoice(b_5);
    }
  else
    {
      t = a_5;
      {
        ATerm c_5 = t;
        int d_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FM_0(t);
            ;
            LocalPopChoice(d_5);
          }
        else
          {
            t = c_5;
            {
              ATerm e_5 = t;
              int g_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SE_0(t);
                  ;
                  LocalPopChoice(g_5);
                }
              else
                {
                  t = e_5;
                  {
                    ATerm h_5 = t;
                    int i_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SH_0(t);
                        ;
                        LocalPopChoice(i_5);
                      }
                    else
                      {
                        t = h_5;
                        {
                          ATerm k_5 = t;
                          int m_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SZ_0(t);
                              ;
                              LocalPopChoice(m_5);
                            }
                          else
                            {
                              t = k_5;
                              t = CL_0(t);
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
ATerm FFID_2 (ATerm t, ATerm y_48 (ATerm), ATerm z_48 (ATerm))
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  k_25 :
  if(match_cons(l_25, sym_FFID_2))
    {
      m_25 = ATgetArgument(l_25, 0);
      n_25 = ATgetArgument(l_25, 1);
      {
        ATerm r_25 = NULL,t_25 = NULL;
        ATerm s_25 = NULL;
        t = SSLgetAnnotations(not_null(l_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        {
          t = not_null(m_25);
          {
            ATerm v_25 = NULL;
            t = y_48(t);
            {
              t_25 = t;
              {
                t = not_null(n_25);
                {
                  ATerm x_25 = NULL;
                  t = z_48(t);
                  {
                    v_25 = t;
                    {
                      ATerm y_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(t_25), not_null(v_25)), not_null(r_25));
                      {
                        y_25 = t;
                        if(((x_25 != NULL) && (x_25 != y_25)))
                          _fail(y_25);
                        else
                          x_25 = y_25;
                      }
                      t = not_null(x_25);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FNAT_2 (ATerm t, ATerm w_48 (ATerm), ATerm x_48 (ATerm))
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_FNAT_2))
    {
      l_26 = ATgetArgument(k_26, 0);
      m_26 = ATgetArgument(k_26, 1);
      {
        ATerm q_26 = NULL,s_26 = NULL;
        ATerm r_26 = NULL;
        t = SSLgetAnnotations(not_null(k_26));
        {
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
        }
        {
          t = not_null(l_26);
          {
            ATerm u_26 = NULL;
            t = w_48(t);
            {
              s_26 = t;
              {
                t = not_null(m_26);
                {
                  ATerm w_26 = NULL;
                  t = x_48(t);
                  {
                    u_26 = t;
                    {
                      ATerm x_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FNAT_2, not_null(s_26), not_null(u_26)), not_null(q_26));
                      {
                        x_26 = t;
                        if(((w_26 != NULL) && (w_26 != x_26)))
                          _fail(x_26);
                        else
                          w_26 = x_26;
                      }
                      t = not_null(w_26);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F_Option_0 (ATerm t)
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FNAT_2(t, Font_Param_0, is_string_0);
      ;
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm a_49 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_F_1))
    {
      j_27 = ATgetArgument(i_27, 0);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(j_27);
          {
            ATerm q_27 = NULL;
            t = a_49(t);
            {
              o_27 = t;
              {
                ATerm r_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_F_1, not_null(o_27)), not_null(m_27));
                {
                  r_27 = t;
                  if(((q_27 != NULL) && (q_27 != r_27)))
                    _fail(r_27);
                  else
                    q_27 = r_27;
                }
                t = not_null(q_27);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Font_Operator_0 (ATerm t)
{
  ATerm s_5 = t;
  int t_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        t = list_1(t, F_Option_0);
        return(t);
      }
      t = F_1(t, f_0);
      ;
      LocalPopChoice(t_5);
    }
  else
    {
      t = s_5;
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = KW_0(t);
            ;
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            {
              ATerm w_5 = t;
              int x_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = VAR_0(t);
                  ;
                  LocalPopChoice(x_5);
                }
              else
                {
                  t = w_5;
                  {
                    ATerm y_5 = t;
                    int z_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = NUM_0(t);
                        ;
                        LocalPopChoice(z_5);
                      }
                    else
                      {
                        t = y_5;
                        t = MATH_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm FBOX_2 (ATerm t, ATerm b_49 (ATerm), ATerm c_49 (ATerm))
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym_FBOX_2))
    {
      d_28 = ATgetArgument(c_28, 0);
      e_28 = ATgetArgument(c_28, 1);
      {
        ATerm i_28 = NULL,k_28 = NULL;
        ATerm j_28 = NULL;
        t = SSLgetAnnotations(not_null(c_28));
        {
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
        }
        {
          t = not_null(d_28);
          {
            ATerm m_28 = NULL;
            t = b_49(t);
            {
              k_28 = t;
              {
                t = not_null(e_28);
                {
                  ATerm o_28 = NULL;
                  t = c_49(t);
                  {
                    m_28 = t;
                    {
                      ATerm p_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, not_null(k_28), not_null(m_28)), not_null(i_28));
                      {
                        p_28 = t;
                        if(((o_28 != NULL) && (o_28 != p_28)))
                          _fail(p_28);
                        else
                          o_28 = p_28;
                      }
                      t = not_null(o_28);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ALT_2 (ATerm t, ATerm m_49 (ATerm), ATerm n_49 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  a_29 :
  if(match_cons(b_29, sym_ALT_2))
    {
      c_29 = ATgetArgument(b_29, 0);
      d_29 = ATgetArgument(b_29, 1);
      {
        ATerm h_29 = NULL,j_29 = NULL;
        ATerm i_29 = NULL;
        t = SSLgetAnnotations(not_null(b_29));
        {
          i_29 = t;
          if(((h_29 != NULL) && (h_29 != i_29)))
            _fail(i_29);
          else
            h_29 = i_29;
        }
        {
          t = not_null(c_29);
          {
            ATerm l_29 = NULL;
            t = m_49(t);
            {
              j_29 = t;
              {
                t = not_null(d_29);
                {
                  ATerm n_29 = NULL;
                  t = n_49(t);
                  {
                    l_29 = t;
                    {
                      ATerm o_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, not_null(j_29), not_null(l_29)), not_null(h_29));
                      {
                        o_29 = t;
                        if(((n_29 != NULL) && (n_29 != o_29)))
                          _fail(o_29);
                        else
                          n_29 = o_29;
                      }
                      t = not_null(n_29);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HV_2 (ATerm t, ATerm s_49 (ATerm), ATerm t_49 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_HV_2))
    {
      b_30 = ATgetArgument(a_30, 0);
      c_30 = ATgetArgument(a_30, 1);
      {
        ATerm g_30 = NULL,i_30 = NULL;
        ATerm h_30 = NULL;
        t = SSLgetAnnotations(not_null(a_30));
        {
          h_30 = t;
          if(((g_30 != NULL) && (g_30 != h_30)))
            _fail(h_30);
          else
            g_30 = h_30;
        }
        {
          t = not_null(b_30);
          {
            ATerm k_30 = NULL;
            t = s_49(t);
            {
              i_30 = t;
              {
                t = not_null(c_30);
                {
                  ATerm m_30 = NULL;
                  t = t_49(t);
                  {
                    k_30 = t;
                    {
                      ATerm n_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, not_null(i_30), not_null(k_30)), not_null(g_30));
                      {
                        n_30 = t;
                        if(((m_30 != NULL) && (m_30 != n_30)))
                          _fail(n_30);
                        else
                          m_30 = n_30;
                      }
                      t = not_null(m_30);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm V_2 (ATerm t, ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym_V_2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      {
        ATerm i_31 = NULL,k_31 = NULL;
        ATerm j_31 = NULL;
        t = SSLgetAnnotations(not_null(z_30));
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
        {
          t = not_null(a_31);
          {
            ATerm m_31 = NULL;
            t = q_49(t);
            {
              k_31 = t;
              {
                t = not_null(b_31);
                {
                  ATerm o_31 = NULL;
                  t = r_49(t);
                  {
                    m_31 = t;
                    {
                      ATerm p_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, not_null(k_31), not_null(m_31)), not_null(i_31));
                      {
                        p_31 = t;
                        if(((o_31 != NULL) && (o_31 != p_31)))
                          _fail(p_31);
                        else
                          o_31 = p_31;
                      }
                      t = not_null(o_31);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm H_2 (ATerm t, ATerm o_49 (ATerm), ATerm p_49 (ATerm))
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_cons(b_32, sym_H_2))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      {
        ATerm h_32 = NULL,j_32 = NULL;
        ATerm i_32 = NULL;
        t = SSLgetAnnotations(not_null(b_32));
        {
          i_32 = t;
          if(((h_32 != NULL) && (h_32 != i_32)))
            _fail(i_32);
          else
            h_32 = i_32;
        }
        {
          t = not_null(c_32);
          {
            ATerm l_32 = NULL;
            t = o_49(t);
            {
              j_32 = t;
              {
                t = not_null(d_32);
                {
                  ATerm n_32 = NULL;
                  t = p_49(t);
                  {
                    l_32 = t;
                    {
                      ATerm o_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(j_32), not_null(l_32)), not_null(h_32));
                      {
                        o_32 = t;
                        if(((n_32 != NULL) && (n_32 != o_32)))
                          _fail(o_32);
                        else
                          n_32 = o_32;
                      }
                      t = not_null(n_32);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm S_1 (ATerm t, ATerm i_48 (ATerm))
{
  ATerm c_33 = NULL,d_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym_S_1))
    {
      d_33 = ATgetArgument(c_33, 0);
      {
        ATerm g_33 = NULL,i_33 = NULL;
        ATerm h_33 = NULL;
        t = SSLgetAnnotations(not_null(c_33));
        {
          h_33 = t;
          if(((g_33 != NULL) && (g_33 != h_33)))
            _fail(h_33);
          else
            g_33 = h_33;
        }
        {
          t = not_null(d_33);
          {
            ATerm k_33 = NULL;
            t = i_48(t);
            {
              i_33 = t;
              {
                ATerm l_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(i_33)), not_null(g_33));
                {
                  l_33 = t;
                  if(((k_33 != NULL) && (k_33 != l_33)))
                    _fail(l_33);
                  else
                    k_33 = l_33;
                }
                t = not_null(k_33);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Box_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1(t, is_string_0);
      ;
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
            ATerm m_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            ATerm n_0 (ATerm t)
            {
              t = list_1(t, Box_0);
              return(t);
            }
            t = H_2(t, m_0, n_0);
            ;
            LocalPopChoice(d_6);
          }
        else
          {
            t = c_6;
            {
              ATerm e_6 = t;
              int f_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = list_1(t, S_Option_0);
                    return(t);
                  }
                  ATerm p_0 (ATerm t)
                  {
                    t = list_1(t, Box_0);
                    return(t);
                  }
                  t = V_2(t, o_0, p_0);
                  ;
                  LocalPopChoice(f_6);
                }
              else
                {
                  t = e_6;
                  {
                    ATerm g_6 = t;
                    int h_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_0 (ATerm t)
                        {
                          t = list_1(t, S_Option_0);
                          return(t);
                        }
                        ATerm r_0 (ATerm t)
                        {
                          t = list_1(t, Box_0);
                          return(t);
                        }
                        t = HV_2(t, q_0, r_0);
                        ;
                        LocalPopChoice(h_6);
                      }
                    else
                      {
                        t = g_6;
                        {
                          ATerm i_6 = t;
                          int j_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2(t, Box_0, Box_0);
                              ;
                              LocalPopChoice(j_6);
                            }
                          else
                            {
                              t = i_6;
                              {
                                ATerm k_6 = t;
                                int l_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
                                    ;
                                    LocalPopChoice(l_6);
                                  }
                                else
                                  {
                                    t = k_6;
                                    {
                                      ATerm m_6 = t;
                                      int n_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            ATerm v_0 (ATerm t)
                                            {
                                              t = list_1(t, A_Option_0);
                                              return(t);
                                            }
                                            t = AOPTIONS_1(t, v_0);
                                            return(t);
                                          }
                                          ATerm t_0 (ATerm t)
                                          {
                                            t = list_1(t, S_Option_0);
                                            return(t);
                                          }
                                          ATerm u_0 (ATerm t)
                                          {
                                            t = list_1(t, Box_0);
                                            return(t);
                                          }
                                          t = A_3(t, s_0, t_0, u_0);
                                          ;
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
                                                ATerm w_0 (ATerm t)
                                                {
                                                  t = list_1(t, S_Option_0);
                                                  return(t);
                                                }
                                                ATerm y_0 (ATerm t)
                                                {
                                                  t = list_1(t, Box_0);
                                                  return(t);
                                                }
                                                t = R_2(t, w_0, y_0);
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
                                                      t = LBL_2(t, is_string_0, Box_0);
                                                      ;
                                                      LocalPopChoice(r_6);
                                                    }
                                                  else
                                                    {
                                                      t = q_6;
                                                      {
                                                        ATerm s_6 = t;
                                                        int t_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = REF_2(t, is_string_0, Box_0);
                                                            ;
                                                            LocalPopChoice(t_6);
                                                          }
                                                        else
                                                          {
                                                            t = s_6;
                                                            {
                                                              ATerm u_6 = t;
                                                              int v_6 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, S_Option_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm a_1 (ATerm t)
                                                                  {
                                                                    t = list_1(t, Box_0);
                                                                    return(t);
                                                                  }
                                                                  t = C_2(t, z_0, a_1);
                                                                  ;
                                                                  LocalPopChoice(v_6);
                                                                }
                                                              else
                                                                {
                                                                  t = u_6;
                                                                  {
                                                                    ATerm w_6 = t;
                                                                    int x_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = L_2(t, Box_0, Box_0);
                                                                        ;
                                                                        LocalPopChoice(x_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_6;
                                                                        {
                                                                          ATerm y_6 = t;
                                                                          int z_6 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Nil_0(t);
                                                                              ;
                                                                              LocalPopChoice(z_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_6;
                                                                              {
                                                                                ATerm e_1 (ATerm t)
                                                                                {
                                                                                  t = term_a_7;
                                                                                  return(t);
                                                                                }
                                                                                t = debug_1(t, e_1);
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
    }
  return(t);
}
ATerm abox_format_0 (ATerm t)
{
  t = Box_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm x_46 (ATerm), ATerm y_46 (ATerm))
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
  y_33 = t;
  v_33 :
  if(match_cons(y_33, sym__2))
    {
      z_33 = ATgetArgument(y_33, 0);
      a_34 = ATgetArgument(y_33, 1);
      {
        ATerm f_34 = NULL,h_34 = NULL;
        ATerm g_34 = NULL;
        t = SSLgetAnnotations(not_null(y_33));
        {
          g_34 = t;
          if(((f_34 != NULL) && (f_34 != g_34)))
            _fail(g_34);
          else
            f_34 = g_34;
        }
        {
          t = not_null(z_33);
          {
            ATerm j_34 = NULL;
            t = x_46(t);
            {
              h_34 = t;
              {
                t = not_null(a_34);
                {
                  ATerm l_34 = NULL;
                  t = y_46(t);
                  {
                    j_34 = t;
                    {
                      ATerm m_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_34), not_null(j_34)), not_null(f_34));
                      {
                        m_34 = t;
                        if(((l_34 != NULL) && (l_34 != m_34)))
                          _fail(m_34);
                        else
                          l_34 = m_34;
                      }
                      t = not_null(l_34);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_34 = NULL;
  ATerm b_7;
  b_7 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm y_34 = NULL,z_34 = NULL;
      y_34 = t;
      w_34 :
      if(match_cons(y_34, sym_Program_1))
        {
          z_34 = ATgetArgument(y_34, 0);
          if(((x_34 != NULL) && (x_34 != z_34)))
            _fail(z_34);
          else
            x_34 = z_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(x_34)), term_d_7));
      {
        t = printnl_0(t);
        {
          t = term_f_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  c_35 :
  if(match_cons(d_35, sym__2))
    {
      e_35 = ATgetArgument(d_35, 0);
      f_35 = ATgetArgument(d_35, 1);
      {
        ATerm g_7;
        g_7 = t;
        t = SSL_printnl(not_null(e_35), not_null(f_35));
        t = g_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  t = SSL_implode_string(not_null(k_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
        p_35 = t;
        o_35 :
        if(((ATgetType(p_35) == AT_LIST) && !(ATisEmpty(p_35))))
          {
            q_35 = ATgetFirst((ATermList) p_35);
            r_35 = (ATerm) ATgetNext((ATermList) p_35);
            {
              t = not_null(q_35);
              {
                ATerm g_1 (ATerm t)
                {
                  t = not_null(r_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_1);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm i_36 = NULL;
  ATerm k_36 = NULL;
  i_36 = t;
  {
    ATerm l_36 = NULL;
    ATerm n_36 = NULL,p_36 = NULL,q_36 = NULL;
    t = not_null(i_36);
    {
      l_36 = t;
      {
        t = SSL_explode_term(not_null(l_36));
        {
          n_36 = t;
          z_35 :
          if(match_cons(n_36, sym__2))
            {
              p_36 = ATgetArgument(n_36, 0);
              q_36 = ATgetArgument(n_36, 1);
              a_36 :
              if(match_string(p_36, ""))
                {
                  if(((k_36 != NULL) && (k_36 != q_36)))
                    _fail(q_36);
                  else
                    k_36 = q_36;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm u_36 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_36);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        {
          t = Nil_0(t);
          t = h_60(t);
        }
      }
    return(t);
  }
  t = u_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  w_36 :
  if(match_cons(x_36, sym__2))
    {
      y_36 = ATgetArgument(x_36, 0);
      z_36 = ATgetArgument(x_36, 1);
      {
        t = not_null(y_36);
        {
          ATerm h_1 (ATerm t)
          {
            t = not_null(z_36);
            return(t);
          }
          t = at_end_1(t, h_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_37 = NULL;
  e_37 = t;
  t = SSL_explode_string(not_null(e_37));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  t = SSL_is_string(not_null(i_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_1);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
              r_37 = t;
              q_37 :
              if(match_cons(r_37, sym_Path_1))
                {
                  s_37 = ATgetArgument(r_37, 0);
                  t = not_null(s_37);
                }
              else
                {
                  if(match_cons(r_37, sym_Var_1))
                    {
                      s_37 = ATgetArgument(r_37, 0);
                      {
                        t = not_null(s_37);
                        {
                          ATerm r_7 = t;
                          int s_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(s_7);
                            }
                          else
                            {
                              t = r_7;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = term_t_7;
                                  return(t);
                                }
                                t = debug_1(t, j_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_37, sym_Prefix_2))
                        {
                          s_37 = ATgetArgument(r_37, 0);
                          t_37 = ATgetArgument(r_37, 1);
                          {
                            ATerm y_37 = NULL,a_38 = NULL;
                            ATerm u_7;
                            u_7 = t;
                            {
                              ATerm z_37 = NULL;
                              t = not_null(s_37);
                              {
                                t = eval_config_0(t);
                                {
                                  z_37 = t;
                                  if(((y_37 != NULL) && (y_37 != z_37)))
                                    _fail(z_37);
                                  else
                                    y_37 = z_37;
                                }
                              }
                            }
                            t = u_7;
                            {
                              ATerm b_38 = NULL;
                              t = not_null(t_37);
                              {
                                t = eval_config_0(t);
                                {
                                  b_38 = t;
                                  if(((a_38 != NULL) && (a_38 != b_38)))
                                    _fail(b_38);
                                  else
                                    a_38 = b_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_37), not_null(a_38));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
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
ATerm get_config_0 (ATerm t)
{
  ATerm j_38 = NULL;
  j_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(j_38));
    {
      t = table_get_0(t);
      {
        ATerm k_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_7;
            w_7 = t;
            {
              ATerm l_38 = NULL;
              ATerm m_38 = NULL;
              m_38 = t;
              if(((l_38 != NULL) && (l_38 != m_38)))
                _fail(m_38);
              else
                l_38 = m_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(j_38), not_null(l_38));
                t = table_put_0(t);
              }
            }
            t = w_7;
          }
          return(t);
        }
        t = try_1(t, k_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm x_7;
    x_7 = t;
    {
      ATerm q_38 = NULL;
      ATerm r_38 = NULL;
      t = term_y_7;
      {
        t = get_config_0(t);
        {
          r_38 = t;
          if(((q_38 != NULL) && (q_38 != r_38)))
            _fail(r_38);
          else
            q_38 = r_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_38), term_z_7);
        t = geq_0(t);
      }
    }
    t = x_7;
    t = m_72(t);
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  u_38 :
  if(match_cons(v_38, sym__2))
    {
      w_38 = ATgetArgument(v_38, 0);
      x_38 = ATgetArgument(v_38, 1);
      t = SSL_WriteToTextFile(not_null(w_38), not_null(x_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      t = SSL_WriteToBinaryFile(not_null(f_39), not_null(g_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_39 = NULL;
  ATerm a_8;
  a_8 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm b_8 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm p_39 = NULL,q_39 = NULL;
            p_39 = t;
            l_39 :
            if(match_cons(p_39, sym_Output_1))
              {
                q_39 = ATgetArgument(p_39, 0);
                if(((o_39 != NULL) && (o_39 != q_39)))
                  _fail(q_39);
                else
                  o_39 = q_39;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_1);
          ;
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
          {
            ATerm r_39 = NULL;
            t = term_d_8;
            {
              r_39 = t;
              if(((o_39 != NULL) && (o_39 != r_39)))
                _fail(r_39);
              else
                o_39 = r_39;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_1, _id);
  }
  t = a_8;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        t = not_null(o_39);
        return(t);
      }
      t = split_2(t, p_1, _id);
      return(t);
    }
    t = _2(t, _id, o_1);
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_39 = NULL;
              s_39 = t;
              n_39 :
              if(!(match_cons(s_39, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, r_1);
            return(t);
          }
          t = _2(t, q_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm y_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  ATerm g_8;
  g_8 = t;
  t = dtime_0(t);
  t = g_8;
  {
    t = d_74(t);
    {
      ATerm h_8;
      h_8 = t;
      {
        ATerm z_39 = NULL;
        t = dtime_0(t);
        {
          z_39 = t;
          if(((y_39 != NULL) && (y_39 != z_39)))
            _fail(z_39);
          else
            y_39 = z_39;
        }
      }
      t = h_8;
      {
        a_40 = t;
        x_39 :
        if(match_cons(a_40, sym__2))
          {
            b_40 = ATgetArgument(a_40, 0);
            c_40 = ATgetArgument(a_40, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_40)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_39))), not_null(c_40));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm i_8;
  i_8 = t;
  {
    ATerm l_40 = NULL,s_40 = NULL;
    ATerm j_8;
    j_8 = t;
    {
      ATerm m_40 = NULL;
      t = f_55(t);
      {
        m_40 = t;
        if(((l_40 != NULL) && (l_40 != m_40)))
          _fail(m_40);
        else
          l_40 = m_40;
      }
    }
    t = j_8;
    {
      ATerm t_40 = NULL;
      t_40 = t;
      if(((s_40 != NULL) && (s_40 != t_40)))
        _fail(t_40);
      else
        s_40 = t_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_40)), not_null(l_40)));
        t = printnl_0(t);
      }
    }
  }
  t = i_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_40 = NULL;
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_40 = NULL;
      y_40 = t;
      {
        if(((x_40 != NULL) && (x_40 != y_40)))
          _fail(y_40);
        else
          x_40 = y_40;
        t = SSL_ReadFromFile(not_null(x_40));
      }
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_m_8;
          return(t);
        }
        t = debug_1(t, s_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_69 (ATerm), ATerm z_69 (ATerm))
{
  ATerm c_41 = NULL,e_41 = NULL;
  ATerm n_8;
  n_8 = t;
  {
    ATerm d_41 = NULL;
    t = y_69(t);
    {
      d_41 = t;
      if(((c_41 != NULL) && (c_41 != d_41)))
        _fail(d_41);
      else
        c_41 = d_41;
    }
  }
  t = n_8;
  {
    ATerm f_41 = NULL;
    t = z_69(t);
    {
      f_41 = t;
      if(((e_41 != NULL) && (e_41 != f_41)))
        _fail(f_41);
      else
        e_41 = f_41;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(e_41));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_41 = NULL;
  ATerm o_8;
  o_8 = t;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 (ATerm t)
        {
          ATerm y_41 = NULL,z_41 = NULL;
          y_41 = t;
          v_41 :
          if(match_cons(y_41, sym_Input_1))
            {
              z_41 = ATgetArgument(y_41, 0);
              if(((x_41 != NULL) && (x_41 != z_41)))
                _fail(z_41);
              else
                x_41 = z_41;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_1);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm a_42 = NULL;
          t = term_r_8;
          {
            a_42 = t;
            if(((x_41 != NULL) && (x_41 != a_42)))
              _fail(a_42);
            else
              x_41 = a_42;
          }
        }
      }
  }
  t = o_8;
  {
    ATerm u_1 (ATerm t)
    {
      t = not_null(x_41);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm i_42 = NULL;
    i_42 = t;
    h_42 :
    if(!(match_string(i_42, "-v")))
      {
        if(!(match_string(i_42, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_u_8;
    t = set_config_0(t);
    t = term_v_8;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_w_8;
    return(t);
  }
  t = Option_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm l_42 = NULL;
    l_42 = t;
    j_42 :
    if(!(match_string(l_42, "-k")))
      {
        if(!(match_string(l_42, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm m_42 = NULL;
      ATerm n_42 = NULL;
      t = string_to_int_0(t);
      {
        n_42 = t;
        if(((m_42 != NULL) && (m_42 != n_42)))
          _fail(n_42);
        else
          m_42 = n_42;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(m_42));
        t = set_config_0(t);
      }
    }
    t = x_8;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_z_8;
    return(t);
  }
  t = ArgOption_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  t = SSL_string_to_int(not_null(q_42));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm y_42 = NULL;
        y_42 = t;
        t_42 :
        if(!(match_string(y_42, "-S")))
          {
            if(!(match_string(y_42, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_d_9;
        t = set_config_0(t);
        t = term_e_9;
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_h_9;
        return(t);
      }
      t = Option_3(t, b_2, c_2, d_2);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm z_42 = NULL;
              z_42 = t;
              u_42 :
              if(!(match_string(z_42, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm c_43 = NULL;
              ATerm k_9;
              k_9 = t;
              {
                ATerm a_43 = NULL;
                ATerm b_43 = NULL;
                t = string_to_int_0(t);
                {
                  b_43 = t;
                  if(((a_43 != NULL) && (a_43 != b_43)))
                    _fail(b_43);
                  else
                    a_43 = b_43;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(a_43));
                  t = set_config_0(t);
                }
              }
              t = k_9;
              {
                ATerm d_43 = NULL;
                d_43 = t;
                if(((c_43 != NULL) && (c_43 != d_43)))
                  _fail(d_43);
                else
                  c_43 = d_43;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_43));
              }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = term_l_9;
              return(t);
            }
            t = ArgOption_3(t, e_2, f_2, g_2);
            ;
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            {
              ATerm h_2 (ATerm t)
              {
                ATerm e_43 = NULL;
                e_43 = t;
                x_42 :
                if(!(match_string(e_43, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                t = term_n_9;
                t = set_config_0(t);
                t = term_o_9;
                return(t);
              }
              ATerm j_2 (ATerm t)
              {
                t = term_p_9;
                return(t);
              }
              t = Option_3(t, h_2, i_2, j_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm k_43 = NULL;
    k_43 = t;
    h_43 :
    if(!(match_string(k_43, "-o")))
      {
        if(!(match_string(k_43, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm n_43 = NULL;
    ATerm x_9;
    x_9 = t;
    {
      ATerm l_43 = NULL;
      ATerm m_43 = NULL;
      m_43 = t;
      if(((l_43 != NULL) && (l_43 != m_43)))
        _fail(m_43);
      else
        l_43 = m_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(l_43));
        t = set_config_0(t);
      }
    }
    t = x_9;
    {
      ATerm o_43 = NULL;
      o_43 = t;
      if(((n_43 != NULL) && (n_43 != o_43)))
        _fail(o_43);
      else
        n_43 = o_43;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_43));
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm s_43 = NULL;
          s_43 = t;
          r_43 :
          if(!(match_string(s_43, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_e_10;
          t = set_config_0(t);
          t = term_h_10;
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_m_10;
          return(t);
        }
        t = Option_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  y_43 = t;
  w_43 :
  if(match_string(y_43, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_43) == AT_LIST) && !(ATisEmpty(y_43))))
        {
          z_43 = ATgetFirst((ATermList) y_43);
          a_44 = (ATerm) ATgetNext((ATermList) y_43);
          x_43 :
          if(((ATgetType(a_44) == AT_LIST) && !(ATisEmpty(a_44))))
            {
              b_44 = ATgetFirst((ATermList) a_44);
              c_44 = (ATerm) ATgetNext((ATermList) a_44);
              {
                ATerm g_44 = NULL;
                ATerm n_10;
                n_10 = t;
                {
                  t = not_null(z_43);
                  t = j_0(t);
                }
                t = n_10;
                {
                  ATerm h_44 = NULL;
                  t = not_null(b_44);
                  {
                    t = k_0(t);
                    {
                      h_44 = t;
                      if(((g_44 != NULL) && (g_44 != h_44)))
                        _fail(h_44);
                      else
                        g_44 = h_44;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_44)), not_null(g_44));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm o_44 = NULL;
    o_44 = t;
    l_44 :
    if(!(match_string(o_44, "-i")))
      {
        if(!(match_string(o_44, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm r_44 = NULL;
    ATerm o_10;
    o_10 = t;
    {
      ATerm p_44 = NULL;
      ATerm q_44 = NULL;
      q_44 = t;
      if(((p_44 != NULL) && (p_44 != q_44)))
        _fail(q_44);
      else
        p_44 = q_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_10, not_null(p_44));
        t = set_config_0(t);
      }
    }
    t = o_10;
    {
      ATerm s_44 = NULL;
      s_44 = t;
      if(((r_44 != NULL) && (r_44 != s_44)))
        _fail(s_44);
      else
        r_44 = s_44;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_44));
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_q_10;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = t_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, term_z_10));
  {
    t = printnl_0(t);
    {
      t = term_f_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_44 = NULL;
  w_44 = t;
  t = SSL_TicksToSeconds(not_null(w_44));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym__2))
    {
      c_45 = ATgetArgument(b_45, 0);
      d_45 = ATgetArgument(b_45, 1);
      {
        ATerm a_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_45), not_null(d_45));
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = a_11;
            t = SSL_addr(not_null(c_45), not_null(d_45));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_66 (ATerm), ATerm h_66 (ATerm))
{
  ATerm g_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_66(t);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = g_11;
      {
        ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
        k_45 = t;
        j_45 :
        if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
          {
            l_45 = ATgetFirst((ATermList) k_45);
            m_45 = (ATerm) ATgetNext((ATermList) k_45);
            {
              ATerm p_45 = NULL;
              ATerm q_45 = NULL;
              t = not_null(m_45);
              {
                t = foldr_2(t, g_66, h_66);
                {
                  q_45 = t;
                  if(((p_45 != NULL) && (p_45 != q_45)))
                    _fail(q_45);
                  else
                    p_45 = q_45;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_45), not_null(p_45));
                t = h_66(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm e_65 (ATerm), ATerm f_65 (ATerm))
{
  ATerm x_45 = NULL;
  ATerm z_45 = NULL;
  x_45 = t;
  {
    ATerm a_46 = NULL;
    ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
    t = not_null(x_45);
    {
      a_46 = t;
      {
        t = SSL_explode_term(not_null(a_46));
        {
          c_46 = t;
          w_45 :
          if(match_cons(c_46, sym__2))
            {
              d_46 = ATgetArgument(c_46, 0);
              e_46 = ATgetArgument(c_46, 1);
              if(((z_45 != NULL) && (z_45 != e_46)))
                _fail(e_46);
              else
                z_45 = e_46;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_45);
      t = foldr_2(t, e_65, f_65);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm t_2 (ATerm t)
    {
      t = term_c_9;
      return(t);
    }
    t = crush_2(t, t_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym__2))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      {
        ATerm k_11;
        k_11 = t;
        {
          ATerm l_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_46), not_null(m_46));
              ;
              LocalPopChoice(m_11);
            }
          else
            {
              t = l_11;
              t = SSL_gtr(not_null(l_46), not_null(m_46));
            }
        }
        t = k_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm s_46 = NULL;
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
      t_46 = t;
      r_46 :
      if(match_cons(t_46, sym__2))
        {
          u_46 = ATgetArgument(t_46, 0);
          v_46 = ATgetArgument(t_46, 1);
          {
            if(((s_46 != NULL) && (s_46 != u_46)))
              _fail(u_46);
            else
              s_46 = u_46;
            if(((s_46 != NULL) && (s_46 != v_46)))
              _fail(v_46);
            else
              s_46 = v_46;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm p_11;
    p_11 = t;
    {
      ATerm a_47 = NULL;
      ATerm b_47 = NULL;
      t = term_y_7;
      {
        t = get_config_0(t);
        {
          b_47 = t;
          if(((a_47 != NULL) && (a_47 != b_47)))
            _fail(b_47);
          else
            a_47 = b_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_47), term_f_7);
        t = geq_0(t);
      }
    }
    t = p_11;
    t = l_72(t);
    return(t);
  }
  t = try_1(t, u_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm f_47 = NULL,h_47 = NULL;
    ATerm q_11;
    q_11 = t;
    {
      ATerm g_47 = NULL;
      t = run_time_0(t);
      {
        g_47 = t;
        if(((f_47 != NULL) && (f_47 != g_47)))
          _fail(g_47);
        else
          f_47 = g_47;
      }
    }
    t = q_11;
    {
      ATerm i_47 = NULL;
      t = term_r_11;
      {
        t = get_config_0(t);
        {
          i_47 = t;
          if(((h_47 != NULL) && (h_47 != i_47)))
            _fail(i_47);
          else
            h_47 = i_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_11), not_null(f_47)), term_s_11), not_null(h_47)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_2);
  {
    t = term_c_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym_Version_0))
    {
      ATerm r_47 = NULL,t_47 = NULL;
      ATerm y_11;
      y_11 = t;
      {
        ATerm s_47 = NULL;
        t = SSLgetAnnotations(not_null(p_47));
        {
          s_47 = t;
          if(((r_47 != NULL) && (r_47 != s_47)))
            _fail(s_47);
          else
            r_47 = s_47;
        }
      }
      t = y_11;
      {
        ATerm u_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_47));
        {
          u_47 = t;
          if(((t_47 != NULL) && (t_47 != u_47)))
            _fail(u_47);
          else
            t_47 = u_47;
        }
        t = not_null(t_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_74 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm z_11 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = z_11;
        {
          ATerm f_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(i_12);
            }
          else
            {
              t = f_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_2);
  t = b_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  t = SSL_table_create(not_null(z_47));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  {
    ATerm j_12;
    j_12 = t;
    {
      t = term_k_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_12, term_l_12, not_null(d_48));
          t = table_put_0(t);
        }
      }
    }
    t = j_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  t = SSL_table_destroy(not_null(k_48));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_49 = NULL;
  w_49 = t;
  t = SSL_exit(not_null(w_49));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
  a_50 = t;
  z_49 :
  if(((ATgetType(a_50) == AT_LIST) && ATisEmpty(a_50)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_50) == AT_LIST) && !(ATisEmpty(a_50))))
        {
          b_50 = ATgetFirst((ATermList) a_50);
          c_50 = (ATerm) ATgetNext((ATermList) a_50);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm m_12;
  m_12 = t;
  {
    ATerm f_50 = NULL;
    ATerm i_50 = NULL;
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        {
          ATerm g_50 = NULL;
          ATerm h_50 = NULL;
          h_50 = t;
          if(((g_50 != NULL) && (g_50 != h_50)))
            _fail(h_50);
          else
            g_50 = h_50;
          t = (ATerm) ATinsert(ATempty, not_null(g_50));
        }
      }
    {
      i_50 = t;
      if(((f_50 != NULL) && (f_50 != i_50)))
        _fail(i_50);
      else
        f_50 = i_50;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(f_50));
      t = printnl_0(t);
    }
  }
  t = m_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm l_50 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = Cons_2(t, s_59, l_50);
      }
    return(t);
  }
  t = l_50(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  u_50 = t;
  r_50 :
  if(((ATgetType(u_50) == AT_LIST) && !(ATisEmpty(u_50))))
    {
      s_50 = ATgetFirst((ATermList) u_50);
      t_50 = (ATerm) ATgetNext((ATermList) u_50);
      {
        ATerm x_50 = NULL;
        t = not_null(t_50);
        {
          ATerm r_12;
          r_12 = t;
          {
            ATerm y_50 = NULL,a_51 = NULL,c_51 = NULL;
            ATerm w_12;
            w_12 = t;
            {
              ATerm z_50 = NULL;
              t = i_0(t);
              {
                z_50 = t;
                if(((y_50 != NULL) && (y_50 != z_50)))
                  _fail(z_50);
                else
                  y_50 = z_50;
              }
            }
            t = w_12;
            {
              ATerm b_51 = NULL;
              t = not_null(s_50);
              {
                t = h_0(t);
                {
                  b_51 = t;
                  if(((a_51 != NULL) && (a_51 != b_51)))
                    _fail(b_51);
                  else
                    a_51 = b_51;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_50)), not_null(a_51));
                {
                  c_51 = t;
                  if(((x_50 != NULL) && (x_50 != c_51)))
                    _fail(c_51);
                  else
                    x_50 = c_51;
                }
              }
            }
          }
          t = r_12;
          {
            ATerm x_2 (ATerm t)
            {
              t = not_null(x_50);
              return(t);
            }
            t = reverse_acc_2(t, h_0, x_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_50) == AT_LIST) && ATisEmpty(u_50)))
        {
          {
            t = term_t_8;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_54 (ATerm))
{
  ATerm n_51 = NULL,o_51 = NULL;
  n_51 = t;
  m_51 :
  if(match_cons(n_51, sym_Program_1))
    {
      o_51 = ATgetArgument(n_51, 0);
      {
        ATerm r_51 = NULL,t_51 = NULL;
        ATerm s_51 = NULL;
        t = SSLgetAnnotations(not_null(n_51));
        {
          s_51 = t;
          if(((r_51 != NULL) && (r_51 != s_51)))
            _fail(s_51);
          else
            r_51 = s_51;
        }
        {
          t = not_null(o_51);
          {
            ATerm v_51 = NULL;
            t = s_54(t);
            {
              t_51 = t;
              {
                ATerm w_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_51)), not_null(r_51));
                {
                  w_51 = t;
                  if(((v_51 != NULL) && (v_51 != w_51)))
                    _fail(w_51);
                  else
                    v_51 = w_51;
                }
                t = not_null(v_51);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm f_52 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_52 = NULL;
      t = term_r_11;
      {
        t = get_config_0(t);
        {
          g_52 = t;
          if(((f_52 != NULL) && (f_52 != g_52)))
            _fail(g_52);
          else
            f_52 = g_52;
        }
      }
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm a_3 (ATerm t)
          {
            ATerm h_52 = NULL;
            h_52 = t;
            if(((f_52 != NULL) && (f_52 != h_52)))
              _fail(h_52);
            else
              f_52 = h_52;
            return(t);
          }
          t = Program_1(t, a_3);
          return(t);
        }
        t = option_defined_1(t, z_2);
      }
    }
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        t = not_null(f_52);
        return(t);
      }
      t = short_description_1(t, c_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_3);
    {
      t = term_c_13;
      {
        t = echo_0(t);
        {
          t = term_i_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm i_52 = NULL;
                  ATerm j_52 = NULL;
                  j_52 = t;
                  if(((i_52 != NULL) && (i_52 != j_52)))
                    _fail(j_52);
                  else
                    i_52 = j_52;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_52)), term_j_13);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_3);
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm k_52 = NULL;
                    ATerm l_52 = NULL;
                    ATerm f_3 (ATerm t)
                    {
                      t = not_null(f_52);
                      return(t);
                    }
                    t = long_description_1(t, f_3);
                    {
                      l_52 = t;
                      if(((k_52 != NULL) && (k_52 != l_52)))
                        _fail(l_52);
                      else
                        k_52 = l_52;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(k_52)), term_k_13);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_3);
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
ATerm debug_0 (ATerm t)
{
  ATerm l_13;
  l_13 = t;
  {
    ATerm r_52 = NULL;
    ATerm s_52 = NULL;
    s_52 = t;
    if(((r_52 != NULL) && (r_52 != s_52)))
      _fail(s_52);
    else
      r_52 = s_52;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(r_52)));
      t = printnl_0(t);
    }
  }
  t = l_13;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_55 (ATerm))
{
  ATerm m_13;
  m_13 = t;
  {
    t = g_55(t);
    t = debug_0(t);
  }
  t = m_13;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm z_52 = NULL,a_53 = NULL;
  z_52 = t;
  y_52 :
  if(match_cons(z_52, sym_Undefined_1))
    {
      a_53 = ATgetArgument(z_52, 0);
      {
        ATerm d_53 = NULL,f_53 = NULL;
        ATerm e_53 = NULL;
        t = SSLgetAnnotations(not_null(z_52));
        {
          e_53 = t;
          if(((d_53 != NULL) && (d_53 != e_53)))
            _fail(e_53);
          else
            d_53 = e_53;
        }
        {
          t = not_null(a_53);
          {
            ATerm h_53 = NULL;
            t = t_54(t);
            {
              f_53 = t;
              {
                ATerm i_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_53)), not_null(d_53));
                {
                  i_53 = t;
                  if(((h_53 != NULL) && (h_53 != i_53)))
                    _fail(i_53);
                  else
                    h_53 = i_53;
                }
                t = not_null(h_53);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm n_53 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_60, _id);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = Cons_2(t, _id, n_53);
      }
    return(t);
  }
  t = n_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_75 (ATerm))
{
  t = fetch_1(t, i_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_53 = NULL;
  s_53 = t;
  r_53 :
  if(match_cons(s_53, sym_Help_0))
    {
      ATerm u_53 = NULL,w_53 = NULL;
      ATerm p_13;
      p_13 = t;
      {
        ATerm v_53 = NULL;
        t = SSLgetAnnotations(not_null(s_53));
        {
          v_53 = t;
          if(((u_53 != NULL) && (u_53 != v_53)))
            _fail(v_53);
          else
            u_53 = v_53;
        }
      }
      t = p_13;
      {
        ATerm x_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_53));
        {
          x_53 = t;
          if(((w_53 != NULL) && (w_53 != x_53)))
            _fail(x_53);
          else
            w_53 = x_53;
        }
        t = not_null(w_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm q_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_58(t);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = q_13;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym__2))
    {
      e_54 = ATgetArgument(d_54, 0);
      f_54 = ATgetArgument(d_54, 1);
      t = SSL_table_get(not_null(e_54), not_null(f_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym__3))
    {
      n_54 = ATgetArgument(m_54, 0);
      o_54 = ATgetArgument(m_54, 1);
      p_54 = ATgetArgument(m_54, 2);
      {
        ATerm w_13;
        w_13 = t;
        {
          ATerm v_54 = NULL;
          ATerm w_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_54), not_null(o_54));
          {
            ATerm x_13 = t;
            int b_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_14);
              }
            else
              {
                t = x_13;
                t = (ATerm) ATempty;
              }
            {
              w_54 = t;
              if(((v_54 != NULL) && (v_54 != w_54)))
                _fail(w_54);
              else
                v_54 = w_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_54), not_null(o_54), (ATerm) ATinsert(CheckATermList(not_null(v_54)), not_null(p_54)));
            t = table_put_0(t);
          }
        }
        t = w_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm a_55 = NULL;
  ATerm b_55 = NULL;
  t = term_t_8;
  {
    t = n_76(t);
    {
      b_55 = t;
      if(((a_55 != NULL) && (a_55 != b_55)))
        _fail(b_55);
      else
        a_55 = b_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_h_13, not_null(a_55));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  i_55 :
  if(match_string(j_55, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
        {
          k_55 = ATgetFirst((ATermList) j_55);
          l_55 = (ATerm) ATgetNext((ATermList) j_55);
          {
            ATerm o_55 = NULL;
            ATerm d_14;
            d_14 = t;
            {
              t = not_null(k_55);
              t = a_0(t);
            }
            t = d_14;
            {
              ATerm p_55 = NULL;
              t = term_t_8;
              {
                t = d_0(t);
                {
                  p_55 = t;
                  if(((o_55 != NULL) && (o_55 != p_55)))
                    _fail(p_55);
                  else
                    o_55 = p_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_55)), not_null(o_55));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm u_55 = NULL;
    u_55 = t;
    t_55 :
    if(!(match_string(u_55, "--help")))
      {
        if(!(match_string(u_55, "-h")))
          {
            if(!(match_string(u_55, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_h_14;
    {
      t = set_config_0(t);
      t = term_i_14;
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_j_14;
    return(t);
  }
  t = Option_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  w_55 :
  if(((ATgetType(x_55) == AT_LIST) && !(ATisEmpty(x_55))))
    {
      y_55 = ATgetFirst((ATermList) x_55);
      z_55 = (ATerm) ATgetNext((ATermList) x_55);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_55)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_48 (ATerm), ATerm h_48 (ATerm))
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
  j_56 = t;
  i_56 :
  if(((ATgetType(j_56) == AT_LIST) && !(ATisEmpty(j_56))))
    {
      k_56 = ATgetFirst((ATermList) j_56);
      l_56 = (ATerm) ATgetNext((ATermList) j_56);
      {
        ATerm p_56 = NULL,r_56 = NULL;
        ATerm q_56 = NULL;
        t = SSLgetAnnotations(not_null(j_56));
        {
          q_56 = t;
          if(((p_56 != NULL) && (p_56 != q_56)))
            _fail(q_56);
          else
            p_56 = q_56;
        }
        {
          t = not_null(k_56);
          {
            ATerm t_56 = NULL;
            t = g_48(t);
            {
              r_56 = t;
              {
                t = not_null(l_56);
                {
                  ATerm v_56 = NULL;
                  t = h_48(t);
                  {
                    t_56 = t;
                    {
                      ATerm w_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_56)), not_null(r_56)), not_null(p_56));
                      {
                        w_56 = t;
                        if(((v_56 != NULL) && (v_56 != w_56)))
                          _fail(w_56);
                        else
                          v_56 = w_56;
                      }
                      t = not_null(v_56);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm g_57 = NULL;
  g_57 = t;
  f_57 :
  if(((ATgetType(g_57) == AT_LIST) && ATisEmpty(g_57)))
    {
      {
        ATerm i_57 = NULL,k_57 = NULL;
        ATerm k_14;
        k_14 = t;
        {
          ATerm j_57 = NULL;
          t = SSLgetAnnotations(not_null(g_57));
          {
            j_57 = t;
            if(((i_57 != NULL) && (i_57 != j_57)))
              _fail(j_57);
            else
              i_57 = j_57;
          }
        }
        t = k_14;
        {
          ATerm l_57 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_57));
          {
            l_57 = t;
            if(((k_57 != NULL) && (k_57 != l_57)))
              _fail(l_57);
            else
              k_57 = l_57;
          }
          t = not_null(k_57);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  q_57 :
  if(match_cons(r_57, sym__2))
    {
      s_57 = ATgetArgument(r_57, 0);
      t_57 = ATgetArgument(r_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(s_57), not_null(t_57));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm l_14;
  l_14 = t;
  {
    ATerm j_3 (ATerm t)
    {
      t = term_m_14;
      t = l_76(t);
      return(t);
    }
    t = try_1(t, j_3);
  }
  t = l_14;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm b_58 = NULL;
      ATerm n_14;
      n_14 = t;
      {
        ATerm z_57 = NULL;
        ATerm a_58 = NULL;
        a_58 = t;
        if(((z_57 != NULL) && (z_57 != a_58)))
          _fail(a_58);
        else
          z_57 = a_58;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(z_57));
          t = set_config_0(t);
        }
      }
      t = n_14;
      {
        ATerm c_58 = NULL;
        c_58 = t;
        if(((b_58 != NULL) && (b_58 != c_58)))
          _fail(c_58);
        else
          b_58 = c_58;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_58));
      }
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              {
                t = l_76(t);
                t = Cons_2(t, _id, l_3);
              }
            }
          ;
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_3, l_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  ATerm w_14;
  w_14 = t;
  {
    ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
    l_58 = t;
    h_58 :
    if(match_cons(l_58, sym__3))
      {
        m_58 = ATgetArgument(l_58, 0);
        n_58 = ATgetArgument(l_58, 1);
        o_58 = ATgetArgument(l_58, 2);
        {
          if(((i_58 != NULL) && (i_58 != m_58)))
            _fail(m_58);
          else
            i_58 = m_58;
          {
            if(((j_58 != NULL) && (j_58 != n_58)))
              _fail(n_58);
            else
              j_58 = n_58;
            {
              if(((k_58 != NULL) && (k_58 != o_58)))
                _fail(o_58);
              else
                k_58 = o_58;
              t = SSL_table_put(not_null(i_58), not_null(j_58), not_null(k_58));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm r_58 = NULL;
  ATerm a_15;
  a_15 = t;
  {
    t = term_c_15;
    t = table_put_0(t);
  }
  t = a_15;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm f_15 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_76(t);
          ;
          LocalPopChoice(g_15);
        }
      else
        {
          t = f_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_3);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15;
            j_15 = t;
            {
              ATerm k_15 = t;
              int l_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_g_14;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_15);
                }
              else
                {
                  t = k_15;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_15;
            {
              t = system_usage_0(t);
              {
                t = term_c_9;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm s_58 = NULL;
                  s_58 = t;
                  if(((r_58 != NULL) && (r_58 != s_58)))
                    _fail(s_58);
                  else
                    r_58 = s_58;
                  return(t);
                }
                t = Undefined_1(t, p_3);
                return(t);
              }
              t = option_defined_1(t, o_3);
              {
                ATerm q_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_58)), term_m_15);
                  return(t);
                }
                t = say_1(t, q_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_f_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_3);
      {
        ATerm n_15;
        n_15 = t;
        {
          t = term_e_13;
          t = table_destroy_0(t);
        }
        t = n_15;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm))
{
  t = parse_options_1(t, h_74);
  {
    t = store_options_0(t);
    {
      t = j_74(t);
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_74);
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            {
              ATerm w_15 = t;
              int z_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_74(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(z_15);
                }
              else
                {
                  t = w_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_74(t);
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_74);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, r_3, a_75, b_75, s_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm u_74 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm u_3 (ATerm t)
    {
      ATerm c_16;
      c_16 = t;
      {
        ATerm v_58 = NULL;
        ATerm w_58 = NULL;
        t = term_r_11;
        {
          t = get_config_0(t);
          {
            w_58 = t;
            if(((v_58 != NULL) && (v_58 != w_58)))
              _fail(w_58);
            else
              v_58 = w_58;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(v_58)));
          t = printnl_0(t);
        }
      }
      t = c_16;
      return(t);
    }
    t = if_verbose2_1(t, u_3);
    return(t);
  }
  t = iowrap_4(t, s_74, t_74, u_74, t_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  t = iowrap_3(t, q_74, r_74, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    t = _2(t, _id, n_74);
    return(t);
  }
  t = iowrap_2(t, v_3, _fail);
  return(t);
}
ATerm io_abox_format_0 (ATerm t)
{
  t = iowrap_1(t, abox_format_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox_format_0(t);
  return(t);
}

#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_CUT_0;
Symbol sym_S_1;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_SOpt_2;
Symbol sym_SOptb_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_FBOX_2;
Symbol sym_F_1;
Symbol sym_FInt_2;
Symbol sym_FFID_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LINT_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptb_2 = ATmakeSymbol("SOptb", 2, ATfalse);
  ATprotectSymbol(sym_SOptb_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
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
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FInt_2 = ATmakeSymbol("FInt", 2, ATfalse);
  ATprotectSymbol(sym_FInt_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
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
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LINT_2 = ATmakeSymbol("LINT", 2, ATfalse);
  ATprotectSymbol(sym_LINT_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_v_13;
ATerm term_j_13;
ATerm term_v_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_v_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_x_6;
void init_constant_terms (void)
{
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_r_7, term_y_7);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_7);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_f_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_f_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_f_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__3, term_m_11, term_n_11, (ATerm) ATempty);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm is_int_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm t_51 (ATerm), ATerm u_51 (ATerm));
ATerm Arg_1 (ATerm, ATerm s_51 (ATerm));
ATerm LINT_2 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm));
ATerm L_2 (ATerm, ATerm o_51 (ATerm), ATerm p_51 (ATerm));
ATerm list_1 (ATerm, ATerm r_69 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm m_51 (ATerm), ATerm n_51 (ATerm));
ATerm REF_2 (ATerm, ATerm k_51 (ATerm), ATerm l_51 (ATerm));
ATerm LBL_2 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm));
ATerm R_2 (ATerm, ATerm w_50 (ATerm), ATerm x_50 (ATerm));
ATerm AR_1 (ATerm, ATerm a_51 (ATerm));
ATerm AC_1 (ATerm, ATerm z_50 (ATerm));
ATerm AL_1 (ATerm, ATerm y_50 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm A_3 (ATerm, ATerm t_50 (ATerm), ATerm u_50 (ATerm), ATerm v_50 (ATerm));
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
ATerm FFID_2 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm));
ATerm FInt_2 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm d_51 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm b_51 (ATerm), ATerm c_51 (ATerm));
ATerm ALT_2 (ATerm, ATerm n_50 (ATerm), ATerm o_50 (ATerm));
ATerm HV_2 (ATerm, ATerm l_50 (ATerm), ATerm m_50 (ATerm));
ATerm V_2 (ATerm, ATerm j_50 (ATerm), ATerm k_50 (ATerm));
ATerm H_2 (ATerm, ATerm h_50 (ATerm), ATerm i_50 (ATerm));
ATerm S_1 (ATerm, ATerm g_50 (ATerm));
ATerm Box_0 (ATerm);
ATerm _2 (ATerm, ATerm y_43 (ATerm), ATerm z_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_71 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_60 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm t_65 (ATerm), ATerm u_65 (ATerm));
ATerm crush_2 (ATerm, ATerm i_67 (ATerm), ATerm j_67 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_60 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_60 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_60 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_58 (ATerm));
ATerm map_1 (ATerm, ATerm p_69 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_58 (ATerm));
ATerm Program_1 (ATerm, ATerm k_45 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_73 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_58 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_51 (ATerm), ATerm w_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_58 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm), ATerm m_59 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_59 (ATerm), ATerm j_59 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_59 (ATerm));
ATerm abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm is_int_0 (ATerm t)
{
  ATerm j_1 = NULL;
  j_1 = t;
  t = SSL_is_int(not_null(j_1));
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm t_51 (ATerm), ATerm u_51 (ATerm))
{
  ATerm i_4 = NULL,j_4 = NULL,n_4 = NULL;
  i_4 = t;
  h_4 :
  if(match_cons(i_4, sym_Arg2_2))
    {
      j_4 = ATgetArgument(i_4, 0);
      n_4 = ATgetArgument(i_4, 1);
      {
        ATerm u_4 = NULL,z_4 = NULL;
        ATerm v_4 = NULL;
        t = SSLgetAnnotations(not_null(i_4));
        {
          v_4 = t;
          if(((u_4 != NULL) && (u_4 != v_4)))
            _fail(v_4);
          else
            u_4 = v_4;
        }
        {
          t = not_null(j_4);
          {
            ATerm b_5 = NULL;
            t = t_51(t);
            {
              z_4 = t;
              {
                t = not_null(n_4);
                {
                  ATerm g_5 = NULL;
                  t = u_51(t);
                  {
                    b_5 = t;
                    {
                      ATerm h_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(z_4), not_null(b_5)), not_null(u_4));
                      {
                        h_5 = t;
                        if(((g_5 != NULL) && (g_5 != h_5)))
                          _fail(h_5);
                        else
                          g_5 = h_5;
                      }
                      t = not_null(g_5);
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
ATerm Arg_1 (ATerm t, ATerm s_51 (ATerm))
{
  ATerm e_6 = NULL,f_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_Arg_1))
    {
      f_6 = ATgetArgument(e_6, 0);
      {
        ATerm l_6 = NULL,e_9 = NULL;
        ATerm d_9 = NULL;
        t = SSLgetAnnotations(not_null(e_6));
        {
          d_9 = t;
          if(((l_6 != NULL) && (l_6 != d_9)))
            _fail(d_9);
          else
            l_6 = d_9;
        }
        {
          t = not_null(f_6);
          {
            ATerm t_9 = NULL;
            t = s_51(t);
            {
              e_9 = t;
              {
                ATerm u_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(e_9)), not_null(l_6));
                {
                  u_9 = t;
                  if(((t_9 != NULL) && (t_9 != u_9)))
                    _fail(u_9);
                  else
                    t_9 = u_9;
                }
                t = not_null(t_9);
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
ATerm LINT_2 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm))
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym_LINT_2))
    {
      t_10 = ATgetArgument(s_10, 0);
      u_10 = ATgetArgument(s_10, 1);
      {
        ATerm y_10 = NULL,a_11 = NULL;
        ATerm z_10 = NULL;
        t = SSLgetAnnotations(not_null(s_10));
        {
          z_10 = t;
          if(((y_10 != NULL) && (y_10 != z_10)))
            _fail(z_10);
          else
            y_10 = z_10;
        }
        {
          t = not_null(t_10);
          {
            ATerm c_11 = NULL;
            t = q_51(t);
            {
              a_11 = t;
              {
                t = not_null(u_10);
                {
                  ATerm e_11 = NULL;
                  t = r_51(t);
                  {
                    c_11 = t;
                    {
                      ATerm f_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LINT_2, not_null(a_11), not_null(c_11)), not_null(y_10));
                      {
                        f_11 = t;
                        if(((e_11 != NULL) && (e_11 != f_11)))
                          _fail(f_11);
                        else
                          e_11 = f_11;
                      }
                      t = not_null(e_11);
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
ATerm L_2 (ATerm t, ATerm o_51 (ATerm), ATerm p_51 (ATerm))
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  r_11 = t;
  q_11 :
  if(match_cons(r_11, sym_L_2))
    {
      s_11 = ATgetArgument(r_11, 0);
      t_11 = ATgetArgument(r_11, 1);
      {
        ATerm x_11 = NULL,z_11 = NULL;
        ATerm y_11 = NULL;
        t = SSLgetAnnotations(not_null(r_11));
        {
          y_11 = t;
          if(((x_11 != NULL) && (x_11 != y_11)))
            _fail(y_11);
          else
            x_11 = y_11;
        }
        {
          t = not_null(s_11);
          {
            ATerm b_12 = NULL;
            t = o_51(t);
            {
              z_11 = t;
              {
                t = not_null(t_11);
                {
                  ATerm d_12 = NULL;
                  t = p_51(t);
                  {
                    b_12 = t;
                    {
                      ATerm e_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(z_11), not_null(b_12)), not_null(x_11));
                      {
                        e_12 = t;
                        if(((d_12 != NULL) && (d_12 != e_12)))
                          _fail(e_12);
                        else
                          d_12 = e_12;
                      }
                      t = not_null(d_12);
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
ATerm list_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm k_12 (ATerm t)
  {
    ATerm m_3 = t;
    int n_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_3);
      }
    else
      {
        t = m_3;
        t = Cons_2(t, r_69, k_12);
      }
    return(t);
  }
  t = k_12(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm p_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_IS_0))
    {
      ATerm r_12 = NULL,t_12 = NULL;
      ATerm o_3;
      o_3 = t;
      {
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(p_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
      }
      t = o_3;
      {
        ATerm u_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(r_12));
        {
          u_12 = t;
          if(((t_12 != NULL) && (t_12 != u_12)))
            _fail(u_12);
          else
            t_12 = u_12;
        }
        t = not_null(t_12);
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
  ATerm c_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym_HS_0))
    {
      ATerm e_13 = NULL,g_13 = NULL;
      ATerm p_3;
      p_3 = t;
      {
        ATerm f_13 = NULL;
        t = SSLgetAnnotations(not_null(c_13));
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
      }
      t = p_3;
      {
        ATerm h_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(e_13));
        {
          h_13 = t;
          if(((g_13 != NULL) && (g_13 != h_13)))
            _fail(h_13);
          else
            g_13 = h_13;
        }
        t = not_null(g_13);
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
  ATerm p_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_VS_0))
    {
      ATerm r_13 = NULL,t_13 = NULL;
      ATerm q_3;
      q_3 = t;
      {
        ATerm s_13 = NULL;
        t = SSLgetAnnotations(not_null(p_13));
        {
          s_13 = t;
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
        }
      }
      t = q_3;
      {
        ATerm u_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(r_13));
        {
          u_13 = t;
          if(((t_13 != NULL) && (t_13 != u_13)))
            _fail(u_13);
          else
            t_13 = u_13;
        }
        t = not_null(t_13);
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
  ATerm r_3 = t;
  int s_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = VS_0(t);
      LocalPopChoice(s_3);
    }
  else
    {
      t = r_3;
      {
        ATerm t_3 = t;
        int u_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HS_0(t);
            LocalPopChoice(u_3);
          }
        else
          {
            t = t_3;
            t = IS_0(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym_SOpt_2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        ATerm k_14 = NULL,m_14 = NULL;
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(e_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        {
          t = not_null(f_14);
          {
            ATerm o_14 = NULL;
            t = p_50(t);
            {
              m_14 = t;
              {
                t = not_null(g_14);
                {
                  ATerm q_14 = NULL;
                  t = q_50(t);
                  {
                    o_14 = t;
                    {
                      ATerm r_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(m_14), not_null(o_14)), not_null(k_14));
                      {
                        r_14 = t;
                        if(((q_14 != NULL) && (q_14 != r_14)))
                          _fail(r_14);
                        else
                          q_14 = r_14;
                      }
                      t = not_null(q_14);
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
ATerm C_2 (ATerm t, ATerm m_51 (ATerm), ATerm n_51 (ATerm))
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_C_2))
    {
      e_15 = ATgetArgument(d_15, 0);
      f_15 = ATgetArgument(d_15, 1);
      {
        ATerm j_15 = NULL,l_15 = NULL;
        ATerm k_15 = NULL;
        t = SSLgetAnnotations(not_null(d_15));
        {
          k_15 = t;
          if(((j_15 != NULL) && (j_15 != k_15)))
            _fail(k_15);
          else
            j_15 = k_15;
        }
        {
          t = not_null(e_15);
          {
            ATerm n_15 = NULL;
            t = m_51(t);
            {
              l_15 = t;
              {
                t = not_null(f_15);
                {
                  ATerm p_15 = NULL;
                  t = n_51(t);
                  {
                    n_15 = t;
                    {
                      ATerm q_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(l_15), not_null(n_15)), not_null(j_15));
                      {
                        q_15 = t;
                        if(((p_15 != NULL) && (p_15 != q_15)))
                          _fail(q_15);
                        else
                          p_15 = q_15;
                      }
                      t = not_null(p_15);
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
ATerm REF_2 (ATerm t, ATerm k_51 (ATerm), ATerm l_51 (ATerm))
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym_REF_2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      {
        ATerm i_16 = NULL,k_16 = NULL;
        ATerm j_16 = NULL;
        t = SSLgetAnnotations(not_null(c_16));
        {
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
        }
        {
          t = not_null(d_16);
          {
            ATerm m_16 = NULL;
            t = k_51(t);
            {
              k_16 = t;
              {
                t = not_null(e_16);
                {
                  ATerm o_16 = NULL;
                  t = l_51(t);
                  {
                    m_16 = t;
                    {
                      ATerm p_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_REF_2, not_null(k_16), not_null(m_16)), not_null(i_16));
                      {
                        p_16 = t;
                        if(((o_16 != NULL) && (o_16 != p_16)))
                          _fail(p_16);
                        else
                          o_16 = p_16;
                      }
                      t = not_null(o_16);
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
ATerm LBL_2 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym_LBL_2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      {
        ATerm h_17 = NULL,j_17 = NULL;
        ATerm i_17 = NULL;
        t = SSLgetAnnotations(not_null(b_17));
        {
          i_17 = t;
          if(((h_17 != NULL) && (h_17 != i_17)))
            _fail(i_17);
          else
            h_17 = i_17;
        }
        {
          t = not_null(c_17);
          {
            ATerm l_17 = NULL;
            t = i_51(t);
            {
              j_17 = t;
              {
                t = not_null(d_17);
                {
                  ATerm n_17 = NULL;
                  t = j_51(t);
                  {
                    l_17 = t;
                    {
                      ATerm o_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LBL_2, not_null(j_17), not_null(l_17)), not_null(h_17));
                      {
                        o_17 = t;
                        if(((n_17 != NULL) && (n_17 != o_17)))
                          _fail(o_17);
                        else
                          n_17 = o_17;
                      }
                      t = not_null(n_17);
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
ATerm R_2 (ATerm t, ATerm w_50 (ATerm), ATerm x_50 (ATerm))
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_R_2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      {
        ATerm g_18 = NULL,i_18 = NULL;
        ATerm h_18 = NULL;
        t = SSLgetAnnotations(not_null(a_18));
        {
          h_18 = t;
          if(((g_18 != NULL) && (g_18 != h_18)))
            _fail(h_18);
          else
            g_18 = h_18;
        }
        {
          t = not_null(b_18);
          {
            ATerm k_18 = NULL;
            t = w_50(t);
            {
              i_18 = t;
              {
                t = not_null(c_18);
                {
                  ATerm m_18 = NULL;
                  t = x_50(t);
                  {
                    k_18 = t;
                    {
                      ATerm n_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(i_18), not_null(k_18)), not_null(g_18));
                      {
                        n_18 = t;
                        if(((m_18 != NULL) && (m_18 != n_18)))
                          _fail(n_18);
                        else
                          m_18 = n_18;
                      }
                      t = not_null(m_18);
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
ATerm AR_1 (ATerm t, ATerm a_51 (ATerm))
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_AR_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      {
        ATerm c_19 = NULL,e_19 = NULL;
        ATerm d_19 = NULL;
        t = SSLgetAnnotations(not_null(y_18));
        {
          d_19 = t;
          if(((c_19 != NULL) && (c_19 != d_19)))
            _fail(d_19);
          else
            c_19 = d_19;
        }
        {
          t = not_null(z_18);
          {
            ATerm g_19 = NULL;
            t = a_51(t);
            {
              e_19 = t;
              {
                ATerm h_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(e_19)), not_null(c_19));
                {
                  h_19 = t;
                  if(((g_19 != NULL) && (g_19 != h_19)))
                    _fail(h_19);
                  else
                    g_19 = h_19;
                }
                t = not_null(g_19);
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
ATerm AC_1 (ATerm t, ATerm z_50 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_AC_1))
    {
      s_19 = ATgetArgument(r_19, 0);
      {
        ATerm v_19 = NULL,x_19 = NULL;
        ATerm w_19 = NULL;
        t = SSLgetAnnotations(not_null(r_19));
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
        {
          t = not_null(s_19);
          {
            ATerm z_19 = NULL;
            t = z_50(t);
            {
              x_19 = t;
              {
                ATerm a_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(x_19)), not_null(v_19));
                {
                  a_20 = t;
                  if(((z_19 != NULL) && (z_19 != a_20)))
                    _fail(a_20);
                  else
                    z_19 = a_20;
                }
                t = not_null(z_19);
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
ATerm AL_1 (ATerm t, ATerm y_50 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_AL_1))
    {
      l_20 = ATgetArgument(k_20, 0);
      {
        ATerm o_20 = NULL,q_20 = NULL;
        ATerm p_20 = NULL;
        t = SSLgetAnnotations(not_null(k_20));
        {
          p_20 = t;
          if(((o_20 != NULL) && (o_20 != p_20)))
            _fail(p_20);
          else
            o_20 = p_20;
        }
        {
          t = not_null(l_20);
          {
            ATerm s_20 = NULL;
            t = y_50(t);
            {
              q_20 = t;
              {
                ATerm t_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(q_20)), not_null(o_20));
                {
                  t_20 = t;
                  if(((s_20 != NULL) && (s_20 != t_20)))
                    _fail(t_20);
                  else
                    s_20 = t_20;
                }
                t = not_null(s_20);
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
  ATerm v_3 = t;
  int w_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 (ATerm t)
      {
        t = list_1(t, S_Option_0);
        return(t);
      }
      t = AL_1(t, a_0);
      LocalPopChoice(w_3);
    }
  else
    {
      t = v_3;
      {
        ATerm x_3 = t;
        int y_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, b_0);
            LocalPopChoice(y_3);
          }
        else
          {
            t = x_3;
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
ATerm A_3 (ATerm t, ATerm t_50 (ATerm), ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_A_3))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      i_21 = ATgetArgument(f_21, 2);
      {
        ATerm y_21 = NULL,g_22 = NULL;
        ATerm z_21 = NULL;
        t = SSLgetAnnotations(not_null(f_21));
        {
          z_21 = t;
          if(((y_21 != NULL) && (y_21 != z_21)))
            _fail(z_21);
          else
            y_21 = z_21;
        }
        {
          t = not_null(g_21);
          {
            ATerm i_22 = NULL;
            t = t_50(t);
            {
              g_22 = t;
              {
                t = not_null(h_21);
                {
                  ATerm k_22 = NULL;
                  t = u_50(t);
                  {
                    i_22 = t;
                    {
                      t = not_null(i_21);
                      {
                        ATerm m_22 = NULL;
                        t = v_50(t);
                        {
                          k_22 = t;
                          {
                            ATerm n_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, not_null(g_22), not_null(i_22), not_null(k_22)), not_null(y_21));
                            {
                              n_22 = t;
                              if(((m_22 != NULL) && (m_22 != n_22)))
                                _fail(n_22);
                              else
                                m_22 = n_22;
                            }
                            t = not_null(m_22);
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
  ATerm g_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_MATH_0))
    {
      ATerm i_23 = NULL,k_23 = NULL;
      ATerm z_3;
      z_3 = t;
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
      t = z_3;
      {
        ATerm l_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(i_23));
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
ATerm NUM_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_NUM_0))
    {
      ATerm v_23 = NULL,x_23 = NULL;
      ATerm a_4;
      a_4 = t;
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
      t = a_4;
      {
        ATerm y_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(v_23));
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
ATerm VAR_0 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_VAR_0))
    {
      ATerm i_24 = NULL,k_24 = NULL;
      ATerm b_4;
      b_4 = t;
      {
        ATerm j_24 = NULL;
        t = SSLgetAnnotations(not_null(g_24));
        {
          j_24 = t;
          if(((i_24 != NULL) && (i_24 != j_24)))
            _fail(j_24);
          else
            i_24 = j_24;
        }
      }
      t = b_4;
      {
        ATerm l_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(i_24));
        {
          l_24 = t;
          if(((k_24 != NULL) && (k_24 != l_24)))
            _fail(l_24);
          else
            k_24 = l_24;
        }
        t = not_null(k_24);
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
  ATerm u_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_KW_0))
    {
      ATerm w_24 = NULL,y_24 = NULL;
      ATerm c_4;
      c_4 = t;
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
      t = c_4;
      {
        ATerm z_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(w_24));
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
ATerm CL_0 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_CL_0))
    {
      ATerm j_25 = NULL,l_25 = NULL;
      ATerm d_4;
      d_4 = t;
      {
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(h_25));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
      }
      t = d_4;
      {
        ATerm m_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
        t = not_null(l_25);
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
  ATerm u_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym_SZ_0))
    {
      ATerm w_25 = NULL,y_25 = NULL;
      ATerm e_4;
      e_4 = t;
      {
        ATerm x_25 = NULL;
        t = SSLgetAnnotations(not_null(u_25));
        {
          x_25 = t;
          if(((w_25 != NULL) && (w_25 != x_25)))
            _fail(x_25);
          else
            w_25 = x_25;
        }
      }
      t = e_4;
      {
        ATerm z_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(w_25));
        {
          z_25 = t;
          if(((y_25 != NULL) && (y_25 != z_25)))
            _fail(z_25);
          else
            y_25 = z_25;
        }
        t = not_null(y_25);
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
  ATerm h_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_SH_0))
    {
      ATerm j_26 = NULL,s_26 = NULL;
      ATerm f_4;
      f_4 = t;
      {
        ATerm k_26 = NULL;
        t = SSLgetAnnotations(not_null(h_26));
        {
          k_26 = t;
          if(((j_26 != NULL) && (j_26 != k_26)))
            _fail(k_26);
          else
            j_26 = k_26;
        }
      }
      t = f_4;
      {
        ATerm t_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(j_26));
        {
          t_26 = t;
          if(((s_26 != NULL) && (s_26 != t_26)))
            _fail(t_26);
          else
            s_26 = t_26;
        }
        t = not_null(s_26);
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
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_SE_0))
    {
      ATerm d_27 = NULL,i_27 = NULL;
      ATerm g_4;
      g_4 = t;
      {
        ATerm e_27 = NULL;
        t = SSLgetAnnotations(not_null(b_27));
        {
          e_27 = t;
          if(((d_27 != NULL) && (d_27 != e_27)))
            _fail(e_27);
          else
            d_27 = e_27;
        }
      }
      t = g_4;
      {
        ATerm j_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(d_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
        t = not_null(i_27);
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
  ATerm r_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_FM_0))
    {
      ATerm t_27 = NULL,v_27 = NULL;
      ATerm k_4;
      k_4 = t;
      {
        ATerm u_27 = NULL;
        t = SSLgetAnnotations(not_null(r_27));
        {
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
        }
      }
      t = k_4;
      {
        ATerm w_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(t_27));
        {
          w_27 = t;
          if(((v_27 != NULL) && (v_27 != w_27)))
            _fail(w_27);
          else
            v_27 = w_27;
        }
        t = not_null(v_27);
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
  ATerm e_28 = NULL;
  e_28 = t;
  d_28 :
  if(match_cons(e_28, sym_FN_0))
    {
      ATerm g_28 = NULL,i_28 = NULL;
      ATerm l_4;
      l_4 = t;
      {
        ATerm h_28 = NULL;
        t = SSLgetAnnotations(not_null(e_28));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
      }
      t = l_4;
      {
        ATerm j_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FN_0), not_null(g_28));
        {
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
        }
        t = not_null(i_28);
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
  ATerm m_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FN_0(t);
      LocalPopChoice(o_4);
    }
  else
    {
      t = m_4;
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FM_0(t);
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm r_4 = t;
              int s_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SE_0(t);
                  LocalPopChoice(s_4);
                }
              else
                {
                  t = r_4;
                  {
                    ATerm t_4 = t;
                    int w_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SH_0(t);
                        LocalPopChoice(w_4);
                      }
                    else
                      {
                        t = t_4;
                        {
                          ATerm x_4 = t;
                          int y_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SZ_0(t);
                              LocalPopChoice(y_4);
                            }
                          else
                            {
                              t = x_4;
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
ATerm FFID_2 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm))
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym_FFID_2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      {
        ATerm c_29 = NULL,e_29 = NULL;
        ATerm d_29 = NULL;
        t = SSLgetAnnotations(not_null(w_28));
        {
          d_29 = t;
          if(((c_29 != NULL) && (c_29 != d_29)))
            _fail(d_29);
          else
            c_29 = d_29;
        }
        {
          t = not_null(x_28);
          {
            ATerm g_29 = NULL;
            t = g_51(t);
            {
              e_29 = t;
              {
                t = not_null(y_28);
                {
                  ATerm i_29 = NULL;
                  t = h_51(t);
                  {
                    g_29 = t;
                    {
                      ATerm j_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(e_29), not_null(g_29)), not_null(c_29));
                      {
                        j_29 = t;
                        if(((i_29 != NULL) && (i_29 != j_29)))
                          _fail(j_29);
                        else
                          i_29 = j_29;
                      }
                      t = not_null(i_29);
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
ATerm FInt_2 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm))
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  x_29 :
  if(match_cons(z_29, sym_FInt_2))
    {
      a_30 = ATgetArgument(z_29, 0);
      b_30 = ATgetArgument(z_29, 1);
      {
        ATerm f_30 = NULL,h_30 = NULL;
        ATerm g_30 = NULL;
        t = SSLgetAnnotations(not_null(z_29));
        {
          g_30 = t;
          if(((f_30 != NULL) && (f_30 != g_30)))
            _fail(g_30);
          else
            f_30 = g_30;
        }
        {
          t = not_null(a_30);
          {
            ATerm j_30 = NULL;
            t = e_51(t);
            {
              h_30 = t;
              {
                t = not_null(b_30);
                {
                  ATerm l_30 = NULL;
                  t = f_51(t);
                  {
                    j_30 = t;
                    {
                      ATerm m_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FInt_2, not_null(h_30), not_null(j_30)), not_null(f_30));
                      {
                        m_30 = t;
                        if(((l_30 != NULL) && (l_30 != m_30)))
                          _fail(m_30);
                        else
                          l_30 = m_30;
                      }
                      t = not_null(l_30);
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
  ATerm a_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FInt_2(t, Font_Param_0, is_string_0);
      LocalPopChoice(c_5);
    }
  else
    {
      t = a_5;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm d_51 (ATerm))
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym_F_1))
    {
      b_31 = ATgetArgument(a_31, 0);
      {
        ATerm e_31 = NULL,g_31 = NULL;
        ATerm f_31 = NULL;
        t = SSLgetAnnotations(not_null(a_31));
        {
          f_31 = t;
          if(((e_31 != NULL) && (e_31 != f_31)))
            _fail(f_31);
          else
            e_31 = f_31;
        }
        {
          t = not_null(b_31);
          {
            ATerm i_31 = NULL;
            t = d_51(t);
            {
              g_31 = t;
              {
                ATerm j_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_F_1, not_null(g_31)), not_null(e_31));
                {
                  j_31 = t;
                  if(((i_31 != NULL) && (i_31 != j_31)))
                    _fail(j_31);
                  else
                    i_31 = j_31;
                }
                t = not_null(i_31);
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
  ATerm d_5 = t;
  int e_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        t = list_1(t, F_Option_0);
        return(t);
      }
      t = F_1(t, f_0);
      LocalPopChoice(e_5);
    }
  else
    {
      t = d_5;
      {
        ATerm f_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = KW_0(t);
            LocalPopChoice(i_5);
          }
        else
          {
            t = f_5;
            {
              ATerm j_5 = t;
              int k_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = VAR_0(t);
                  LocalPopChoice(k_5);
                }
              else
                {
                  t = j_5;
                  {
                    ATerm l_5 = t;
                    int m_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = NUM_0(t);
                        LocalPopChoice(m_5);
                      }
                    else
                      {
                        t = l_5;
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
ATerm FBOX_2 (ATerm t, ATerm b_51 (ATerm), ATerm c_51 (ATerm))
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym_FBOX_2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      {
        ATerm a_32 = NULL,c_32 = NULL;
        ATerm b_32 = NULL;
        t = SSLgetAnnotations(not_null(u_31));
        {
          b_32 = t;
          if(((a_32 != NULL) && (a_32 != b_32)))
            _fail(b_32);
          else
            a_32 = b_32;
        }
        {
          t = not_null(v_31);
          {
            ATerm e_32 = NULL;
            t = b_51(t);
            {
              c_32 = t;
              {
                t = not_null(w_31);
                {
                  ATerm g_32 = NULL;
                  t = c_51(t);
                  {
                    e_32 = t;
                    {
                      ATerm h_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, not_null(c_32), not_null(e_32)), not_null(a_32));
                      {
                        h_32 = t;
                        if(((g_32 != NULL) && (g_32 != h_32)))
                          _fail(h_32);
                        else
                          g_32 = h_32;
                      }
                      t = not_null(g_32);
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
ATerm ALT_2 (ATerm t, ATerm n_50 (ATerm), ATerm o_50 (ATerm))
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  s_32 :
  if(match_cons(t_32, sym_ALT_2))
    {
      u_32 = ATgetArgument(t_32, 0);
      v_32 = ATgetArgument(t_32, 1);
      {
        ATerm z_32 = NULL,b_33 = NULL;
        ATerm a_33 = NULL;
        t = SSLgetAnnotations(not_null(t_32));
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
        {
          t = not_null(u_32);
          {
            ATerm d_33 = NULL;
            t = n_50(t);
            {
              b_33 = t;
              {
                t = not_null(v_32);
                {
                  ATerm f_33 = NULL;
                  t = o_50(t);
                  {
                    d_33 = t;
                    {
                      ATerm g_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, not_null(b_33), not_null(d_33)), not_null(z_32));
                      {
                        g_33 = t;
                        if(((f_33 != NULL) && (f_33 != g_33)))
                          _fail(g_33);
                        else
                          f_33 = g_33;
                      }
                      t = not_null(f_33);
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
ATerm HV_2 (ATerm t, ATerm l_50 (ATerm), ATerm m_50 (ATerm))
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  r_33 :
  if(match_cons(s_33, sym_HV_2))
    {
      t_33 = ATgetArgument(s_33, 0);
      u_33 = ATgetArgument(s_33, 1);
      {
        ATerm y_33 = NULL,a_34 = NULL;
        ATerm z_33 = NULL;
        t = SSLgetAnnotations(not_null(s_33));
        {
          z_33 = t;
          if(((y_33 != NULL) && (y_33 != z_33)))
            _fail(z_33);
          else
            y_33 = z_33;
        }
        {
          t = not_null(t_33);
          {
            ATerm c_34 = NULL;
            t = l_50(t);
            {
              a_34 = t;
              {
                t = not_null(u_33);
                {
                  ATerm e_34 = NULL;
                  t = m_50(t);
                  {
                    c_34 = t;
                    {
                      ATerm f_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, not_null(a_34), not_null(c_34)), not_null(y_33));
                      {
                        f_34 = t;
                        if(((e_34 != NULL) && (e_34 != f_34)))
                          _fail(f_34);
                        else
                          e_34 = f_34;
                      }
                      t = not_null(e_34);
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
ATerm V_2 (ATerm t, ATerm j_50 (ATerm), ATerm k_50 (ATerm))
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(match_cons(r_34, sym_V_2))
    {
      s_34 = ATgetArgument(r_34, 0);
      t_34 = ATgetArgument(r_34, 1);
      {
        ATerm z_34 = NULL,b_35 = NULL;
        ATerm a_35 = NULL;
        t = SSLgetAnnotations(not_null(r_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        {
          t = not_null(s_34);
          {
            ATerm d_35 = NULL;
            t = j_50(t);
            {
              b_35 = t;
              {
                t = not_null(t_34);
                {
                  ATerm f_35 = NULL;
                  t = k_50(t);
                  {
                    d_35 = t;
                    {
                      ATerm g_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, not_null(b_35), not_null(d_35)), not_null(z_34));
                      {
                        g_35 = t;
                        if(((f_35 != NULL) && (f_35 != g_35)))
                          _fail(g_35);
                        else
                          f_35 = g_35;
                      }
                      t = not_null(f_35);
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
ATerm H_2 (ATerm t, ATerm h_50 (ATerm), ATerm i_50 (ATerm))
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
  s_35 = t;
  r_35 :
  if(match_cons(s_35, sym_H_2))
    {
      t_35 = ATgetArgument(s_35, 0);
      u_35 = ATgetArgument(s_35, 1);
      {
        ATerm y_35 = NULL,a_36 = NULL;
        ATerm z_35 = NULL;
        t = SSLgetAnnotations(not_null(s_35));
        {
          z_35 = t;
          if(((y_35 != NULL) && (y_35 != z_35)))
            _fail(z_35);
          else
            y_35 = z_35;
        }
        {
          t = not_null(t_35);
          {
            ATerm c_36 = NULL;
            t = h_50(t);
            {
              a_36 = t;
              {
                t = not_null(u_35);
                {
                  ATerm e_36 = NULL;
                  t = i_50(t);
                  {
                    c_36 = t;
                    {
                      ATerm f_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(a_36), not_null(c_36)), not_null(y_35));
                      {
                        f_36 = t;
                        if(((e_36 != NULL) && (e_36 != f_36)))
                          _fail(f_36);
                        else
                          e_36 = f_36;
                      }
                      t = not_null(e_36);
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
ATerm S_1 (ATerm t, ATerm g_50 (ATerm))
{
  ATerm q_36 = NULL,r_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym_S_1))
    {
      r_36 = ATgetArgument(q_36, 0);
      {
        ATerm v_36 = NULL,x_36 = NULL;
        ATerm w_36 = NULL;
        t = SSLgetAnnotations(not_null(q_36));
        {
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
        }
        {
          t = not_null(r_36);
          {
            ATerm z_36 = NULL;
            t = g_50(t);
            {
              x_36 = t;
              {
                ATerm a_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(x_36)), not_null(v_36));
                {
                  a_37 = t;
                  if(((z_36 != NULL) && (z_36 != a_37)))
                    _fail(a_37);
                  else
                    z_36 = a_37;
                }
                t = not_null(z_36);
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
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1(t, is_string_0);
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
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
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm r_5 = t;
              int s_5 = stack_ptr;
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
                  LocalPopChoice(s_5);
                }
              else
                {
                  t = r_5;
                  {
                    ATerm t_5 = t;
                    int u_5 = stack_ptr;
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
                        LocalPopChoice(u_5);
                      }
                    else
                      {
                        t = t_5;
                        {
                          ATerm v_5 = t;
                          int w_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2(t, Box_0, Box_0);
                              LocalPopChoice(w_5);
                            }
                          else
                            {
                              t = v_5;
                              {
                                ATerm x_5 = t;
                                int y_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
                                    LocalPopChoice(y_5);
                                  }
                                else
                                  {
                                    t = x_5;
                                    {
                                      ATerm z_5 = t;
                                      int a_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = list_1(t, A_Option_0);
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
                                                ATerm v_0 (ATerm t)
                                                {
                                                  t = list_1(t, S_Option_0);
                                                  return(t);
                                                }
                                                ATerm w_0 (ATerm t)
                                                {
                                                  t = list_1(t, Box_0);
                                                  return(t);
                                                }
                                                t = R_2(t, v_0, w_0);
                                                LocalPopChoice(c_6);
                                              }
                                            else
                                              {
                                                t = b_6;
                                                {
                                                  ATerm g_6 = t;
                                                  int h_6 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LBL_2(t, is_string_0, Box_0);
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
                                                            t = REF_2(t, is_string_0, Box_0);
                                                            LocalPopChoice(j_6);
                                                          }
                                                        else
                                                          {
                                                            t = i_6;
                                                            {
                                                              ATerm k_6 = t;
                                                              int m_6 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, S_Option_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm y_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, Box_0);
                                                                    return(t);
                                                                  }
                                                                  t = C_2(t, x_0, y_0);
                                                                  LocalPopChoice(m_6);
                                                                }
                                                              else
                                                                {
                                                                  t = k_6;
                                                                  {
                                                                    ATerm n_6 = t;
                                                                    int o_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = L_2(t, Box_0, Box_0);
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
                                                                              t = LINT_2(t, is_int_0, Box_0);
                                                                              LocalPopChoice(q_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_6;
                                                                              {
                                                                                ATerm r_6 = t;
                                                                                int s_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Arg_1(t, is_int_0);
                                                                                    LocalPopChoice(s_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_6;
                                                                                    {
                                                                                      ATerm t_6 = t;
                                                                                      int u_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Arg2_2(t, is_int_0, is_int_0);
                                                                                          LocalPopChoice(u_6);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_6;
                                                                                          {
                                                                                            ATerm v_6 = t;
                                                                                            int w_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Nil_0(t);
                                                                                                LocalPopChoice(w_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_6;
                                                                                                {
                                                                                                  ATerm z_0 (ATerm t)
                                                                                                  {
                                                                                                    t = term_x_6;
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = debug_1(t, z_0);
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_43 (ATerm), ATerm z_43 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym__2))
    {
      n_37 = ATgetArgument(m_37, 0);
      o_37 = ATgetArgument(m_37, 1);
      {
        ATerm s_37 = NULL,u_37 = NULL;
        ATerm t_37 = NULL;
        t = SSLgetAnnotations(not_null(m_37));
        {
          t_37 = t;
          if(((s_37 != NULL) && (s_37 != t_37)))
            _fail(t_37);
          else
            s_37 = t_37;
        }
        {
          t = not_null(n_37);
          {
            ATerm w_37 = NULL;
            t = y_43(t);
            {
              u_37 = t;
              {
                t = not_null(o_37);
                {
                  ATerm y_37 = NULL;
                  t = z_43(t);
                  {
                    w_37 = t;
                    {
                      ATerm z_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_37), not_null(w_37)), not_null(s_37));
                      {
                        z_37 = t;
                        if(((y_37 != NULL) && (y_37 != z_37)))
                          _fail(z_37);
                        else
                          y_37 = z_37;
                      }
                      t = not_null(y_37);
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
  ATerm h_38 = NULL;
  ATerm y_6;
  y_6 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm i_38 = NULL,j_38 = NULL;
      i_38 = t;
      g_38 :
      if(match_cons(i_38, sym_Program_1))
        {
          j_38 = ATgetArgument(i_38, 0);
          if(((h_38 != NULL) && (h_38 != j_38)))
            _fail(j_38);
          else
            h_38 = j_38;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_7), not_null(h_38)), term_a_7));
      {
        t = printnl_0(t);
        {
          t = term_c_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  p_38 :
  if(match_cons(q_38, sym__2))
    {
      r_38 = ATgetArgument(q_38, 0);
      s_38 = ATgetArgument(q_38, 1);
      {
        ATerm d_7;
        d_7 = t;
        t = SSL_printnl(not_null(r_38), not_null(s_38));
        t = d_7;
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
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym__2))
    {
      d_39 = ATgetArgument(c_39, 0);
      e_39 = ATgetArgument(c_39, 1);
      {
        t = not_null(d_39);
        {
          ATerm b_1 (ATerm t)
          {
            t = not_null(e_39);
            return(t);
          }
          t = at_end_1(t, b_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
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
ATerm debug_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm e_7;
  e_7 = t;
  {
    ATerm m_39 = NULL,t_39 = NULL;
    ATerm f_7;
    f_7 = t;
    {
      ATerm s_39 = NULL;
      t = n_71(t);
      {
        s_39 = t;
        if(((m_39 != NULL) && (m_39 != s_39)))
          _fail(s_39);
        else
          m_39 = s_39;
      }
    }
    t = f_7;
    {
      ATerm u_39 = NULL;
      u_39 = t;
      if(((t_39 != NULL) && (t_39 != u_39)))
        _fail(u_39);
      else
        t_39 = u_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_39)), not_null(m_39)));
        t = printnl_0(t);
      }
    }
  }
  t = e_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  t = SSL_is_string(not_null(y_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm c_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_1);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
              h_40 = t;
              g_40 :
              if(match_cons(h_40, sym_Path_1))
                {
                  i_40 = ATgetArgument(h_40, 0);
                  t = not_null(i_40);
                }
              else
                {
                  if(match_cons(h_40, sym_Var_1))
                    {
                      i_40 = ATgetArgument(h_40, 0);
                      {
                        t = not_null(i_40);
                        {
                          ATerm k_7 = t;
                          int l_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_7);
                            }
                          else
                            {
                              t = k_7;
                              {
                                ATerm d_1 (ATerm t)
                                {
                                  t = term_m_7;
                                  return(t);
                                }
                                t = debug_1(t, d_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_40, sym_Prefix_2))
                        {
                          i_40 = ATgetArgument(h_40, 0);
                          j_40 = ATgetArgument(h_40, 1);
                          {
                            ATerm o_40 = NULL,q_40 = NULL;
                            ATerm n_7;
                            n_7 = t;
                            {
                              ATerm p_40 = NULL;
                              t = not_null(i_40);
                              {
                                t = eval_config_0(t);
                                {
                                  p_40 = t;
                                  if(((o_40 != NULL) && (o_40 != p_40)))
                                    _fail(p_40);
                                  else
                                    o_40 = p_40;
                                }
                              }
                            }
                            t = n_7;
                            {
                              ATerm r_40 = NULL;
                              t = not_null(j_40);
                              {
                                t = eval_config_0(t);
                                {
                                  r_40 = t;
                                  if(((q_40 != NULL) && (q_40 != r_40)))
                                    _fail(r_40);
                                  else
                                    q_40 = r_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_40), not_null(q_40));
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
  ATerm z_40 = NULL;
  z_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_7, not_null(z_40));
    {
      t = table_get_0(t);
      {
        ATerm e_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_7;
            p_7 = t;
            {
              ATerm b_41 = NULL;
              ATerm c_41 = NULL;
              c_41 = t;
              if(((b_41 != NULL) && (b_41 != c_41)))
                _fail(c_41);
              else
                b_41 = c_41;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_7, not_null(z_40), not_null(b_41));
                t = table_put_0(t);
              }
            }
            t = p_7;
          }
          return(t);
        }
        t = try_1(t, e_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    ATerm q_7;
    q_7 = t;
    {
      ATerm g_41 = NULL;
      ATerm h_41 = NULL;
      t = term_r_7;
      {
        t = get_config_0(t);
        {
          h_41 = t;
          if(((g_41 != NULL) && (g_41 != h_41)))
            _fail(h_41);
          else
            g_41 = h_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_41), term_s_7);
        t = geq_0(t);
      }
    }
    t = q_7;
    t = u_60(t);
    return(t);
  }
  t = try_1(t, f_1);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, term_t_7));
  {
    t = printnl_0(t);
    {
      t = term_c_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_41 = NULL;
  k_41 = t;
  t = SSL_TicksToSeconds(not_null(k_41));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym__2))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_41), not_null(r_41));
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            t = SSL_addr(not_null(q_41), not_null(r_41));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm))
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_65(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
        y_41 = t;
        x_41 :
        if(((ATgetType(y_41) == AT_LIST) && ((ATermList) y_41 != ATempty)))
          {
            z_41 = ATgetFirst((ATermList) y_41);
            a_42 = (ATerm) ATgetNext((ATermList) y_41);
            {
              ATerm d_42 = NULL;
              ATerm e_42 = NULL;
              t = not_null(a_42);
              {
                t = foldr_2(t, t_65, u_65);
                {
                  e_42 = t;
                  if(((d_42 != NULL) && (d_42 != e_42)))
                    _fail(e_42);
                  else
                    d_42 = e_42;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_41), not_null(d_42));
                t = u_65(t);
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
ATerm crush_2 (ATerm t, ATerm i_67 (ATerm), ATerm j_67 (ATerm))
{
  ATerm l_42 = NULL;
  ATerm n_42 = NULL;
  l_42 = t;
  {
    ATerm o_42 = NULL;
    ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
    t = not_null(l_42);
    {
      o_42 = t;
      {
        t = SSL_explode_term(not_null(o_42));
        {
          q_42 = t;
          k_42 :
          if(match_cons(q_42, sym__2))
            {
              r_42 = ATgetArgument(q_42, 0);
              s_42 = ATgetArgument(q_42, 1);
              if(((n_42 != NULL) && (n_42 != s_42)))
                _fail(s_42);
              else
                n_42 = s_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_42);
      t = foldr_2(t, i_67, j_67);
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
    ATerm g_1 (ATerm t)
    {
      t = term_y_7;
      return(t);
    }
    t = crush_2(t, g_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  x_42 :
  if(match_cons(y_42, sym__2))
    {
      z_42 = ATgetArgument(y_42, 0);
      a_43 = ATgetArgument(y_42, 1);
      {
        ATerm z_7;
        z_7 = t;
        {
          ATerm a_8 = t;
          int b_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_42), not_null(a_43));
              LocalPopChoice(b_8);
            }
          else
            {
              t = a_8;
              t = SSL_gtr(not_null(z_42), not_null(a_43));
            }
        }
        t = z_7;
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
  ATerm g_43 = NULL;
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
      h_43 = t;
      f_43 :
      if(match_cons(h_43, sym__2))
        {
          i_43 = ATgetArgument(h_43, 0);
          j_43 = ATgetArgument(h_43, 1);
          {
            if(((g_43 != NULL) && (g_43 != i_43)))
              _fail(i_43);
            else
              g_43 = i_43;
            if(((g_43 != NULL) && (g_43 != j_43)))
              _fail(j_43);
            else
              g_43 = j_43;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm h_1 (ATerm t)
  {
    ATerm e_8;
    e_8 = t;
    {
      ATerm m_43 = NULL;
      ATerm n_43 = NULL;
      t = term_r_7;
      {
        t = get_config_0(t);
        {
          n_43 = t;
          if(((m_43 != NULL) && (m_43 != n_43)))
            _fail(n_43);
          else
            m_43 = n_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_43), term_c_7);
        t = geq_0(t);
      }
    }
    t = e_8;
    t = t_60(t);
    return(t);
  }
  t = try_1(t, h_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm r_43 = NULL,t_43 = NULL;
    ATerm f_8;
    f_8 = t;
    {
      ATerm s_43 = NULL;
      t = run_time_0(t);
      {
        s_43 = t;
        if(((r_43 != NULL) && (r_43 != s_43)))
          _fail(s_43);
        else
          r_43 = s_43;
      }
    }
    t = f_8;
    {
      ATerm u_43 = NULL;
      t = term_g_8;
      {
        t = get_config_0(t);
        {
          u_43 = t;
          if(((t_43 != NULL) && (t_43 != u_43)))
            _fail(u_43);
          else
            t_43 = u_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_8), not_null(r_43)), term_h_8), not_null(t_43)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_1);
  {
    t = term_y_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym__2))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      t = SSL_WriteToTextFile(not_null(c_44), not_null(d_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym__2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      t = SSL_WriteToBinaryFile(not_null(k_44), not_null(l_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_44 = NULL;
  ATerm j_8;
  j_8 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm k_8 = t;
      int l_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_1 (ATerm t)
          {
            ATerm u_44 = NULL,v_44 = NULL;
            u_44 = t;
            q_44 :
            if(match_cons(u_44, sym_Output_1))
              {
                v_44 = ATgetArgument(u_44, 0);
                if(((t_44 != NULL) && (t_44 != v_44)))
                  _fail(v_44);
                else
                  t_44 = v_44;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, l_1);
          LocalPopChoice(l_8);
        }
      else
        {
          t = k_8;
          {
            ATerm w_44 = NULL;
            t = term_m_8;
            {
              w_44 = t;
              if(((t_44 != NULL) && (t_44 != w_44)))
                _fail(w_44);
              else
                t_44 = w_44;
            }
          }
        }
      return(t);
    }
    t = _2(t, k_1, _id);
  }
  t = j_8;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        t = not_null(t_44);
        return(t);
      }
      t = split_2(t, n_1, _id);
      return(t);
    }
    t = _2(t, _id, m_1);
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              ATerm x_44 = NULL;
              x_44 = t;
              s_44 :
              if(!(match_cons(x_44, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, p_1);
            return(t);
          }
          t = _2(t, o_1, WriteToBinaryFile_0);
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm d_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  ATerm p_8;
  p_8 = t;
  t = dtime_0(t);
  t = p_8;
  {
    t = e_60(t);
    {
      ATerm q_8;
      q_8 = t;
      {
        ATerm e_45 = NULL;
        t = dtime_0(t);
        {
          e_45 = t;
          if(((d_45 != NULL) && (d_45 != e_45)))
            _fail(e_45);
          else
            d_45 = e_45;
        }
      }
      t = q_8;
      {
        f_45 = t;
        c_45 :
        if(match_cons(f_45, sym__2))
          {
            g_45 = ATgetArgument(f_45, 0);
            h_45 = ATgetArgument(f_45, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_45)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_45))), not_null(h_45));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  t = SSL_ReadFromFile(not_null(p_45));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm u_45 = NULL,w_45 = NULL;
  ATerm r_8;
  r_8 = t;
  {
    ATerm v_45 = NULL;
    t = m_77(t);
    {
      v_45 = t;
      if(((u_45 != NULL) && (u_45 != v_45)))
        _fail(v_45);
      else
        u_45 = v_45;
    }
  }
  t = r_8;
  {
    ATerm x_45 = NULL;
    t = n_77(t);
    {
      x_45 = t;
      if(((w_45 != NULL) && (w_45 != x_45)))
        _fail(x_45);
      else
        w_45 = x_45;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_45), not_null(w_45));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_46 = NULL;
  ATerm s_8;
  s_8 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 (ATerm t)
        {
          ATerm e_46 = NULL,f_46 = NULL;
          e_46 = t;
          b_46 :
          if(match_cons(e_46, sym_Input_1))
            {
              f_46 = ATgetArgument(e_46, 0);
              if(((d_46 != NULL) && (d_46 != f_46)))
                _fail(f_46);
              else
                d_46 = f_46;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, q_1);
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          ATerm g_46 = NULL;
          t = term_v_8;
          {
            g_46 = t;
            if(((d_46 != NULL) && (d_46 != g_46)))
              _fail(g_46);
            else
              d_46 = g_46;
          }
        }
      }
  }
  t = s_8;
  {
    ATerm r_1 (ATerm t)
    {
      t = not_null(d_46);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, r_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym_Version_0))
    {
      ATerm p_46 = NULL,r_46 = NULL;
      ATerm w_8;
      w_8 = t;
      {
        ATerm q_46 = NULL;
        t = SSLgetAnnotations(not_null(n_46));
        {
          q_46 = t;
          if(((p_46 != NULL) && (p_46 != q_46)))
            _fail(q_46);
          else
            p_46 = q_46;
        }
      }
      t = w_8;
      {
        ATerm s_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_46));
        {
          s_46 = t;
          if(((r_46 != NULL) && (r_46 != s_46)))
            _fail(s_46);
          else
            r_46 = s_46;
        }
        t = not_null(r_46);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        {
          ATerm z_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(a_9);
            }
          else
            {
              t = z_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_1);
  t = c_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_46 = NULL;
  x_46 = t;
  t = SSL_table_create(not_null(x_46));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_47 = NULL;
  b_47 = t;
  {
    ATerm b_9;
    b_9 = t;
    {
      t = term_c_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_9, term_f_9, not_null(b_47));
          t = table_put_0(t);
        }
      }
    }
    t = b_9;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  t = SSL_string_to_int(not_null(f_47));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  n_47 = t;
  l_47 :
  if(match_string(n_47, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_47) == AT_LIST) && ((ATermList) n_47 != ATempty)))
        {
          o_47 = ATgetFirst((ATermList) n_47);
          p_47 = (ATerm) ATgetNext((ATermList) n_47);
          m_47 :
          if(((ATgetType(p_47) == AT_LIST) && ((ATermList) p_47 != ATempty)))
            {
              q_47 = ATgetFirst((ATermList) p_47);
              r_47 = (ATerm) ATgetNext((ATermList) p_47);
              {
                ATerm v_47 = NULL;
                ATerm g_9;
                g_9 = t;
                {
                  t = not_null(o_47);
                  t = j_0(t);
                }
                t = g_9;
                {
                  ATerm w_47 = NULL;
                  t = not_null(q_47);
                  {
                    t = k_0(t);
                    {
                      w_47 = t;
                      if(((v_47 != NULL) && (v_47 != w_47)))
                        _fail(w_47);
                      else
                        v_47 = w_47;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_47)), not_null(v_47));
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
ATerm io_options_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm n_48 = NULL;
        n_48 = t;
        a_48 :
        if(!(match_string(n_48, "-i")))
          {
            if(!(match_string(n_48, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        ATerm q_48 = NULL;
        ATerm j_9;
        j_9 = t;
        {
          ATerm o_48 = NULL;
          ATerm p_48 = NULL;
          p_48 = t;
          if(((o_48 != NULL) && (o_48 != p_48)))
            _fail(p_48);
          else
            o_48 = p_48;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_9, not_null(o_48));
            t = set_config_0(t);
          }
        }
        t = j_9;
        {
          ATerm r_48 = NULL;
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_48));
        }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_l_9;
        return(t);
      }
      t = ArgOption_3(t, t_1, u_1, v_1);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm s_48 = NULL;
              s_48 = t;
              d_48 :
              if(!(match_string(s_48, "-o")))
                {
                  if(!(match_string(s_48, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              ATerm v_48 = NULL;
              ATerm o_9;
              o_9 = t;
              {
                ATerm t_48 = NULL;
                ATerm u_48 = NULL;
                u_48 = t;
                if(((t_48 != NULL) && (t_48 != u_48)))
                  _fail(u_48);
                else
                  t_48 = u_48;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(t_48));
                  t = set_config_0(t);
                }
              }
              t = o_9;
              {
                ATerm w_48 = NULL;
                w_48 = t;
                if(((v_48 != NULL) && (v_48 != w_48)))
                  _fail(w_48);
                else
                  v_48 = w_48;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_48));
              }
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              t = term_q_9;
              return(t);
            }
            t = ArgOption_3(t, w_1, x_1, y_1);
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm r_9 = t;
              int s_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_1 (ATerm t)
                  {
                    ATerm x_48 = NULL;
                    x_48 = t;
                    g_48 :
                    if(!(match_string(x_48, "-S")))
                      {
                        if(!(match_string(x_48, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm a_2 (ATerm t)
                  {
                    t = term_v_9;
                    t = set_config_0(t);
                    t = term_w_9;
                    return(t);
                  }
                  ATerm b_2 (ATerm t)
                  {
                    t = term_x_9;
                    return(t);
                  }
                  t = Option_3(t, z_1, a_2, b_2);
                  LocalPopChoice(s_9);
                }
              else
                {
                  t = r_9;
                  {
                    ATerm y_9 = t;
                    int z_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_2 (ATerm t)
                        {
                          ATerm y_48 = NULL;
                          y_48 = t;
                          h_48 :
                          if(!(match_string(y_48, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm d_2 (ATerm t)
                        {
                          ATerm b_49 = NULL;
                          ATerm a_10;
                          a_10 = t;
                          {
                            ATerm z_48 = NULL;
                            ATerm a_49 = NULL;
                            t = string_to_int_0(t);
                            {
                              a_49 = t;
                              if(((z_48 != NULL) && (z_48 != a_49)))
                                _fail(a_49);
                              else
                                z_48 = a_49;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_7, not_null(z_48));
                              t = set_config_0(t);
                            }
                          }
                          t = a_10;
                          {
                            ATerm c_49 = NULL;
                            c_49 = t;
                            if(((b_49 != NULL) && (b_49 != c_49)))
                              _fail(c_49);
                            else
                              b_49 = c_49;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_49));
                          }
                          return(t);
                        }
                        ATerm e_2 (ATerm t)
                        {
                          t = term_b_10;
                          return(t);
                        }
                        t = ArgOption_3(t, c_2, d_2, e_2);
                        LocalPopChoice(z_9);
                      }
                    else
                      {
                        t = y_9;
                        {
                          ATerm c_10 = t;
                          int d_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_2 (ATerm t)
                              {
                                ATerm d_49 = NULL;
                                d_49 = t;
                                k_48 :
                                if(!(match_string(d_49, "-v")))
                                  {
                                    if(!(match_string(d_49, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm g_2 (ATerm t)
                              {
                                t = term_g_10;
                                t = set_config_0(t);
                                t = term_h_10;
                                return(t);
                              }
                              ATerm h_2 (ATerm t)
                              {
                                t = term_i_10;
                                return(t);
                              }
                              t = Option_3(t, f_2, g_2, h_2);
                              LocalPopChoice(d_10);
                            }
                          else
                            {
                              t = c_10;
                              {
                                ATerm j_10 = t;
                                int k_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_2 (ATerm t)
                                    {
                                      ATerm e_49 = NULL;
                                      e_49 = t;
                                      l_48 :
                                      if(!(match_string(e_49, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_2 (ATerm t)
                                    {
                                      t = term_m_10;
                                      t = set_config_0(t);
                                      t = term_n_10;
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      t = term_o_10;
                                      return(t);
                                    }
                                    t = Option_3(t, i_2, j_2, k_2);
                                    LocalPopChoice(k_10);
                                  }
                                else
                                  {
                                    t = j_10;
                                    {
                                      ATerm l_2 (ATerm t)
                                      {
                                        ATerm f_49 = NULL;
                                        f_49 = t;
                                        m_48 :
                                        if(!(match_string(f_49, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm m_2 (ATerm t)
                                      {
                                        t = term_q_10;
                                        t = set_config_0(t);
                                        t = term_v_10;
                                        return(t);
                                      }
                                      ATerm n_2 (ATerm t)
                                      {
                                        t = term_w_10;
                                        return(t);
                                      }
                                      t = Option_3(t, l_2, m_2, n_2);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_49 = NULL;
  n_49 = t;
  t = SSL_table_destroy(not_null(n_49));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_49 = NULL;
  r_49 = t;
  t = SSL_exit(not_null(r_49));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  t = SSL_implode_string(not_null(v_49));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm y_49 (ATerm t)
  {
    ATerm x_10 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_49);
        LocalPopChoice(b_11);
      }
    else
      {
        t = x_10;
        {
          t = Nil_0(t);
          t = d_70(t);
        }
      }
    return(t);
  }
  t = y_49(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = d_11;
      {
        ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
        b_50 = t;
        a_50 :
        if(((ATgetType(b_50) == AT_LIST) && ((ATermList) b_50 != ATempty)))
          {
            c_50 = ATgetFirst((ATermList) b_50);
            d_50 = (ATerm) ATgetNext((ATermList) b_50);
            {
              t = not_null(c_50);
              {
                ATerm o_2 (ATerm t)
                {
                  t = not_null(d_50);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_2);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  t = SSL_explode_string(not_null(y_51));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm b_52 (ATerm t)
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = Cons_2(t, p_69, b_52);
      }
    return(t);
  }
  t = b_52(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  k_52 = t;
  h_52 :
  if(((ATgetType(k_52) == AT_LIST) && ((ATermList) k_52 != ATempty)))
    {
      i_52 = ATgetFirst((ATermList) k_52);
      j_52 = (ATerm) ATgetNext((ATermList) k_52);
      {
        ATerm n_52 = NULL;
        t = not_null(j_52);
        {
          ATerm j_11;
          j_11 = t;
          {
            ATerm o_52 = NULL,q_52 = NULL,s_52 = NULL;
            ATerm k_11;
            k_11 = t;
            {
              ATerm p_52 = NULL;
              t = i_0(t);
              {
                p_52 = t;
                if(((o_52 != NULL) && (o_52 != p_52)))
                  _fail(p_52);
                else
                  o_52 = p_52;
              }
            }
            t = k_11;
            {
              ATerm r_52 = NULL;
              t = not_null(i_52);
              {
                t = h_0(t);
                {
                  r_52 = t;
                  if(((q_52 != NULL) && (q_52 != r_52)))
                    _fail(r_52);
                  else
                    q_52 = r_52;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_52)), not_null(q_52));
                {
                  s_52 = t;
                  if(((n_52 != NULL) && (n_52 != s_52)))
                    _fail(s_52);
                  else
                    n_52 = s_52;
                }
              }
            }
          }
          t = j_11;
          {
            ATerm p_2 (ATerm t)
            {
              t = not_null(n_52);
              return(t);
            }
            t = reverse_acc_2(t, h_0, p_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) k_52 == ATempty))
        {
          {
            t = term_f_10;
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
  ATerm q_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_45 (ATerm))
{
  ATerm d_53 = NULL,e_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym_Program_1))
    {
      e_53 = ATgetArgument(d_53, 0);
      {
        ATerm h_53 = NULL,j_53 = NULL;
        ATerm i_53 = NULL;
        t = SSLgetAnnotations(not_null(d_53));
        {
          i_53 = t;
          if(((h_53 != NULL) && (h_53 != i_53)))
            _fail(i_53);
          else
            h_53 = i_53;
        }
        {
          t = not_null(e_53);
          {
            ATerm l_53 = NULL;
            t = k_45(t);
            {
              j_53 = t;
              {
                ATerm m_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_53)), not_null(h_53));
                {
                  m_53 = t;
                  if(((l_53 != NULL) && (l_53 != m_53)))
                    _fail(m_53);
                  else
                    l_53 = m_53;
                }
                t = not_null(l_53);
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
  ATerm v_53 = NULL;
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      ATerm w_53 = NULL;
      w_53 = t;
      if(((v_53 != NULL) && (v_53 != w_53)))
        _fail(w_53);
      else
        v_53 = w_53;
      return(t);
    }
    t = Program_1(t, s_2);
    return(t);
  }
  t = option_defined_1(t, r_2);
  {
    ATerm t_2 (ATerm t)
    {
      ATerm x_53 = NULL;
      ATerm y_53 = NULL;
      t = term_f_10;
      {
        ATerm u_2 (ATerm t)
        {
          t = not_null(v_53);
          return(t);
        }
        t = short_description_1(t, u_2);
        {
          t = concat_strings_0(t);
          {
            y_53 = t;
            if(((x_53 != NULL) && (x_53 != y_53)))
              _fail(y_53);
            else
              x_53 = y_53;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, not_null(x_53)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, t_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, term_l_11));
      {
        t = printnl_0(t);
        {
          t = term_o_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm z_53 = NULL;
                  z_53 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_53)), term_p_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_2);
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm b_54 = NULL;
                    ATerm c_54 = NULL;
                    t = term_f_10;
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = not_null(v_53);
                        return(t);
                      }
                      t = long_description_1(t, x_2);
                      {
                        t = concat_strings_0(t);
                        {
                          c_54 = t;
                          if(((b_54 != NULL) && (b_54 != c_54)))
                            _fail(c_54);
                          else
                            b_54 = c_54;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_54)), term_u_11));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_2);
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
ATerm Undefined_1 (ATerm t, ATerm l_45 (ATerm))
{
  ATerm m_54 = NULL,n_54 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym_Undefined_1))
    {
      n_54 = ATgetArgument(m_54, 0);
      {
        ATerm q_54 = NULL,s_54 = NULL;
        ATerm r_54 = NULL;
        t = SSLgetAnnotations(not_null(m_54));
        {
          r_54 = t;
          if(((q_54 != NULL) && (q_54 != r_54)))
            _fail(r_54);
          else
            q_54 = r_54;
        }
        {
          t = not_null(n_54);
          {
            ATerm u_54 = NULL;
            t = l_45(t);
            {
              s_54 = t;
              {
                ATerm v_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_54)), not_null(q_54));
                {
                  v_54 = t;
                  if(((u_54 != NULL) && (u_54 != v_54)))
                    _fail(v_54);
                  else
                    u_54 = v_54;
                }
                t = not_null(u_54);
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
ATerm fetch_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm a_55 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_69, _id);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = Cons_2(t, _id, a_55);
      }
    return(t);
  }
  t = a_55(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_59 (ATerm))
{
  t = fetch_1(t, d_59);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  e_55 :
  if(match_cons(f_55, sym_Help_0))
    {
      ATerm h_55 = NULL,j_55 = NULL;
      ATerm a_12;
      a_12 = t;
      {
        ATerm i_55 = NULL;
        t = SSLgetAnnotations(not_null(f_55));
        {
          i_55 = t;
          if(((h_55 != NULL) && (h_55 != i_55)))
            _fail(i_55);
          else
            h_55 = i_55;
        }
      }
      t = a_12;
      {
        ATerm k_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_55));
        {
          k_55 = t;
          if(((j_55 != NULL) && (j_55 != k_55)))
            _fail(k_55);
          else
            j_55 = k_55;
        }
        t = not_null(j_55);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm c_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_73(t);
      LocalPopChoice(f_12);
    }
  else
    {
      t = c_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  p_55 :
  if(match_cons(q_55, sym__2))
    {
      r_55 = ATgetArgument(q_55, 0);
      s_55 = ATgetArgument(q_55, 1);
      t = SSL_table_get(not_null(r_55), not_null(s_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  z_55 = t;
  y_55 :
  if(match_cons(z_55, sym__3))
    {
      a_56 = ATgetArgument(z_55, 0);
      b_56 = ATgetArgument(z_55, 1);
      c_56 = ATgetArgument(z_55, 2);
      {
        ATerm g_12;
        g_12 = t;
        {
          ATerm g_56 = NULL;
          ATerm h_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_56), not_null(b_56));
          {
            ATerm h_12 = t;
            int i_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_12);
              }
            else
              {
                t = h_12;
                t = (ATerm) ATempty;
              }
            {
              h_56 = t;
              if(((g_56 != NULL) && (g_56 != h_56)))
                _fail(h_56);
              else
                g_56 = h_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_56), not_null(b_56), (ATerm) ATinsert(CheckATermList(not_null(g_56)), not_null(c_56)));
            t = table_put_0(t);
          }
        }
        t = g_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_58 (ATerm))
{
  ATerm l_56 = NULL;
  ATerm m_56 = NULL;
  t = term_f_10;
  {
    t = j_58(t);
    {
      m_56 = t;
      if(((l_56 != NULL) && (l_56 != m_56)))
        _fail(m_56);
      else
        l_56 = m_56;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_11, term_n_11, not_null(l_56));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  r_56 :
  if(match_string(s_56, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_56) == AT_LIST) && ((ATermList) s_56 != ATempty)))
        {
          t_56 = ATgetFirst((ATermList) s_56);
          u_56 = (ATerm) ATgetNext((ATermList) s_56);
          {
            ATerm x_56 = NULL;
            ATerm j_12;
            j_12 = t;
            {
              t = not_null(t_56);
              t = c_0(t);
            }
            t = j_12;
            {
              ATerm y_56 = NULL;
              t = term_f_10;
              {
                t = d_0(t);
                {
                  y_56 = t;
                  if(((x_56 != NULL) && (x_56 != y_56)))
                    _fail(y_56);
                  else
                    x_56 = y_56;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_56)), not_null(x_56));
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
  ATerm y_2 (ATerm t)
  {
    ATerm d_57 = NULL;
    d_57 = t;
    c_57 :
    if(!(match_string(d_57, "--help")))
      {
        if(!(match_string(d_57, "-h")))
          {
            if(!(match_string(d_57, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_l_12;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  f_57 :
  if(((ATgetType(g_57) == AT_LIST) && ((ATermList) g_57 != ATempty)))
    {
      h_57 = ATgetFirst((ATermList) g_57);
      i_57 = (ATerm) ATgetNext((ATermList) g_57);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_57)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_57)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_51 (ATerm), ATerm w_51 (ATerm))
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL;
  s_57 = t;
  r_57 :
  if(((ATgetType(s_57) == AT_LIST) && ((ATermList) s_57 != ATempty)))
    {
      t_57 = ATgetFirst((ATermList) s_57);
      u_57 = (ATerm) ATgetNext((ATermList) s_57);
      {
        ATerm y_57 = NULL,a_58 = NULL;
        ATerm z_57 = NULL;
        t = SSLgetAnnotations(not_null(s_57));
        {
          z_57 = t;
          if(((y_57 != NULL) && (y_57 != z_57)))
            _fail(z_57);
          else
            y_57 = z_57;
        }
        {
          t = not_null(t_57);
          {
            ATerm c_58 = NULL;
            t = v_51(t);
            {
              a_58 = t;
              {
                t = not_null(u_57);
                {
                  ATerm k_58 = NULL;
                  t = w_51(t);
                  {
                    c_58 = t;
                    {
                      ATerm l_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_58)), not_null(a_58)), not_null(y_57));
                      {
                        l_58 = t;
                        if(((k_58 != NULL) && (k_58 != l_58)))
                          _fail(l_58);
                        else
                          k_58 = l_58;
                      }
                      t = not_null(k_58);
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
  ATerm v_58 = NULL;
  v_58 = t;
  u_58 :
  if(((ATermList) v_58 == ATempty))
    {
      {
        ATerm x_58 = NULL,z_58 = NULL;
        ATerm n_12;
        n_12 = t;
        {
          ATerm y_58 = NULL;
          t = SSLgetAnnotations(not_null(v_58));
          {
            y_58 = t;
            if(((x_58 != NULL) && (x_58 != y_58)))
              _fail(y_58);
            else
              x_58 = y_58;
          }
        }
        t = n_12;
        {
          ATerm a_59 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_58));
          {
            a_59 = t;
            if(((z_58 != NULL) && (z_58 != a_59)))
              _fail(a_59);
            else
              z_58 = a_59;
          }
          t = not_null(z_58);
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
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL;
  n_59 = t;
  h_59 :
  if(match_cons(n_59, sym__2))
    {
      o_59 = ATgetArgument(n_59, 0);
      p_59 = ATgetArgument(n_59, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_7, not_null(o_59), not_null(p_59));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm q_12;
  q_12 = t;
  {
    ATerm b_3 (ATerm t)
    {
      t = term_v_12;
      t = h_58(t);
      return(t);
    }
    t = try_1(t, b_3);
  }
  t = q_12;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm b_60 = NULL;
      ATerm w_12;
      w_12 = t;
      {
        ATerm z_59 = NULL;
        ATerm a_60 = NULL;
        a_60 = t;
        if(((z_59 != NULL) && (z_59 != a_60)))
          _fail(a_60);
        else
          z_59 = a_60;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(z_59));
          t = set_config_0(t);
        }
      }
      t = w_12;
      {
        ATerm d_60 = NULL;
        d_60 = t;
        if(((b_60 != NULL) && (b_60 != d_60)))
          _fail(d_60);
        else
          b_60 = d_60;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_60));
      }
      return(t);
    }
    ATerm d_3 (ATerm t)
    {
      ATerm x_12 = t;
      int y_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_13);
            }
          else
            {
              t = z_12;
              {
                t = h_58(t);
                t = Cons_2(t, _id, d_3);
              }
            }
          LocalPopChoice(y_12);
        }
      else
        {
          t = x_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_3, d_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
  ATerm d_13;
  d_13 = t;
  {
    ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
    n_60 = t;
    j_60 :
    if(match_cons(n_60, sym__3))
      {
        o_60 = ATgetArgument(n_60, 0);
        p_60 = ATgetArgument(n_60, 1);
        q_60 = ATgetArgument(n_60, 2);
        {
          if(((k_60 != NULL) && (k_60 != o_60)))
            _fail(o_60);
          else
            k_60 = o_60;
          {
            if(((l_60 != NULL) && (l_60 != p_60)))
              _fail(p_60);
            else
              l_60 = p_60;
            {
              if(((m_60 != NULL) && (m_60 != q_60)))
                _fail(q_60);
              else
                m_60 = q_60;
              t = SSL_table_put(not_null(k_60), not_null(l_60), not_null(m_60));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_58 (ATerm))
{
  ATerm v_60 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    t = term_j_13;
    t = table_put_0(t);
  }
  t = i_13;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_58(t);
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_3);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_y_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm g_3 (ATerm t)
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm w_60 = NULL;
                  w_60 = t;
                  if(((v_60 != NULL) && (v_60 != w_60)))
                    _fail(w_60);
                  else
                    v_60 = w_60;
                  return(t);
                }
                t = Undefined_1(t, h_3);
                return(t);
              }
              t = option_defined_1(t, g_3);
              {
                ATerm q_13;
                q_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_60)), term_v_13));
                  t = printnl_0(t);
                }
                t = q_13;
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_3);
      {
        ATerm w_13;
        w_13 = t;
        {
          t = term_m_11;
          t = table_destroy_0(t);
        }
        t = w_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_59(t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_3);
  {
    t = store_options_0(t);
    {
      t = t_59(t);
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_59);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, q_59);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm), ATerm m_59 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      ATerm h_14;
      h_14 = t;
      {
        ATerm z_60 = NULL;
        ATerm a_61 = NULL;
        t = term_g_8;
        {
          t = get_config_0(t);
          {
            a_61 = t;
            if(((z_60 != NULL) && (z_60 != a_61)))
              _fail(a_61);
            else
              z_60 = a_61;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, not_null(z_60)));
          t = printnl_0(t);
        }
      }
      t = h_14;
      return(t);
    }
    t = if_verbose2_1(t, k_3);
    return(t);
  }
  t = iowrap_4(t, k_59, l_59, m_59, j_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_59 (ATerm), ATerm j_59 (ATerm))
{
  t = iowrap_3(t, i_59, j_59, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    t = _2(t, _id, f_59);
    return(t);
  }
  t = iowrap_2(t, l_3, _fail);
  return(t);
}
ATerm abox_format_0 (ATerm t)
{
  t = iowrap_1(t, Box_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = abox_format_0(t);
  return(t);
}

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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_c_17;
ATerm term_a_16;
ATerm term_m_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_b_10;
ATerm term_i_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_o_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_k_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_b_6;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_z_4;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_k_4;
ATerm term_j_4;
ATerm term_i_4;
ATerm term_f_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
void init_constant_terms (void)
{
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_SOpt_2, term_b_4, term_c_4);
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(sym_S_1, term_f_4);
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym_SOpt_2, term_j_4, term_c_4);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym_S_1, term_m_4);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym_S_1, term_w_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym_S_1, term_z_4);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("]", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_S_1, term_d_5);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("[]", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_S_1, term_f_5);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   {", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_S_1, term_b_6);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_S_1, term_h_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_o_8);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_8);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_v_4);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_v_4);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_v_4);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__3, term_g_14, term_l_14, (ATerm) ATempty);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm UP_App_1 (ATerm, ATerm c_54 (ATerm));
ATerm UP_Cnst_0 (ATerm);
ATerm hpost_sep_list_2 (ATerm, ATerm v_53 (ATerm), ATerm w_53 (ATerm));
ATerm post_commas_0 (ATerm);
ATerm UP_Lst_1 (ATerm, ATerm m_0 (ATerm));
ATerm Quote_0 (ATerm);
ATerm UP_Str_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm UP_Int_0 (ATerm);
ATerm ugly_print_without_anno_0 (ATerm);
ATerm ugly_print_with_anno_0 (ATerm);
ATerm get_annotations_0 (ATerm);
ATerm has_annotation_0 (ATerm);
ATerm ugly_print_0 (ATerm);
ATerm _2 (ATerm, ATerm d_45 (ATerm), ATerm e_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_61 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_59 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm crush_2 (ATerm, ATerm g_67 (ATerm), ATerm h_67 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_61 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_64 (ATerm), ATerm d_64 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_60 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_71 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_58 (ATerm));
ATerm map_1 (ATerm, ATerm d_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_57 (ATerm));
ATerm Program_1 (ATerm, ATerm g_48 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_48 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_58 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_58 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_53 (ATerm), ATerm b_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_58 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm p_60 (ATerm), ATerm q_60 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_60 (ATerm), ATerm i_60 (ATerm), ATerm j_60 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_60 (ATerm));
ATerm PpTerm_0 (ATerm);
ATerm main_0 (ATerm);
ATerm UP_App_1 (ATerm t, ATerm c_54 (ATerm))
{
  ATerm i_1 = NULL;
  ATerm u_1 = NULL,v_1 = NULL,e_2 = NULL;
  i_1 = t;
  {
    ATerm a_4;
    a_4 = t;
    {
      ATerm z_1 = NULL;
      ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
      t = not_null(i_1);
      {
        z_1 = t;
        {
          t = SSL_explode_term(not_null(z_1));
          {
            b_2 = t;
            g_1 :
            if(match_cons(b_2, sym__2))
              {
                c_2 = ATgetArgument(b_2, 0);
                d_2 = ATgetArgument(b_2, 1);
                {
                  if(((u_1 != NULL) && (u_1 != c_2)))
                    _fail(c_2);
                  else
                    u_1 = c_2;
                  if(((v_1 != NULL) && (v_1 != d_2)))
                    _fail(d_2);
                  else
                    v_1 = d_2;
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
    t = a_4;
    {
      ATerm f_2 = NULL;
      t = not_null(v_1);
      {
        t = map_1(t, c_54);
        {
          t = post_commas_0(t);
          {
            f_2 = t;
            if(((e_2 != NULL) && (e_2 != f_2)))
              _fail(f_2);
            else
              e_2 = f_2;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_4), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_4), (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_k_4), not_null(e_2))), term_i_4))), (ATerm) ATmakeAppl(sym_S_1, not_null(u_1))));
    }
  }
  return(t);
}
ATerm UP_Cnst_0 (ATerm t)
{
  ATerm p_2 = NULL;
  ATerm r_2 = NULL;
  p_2 = t;
  {
    ATerm s_2 = NULL;
    ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
    t = not_null(p_2);
    {
      s_2 = t;
      {
        t = SSL_explode_term(not_null(s_2));
        {
          u_2 = t;
          n_2 :
          if(match_cons(u_2, sym__2))
            {
              v_2 = ATgetArgument(u_2, 0);
              w_2 = ATgetArgument(u_2, 1);
              o_2 :
              if(((ATermList) w_2 == ATempty))
                {
                  if(((r_2 != NULL) && (r_2 != v_2)))
                    _fail(v_2);
                  else
                    r_2 = v_2;
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
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(r_2));
  }
  return(t);
}
ATerm hpost_sep_list_2 (ATerm t, ATerm v_53 (ATerm), ATerm w_53 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm o_4 = t;
    int q_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_4);
      }
    else
      {
        t = o_4;
        {
          ATerm r_4 = t;
          int s_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, v_53, Nil_0);
              LocalPopChoice(s_4);
            }
          else
            {
              t = r_4;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm d_3 = NULL;
                  ATerm f_3 = NULL,h_3 = NULL;
                  d_3 = t;
                  {
                    ATerm u_4;
                    u_4 = t;
                    {
                      ATerm g_3 = NULL;
                      t = not_null(d_3);
                      {
                        t = v_53(t);
                        {
                          g_3 = t;
                          if(((f_3 != NULL) && (f_3 != g_3)))
                            _fail(g_3);
                          else
                            f_3 = g_3;
                        }
                      }
                    }
                    t = u_4;
                    {
                      ATerm i_3 = NULL;
                      t = term_v_4;
                      {
                        t = w_53(t);
                        {
                          i_3 = t;
                          if(((h_3 != NULL) && (h_3 != i_3)))
                            _fail(i_3);
                          else
                            h_3 = i_3;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_4), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_3)), not_null(f_3)));
                    }
                  }
                  return(t);
                }
                t = Cons_2(t, c_0, j_3);
              }
            }
        }
      }
    return(t);
  }
  t = j_3(t);
  return(t);
}
ATerm post_commas_0 (ATerm t)
{
  ATerm d_0 (ATerm t)
  {
    t = term_x_4;
    return(t);
  }
  t = hpost_sep_list_2(t, _id, d_0);
  return(t);
}
ATerm UP_Lst_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  t_3 = t;
  q_3 :
  if(((ATgetType(t_3) == AT_LIST) && ((ATermList) t_3 != ATempty)))
    {
      r_3 = ATgetFirst((ATermList) t_3);
      s_3 = (ATerm) ATgetNext((ATermList) t_3);
      {
        ATerm x_3 = NULL;
        ATerm y_3 = NULL;
        t = not_null(t_3);
        {
          t = map_1(t, m_0);
          {
            t = post_commas_0(t);
            {
              y_3 = t;
              if(((x_3 != NULL) && (x_3 != y_3)))
                _fail(y_3);
              else
                x_3 = y_3;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_4), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_5), (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_k_4), not_null(x_3))), term_c_5));
      }
    }
  else
    {
      if(((ATermList) t_3 == ATempty))
        {
          t = term_k_5;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Quote_0 (ATerm t)
{
  ATerm e_4 = NULL;
  ATerm g_4 = NULL;
  e_4 = t;
  {
    ATerm h_4 = NULL;
    t = (ATerm) ATinsert(ATempty, term_l_5);
    {
      t = implode_string_0(t);
      {
        h_4 = t;
        if(((g_4 != NULL) && (g_4 != h_4)))
          _fail(h_4);
        else
          g_4 = h_4;
      }
    }
    t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_4), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, not_null(g_4))), not_null(e_4)), (ATerm) ATmakeAppl(sym_S_1, not_null(g_4))));
  }
  return(t);
}
ATerm UP_Str_0 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  {
    t = not_null(l_4);
    t = is_string_0(t);
    {
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(l_4));
      t = Quote_0(t);
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  t = SSL_int_to_string(not_null(p_4));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm t_4 = NULL;
  t_4 = t;
  t = SSL_is_int(not_null(t_4));
  return(t);
}
ATerm UP_Int_0 (ATerm t)
{
  ATerm y_4 = NULL;
  ATerm a_5 = NULL;
  y_4 = t;
  {
    ATerm m_5;
    m_5 = t;
    {
      t = not_null(y_4);
      t = is_int_0(t);
    }
    t = m_5;
    {
      ATerm b_5 = NULL;
      t = not_null(y_4);
      {
        t = int_to_string_0(t);
        {
          b_5 = t;
          if(((a_5 != NULL) && (a_5 != b_5)))
            _fail(b_5);
          else
            a_5 = b_5;
        }
      }
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(a_5));
    }
  }
  return(t);
}
ATerm ugly_print_without_anno_0 (ATerm t)
{
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UP_Int_0(t);
      LocalPopChoice(p_5);
    }
  else
    {
      t = o_5;
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UP_Str_0(t);
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            {
              ATerm s_5 = t;
              int t_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UP_Lst_1(t, ugly_print_0);
                  LocalPopChoice(t_5);
                }
              else
                {
                  t = s_5;
                  {
                    ATerm u_5 = t;
                    int z_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = UP_Cnst_0(t);
                        LocalPopChoice(z_5);
                      }
                    else
                      {
                        t = u_5;
                        t = UP_App_1(t, ugly_print_0);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm ugly_print_with_anno_0 (ATerm t)
{
  ATerm g_5 = NULL,i_5 = NULL;
  ATerm a_6;
  a_6 = t;
  {
    ATerm h_5 = NULL;
    t = ugly_print_without_anno_0(t);
    {
      h_5 = t;
      if(((g_5 != NULL) && (g_5 != h_5)))
        _fail(h_5);
      else
        g_5 = h_5;
    }
  }
  t = a_6;
  {
    ATerm j_5 = NULL;
    t = get_annotations_0(t);
    {
      t = ugly_print_0(t);
      {
        j_5 = t;
        if(((i_5 != NULL) && (i_5 != j_5)))
          _fail(j_5);
        else
          i_5 = j_5;
      }
    }
    t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_k_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_6), not_null(i_5)), term_f_6))), not_null(g_5)));
  }
  return(t);
}
ATerm get_annotations_0 (ATerm t)
{
  ATerm n_5 = NULL;
  n_5 = t;
  t = SSLgetAnnotations(not_null(n_5));
  return(t);
}
ATerm has_annotation_0 (ATerm t)
{
  ATerm l_6;
  l_6 = t;
  {
    t = get_annotations_0(t);
    {
      ATerm m_6 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_6;
        }
    }
  }
  t = l_6;
  return(t);
}
ATerm ugly_print_0 (ATerm t)
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_annotation_0(t);
      LocalPopChoice(o_6);
      t = ugly_print_with_anno_0(t);
    }
  else
    {
      t = n_6;
      t = ugly_print_without_anno_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm d_45 (ATerm), ATerm e_45 (ATerm))
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym__2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      {
        ATerm c_6 = NULL,e_6 = NULL;
        ATerm d_6 = NULL;
        t = SSLgetAnnotations(not_null(w_5));
        {
          d_6 = t;
          if(((c_6 != NULL) && (c_6 != d_6)))
            _fail(d_6);
          else
            c_6 = d_6;
        }
        {
          t = not_null(x_5);
          {
            ATerm g_6 = NULL;
            t = d_45(t);
            {
              e_6 = t;
              {
                t = not_null(y_5);
                {
                  ATerm i_6 = NULL;
                  t = e_45(t);
                  {
                    g_6 = t;
                    {
                      ATerm j_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_6), not_null(g_6)), not_null(c_6));
                      {
                        j_6 = t;
                        if(((i_6 != NULL) && (i_6 != j_6)))
                          _fail(j_6);
                        else
                          i_6 = j_6;
                      }
                      t = not_null(i_6);
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
  ATerm r_6 = NULL;
  ATerm p_6;
  p_6 = t;
  {
    ATerm g_0 (ATerm t)
    {
      ATerm s_6 = NULL,t_6 = NULL;
      s_6 = t;
      q_6 :
      if(match_cons(s_6, sym_Program_1))
        {
          t_6 = ATgetArgument(s_6, 0);
          if(((r_6 != NULL) && (r_6 != t_6)))
            _fail(t_6);
          else
            r_6 = t_6;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_7), not_null(r_6)), term_v_6));
      {
        t = printnl_0(t);
        {
          t = term_b_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym__2))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      {
        ATerm c_7;
        c_7 = t;
        t = SSL_printnl(not_null(y_6), not_null(z_6));
        t = c_7;
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
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        t = not_null(g_7);
        {
          ATerm h_0 (ATerm t)
          {
            t = not_null(h_7);
            return(t);
          }
          t = at_end_1(t, h_0);
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
ATerm debug_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm d_7;
  d_7 = t;
  {
    ATerm n_7 = NULL,p_7 = NULL;
    ATerm i_7;
    i_7 = t;
    {
      ATerm o_7 = NULL;
      t = r_61(t);
      {
        o_7 = t;
        if(((n_7 != NULL) && (n_7 != o_7)))
          _fail(o_7);
        else
          n_7 = o_7;
      }
    }
    t = i_7;
    {
      ATerm q_7 = NULL;
      q_7 = t;
      if(((p_7 != NULL) && (p_7 != q_7)))
        _fail(q_7);
      else
        p_7 = q_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_7)), not_null(n_7)));
        t = printnl_0(t);
      }
    }
  }
  t = d_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  t = SSL_is_string(not_null(u_7));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_0);
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
              d_8 = t;
              c_8 :
              if(match_cons(d_8, sym_Path_1))
                {
                  e_8 = ATgetArgument(d_8, 0);
                  t = not_null(e_8);
                }
              else
                {
                  if(match_cons(d_8, sym_Var_1))
                    {
                      e_8 = ATgetArgument(d_8, 0);
                      {
                        t = not_null(e_8);
                        {
                          ATerm r_7 = t;
                          int s_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_7);
                            }
                          else
                            {
                              t = r_7;
                              {
                                ATerm o_0 (ATerm t)
                                {
                                  t = term_t_7;
                                  return(t);
                                }
                                t = debug_1(t, o_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_8, sym_Prefix_2))
                        {
                          e_8 = ATgetArgument(d_8, 0);
                          f_8 = ATgetArgument(d_8, 1);
                          {
                            ATerm k_8 = NULL,m_8 = NULL;
                            ATerm v_7;
                            v_7 = t;
                            {
                              ATerm l_8 = NULL;
                              t = not_null(e_8);
                              {
                                t = eval_config_0(t);
                                {
                                  l_8 = t;
                                  if(((k_8 != NULL) && (k_8 != l_8)))
                                    _fail(l_8);
                                  else
                                    k_8 = l_8;
                                }
                              }
                            }
                            t = v_7;
                            {
                              ATerm n_8 = NULL;
                              t = not_null(f_8);
                              {
                                t = eval_config_0(t);
                                {
                                  n_8 = t;
                                  if(((m_8 != NULL) && (m_8 != n_8)))
                                    _fail(n_8);
                                  else
                                    m_8 = n_8;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(m_8));
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
  ATerm v_8 = NULL;
  v_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(v_8));
    {
      t = table_get_0(t);
      {
        ATerm p_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_7;
            x_7 = t;
            {
              ATerm x_8 = NULL;
              ATerm y_8 = NULL;
              y_8 = t;
              if(((x_8 != NULL) && (x_8 != y_8)))
                _fail(y_8);
              else
                x_8 = y_8;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(v_8), not_null(x_8));
                t = table_put_0(t);
              }
            }
            t = x_7;
          }
          return(t);
        }
        t = try_1(t, p_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm y_7;
    y_7 = t;
    {
      ATerm c_9 = NULL;
      ATerm d_9 = NULL;
      t = term_z_7;
      {
        t = get_config_0(t);
        {
          d_9 = t;
          if(((c_9 != NULL) && (c_9 != d_9)))
            _fail(d_9);
          else
            c_9 = d_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), term_a_8);
        t = geq_0(t);
      }
    }
    t = y_7;
    t = b_59(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, term_b_8));
  {
    t = printnl_0(t);
    {
      t = term_b_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_TicksToSeconds(not_null(g_9));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym__2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_9), not_null(n_9));
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = SSL_addr(not_null(m_9), not_null(n_9));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_65(t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
        u_9 = t;
        t_9 :
        if(((ATgetType(u_9) == AT_LIST) && ((ATermList) u_9 != ATempty)))
          {
            v_9 = ATgetFirst((ATermList) u_9);
            w_9 = (ATerm) ATgetNext((ATermList) u_9);
            {
              ATerm z_9 = NULL;
              ATerm a_10 = NULL;
              t = not_null(w_9);
              {
                t = foldr_2(t, o_65, p_65);
                {
                  a_10 = t;
                  if(((z_9 != NULL) && (z_9 != a_10)))
                    _fail(a_10);
                  else
                    z_9 = a_10;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(z_9));
                t = p_65(t);
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
ATerm crush_2 (ATerm t, ATerm g_67 (ATerm), ATerm h_67 (ATerm))
{
  ATerm h_10 = NULL;
  ATerm j_10 = NULL;
  h_10 = t;
  {
    ATerm k_10 = NULL;
    ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
    t = not_null(h_10);
    {
      k_10 = t;
      {
        t = SSL_explode_term(not_null(k_10));
        {
          m_10 = t;
          g_10 :
          if(match_cons(m_10, sym__2))
            {
              n_10 = ATgetArgument(m_10, 0);
              o_10 = ATgetArgument(m_10, 1);
              if(((j_10 != NULL) && (j_10 != o_10)))
                _fail(o_10);
              else
                j_10 = o_10;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_10);
      t = foldr_2(t, g_67, h_67);
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
    ATerm r_0 (ATerm t)
    {
      t = term_o_8;
      return(t);
    }
    t = crush_2(t, r_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym__2))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      {
        ATerm p_8;
        p_8 = t;
        {
          ATerm q_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_10), not_null(w_10));
              LocalPopChoice(r_8);
            }
          else
            {
              t = q_8;
              t = SSL_gtr(not_null(v_10), not_null(w_10));
            }
        }
        t = p_8;
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
  ATerm c_11 = NULL;
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
      d_11 = t;
      b_11 :
      if(match_cons(d_11, sym__2))
        {
          e_11 = ATgetArgument(d_11, 0);
          f_11 = ATgetArgument(d_11, 1);
          {
            if(((c_11 != NULL) && (c_11 != e_11)))
              _fail(e_11);
            else
              c_11 = e_11;
            if(((c_11 != NULL) && (c_11 != f_11)))
              _fail(f_11);
            else
              c_11 = f_11;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm u_8;
    u_8 = t;
    {
      ATerm i_11 = NULL;
      ATerm j_11 = NULL;
      t = term_z_7;
      {
        t = get_config_0(t);
        {
          j_11 = t;
          if(((i_11 != NULL) && (i_11 != j_11)))
            _fail(j_11);
          else
            i_11 = j_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), term_b_7);
        t = geq_0(t);
      }
    }
    t = u_8;
    t = a_59(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm n_11 = NULL,p_11 = NULL;
    ATerm w_8;
    w_8 = t;
    {
      ATerm o_11 = NULL;
      t = run_time_0(t);
      {
        o_11 = t;
        if(((n_11 != NULL) && (n_11 != o_11)))
          _fail(o_11);
        else
          n_11 = o_11;
      }
    }
    t = w_8;
    {
      ATerm q_11 = NULL;
      t = term_z_8;
      {
        t = get_config_0(t);
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_9), not_null(n_11)), term_a_9), not_null(p_11)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_0);
  {
    t = term_o_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym__2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      t = SSL_WriteToTextFile(not_null(w_11), not_null(x_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym__2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      t = SSL_WriteToBinaryFile(not_null(e_12), not_null(f_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_12 = NULL;
  ATerm e_9;
  e_9 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm f_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            ATerm o_12 = NULL,p_12 = NULL;
            o_12 = t;
            k_12 :
            if(match_cons(o_12, sym_Output_1))
              {
                p_12 = ATgetArgument(o_12, 0);
                if(((n_12 != NULL) && (n_12 != p_12)))
                  _fail(p_12);
                else
                  n_12 = p_12;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_0);
          LocalPopChoice(h_9);
        }
      else
        {
          t = f_9;
          {
            ATerm q_12 = NULL;
            t = term_i_9;
            {
              q_12 = t;
              if(((n_12 != NULL) && (n_12 != q_12)))
                _fail(q_12);
              else
                n_12 = q_12;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_0, _id);
  }
  t = e_9;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        t = not_null(n_12);
        return(t);
      }
      t = split_2(t, x_0, _id);
      return(t);
    }
    t = _2(t, _id, w_0);
    {
      ATerm j_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              ATerm r_12 = NULL;
              r_12 = t;
              m_12 :
              if(!(match_cons(r_12, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_0);
            return(t);
          }
          t = _2(t, y_0, WriteToBinaryFile_0);
          LocalPopChoice(o_9);
        }
      else
        {
          t = j_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm b_61 (ATerm))
{
  ATerm x_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  ATerm p_9;
  p_9 = t;
  t = dtime_0(t);
  t = p_9;
  {
    t = b_61(t);
    {
      ATerm q_9;
      q_9 = t;
      {
        ATerm y_12 = NULL;
        t = dtime_0(t);
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
      }
      t = q_9;
      {
        z_12 = t;
        w_12 :
        if(match_cons(z_12, sym__2))
          {
            a_13 = ATgetArgument(z_12, 0);
            b_13 = ATgetArgument(z_12, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_13)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_12))), not_null(b_13));
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
  ATerm h_13 = NULL;
  h_13 = t;
  t = SSL_ReadFromFile(not_null(h_13));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_64 (ATerm), ATerm d_64 (ATerm))
{
  ATerm m_13 = NULL,o_13 = NULL;
  ATerm r_9;
  r_9 = t;
  {
    ATerm n_13 = NULL;
    t = c_64(t);
    {
      n_13 = t;
      if(((m_13 != NULL) && (m_13 != n_13)))
        _fail(n_13);
      else
        m_13 = n_13;
    }
  }
  t = r_9;
  {
    ATerm p_13 = NULL;
    t = d_64(t);
    {
      p_13 = t;
      if(((o_13 != NULL) && (o_13 != p_13)))
        _fail(p_13);
      else
        o_13 = p_13;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), not_null(o_13));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_13 = NULL;
  ATerm s_9;
  s_9 = t;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 (ATerm t)
        {
          ATerm w_13 = NULL,x_13 = NULL;
          w_13 = t;
          t_13 :
          if(match_cons(w_13, sym_Input_1))
            {
              x_13 = ATgetArgument(w_13, 0);
              if(((v_13 != NULL) && (v_13 != x_13)))
                _fail(x_13);
              else
                v_13 = x_13;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, a_1);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        {
          ATerm y_13 = NULL;
          t = term_b_10;
          {
            y_13 = t;
            if(((v_13 != NULL) && (v_13 != y_13)))
              _fail(y_13);
            else
              v_13 = y_13;
          }
        }
      }
  }
  t = s_9;
  {
    ATerm b_1 (ATerm t)
    {
      t = not_null(v_13);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Version_0))
    {
      ATerm h_14 = NULL,j_14 = NULL;
      ATerm c_10;
      c_10 = t;
      {
        ATerm i_14 = NULL;
        t = SSLgetAnnotations(not_null(f_14));
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
      }
      t = c_10;
      {
        ATerm k_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_14));
        {
          k_14 = t;
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
        }
        t = not_null(j_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_60 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          ATerm f_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_10);
            }
          else
            {
              t = f_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_1);
  t = z_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  t = SSL_table_create(not_null(p_14));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  {
    ATerm l_10;
    l_10 = t;
    {
      t = term_p_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_10, term_q_10, not_null(t_14));
          t = table_put_0(t);
        }
      }
    }
    t = l_10;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  t = SSL_string_to_int(not_null(x_14));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  f_15 = t;
  d_15 :
  if(match_string(f_15, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_15) == AT_LIST) && ((ATermList) f_15 != ATempty)))
        {
          g_15 = ATgetFirst((ATermList) f_15);
          h_15 = (ATerm) ATgetNext((ATermList) f_15);
          e_15 :
          if(((ATgetType(h_15) == AT_LIST) && ((ATermList) h_15 != ATempty)))
            {
              i_15 = ATgetFirst((ATermList) h_15);
              j_15 = (ATerm) ATgetNext((ATermList) h_15);
              {
                ATerm n_15 = NULL;
                ATerm r_10;
                r_10 = t;
                {
                  t = not_null(g_15);
                  t = j_0(t);
                }
                t = r_10;
                {
                  ATerm o_15 = NULL;
                  t = not_null(i_15);
                  {
                    t = k_0(t);
                    {
                      o_15 = t;
                      if(((n_15 != NULL) && (n_15 != o_15)))
                        _fail(o_15);
                      else
                        n_15 = o_15;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_15)), not_null(n_15));
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
  ATerm s_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm f_16 = NULL;
        f_16 = t;
        s_15 :
        if(!(match_string(f_16, "-i")))
          {
            if(!(match_string(f_16, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        ATerm i_16 = NULL;
        ATerm y_10;
        y_10 = t;
        {
          ATerm g_16 = NULL;
          ATerm h_16 = NULL;
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(g_16));
            t = set_config_0(t);
          }
        }
        t = y_10;
        {
          ATerm j_16 = NULL;
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_16));
        }
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        t = term_a_11;
        return(t);
      }
      t = ArgOption_3(t, d_1, e_1, f_1);
      LocalPopChoice(x_10);
    }
  else
    {
      t = s_10;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm k_16 = NULL;
              k_16 = t;
              v_15 :
              if(!(match_string(k_16, "-o")))
                {
                  if(!(match_string(k_16, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              ATerm n_16 = NULL;
              ATerm k_11;
              k_11 = t;
              {
                ATerm l_16 = NULL;
                ATerm m_16 = NULL;
                m_16 = t;
                if(((l_16 != NULL) && (l_16 != m_16)))
                  _fail(m_16);
                else
                  l_16 = m_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(l_16));
                  t = set_config_0(t);
                }
              }
              t = k_11;
              {
                ATerm o_16 = NULL;
                o_16 = t;
                if(((n_16 != NULL) && (n_16 != o_16)))
                  _fail(o_16);
                else
                  n_16 = o_16;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_16));
              }
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              t = term_m_11;
              return(t);
            }
            t = ArgOption_3(t, h_1, j_1, k_1);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm r_11 = t;
              int s_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm p_16 = NULL;
                    p_16 = t;
                    y_15 :
                    if(!(match_string(p_16, "-S")))
                      {
                        if(!(match_string(p_16, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_1 (ATerm t)
                  {
                    t = term_t_11;
                    t = set_config_0(t);
                    t = term_y_11;
                    return(t);
                  }
                  ATerm n_1 (ATerm t)
                  {
                    t = term_z_11;
                    return(t);
                  }
                  t = Option_3(t, l_1, m_1, n_1);
                  LocalPopChoice(s_11);
                }
              else
                {
                  t = r_11;
                  {
                    ATerm a_12 = t;
                    int b_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_1 (ATerm t)
                        {
                          ATerm q_16 = NULL;
                          q_16 = t;
                          z_15 :
                          if(!(match_string(q_16, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_1 (ATerm t)
                        {
                          ATerm t_16 = NULL;
                          ATerm g_12;
                          g_12 = t;
                          {
                            ATerm r_16 = NULL;
                            ATerm s_16 = NULL;
                            t = string_to_int_0(t);
                            {
                              s_16 = t;
                              if(((r_16 != NULL) && (r_16 != s_16)))
                                _fail(s_16);
                              else
                                r_16 = s_16;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(r_16));
                              t = set_config_0(t);
                            }
                          }
                          t = g_12;
                          {
                            ATerm u_16 = NULL;
                            u_16 = t;
                            if(((t_16 != NULL) && (t_16 != u_16)))
                              _fail(u_16);
                            else
                              t_16 = u_16;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_16));
                          }
                          return(t);
                        }
                        ATerm q_1 (ATerm t)
                        {
                          t = term_h_12;
                          return(t);
                        }
                        t = ArgOption_3(t, o_1, p_1, q_1);
                        LocalPopChoice(b_12);
                      }
                    else
                      {
                        t = a_12;
                        {
                          ATerm i_12 = t;
                          int j_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_1 (ATerm t)
                              {
                                ATerm v_16 = NULL;
                                v_16 = t;
                                c_16 :
                                if(!(match_string(v_16, "-v")))
                                  {
                                    if(!(match_string(v_16, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm s_1 (ATerm t)
                              {
                                t = term_s_12;
                                t = set_config_0(t);
                                t = term_t_12;
                                return(t);
                              }
                              ATerm t_1 (ATerm t)
                              {
                                t = term_u_12;
                                return(t);
                              }
                              t = Option_3(t, r_1, s_1, t_1);
                              LocalPopChoice(j_12);
                            }
                          else
                            {
                              t = i_12;
                              {
                                ATerm v_12 = t;
                                int c_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_1 (ATerm t)
                                    {
                                      ATerm w_16 = NULL;
                                      w_16 = t;
                                      d_16 :
                                      if(!(match_string(w_16, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm x_1 (ATerm t)
                                    {
                                      t = term_e_13;
                                      t = set_config_0(t);
                                      t = term_f_13;
                                      return(t);
                                    }
                                    ATerm y_1 (ATerm t)
                                    {
                                      t = term_g_13;
                                      return(t);
                                    }
                                    t = Option_3(t, w_1, x_1, y_1);
                                    LocalPopChoice(c_13);
                                  }
                                else
                                  {
                                    t = v_12;
                                    {
                                      ATerm a_2 (ATerm t)
                                      {
                                        ATerm x_16 = NULL;
                                        x_16 = t;
                                        e_16 :
                                        if(!(match_string(x_16, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm g_2 (ATerm t)
                                      {
                                        t = term_j_13;
                                        t = set_config_0(t);
                                        t = term_k_13;
                                        return(t);
                                      }
                                      ATerm h_2 (ATerm t)
                                      {
                                        t = term_l_13;
                                        return(t);
                                      }
                                      t = Option_3(t, a_2, g_2, h_2);
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
  ATerm f_17 = NULL;
  f_17 = t;
  t = SSL_table_destroy(not_null(f_17));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  t = SSL_exit(not_null(k_17));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  t = SSL_implode_string(not_null(q_17));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm b_18 (ATerm t)
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_18);
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
          t = Nil_0(t);
          t = s_71(t);
        }
      }
    return(t);
  }
  t = b_18(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = s_13;
      {
        ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
        e_18 = t;
        d_18 :
        if(((ATgetType(e_18) == AT_LIST) && ((ATermList) e_18 != ATempty)))
          {
            f_18 = ATgetFirst((ATermList) e_18);
            g_18 = (ATerm) ATgetNext((ATermList) e_18);
            {
              t = not_null(f_18);
              {
                ATerm i_2 (ATerm t)
                {
                  t = not_null(g_18);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_2);
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
  ATerm m_18 = NULL;
  m_18 = t;
  t = SSL_explode_string(not_null(m_18));
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
ATerm long_description_1 (ATerm t, ATerm a_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm p_18 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = Cons_2(t, d_71, p_18);
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  y_18 = t;
  v_18 :
  if(((ATgetType(y_18) == AT_LIST) && ((ATermList) y_18 != ATempty)))
    {
      w_18 = ATgetFirst((ATermList) y_18);
      x_18 = (ATerm) ATgetNext((ATermList) y_18);
      {
        ATerm b_19 = NULL;
        t = not_null(x_18);
        {
          ATerm b_14;
          b_14 = t;
          {
            ATerm c_19 = NULL,e_19 = NULL,g_19 = NULL;
            ATerm c_14;
            c_14 = t;
            {
              ATerm d_19 = NULL;
              t = i_0(t);
              {
                d_19 = t;
                if(((c_19 != NULL) && (c_19 != d_19)))
                  _fail(d_19);
                else
                  c_19 = d_19;
              }
            }
            t = c_14;
            {
              ATerm f_19 = NULL;
              t = not_null(w_18);
              {
                t = f_0(t);
                {
                  f_19 = t;
                  if(((e_19 != NULL) && (e_19 != f_19)))
                    _fail(f_19);
                  else
                    e_19 = f_19;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_19)), not_null(e_19));
                {
                  g_19 = t;
                  if(((b_19 != NULL) && (b_19 != g_19)))
                    _fail(g_19);
                  else
                    b_19 = g_19;
                }
              }
            }
          }
          t = b_14;
          {
            ATerm j_2 (ATerm t)
            {
              t = not_null(b_19);
              return(t);
            }
            t = reverse_acc_2(t, f_0, j_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) y_18 == ATempty))
        {
          {
            t = term_v_4;
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
  ATerm k_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_57 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_48 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_Program_1))
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
            t = g_48(t);
            {
              x_19 = t;
              {
                ATerm a_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_19)), not_null(v_19));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm j_20 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      ATerm k_20 = NULL;
      k_20 = t;
      if(((j_20 != NULL) && (j_20 != k_20)))
        _fail(k_20);
      else
        j_20 = k_20;
      return(t);
    }
    t = Program_1(t, m_2);
    return(t);
  }
  t = option_defined_1(t, l_2);
  {
    ATerm q_2 (ATerm t)
    {
      ATerm l_20 = NULL;
      ATerm m_20 = NULL;
      t = term_v_4;
      {
        ATerm t_2 (ATerm t)
        {
          t = not_null(j_20);
          return(t);
        }
        t = short_description_1(t, t_2);
        {
          t = concat_strings_0(t);
          {
            m_20 = t;
            if(((l_20 != NULL) && (l_20 != m_20)))
              _fail(m_20);
            else
              l_20 = m_20;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(l_20)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, term_d_14));
      {
        t = printnl_0(t);
        {
          t = term_m_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm n_20 = NULL;
                  n_20 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_20)), term_n_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_2);
                {
                  ATerm y_2 (ATerm t)
                  {
                    ATerm p_20 = NULL;
                    ATerm q_20 = NULL;
                    t = term_v_4;
                    {
                      ATerm z_2 (ATerm t)
                      {
                        t = not_null(j_20);
                        return(t);
                      }
                      t = long_description_1(t, z_2);
                      {
                        t = concat_strings_0(t);
                        {
                          q_20 = t;
                          if(((p_20 != NULL) && (p_20 != q_20)))
                            _fail(q_20);
                          else
                            p_20 = q_20;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_20)), term_o_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_2);
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
ATerm Undefined_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm h_21 = NULL,i_21 = NULL;
  h_21 = t;
  g_21 :
  if(match_cons(h_21, sym_Undefined_1))
    {
      i_21 = ATgetArgument(h_21, 0);
      {
        ATerm l_21 = NULL,q_21 = NULL;
        ATerm m_21 = NULL;
        t = SSLgetAnnotations(not_null(h_21));
        {
          m_21 = t;
          if(((l_21 != NULL) && (l_21 != m_21)))
            _fail(m_21);
          else
            l_21 = m_21;
        }
        {
          t = not_null(i_21);
          {
            ATerm s_21 = NULL;
            t = h_48(t);
            {
              q_21 = t;
              {
                ATerm t_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_21)), not_null(l_21));
                {
                  t_21 = t;
                  if(((s_21 != NULL) && (s_21 != t_21)))
                    _fail(t_21);
                  else
                    s_21 = t_21;
                }
                t = not_null(s_21);
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
ATerm fetch_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm y_21 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_71, _id);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = Cons_2(t, _id, y_21);
      }
    return(t);
  }
  t = y_21(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_58 (ATerm))
{
  t = fetch_1(t, y_58);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym_Help_0))
    {
      ATerm f_22 = NULL,h_22 = NULL;
      ATerm s_14;
      s_14 = t;
      {
        ATerm g_22 = NULL;
        t = SSLgetAnnotations(not_null(d_22));
        {
          g_22 = t;
          if(((f_22 != NULL) && (f_22 != g_22)))
            _fail(g_22);
          else
            f_22 = g_22;
        }
      }
      t = s_14;
      {
        ATerm j_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_22));
        {
          j_22 = t;
          if(((h_22 != NULL) && (h_22 != j_22)))
            _fail(j_22);
          else
            h_22 = j_22;
        }
        t = not_null(h_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  o_22 :
  if(match_cons(p_22, sym__2))
    {
      q_22 = ATgetArgument(p_22, 0);
      r_22 = ATgetArgument(p_22, 1);
      t = SSL_table_get(not_null(q_22), not_null(r_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__3))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      b_23 = ATgetArgument(y_22, 2);
      {
        ATerm w_14;
        w_14 = t;
        {
          ATerm f_23 = NULL;
          ATerm g_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(a_23));
          {
            ATerm y_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_14);
              }
            else
              {
                t = y_14;
                t = (ATerm) ATempty;
              }
            {
              g_23 = t;
              if(((f_23 != NULL) && (f_23 != g_23)))
                _fail(g_23);
              else
                f_23 = g_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_22), not_null(a_23), (ATerm) ATinsert(CheckATermList(not_null(f_23)), not_null(b_23)));
            t = table_put_0(t);
          }
        }
        t = w_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm k_23 = NULL;
  ATerm l_23 = NULL;
  t = term_v_4;
  {
    t = e_58(t);
    {
      l_23 = t;
      if(((k_23 != NULL) && (k_23 != l_23)))
        _fail(l_23);
      else
        k_23 = l_23;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_14, term_l_14, not_null(k_23));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_string(r_23, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(r_23) == AT_LIST) && ((ATermList) r_23 != ATempty)))
        {
          s_23 = ATgetFirst((ATermList) r_23);
          t_23 = (ATerm) ATgetNext((ATermList) r_23);
          {
            ATerm e_24 = NULL;
            ATerm a_15;
            a_15 = t;
            {
              t = not_null(s_23);
              t = a_0(t);
            }
            t = a_15;
            {
              ATerm f_24 = NULL;
              t = term_v_4;
              {
                t = b_0(t);
                {
                  f_24 = t;
                  if(((e_24 != NULL) && (e_24 != f_24)))
                    _fail(f_24);
                  else
                    e_24 = f_24;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_23)), not_null(e_24));
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
  ATerm a_3 (ATerm t)
  {
    ATerm m_24 = NULL;
    m_24 = t;
    l_24 :
    if(!(match_string(m_24, "--help")))
      {
        if(!(match_string(m_24, "-h")))
          {
            if(!(match_string(m_24, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_b_15;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_c_15;
    return(t);
  }
  t = Option_3(t, a_3, b_3, c_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,t_24 = NULL;
  p_24 = t;
  o_24 :
  if(((ATgetType(p_24) == AT_LIST) && ((ATermList) p_24 != ATempty)))
    {
      q_24 = ATgetFirst((ATermList) p_24);
      t_24 = (ATerm) ATgetNext((ATermList) p_24);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_24)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_24)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_53 (ATerm), ATerm b_53 (ATerm))
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  o_25 :
  if(((ATgetType(p_25) == AT_LIST) && ((ATermList) p_25 != ATempty)))
    {
      q_25 = ATgetFirst((ATermList) p_25);
      r_25 = (ATerm) ATgetNext((ATermList) p_25);
      {
        ATerm v_25 = NULL,y_25 = NULL;
        ATerm w_25 = NULL;
        t = SSLgetAnnotations(not_null(p_25));
        {
          w_25 = t;
          if(((v_25 != NULL) && (v_25 != w_25)))
            _fail(w_25);
          else
            v_25 = w_25;
        }
        {
          t = not_null(q_25);
          {
            ATerm a_26 = NULL;
            t = a_53(t);
            {
              y_25 = t;
              {
                t = not_null(r_25);
                {
                  ATerm c_26 = NULL;
                  t = b_53(t);
                  {
                    a_26 = t;
                    {
                      ATerm d_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_26)), not_null(y_25)), not_null(v_25));
                      {
                        d_26 = t;
                        if(((c_26 != NULL) && (c_26 != d_26)))
                          _fail(d_26);
                        else
                          c_26 = d_26;
                      }
                      t = not_null(c_26);
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
  ATerm n_26 = NULL;
  n_26 = t;
  m_26 :
  if(((ATermList) n_26 == ATempty))
    {
      {
        ATerm p_26 = NULL,r_26 = NULL;
        ATerm k_15;
        k_15 = t;
        {
          ATerm q_26 = NULL;
          t = SSLgetAnnotations(not_null(n_26));
          {
            q_26 = t;
            if(((p_26 != NULL) && (p_26 != q_26)))
              _fail(q_26);
            else
              p_26 = q_26;
          }
        }
        t = k_15;
        {
          ATerm s_26 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_26));
          {
            s_26 = t;
            if(((r_26 != NULL) && (r_26 != s_26)))
              _fail(s_26);
            else
              r_26 = s_26;
          }
          t = not_null(r_26);
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
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym__2))
    {
      z_26 = ATgetArgument(y_26, 0);
      a_27 = ATgetArgument(y_26, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(z_26), not_null(a_27));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm l_15;
  l_15 = t;
  {
    ATerm e_3 (ATerm t)
    {
      t = term_m_15;
      t = c_58(t);
      return(t);
    }
    t = try_1(t, e_3);
  }
  t = l_15;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm i_27 = NULL;
      ATerm p_15;
      p_15 = t;
      {
        ATerm g_27 = NULL;
        ATerm h_27 = NULL;
        h_27 = t;
        if(((g_27 != NULL) && (g_27 != h_27)))
          _fail(h_27);
        else
          g_27 = h_27;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(g_27));
          t = set_config_0(t);
        }
      }
      t = p_15;
      {
        ATerm j_27 = NULL;
        j_27 = t;
        if(((i_27 != NULL) && (i_27 != j_27)))
          _fail(j_27);
        else
          i_27 = j_27;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_27));
      }
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              {
                t = c_58(t);
                t = Cons_2(t, _id, l_3);
              }
            }
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
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
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
    s_27 = t;
    o_27 :
    if(match_cons(s_27, sym__3))
      {
        t_27 = ATgetArgument(s_27, 0);
        u_27 = ATgetArgument(s_27, 1);
        v_27 = ATgetArgument(s_27, 2);
        {
          if(((p_27 != NULL) && (p_27 != t_27)))
            _fail(t_27);
          else
            p_27 = t_27;
          {
            if(((q_27 != NULL) && (q_27 != u_27)))
              _fail(u_27);
            else
              q_27 = u_27;
            {
              if(((r_27 != NULL) && (r_27 != v_27)))
                _fail(v_27);
              else
                r_27 = v_27;
              t = SSL_table_put(not_null(p_27), not_null(q_27), not_null(r_27));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm y_27 = NULL;
  ATerm x_15;
  x_15 = t;
  {
    t = term_a_16;
    t = table_put_0(t);
  }
  t = x_15;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm b_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_58(t);
          LocalPopChoice(y_16);
        }
      else
        {
          t = b_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_3);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_o_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm b_28 = NULL;
                  b_28 = t;
                  if(((y_27 != NULL) && (y_27 != b_28)))
                    _fail(b_28);
                  else
                    y_27 = b_28;
                  return(t);
                }
                t = Undefined_1(t, p_3);
                return(t);
              }
              t = option_defined_1(t, o_3);
              {
                ATerm b_17;
                b_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_27)), term_c_17));
                  t = printnl_0(t);
                }
                t = b_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_7;
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
        ATerm d_17;
        d_17 = t;
        {
          t = term_g_14;
          t = table_destroy_0(t);
        }
        t = d_17;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm p_60 (ATerm), ATerm q_60 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm e_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_60(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = e_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_3);
  {
    t = store_options_0(t);
    {
      t = q_60(t);
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_60);
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            {
              ATerm j_17 = t;
              int l_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, n_60);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(l_17);
                }
              else
                {
                  t = j_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_60 (ATerm), ATerm i_60 (ATerm), ATerm j_60 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm m_17;
      m_17 = t;
      {
        ATerm e_28 = NULL;
        ATerm k_28 = NULL;
        t = term_z_8;
        {
          t = get_config_0(t);
          {
            k_28 = t;
            if(((e_28 != NULL) && (e_28 != k_28)))
              _fail(k_28);
            else
              e_28 = k_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(e_28)));
          t = printnl_0(t);
        }
      }
      t = m_17;
      return(t);
    }
    t = if_verbose2_1(t, w_3);
    return(t);
  }
  t = iowrap_4(t, h_60, i_60, j_60, v_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  t = iowrap_3(t, f_60, g_60, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    t = _2(t, _id, c_60);
    return(t);
  }
  t = iowrap_2(t, z_3, _fail);
  return(t);
}
ATerm PpTerm_0 (ATerm t)
{
  t = iowrap_1(t, ugly_print_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = PpTerm_0(t);
  return(t);
}

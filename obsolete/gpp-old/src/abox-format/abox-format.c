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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
ATerm term_l_15;
ATerm term_x_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_f_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_s_6;
void init_constant_terms (void)
{
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_q_8);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_q_8);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_r_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_q_8);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__3, term_q_12, term_r_12, (ATerm) ATempty);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm is_int_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm v_49 (ATerm), ATerm w_49 (ATerm));
ATerm Arg_1 (ATerm, ATerm u_49 (ATerm));
ATerm LINT_2 (ATerm, ATerm s_49 (ATerm), ATerm t_49 (ATerm));
ATerm L_2 (ATerm, ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm list_1 (ATerm, ATerm d_62 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm r_48 (ATerm), ATerm s_48 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm o_49 (ATerm), ATerm p_49 (ATerm));
ATerm REF_2 (ATerm, ATerm m_49 (ATerm), ATerm n_49 (ATerm));
ATerm LBL_2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm R_2 (ATerm, ATerm y_48 (ATerm), ATerm z_48 (ATerm));
ATerm AR_1 (ATerm, ATerm c_49 (ATerm));
ATerm AC_1 (ATerm, ATerm b_49 (ATerm));
ATerm AL_1 (ATerm, ATerm a_49 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm A_3 (ATerm, ATerm v_48 (ATerm), ATerm w_48 (ATerm), ATerm x_48 (ATerm));
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
ATerm FFID_2 (ATerm, ATerm i_49 (ATerm), ATerm j_49 (ATerm));
ATerm FInt_2 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm f_49 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm d_49 (ATerm), ATerm e_49 (ATerm));
ATerm ALT_2 (ATerm, ATerm p_48 (ATerm), ATerm q_48 (ATerm));
ATerm HV_2 (ATerm, ATerm n_48 (ATerm), ATerm o_48 (ATerm));
ATerm V_2 (ATerm, ATerm l_48 (ATerm), ATerm m_48 (ATerm));
ATerm H_2 (ATerm, ATerm j_48 (ATerm), ATerm k_48 (ATerm));
ATerm S_1 (ATerm, ATerm i_48 (ATerm));
ATerm Box_0 (ATerm);
ATerm _2 (ATerm, ATerm x_46 (ATerm), ATerm y_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_62 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_61 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_72 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_74 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm crush_2 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm));
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
ATerm map_1 (ATerm, ATerm b_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_76 (ATerm));
ATerm Program_1 (ATerm, ATerm r_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_61 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_62 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_59 (ATerm));
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
ATerm abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm is_int_0 (ATerm t)
{
  ATerm j_1 = NULL;
  j_1 = t;
  t = SSL_is_int(not_null(j_1));
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm v_49 (ATerm), ATerm w_49 (ATerm))
{
  ATerm o_4 = NULL,p_4 = NULL,t_4 = NULL;
  o_4 = t;
  n_4 :
  if(match_cons(o_4, sym_Arg2_2))
    {
      p_4 = ATgetArgument(o_4, 0);
      t_4 = ATgetArgument(o_4, 1);
      {
        ATerm b_5 = NULL,g_5 = NULL;
        ATerm f_5 = NULL;
        t = SSLgetAnnotations(not_null(o_4));
        {
          f_5 = t;
          if(((b_5 != NULL) && (b_5 != f_5)))
            _fail(f_5);
          else
            b_5 = f_5;
        }
        {
          t = not_null(p_4);
          {
            ATerm l_5 = NULL;
            t = v_49(t);
            {
              g_5 = t;
              {
                t = not_null(t_4);
                {
                  ATerm n_5 = NULL;
                  t = w_49(t);
                  {
                    l_5 = t;
                    {
                      ATerm r_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(g_5), not_null(l_5)), not_null(b_5));
                      {
                        r_5 = t;
                        if(((n_5 != NULL) && (n_5 != r_5)))
                          _fail(r_5);
                        else
                          n_5 = r_5;
                      }
                      t = not_null(n_5);
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
ATerm Arg_1 (ATerm t, ATerm u_49 (ATerm))
{
  ATerm l_6 = NULL,d_9 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym_Arg_1))
    {
      d_9 = ATgetArgument(l_6, 0);
      {
        ATerm t_9 = NULL,v_9 = NULL;
        ATerm u_9 = NULL;
        t = SSLgetAnnotations(not_null(l_6));
        {
          u_9 = t;
          if(((t_9 != NULL) && (t_9 != u_9)))
            _fail(u_9);
          else
            t_9 = u_9;
        }
        {
          t = not_null(d_9);
          {
            ATerm h_10 = NULL;
            t = u_49(t);
            {
              v_9 = t;
              {
                ATerm i_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(v_9)), not_null(t_9));
                {
                  i_10 = t;
                  if(((h_10 != NULL) && (h_10 != i_10)))
                    _fail(i_10);
                  else
                    h_10 = i_10;
                }
                t = not_null(h_10);
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
ATerm LINT_2 (ATerm t, ATerm s_49 (ATerm), ATerm t_49 (ATerm))
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  v_10 :
  if(match_cons(w_10, sym_LINT_2))
    {
      x_10 = ATgetArgument(w_10, 0);
      y_10 = ATgetArgument(w_10, 1);
      {
        ATerm c_11 = NULL,e_11 = NULL;
        ATerm d_11 = NULL;
        t = SSLgetAnnotations(not_null(w_10));
        {
          d_11 = t;
          if(((c_11 != NULL) && (c_11 != d_11)))
            _fail(d_11);
          else
            c_11 = d_11;
        }
        {
          t = not_null(x_10);
          {
            ATerm g_11 = NULL;
            t = s_49(t);
            {
              e_11 = t;
              {
                t = not_null(y_10);
                {
                  ATerm i_11 = NULL;
                  t = t_49(t);
                  {
                    g_11 = t;
                    {
                      ATerm j_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LINT_2, not_null(e_11), not_null(g_11)), not_null(c_11));
                      {
                        j_11 = t;
                        if(((i_11 != NULL) && (i_11 != j_11)))
                          _fail(j_11);
                        else
                          i_11 = j_11;
                      }
                      t = not_null(i_11);
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
ATerm L_2 (ATerm t, ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym_L_2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        ATerm b_12 = NULL,d_12 = NULL;
        ATerm c_12 = NULL;
        t = SSLgetAnnotations(not_null(v_11));
        {
          c_12 = t;
          if(((b_12 != NULL) && (b_12 != c_12)))
            _fail(c_12);
          else
            b_12 = c_12;
        }
        {
          t = not_null(w_11);
          {
            ATerm f_12 = NULL;
            t = q_49(t);
            {
              d_12 = t;
              {
                t = not_null(x_11);
                {
                  ATerm h_12 = NULL;
                  t = r_49(t);
                  {
                    f_12 = t;
                    {
                      ATerm i_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(d_12), not_null(f_12)), not_null(b_12));
                      {
                        i_12 = t;
                        if(((h_12 != NULL) && (h_12 != i_12)))
                          _fail(i_12);
                        else
                          h_12 = i_12;
                      }
                      t = not_null(h_12);
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
ATerm list_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm o_12 (ATerm t)
  {
    ATerm j_3 = t;
    int k_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_3);
      }
    else
      {
        t = j_3;
        t = Cons_2(t, d_62, o_12);
      }
    return(t);
  }
  t = o_12(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_IS_0))
    {
      ATerm v_12 = NULL,x_12 = NULL;
      ATerm l_3;
      l_3 = t;
      {
        ATerm w_12 = NULL;
        t = SSLgetAnnotations(not_null(t_12));
        {
          w_12 = t;
          if(((v_12 != NULL) && (v_12 != w_12)))
            _fail(w_12);
          else
            v_12 = w_12;
        }
      }
      t = l_3;
      {
        ATerm y_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(v_12));
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
        t = not_null(x_12);
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
  ATerm g_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_HS_0))
    {
      ATerm i_13 = NULL,k_13 = NULL;
      ATerm m_3;
      m_3 = t;
      {
        ATerm j_13 = NULL;
        t = SSLgetAnnotations(not_null(g_13));
        {
          j_13 = t;
          if(((i_13 != NULL) && (i_13 != j_13)))
            _fail(j_13);
          else
            i_13 = j_13;
        }
      }
      t = m_3;
      {
        ATerm l_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(i_13));
        {
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
        }
        t = not_null(k_13);
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
  ATerm t_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_VS_0))
    {
      ATerm v_13 = NULL,x_13 = NULL;
      ATerm n_3;
      n_3 = t;
      {
        ATerm w_13 = NULL;
        t = SSLgetAnnotations(not_null(t_13));
        {
          w_13 = t;
          if(((v_13 != NULL) && (v_13 != w_13)))
            _fail(w_13);
          else
            v_13 = w_13;
        }
      }
      t = n_3;
      {
        ATerm y_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(v_13));
        {
          y_13 = t;
          if(((x_13 != NULL) && (x_13 != y_13)))
            _fail(y_13);
          else
            x_13 = y_13;
        }
        t = not_null(x_13);
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
  ATerm o_3 = t;
  int p_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = VS_0(t);
      LocalPopChoice(p_3);
    }
  else
    {
      t = o_3;
      {
        ATerm q_3 = t;
        int r_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HS_0(t);
            LocalPopChoice(r_3);
          }
        else
          {
            t = q_3;
            t = IS_0(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm r_48 (ATerm), ATerm s_48 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_SOpt_2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        ATerm o_14 = NULL,q_14 = NULL;
        ATerm p_14 = NULL;
        t = SSLgetAnnotations(not_null(i_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
        {
          t = not_null(j_14);
          {
            ATerm s_14 = NULL;
            t = r_48(t);
            {
              q_14 = t;
              {
                t = not_null(k_14);
                {
                  ATerm u_14 = NULL;
                  t = s_48(t);
                  {
                    s_14 = t;
                    {
                      ATerm v_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(q_14), not_null(s_14)), not_null(o_14));
                      {
                        v_14 = t;
                        if(((u_14 != NULL) && (u_14 != v_14)))
                          _fail(v_14);
                        else
                          u_14 = v_14;
                      }
                      t = not_null(u_14);
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
ATerm C_2 (ATerm t, ATerm o_49 (ATerm), ATerm p_49 (ATerm))
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  g_15 :
  if(match_cons(h_15, sym_C_2))
    {
      i_15 = ATgetArgument(h_15, 0);
      j_15 = ATgetArgument(h_15, 1);
      {
        ATerm n_15 = NULL,p_15 = NULL;
        ATerm o_15 = NULL;
        t = SSLgetAnnotations(not_null(h_15));
        {
          o_15 = t;
          if(((n_15 != NULL) && (n_15 != o_15)))
            _fail(o_15);
          else
            n_15 = o_15;
        }
        {
          t = not_null(i_15);
          {
            ATerm r_15 = NULL;
            t = o_49(t);
            {
              p_15 = t;
              {
                t = not_null(j_15);
                {
                  ATerm t_15 = NULL;
                  t = p_49(t);
                  {
                    r_15 = t;
                    {
                      ATerm u_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(p_15), not_null(r_15)), not_null(n_15));
                      {
                        u_15 = t;
                        if(((t_15 != NULL) && (t_15 != u_15)))
                          _fail(u_15);
                        else
                          t_15 = u_15;
                      }
                      t = not_null(t_15);
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
ATerm REF_2 (ATerm t, ATerm m_49 (ATerm), ATerm n_49 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym_REF_2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      {
        ATerm m_16 = NULL,o_16 = NULL;
        ATerm n_16 = NULL;
        t = SSLgetAnnotations(not_null(g_16));
        {
          n_16 = t;
          if(((m_16 != NULL) && (m_16 != n_16)))
            _fail(n_16);
          else
            m_16 = n_16;
        }
        {
          t = not_null(h_16);
          {
            ATerm q_16 = NULL;
            t = m_49(t);
            {
              o_16 = t;
              {
                t = not_null(i_16);
                {
                  ATerm s_16 = NULL;
                  t = n_49(t);
                  {
                    q_16 = t;
                    {
                      ATerm t_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_REF_2, not_null(o_16), not_null(q_16)), not_null(m_16));
                      {
                        t_16 = t;
                        if(((s_16 != NULL) && (s_16 != t_16)))
                          _fail(t_16);
                        else
                          s_16 = t_16;
                      }
                      t = not_null(s_16);
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
ATerm LBL_2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_LBL_2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      {
        ATerm l_17 = NULL,n_17 = NULL;
        ATerm m_17 = NULL;
        t = SSLgetAnnotations(not_null(f_17));
        {
          m_17 = t;
          if(((l_17 != NULL) && (l_17 != m_17)))
            _fail(m_17);
          else
            l_17 = m_17;
        }
        {
          t = not_null(g_17);
          {
            ATerm p_17 = NULL;
            t = k_49(t);
            {
              n_17 = t;
              {
                t = not_null(h_17);
                {
                  ATerm r_17 = NULL;
                  t = l_49(t);
                  {
                    p_17 = t;
                    {
                      ATerm s_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LBL_2, not_null(n_17), not_null(p_17)), not_null(l_17));
                      {
                        s_17 = t;
                        if(((r_17 != NULL) && (r_17 != s_17)))
                          _fail(s_17);
                        else
                          r_17 = s_17;
                      }
                      t = not_null(r_17);
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
ATerm R_2 (ATerm t, ATerm y_48 (ATerm), ATerm z_48 (ATerm))
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_R_2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        ATerm k_18 = NULL,m_18 = NULL;
        ATerm l_18 = NULL;
        t = SSLgetAnnotations(not_null(e_18));
        {
          l_18 = t;
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
        }
        {
          t = not_null(f_18);
          {
            ATerm o_18 = NULL;
            t = y_48(t);
            {
              m_18 = t;
              {
                t = not_null(g_18);
                {
                  ATerm q_18 = NULL;
                  t = z_48(t);
                  {
                    o_18 = t;
                    {
                      ATerm r_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(m_18), not_null(o_18)), not_null(k_18));
                      {
                        r_18 = t;
                        if(((q_18 != NULL) && (q_18 != r_18)))
                          _fail(r_18);
                        else
                          q_18 = r_18;
                      }
                      t = not_null(q_18);
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
ATerm AR_1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm c_19 = NULL,d_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_AR_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      {
        ATerm g_19 = NULL,i_19 = NULL;
        ATerm h_19 = NULL;
        t = SSLgetAnnotations(not_null(c_19));
        {
          h_19 = t;
          if(((g_19 != NULL) && (g_19 != h_19)))
            _fail(h_19);
          else
            g_19 = h_19;
        }
        {
          t = not_null(d_19);
          {
            ATerm k_19 = NULL;
            t = c_49(t);
            {
              i_19 = t;
              {
                ATerm l_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(i_19)), not_null(g_19));
                {
                  l_19 = t;
                  if(((k_19 != NULL) && (k_19 != l_19)))
                    _fail(l_19);
                  else
                    k_19 = l_19;
                }
                t = not_null(k_19);
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
ATerm AC_1 (ATerm t, ATerm b_49 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym_AC_1))
    {
      w_19 = ATgetArgument(v_19, 0);
      {
        ATerm z_19 = NULL,b_20 = NULL;
        ATerm a_20 = NULL;
        t = SSLgetAnnotations(not_null(v_19));
        {
          a_20 = t;
          if(((z_19 != NULL) && (z_19 != a_20)))
            _fail(a_20);
          else
            z_19 = a_20;
        }
        {
          t = not_null(w_19);
          {
            ATerm d_20 = NULL;
            t = b_49(t);
            {
              b_20 = t;
              {
                ATerm e_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(b_20)), not_null(z_19));
                {
                  e_20 = t;
                  if(((d_20 != NULL) && (d_20 != e_20)))
                    _fail(e_20);
                  else
                    d_20 = e_20;
                }
                t = not_null(d_20);
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
ATerm AL_1 (ATerm t, ATerm a_49 (ATerm))
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_AL_1))
    {
      p_20 = ATgetArgument(o_20, 0);
      {
        ATerm s_20 = NULL,u_20 = NULL;
        ATerm t_20 = NULL;
        t = SSLgetAnnotations(not_null(o_20));
        {
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
        }
        {
          t = not_null(p_20);
          {
            ATerm w_20 = NULL;
            t = a_49(t);
            {
              u_20 = t;
              {
                ATerm x_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(u_20)), not_null(s_20));
                {
                  x_20 = t;
                  if(((w_20 != NULL) && (w_20 != x_20)))
                    _fail(x_20);
                  else
                    w_20 = x_20;
                }
                t = not_null(w_20);
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
  ATerm s_3 = t;
  int t_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = list_1(t, S_Option_0);
        return(t);
      }
      t = AL_1(t, b_0);
      LocalPopChoice(t_3);
    }
  else
    {
      t = s_3;
      {
        ATerm u_3 = t;
        int v_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, c_0);
            LocalPopChoice(v_3);
          }
        else
          {
            t = u_3;
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
ATerm A_3 (ATerm t, ATerm v_48 (ATerm), ATerm w_48 (ATerm), ATerm x_48 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_A_3))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      m_21 = ATgetArgument(j_21, 2);
      {
        ATerm r_21 = NULL,t_21 = NULL;
        ATerm s_21 = NULL;
        t = SSLgetAnnotations(not_null(j_21));
        {
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
        }
        {
          t = not_null(k_21);
          {
            ATerm v_21 = NULL;
            t = v_48(t);
            {
              t_21 = t;
              {
                t = not_null(l_21);
                {
                  ATerm x_21 = NULL;
                  t = w_48(t);
                  {
                    v_21 = t;
                    {
                      t = not_null(m_21);
                      {
                        ATerm z_21 = NULL;
                        t = x_48(t);
                        {
                          x_21 = t;
                          {
                            ATerm c_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, not_null(t_21), not_null(v_21), not_null(x_21)), not_null(r_21));
                            {
                              c_22 = t;
                              if(((z_21 != NULL) && (z_21 != c_22)))
                                _fail(c_22);
                              else
                                z_21 = c_22;
                            }
                            t = not_null(z_21);
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
  ATerm x_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_MATH_0))
    {
      ATerm z_22 = NULL,b_23 = NULL;
      ATerm w_3;
      w_3 = t;
      {
        ATerm a_23 = NULL;
        t = SSLgetAnnotations(not_null(x_22));
        {
          a_23 = t;
          if(((z_22 != NULL) && (z_22 != a_23)))
            _fail(a_23);
          else
            z_22 = a_23;
        }
      }
      t = w_3;
      {
        ATerm c_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(z_22));
        {
          c_23 = t;
          if(((b_23 != NULL) && (b_23 != c_23)))
            _fail(c_23);
          else
            b_23 = c_23;
        }
        t = not_null(b_23);
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
  ATerm n_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_NUM_0))
    {
      ATerm p_23 = NULL,r_23 = NULL;
      ATerm x_3;
      x_3 = t;
      {
        ATerm q_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
        }
      }
      t = x_3;
      {
        ATerm s_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(p_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        t = not_null(r_23);
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
  ATerm a_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_VAR_0))
    {
      ATerm c_24 = NULL,e_24 = NULL;
      ATerm y_3;
      y_3 = t;
      {
        ATerm d_24 = NULL;
        t = SSLgetAnnotations(not_null(a_24));
        {
          d_24 = t;
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
        }
      }
      t = y_3;
      {
        ATerm f_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(c_24));
        {
          f_24 = t;
          if(((e_24 != NULL) && (e_24 != f_24)))
            _fail(f_24);
          else
            e_24 = f_24;
        }
        t = not_null(e_24);
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
  ATerm n_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym_KW_0))
    {
      ATerm p_24 = NULL,r_24 = NULL;
      ATerm z_3;
      z_3 = t;
      {
        ATerm q_24 = NULL;
        t = SSLgetAnnotations(not_null(n_24));
        {
          q_24 = t;
          if(((p_24 != NULL) && (p_24 != q_24)))
            _fail(q_24);
          else
            p_24 = q_24;
        }
      }
      t = z_3;
      {
        ATerm s_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(p_24));
        {
          s_24 = t;
          if(((r_24 != NULL) && (r_24 != s_24)))
            _fail(s_24);
          else
            r_24 = s_24;
        }
        t = not_null(r_24);
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
  ATerm b_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym_CL_0))
    {
      ATerm d_25 = NULL,f_25 = NULL;
      ATerm a_4;
      a_4 = t;
      {
        ATerm e_25 = NULL;
        t = SSLgetAnnotations(not_null(b_25));
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
      }
      t = a_4;
      {
        ATerm g_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(d_25));
        {
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
        }
        t = not_null(f_25);
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
  ATerm o_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_SZ_0))
    {
      ATerm q_25 = NULL,s_25 = NULL;
      ATerm b_4;
      b_4 = t;
      {
        ATerm r_25 = NULL;
        t = SSLgetAnnotations(not_null(o_25));
        {
          r_25 = t;
          if(((q_25 != NULL) && (q_25 != r_25)))
            _fail(r_25);
          else
            q_25 = r_25;
        }
      }
      t = b_4;
      {
        ATerm t_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(q_25));
        {
          t_25 = t;
          if(((s_25 != NULL) && (s_25 != t_25)))
            _fail(t_25);
          else
            s_25 = t_25;
        }
        t = not_null(s_25);
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
  ATerm d_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_SH_0))
    {
      ATerm f_26 = NULL,h_26 = NULL;
      ATerm c_4;
      c_4 = t;
      {
        ATerm g_26 = NULL;
        t = SSLgetAnnotations(not_null(d_26));
        {
          g_26 = t;
          if(((f_26 != NULL) && (f_26 != g_26)))
            _fail(g_26);
          else
            f_26 = g_26;
        }
      }
      t = c_4;
      {
        ATerm i_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(f_26));
        {
          i_26 = t;
          if(((h_26 != NULL) && (h_26 != i_26)))
            _fail(i_26);
          else
            h_26 = i_26;
        }
        t = not_null(h_26);
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
  ATerm q_26 = NULL;
  q_26 = t;
  p_26 :
  if(match_cons(q_26, sym_SE_0))
    {
      ATerm s_26 = NULL,u_26 = NULL;
      ATerm d_4;
      d_4 = t;
      {
        ATerm t_26 = NULL;
        t = SSLgetAnnotations(not_null(q_26));
        {
          t_26 = t;
          if(((s_26 != NULL) && (s_26 != t_26)))
            _fail(t_26);
          else
            s_26 = t_26;
        }
      }
      t = d_4;
      {
        ATerm v_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(s_26));
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
        t = not_null(u_26);
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
  ATerm d_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym_FM_0))
    {
      ATerm f_27 = NULL,h_27 = NULL;
      ATerm e_4;
      e_4 = t;
      {
        ATerm g_27 = NULL;
        t = SSLgetAnnotations(not_null(d_27));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
      }
      t = e_4;
      {
        ATerm i_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(f_27));
        {
          i_27 = t;
          if(((h_27 != NULL) && (h_27 != i_27)))
            _fail(i_27);
          else
            h_27 = i_27;
        }
        t = not_null(h_27);
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
  ATerm q_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym_FN_0))
    {
      ATerm s_27 = NULL,u_27 = NULL;
      ATerm f_4;
      f_4 = t;
      {
        ATerm t_27 = NULL;
        t = SSLgetAnnotations(not_null(q_27));
        {
          t_27 = t;
          if(((s_27 != NULL) && (s_27 != t_27)))
            _fail(t_27);
          else
            s_27 = t_27;
        }
      }
      t = f_4;
      {
        ATerm v_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FN_0), not_null(s_27));
        {
          v_27 = t;
          if(((u_27 != NULL) && (u_27 != v_27)))
            _fail(v_27);
          else
            u_27 = v_27;
        }
        t = not_null(u_27);
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
  ATerm g_4 = t;
  int h_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FN_0(t);
      LocalPopChoice(h_4);
    }
  else
    {
      t = g_4;
      {
        ATerm i_4 = t;
        int j_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FM_0(t);
            LocalPopChoice(j_4);
          }
        else
          {
            t = i_4;
            {
              ATerm k_4 = t;
              int l_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SE_0(t);
                  LocalPopChoice(l_4);
                }
              else
                {
                  t = k_4;
                  {
                    ATerm m_4 = t;
                    int q_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SH_0(t);
                        LocalPopChoice(q_4);
                      }
                    else
                      {
                        t = m_4;
                        {
                          ATerm r_4 = t;
                          int s_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SZ_0(t);
                              LocalPopChoice(s_4);
                            }
                          else
                            {
                              t = r_4;
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
ATerm FFID_2 (ATerm t, ATerm i_49 (ATerm), ATerm j_49 (ATerm))
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym_FFID_2))
    {
      g_28 = ATgetArgument(f_28, 0);
      h_28 = ATgetArgument(f_28, 1);
      {
        ATerm l_28 = NULL,n_28 = NULL;
        ATerm m_28 = NULL;
        t = SSLgetAnnotations(not_null(f_28));
        {
          m_28 = t;
          if(((l_28 != NULL) && (l_28 != m_28)))
            _fail(m_28);
          else
            l_28 = m_28;
        }
        {
          t = not_null(g_28);
          {
            ATerm p_28 = NULL;
            t = i_49(t);
            {
              n_28 = t;
              {
                t = not_null(h_28);
                {
                  ATerm r_28 = NULL;
                  t = j_49(t);
                  {
                    p_28 = t;
                    {
                      ATerm s_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(n_28), not_null(p_28)), not_null(l_28));
                      {
                        s_28 = t;
                        if(((r_28 != NULL) && (r_28 != s_28)))
                          _fail(s_28);
                        else
                          r_28 = s_28;
                      }
                      t = not_null(r_28);
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
ATerm FInt_2 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_FInt_2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      {
        ATerm k_29 = NULL,m_29 = NULL;
        ATerm l_29 = NULL;
        t = SSLgetAnnotations(not_null(e_29));
        {
          l_29 = t;
          if(((k_29 != NULL) && (k_29 != l_29)))
            _fail(l_29);
          else
            k_29 = l_29;
        }
        {
          t = not_null(f_29);
          {
            ATerm o_29 = NULL;
            t = g_49(t);
            {
              m_29 = t;
              {
                t = not_null(g_29);
                {
                  ATerm q_29 = NULL;
                  t = h_49(t);
                  {
                    o_29 = t;
                    {
                      ATerm r_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FInt_2, not_null(m_29), not_null(o_29)), not_null(k_29));
                      {
                        r_29 = t;
                        if(((q_29 != NULL) && (q_29 != r_29)))
                          _fail(r_29);
                        else
                          q_29 = r_29;
                      }
                      t = not_null(q_29);
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
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FInt_2(t, Font_Param_0, is_string_0);
      LocalPopChoice(v_4);
    }
  else
    {
      t = u_4;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm f_49 (ATerm))
{
  ATerm c_30 = NULL,d_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_F_1))
    {
      d_30 = ATgetArgument(c_30, 0);
      {
        ATerm g_30 = NULL,i_30 = NULL;
        ATerm h_30 = NULL;
        t = SSLgetAnnotations(not_null(c_30));
        {
          h_30 = t;
          if(((g_30 != NULL) && (g_30 != h_30)))
            _fail(h_30);
          else
            g_30 = h_30;
        }
        {
          t = not_null(d_30);
          {
            ATerm k_30 = NULL;
            t = f_49(t);
            {
              i_30 = t;
              {
                ATerm l_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_F_1, not_null(i_30)), not_null(g_30));
                {
                  l_30 = t;
                  if(((k_30 != NULL) && (k_30 != l_30)))
                    _fail(l_30);
                  else
                    k_30 = l_30;
                }
                t = not_null(k_30);
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
  ATerm w_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        t = list_1(t, F_Option_0);
        return(t);
      }
      t = F_1(t, f_0);
      LocalPopChoice(x_4);
    }
  else
    {
      t = w_4;
      {
        ATerm y_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = KW_0(t);
            LocalPopChoice(z_4);
          }
        else
          {
            t = y_4;
            {
              ATerm a_5 = t;
              int c_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = VAR_0(t);
                  LocalPopChoice(c_5);
                }
              else
                {
                  t = a_5;
                  {
                    ATerm d_5 = t;
                    int e_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = NUM_0(t);
                        LocalPopChoice(e_5);
                      }
                    else
                      {
                        t = d_5;
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
ATerm FBOX_2 (ATerm t, ATerm d_49 (ATerm), ATerm e_49 (ATerm))
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym_FBOX_2))
    {
      x_30 = ATgetArgument(w_30, 0);
      y_30 = ATgetArgument(w_30, 1);
      {
        ATerm c_31 = NULL,e_31 = NULL;
        ATerm d_31 = NULL;
        t = SSLgetAnnotations(not_null(w_30));
        {
          d_31 = t;
          if(((c_31 != NULL) && (c_31 != d_31)))
            _fail(d_31);
          else
            c_31 = d_31;
        }
        {
          t = not_null(x_30);
          {
            ATerm g_31 = NULL;
            t = d_49(t);
            {
              e_31 = t;
              {
                t = not_null(y_30);
                {
                  ATerm i_31 = NULL;
                  t = e_49(t);
                  {
                    g_31 = t;
                    {
                      ATerm j_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, not_null(e_31), not_null(g_31)), not_null(c_31));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ALT_2 (ATerm t, ATerm p_48 (ATerm), ATerm q_48 (ATerm))
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  u_31 :
  if(match_cons(y_31, sym_ALT_2))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      {
        ATerm e_32 = NULL,g_32 = NULL;
        ATerm f_32 = NULL;
        t = SSLgetAnnotations(not_null(y_31));
        {
          f_32 = t;
          if(((e_32 != NULL) && (e_32 != f_32)))
            _fail(f_32);
          else
            e_32 = f_32;
        }
        {
          t = not_null(z_31);
          {
            ATerm i_32 = NULL;
            t = p_48(t);
            {
              g_32 = t;
              {
                t = not_null(a_32);
                {
                  ATerm k_32 = NULL;
                  t = q_48(t);
                  {
                    i_32 = t;
                    {
                      ATerm l_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, not_null(g_32), not_null(i_32)), not_null(e_32));
                      {
                        l_32 = t;
                        if(((k_32 != NULL) && (k_32 != l_32)))
                          _fail(l_32);
                        else
                          k_32 = l_32;
                      }
                      t = not_null(k_32);
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
ATerm HV_2 (ATerm t, ATerm n_48 (ATerm), ATerm o_48 (ATerm))
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym_HV_2))
    {
      c_33 = ATgetArgument(b_33, 0);
      d_33 = ATgetArgument(b_33, 1);
      {
        ATerm h_33 = NULL,j_33 = NULL;
        ATerm i_33 = NULL;
        t = SSLgetAnnotations(not_null(b_33));
        {
          i_33 = t;
          if(((h_33 != NULL) && (h_33 != i_33)))
            _fail(i_33);
          else
            h_33 = i_33;
        }
        {
          t = not_null(c_33);
          {
            ATerm l_33 = NULL;
            t = n_48(t);
            {
              j_33 = t;
              {
                t = not_null(d_33);
                {
                  ATerm n_33 = NULL;
                  t = o_48(t);
                  {
                    l_33 = t;
                    {
                      ATerm o_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, not_null(j_33), not_null(l_33)), not_null(h_33));
                      {
                        o_33 = t;
                        if(((n_33 != NULL) && (n_33 != o_33)))
                          _fail(o_33);
                        else
                          n_33 = o_33;
                      }
                      t = not_null(n_33);
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
ATerm V_2 (ATerm t, ATerm l_48 (ATerm), ATerm m_48 (ATerm))
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  d_34 = t;
  b_34 :
  if(match_cons(d_34, sym_V_2))
    {
      e_34 = ATgetArgument(d_34, 0);
      f_34 = ATgetArgument(d_34, 1);
      {
        ATerm j_34 = NULL,l_34 = NULL;
        ATerm k_34 = NULL;
        t = SSLgetAnnotations(not_null(d_34));
        {
          k_34 = t;
          if(((j_34 != NULL) && (j_34 != k_34)))
            _fail(k_34);
          else
            j_34 = k_34;
        }
        {
          t = not_null(e_34);
          {
            ATerm n_34 = NULL;
            t = l_48(t);
            {
              l_34 = t;
              {
                t = not_null(f_34);
                {
                  ATerm p_34 = NULL;
                  t = m_48(t);
                  {
                    n_34 = t;
                    {
                      ATerm q_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, not_null(l_34), not_null(n_34)), not_null(j_34));
                      {
                        q_34 = t;
                        if(((p_34 != NULL) && (p_34 != q_34)))
                          _fail(q_34);
                        else
                          p_34 = q_34;
                      }
                      t = not_null(p_34);
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
ATerm H_2 (ATerm t, ATerm j_48 (ATerm), ATerm k_48 (ATerm))
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym_H_2))
    {
      g_35 = ATgetArgument(f_35, 0);
      h_35 = ATgetArgument(f_35, 1);
      {
        ATerm l_35 = NULL,n_35 = NULL;
        ATerm m_35 = NULL;
        t = SSLgetAnnotations(not_null(f_35));
        {
          m_35 = t;
          if(((l_35 != NULL) && (l_35 != m_35)))
            _fail(m_35);
          else
            l_35 = m_35;
        }
        {
          t = not_null(g_35);
          {
            ATerm p_35 = NULL;
            t = j_48(t);
            {
              n_35 = t;
              {
                t = not_null(h_35);
                {
                  ATerm r_35 = NULL;
                  t = k_48(t);
                  {
                    p_35 = t;
                    {
                      ATerm s_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(n_35), not_null(p_35)), not_null(l_35));
                      {
                        s_35 = t;
                        if(((r_35 != NULL) && (r_35 != s_35)))
                          _fail(s_35);
                        else
                          r_35 = s_35;
                      }
                      t = not_null(r_35);
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
  ATerm k_36 = NULL,l_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym_S_1))
    {
      l_36 = ATgetArgument(k_36, 0);
      {
        ATerm p_36 = NULL,r_36 = NULL;
        ATerm q_36 = NULL;
        t = SSLgetAnnotations(not_null(k_36));
        {
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
        }
        {
          t = not_null(l_36);
          {
            ATerm t_36 = NULL;
            t = i_48(t);
            {
              r_36 = t;
              {
                ATerm u_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(r_36)), not_null(p_36));
                {
                  u_36 = t;
                  if(((t_36 != NULL) && (t_36 != u_36)))
                    _fail(u_36);
                  else
                    t_36 = u_36;
                }
                t = not_null(t_36);
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
  ATerm h_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1(t, is_string_0);
      LocalPopChoice(i_5);
    }
  else
    {
      t = h_5;
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
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
            LocalPopChoice(k_5);
          }
        else
          {
            t = j_5;
            {
              ATerm m_5 = t;
              int o_5 = stack_ptr;
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
                  LocalPopChoice(o_5);
                }
              else
                {
                  t = m_5;
                  {
                    ATerm p_5 = t;
                    int q_5 = stack_ptr;
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
                        LocalPopChoice(q_5);
                      }
                    else
                      {
                        t = p_5;
                        {
                          ATerm s_5 = t;
                          int t_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2(t, Box_0, Box_0);
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
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
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
                                                LocalPopChoice(z_5);
                                              }
                                            else
                                              {
                                                t = y_5;
                                                {
                                                  ATerm a_6 = t;
                                                  int b_6 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LBL_2(t, is_string_0, Box_0);
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
                                                            t = REF_2(t, is_string_0, Box_0);
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
                                                                        t = L_2(t, Box_0, Box_0);
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
                                                                              t = LINT_2(t, is_int_0, Box_0);
                                                                              LocalPopChoice(j_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_6;
                                                                              {
                                                                                ATerm m_6 = t;
                                                                                int n_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Arg_1(t, is_int_0);
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
                                                                                          t = Arg2_2(t, is_int_0, is_int_0);
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
                                                                                                t = Nil_0(t);
                                                                                                LocalPopChoice(r_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_6;
                                                                                                {
                                                                                                  ATerm z_0 (ATerm t)
                                                                                                  {
                                                                                                    t = term_s_6;
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
ATerm _2 (ATerm t, ATerm x_46 (ATerm), ATerm y_46 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym__2))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      {
        ATerm m_37 = NULL,o_37 = NULL;
        ATerm n_37 = NULL;
        t = SSLgetAnnotations(not_null(g_37));
        {
          n_37 = t;
          if(((m_37 != NULL) && (m_37 != n_37)))
            _fail(n_37);
          else
            m_37 = n_37;
        }
        {
          t = not_null(h_37);
          {
            ATerm q_37 = NULL;
            t = x_46(t);
            {
              o_37 = t;
              {
                t = not_null(i_37);
                {
                  ATerm s_37 = NULL;
                  t = y_46(t);
                  {
                    q_37 = t;
                    {
                      ATerm t_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_37), not_null(q_37)), not_null(m_37));
                      {
                        t_37 = t;
                        if(((s_37 != NULL) && (s_37 != t_37)))
                          _fail(t_37);
                        else
                          s_37 = t_37;
                      }
                      t = not_null(s_37);
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
  ATerm b_38 = NULL;
  ATerm t_6;
  t_6 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm c_38 = NULL,d_38 = NULL;
      c_38 = t;
      a_38 :
      if(match_cons(c_38, sym_Program_1))
        {
          d_38 = ATgetArgument(c_38, 0);
          if(((b_38 != NULL) && (b_38 != d_38)))
            _fail(d_38);
          else
            b_38 = d_38;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, a_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_6), not_null(b_38)), term_v_6));
      {
        t = printnl_0(t);
        {
          t = term_x_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym__2))
    {
      i_38 = ATgetArgument(h_38, 0);
      j_38 = ATgetArgument(h_38, 1);
      {
        ATerm y_6;
        y_6 = t;
        t = SSL_printnl(not_null(i_38), not_null(j_38));
        t = y_6;
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
  ATerm o_38 = NULL;
  o_38 = t;
  t = SSL_implode_string(not_null(o_38));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
        t_38 = t;
        s_38 :
        if(((ATgetType(t_38) == AT_LIST) && !(ATisEmpty(t_38))))
          {
            u_38 = ATgetFirst((ATermList) t_38);
            v_38 = (ATerm) ATgetNext((ATermList) t_38);
            {
              t = not_null(u_38);
              {
                ATerm b_1 (ATerm t)
                {
                  t = not_null(v_38);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm g_39 = NULL;
  ATerm i_39 = NULL;
  g_39 = t;
  {
    ATerm j_39 = NULL;
    ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
    t = not_null(g_39);
    {
      j_39 = t;
      {
        t = SSL_explode_term(not_null(j_39));
        {
          l_39 = t;
          e_39 :
          if(match_cons(l_39, sym__2))
            {
              m_39 = ATgetArgument(l_39, 0);
              n_39 = ATgetArgument(l_39, 1);
              f_39 :
              if(match_string(m_39, ""))
                {
                  if(((i_39 != NULL) && (i_39 != n_39)))
                    _fail(n_39);
                  else
                    i_39 = n_39;
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
      t = not_null(i_39);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm r_39 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_39);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        {
          t = Nil_0(t);
          t = q_62(t);
        }
      }
    return(t);
  }
  t = r_39(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_cons(u_39, sym__2))
    {
      v_39 = ATgetArgument(u_39, 0);
      w_39 = ATgetArgument(u_39, 1);
      {
        t = not_null(v_39);
        {
          ATerm c_1 (ATerm t)
          {
            t = not_null(w_39);
            return(t);
          }
          t = at_end_1(t, c_1);
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
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_40 = NULL;
  b_40 = t;
  t = SSL_explode_string(not_null(b_40));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm h_7;
  h_7 = t;
  {
    ATerm i_40 = NULL,k_40 = NULL;
    ATerm i_7;
    i_7 = t;
    {
      ATerm j_40 = NULL;
      t = g_61(t);
      {
        j_40 = t;
        if(((i_40 != NULL) && (i_40 != j_40)))
          _fail(j_40);
        else
          i_40 = j_40;
      }
    }
    t = i_7;
    {
      ATerm l_40 = NULL;
      l_40 = t;
      if(((k_40 != NULL) && (k_40 != l_40)))
        _fail(l_40);
      else
        k_40 = l_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_40)), not_null(i_40)));
        t = printnl_0(t);
      }
    }
  }
  t = h_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_40 = NULL;
  u_40 = t;
  t = SSL_is_string(not_null(u_40));
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
            ATerm d_1 (ATerm t)
            {
              ATerm n_7 = t;
              int o_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(o_7);
                }
              else
                {
                  t = n_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, d_1);
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
              d_41 = t;
              c_41 :
              if(match_cons(d_41, sym_Path_1))
                {
                  e_41 = ATgetArgument(d_41, 0);
                  t = not_null(e_41);
                }
              else
                {
                  if(match_cons(d_41, sym_Var_1))
                    {
                      e_41 = ATgetArgument(d_41, 0);
                      {
                        t = not_null(e_41);
                        {
                          ATerm p_7 = t;
                          int q_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_7);
                            }
                          else
                            {
                              t = p_7;
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  t = term_r_7;
                                  return(t);
                                }
                                t = debug_1(t, e_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_41, sym_Prefix_2))
                        {
                          e_41 = ATgetArgument(d_41, 0);
                          f_41 = ATgetArgument(d_41, 1);
                          {
                            ATerm w_41 = NULL,y_41 = NULL;
                            ATerm s_7;
                            s_7 = t;
                            {
                              ATerm x_41 = NULL;
                              t = not_null(e_41);
                              {
                                t = eval_config_0(t);
                                {
                                  x_41 = t;
                                  if(((w_41 != NULL) && (w_41 != x_41)))
                                    _fail(x_41);
                                  else
                                    w_41 = x_41;
                                }
                              }
                            }
                            t = s_7;
                            {
                              ATerm z_41 = NULL;
                              t = not_null(f_41);
                              {
                                t = eval_config_0(t);
                                {
                                  z_41 = t;
                                  if(((y_41 != NULL) && (y_41 != z_41)))
                                    _fail(z_41);
                                  else
                                    y_41 = z_41;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_41), not_null(y_41));
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
  ATerm l_42 = NULL;
  l_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(l_42));
    {
      t = table_get_0(t);
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm w_7;
              w_7 = t;
              {
                ATerm n_42 = NULL;
                ATerm o_42 = NULL;
                o_42 = t;
                if(((n_42 != NULL) && (n_42 != o_42)))
                  _fail(o_42);
                else
                  n_42 = o_42;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_t_7, not_null(l_42), not_null(n_42));
                  t = table_put_0(t);
                }
              }
              t = w_7;
            }
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7;
      z_7 = t;
      {
        ATerm s_42 = NULL;
        ATerm t_42 = NULL;
        t = term_a_8;
        {
          t = get_config_0(t);
          {
            t_42 = t;
            if(((s_42 != NULL) && (s_42 != t_42)))
              _fail(t_42);
            else
              s_42 = t_42;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_42), term_b_8);
          t = geq_0(t);
        }
      }
      t = z_7;
      t = m_72(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym__2))
    {
      y_42 = ATgetArgument(x_42, 0);
      z_42 = ATgetArgument(x_42, 1);
      t = SSL_WriteToTextFile(not_null(y_42), not_null(z_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  e_43 :
  if(match_cons(f_43, sym__2))
    {
      g_43 = ATgetArgument(f_43, 0);
      h_43 = ATgetArgument(f_43, 1);
      t = SSL_WriteToBinaryFile(not_null(g_43), not_null(h_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_43 = NULL;
  ATerm c_8;
  c_8 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm q_43 = NULL,r_43 = NULL;
            q_43 = t;
            m_43 :
            if(match_cons(q_43, sym_Output_1))
              {
                r_43 = ATgetArgument(q_43, 0);
                if(((p_43 != NULL) && (p_43 != r_43)))
                  _fail(r_43);
                else
                  p_43 = r_43;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, g_1);
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
          {
            ATerm s_43 = NULL;
            t = term_f_8;
            {
              s_43 = t;
              if(((p_43 != NULL) && (p_43 != s_43)))
                _fail(s_43);
              else
                p_43 = s_43;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_1, _id);
  }
  t = c_8;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = not_null(p_43);
        return(t);
      }
      t = split_2(t, i_1, _id);
      return(t);
    }
    t = _2(t, _id, h_1);
    {
      ATerm g_8 = t;
      int h_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              ATerm t_43 = NULL;
              t_43 = t;
              o_43 :
              if(!(match_cons(t_43, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, l_1);
            return(t);
          }
          t = _2(t, k_1, WriteToBinaryFile_0);
          LocalPopChoice(h_8);
        }
      else
        {
          t = g_8;
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
  ATerm z_43 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  ATerm i_8;
  i_8 = t;
  t = dtime_0(t);
  t = i_8;
  {
    t = d_74(t);
    {
      ATerm j_8;
      j_8 = t;
      {
        ATerm a_44 = NULL;
        t = dtime_0(t);
        {
          a_44 = t;
          if(((z_43 != NULL) && (z_43 != a_44)))
            _fail(a_44);
          else
            z_43 = a_44;
        }
      }
      t = j_8;
      {
        b_44 = t;
        y_43 :
        if(match_cons(b_44, sym__2))
          {
            c_44 = ATgetArgument(b_44, 0);
            d_44 = ATgetArgument(b_44, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_44)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_43))), not_null(d_44));
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
  ATerm j_44 = NULL;
  j_44 = t;
  t = SSL_ReadFromFile(not_null(j_44));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm o_44 = NULL,q_44 = NULL;
  ATerm k_8;
  k_8 = t;
  {
    ATerm p_44 = NULL;
    t = b_55(t);
    {
      p_44 = t;
      if(((o_44 != NULL) && (o_44 != p_44)))
        _fail(p_44);
      else
        o_44 = p_44;
    }
  }
  t = k_8;
  {
    ATerm r_44 = NULL;
    t = c_55(t);
    {
      r_44 = t;
      if(((q_44 != NULL) && (q_44 != r_44)))
        _fail(r_44);
      else
        q_44 = r_44;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_44), not_null(q_44));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_44 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_1 (ATerm t)
        {
          ATerm y_44 = NULL,z_44 = NULL;
          y_44 = t;
          v_44 :
          if(match_cons(y_44, sym_Input_1))
            {
              z_44 = ATgetArgument(y_44, 0);
              if(((x_44 != NULL) && (x_44 != z_44)))
                _fail(z_44);
              else
                x_44 = z_44;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, m_1);
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        {
          ATerm a_45 = NULL;
          t = term_o_8;
          {
            a_45 = t;
            if(((x_44 != NULL) && (x_44 != a_45)))
              _fail(a_45);
            else
              x_44 = a_45;
          }
        }
      }
  }
  t = l_8;
  {
    ATerm n_1 (ATerm t)
    {
      t = not_null(x_44);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm e_45 = NULL;
    e_45 = t;
    d_45 :
    if(!(match_string(e_45, "-v")))
      {
        if(!(match_string(e_45, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_r_8;
    t = set_config_0(t);
    t = term_s_8;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_t_8;
    return(t);
  }
  t = Option_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm h_45 = NULL;
    h_45 = t;
    f_45 :
    if(!(match_string(h_45, "-k")))
      {
        if(!(match_string(h_45, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    ATerm u_8;
    u_8 = t;
    {
      ATerm i_45 = NULL;
      ATerm j_45 = NULL;
      t = string_to_int_0(t);
      {
        j_45 = t;
        if(((i_45 != NULL) && (i_45 != j_45)))
          _fail(j_45);
        else
          i_45 = j_45;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(i_45));
        t = set_config_0(t);
      }
    }
    t = u_8;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_w_8;
    return(t);
  }
  t = ArgOption_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_45 = NULL;
  m_45 = t;
  t = SSL_string_to_int(not_null(m_45));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm u_45 = NULL;
        u_45 = t;
        p_45 :
        if(!(match_string(u_45, "-S")))
          {
            if(!(match_string(u_45, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_a_9;
        t = set_config_0(t);
        t = term_b_9;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_c_9;
        return(t);
      }
      t = Option_3(t, u_1, v_1, w_1);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm v_45 = NULL;
              v_45 = t;
              q_45 :
              if(!(match_string(v_45, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm y_45 = NULL;
              ATerm g_9;
              g_9 = t;
              {
                ATerm w_45 = NULL;
                ATerm x_45 = NULL;
                t = string_to_int_0(t);
                {
                  x_45 = t;
                  if(((w_45 != NULL) && (w_45 != x_45)))
                    _fail(x_45);
                  else
                    w_45 = x_45;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_8, not_null(w_45));
                  t = set_config_0(t);
                }
              }
              t = g_9;
              {
                ATerm z_45 = NULL;
                z_45 = t;
                if(((y_45 != NULL) && (y_45 != z_45)))
                  _fail(z_45);
                else
                  y_45 = z_45;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_45));
              }
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_h_9;
              return(t);
            }
            t = ArgOption_3(t, x_1, y_1, z_1);
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
              ATerm a_2 (ATerm t)
              {
                ATerm a_46 = NULL;
                a_46 = t;
                t_45 :
                if(!(match_string(a_46, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = term_j_9;
                t = set_config_0(t);
                t = term_k_9;
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_l_9;
                return(t);
              }
              t = Option_3(t, a_2, b_2, c_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
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
            t = keep_option_0(t);
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm g_46 = NULL;
    g_46 = t;
    d_46 :
    if(!(match_string(g_46, "-o")))
      {
        if(!(match_string(g_46, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm j_46 = NULL;
    ATerm q_9;
    q_9 = t;
    {
      ATerm h_46 = NULL;
      ATerm i_46 = NULL;
      i_46 = t;
      if(((h_46 != NULL) && (h_46 != i_46)))
        _fail(i_46);
      else
        h_46 = i_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_9, not_null(h_46));
        t = set_config_0(t);
      }
    }
    t = q_9;
    {
      ATerm k_46 = NULL;
      k_46 = t;
      if(((j_46 != NULL) && (j_46 != k_46)))
        _fail(k_46);
      else
        j_46 = k_46;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_46));
    }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_s_9;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm o_46 = NULL;
          o_46 = t;
          n_46 :
          if(!(match_string(o_46, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = term_z_9;
          t = set_config_0(t);
          t = term_a_10;
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = term_b_10;
          return(t);
        }
        t = Option_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,z_46 = NULL,a_47 = NULL;
  u_46 = t;
  s_46 :
  if(match_string(u_46, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(u_46) == AT_LIST) && !(ATisEmpty(u_46))))
        {
          v_46 = ATgetFirst((ATermList) u_46);
          w_46 = (ATerm) ATgetNext((ATermList) u_46);
          t_46 :
          if(((ATgetType(w_46) == AT_LIST) && !(ATisEmpty(w_46))))
            {
              z_46 = ATgetFirst((ATermList) w_46);
              a_47 = (ATerm) ATgetNext((ATermList) w_46);
              {
                ATerm e_47 = NULL;
                ATerm c_10;
                c_10 = t;
                {
                  t = not_null(v_46);
                  t = j_0(t);
                }
                t = c_10;
                {
                  ATerm f_47 = NULL;
                  t = not_null(z_46);
                  {
                    t = k_0(t);
                    {
                      f_47 = t;
                      if(((e_47 != NULL) && (e_47 != f_47)))
                        _fail(f_47);
                      else
                        e_47 = f_47;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_47)), not_null(e_47));
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
  ATerm j_2 (ATerm t)
  {
    ATerm m_47 = NULL;
    m_47 = t;
    j_47 :
    if(!(match_string(m_47, "-i")))
      {
        if(!(match_string(m_47, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm p_47 = NULL;
    ATerm d_10;
    d_10 = t;
    {
      ATerm n_47 = NULL;
      ATerm o_47 = NULL;
      o_47 = t;
      if(((n_47 != NULL) && (n_47 != o_47)))
        _fail(o_47);
      else
        n_47 = o_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(n_47));
        t = set_config_0(t);
      }
    }
    t = d_10;
    {
      ATerm q_47 = NULL;
      q_47 = t;
      if(((p_47 != NULL) && (p_47 != q_47)))
        _fail(q_47);
      else
        p_47 = q_47;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_47));
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_f_10;
    return(t);
  }
  t = ArgOption_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = g_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, term_m_10));
  {
    t = printnl_0(t);
    {
      t = term_x_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_47 = NULL;
  u_47 = t;
  t = SSL_TicksToSeconds(not_null(u_47));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym__2))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_48), not_null(b_48));
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = SSL_addr(not_null(a_48), not_null(b_48));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_66(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
        x_49 = t;
        u_48 :
        if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
          {
            y_49 = ATgetFirst((ATermList) x_49);
            z_49 = (ATerm) ATgetNext((ATermList) x_49);
            {
              ATerm c_50 = NULL;
              ATerm d_50 = NULL;
              t = not_null(z_49);
              {
                t = foldr_2(t, y_66, z_66);
                {
                  d_50 = t;
                  if(((c_50 != NULL) && (c_50 != d_50)))
                    _fail(d_50);
                  else
                    c_50 = d_50;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_49), not_null(c_50));
                t = z_66(t);
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
ATerm crush_2 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm))
{
  ATerm k_50 = NULL;
  ATerm m_50 = NULL;
  k_50 = t;
  {
    ATerm n_50 = NULL;
    ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
    t = not_null(k_50);
    {
      n_50 = t;
      {
        t = SSL_explode_term(not_null(n_50));
        {
          p_50 = t;
          j_50 :
          if(match_cons(p_50, sym__2))
            {
              q_50 = ATgetArgument(p_50, 0);
              r_50 = ATgetArgument(p_50, 1);
              if(((m_50 != NULL) && (m_50 != r_50)))
                _fail(r_50);
              else
                m_50 = r_50;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_50);
      t = foldr_2(t, w_65, x_65);
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
    ATerm m_2 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    t = crush_2(t, m_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
  x_50 = t;
  w_50 :
  if(match_cons(x_50, sym__2))
    {
      y_50 = ATgetArgument(x_50, 0);
      z_50 = ATgetArgument(x_50, 1);
      {
        ATerm r_10;
        r_10 = t;
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_50), not_null(z_50));
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              t = SSL_gtr(not_null(y_50), not_null(z_50));
            }
        }
        t = r_10;
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
  ATerm f_51 = NULL;
  ATerm u_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
      g_51 = t;
      e_51 :
      if(match_cons(g_51, sym__2))
        {
          h_51 = ATgetArgument(g_51, 0);
          i_51 = ATgetArgument(g_51, 1);
          {
            if(((f_51 != NULL) && (f_51 != h_51)))
              _fail(h_51);
            else
              f_51 = h_51;
            if(((f_51 != NULL) && (f_51 != i_51)))
              _fail(i_51);
            else
              f_51 = i_51;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_10);
    }
  else
    {
      t = u_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11;
      f_11 = t;
      {
        ATerm l_51 = NULL;
        ATerm m_51 = NULL;
        t = term_a_8;
        {
          t = get_config_0(t);
          {
            m_51 = t;
            if(((l_51 != NULL) && (l_51 != m_51)))
              _fail(m_51);
            else
              l_51 = m_51;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), term_x_6);
          t = geq_0(t);
        }
      }
      t = f_11;
      t = l_72(t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm q_51 = NULL,s_51 = NULL;
    ATerm h_11;
    h_11 = t;
    {
      ATerm r_51 = NULL;
      t = run_time_0(t);
      {
        r_51 = t;
        if(((q_51 != NULL) && (q_51 != r_51)))
          _fail(r_51);
        else
          q_51 = r_51;
      }
    }
    t = h_11;
    {
      ATerm t_51 = NULL;
      t = term_k_11;
      {
        t = get_config_0(t);
        {
          t_51 = t;
          if(((s_51 != NULL) && (s_51 != t_51)))
            _fail(t_51);
          else
            s_51 = t_51;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_11), not_null(q_51)), term_l_11), not_null(s_51)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_2);
  {
    t = term_z_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_52 = NULL;
  a_52 = t;
  z_51 :
  if(match_cons(a_52, sym_Version_0))
    {
      ATerm c_52 = NULL,e_52 = NULL;
      ATerm n_11;
      n_11 = t;
      {
        ATerm d_52 = NULL;
        t = SSLgetAnnotations(not_null(a_52));
        {
          d_52 = t;
          if(((c_52 != NULL) && (c_52 != d_52)))
            _fail(d_52);
          else
            c_52 = d_52;
        }
      }
      t = n_11;
      {
        ATerm f_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_52));
        {
          f_52 = t;
          if(((e_52 != NULL) && (e_52 != f_52)))
            _fail(f_52);
          else
            e_52 = f_52;
        }
        t = not_null(e_52);
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
  ATerm o_2 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, o_2);
  t = b_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_52 = NULL;
  k_52 = t;
  t = SSL_table_create(not_null(k_52));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  {
    ATerm s_11;
    s_11 = t;
    {
      t = term_t_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_11, term_y_11, not_null(o_52));
          t = table_put_0(t);
        }
      }
    }
    t = s_11;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_52 = NULL;
  s_52 = t;
  t = SSL_table_destroy(not_null(s_52));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  t = SSL_exit(not_null(w_52));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
  a_53 = t;
  z_52 :
  if(((ATgetType(a_53) == AT_LIST) && ATisEmpty(a_53)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_53) == AT_LIST) && !(ATisEmpty(a_53))))
        {
          b_53 = ATgetFirst((ATermList) a_53);
          c_53 = (ATerm) ATgetNext((ATermList) a_53);
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
  ATerm z_11;
  z_11 = t;
  {
    ATerm f_53 = NULL;
    ATerm i_53 = NULL;
    ATerm a_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = a_12;
        {
          ATerm g_53 = NULL;
          ATerm h_53 = NULL;
          h_53 = t;
          if(((g_53 != NULL) && (g_53 != h_53)))
            _fail(h_53);
          else
            g_53 = h_53;
          t = (ATerm) ATinsert(ATempty, not_null(g_53));
        }
      }
    {
      i_53 = t;
      if(((f_53 != NULL) && (f_53 != i_53)))
        _fail(i_53);
      else
        f_53 = i_53;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(f_53));
      t = printnl_0(t);
    }
  }
  t = z_11;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_62 (ATerm))
{
  ATerm l_53 (ATerm t)
  {
    ATerm g_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = g_12;
        t = Cons_2(t, b_62, l_53);
      }
    return(t);
  }
  t = l_53(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
  u_53 = t;
  r_53 :
  if(((ATgetType(u_53) == AT_LIST) && !(ATisEmpty(u_53))))
    {
      s_53 = ATgetFirst((ATermList) u_53);
      t_53 = (ATerm) ATgetNext((ATermList) u_53);
      {
        ATerm x_53 = NULL;
        t = not_null(t_53);
        {
          ATerm k_12;
          k_12 = t;
          {
            ATerm y_53 = NULL,a_54 = NULL,c_54 = NULL;
            ATerm l_12;
            l_12 = t;
            {
              ATerm z_53 = NULL;
              t = i_0(t);
              {
                z_53 = t;
                if(((y_53 != NULL) && (y_53 != z_53)))
                  _fail(z_53);
                else
                  y_53 = z_53;
              }
            }
            t = l_12;
            {
              ATerm b_54 = NULL;
              t = not_null(s_53);
              {
                t = h_0(t);
                {
                  b_54 = t;
                  if(((a_54 != NULL) && (a_54 != b_54)))
                    _fail(b_54);
                  else
                    a_54 = b_54;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_53)), not_null(a_54));
                {
                  c_54 = t;
                  if(((x_53 != NULL) && (x_53 != c_54)))
                    _fail(c_54);
                  else
                    x_53 = c_54;
                }
              }
            }
          }
          t = k_12;
          {
            ATerm p_2 (ATerm t)
            {
              t = not_null(x_53);
              return(t);
            }
            t = reverse_acc_2(t, h_0, p_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_53) == AT_LIST) && ATisEmpty(u_53)))
        {
          {
            t = term_q_8;
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
ATerm short_description_1 (ATerm t, ATerm i_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm n_54 = NULL,o_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym_Program_1))
    {
      o_54 = ATgetArgument(n_54, 0);
      {
        ATerm t_54 = NULL,v_54 = NULL;
        ATerm u_54 = NULL;
        t = SSLgetAnnotations(not_null(n_54));
        {
          u_54 = t;
          if(((t_54 != NULL) && (t_54 != u_54)))
            _fail(u_54);
          else
            t_54 = u_54;
        }
        {
          t = not_null(o_54);
          {
            ATerm x_54 = NULL;
            t = r_54(t);
            {
              v_54 = t;
              {
                ATerm y_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_54)), not_null(t_54));
                {
                  y_54 = t;
                  if(((x_54 != NULL) && (x_54 != y_54)))
                    _fail(y_54);
                  else
                    x_54 = y_54;
                }
                t = not_null(x_54);
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
  ATerm j_55 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_55 = NULL;
      t = term_k_11;
      {
        t = get_config_0(t);
        {
          k_55 = t;
          if(((j_55 != NULL) && (j_55 != k_55)))
            _fail(k_55);
          else
            j_55 = k_55;
        }
      }
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm s_2 (ATerm t)
          {
            ATerm l_55 = NULL;
            l_55 = t;
            if(((j_55 != NULL) && (j_55 != l_55)))
              _fail(l_55);
            else
              j_55 = l_55;
            return(t);
          }
          t = Program_1(t, s_2);
          return(t);
        }
        t = fetch_1(t, r_2);
      }
    }
  {
    t = term_p_12;
    {
      t = echo_0(t);
      {
        t = term_u_12;
        {
          t = table_get_0(t);
          {
            ATerm t_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, t_2);
            {
              ATerm u_2 (ATerm t)
              {
                ATerm m_55 = NULL;
                ATerm n_55 = NULL;
                n_55 = t;
                if(((m_55 != NULL) && (m_55 != n_55)))
                  _fail(n_55);
                else
                  m_55 = n_55;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_55)), term_z_12);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, u_2);
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
  ATerm a_13;
  a_13 = t;
  {
    ATerm s_55 = NULL;
    ATerm t_55 = NULL;
    t_55 = t;
    if(((s_55 != NULL) && (s_55 != t_55)))
      _fail(t_55);
    else
      s_55 = t_55;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(s_55)));
      t = printnl_0(t);
    }
  }
  t = a_13;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm b_13;
  b_13 = t;
  {
    t = h_61(t);
    t = debug_0(t);
  }
  t = b_13;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_54 (ATerm))
{
  ATerm a_56 = NULL,b_56 = NULL;
  a_56 = t;
  z_55 :
  if(match_cons(a_56, sym_Undefined_1))
    {
      b_56 = ATgetArgument(a_56, 0);
      {
        ATerm e_56 = NULL,g_56 = NULL;
        ATerm f_56 = NULL;
        t = SSLgetAnnotations(not_null(a_56));
        {
          f_56 = t;
          if(((e_56 != NULL) && (e_56 != f_56)))
            _fail(f_56);
          else
            e_56 = f_56;
        }
        {
          t = not_null(b_56);
          {
            ATerm i_56 = NULL;
            t = s_54(t);
            {
              g_56 = t;
              {
                ATerm j_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_56)), not_null(e_56));
                {
                  j_56 = t;
                  if(((i_56 != NULL) && (i_56 != j_56)))
                    _fail(j_56);
                  else
                    i_56 = j_56;
                }
                t = not_null(i_56);
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
ATerm fetch_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm o_56 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_62, _id);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = Cons_2(t, _id, o_56);
      }
    return(t);
  }
  t = o_56(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_75 (ATerm))
{
  t = fetch_1(t, i_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_56 = NULL;
  t_56 = t;
  s_56 :
  if(match_cons(t_56, sym_Help_0))
    {
      ATerm v_56 = NULL,x_56 = NULL;
      ATerm e_13;
      e_13 = t;
      {
        ATerm w_56 = NULL;
        t = SSLgetAnnotations(not_null(t_56));
        {
          w_56 = t;
          if(((v_56 != NULL) && (v_56 != w_56)))
            _fail(w_56);
          else
            v_56 = w_56;
        }
      }
      t = e_13;
      {
        ATerm y_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_56));
        {
          y_56 = t;
          if(((x_56 != NULL) && (x_56 != y_56)))
            _fail(y_56);
          else
            x_56 = y_56;
        }
        t = not_null(x_56);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm h_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_59(t);
      LocalPopChoice(m_13);
    }
  else
    {
      t = h_13;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
  e_57 = t;
  d_57 :
  if(match_cons(e_57, sym__2))
    {
      f_57 = ATgetArgument(e_57, 0);
      g_57 = ATgetArgument(e_57, 1);
      t = SSL_table_get(not_null(f_57), not_null(g_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
  n_57 = t;
  m_57 :
  if(match_cons(n_57, sym__3))
    {
      o_57 = ATgetArgument(n_57, 0);
      p_57 = ATgetArgument(n_57, 1);
      q_57 = ATgetArgument(n_57, 2);
      {
        ATerm n_13;
        n_13 = t;
        {
          ATerm u_57 = NULL;
          ATerm v_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_57), not_null(p_57));
          {
            ATerm o_13 = t;
            int p_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_13);
              }
            else
              {
                t = o_13;
                t = (ATerm) ATempty;
              }
            {
              v_57 = t;
              if(((u_57 != NULL) && (u_57 != v_57)))
                _fail(v_57);
              else
                u_57 = v_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_57), not_null(p_57), (ATerm) ATinsert(CheckATermList(not_null(u_57)), not_null(q_57)));
            t = table_put_0(t);
          }
        }
        t = n_13;
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
  ATerm z_57 = NULL;
  ATerm a_58 = NULL;
  t = term_q_8;
  {
    t = n_76(t);
    {
      a_58 = t;
      if(((z_57 != NULL) && (z_57 != a_58)))
        _fail(a_58);
      else
        z_57 = a_58;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_12, term_r_12, not_null(z_57));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
  g_58 = t;
  f_58 :
  if(match_string(g_58, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(g_58) == AT_LIST) && !(ATisEmpty(g_58))))
        {
          h_58 = ATgetFirst((ATermList) g_58);
          i_58 = (ATerm) ATgetNext((ATermList) g_58);
          {
            ATerm l_58 = NULL;
            ATerm q_13;
            q_13 = t;
            {
              t = not_null(h_58);
              t = a_0(t);
            }
            t = q_13;
            {
              ATerm m_58 = NULL;
              t = term_q_8;
              {
                t = d_0(t);
                {
                  m_58 = t;
                  if(((l_58 != NULL) && (l_58 != m_58)))
                    _fail(m_58);
                  else
                    l_58 = m_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_58)), not_null(l_58));
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
  ATerm v_2 (ATerm t)
  {
    ATerm r_58 = NULL;
    r_58 = t;
    q_58 :
    if(!(match_string(r_58, "--help")))
      {
        if(!(match_string(r_58, "-h")))
          {
            if(!(match_string(r_58, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_u_13;
    {
      t = set_config_0(t);
      t = term_z_13;
    }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_a_14;
    return(t);
  }
  t = Option_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(((ATgetType(u_58) == AT_LIST) && !(ATisEmpty(u_58))))
    {
      v_58 = ATgetFirst((ATermList) u_58);
      w_58 = (ATerm) ATgetNext((ATermList) u_58);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_58)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_48 (ATerm), ATerm h_48 (ATerm))
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  g_59 :
  if(((ATgetType(h_59) == AT_LIST) && !(ATisEmpty(h_59))))
    {
      i_59 = ATgetFirst((ATermList) h_59);
      j_59 = (ATerm) ATgetNext((ATermList) h_59);
      {
        ATerm n_59 = NULL,p_59 = NULL;
        ATerm o_59 = NULL;
        t = SSLgetAnnotations(not_null(h_59));
        {
          o_59 = t;
          if(((n_59 != NULL) && (n_59 != o_59)))
            _fail(o_59);
          else
            n_59 = o_59;
        }
        {
          t = not_null(i_59);
          {
            ATerm r_59 = NULL;
            t = g_48(t);
            {
              p_59 = t;
              {
                t = not_null(j_59);
                {
                  ATerm t_59 = NULL;
                  t = h_48(t);
                  {
                    r_59 = t;
                    {
                      ATerm u_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_59)), not_null(p_59)), not_null(n_59));
                      {
                        u_59 = t;
                        if(((t_59 != NULL) && (t_59 != u_59)))
                          _fail(u_59);
                        else
                          t_59 = u_59;
                      }
                      t = not_null(t_59);
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
  ATerm e_60 = NULL;
  e_60 = t;
  d_60 :
  if(((ATgetType(e_60) == AT_LIST) && ATisEmpty(e_60)))
    {
      {
        ATerm g_60 = NULL,i_60 = NULL;
        ATerm b_14;
        b_14 = t;
        {
          ATerm h_60 = NULL;
          t = SSLgetAnnotations(not_null(e_60));
          {
            h_60 = t;
            if(((g_60 != NULL) && (g_60 != h_60)))
              _fail(h_60);
            else
              g_60 = h_60;
          }
        }
        t = b_14;
        {
          ATerm j_60 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_60));
          {
            j_60 = t;
            if(((i_60 != NULL) && (i_60 != j_60)))
              _fail(j_60);
            else
              i_60 = j_60;
          }
          t = not_null(i_60);
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
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym__2))
    {
      q_60 = ATgetArgument(p_60, 0);
      r_60 = ATgetArgument(p_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_7, not_null(q_60), not_null(r_60));
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
  ATerm c_14;
  c_14 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_14;
        t = l_76(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
        }
      }
  }
  t = c_14;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm z_60 = NULL;
      ATerm g_14;
      g_14 = t;
      {
        ATerm x_60 = NULL;
        ATerm y_60 = NULL;
        y_60 = t;
        if(((x_60 != NULL) && (x_60 != y_60)))
          _fail(y_60);
        else
          x_60 = y_60;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(x_60));
          t = set_config_0(t);
        }
      }
      t = g_14;
      {
        ATerm a_61 = NULL;
        a_61 = t;
        if(((z_60 != NULL) && (z_60 != a_61)))
          _fail(a_61);
        else
          z_60 = a_61;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_60));
      }
      return(t);
    }
    ATerm z_2 (ATerm t)
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(r_14);
            }
          else
            {
              t = n_14;
              {
                t = l_76(t);
                t = Cons_2(t, _id, z_2);
              }
            }
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_2, z_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  ATerm t_14;
  t_14 = t;
  {
    ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
    l_61 = t;
    f_61 :
    if(match_cons(l_61, sym__3))
      {
        m_61 = ATgetArgument(l_61, 0);
        n_61 = ATgetArgument(l_61, 1);
        o_61 = ATgetArgument(l_61, 2);
        {
          if(((i_61 != NULL) && (i_61 != m_61)))
            _fail(m_61);
          else
            i_61 = m_61;
          {
            if(((j_61 != NULL) && (j_61 != n_61)))
              _fail(n_61);
            else
              j_61 = n_61;
            {
              if(((k_61 != NULL) && (k_61 != o_61)))
                _fail(o_61);
              else
                k_61 = o_61;
              t = SSL_table_put(not_null(i_61), not_null(j_61), not_null(k_61));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm r_61 = NULL;
  ATerm w_14;
  w_14 = t;
  {
    t = term_x_14;
    t = table_put_0(t);
  }
  t = w_14;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm y_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_76(t);
          LocalPopChoice(z_14);
        }
      else
        {
          t = y_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_3);
    {
      ATerm a_15 = t;
      int b_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15;
          c_15 = t;
          {
            ATerm d_15 = t;
            int e_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_r_13;
                t = get_config_0(t);
                LocalPopChoice(e_15);
              }
            else
              {
                t = d_15;
                t = fetch_1(t, Help_0);
              }
          }
          t = c_15;
          {
            t = system_usage_0(t);
            {
              t = term_z_8;
              t = exit_0(t);
            }
          }
          LocalPopChoice(b_15);
        }
      else
        {
          t = a_15;
          {
            ATerm f_15 = t;
            int k_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm c_3 (ATerm t)
                  {
                    ATerm s_61 = NULL;
                    s_61 = t;
                    if(((r_61 != NULL) && (r_61 != s_61)))
                      _fail(s_61);
                    else
                      r_61 = s_61;
                    return(t);
                  }
                  t = Undefined_1(t, c_3);
                  return(t);
                }
                t = fetch_1(t, b_3);
                {
                  ATerm d_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_61)), term_l_15);
                    return(t);
                  }
                  t = say_1(t, d_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_x_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(k_15);
              }
            else
              {
                t = f_15;
                {
                }
              }
          }
        }
      {
        ATerm m_15;
        m_15 = t;
        {
          t = term_q_12;
          t = table_destroy_0(t);
        }
        t = m_15;
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
        ATerm q_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_74);
            LocalPopChoice(s_15);
          }
        else
          {
            t = q_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
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
  ATerm e_3 (ATerm t)
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_74(t);
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_74);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, e_3, a_75, b_75, f_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm u_74 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm h_3 (ATerm t)
    {
      ATerm z_15;
      z_15 = t;
      {
        ATerm v_61 = NULL;
        ATerm w_61 = NULL;
        t = term_k_11;
        {
          t = get_config_0(t);
          {
            w_61 = t;
            if(((v_61 != NULL) && (v_61 != w_61)))
              _fail(w_61);
            else
              v_61 = w_61;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(v_61)));
          t = printnl_0(t);
        }
      }
      t = z_15;
      return(t);
    }
    t = if_verbose2_1(t, h_3);
    return(t);
  }
  t = iowrap_4(t, s_74, t_74, u_74, g_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  t = iowrap_3(t, q_74, r_74, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    t = _2(t, _id, n_74);
    return(t);
  }
  t = iowrap_2(t, i_3, _fail);
  return(t);
}
ATerm abox_format_0 (ATerm t)
{
  t = iowrap_1(t, Box_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, Box_0);
  return(t);
}

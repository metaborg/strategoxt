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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  init_constant_terms();
}
ATerm term_y_18;
ATerm term_l_18;
ATerm term_t_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_s_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_n_9;
ATerm term_d_9;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_h_8;
ATerm term_a_8;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_l_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_q_4;
ATerm term_g_4;
ATerm term_f_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_y_3;
ATerm term_t_3;
ATerm term_s_3;
void init_constant_terms (void)
{
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(sym_SOpt_2, term_s_3, term_t_3);
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym_S_1, term_z_3);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(sym_SOpt_2, term_d_4, term_t_3);
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(sym_S_1, term_f_4);
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_S_1, term_r_4);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_S_1, term_u_4);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("]", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym_S_1, term_w_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[]", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_S_1, term_z_4);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("   {", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_S_1, term_u_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_S_1, term_w_5);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_q_4);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_f_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_q_4);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_q_4);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_z_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_a_17, term_q_4);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__3, term_y_15, term_z_15, (ATerm) ATempty);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm UP_App_1 (ATerm, ATerm j_84 (ATerm));
ATerm UP_Cnst_0 (ATerm);
ATerm hpost_sep_list_2 (ATerm, ATerm u_84 (ATerm), ATerm v_84 (ATerm));
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
ATerm _2 (ATerm, ATerm h_48 (ATerm), ATerm i_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_75 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_78 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_76 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_72 (ATerm), ATerm o_72 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm crush_2 (ATerm, ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_78 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_76 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_80 (ATerm));
ATerm map_1 (ATerm, ATerm k_64 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_80 (ATerm));
ATerm Program_1 (ATerm, ATerm k_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm j_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_56 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_76 (ATerm));
ATerm PpTerm_0 (ATerm);
ATerm main_0 (ATerm);
ATerm UP_App_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm u_1 = NULL;
  ATerm z_1 = NULL,b_2 = NULL,i_2 = NULL;
  u_1 = t;
  {
    ATerm r_3;
    r_3 = t;
    {
      ATerm c_2 = NULL;
      ATerm e_2 = NULL,f_2 = NULL,h_2 = NULL;
      t = not_null(u_1);
      {
        c_2 = t;
        {
          t = SSL_explode_term(not_null(c_2));
          {
            e_2 = t;
            h_1 :
            if(match_cons(e_2, sym__2))
              {
                f_2 = ATgetArgument(e_2, 0);
                h_2 = ATgetArgument(e_2, 1);
                {
                  if(((z_1 != NULL) && (z_1 != f_2)))
                    _fail(f_2);
                  else
                    z_1 = f_2;
                  if(((b_2 != NULL) && (b_2 != h_2)))
                    _fail(h_2);
                  else
                    b_2 = h_2;
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
    t = r_3;
    {
      ATerm j_2 = NULL;
      t = not_null(b_2);
      {
        t = map_1(t, j_84);
        {
          t = post_commas_0(t);
          {
            j_2 = t;
            if(((i_2 != NULL) && (i_2 != j_2)))
              _fail(j_2);
            else
              i_2 = j_2;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_3), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_3), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_4), (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_e_4), not_null(i_2))), term_a_4))), (ATerm) ATmakeAppl(sym_S_1, not_null(z_1))));
    }
  }
  return(t);
}
ATerm UP_Cnst_0 (ATerm t)
{
  ATerm t_2 = NULL;
  ATerm v_2 = NULL;
  t_2 = t;
  {
    ATerm w_2 = NULL;
    ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
    t = not_null(t_2);
    {
      w_2 = t;
      {
        t = SSL_explode_term(not_null(w_2));
        {
          y_2 = t;
          r_2 :
          if(match_cons(y_2, sym__2))
            {
              z_2 = ATgetArgument(y_2, 0);
              a_3 = ATgetArgument(y_2, 1);
              s_2 :
              if(((ATgetType(a_3) == AT_LIST) && ATisEmpty(a_3)))
                {
                  if(((v_2 != NULL) && (v_2 != z_2)))
                    _fail(z_2);
                  else
                    v_2 = z_2;
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
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(v_2));
  }
  return(t);
}
ATerm hpost_sep_list_2 (ATerm t, ATerm u_84 (ATerm), ATerm v_84 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm h_4 = t;
    int j_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_4);
      }
    else
      {
        t = h_4;
        {
          ATerm m_4 = t;
          int n_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, u_84, Nil_0);
              LocalPopChoice(n_4);
            }
          else
            {
              t = m_4;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm h_3 = NULL;
                  ATerm j_3 = NULL,l_3 = NULL;
                  h_3 = t;
                  {
                    ATerm o_4;
                    o_4 = t;
                    {
                      ATerm k_3 = NULL;
                      t = not_null(h_3);
                      {
                        t = u_84(t);
                        {
                          k_3 = t;
                          if(((j_3 != NULL) && (j_3 != k_3)))
                            _fail(k_3);
                          else
                            j_3 = k_3;
                        }
                      }
                    }
                    t = o_4;
                    {
                      ATerm m_3 = NULL;
                      t = term_q_4;
                      {
                        t = v_84(t);
                        {
                          m_3 = t;
                          if(((l_3 != NULL) && (l_3 != m_3)))
                            _fail(m_3);
                          else
                            l_3 = m_3;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_3), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_3)), not_null(j_3)));
                    }
                  }
                  return(t);
                }
                t = Cons_2(t, b_0, n_3);
              }
            }
        }
      }
    return(t);
  }
  t = n_3(t);
  return(t);
}
ATerm post_commas_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_s_4;
    return(t);
  }
  t = hpost_sep_list_2(t, _id, c_0);
  return(t);
}
ATerm UP_Lst_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  x_3 = t;
  u_3 :
  if(((ATgetType(x_3) == AT_LIST) && !(ATisEmpty(x_3))))
    {
      v_3 = ATgetFirst((ATermList) x_3);
      w_3 = (ATerm) ATgetNext((ATermList) x_3);
      {
        ATerm b_4 = NULL;
        ATerm c_4 = NULL;
        t = not_null(x_3);
        {
          t = map_1(t, m_0);
          {
            t = post_commas_0(t);
            {
              c_4 = t;
              if(((b_4 != NULL) && (b_4 != c_4)))
                _fail(c_4);
              else
                b_4 = c_4;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_3), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_4), (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_e_4), not_null(b_4))), term_v_4));
      }
    }
  else
    {
      if(((ATgetType(x_3) == AT_LIST) && ATisEmpty(x_3)))
        {
          t = term_a_5;
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
  ATerm i_4 = NULL;
  ATerm k_4 = NULL;
  i_4 = t;
  {
    ATerm l_4 = NULL;
    t = (ATerm) ATinsert(ATempty, term_b_5);
    {
      t = implode_string_0(t);
      {
        l_4 = t;
        if(((k_4 != NULL) && (k_4 != l_4)))
          _fail(l_4);
        else
          k_4 = l_4;
      }
    }
    t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_3), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, not_null(k_4))), not_null(i_4)), (ATerm) ATmakeAppl(sym_S_1, not_null(k_4))));
  }
  return(t);
}
ATerm UP_Str_0 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  {
    t = not_null(p_4);
    t = is_string_0(t);
    {
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(p_4));
      t = Quote_0(t);
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_4 = NULL;
  t_4 = t;
  t = SSL_int_to_string(not_null(t_4));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  t = SSL_is_int(not_null(x_4));
  return(t);
}
ATerm UP_Int_0 (ATerm t)
{
  ATerm c_5 = NULL;
  ATerm e_5 = NULL;
  c_5 = t;
  {
    ATerm d_5;
    d_5 = t;
    {
      t = not_null(c_5);
      t = is_int_0(t);
    }
    t = d_5;
    {
      ATerm f_5 = NULL;
      t = not_null(c_5);
      {
        t = int_to_string_0(t);
        {
          f_5 = t;
          if(((e_5 != NULL) && (e_5 != f_5)))
            _fail(f_5);
          else
            e_5 = f_5;
        }
      }
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(e_5));
    }
  }
  return(t);
}
ATerm ugly_print_without_anno_0 (ATerm t)
{
  ATerm g_5 = t;
  int h_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UP_Int_0(t);
      LocalPopChoice(h_5);
    }
  else
    {
      t = g_5;
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UP_Str_0(t);
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            {
              ATerm o_5 = t;
              int p_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UP_Lst_1(t, ugly_print_0);
                  LocalPopChoice(p_5);
                }
              else
                {
                  t = o_5;
                  {
                    ATerm q_5 = t;
                    int s_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = UP_Cnst_0(t);
                        LocalPopChoice(s_5);
                      }
                    else
                      {
                        t = q_5;
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
  ATerm k_5 = NULL,m_5 = NULL;
  ATerm t_5;
  t_5 = t;
  {
    ATerm l_5 = NULL;
    t = ugly_print_without_anno_0(t);
    {
      l_5 = t;
      if(((k_5 != NULL) && (k_5 != l_5)))
        _fail(l_5);
      else
        k_5 = l_5;
    }
  }
  t = t_5;
  {
    ATerm n_5 = NULL;
    t = get_annotations_0(t);
    {
      t = ugly_print_0(t);
      {
        n_5 = t;
        if(((m_5 != NULL) && (m_5 != n_5)))
          _fail(n_5);
        else
          m_5 = n_5;
      }
    }
    t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_e_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_5), not_null(m_5)), term_v_5))), not_null(k_5)));
  }
  return(t);
}
ATerm get_annotations_0 (ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  t = SSLgetAnnotations(not_null(r_5));
  return(t);
}
ATerm has_annotation_0 (ATerm t)
{
  ATerm y_5;
  y_5 = t;
  {
    t = get_annotations_0(t);
    {
      ATerm d_6 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_6;
        }
    }
  }
  t = y_5;
  return(t);
}
ATerm ugly_print_0 (ATerm t)
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_annotation_0(t);
      LocalPopChoice(f_6);
      t = ugly_print_with_anno_0(t);
    }
  else
    {
      t = e_6;
      t = ugly_print_without_anno_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm h_48 (ATerm), ATerm i_48 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym__2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm g_6 = NULL,i_6 = NULL;
        ATerm h_6 = NULL;
        t = SSLgetAnnotations(not_null(a_6));
        {
          h_6 = t;
          if(((g_6 != NULL) && (g_6 != h_6)))
            _fail(h_6);
          else
            g_6 = h_6;
        }
        {
          t = not_null(b_6);
          {
            ATerm k_6 = NULL;
            t = h_48(t);
            {
              i_6 = t;
              {
                t = not_null(c_6);
                {
                  ATerm m_6 = NULL;
                  t = i_48(t);
                  {
                    k_6 = t;
                    {
                      ATerm n_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_6), not_null(k_6)), not_null(g_6));
                      {
                        n_6 = t;
                        if(((m_6 != NULL) && (m_6 != n_6)))
                          _fail(n_6);
                        else
                          m_6 = n_6;
                      }
                      t = not_null(m_6);
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
  ATerm v_6 = NULL;
  ATerm j_6;
  j_6 = t;
  {
    ATerm e_0 (ATerm t)
    {
      ATerm w_6 = NULL,x_6 = NULL;
      w_6 = t;
      u_6 :
      if(match_cons(w_6, sym_Program_1))
        {
          x_6 = ATgetArgument(w_6, 0);
          if(((v_6 != NULL) && (v_6 != x_6)))
            _fail(x_6);
          else
            v_6 = x_6;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, e_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_6), not_null(v_6)), term_o_6));
      {
        t = printnl_0(t);
        {
          t = term_q_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym__2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm r_6;
        r_6 = t;
        t = SSL_printnl(not_null(c_7), not_null(d_7));
        t = r_6;
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
  ATerm i_7 = NULL;
  i_7 = t;
  t = SSL_implode_string(not_null(i_7));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
        n_7 = t;
        m_7 :
        if(((ATgetType(n_7) == AT_LIST) && !(ATisEmpty(n_7))))
          {
            o_7 = ATgetFirst((ATermList) n_7);
            p_7 = (ATerm) ATgetNext((ATermList) n_7);
            {
              t = not_null(o_7);
              {
                ATerm f_0 (ATerm t)
                {
                  t = not_null(p_7);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_0);
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
  ATerm z_7 = NULL;
  ATerm b_8 = NULL;
  z_7 = t;
  {
    ATerm c_8 = NULL;
    ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
    t = not_null(z_7);
    {
      c_8 = t;
      {
        t = SSL_explode_term(not_null(c_8));
        {
          e_8 = t;
          x_7 :
          if(match_cons(e_8, sym__2))
            {
              f_8 = ATgetArgument(e_8, 0);
              g_8 = ATgetArgument(e_8, 1);
              y_7 :
              if(match_string(f_8, ""))
                {
                  if(((b_8 != NULL) && (b_8 != g_8)))
                    _fail(g_8);
                  else
                    b_8 = g_8;
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
      t = not_null(b_8);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_8);
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        {
          t = Nil_0(t);
          t = z_64(t);
        }
      }
    return(t);
  }
  t = k_8(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  m_8 :
  if(match_cons(n_8, sym__2))
    {
      o_8 = ATgetArgument(n_8, 0);
      p_8 = ATgetArgument(n_8, 1);
      {
        t = not_null(o_8);
        {
          ATerm n_0 (ATerm t)
          {
            t = not_null(p_8);
            return(t);
          }
          t = at_end_1(t, n_0);
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
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  t = SSL_explode_string(not_null(u_8));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm j_7;
  j_7 = t;
  {
    ATerm z_8 = NULL,b_9 = NULL;
    ATerm k_7;
    k_7 = t;
    {
      ATerm a_9 = NULL;
      t = i_75(t);
      {
        a_9 = t;
        if(((z_8 != NULL) && (z_8 != a_9)))
          _fail(a_9);
        else
          z_8 = a_9;
      }
    }
    t = k_7;
    {
      ATerm c_9 = NULL;
      c_9 = t;
      if(((b_9 != NULL) && (b_9 != c_9)))
        _fail(c_9);
      else
        b_9 = c_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_9)), not_null(z_8)));
        t = printnl_0(t);
      }
    }
  }
  t = j_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_is_string(not_null(g_9));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_7);
    }
  else
    {
      t = l_7;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              ATerm t_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = t_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, o_0);
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            {
              ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
              p_9 = t;
              o_9 :
              if(match_cons(p_9, sym_Path_1))
                {
                  q_9 = ATgetArgument(p_9, 0);
                  t = not_null(q_9);
                }
              else
                {
                  if(match_cons(p_9, sym_Var_1))
                    {
                      q_9 = ATgetArgument(p_9, 0);
                      {
                        t = not_null(q_9);
                        {
                          ATerm v_7 = t;
                          int w_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_7);
                            }
                          else
                            {
                              t = v_7;
                              {
                                ATerm p_0 (ATerm t)
                                {
                                  t = term_a_8;
                                  return(t);
                                }
                                t = debug_1(t, p_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_9, sym_Prefix_2))
                        {
                          q_9 = ATgetArgument(p_9, 0);
                          r_9 = ATgetArgument(p_9, 1);
                          {
                            ATerm w_9 = NULL,y_9 = NULL;
                            ATerm d_8;
                            d_8 = t;
                            {
                              ATerm x_9 = NULL;
                              t = not_null(q_9);
                              {
                                t = eval_config_0(t);
                                {
                                  x_9 = t;
                                  if(((w_9 != NULL) && (w_9 != x_9)))
                                    _fail(x_9);
                                  else
                                    w_9 = x_9;
                                }
                              }
                            }
                            t = d_8;
                            {
                              ATerm z_9 = NULL;
                              t = not_null(r_9);
                              {
                                t = eval_config_0(t);
                                {
                                  z_9 = t;
                                  if(((y_9 != NULL) && (y_9 != z_9)))
                                    _fail(z_9);
                                  else
                                    y_9 = z_9;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(y_9));
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
  ATerm h_10 = NULL;
  h_10 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_8, not_null(h_10));
    {
      t = table_get_0(t);
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_8;
              l_8 = t;
              {
                ATerm j_10 = NULL;
                ATerm k_10 = NULL;
                k_10 = t;
                if(((j_10 != NULL) && (j_10 != k_10)))
                  _fail(k_10);
                else
                  j_10 = k_10;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_h_8, not_null(h_10), not_null(j_10));
                  t = table_put_0(t);
                }
              }
              t = l_8;
            }
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8;
      s_8 = t;
      {
        ATerm o_10 = NULL;
        ATerm p_10 = NULL;
        t = term_t_8;
        {
          t = get_config_0(t);
          {
            p_10 = t;
            if(((o_10 != NULL) && (o_10 != p_10)))
              _fail(p_10);
            else
              o_10 = p_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), term_v_8);
          t = geq_0(t);
        }
      }
      t = s_8;
      t = f_78(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym__2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      t = SSL_WriteToTextFile(not_null(u_10), not_null(v_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  a_11 :
  if(match_cons(b_11, sym__2))
    {
      c_11 = ATgetArgument(b_11, 0);
      d_11 = ATgetArgument(b_11, 1);
      t = SSL_WriteToBinaryFile(not_null(c_11), not_null(d_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_11 = NULL;
  ATerm w_8;
  w_8 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_0 (ATerm t)
          {
            ATerm m_11 = NULL,n_11 = NULL;
            m_11 = t;
            i_11 :
            if(match_cons(m_11, sym_Output_1))
              {
                n_11 = ATgetArgument(m_11, 0);
                if(((l_11 != NULL) && (l_11 != n_11)))
                  _fail(n_11);
                else
                  l_11 = n_11;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, r_0);
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
          {
            ATerm o_11 = NULL;
            t = term_d_9;
            {
              o_11 = t;
              if(((l_11 != NULL) && (l_11 != o_11)))
                _fail(o_11);
              else
                l_11 = o_11;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_0, _id);
  }
  t = w_8;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        t = not_null(l_11);
        return(t);
      }
      t = split_2(t, t_0, _id);
      return(t);
    }
    t = _2(t, _id, s_0);
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm p_11 = NULL;
              p_11 = t;
              k_11 :
              if(!(match_cons(p_11, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, v_0);
            return(t);
          }
          t = _2(t, u_0, WriteToBinaryFile_0);
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_76 (ATerm))
{
  ATerm v_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  ATerm h_9;
  h_9 = t;
  t = dtime_0(t);
  t = h_9;
  {
    t = m_76(t);
    {
      ATerm i_9;
      i_9 = t;
      {
        ATerm w_11 = NULL;
        t = dtime_0(t);
        {
          w_11 = t;
          if(((v_11 != NULL) && (v_11 != w_11)))
            _fail(w_11);
          else
            v_11 = w_11;
        }
      }
      t = i_9;
      {
        x_11 = t;
        u_11 :
        if(match_cons(x_11, sym__2))
          {
            y_11 = ATgetArgument(x_11, 0);
            z_11 = ATgetArgument(x_11, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_11)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_11))), not_null(z_11));
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
  ATerm f_12 = NULL;
  f_12 = t;
  t = SSL_ReadFromFile(not_null(f_12));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_72 (ATerm), ATerm o_72 (ATerm))
{
  ATerm k_12 = NULL,m_12 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm l_12 = NULL;
    t = n_72(t);
    {
      l_12 = t;
      if(((k_12 != NULL) && (k_12 != l_12)))
        _fail(l_12);
      else
        k_12 = l_12;
    }
  }
  t = j_9;
  {
    ATerm n_12 = NULL;
    t = o_72(t);
    {
      n_12 = t;
      if(((m_12 != NULL) && (m_12 != n_12)))
        _fail(n_12);
      else
        m_12 = n_12;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_12), not_null(m_12));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm k_9;
  k_9 = t;
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 (ATerm t)
        {
          ATerm u_12 = NULL,v_12 = NULL;
          u_12 = t;
          r_12 :
          if(match_cons(u_12, sym_Input_1))
            {
              v_12 = ATgetArgument(u_12, 0);
              if(((t_12 != NULL) && (t_12 != v_12)))
                _fail(v_12);
              else
                t_12 = v_12;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, w_0);
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm w_12 = NULL;
          t = term_n_9;
          {
            w_12 = t;
            if(((t_12 != NULL) && (t_12 != w_12)))
              _fail(w_12);
            else
              t_12 = w_12;
          }
        }
      }
  }
  t = k_9;
  {
    ATerm x_0 (ATerm t)
    {
      t = not_null(t_12);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_0);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm a_13 = NULL;
    a_13 = t;
    z_12 :
    if(!(match_string(a_13, "-v")))
      {
        if(!(match_string(a_13, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    t = term_t_9;
    t = set_config_0(t);
    t = term_u_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  t = Option_3(t, y_0, z_0, a_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm d_13 = NULL;
    d_13 = t;
    b_13 :
    if(!(match_string(d_13, "-k")))
      {
        if(!(match_string(d_13, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm a_10;
    a_10 = t;
    {
      ATerm e_13 = NULL;
      ATerm f_13 = NULL;
      t = string_to_int_0(t);
      {
        f_13 = t;
        if(((e_13 != NULL) && (e_13 != f_13)))
          _fail(f_13);
        else
          e_13 = f_13;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, not_null(e_13));
        t = set_config_0(t);
      }
    }
    t = a_10;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_c_10;
    return(t);
  }
  t = ArgOption_3(t, b_1, c_1, d_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  t = SSL_string_to_int(not_null(i_13));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm q_13 = NULL;
        q_13 = t;
        l_13 :
        if(!(match_string(q_13, "-S")))
          {
            if(!(match_string(q_13, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        t = term_g_10;
        t = set_config_0(t);
        t = term_i_10;
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = term_l_10;
        return(t);
      }
      t = Option_3(t, e_1, f_1, g_1);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              ATerm r_13 = NULL;
              r_13 = t;
              m_13 :
              if(!(match_string(r_13, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              ATerm u_13 = NULL;
              ATerm q_10;
              q_10 = t;
              {
                ATerm s_13 = NULL;
                ATerm t_13 = NULL;
                t = string_to_int_0(t);
                {
                  t_13 = t;
                  if(((s_13 != NULL) && (s_13 != t_13)))
                    _fail(t_13);
                  else
                    s_13 = t_13;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(s_13));
                  t = set_config_0(t);
                }
              }
              t = q_10;
              {
                ATerm v_13 = NULL;
                v_13 = t;
                if(((u_13 != NULL) && (u_13 != v_13)))
                  _fail(v_13);
                else
                  u_13 = v_13;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_13));
              }
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              t = term_r_10;
              return(t);
            }
            t = ArgOption_3(t, i_1, j_1, k_1);
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            {
              ATerm l_1 (ATerm t)
              {
                ATerm w_13 = NULL;
                w_13 = t;
                p_13 :
                if(!(match_string(w_13, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_1 (ATerm t)
              {
                t = term_x_10;
                t = set_config_0(t);
                t = term_y_10;
                return(t);
              }
              ATerm n_1 (ATerm t)
              {
                t = term_z_10;
                return(t);
              }
              t = Option_3(t, l_1, m_1, n_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
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
            t = keep_option_0(t);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm c_14 = NULL;
    c_14 = t;
    z_13 :
    if(!(match_string(c_14, "-o")))
      {
        if(!(match_string(c_14, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm f_14 = NULL;
    ATerm j_11;
    j_11 = t;
    {
      ATerm d_14 = NULL;
      ATerm e_14 = NULL;
      e_14 = t;
      if(((d_14 != NULL) && (d_14 != e_14)))
        _fail(e_14);
      else
        d_14 = e_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(d_14));
        t = set_config_0(t);
      }
    }
    t = j_11;
    {
      ATerm g_14 = NULL;
      g_14 = t;
      if(((f_14 != NULL) && (f_14 != g_14)))
        _fail(g_14);
      else
        f_14 = g_14;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_14));
    }
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_r_11;
    return(t);
  }
  t = ArgOption_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm k_14 = NULL;
          k_14 = t;
          j_14 :
          if(!(match_string(k_14, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_1 (ATerm t)
        {
          t = term_b_12;
          t = set_config_0(t);
          t = term_c_12;
          return(t);
        }
        ATerm t_1 (ATerm t)
        {
          t = term_d_12;
          return(t);
        }
        t = Option_3(t, r_1, s_1, t_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  q_14 = t;
  o_14 :
  if(match_string(q_14, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
        {
          r_14 = ATgetFirst((ATermList) q_14);
          s_14 = (ATerm) ATgetNext((ATermList) q_14);
          p_14 :
          if(((ATgetType(s_14) == AT_LIST) && !(ATisEmpty(s_14))))
            {
              t_14 = ATgetFirst((ATermList) s_14);
              u_14 = (ATerm) ATgetNext((ATermList) s_14);
              {
                ATerm y_14 = NULL;
                ATerm e_12;
                e_12 = t;
                {
                  t = not_null(r_14);
                  t = j_0(t);
                }
                t = e_12;
                {
                  ATerm z_14 = NULL;
                  t = not_null(t_14);
                  {
                    t = k_0(t);
                    {
                      z_14 = t;
                      if(((y_14 != NULL) && (y_14 != z_14)))
                        _fail(z_14);
                      else
                        y_14 = z_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_14)), not_null(y_14));
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
  ATerm v_1 (ATerm t)
  {
    ATerm g_15 = NULL;
    g_15 = t;
    d_15 :
    if(!(match_string(g_15, "-i")))
      {
        if(!(match_string(g_15, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm j_15 = NULL;
    ATerm g_12;
    g_12 = t;
    {
      ATerm h_15 = NULL;
      ATerm i_15 = NULL;
      i_15 = t;
      if(((h_15 != NULL) && (h_15 != i_15)))
        _fail(i_15);
      else
        h_15 = i_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(h_15));
        t = set_config_0(t);
      }
    }
    t = g_12;
    {
      ATerm k_15 = NULL;
      k_15 = t;
      if(((j_15 != NULL) && (j_15 != k_15)))
        _fail(k_15);
      else
        j_15 = k_15;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_15));
    }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_i_12;
    return(t);
  }
  t = ArgOption_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = j_12;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATempty, term_s_12));
  {
    t = printnl_0(t);
    {
      t = term_q_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  t = SSL_TicksToSeconds(not_null(o_15));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym__2))
    {
      u_15 = ATgetArgument(t_15, 0);
      v_15 = ATgetArgument(t_15, 1);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_15), not_null(v_15));
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = SSL_addr(not_null(u_15), not_null(v_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm c_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_70(t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = c_13;
      {
        ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
        c_16 = t;
        b_16 :
        if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
          {
            d_16 = ATgetFirst((ATermList) c_16);
            e_16 = (ATerm) ATgetNext((ATermList) c_16);
            {
              ATerm h_16 = NULL;
              ATerm i_16 = NULL;
              t = not_null(e_16);
              {
                t = foldr_2(t, y_70, z_70);
                {
                  i_16 = t;
                  if(((h_16 != NULL) && (h_16 != i_16)))
                    _fail(i_16);
                  else
                    h_16 = i_16;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(h_16));
                t = z_70(t);
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
ATerm crush_2 (ATerm t, ATerm w_69 (ATerm), ATerm x_69 (ATerm))
{
  ATerm p_16 = NULL;
  ATerm r_16 = NULL;
  p_16 = t;
  {
    ATerm s_16 = NULL;
    ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
    t = not_null(p_16);
    {
      s_16 = t;
      {
        t = SSL_explode_term(not_null(s_16));
        {
          u_16 = t;
          o_16 :
          if(match_cons(u_16, sym__2))
            {
              v_16 = ATgetArgument(u_16, 0);
              w_16 = ATgetArgument(u_16, 1);
              if(((r_16 != NULL) && (r_16 != w_16)))
                _fail(w_16);
              else
                r_16 = w_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_16);
      t = foldr_2(t, w_69, x_69);
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
    ATerm y_1 (ATerm t)
    {
      t = term_f_10;
      return(t);
    }
    t = crush_2(t, y_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      {
        ATerm h_13;
        h_13 = t;
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_17), not_null(e_17));
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              t = SSL_gtr(not_null(d_17), not_null(e_17));
            }
        }
        t = h_13;
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
  ATerm k_17 = NULL;
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
      l_17 = t;
      j_17 :
      if(match_cons(l_17, sym__2))
        {
          m_17 = ATgetArgument(l_17, 0);
          n_17 = ATgetArgument(l_17, 1);
          {
            if(((k_17 != NULL) && (k_17 != m_17)))
              _fail(m_17);
            else
              k_17 = m_17;
            if(((k_17 != NULL) && (k_17 != n_17)))
              _fail(n_17);
            else
              k_17 = n_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14;
      a_14 = t;
      {
        ATerm q_17 = NULL;
        ATerm r_17 = NULL;
        t = term_t_8;
        {
          t = get_config_0(t);
          {
            r_17 = t;
            if(((q_17 != NULL) && (q_17 != r_17)))
              _fail(r_17);
            else
              q_17 = r_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), term_q_6);
          t = geq_0(t);
        }
      }
      t = a_14;
      t = e_78(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm v_17 = NULL,x_17 = NULL;
    ATerm b_14;
    b_14 = t;
    {
      ATerm w_17 = NULL;
      t = run_time_0(t);
      {
        w_17 = t;
        if(((v_17 != NULL) && (v_17 != w_17)))
          _fail(w_17);
        else
          v_17 = w_17;
      }
    }
    t = b_14;
    {
      ATerm y_17 = NULL;
      t = term_h_14;
      {
        t = get_config_0(t);
        {
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), not_null(v_17)), term_i_14), not_null(x_17)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_2);
  {
    t = term_f_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_Version_0))
    {
      ATerm h_18 = NULL,j_18 = NULL;
      ATerm m_14;
      m_14 = t;
      {
        ATerm i_18 = NULL;
        t = SSLgetAnnotations(not_null(f_18));
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
      }
      t = m_14;
      {
        ATerm k_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_18));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm n_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = n_14;
        {
          ATerm w_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(x_14);
            }
          else
            {
              t = w_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, d_2);
  t = k_76(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  t = SSL_table_create(not_null(p_18));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    ATerm a_15;
    a_15 = t;
    {
      t = term_b_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_15, term_c_15, not_null(t_18));
          t = table_put_0(t);
        }
      }
    }
    t = a_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  t = SSL_table_destroy(not_null(x_18));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  t = SSL_exit(not_null(b_19));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,m_19 = NULL;
  f_19 = t;
  e_19 :
  if(((ATgetType(f_19) == AT_LIST) && ATisEmpty(f_19)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
        {
          g_19 = ATgetFirst((ATermList) f_19);
          m_19 = (ATerm) ATgetNext((ATermList) f_19);
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
  ATerm e_15;
  e_15 = t;
  {
    ATerm p_19 = NULL;
    ATerm s_19 = NULL;
    ATerm f_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = f_15;
        {
          ATerm q_19 = NULL;
          ATerm r_19 = NULL;
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
          t = (ATerm) ATinsert(ATempty, not_null(q_19));
        }
      }
    {
      s_19 = t;
      if(((p_19 != NULL) && (p_19 != s_19)))
        _fail(s_19);
      else
        p_19 = s_19;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(p_19));
      t = printnl_0(t);
    }
  }
  t = e_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm v_19 (ATerm t)
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = Cons_2(t, k_64, v_19);
      }
    return(t);
  }
  t = v_19(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  h_20 = t;
  e_20 :
  if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
    {
      f_20 = ATgetFirst((ATermList) h_20);
      g_20 = (ATerm) ATgetNext((ATermList) h_20);
      {
        ATerm k_20 = NULL;
        t = not_null(g_20);
        {
          ATerm p_15;
          p_15 = t;
          {
            ATerm l_20 = NULL,n_20 = NULL,p_20 = NULL;
            ATerm q_15;
            q_15 = t;
            {
              ATerm m_20 = NULL;
              t = i_0(t);
              {
                m_20 = t;
                if(((l_20 != NULL) && (l_20 != m_20)))
                  _fail(m_20);
                else
                  l_20 = m_20;
              }
            }
            t = q_15;
            {
              ATerm o_20 = NULL;
              t = not_null(f_20);
              {
                t = h_0(t);
                {
                  o_20 = t;
                  if(((n_20 != NULL) && (n_20 != o_20)))
                    _fail(o_20);
                  else
                    n_20 = o_20;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_20)), not_null(n_20));
                {
                  p_20 = t;
                  if(((k_20 != NULL) && (k_20 != p_20)))
                    _fail(p_20);
                  else
                    k_20 = p_20;
                }
              }
            }
          }
          t = p_15;
          {
            ATerm g_2 (ATerm t)
            {
              t = not_null(k_20);
              return(t);
            }
            t = reverse_acc_2(t, h_0, g_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_20) == AT_LIST) && ATisEmpty(h_20)))
        {
          {
            t = term_q_4;
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
ATerm short_description_1 (ATerm t, ATerm h_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_54 (ATerm))
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_Program_1))
    {
      b_21 = ATgetArgument(a_21, 0);
      {
        ATerm e_21 = NULL,g_21 = NULL;
        ATerm f_21 = NULL;
        t = SSLgetAnnotations(not_null(a_21));
        {
          f_21 = t;
          if(((e_21 != NULL) && (e_21 != f_21)))
            _fail(f_21);
          else
            e_21 = f_21;
        }
        {
          t = not_null(b_21);
          {
            ATerm i_21 = NULL;
            t = k_54(t);
            {
              g_21 = t;
              {
                ATerm j_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_21)), not_null(e_21));
                {
                  j_21 = t;
                  if(((i_21 != NULL) && (i_21 != j_21)))
                    _fail(j_21);
                  else
                    i_21 = j_21;
                }
                t = not_null(i_21);
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
  ATerm r_21 = NULL;
  ATerm r_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_21 = NULL;
      t = term_h_14;
      {
        t = get_config_0(t);
        {
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
        }
      }
      LocalPopChoice(w_15);
    }
  else
    {
      t = r_15;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm m_2 (ATerm t)
          {
            ATerm t_21 = NULL;
            t_21 = t;
            if(((r_21 != NULL) && (r_21 != t_21)))
              _fail(t_21);
            else
              r_21 = t_21;
            return(t);
          }
          t = Program_1(t, m_2);
          return(t);
        }
        t = fetch_1(t, l_2);
      }
    }
  {
    t = term_x_15;
    {
      t = echo_0(t);
      {
        t = term_a_16;
        {
          t = table_get_0(t);
          {
            ATerm n_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, n_2);
            {
              ATerm o_2 (ATerm t)
              {
                ATerm u_21 = NULL;
                ATerm v_21 = NULL;
                v_21 = t;
                if(((u_21 != NULL) && (u_21 != v_21)))
                  _fail(v_21);
                else
                  u_21 = v_21;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_21)), term_f_16);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, o_2);
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
  ATerm g_16;
  g_16 = t;
  {
    ATerm a_22 = NULL;
    ATerm b_22 = NULL;
    b_22 = t;
    if(((a_22 != NULL) && (a_22 != b_22)))
      _fail(b_22);
    else
      a_22 = b_22;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATempty, not_null(a_22)));
      t = printnl_0(t);
    }
  }
  t = g_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm j_16;
  j_16 = t;
  {
    t = j_75(t);
    t = debug_0(t);
  }
  t = j_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_54 (ATerm))
{
  ATerm i_22 = NULL,j_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym_Undefined_1))
    {
      j_22 = ATgetArgument(i_22, 0);
      {
        ATerm m_22 = NULL,o_22 = NULL;
        ATerm n_22 = NULL;
        t = SSLgetAnnotations(not_null(i_22));
        {
          n_22 = t;
          if(((m_22 != NULL) && (m_22 != n_22)))
            _fail(n_22);
          else
            m_22 = n_22;
        }
        {
          t = not_null(j_22);
          {
            ATerm q_22 = NULL;
            t = l_54(t);
            {
              o_22 = t;
              {
                ATerm r_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_22)), not_null(m_22));
                {
                  r_22 = t;
                  if(((q_22 != NULL) && (q_22 != r_22)))
                    _fail(r_22);
                  else
                    q_22 = r_22;
                }
                t = not_null(q_22);
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
ATerm fetch_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm w_22 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_64, _id);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = Cons_2(t, _id, w_22);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_79 (ATerm))
{
  t = fetch_1(t, h_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym_Help_0))
    {
      ATerm d_23 = NULL,f_23 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm e_23 = NULL;
        t = SSLgetAnnotations(not_null(b_23));
        {
          e_23 = t;
          if(((d_23 != NULL) && (d_23 != e_23)))
            _fail(e_23);
          else
            d_23 = e_23;
        }
      }
      t = m_16;
      {
        ATerm g_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_23));
        {
          g_23 = t;
          if(((f_23 != NULL) && (f_23 != g_23)))
            _fail(g_23);
          else
            f_23 = g_23;
        }
        t = not_null(f_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_56 (ATerm))
{
  ATerm n_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_56(t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = n_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      t = SSL_table_get(not_null(n_23), not_null(o_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym__3))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      y_23 = ATgetArgument(v_23, 2);
      {
        ATerm t_16;
        t_16 = t;
        {
          ATerm c_24 = NULL;
          ATerm d_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), not_null(x_23));
          {
            ATerm x_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_16);
              }
            else
              {
                t = x_16;
                t = (ATerm) ATempty;
              }
            {
              d_24 = t;
              if(((c_24 != NULL) && (c_24 != d_24)))
                _fail(d_24);
              else
                c_24 = d_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_23), not_null(x_23), (ATerm) ATinsert(CheckATermList(not_null(c_24)), not_null(y_23)));
            t = table_put_0(t);
          }
        }
        t = t_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm h_24 = NULL;
  ATerm i_24 = NULL;
  t = term_q_4;
  {
    t = m_80(t);
    {
      i_24 = t;
      if(((h_24 != NULL) && (h_24 != i_24)))
        _fail(i_24);
      else
        h_24 = i_24;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_15, term_z_15, not_null(h_24));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_24 = NULL,p_24 = NULL,r_24 = NULL;
  o_24 = t;
  n_24 :
  if(match_string(o_24, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_24) == AT_LIST) && !(ATisEmpty(o_24))))
        {
          p_24 = ATgetFirst((ATermList) o_24);
          r_24 = (ATerm) ATgetNext((ATermList) o_24);
          {
            ATerm u_24 = NULL;
            ATerm z_16;
            z_16 = t;
            {
              t = not_null(p_24);
              t = a_0(t);
            }
            t = z_16;
            {
              ATerm v_24 = NULL;
              t = term_q_4;
              {
                t = d_0(t);
                {
                  v_24 = t;
                  if(((u_24 != NULL) && (u_24 != v_24)))
                    _fail(v_24);
                  else
                    u_24 = v_24;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_24)), not_null(u_24));
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
  ATerm p_2 (ATerm t)
  {
    ATerm a_25 = NULL;
    a_25 = t;
    z_24 :
    if(!(match_string(a_25, "--help")))
      {
        if(!(match_string(a_25, "-h")))
          {
            if(!(match_string(a_25, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_f_17;
    {
      t = set_config_0(t);
      t = term_g_17;
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_h_17;
    return(t);
  }
  t = Option_3(t, p_2, q_2, u_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  c_25 :
  if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
    {
      e_25 = ATgetFirst((ATermList) d_25);
      f_25 = (ATerm) ATgetNext((ATermList) d_25);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_25)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_25)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  q_25 :
  if(((ATgetType(r_25) == AT_LIST) && !(ATisEmpty(r_25))))
    {
      s_25 = ATgetFirst((ATermList) r_25);
      t_25 = (ATerm) ATgetNext((ATermList) r_25);
      {
        ATerm x_25 = NULL,z_25 = NULL;
        ATerm y_25 = NULL;
        t = SSLgetAnnotations(not_null(r_25));
        {
          y_25 = t;
          if(((x_25 != NULL) && (x_25 != y_25)))
            _fail(y_25);
          else
            x_25 = y_25;
        }
        {
          t = not_null(s_25);
          {
            ATerm b_26 = NULL;
            t = q_49(t);
            {
              z_25 = t;
              {
                t = not_null(t_25);
                {
                  ATerm d_26 = NULL;
                  t = r_49(t);
                  {
                    b_26 = t;
                    {
                      ATerm e_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_26)), not_null(z_25)), not_null(x_25));
                      {
                        e_26 = t;
                        if(((d_26 != NULL) && (d_26 != e_26)))
                          _fail(e_26);
                        else
                          d_26 = e_26;
                      }
                      t = not_null(d_26);
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
  ATerm o_26 = NULL;
  o_26 = t;
  n_26 :
  if(((ATgetType(o_26) == AT_LIST) && ATisEmpty(o_26)))
    {
      {
        ATerm q_26 = NULL,s_26 = NULL;
        ATerm i_17;
        i_17 = t;
        {
          ATerm r_26 = NULL;
          t = SSLgetAnnotations(not_null(o_26));
          {
            r_26 = t;
            if(((q_26 != NULL) && (q_26 != r_26)))
              _fail(r_26);
            else
              q_26 = r_26;
          }
        }
        t = i_17;
        {
          ATerm t_26 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_26));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_8, not_null(a_27), not_null(b_27));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm o_17;
  o_17 = t;
  {
    ATerm p_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_17;
        t = k_80(t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = p_17;
        {
        }
      }
  }
  t = o_17;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm j_27 = NULL;
      ATerm u_17;
      u_17 = t;
      {
        ATerm h_27 = NULL;
        ATerm i_27 = NULL;
        i_27 = t;
        if(((h_27 != NULL) && (h_27 != i_27)))
          _fail(i_27);
        else
          h_27 = i_27;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_14, not_null(h_27));
          t = set_config_0(t);
        }
      }
      t = u_17;
      {
        ATerm k_27 = NULL;
        k_27 = t;
        if(((j_27 != NULL) && (j_27 != k_27)))
          _fail(k_27);
        else
          j_27 = k_27;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_27));
      }
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm z_17 = t;
      int a_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              {
                t = k_80(t);
                t = Cons_2(t, _id, b_3);
              }
            }
          LocalPopChoice(a_18);
        }
      else
        {
          t = z_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_2, b_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  ATerm d_18;
  d_18 = t;
  {
    ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
    t_27 = t;
    p_27 :
    if(match_cons(t_27, sym__3))
      {
        u_27 = ATgetArgument(t_27, 0);
        v_27 = ATgetArgument(t_27, 1);
        w_27 = ATgetArgument(t_27, 2);
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
            {
              if(((s_27 != NULL) && (s_27 != w_27)))
                _fail(w_27);
              else
                s_27 = w_27;
              t = SSL_table_put(not_null(q_27), not_null(r_27), not_null(s_27));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm z_27 = NULL;
  ATerm g_18;
  g_18 = t;
  {
    t = term_l_18;
    t = table_put_0(t);
  }
  t = g_18;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_80(t);
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_3);
    {
      ATerm o_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_18;
          r_18 = t;
          {
            ATerm s_18 = t;
            int u_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_17;
                t = get_config_0(t);
                LocalPopChoice(u_18);
              }
            else
              {
                t = s_18;
                t = fetch_1(t, Help_0);
              }
          }
          t = r_18;
          {
            t = system_usage_0(t);
            {
              t = term_f_10;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_18);
        }
      else
        {
          t = o_18;
          {
            ATerm v_18 = t;
            int w_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm a_28 = NULL;
                    a_28 = t;
                    if(((z_27 != NULL) && (z_27 != a_28)))
                      _fail(a_28);
                    else
                      z_27 = a_28;
                    return(t);
                  }
                  t = Undefined_1(t, e_3);
                  return(t);
                }
                t = fetch_1(t, d_3);
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_27)), term_y_18);
                    return(t);
                  }
                  t = say_1(t, f_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_q_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_18);
              }
            else
              {
                t = v_18;
                {
                }
              }
          }
        }
      {
        ATerm z_18;
        z_18 = t;
        {
          t = term_y_15;
          t = table_destroy_0(t);
        }
        t = z_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm))
{
  t = parse_options_1(t, q_76);
  {
    t = store_options_0(t);
    {
      t = s_76(t);
      {
        ATerm a_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_76);
            LocalPopChoice(c_19);
          }
        else
          {
            t = a_19;
            {
              ATerm d_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_76(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = d_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_77(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, h_77);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, g_3, j_77, k_77, i_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm k_19;
      k_19 = t;
      {
        ATerm d_28 = NULL;
        ATerm e_28 = NULL;
        t = term_h_14;
        {
          t = get_config_0(t);
          {
            e_28 = t;
            if(((d_28 != NULL) && (d_28 != e_28)))
              _fail(e_28);
            else
              d_28 = e_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATempty, not_null(d_28)));
          t = printnl_0(t);
        }
      }
      t = k_19;
      return(t);
    }
    t = if_verbose2_1(t, p_3);
    return(t);
  }
  t = iowrap_4(t, b_77, c_77, d_77, o_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm))
{
  t = iowrap_3(t, z_76, a_77, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    t = _2(t, _id, w_76);
    return(t);
  }
  t = iowrap_2(t, q_3, _fail);
  return(t);
}
ATerm PpTerm_0 (ATerm t)
{
  t = iowrap_1(t, ugly_print_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, ugly_print_0);
  return(t);
}

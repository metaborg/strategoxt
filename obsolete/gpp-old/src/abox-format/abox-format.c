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
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
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
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
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
ATerm term_o_15;
ATerm term_y_14;
ATerm term_n_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_g_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_d_7;
void init_constant_terms (void)
{
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_w_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_w_8);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_w_8);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_z_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_w_8);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__3, term_y_12, term_z_12, (ATerm) ATempty);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm is_int_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm));
ATerm Arg_1 (ATerm, ATerm h_52 (ATerm));
ATerm LINT_2 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm));
ATerm L_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm list_1 (ATerm, ATerm d_65 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm REF_2 (ATerm, ATerm z_51 (ATerm), ATerm a_52 (ATerm));
ATerm LBL_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm R_2 (ATerm, ATerm l_51 (ATerm), ATerm m_51 (ATerm));
ATerm AR_1 (ATerm, ATerm p_51 (ATerm));
ATerm AC_1 (ATerm, ATerm o_51 (ATerm));
ATerm AL_1 (ATerm, ATerm n_51 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm A_3 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm k_51 (ATerm));
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
ATerm FFID_2 (ATerm, ATerm v_51 (ATerm), ATerm w_51 (ATerm));
ATerm FInt_2 (ATerm, ATerm t_51 (ATerm), ATerm u_51 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm s_51 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm));
ATerm ALT_2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm HV_2 (ATerm, ATerm a_51 (ATerm), ATerm b_51 (ATerm));
ATerm V_2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm H_2 (ATerm, ATerm w_50 (ATerm), ATerm x_50 (ATerm));
ATerm S_1 (ATerm, ATerm v_50 (ATerm));
ATerm Box_0 (ATerm);
ATerm _2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_75 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_77 (ATerm));
ATerm debug_1 (ATerm, ATerm f_64 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_58 (ATerm), ATerm b_58 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm y_69 (ATerm), ATerm z_69 (ATerm));
ATerm crush_2 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_75 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_79 (ATerm));
ATerm map_1 (ATerm, ATerm b_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_79 (ATerm));
ATerm Program_1 (ATerm, ATerm q_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_64 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_50 (ATerm), ATerm u_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_79 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_77 (ATerm));
ATerm abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm is_int_0 (ATerm t)
{
  ATerm j_1 = NULL;
  j_1 = t;
  t = SSL_is_int(not_null(j_1));
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm))
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
            t = i_52(t);
            {
              z_4 = t;
              {
                t = not_null(n_4);
                {
                  ATerm g_5 = NULL;
                  t = j_52(t);
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
ATerm Arg_1 (ATerm t, ATerm h_52 (ATerm))
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
            t = h_52(t);
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
ATerm LINT_2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
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
            t = f_52(t);
            {
              a_11 = t;
              {
                t = not_null(u_10);
                {
                  ATerm e_11 = NULL;
                  t = g_52(t);
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
ATerm L_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
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
            t = d_52(t);
            {
              z_11 = t;
              {
                t = not_null(t_11);
                {
                  ATerm d_12 = NULL;
                  t = e_52(t);
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
ATerm list_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm k_12 (ATerm t)
  {
    ATerm s_3 = t;
    int t_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_3);
      }
    else
      {
        t = s_3;
        t = Cons_2(t, d_65, k_12);
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
      ATerm u_3;
      u_3 = t;
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
      t = u_3;
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
      ATerm v_3;
      v_3 = t;
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
      t = v_3;
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
      ATerm w_3;
      w_3 = t;
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
      t = w_3;
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
  ATerm x_3 = t;
  int y_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = VS_0(t);
      LocalPopChoice(y_3);
    }
  else
    {
      t = x_3;
      {
        ATerm z_3 = t;
        int a_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HS_0(t);
            LocalPopChoice(a_4);
          }
        else
          {
            t = z_3;
            t = IS_0(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm))
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
            t = e_51(t);
            {
              m_14 = t;
              {
                t = not_null(g_14);
                {
                  ATerm q_14 = NULL;
                  t = f_51(t);
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
ATerm C_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
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
            t = b_52(t);
            {
              l_15 = t;
              {
                t = not_null(f_15);
                {
                  ATerm p_15 = NULL;
                  t = c_52(t);
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
ATerm REF_2 (ATerm t, ATerm z_51 (ATerm), ATerm a_52 (ATerm))
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
            t = z_51(t);
            {
              k_16 = t;
              {
                t = not_null(e_16);
                {
                  ATerm o_16 = NULL;
                  t = a_52(t);
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
ATerm LBL_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
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
            t = x_51(t);
            {
              j_17 = t;
              {
                t = not_null(d_17);
                {
                  ATerm n_17 = NULL;
                  t = y_51(t);
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
ATerm R_2 (ATerm t, ATerm l_51 (ATerm), ATerm m_51 (ATerm))
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
            t = l_51(t);
            {
              i_18 = t;
              {
                t = not_null(c_18);
                {
                  ATerm m_18 = NULL;
                  t = m_51(t);
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
ATerm AR_1 (ATerm t, ATerm p_51 (ATerm))
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
            t = p_51(t);
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
ATerm AC_1 (ATerm t, ATerm o_51 (ATerm))
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
            t = o_51(t);
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
ATerm AL_1 (ATerm t, ATerm n_51 (ATerm))
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
            t = n_51(t);
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
  ATerm b_4 = t;
  int c_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = list_1(t, S_Option_0);
        return(t);
      }
      t = AL_1(t, b_0);
      LocalPopChoice(c_4);
    }
  else
    {
      t = b_4;
      {
        ATerm d_4 = t;
        int e_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, c_0);
            LocalPopChoice(e_4);
          }
        else
          {
            t = d_4;
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
ATerm A_3 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm k_51 (ATerm))
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
        ATerm n_21 = NULL,p_21 = NULL;
        ATerm o_21 = NULL;
        t = SSLgetAnnotations(not_null(f_21));
        {
          o_21 = t;
          if(((n_21 != NULL) && (n_21 != o_21)))
            _fail(o_21);
          else
            n_21 = o_21;
        }
        {
          t = not_null(g_21);
          {
            ATerm r_21 = NULL;
            t = i_51(t);
            {
              p_21 = t;
              {
                t = not_null(h_21);
                {
                  ATerm t_21 = NULL;
                  t = j_51(t);
                  {
                    r_21 = t;
                    {
                      t = not_null(i_21);
                      {
                        ATerm v_21 = NULL;
                        t = k_51(t);
                        {
                          t_21 = t;
                          {
                            ATerm w_21 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, not_null(p_21), not_null(r_21), not_null(t_21)), not_null(n_21));
                            {
                              w_21 = t;
                              if(((v_21 != NULL) && (v_21 != w_21)))
                                _fail(w_21);
                              else
                                v_21 = w_21;
                            }
                            t = not_null(v_21);
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
  ATerm h_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym_MATH_0))
    {
      ATerm j_22 = NULL,l_22 = NULL;
      ATerm f_4;
      f_4 = t;
      {
        ATerm k_22 = NULL;
        t = SSLgetAnnotations(not_null(h_22));
        {
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
      }
      t = f_4;
      {
        ATerm m_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(j_22));
        {
          m_22 = t;
          if(((l_22 != NULL) && (l_22 != m_22)))
            _fail(m_22);
          else
            l_22 = m_22;
        }
        t = not_null(l_22);
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
  ATerm u_22 = NULL;
  u_22 = t;
  t_22 :
  if(match_cons(u_22, sym_NUM_0))
    {
      ATerm w_22 = NULL,y_22 = NULL;
      ATerm g_4;
      g_4 = t;
      {
        ATerm x_22 = NULL;
        t = SSLgetAnnotations(not_null(u_22));
        {
          x_22 = t;
          if(((w_22 != NULL) && (w_22 != x_22)))
            _fail(x_22);
          else
            w_22 = x_22;
        }
      }
      t = g_4;
      {
        ATerm z_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(w_22));
        {
          z_22 = t;
          if(((y_22 != NULL) && (y_22 != z_22)))
            _fail(z_22);
          else
            y_22 = z_22;
        }
        t = not_null(y_22);
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
  ATerm h_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_VAR_0))
    {
      ATerm j_23 = NULL,l_23 = NULL;
      ATerm k_4;
      k_4 = t;
      {
        ATerm k_23 = NULL;
        t = SSLgetAnnotations(not_null(h_23));
        {
          k_23 = t;
          if(((j_23 != NULL) && (j_23 != k_23)))
            _fail(k_23);
          else
            j_23 = k_23;
        }
      }
      t = k_4;
      {
        ATerm m_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(j_23));
        {
          m_23 = t;
          if(((l_23 != NULL) && (l_23 != m_23)))
            _fail(m_23);
          else
            l_23 = m_23;
        }
        t = not_null(l_23);
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
  ATerm u_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym_KW_0))
    {
      ATerm w_23 = NULL,y_23 = NULL;
      ATerm l_4;
      l_4 = t;
      {
        ATerm x_23 = NULL;
        t = SSLgetAnnotations(not_null(u_23));
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
      }
      t = l_4;
      {
        ATerm z_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(w_23));
        {
          z_23 = t;
          if(((y_23 != NULL) && (y_23 != z_23)))
            _fail(z_23);
          else
            y_23 = z_23;
        }
        t = not_null(y_23);
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
  ATerm o_24 = NULL;
  o_24 = t;
  n_24 :
  if(match_cons(o_24, sym_CL_0))
    {
      ATerm q_24 = NULL,x_24 = NULL;
      ATerm m_4;
      m_4 = t;
      {
        ATerm r_24 = NULL;
        t = SSLgetAnnotations(not_null(o_24));
        {
          r_24 = t;
          if(((q_24 != NULL) && (q_24 != r_24)))
            _fail(r_24);
          else
            q_24 = r_24;
        }
      }
      t = m_4;
      {
        ATerm y_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(q_24));
        {
          y_24 = t;
          if(((x_24 != NULL) && (x_24 != y_24)))
            _fail(y_24);
          else
            x_24 = y_24;
        }
        t = not_null(x_24);
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
  ATerm g_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym_SZ_0))
    {
      ATerm i_25 = NULL,k_25 = NULL;
      ATerm o_4;
      o_4 = t;
      {
        ATerm j_25 = NULL;
        t = SSLgetAnnotations(not_null(g_25));
        {
          j_25 = t;
          if(((i_25 != NULL) && (i_25 != j_25)))
            _fail(j_25);
          else
            i_25 = j_25;
        }
      }
      t = o_4;
      {
        ATerm o_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(i_25));
        {
          o_25 = t;
          if(((k_25 != NULL) && (k_25 != o_25)))
            _fail(o_25);
          else
            k_25 = o_25;
        }
        t = not_null(k_25);
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
  ATerm w_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym_SH_0))
    {
      ATerm y_25 = NULL,a_26 = NULL;
      ATerm p_4;
      p_4 = t;
      {
        ATerm z_25 = NULL;
        t = SSLgetAnnotations(not_null(w_25));
        {
          z_25 = t;
          if(((y_25 != NULL) && (y_25 != z_25)))
            _fail(z_25);
          else
            y_25 = z_25;
        }
      }
      t = p_4;
      {
        ATerm b_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(y_25));
        {
          b_26 = t;
          if(((a_26 != NULL) && (a_26 != b_26)))
            _fail(b_26);
          else
            a_26 = b_26;
        }
        t = not_null(a_26);
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
  ATerm j_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_SE_0))
    {
      ATerm l_26 = NULL,n_26 = NULL;
      ATerm q_4;
      q_4 = t;
      {
        ATerm m_26 = NULL;
        t = SSLgetAnnotations(not_null(j_26));
        {
          m_26 = t;
          if(((l_26 != NULL) && (l_26 != m_26)))
            _fail(m_26);
          else
            l_26 = m_26;
        }
      }
      t = q_4;
      {
        ATerm o_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(l_26));
        {
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
        }
        t = not_null(n_26);
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
  ATerm w_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym_FM_0))
    {
      ATerm z_26 = NULL,b_27 = NULL;
      ATerm r_4;
      r_4 = t;
      {
        ATerm a_27 = NULL;
        t = SSLgetAnnotations(not_null(w_26));
        {
          a_27 = t;
          if(((z_26 != NULL) && (z_26 != a_27)))
            _fail(a_27);
          else
            z_26 = a_27;
        }
      }
      t = r_4;
      {
        ATerm c_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(z_26));
        {
          c_27 = t;
          if(((b_27 != NULL) && (b_27 != c_27)))
            _fail(c_27);
          else
            b_27 = c_27;
        }
        t = not_null(b_27);
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
  ATerm k_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_FN_0))
    {
      ATerm m_27 = NULL,o_27 = NULL;
      ATerm s_4;
      s_4 = t;
      {
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(k_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
      }
      t = s_4;
      {
        ATerm p_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FN_0), not_null(m_27));
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
        t = not_null(o_27);
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
  ATerm t_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FN_0(t);
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
            t = FM_0(t);
            LocalPopChoice(y_4);
          }
        else
          {
            t = x_4;
            {
              ATerm a_5 = t;
              int c_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SE_0(t);
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
                        t = SH_0(t);
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
                              t = SZ_0(t);
                              LocalPopChoice(i_5);
                            }
                          else
                            {
                              t = f_5;
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
ATerm FFID_2 (ATerm t, ATerm v_51 (ATerm), ATerm w_51 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  y_27 :
  if(match_cons(b_28, sym_FFID_2))
    {
      c_28 = ATgetArgument(b_28, 0);
      d_28 = ATgetArgument(b_28, 1);
      {
        ATerm h_28 = NULL,j_28 = NULL;
        ATerm i_28 = NULL;
        t = SSLgetAnnotations(not_null(b_28));
        {
          i_28 = t;
          if(((h_28 != NULL) && (h_28 != i_28)))
            _fail(i_28);
          else
            h_28 = i_28;
        }
        {
          t = not_null(c_28);
          {
            ATerm l_28 = NULL;
            t = v_51(t);
            {
              j_28 = t;
              {
                t = not_null(d_28);
                {
                  ATerm n_28 = NULL;
                  t = w_51(t);
                  {
                    l_28 = t;
                    {
                      ATerm o_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(j_28), not_null(l_28)), not_null(h_28));
                      {
                        o_28 = t;
                        if(((n_28 != NULL) && (n_28 != o_28)))
                          _fail(o_28);
                        else
                          n_28 = o_28;
                      }
                      t = not_null(n_28);
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
ATerm FInt_2 (ATerm t, ATerm t_51 (ATerm), ATerm u_51 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym_FInt_2))
    {
      b_29 = ATgetArgument(a_29, 0);
      c_29 = ATgetArgument(a_29, 1);
      {
        ATerm g_29 = NULL,i_29 = NULL;
        ATerm h_29 = NULL;
        t = SSLgetAnnotations(not_null(a_29));
        {
          h_29 = t;
          if(((g_29 != NULL) && (g_29 != h_29)))
            _fail(h_29);
          else
            g_29 = h_29;
        }
        {
          t = not_null(b_29);
          {
            ATerm k_29 = NULL;
            t = t_51(t);
            {
              i_29 = t;
              {
                t = not_null(c_29);
                {
                  ATerm m_29 = NULL;
                  t = u_51(t);
                  {
                    k_29 = t;
                    {
                      ATerm n_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FInt_2, not_null(i_29), not_null(k_29)), not_null(g_29));
                      {
                        n_29 = t;
                        if(((m_29 != NULL) && (m_29 != n_29)))
                          _fail(n_29);
                        else
                          m_29 = n_29;
                      }
                      t = not_null(m_29);
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
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FInt_2(t, Font_Param_0, is_string_0);
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm s_51 (ATerm))
{
  ATerm y_29 = NULL,z_29 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym_F_1))
    {
      z_29 = ATgetArgument(y_29, 0);
      {
        ATerm c_30 = NULL,e_30 = NULL;
        ATerm d_30 = NULL;
        t = SSLgetAnnotations(not_null(y_29));
        {
          d_30 = t;
          if(((c_30 != NULL) && (c_30 != d_30)))
            _fail(d_30);
          else
            c_30 = d_30;
        }
        {
          t = not_null(z_29);
          {
            ATerm g_30 = NULL;
            t = s_51(t);
            {
              e_30 = t;
              {
                ATerm h_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_F_1, not_null(e_30)), not_null(c_30));
                {
                  h_30 = t;
                  if(((g_30 != NULL) && (g_30 != h_30)))
                    _fail(h_30);
                  else
                    g_30 = h_30;
                }
                t = not_null(g_30);
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
  ATerm l_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        t = list_1(t, F_Option_0);
        return(t);
      }
      t = F_1(t, f_0);
      LocalPopChoice(m_5);
    }
  else
    {
      t = l_5;
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = KW_0(t);
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
                  t = VAR_0(t);
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
                        t = NUM_0(t);
                        LocalPopChoice(s_5);
                      }
                    else
                      {
                        t = r_5;
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
ATerm FBOX_2 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm))
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym_FBOX_2))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      {
        ATerm y_30 = NULL,a_31 = NULL;
        ATerm z_30 = NULL;
        t = SSLgetAnnotations(not_null(s_30));
        {
          z_30 = t;
          if(((y_30 != NULL) && (y_30 != z_30)))
            _fail(z_30);
          else
            y_30 = z_30;
        }
        {
          t = not_null(t_30);
          {
            ATerm c_31 = NULL;
            t = q_51(t);
            {
              a_31 = t;
              {
                t = not_null(u_30);
                {
                  ATerm e_31 = NULL;
                  t = r_51(t);
                  {
                    c_31 = t;
                    {
                      ATerm f_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, not_null(a_31), not_null(c_31)), not_null(y_30));
                      {
                        f_31 = t;
                        if(((e_31 != NULL) && (e_31 != f_31)))
                          _fail(f_31);
                        else
                          e_31 = f_31;
                      }
                      t = not_null(e_31);
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
ATerm ALT_2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym_ALT_2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      {
        ATerm x_31 = NULL,z_31 = NULL;
        ATerm y_31 = NULL;
        t = SSLgetAnnotations(not_null(r_31));
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
        {
          t = not_null(s_31);
          {
            ATerm b_32 = NULL;
            t = c_51(t);
            {
              z_31 = t;
              {
                t = not_null(t_31);
                {
                  ATerm d_32 = NULL;
                  t = d_51(t);
                  {
                    b_32 = t;
                    {
                      ATerm e_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, not_null(z_31), not_null(b_32)), not_null(x_31));
                      {
                        e_32 = t;
                        if(((d_32 != NULL) && (d_32 != e_32)))
                          _fail(e_32);
                        else
                          d_32 = e_32;
                      }
                      t = not_null(d_32);
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
ATerm HV_2 (ATerm t, ATerm a_51 (ATerm), ATerm b_51 (ATerm))
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym_HV_2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      {
        ATerm w_32 = NULL,y_32 = NULL;
        ATerm x_32 = NULL;
        t = SSLgetAnnotations(not_null(q_32));
        {
          x_32 = t;
          if(((w_32 != NULL) && (w_32 != x_32)))
            _fail(x_32);
          else
            w_32 = x_32;
        }
        {
          t = not_null(r_32);
          {
            ATerm a_33 = NULL;
            t = a_51(t);
            {
              y_32 = t;
              {
                t = not_null(s_32);
                {
                  ATerm c_33 = NULL;
                  t = b_51(t);
                  {
                    a_33 = t;
                    {
                      ATerm d_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, not_null(y_32), not_null(a_33)), not_null(w_32));
                      {
                        d_33 = t;
                        if(((c_33 != NULL) && (c_33 != d_33)))
                          _fail(d_33);
                        else
                          c_33 = d_33;
                      }
                      t = not_null(c_33);
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
ATerm V_2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym_V_2))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      {
        ATerm v_33 = NULL,x_33 = NULL;
        ATerm w_33 = NULL;
        t = SSLgetAnnotations(not_null(p_33));
        {
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
        }
        {
          t = not_null(q_33);
          {
            ATerm c_34 = NULL;
            t = y_50(t);
            {
              x_33 = t;
              {
                t = not_null(r_33);
                {
                  ATerm e_34 = NULL;
                  t = z_50(t);
                  {
                    c_34 = t;
                    {
                      ATerm f_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, not_null(x_33), not_null(c_34)), not_null(v_33));
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
ATerm H_2 (ATerm t, ATerm w_50 (ATerm), ATerm x_50 (ATerm))
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(match_cons(r_34, sym_H_2))
    {
      s_34 = ATgetArgument(r_34, 0);
      t_34 = ATgetArgument(r_34, 1);
      {
        ATerm b_35 = NULL,d_35 = NULL;
        ATerm c_35 = NULL;
        t = SSLgetAnnotations(not_null(r_34));
        {
          c_35 = t;
          if(((b_35 != NULL) && (b_35 != c_35)))
            _fail(c_35);
          else
            b_35 = c_35;
        }
        {
          t = not_null(s_34);
          {
            ATerm f_35 = NULL;
            t = w_50(t);
            {
              d_35 = t;
              {
                t = not_null(t_34);
                {
                  ATerm h_35 = NULL;
                  t = x_50(t);
                  {
                    f_35 = t;
                    {
                      ATerm i_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(d_35), not_null(f_35)), not_null(b_35));
                      {
                        i_35 = t;
                        if(((h_35 != NULL) && (h_35 != i_35)))
                          _fail(i_35);
                        else
                          h_35 = i_35;
                      }
                      t = not_null(h_35);
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
ATerm S_1 (ATerm t, ATerm v_50 (ATerm))
{
  ATerm t_35 = NULL,u_35 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym_S_1))
    {
      u_35 = ATgetArgument(t_35, 0);
      {
        ATerm x_35 = NULL,b_36 = NULL;
        ATerm y_35 = NULL;
        t = SSLgetAnnotations(not_null(t_35));
        {
          y_35 = t;
          if(((x_35 != NULL) && (x_35 != y_35)))
            _fail(y_35);
          else
            x_35 = y_35;
        }
        {
          t = not_null(u_35);
          {
            ATerm d_36 = NULL;
            t = v_50(t);
            {
              b_36 = t;
              {
                ATerm e_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(b_36)), not_null(x_35));
                {
                  e_36 = t;
                  if(((d_36 != NULL) && (d_36 != e_36)))
                    _fail(e_36);
                  else
                    d_36 = e_36;
                }
                t = not_null(d_36);
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
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1(t, is_string_0);
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
                              t = ALT_2(t, Box_0, Box_0);
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
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
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
                                                      t = LBL_2(t, is_string_0, Box_0);
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
                                                            t = REF_2(t, is_string_0, Box_0);
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
                                                                        t = L_2(t, Box_0, Box_0);
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
                                                                              t = LINT_2(t, is_int_0, Box_0);
                                                                              LocalPopChoice(w_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_6;
                                                                              {
                                                                                ATerm x_6 = t;
                                                                                int y_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Arg_1(t, is_int_0);
                                                                                    LocalPopChoice(y_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_6;
                                                                                    {
                                                                                      ATerm z_6 = t;
                                                                                      int a_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Arg2_2(t, is_int_0, is_int_0);
                                                                                          LocalPopChoice(a_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_6;
                                                                                          {
                                                                                            ATerm b_7 = t;
                                                                                            int c_7 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Nil_0(t);
                                                                                                LocalPopChoice(c_7);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_7;
                                                                                                {
                                                                                                  ATerm z_0 (ATerm t)
                                                                                                  {
                                                                                                    t = term_d_7;
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
ATerm _2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_cons(r_36, sym__2))
    {
      s_36 = ATgetArgument(r_36, 0);
      t_36 = ATgetArgument(r_36, 1);
      {
        ATerm a_37 = NULL,c_37 = NULL;
        ATerm b_37 = NULL;
        t = SSLgetAnnotations(not_null(r_36));
        {
          b_37 = t;
          if(((a_37 != NULL) && (a_37 != b_37)))
            _fail(b_37);
          else
            a_37 = b_37;
        }
        {
          t = not_null(s_36);
          {
            ATerm e_37 = NULL;
            t = k_49(t);
            {
              c_37 = t;
              {
                t = not_null(t_36);
                {
                  ATerm g_37 = NULL;
                  t = l_49(t);
                  {
                    e_37 = t;
                    {
                      ATerm h_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_37), not_null(e_37)), not_null(a_37));
                      {
                        h_37 = t;
                        if(((g_37 != NULL) && (g_37 != h_37)))
                          _fail(h_37);
                        else
                          g_37 = h_37;
                      }
                      t = not_null(g_37);
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
  ATerm p_37 = NULL;
  ATerm e_7;
  e_7 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm q_37 = NULL,r_37 = NULL;
      q_37 = t;
      o_37 :
      if(match_cons(q_37, sym_Program_1))
        {
          r_37 = ATgetArgument(q_37, 0);
          if(((p_37 != NULL) && (p_37 != r_37)))
            _fail(r_37);
          else
            p_37 = r_37;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_7), not_null(p_37)), term_g_7));
      {
        t = printnl_0(t);
        {
          t = term_i_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  u_37 :
  if(match_cons(v_37, sym__2))
    {
      w_37 = ATgetArgument(v_37, 0);
      x_37 = ATgetArgument(v_37, 1);
      {
        ATerm j_7;
        j_7 = t;
        t = SSL_printnl(not_null(w_37), not_null(x_37));
        t = j_7;
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
  ATerm c_38 = NULL;
  c_38 = t;
  t = SSL_implode_string(not_null(c_38));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
        o_38 = t;
        n_38 :
        if(((ATgetType(o_38) == AT_LIST) && !(ATisEmpty(o_38))))
          {
            p_38 = ATgetFirst((ATermList) o_38);
            q_38 = (ATerm) ATgetNext((ATermList) o_38);
            {
              t = not_null(p_38);
              {
                ATerm b_1 (ATerm t)
                {
                  t = not_null(q_38);
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
  ATerm b_39 = NULL;
  ATerm d_39 = NULL;
  b_39 = t;
  {
    ATerm e_39 = NULL;
    ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
    t = not_null(b_39);
    {
      e_39 = t;
      {
        t = SSL_explode_term(not_null(e_39));
        {
          g_39 = t;
          z_38 :
          if(match_cons(g_39, sym__2))
            {
              h_39 = ATgetArgument(g_39, 0);
              i_39 = ATgetArgument(g_39, 1);
              a_39 :
              if(match_string(h_39, ""))
                {
                  if(((d_39 != NULL) && (d_39 != i_39)))
                    _fail(i_39);
                  else
                    d_39 = i_39;
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
      t = not_null(d_39);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm m_39 (ATerm t)
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_39);
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        {
          t = Nil_0(t);
          t = q_65(t);
        }
      }
    return(t);
  }
  t = m_39(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  p_39 = t;
  o_39 :
  if(match_cons(p_39, sym__2))
    {
      q_39 = ATgetArgument(p_39, 0);
      r_39 = ATgetArgument(p_39, 1);
      {
        t = not_null(q_39);
        {
          ATerm c_1 (ATerm t)
          {
            t = not_null(r_39);
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
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  t = SSL_explode_string(not_null(w_39));
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
  ATerm a_40 = NULL;
  a_40 = t;
  t = SSL_is_string(not_null(a_40));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_1);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
              j_40 = t;
              i_40 :
              if(match_cons(j_40, sym_Path_1))
                {
                  k_40 = ATgetArgument(j_40, 0);
                  t = not_null(k_40);
                }
              else
                {
                  if(match_cons(j_40, sym_Var_1))
                    {
                      k_40 = ATgetArgument(j_40, 0);
                      {
                        t = not_null(k_40);
                        {
                          ATerm u_7 = t;
                          int v_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_7);
                            }
                          else
                            {
                              t = u_7;
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  t = term_w_7;
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
                      if(match_cons(j_40, sym_Prefix_2))
                        {
                          k_40 = ATgetArgument(j_40, 0);
                          l_40 = ATgetArgument(j_40, 1);
                          {
                            ATerm q_40 = NULL,s_40 = NULL;
                            ATerm x_7;
                            x_7 = t;
                            {
                              ATerm r_40 = NULL;
                              t = not_null(k_40);
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
                            }
                            t = x_7;
                            {
                              ATerm t_40 = NULL;
                              t = not_null(l_40);
                              {
                                t = eval_config_0(t);
                                {
                                  t_40 = t;
                                  if(((s_40 != NULL) && (s_40 != t_40)))
                                    _fail(t_40);
                                  else
                                    s_40 = t_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_40), not_null(s_40));
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
  ATerm b_41 = NULL;
  b_41 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(b_41));
    {
      t = table_get_0(t);
      {
        ATerm f_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_7;
            z_7 = t;
            {
              ATerm d_41 = NULL;
              ATerm e_41 = NULL;
              e_41 = t;
              if(((d_41 != NULL) && (d_41 != e_41)))
                _fail(e_41);
              else
                d_41 = e_41;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_7, not_null(b_41), not_null(d_41));
                t = table_put_0(t);
              }
            }
            t = z_7;
          }
          return(t);
        }
        t = try_1(t, f_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    ATerm a_8;
    a_8 = t;
    {
      ATerm i_41 = NULL;
      ATerm j_41 = NULL;
      t = term_b_8;
      {
        t = get_config_0(t);
        {
          j_41 = t;
          if(((i_41 != NULL) && (i_41 != j_41)))
            _fail(j_41);
          else
            i_41 = j_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_41), term_c_8);
        t = geq_0(t);
      }
    }
    t = a_8;
    t = n_75(t);
    return(t);
  }
  t = try_1(t, g_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,q_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym__2))
    {
      o_41 = ATgetArgument(n_41, 0);
      q_41 = ATgetArgument(n_41, 1);
      t = SSL_WriteToTextFile(not_null(o_41), not_null(q_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym__2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
      t = SSL_WriteToBinaryFile(not_null(x_41), not_null(y_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_42 = NULL;
  ATerm d_8;
  d_8 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_1 (ATerm t)
          {
            ATerm h_42 = NULL,i_42 = NULL;
            h_42 = t;
            d_42 :
            if(match_cons(h_42, sym_Output_1))
              {
                i_42 = ATgetArgument(h_42, 0);
                if(((g_42 != NULL) && (g_42 != i_42)))
                  _fail(i_42);
                else
                  g_42 = i_42;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_1);
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          {
            ATerm j_42 = NULL;
            t = term_g_8;
            {
              j_42 = t;
              if(((g_42 != NULL) && (g_42 != j_42)))
                _fail(j_42);
              else
                g_42 = j_42;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_1, _id);
  }
  t = d_8;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = not_null(g_42);
        return(t);
      }
      t = split_2(t, l_1, _id);
      return(t);
    }
    t = _2(t, _id, k_1);
    {
      ATerm h_8 = t;
      int i_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm n_1 (ATerm t)
            {
              ATerm k_42 = NULL;
              k_42 = t;
              f_42 :
              if(!(match_cons(k_42, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, n_1);
            return(t);
          }
          t = _2(t, m_1, WriteToBinaryFile_0);
          LocalPopChoice(i_8);
        }
      else
        {
          t = h_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm q_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  ATerm j_8;
  j_8 = t;
  t = dtime_0(t);
  t = j_8;
  {
    t = e_77(t);
    {
      ATerm k_8;
      k_8 = t;
      {
        ATerm t_42 = NULL;
        t = dtime_0(t);
        {
          t_42 = t;
          if(((q_42 != NULL) && (q_42 != t_42)))
            _fail(t_42);
          else
            q_42 = t_42;
        }
      }
      t = k_8;
      {
        u_42 = t;
        p_42 :
        if(match_cons(u_42, sym__2))
          {
            v_42 = ATgetArgument(u_42, 0);
            w_42 = ATgetArgument(u_42, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_42)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_42))), not_null(w_42));
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
ATerm debug_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm l_8;
  l_8 = t;
  {
    ATerm i_43 = NULL,k_43 = NULL;
    ATerm m_8;
    m_8 = t;
    {
      ATerm j_43 = NULL;
      t = f_64(t);
      {
        j_43 = t;
        if(((i_43 != NULL) && (i_43 != j_43)))
          _fail(j_43);
        else
          i_43 = j_43;
      }
    }
    t = m_8;
    {
      ATerm l_43 = NULL;
      l_43 = t;
      if(((k_43 != NULL) && (k_43 != l_43)))
        _fail(l_43);
      else
        k_43 = l_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_43)), not_null(i_43)));
        t = printnl_0(t);
      }
    }
  }
  t = l_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_43 = NULL;
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_43 = NULL;
      q_43 = t;
      {
        if(((p_43 != NULL) && (p_43 != q_43)))
          _fail(q_43);
        else
          p_43 = q_43;
        t = SSL_ReadFromFile(not_null(p_43));
      }
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm o_1 (ATerm t)
        {
          t = term_p_8;
          return(t);
        }
        t = debug_1(t, o_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm b_44 = NULL,i_44 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm c_44 = NULL;
    t = a_58(t);
    {
      c_44 = t;
      if(((b_44 != NULL) && (b_44 != c_44)))
        _fail(c_44);
      else
        b_44 = c_44;
    }
  }
  t = q_8;
  {
    ATerm j_44 = NULL;
    t = b_58(t);
    {
      j_44 = t;
      if(((i_44 != NULL) && (i_44 != j_44)))
        _fail(j_44);
      else
        i_44 = j_44;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_44), not_null(i_44));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_44 = NULL;
  ATerm r_8;
  r_8 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 (ATerm t)
        {
          ATerm u_44 = NULL,v_44 = NULL;
          u_44 = t;
          n_44 :
          if(match_cons(u_44, sym_Input_1))
            {
              v_44 = ATgetArgument(u_44, 0);
              if(((p_44 != NULL) && (p_44 != v_44)))
                _fail(v_44);
              else
                p_44 = v_44;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, p_1);
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          ATerm w_44 = NULL;
          t = term_u_8;
          {
            w_44 = t;
            if(((p_44 != NULL) && (p_44 != w_44)))
              _fail(w_44);
            else
              p_44 = w_44;
          }
        }
      }
  }
  t = r_8;
  {
    ATerm q_1 (ATerm t)
    {
      t = not_null(p_44);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm a_45 = NULL;
    a_45 = t;
    z_44 :
    if(!(match_string(a_45, "-v")))
      {
        if(!(match_string(a_45, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_x_8;
    t = set_config_0(t);
    t = term_y_8;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_z_8;
    return(t);
  }
  t = Option_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm d_45 = NULL;
    d_45 = t;
    b_45 :
    if(!(match_string(d_45, "-k")))
      {
        if(!(match_string(d_45, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm a_9;
    a_9 = t;
    {
      ATerm e_45 = NULL;
      ATerm f_45 = NULL;
      t = string_to_int_0(t);
      {
        f_45 = t;
        if(((e_45 != NULL) && (e_45 != f_45)))
          _fail(f_45);
        else
          e_45 = f_45;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(e_45));
        t = set_config_0(t);
      }
    }
    t = a_9;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  t = ArgOption_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_45 = NULL;
  i_45 = t;
  t = SSL_string_to_int(not_null(i_45));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm q_45 = NULL;
        q_45 = t;
        l_45 :
        if(!(match_string(q_45, "-S")))
          {
            if(!(match_string(q_45, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_i_9;
        t = set_config_0(t);
        t = term_j_9;
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_k_9;
        return(t);
      }
      t = Option_3(t, x_1, y_1, z_1);
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm r_45 = NULL;
              r_45 = t;
              m_45 :
              if(!(match_string(r_45, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm u_45 = NULL;
              ATerm n_9;
              n_9 = t;
              {
                ATerm s_45 = NULL;
                ATerm t_45 = NULL;
                t = string_to_int_0(t);
                {
                  t_45 = t;
                  if(((s_45 != NULL) && (s_45 != t_45)))
                    _fail(t_45);
                  else
                    s_45 = t_45;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(s_45));
                  t = set_config_0(t);
                }
              }
              t = n_9;
              {
                ATerm v_45 = NULL;
                v_45 = t;
                if(((u_45 != NULL) && (u_45 != v_45)))
                  _fail(v_45);
                else
                  u_45 = v_45;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_45));
              }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_o_9;
              return(t);
            }
            t = ArgOption_3(t, a_2, b_2, c_2);
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm d_2 (ATerm t)
              {
                ATerm w_45 = NULL;
                w_45 = t;
                p_45 :
                if(!(match_string(w_45, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_2 (ATerm t)
              {
                t = term_q_9;
                t = set_config_0(t);
                t = term_r_9;
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = term_s_9;
                return(t);
              }
              t = Option_3(t, d_2, e_2, f_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm c_46 = NULL;
    c_46 = t;
    z_45 :
    if(!(match_string(c_46, "-o")))
      {
        if(!(match_string(c_46, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm f_46 = NULL;
    ATerm z_9;
    z_9 = t;
    {
      ATerm d_46 = NULL;
      ATerm e_46 = NULL;
      e_46 = t;
      if(((d_46 != NULL) && (d_46 != e_46)))
        _fail(e_46);
      else
        d_46 = e_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(d_46));
        t = set_config_0(t);
      }
    }
    t = z_9;
    {
      ATerm g_46 = NULL;
      g_46 = t;
      if(((f_46 != NULL) && (f_46 != g_46)))
        _fail(g_46);
      else
        f_46 = g_46;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_46));
    }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_b_10;
    return(t);
  }
  t = ArgOption_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_46 = NULL;
          k_46 = t;
          j_46 :
          if(!(match_string(k_46, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          t = term_f_10;
          t = set_config_0(t);
          t = term_g_10;
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          t = term_h_10;
          return(t);
        }
        t = Option_3(t, j_2, k_2, l_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  q_46 = t;
  o_46 :
  if(match_string(q_46, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_46) == AT_LIST) && !(ATisEmpty(q_46))))
        {
          r_46 = ATgetFirst((ATermList) q_46);
          s_46 = (ATerm) ATgetNext((ATermList) q_46);
          p_46 :
          if(((ATgetType(s_46) == AT_LIST) && !(ATisEmpty(s_46))))
            {
              t_46 = ATgetFirst((ATermList) s_46);
              u_46 = (ATerm) ATgetNext((ATermList) s_46);
              {
                ATerm y_46 = NULL;
                ATerm i_10;
                i_10 = t;
                {
                  t = not_null(r_46);
                  t = j_0(t);
                }
                t = i_10;
                {
                  ATerm z_46 = NULL;
                  t = not_null(t_46);
                  {
                    t = k_0(t);
                    {
                      z_46 = t;
                      if(((y_46 != NULL) && (y_46 != z_46)))
                        _fail(z_46);
                      else
                        y_46 = z_46;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_46)), not_null(y_46));
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
  ATerm m_2 (ATerm t)
  {
    ATerm g_47 = NULL;
    g_47 = t;
    d_47 :
    if(!(match_string(g_47, "-i")))
      {
        if(!(match_string(g_47, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm j_47 = NULL;
    ATerm j_10;
    j_10 = t;
    {
      ATerm h_47 = NULL;
      ATerm i_47 = NULL;
      i_47 = t;
      if(((h_47 != NULL) && (h_47 != i_47)))
        _fail(i_47);
      else
        h_47 = i_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(h_47));
        t = set_config_0(t);
      }
    }
    t = j_10;
    {
      ATerm k_47 = NULL;
      k_47 = t;
      if(((j_47 != NULL) && (j_47 != k_47)))
        _fail(k_47);
      else
        j_47 = k_47;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_47));
    }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_l_10;
    return(t);
  }
  t = ArgOption_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_q_10));
  {
    t = printnl_0(t);
    {
      t = term_i_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_47 = NULL;
  o_47 = t;
  t = SSL_TicksToSeconds(not_null(o_47));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym__2))
    {
      u_47 = ATgetArgument(t_47, 0);
      v_47 = ATgetArgument(t_47, 1);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_47), not_null(v_47));
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = SSL_addr(not_null(u_47), not_null(v_47));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_69 (ATerm), ATerm z_69 (ATerm))
{
  ATerm x_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_69(t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = x_10;
      {
        ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
        c_48 = t;
        b_48 :
        if(((ATgetType(c_48) == AT_LIST) && !(ATisEmpty(c_48))))
          {
            d_48 = ATgetFirst((ATermList) c_48);
            e_48 = (ATerm) ATgetNext((ATermList) c_48);
            {
              ATerm h_48 = NULL;
              ATerm i_48 = NULL;
              t = not_null(e_48);
              {
                t = foldr_2(t, y_69, z_69);
                {
                  i_48 = t;
                  if(((h_48 != NULL) && (h_48 != i_48)))
                    _fail(i_48);
                  else
                    h_48 = i_48;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_48), not_null(h_48));
                t = z_69(t);
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
ATerm crush_2 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm p_48 = NULL;
  ATerm r_48 = NULL;
  p_48 = t;
  {
    ATerm s_48 = NULL;
    ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
    t = not_null(p_48);
    {
      s_48 = t;
      {
        t = SSL_explode_term(not_null(s_48));
        {
          u_48 = t;
          o_48 :
          if(match_cons(u_48, sym__2))
            {
              v_48 = ATgetArgument(u_48, 0);
              w_48 = ATgetArgument(u_48, 1);
              if(((r_48 != NULL) && (r_48 != w_48)))
                _fail(w_48);
              else
                r_48 = w_48;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_48);
      t = foldr_2(t, w_68, x_68);
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
    ATerm p_2 (ATerm t)
    {
      t = term_h_9;
      return(t);
    }
    t = crush_2(t, p_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  b_49 :
  if(match_cons(c_49, sym__2))
    {
      d_49 = ATgetArgument(c_49, 0);
      e_49 = ATgetArgument(c_49, 1);
      {
        ATerm d_11;
        d_11 = t;
        {
          ATerm g_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_49), not_null(e_49));
              LocalPopChoice(h_11);
            }
          else
            {
              t = g_11;
              t = SSL_gtr(not_null(d_49), not_null(e_49));
            }
        }
        t = d_11;
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
  ATerm m_49 = NULL;
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
      n_49 = t;
      j_49 :
      if(match_cons(n_49, sym__2))
        {
          o_49 = ATgetArgument(n_49, 0);
          p_49 = ATgetArgument(n_49, 1);
          {
            if(((m_49 != NULL) && (m_49 != o_49)))
              _fail(o_49);
            else
              m_49 = o_49;
            if(((m_49 != NULL) && (m_49 != p_49)))
              _fail(p_49);
            else
              m_49 = p_49;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm k_11;
    k_11 = t;
    {
      ATerm s_49 = NULL;
      ATerm t_49 = NULL;
      t = term_b_8;
      {
        t = get_config_0(t);
        {
          t_49 = t;
          if(((s_49 != NULL) && (s_49 != t_49)))
            _fail(t_49);
          else
            s_49 = t_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_49), term_i_7);
        t = geq_0(t);
      }
    }
    t = k_11;
    t = m_75(t);
    return(t);
  }
  t = try_1(t, q_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm x_49 = NULL,z_49 = NULL;
    ATerm l_11;
    l_11 = t;
    {
      ATerm y_49 = NULL;
      t = run_time_0(t);
      {
        y_49 = t;
        if(((x_49 != NULL) && (x_49 != y_49)))
          _fail(y_49);
        else
          x_49 = y_49;
      }
    }
    t = l_11;
    {
      ATerm a_50 = NULL;
      t = term_m_11;
      {
        t = get_config_0(t);
        {
          a_50 = t;
          if(((z_49 != NULL) && (z_49 != a_50)))
            _fail(a_50);
          else
            z_49 = a_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), not_null(x_49)), term_n_11), not_null(z_49)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_2);
  {
    t = term_h_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_50 = NULL;
  h_50 = t;
  g_50 :
  if(match_cons(h_50, sym_Version_0))
    {
      ATerm j_50 = NULL,l_50 = NULL;
      ATerm p_11;
      p_11 = t;
      {
        ATerm k_50 = NULL;
        t = SSLgetAnnotations(not_null(h_50));
        {
          k_50 = t;
          if(((j_50 != NULL) && (j_50 != k_50)))
            _fail(k_50);
          else
            j_50 = k_50;
        }
      }
      t = p_11;
      {
        ATerm m_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_50));
        {
          m_50 = t;
          if(((l_50 != NULL) && (l_50 != m_50)))
            _fail(m_50);
          else
            l_50 = m_50;
        }
        t = not_null(l_50);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        {
          ATerm w_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(a_12);
            }
          else
            {
              t = w_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_2);
  t = c_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  t = SSL_table_create(not_null(r_50));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_52 = NULL;
  k_52 = t;
  {
    ATerm c_12;
    c_12 = t;
    {
      t = term_f_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_g_12, not_null(k_52));
          t = table_put_0(t);
        }
      }
    }
    t = c_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  t = SSL_table_destroy(not_null(o_52));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_52 = NULL;
  s_52 = t;
  t = SSL_exit(not_null(s_52));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(((ATgetType(w_52) == AT_LIST) && ATisEmpty(w_52)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_52) == AT_LIST) && !(ATisEmpty(w_52))))
        {
          x_52 = ATgetFirst((ATermList) w_52);
          y_52 = (ATerm) ATgetNext((ATermList) w_52);
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
  ATerm h_12;
  h_12 = t;
  {
    ATerm b_53 = NULL;
    ATerm e_53 = NULL;
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        {
          ATerm c_53 = NULL;
          ATerm d_53 = NULL;
          d_53 = t;
          if(((c_53 != NULL) && (c_53 != d_53)))
            _fail(d_53);
          else
            c_53 = d_53;
          t = (ATerm) ATinsert(ATempty, not_null(c_53));
        }
      }
    {
      e_53 = t;
      if(((b_53 != NULL) && (b_53 != e_53)))
        _fail(e_53);
      else
        b_53 = e_53;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(b_53));
      t = printnl_0(t);
    }
  }
  t = h_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm h_53 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = Cons_2(t, b_65, h_53);
      }
    return(t);
  }
  t = h_53(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
  q_53 = t;
  n_53 :
  if(((ATgetType(q_53) == AT_LIST) && !(ATisEmpty(q_53))))
    {
      o_53 = ATgetFirst((ATermList) q_53);
      p_53 = (ATerm) ATgetNext((ATermList) q_53);
      {
        ATerm t_53 = NULL;
        t = not_null(p_53);
        {
          ATerm n_12;
          n_12 = t;
          {
            ATerm u_53 = NULL,w_53 = NULL,y_53 = NULL;
            ATerm q_12;
            q_12 = t;
            {
              ATerm v_53 = NULL;
              t = i_0(t);
              {
                v_53 = t;
                if(((u_53 != NULL) && (u_53 != v_53)))
                  _fail(v_53);
                else
                  u_53 = v_53;
              }
            }
            t = q_12;
            {
              ATerm x_53 = NULL;
              t = not_null(o_53);
              {
                t = h_0(t);
                {
                  x_53 = t;
                  if(((w_53 != NULL) && (w_53 != x_53)))
                    _fail(x_53);
                  else
                    w_53 = x_53;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_53)), not_null(w_53));
                {
                  y_53 = t;
                  if(((t_53 != NULL) && (t_53 != y_53)))
                    _fail(y_53);
                  else
                    t_53 = y_53;
                }
              }
            }
          }
          t = n_12;
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(t_53);
              return(t);
            }
            t = reverse_acc_2(t, h_0, t_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_53) == AT_LIST) && ATisEmpty(q_53)))
        {
          {
            t = term_w_8;
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
  ATerm u_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm j_54 = NULL,k_54 = NULL;
  j_54 = t;
  i_54 :
  if(match_cons(j_54, sym_Program_1))
    {
      k_54 = ATgetArgument(j_54, 0);
      {
        ATerm n_54 = NULL,p_54 = NULL;
        ATerm o_54 = NULL;
        t = SSLgetAnnotations(not_null(j_54));
        {
          o_54 = t;
          if(((n_54 != NULL) && (n_54 != o_54)))
            _fail(o_54);
          else
            n_54 = o_54;
        }
        {
          t = not_null(k_54);
          {
            ATerm r_54 = NULL;
            t = q_57(t);
            {
              p_54 = t;
              {
                ATerm s_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_54)), not_null(n_54));
                {
                  s_54 = t;
                  if(((r_54 != NULL) && (r_54 != s_54)))
                    _fail(s_54);
                  else
                    r_54 = s_54;
                }
                t = not_null(r_54);
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
  ATerm b_55 = NULL;
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_55 = NULL;
      t = term_m_11;
      {
        t = get_config_0(t);
        {
          c_55 = t;
          if(((b_55 != NULL) && (b_55 != c_55)))
            _fail(c_55);
          else
            b_55 = c_55;
        }
      }
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm v_2 (ATerm t)
        {
          ATerm w_2 (ATerm t)
          {
            ATerm d_55 = NULL;
            d_55 = t;
            if(((b_55 != NULL) && (b_55 != d_55)))
              _fail(d_55);
            else
              b_55 = d_55;
            return(t);
          }
          t = Program_1(t, w_2);
          return(t);
        }
        t = option_defined_1(t, v_2);
      }
    }
  {
    ATerm x_2 (ATerm t)
    {
      ATerm y_2 (ATerm t)
      {
        t = not_null(b_55);
        return(t);
      }
      t = short_description_1(t, y_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_2);
    {
      t = term_x_12;
      {
        t = echo_0(t);
        {
          t = term_a_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm e_55 = NULL;
                  ATerm f_55 = NULL;
                  f_55 = t;
                  if(((e_55 != NULL) && (e_55 != f_55)))
                    _fail(f_55);
                  else
                    e_55 = f_55;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_55)), term_d_13);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_2);
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm g_55 = NULL;
                    ATerm h_55 = NULL;
                    ATerm b_3 (ATerm t)
                    {
                      t = not_null(b_55);
                      return(t);
                    }
                    t = long_description_1(t, b_3);
                    {
                      h_55 = t;
                      if(((g_55 != NULL) && (g_55 != h_55)))
                        _fail(h_55);
                      else
                        g_55 = h_55;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(g_55)), term_i_13);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_3);
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
  ATerm j_13;
  j_13 = t;
  {
    ATerm n_55 = NULL;
    ATerm o_55 = NULL;
    o_55 = t;
    if(((n_55 != NULL) && (n_55 != o_55)))
      _fail(o_55);
    else
      n_55 = o_55;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(n_55)));
      t = printnl_0(t);
    }
  }
  t = j_13;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm k_13;
  k_13 = t;
  {
    t = g_64(t);
    t = debug_0(t);
  }
  t = k_13;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm v_55 = NULL,w_55 = NULL;
  v_55 = t;
  u_55 :
  if(match_cons(v_55, sym_Undefined_1))
    {
      w_55 = ATgetArgument(v_55, 0);
      {
        ATerm z_55 = NULL,b_56 = NULL;
        ATerm a_56 = NULL;
        t = SSLgetAnnotations(not_null(v_55));
        {
          a_56 = t;
          if(((z_55 != NULL) && (z_55 != a_56)))
            _fail(a_56);
          else
            z_55 = a_56;
        }
        {
          t = not_null(w_55);
          {
            ATerm d_56 = NULL;
            t = r_57(t);
            {
              b_56 = t;
              {
                ATerm e_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_56)), not_null(z_55));
                {
                  e_56 = t;
                  if(((d_56 != NULL) && (d_56 != e_56)))
                    _fail(e_56);
                  else
                    d_56 = e_56;
                }
                t = not_null(d_56);
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
ATerm fetch_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm j_56 (ATerm t)
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_65, _id);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = Cons_2(t, _id, j_56);
      }
    return(t);
  }
  t = j_56(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_78 (ATerm))
{
  t = fetch_1(t, j_78);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_56 = NULL;
  o_56 = t;
  n_56 :
  if(match_cons(o_56, sym_Help_0))
    {
      ATerm q_56 = NULL,s_56 = NULL;
      ATerm n_13;
      n_13 = t;
      {
        ATerm r_56 = NULL;
        t = SSLgetAnnotations(not_null(o_56));
        {
          r_56 = t;
          if(((q_56 != NULL) && (q_56 != r_56)))
            _fail(r_56);
          else
            q_56 = r_56;
        }
      }
      t = n_13;
      {
        ATerm t_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_56));
        {
          t_56 = t;
          if(((s_56 != NULL) && (s_56 != t_56)))
            _fail(t_56);
          else
            s_56 = t_56;
        }
        t = not_null(s_56);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm q_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_62(t);
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
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  y_56 :
  if(match_cons(z_56, sym__2))
    {
      a_57 = ATgetArgument(z_56, 0);
      b_57 = ATgetArgument(z_56, 1);
      t = SSL_table_get(not_null(a_57), not_null(b_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  i_57 = t;
  h_57 :
  if(match_cons(i_57, sym__3))
    {
      j_57 = ATgetArgument(i_57, 0);
      k_57 = ATgetArgument(i_57, 1);
      l_57 = ATgetArgument(i_57, 2);
      {
        ATerm w_13;
        w_13 = t;
        {
          ATerm p_57 = NULL;
          ATerm s_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_57), not_null(k_57));
          {
            ATerm x_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_13);
              }
            else
              {
                t = x_13;
                t = (ATerm) ATempty;
              }
            {
              s_57 = t;
              if(((p_57 != NULL) && (p_57 != s_57)))
                _fail(s_57);
              else
                p_57 = s_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_57), not_null(k_57), (ATerm) ATinsert(CheckATermList(not_null(p_57)), not_null(l_57)));
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
ATerm register_usage_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm w_57 = NULL;
  ATerm x_57 = NULL;
  t = term_w_8;
  {
    t = o_79(t);
    {
      x_57 = t;
      if(((w_57 != NULL) && (w_57 != x_57)))
        _fail(x_57);
      else
        w_57 = x_57;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_12, term_z_12, not_null(w_57));
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
            ATerm z_13;
            z_13 = t;
            {
              t = not_null(h_58);
              t = a_0(t);
            }
            t = z_13;
            {
              ATerm m_58 = NULL;
              t = term_w_8;
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
  ATerm c_3 (ATerm t)
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
  ATerm d_3 (ATerm t)
  {
    t = term_b_14;
    {
      t = set_config_0(t);
      t = term_c_14;
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_h_14;
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
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
ATerm Cons_2 (ATerm t, ATerm t_50 (ATerm), ATerm u_50 (ATerm))
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
  g_59 = t;
  f_59 :
  if(((ATgetType(g_59) == AT_LIST) && !(ATisEmpty(g_59))))
    {
      h_59 = ATgetFirst((ATermList) g_59);
      i_59 = (ATerm) ATgetNext((ATermList) g_59);
      {
        ATerm m_59 = NULL,o_59 = NULL;
        ATerm n_59 = NULL;
        t = SSLgetAnnotations(not_null(g_59));
        {
          n_59 = t;
          if(((m_59 != NULL) && (m_59 != n_59)))
            _fail(n_59);
          else
            m_59 = n_59;
        }
        {
          t = not_null(h_59);
          {
            ATerm q_59 = NULL;
            t = t_50(t);
            {
              o_59 = t;
              {
                t = not_null(i_59);
                {
                  ATerm s_59 = NULL;
                  t = u_50(t);
                  {
                    q_59 = t;
                    {
                      ATerm t_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_59)), not_null(o_59)), not_null(m_59));
                      {
                        t_59 = t;
                        if(((s_59 != NULL) && (s_59 != t_59)))
                          _fail(t_59);
                        else
                          s_59 = t_59;
                      }
                      t = not_null(s_59);
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
  ATerm d_60 = NULL;
  d_60 = t;
  c_60 :
  if(((ATgetType(d_60) == AT_LIST) && ATisEmpty(d_60)))
    {
      {
        ATerm f_60 = NULL,h_60 = NULL;
        ATerm i_14;
        i_14 = t;
        {
          ATerm g_60 = NULL;
          t = SSLgetAnnotations(not_null(d_60));
          {
            g_60 = t;
            if(((f_60 != NULL) && (f_60 != g_60)))
              _fail(g_60);
            else
              f_60 = g_60;
          }
        }
        t = i_14;
        {
          ATerm i_60 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_60));
          {
            i_60 = t;
            if(((h_60 != NULL) && (h_60 != i_60)))
              _fail(i_60);
            else
              h_60 = i_60;
          }
          t = not_null(h_60);
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
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
  o_60 = t;
  n_60 :
  if(match_cons(o_60, sym__2))
    {
      p_60 = ATgetArgument(o_60, 0);
      q_60 = ATgetArgument(o_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_7, not_null(p_60), not_null(q_60));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm j_14;
  j_14 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = term_n_14;
      t = m_79(t);
      return(t);
    }
    t = try_1(t, f_3);
  }
  t = j_14;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm y_60 = NULL;
      ATerm p_14;
      p_14 = t;
      {
        ATerm w_60 = NULL;
        ATerm x_60 = NULL;
        x_60 = t;
        if(((w_60 != NULL) && (w_60 != x_60)))
          _fail(x_60);
        else
          w_60 = x_60;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_11, not_null(w_60));
          t = set_config_0(t);
        }
      }
      t = p_14;
      {
        ATerm z_60 = NULL;
        z_60 = t;
        if(((y_60 != NULL) && (y_60 != z_60)))
          _fail(z_60);
        else
          y_60 = z_60;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_60));
      }
      return(t);
    }
    ATerm h_3 (ATerm t)
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              {
                t = m_79(t);
                t = Cons_2(t, _id, h_3);
              }
            }
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_3, h_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
  ATerm w_14;
  w_14 = t;
  {
    ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
    i_61 = t;
    e_61 :
    if(match_cons(i_61, sym__3))
      {
        j_61 = ATgetArgument(i_61, 0);
        k_61 = ATgetArgument(i_61, 1);
        l_61 = ATgetArgument(i_61, 2);
        {
          if(((f_61 != NULL) && (f_61 != j_61)))
            _fail(j_61);
          else
            f_61 = j_61;
          {
            if(((g_61 != NULL) && (g_61 != k_61)))
              _fail(k_61);
            else
              g_61 = k_61;
            {
              if(((h_61 != NULL) && (h_61 != l_61)))
                _fail(l_61);
              else
                h_61 = l_61;
              t = SSL_table_put(not_null(f_61), not_null(g_61), not_null(h_61));
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
ATerm parse_options_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm o_61 = NULL;
  ATerm x_14;
  x_14 = t;
  {
    t = term_y_14;
    t = table_put_0(t);
  }
  t = x_14;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_79(t);
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_3);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm b_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_15;
            h_15 = t;
            {
              ATerm i_15 = t;
              int m_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_a_14;
                  t = get_config_0(t);
                  LocalPopChoice(m_15);
                }
              else
                {
                  t = i_15;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = h_15;
            {
              t = system_usage_0(t);
              {
                t = term_h_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(g_15);
          }
        else
          {
            t = b_15;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm p_61 = NULL;
                  p_61 = t;
                  if(((o_61 != NULL) && (o_61 != p_61)))
                    _fail(p_61);
                  else
                    o_61 = p_61;
                  return(t);
                }
                t = Undefined_1(t, l_3);
                return(t);
              }
              t = option_defined_1(t, k_3);
              {
                ATerm m_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_61)), term_o_15);
                  return(t);
                }
                t = say_1(t, m_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_3);
      {
        ATerm r_15;
        r_15 = t;
        {
          t = term_y_12;
          t = table_destroy_0(t);
        }
        t = r_15;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm))
{
  t = parse_options_1(t, i_77);
  {
    t = store_options_0(t);
    {
      t = k_77(t);
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_77);
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            {
              ATerm u_15 = t;
              int v_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_77(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_15);
                }
              else
                {
                  t = u_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_78(t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_77);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_3, b_78, c_78, o_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      ATerm y_15;
      y_15 = t;
      {
        ATerm s_61 = NULL;
        ATerm t_61 = NULL;
        t = term_m_11;
        {
          t = get_config_0(t);
          {
            t_61 = t;
            if(((s_61 != NULL) && (s_61 != t_61)))
              _fail(t_61);
            else
              s_61 = t_61;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(s_61)));
          t = printnl_0(t);
        }
      }
      t = y_15;
      return(t);
    }
    t = if_verbose2_1(t, q_3);
    return(t);
  }
  t = iowrap_4(t, t_77, u_77, v_77, p_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  t = iowrap_3(t, r_77, s_77, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_77 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    t = _2(t, _id, o_77);
    return(t);
  }
  t = iowrap_2(t, r_3, _fail);
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

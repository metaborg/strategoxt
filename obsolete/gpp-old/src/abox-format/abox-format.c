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
ATerm term_v_15;
ATerm term_b_15;
ATerm term_n_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_t_6;
void init_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_e_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_u_8);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_u_8);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_u_8);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__3, term_a_13, term_b_13, (ATerm) ATempty);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm is_int_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm Arg_1 (ATerm, ATerm d_52 (ATerm));
ATerm LINT_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm L_2 (ATerm, ATerm z_51 (ATerm), ATerm a_52 (ATerm));
ATerm list_1 (ATerm, ATerm y_64 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm a_51 (ATerm), ATerm b_51 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm REF_2 (ATerm, ATerm v_51 (ATerm), ATerm w_51 (ATerm));
ATerm LBL_2 (ATerm, ATerm t_51 (ATerm), ATerm u_51 (ATerm));
ATerm R_2 (ATerm, ATerm h_51 (ATerm), ATerm i_51 (ATerm));
ATerm AR_1 (ATerm, ATerm l_51 (ATerm));
ATerm AC_1 (ATerm, ATerm k_51 (ATerm));
ATerm AL_1 (ATerm, ATerm j_51 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm A_3 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm), ATerm g_51 (ATerm));
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
ATerm FFID_2 (ATerm, ATerm r_51 (ATerm), ATerm s_51 (ATerm));
ATerm FInt_2 (ATerm, ATerm p_51 (ATerm), ATerm q_51 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm o_51 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm m_51 (ATerm), ATerm n_51 (ATerm));
ATerm ALT_2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm HV_2 (ATerm, ATerm w_50 (ATerm), ATerm x_50 (ATerm));
ATerm V_2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm H_2 (ATerm, ATerm s_50 (ATerm), ATerm t_50 (ATerm));
ATerm S_1 (ATerm, ATerm r_50 (ATerm));
ATerm Box_0 (ATerm);
ATerm _2 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_75 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_76 (ATerm));
ATerm debug_1 (ATerm, ATerm b_64 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm t_69 (ATerm), ATerm u_69 (ATerm));
ATerm crush_2 (ATerm, ATerm r_68 (ATerm), ATerm s_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_75 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_76 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_79 (ATerm));
ATerm map_1 (ATerm, ATerm w_64 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_79 (ATerm));
ATerm Program_1 (ATerm, ATerm m_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_64 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_79 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_77 (ATerm));
ATerm abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm is_int_0 (ATerm t)
{
  ATerm j_1 = NULL;
  j_1 = t;
  t = SSL_is_int(not_null(j_1));
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm e_52 (ATerm), ATerm f_52 (ATerm))
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
            t = e_52(t);
            {
              g_5 = t;
              {
                t = not_null(t_4);
                {
                  ATerm n_5 = NULL;
                  t = f_52(t);
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
ATerm Arg_1 (ATerm t, ATerm d_52 (ATerm))
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
            t = d_52(t);
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
ATerm LINT_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
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
            t = b_52(t);
            {
              e_11 = t;
              {
                t = not_null(y_10);
                {
                  ATerm i_11 = NULL;
                  t = c_52(t);
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
ATerm L_2 (ATerm t, ATerm z_51 (ATerm), ATerm a_52 (ATerm))
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
            t = z_51(t);
            {
              d_12 = t;
              {
                t = not_null(x_11);
                {
                  ATerm h_12 = NULL;
                  t = a_52(t);
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
ATerm list_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm o_12 (ATerm t)
  {
    ATerm k_3 = t;
    int l_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_3);
      }
    else
      {
        t = k_3;
        t = Cons_2(t, y_64, o_12);
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
      ATerm m_3;
      m_3 = t;
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
      t = m_3;
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
      ATerm n_3;
      n_3 = t;
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
      t = n_3;
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
      ATerm o_3;
      o_3 = t;
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
      t = o_3;
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
  ATerm p_3 = t;
  int q_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = VS_0(t);
      LocalPopChoice(q_3);
    }
  else
    {
      t = p_3;
      {
        ATerm r_3 = t;
        int s_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HS_0(t);
            LocalPopChoice(s_3);
          }
        else
          {
            t = r_3;
            t = IS_0(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm a_51 (ATerm), ATerm b_51 (ATerm))
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
            t = a_51(t);
            {
              q_14 = t;
              {
                t = not_null(k_14);
                {
                  ATerm u_14 = NULL;
                  t = b_51(t);
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
ATerm C_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
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
            t = x_51(t);
            {
              p_15 = t;
              {
                t = not_null(j_15);
                {
                  ATerm t_15 = NULL;
                  t = y_51(t);
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
ATerm REF_2 (ATerm t, ATerm v_51 (ATerm), ATerm w_51 (ATerm))
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
            t = v_51(t);
            {
              o_16 = t;
              {
                t = not_null(i_16);
                {
                  ATerm s_16 = NULL;
                  t = w_51(t);
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
ATerm LBL_2 (ATerm t, ATerm t_51 (ATerm), ATerm u_51 (ATerm))
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
            t = t_51(t);
            {
              n_17 = t;
              {
                t = not_null(h_17);
                {
                  ATerm r_17 = NULL;
                  t = u_51(t);
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
ATerm R_2 (ATerm t, ATerm h_51 (ATerm), ATerm i_51 (ATerm))
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
            t = h_51(t);
            {
              m_18 = t;
              {
                t = not_null(g_18);
                {
                  ATerm q_18 = NULL;
                  t = i_51(t);
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
ATerm AR_1 (ATerm t, ATerm l_51 (ATerm))
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
            t = l_51(t);
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
ATerm AC_1 (ATerm t, ATerm k_51 (ATerm))
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
            t = k_51(t);
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
ATerm AL_1 (ATerm t, ATerm j_51 (ATerm))
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
            t = j_51(t);
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
  ATerm t_3 = t;
  int u_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = list_1(t, S_Option_0);
        return(t);
      }
      t = AL_1(t, b_0);
      LocalPopChoice(u_3);
    }
  else
    {
      t = t_3;
      {
        ATerm v_3 = t;
        int w_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, c_0);
            LocalPopChoice(w_3);
          }
        else
          {
            t = v_3;
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
ATerm A_3 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm), ATerm g_51 (ATerm))
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
            t = e_51(t);
            {
              t_21 = t;
              {
                t = not_null(l_21);
                {
                  ATerm x_21 = NULL;
                  t = f_51(t);
                  {
                    v_21 = t;
                    {
                      t = not_null(m_21);
                      {
                        ATerm z_21 = NULL;
                        t = g_51(t);
                        {
                          x_21 = t;
                          {
                            ATerm a_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, not_null(t_21), not_null(v_21), not_null(x_21)), not_null(r_21));
                            {
                              a_22 = t;
                              if(((z_21 != NULL) && (z_21 != a_22)))
                                _fail(a_22);
                              else
                                z_21 = a_22;
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
  ATerm l_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_MATH_0))
    {
      ATerm n_22 = NULL,p_22 = NULL;
      ATerm x_3;
      x_3 = t;
      {
        ATerm o_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          o_22 = t;
          if(((n_22 != NULL) && (n_22 != o_22)))
            _fail(o_22);
          else
            n_22 = o_22;
        }
      }
      t = x_3;
      {
        ATerm q_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(n_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
        t = not_null(p_22);
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
  ATerm y_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_NUM_0))
    {
      ATerm a_23 = NULL,c_23 = NULL;
      ATerm y_3;
      y_3 = t;
      {
        ATerm b_23 = NULL;
        t = SSLgetAnnotations(not_null(y_22));
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
      }
      t = y_3;
      {
        ATerm d_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(a_23));
        {
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
        }
        t = not_null(c_23);
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
  ATerm l_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_VAR_0))
    {
      ATerm n_23 = NULL,p_23 = NULL;
      ATerm z_3;
      z_3 = t;
      {
        ATerm o_23 = NULL;
        t = SSLgetAnnotations(not_null(l_23));
        {
          o_23 = t;
          if(((n_23 != NULL) && (n_23 != o_23)))
            _fail(o_23);
          else
            n_23 = o_23;
        }
      }
      t = z_3;
      {
        ATerm q_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(n_23));
        {
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
        }
        t = not_null(p_23);
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
  ATerm y_23 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym_KW_0))
    {
      ATerm c_24 = NULL,e_24 = NULL;
      ATerm a_4;
      a_4 = t;
      {
        ATerm d_24 = NULL;
        t = SSLgetAnnotations(not_null(y_23));
        {
          d_24 = t;
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
        }
      }
      t = a_4;
      {
        ATerm k_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(c_24));
        {
          k_24 = t;
          if(((e_24 != NULL) && (e_24 != k_24)))
            _fail(k_24);
          else
            e_24 = k_24;
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
ATerm CL_0 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym_CL_0))
    {
      ATerm z_24 = NULL,b_25 = NULL;
      ATerm b_4;
      b_4 = t;
      {
        ATerm a_25 = NULL;
        t = SSLgetAnnotations(not_null(x_24));
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
      }
      t = b_4;
      {
        ATerm c_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(z_24));
        {
          c_25 = t;
          if(((b_25 != NULL) && (b_25 != c_25)))
            _fail(c_25);
          else
            b_25 = c_25;
        }
        t = not_null(b_25);
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
  ATerm n_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_SZ_0))
    {
      ATerm p_25 = NULL,r_25 = NULL;
      ATerm c_4;
      c_4 = t;
      {
        ATerm q_25 = NULL;
        t = SSLgetAnnotations(not_null(n_25));
        {
          q_25 = t;
          if(((p_25 != NULL) && (p_25 != q_25)))
            _fail(q_25);
          else
            p_25 = q_25;
        }
      }
      t = c_4;
      {
        ATerm s_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(p_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        t = not_null(r_25);
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
  ATerm a_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_SH_0))
    {
      ATerm c_26 = NULL,e_26 = NULL;
      ATerm d_4;
      d_4 = t;
      {
        ATerm d_26 = NULL;
        t = SSLgetAnnotations(not_null(a_26));
        {
          d_26 = t;
          if(((c_26 != NULL) && (c_26 != d_26)))
            _fail(d_26);
          else
            c_26 = d_26;
        }
      }
      t = d_4;
      {
        ATerm f_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(c_26));
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
        t = not_null(e_26);
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
  ATerm n_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_SE_0))
    {
      ATerm p_26 = NULL,r_26 = NULL;
      ATerm e_4;
      e_4 = t;
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
      t = e_4;
      {
        ATerm s_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(p_26));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_FM_0))
    {
      ATerm d_27 = NULL,f_27 = NULL;
      ATerm f_4;
      f_4 = t;
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
      t = f_4;
      {
        ATerm g_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(d_27));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
        t = not_null(f_27);
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
  ATerm o_27 = NULL;
  o_27 = t;
  n_27 :
  if(match_cons(o_27, sym_FN_0))
    {
      ATerm q_27 = NULL,s_27 = NULL;
      ATerm g_4;
      g_4 = t;
      {
        ATerm r_27 = NULL;
        t = SSLgetAnnotations(not_null(o_27));
        {
          r_27 = t;
          if(((q_27 != NULL) && (q_27 != r_27)))
            _fail(r_27);
          else
            q_27 = r_27;
        }
      }
      t = g_4;
      {
        ATerm t_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FN_0), not_null(q_27));
        {
          t_27 = t;
          if(((s_27 != NULL) && (s_27 != t_27)))
            _fail(t_27);
          else
            s_27 = t_27;
        }
        t = not_null(s_27);
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
  ATerm h_4 = t;
  int i_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FN_0(t);
      LocalPopChoice(i_4);
    }
  else
    {
      t = h_4;
      {
        ATerm j_4 = t;
        int k_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FM_0(t);
            LocalPopChoice(k_4);
          }
        else
          {
            t = j_4;
            {
              ATerm l_4 = t;
              int m_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SE_0(t);
                  LocalPopChoice(m_4);
                }
              else
                {
                  t = l_4;
                  {
                    ATerm q_4 = t;
                    int r_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SH_0(t);
                        LocalPopChoice(r_4);
                      }
                    else
                      {
                        t = q_4;
                        {
                          ATerm s_4 = t;
                          int u_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SZ_0(t);
                              LocalPopChoice(u_4);
                            }
                          else
                            {
                              t = s_4;
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
ATerm FFID_2 (ATerm t, ATerm r_51 (ATerm), ATerm s_51 (ATerm))
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
            t = r_51(t);
            {
              n_28 = t;
              {
                t = not_null(h_28);
                {
                  ATerm r_28 = NULL;
                  t = s_51(t);
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
ATerm FInt_2 (ATerm t, ATerm p_51 (ATerm), ATerm q_51 (ATerm))
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
            t = p_51(t);
            {
              m_29 = t;
              {
                t = not_null(g_29);
                {
                  ATerm q_29 = NULL;
                  t = q_51(t);
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
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FInt_2(t, Font_Param_0, is_string_0);
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm o_51 (ATerm))
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
            t = o_51(t);
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
  ATerm x_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        t = list_1(t, F_Option_0);
        return(t);
      }
      t = F_1(t, f_0);
      LocalPopChoice(y_4);
    }
  else
    {
      t = x_4;
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = KW_0(t);
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            {
              ATerm c_5 = t;
              int d_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = VAR_0(t);
                  LocalPopChoice(d_5);
                }
              else
                {
                  t = c_5;
                  {
                    ATerm e_5 = t;
                    int h_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = NUM_0(t);
                        LocalPopChoice(h_5);
                      }
                    else
                      {
                        t = e_5;
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
ATerm FBOX_2 (ATerm t, ATerm m_51 (ATerm), ATerm n_51 (ATerm))
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
            t = m_51(t);
            {
              e_31 = t;
              {
                t = not_null(y_30);
                {
                  ATerm i_31 = NULL;
                  t = n_51(t);
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
ATerm ALT_2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym_ALT_2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      {
        ATerm b_32 = NULL,d_32 = NULL;
        ATerm c_32 = NULL;
        t = SSLgetAnnotations(not_null(v_31));
        {
          c_32 = t;
          if(((b_32 != NULL) && (b_32 != c_32)))
            _fail(c_32);
          else
            b_32 = c_32;
        }
        {
          t = not_null(w_31);
          {
            ATerm f_32 = NULL;
            t = y_50(t);
            {
              d_32 = t;
              {
                t = not_null(x_31);
                {
                  ATerm h_32 = NULL;
                  t = z_50(t);
                  {
                    f_32 = t;
                    {
                      ATerm i_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, not_null(d_32), not_null(f_32)), not_null(b_32));
                      {
                        i_32 = t;
                        if(((h_32 != NULL) && (h_32 != i_32)))
                          _fail(i_32);
                        else
                          h_32 = i_32;
                      }
                      t = not_null(h_32);
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
ATerm HV_2 (ATerm t, ATerm w_50 (ATerm), ATerm x_50 (ATerm))
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym_HV_2))
    {
      v_32 = ATgetArgument(u_32, 0);
      w_32 = ATgetArgument(u_32, 1);
      {
        ATerm a_33 = NULL,c_33 = NULL;
        ATerm b_33 = NULL;
        t = SSLgetAnnotations(not_null(u_32));
        {
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
        }
        {
          t = not_null(v_32);
          {
            ATerm e_33 = NULL;
            t = w_50(t);
            {
              c_33 = t;
              {
                t = not_null(w_32);
                {
                  ATerm g_33 = NULL;
                  t = x_50(t);
                  {
                    e_33 = t;
                    {
                      ATerm h_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, not_null(c_33), not_null(e_33)), not_null(a_33));
                      {
                        h_33 = t;
                        if(((g_33 != NULL) && (g_33 != h_33)))
                          _fail(h_33);
                        else
                          g_33 = h_33;
                      }
                      t = not_null(g_33);
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
ATerm V_2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm t_33 = NULL,x_33 = NULL,y_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym_V_2))
    {
      x_33 = ATgetArgument(t_33, 0);
      y_33 = ATgetArgument(t_33, 1);
      {
        ATerm c_34 = NULL,e_34 = NULL;
        ATerm d_34 = NULL;
        t = SSLgetAnnotations(not_null(t_33));
        {
          d_34 = t;
          if(((c_34 != NULL) && (c_34 != d_34)))
            _fail(d_34);
          else
            c_34 = d_34;
        }
        {
          t = not_null(x_33);
          {
            ATerm g_34 = NULL;
            t = u_50(t);
            {
              e_34 = t;
              {
                t = not_null(y_33);
                {
                  ATerm i_34 = NULL;
                  t = v_50(t);
                  {
                    g_34 = t;
                    {
                      ATerm j_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, not_null(e_34), not_null(g_34)), not_null(c_34));
                      {
                        j_34 = t;
                        if(((i_34 != NULL) && (i_34 != j_34)))
                          _fail(j_34);
                        else
                          i_34 = j_34;
                      }
                      t = not_null(i_34);
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
ATerm H_2 (ATerm t, ATerm s_50 (ATerm), ATerm t_50 (ATerm))
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym_H_2))
    {
      a_35 = ATgetArgument(z_34, 0);
      b_35 = ATgetArgument(z_34, 1);
      {
        ATerm f_35 = NULL,h_35 = NULL;
        ATerm g_35 = NULL;
        t = SSLgetAnnotations(not_null(z_34));
        {
          g_35 = t;
          if(((f_35 != NULL) && (f_35 != g_35)))
            _fail(g_35);
          else
            f_35 = g_35;
        }
        {
          t = not_null(a_35);
          {
            ATerm j_35 = NULL;
            t = s_50(t);
            {
              h_35 = t;
              {
                t = not_null(b_35);
                {
                  ATerm l_35 = NULL;
                  t = t_50(t);
                  {
                    j_35 = t;
                    {
                      ATerm m_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(h_35), not_null(j_35)), not_null(f_35));
                      {
                        m_35 = t;
                        if(((l_35 != NULL) && (l_35 != m_35)))
                          _fail(m_35);
                        else
                          l_35 = m_35;
                      }
                      t = not_null(l_35);
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
ATerm S_1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm z_35 = NULL,a_36 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym_S_1))
    {
      a_36 = ATgetArgument(z_35, 0);
      {
        ATerm e_36 = NULL,g_36 = NULL;
        ATerm f_36 = NULL;
        t = SSLgetAnnotations(not_null(z_35));
        {
          f_36 = t;
          if(((e_36 != NULL) && (e_36 != f_36)))
            _fail(f_36);
          else
            e_36 = f_36;
        }
        {
          t = not_null(a_36);
          {
            ATerm i_36 = NULL;
            t = r_50(t);
            {
              g_36 = t;
              {
                ATerm j_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(g_36)), not_null(e_36));
                {
                  j_36 = t;
                  if(((i_36 != NULL) && (i_36 != j_36)))
                    _fail(j_36);
                  else
                    i_36 = j_36;
                }
                t = not_null(i_36);
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
  ATerm i_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1(t, is_string_0);
      LocalPopChoice(j_5);
    }
  else
    {
      t = i_5;
      {
        ATerm k_5 = t;
        int m_5 = stack_ptr;
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
            LocalPopChoice(m_5);
          }
        else
          {
            t = k_5;
            {
              ATerm o_5 = t;
              int p_5 = stack_ptr;
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
                        LocalPopChoice(s_5);
                      }
                    else
                      {
                        t = q_5;
                        {
                          ATerm t_5 = t;
                          int u_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2(t, Box_0, Box_0);
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
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
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
                                                      t = LBL_2(t, is_string_0, Box_0);
                                                      LocalPopChoice(c_6);
                                                    }
                                                  else
                                                    {
                                                      t = b_6;
                                                      {
                                                        ATerm d_6 = t;
                                                        int e_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = REF_2(t, is_string_0, Box_0);
                                                            LocalPopChoice(e_6);
                                                          }
                                                        else
                                                          {
                                                            t = d_6;
                                                            {
                                                              ATerm f_6 = t;
                                                              int g_6 = stack_ptr;
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
                                                                        t = L_2(t, Box_0, Box_0);
                                                                        LocalPopChoice(i_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_6;
                                                                        {
                                                                          ATerm j_6 = t;
                                                                          int m_6 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = LINT_2(t, is_int_0, Box_0);
                                                                              LocalPopChoice(m_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_6;
                                                                              {
                                                                                ATerm n_6 = t;
                                                                                int o_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Arg_1(t, is_int_0);
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
                                                                                          t = Arg2_2(t, is_int_0, is_int_0);
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
                                                                                                t = Nil_0(t);
                                                                                                LocalPopChoice(s_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_6;
                                                                                                {
                                                                                                  ATerm z_0 (ATerm t)
                                                                                                  {
                                                                                                    t = term_t_6;
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
ATerm _2 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym__2))
    {
      z_36 = ATgetArgument(y_36, 0);
      a_37 = ATgetArgument(y_36, 1);
      {
        ATerm e_37 = NULL,g_37 = NULL;
        ATerm f_37 = NULL;
        t = SSLgetAnnotations(not_null(y_36));
        {
          f_37 = t;
          if(((e_37 != NULL) && (e_37 != f_37)))
            _fail(f_37);
          else
            e_37 = f_37;
        }
        {
          t = not_null(z_36);
          {
            ATerm i_37 = NULL;
            t = g_49(t);
            {
              g_37 = t;
              {
                t = not_null(a_37);
                {
                  ATerm k_37 = NULL;
                  t = h_49(t);
                  {
                    i_37 = t;
                    {
                      ATerm l_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_37), not_null(i_37)), not_null(e_37));
                      {
                        l_37 = t;
                        if(((k_37 != NULL) && (k_37 != l_37)))
                          _fail(l_37);
                        else
                          k_37 = l_37;
                      }
                      t = not_null(k_37);
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
  ATerm t_37 = NULL;
  ATerm u_6;
  u_6 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm u_37 = NULL,v_37 = NULL;
      u_37 = t;
      s_37 :
      if(match_cons(u_37, sym_Program_1))
        {
          v_37 = ATgetArgument(u_37, 0);
          if(((t_37 != NULL) && (t_37 != v_37)))
            _fail(v_37);
          else
            t_37 = v_37;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, a_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), not_null(t_37)), term_w_6));
      {
        t = printnl_0(t);
        {
          t = term_y_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_37 = NULL,h_38 = NULL,i_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym__2))
    {
      h_38 = ATgetArgument(z_37, 0);
      i_38 = ATgetArgument(z_37, 1);
      {
        ATerm z_6;
        z_6 = t;
        t = SSL_printnl(not_null(h_38), not_null(i_38));
        t = z_6;
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
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
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
  ATerm f_39 = NULL;
  ATerm h_39 = NULL;
  f_39 = t;
  {
    ATerm i_39 = NULL;
    ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
    t = not_null(f_39);
    {
      i_39 = t;
      {
        t = SSL_explode_term(not_null(i_39));
        {
          k_39 = t;
          d_39 :
          if(match_cons(k_39, sym__2))
            {
              l_39 = ATgetArgument(k_39, 0);
              m_39 = ATgetArgument(k_39, 1);
              e_39 :
              if(match_string(l_39, ""))
                {
                  if(((h_39 != NULL) && (h_39 != m_39)))
                    _fail(m_39);
                  else
                    h_39 = m_39;
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
      t = not_null(h_39);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm q_39 (ATerm t)
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_39);
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        {
          t = Nil_0(t);
          t = l_65(t);
        }
      }
    return(t);
  }
  t = q_39(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t_39 = t;
  s_39 :
  if(match_cons(t_39, sym__2))
    {
      u_39 = ATgetArgument(t_39, 0);
      v_39 = ATgetArgument(t_39, 1);
      {
        t = not_null(u_39);
        {
          ATerm c_1 (ATerm t)
          {
            t = not_null(v_39);
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
  ATerm a_40 = NULL;
  a_40 = t;
  t = SSL_explode_string(not_null(a_40));
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
ATerm is_string_0 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  t = SSL_is_string(not_null(e_40));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              ATerm m_7 = t;
              int n_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(n_7);
                }
              else
                {
                  t = m_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, d_1);
            LocalPopChoice(l_7);
          }
        else
          {
            t = k_7;
            {
              ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
              n_40 = t;
              m_40 :
              if(match_cons(n_40, sym_Path_1))
                {
                  o_40 = ATgetArgument(n_40, 0);
                  t = not_null(o_40);
                }
              else
                {
                  if(match_cons(n_40, sym_Var_1))
                    {
                      o_40 = ATgetArgument(n_40, 0);
                      {
                        t = not_null(o_40);
                        {
                          ATerm o_7 = t;
                          int p_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_7);
                            }
                          else
                            {
                              t = o_7;
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  t = term_q_7;
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
                      if(match_cons(n_40, sym_Prefix_2))
                        {
                          o_40 = ATgetArgument(n_40, 0);
                          p_40 = ATgetArgument(n_40, 1);
                          {
                            ATerm u_40 = NULL,w_40 = NULL;
                            ATerm r_7;
                            r_7 = t;
                            {
                              ATerm v_40 = NULL;
                              t = not_null(o_40);
                              {
                                t = eval_config_0(t);
                                {
                                  v_40 = t;
                                  if(((u_40 != NULL) && (u_40 != v_40)))
                                    _fail(v_40);
                                  else
                                    u_40 = v_40;
                                }
                              }
                            }
                            t = r_7;
                            {
                              ATerm x_40 = NULL;
                              t = not_null(p_40);
                              {
                                t = eval_config_0(t);
                                {
                                  x_40 = t;
                                  if(((w_40 != NULL) && (w_40 != x_40)))
                                    _fail(x_40);
                                  else
                                    w_40 = x_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_40), not_null(w_40));
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
  ATerm f_41 = NULL;
  f_41 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_7, not_null(f_41));
    {
      t = table_get_0(t);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm v_7;
              v_7 = t;
              {
                ATerm h_41 = NULL;
                ATerm i_41 = NULL;
                i_41 = t;
                if(((h_41 != NULL) && (h_41 != i_41)))
                  _fail(i_41);
                else
                  h_41 = i_41;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_s_7, not_null(f_41), not_null(h_41));
                  t = table_put_0(t);
                }
              }
              t = v_7;
            }
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7;
      y_7 = t;
      {
        ATerm n_41 = NULL;
        ATerm o_41 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            o_41 = t;
            if(((n_41 != NULL) && (n_41 != o_41)))
              _fail(o_41);
            else
              n_41 = o_41;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_41), term_a_8);
          t = geq_0(t);
        }
      }
      t = y_7;
      t = h_75(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  s_41 = t;
  r_41 :
  if(match_cons(s_41, sym__2))
    {
      t_41 = ATgetArgument(s_41, 0);
      u_41 = ATgetArgument(s_41, 1);
      t = SSL_WriteToTextFile(not_null(t_41), not_null(u_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym__2))
    {
      b_42 = ATgetArgument(a_42, 0);
      c_42 = ATgetArgument(a_42, 1);
      t = SSL_WriteToBinaryFile(not_null(b_42), not_null(c_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_42 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm c_8 = t;
      int d_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm l_42 = NULL,m_42 = NULL;
            l_42 = t;
            h_42 :
            if(match_cons(l_42, sym_Output_1))
              {
                m_42 = ATgetArgument(l_42, 0);
                if(((k_42 != NULL) && (k_42 != m_42)))
                  _fail(m_42);
                else
                  k_42 = m_42;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, g_1);
          LocalPopChoice(d_8);
        }
      else
        {
          t = c_8;
          {
            ATerm p_42 = NULL;
            t = term_e_8;
            {
              p_42 = t;
              if(((k_42 != NULL) && (k_42 != p_42)))
                _fail(p_42);
              else
                k_42 = p_42;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_1, _id);
  }
  t = b_8;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = not_null(k_42);
        return(t);
      }
      t = split_2(t, i_1, _id);
      return(t);
    }
    t = _2(t, _id, h_1);
    {
      ATerm f_8 = t;
      int g_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              ATerm q_42 = NULL;
              q_42 = t;
              j_42 :
              if(!(match_cons(q_42, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, l_1);
            return(t);
          }
          t = _2(t, k_1, WriteToBinaryFile_0);
          LocalPopChoice(g_8);
        }
      else
        {
          t = f_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm y_76 (ATerm))
{
  ATerm b_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  ATerm h_8;
  h_8 = t;
  t = dtime_0(t);
  t = h_8;
  {
    t = y_76(t);
    {
      ATerm i_8;
      i_8 = t;
      {
        ATerm c_43 = NULL;
        t = dtime_0(t);
        {
          c_43 = t;
          if(((b_43 != NULL) && (b_43 != c_43)))
            _fail(c_43);
          else
            b_43 = c_43;
        }
      }
      t = i_8;
      {
        d_43 = t;
        v_42 :
        if(match_cons(d_43, sym__2))
          {
            e_43 = ATgetArgument(d_43, 0);
            f_43 = ATgetArgument(d_43, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_43)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_43))), not_null(f_43));
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
ATerm debug_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm j_8;
  j_8 = t;
  {
    ATerm m_43 = NULL,o_43 = NULL;
    ATerm k_8;
    k_8 = t;
    {
      ATerm n_43 = NULL;
      t = b_64(t);
      {
        n_43 = t;
        if(((m_43 != NULL) && (m_43 != n_43)))
          _fail(n_43);
        else
          m_43 = n_43;
      }
    }
    t = k_8;
    {
      ATerm p_43 = NULL;
      p_43 = t;
      if(((o_43 != NULL) && (o_43 != p_43)))
        _fail(p_43);
      else
        o_43 = p_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_43)), not_null(m_43)));
        t = printnl_0(t);
      }
    }
  }
  t = j_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm f_44 = NULL;
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_44 = NULL;
      g_44 = t;
      {
        if(((f_44 != NULL) && (f_44 != g_44)))
          _fail(g_44);
        else
          f_44 = g_44;
        t = SSL_ReadFromFile(not_null(f_44));
      }
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm m_1 (ATerm t)
        {
          t = term_n_8;
          return(t);
        }
        t = debug_1(t, m_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm))
{
  ATerm k_44 = NULL,q_44 = NULL;
  ATerm o_8;
  o_8 = t;
  {
    ATerm l_44 = NULL;
    t = w_57(t);
    {
      l_44 = t;
      if(((k_44 != NULL) && (k_44 != l_44)))
        _fail(l_44);
      else
        k_44 = l_44;
    }
  }
  t = o_8;
  {
    ATerm r_44 = NULL;
    t = x_57(t);
    {
      r_44 = t;
      if(((q_44 != NULL) && (q_44 != r_44)))
        _fail(r_44);
      else
        q_44 = r_44;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_44), not_null(q_44));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_44 = NULL;
  ATerm p_8;
  p_8 = t;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_1 (ATerm t)
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
        t = fetch_1(t, n_1);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        {
          ATerm a_45 = NULL;
          t = term_s_8;
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
  t = p_8;
  {
    ATerm o_1 (ATerm t)
    {
      t = not_null(x_44);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
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
  ATerm q_1 (ATerm t)
  {
    t = term_v_8;
    t = set_config_0(t);
    t = term_w_8;
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  t = Option_3(t, p_1, q_1, r_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
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
  ATerm t_1 (ATerm t)
  {
    ATerm y_8;
    y_8 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(i_45));
        t = set_config_0(t);
      }
    }
    t = y_8;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = term_a_9;
    return(t);
  }
  t = ArgOption_3(t, s_1, t_1, u_1);
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
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
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
      ATerm w_1 (ATerm t)
      {
        t = term_f_9;
        t = set_config_0(t);
        t = term_g_9;
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = term_h_9;
        return(t);
      }
      t = Option_3(t, v_1, w_1, x_1);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
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
            ATerm z_1 (ATerm t)
            {
              ATerm y_45 = NULL;
              ATerm k_9;
              k_9 = t;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(w_45));
                  t = set_config_0(t);
                }
              }
              t = k_9;
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
            ATerm a_2 (ATerm t)
            {
              t = term_l_9;
              return(t);
            }
            t = ArgOption_3(t, y_1, z_1, a_2);
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            {
              ATerm b_2 (ATerm t)
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
              ATerm c_2 (ATerm t)
              {
                t = term_n_9;
                t = set_config_0(t);
                t = term_o_9;
                return(t);
              }
              ATerm d_2 (ATerm t)
              {
                t = term_p_9;
                return(t);
              }
              t = Option_3(t, b_2, c_2, d_2);
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
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm s_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = s_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
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
  ATerm f_2 (ATerm t)
  {
    ATerm j_46 = NULL;
    ATerm x_9;
    x_9 = t;
    {
      ATerm h_46 = NULL;
      ATerm i_46 = NULL;
      i_46 = t;
      if(((h_46 != NULL) && (h_46 != i_46)))
        _fail(i_46);
      else
        h_46 = i_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(h_46));
        t = set_config_0(t);
      }
    }
    t = x_9;
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
  ATerm g_2 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  t = ArgOption_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm h_2 (ATerm t)
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
        ATerm i_2 (ATerm t)
        {
          t = term_d_10;
          t = set_config_0(t);
          t = term_e_10;
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          t = term_f_10;
          return(t);
        }
        t = Option_3(t, h_2, i_2, j_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
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
              x_46 = ATgetFirst((ATermList) w_46);
              y_46 = (ATerm) ATgetNext((ATermList) w_46);
              {
                ATerm c_47 = NULL;
                ATerm g_10;
                g_10 = t;
                {
                  t = not_null(v_46);
                  t = j_0(t);
                }
                t = g_10;
                {
                  ATerm d_47 = NULL;
                  t = not_null(x_46);
                  {
                    t = k_0(t);
                    {
                      d_47 = t;
                      if(((c_47 != NULL) && (c_47 != d_47)))
                        _fail(d_47);
                      else
                        c_47 = d_47;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_46)), not_null(c_47));
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
  ATerm k_2 (ATerm t)
  {
    ATerm k_47 = NULL;
    k_47 = t;
    h_47 :
    if(!(match_string(k_47, "-i")))
      {
        if(!(match_string(k_47, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm n_47 = NULL;
    ATerm j_10;
    j_10 = t;
    {
      ATerm l_47 = NULL;
      ATerm m_47 = NULL;
      m_47 = t;
      if(((l_47 != NULL) && (l_47 != m_47)))
        _fail(m_47);
      else
        l_47 = m_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(l_47));
        t = set_config_0(t);
      }
    }
    t = j_10;
    {
      ATerm o_47 = NULL;
      o_47 = t;
      if(((n_47 != NULL) && (n_47 != o_47)))
        _fail(o_47);
      else
        n_47 = o_47;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_47));
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_l_10;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
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
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, term_q_10));
  {
    t = printnl_0(t);
    {
      t = term_y_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  t = SSL_TicksToSeconds(not_null(s_47));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym__2))
    {
      y_47 = ATgetArgument(x_47, 0);
      z_47 = ATgetArgument(x_47, 1);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_47), not_null(z_47));
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            t = SSL_addr(not_null(y_47), not_null(z_47));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_69 (ATerm), ATerm u_69 (ATerm))
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_69(t);
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
        g_48 = t;
        f_48 :
        if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
          {
            h_48 = ATgetFirst((ATermList) g_48);
            i_48 = (ATerm) ATgetNext((ATermList) g_48);
            {
              ATerm l_48 = NULL;
              ATerm m_48 = NULL;
              t = not_null(i_48);
              {
                t = foldr_2(t, t_69, u_69);
                {
                  m_48 = t;
                  if(((l_48 != NULL) && (l_48 != m_48)))
                    _fail(m_48);
                  else
                    l_48 = m_48;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_48), not_null(l_48));
                t = u_69(t);
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
ATerm crush_2 (ATerm t, ATerm r_68 (ATerm), ATerm s_68 (ATerm))
{
  ATerm t_48 = NULL;
  ATerm v_48 = NULL;
  t_48 = t;
  {
    ATerm w_48 = NULL;
    ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
    t = not_null(t_48);
    {
      w_48 = t;
      {
        t = SSL_explode_term(not_null(w_48));
        {
          y_48 = t;
          s_48 :
          if(match_cons(y_48, sym__2))
            {
              z_48 = ATgetArgument(y_48, 0);
              a_49 = ATgetArgument(y_48, 1);
              if(((v_48 != NULL) && (v_48 != a_49)))
                _fail(a_49);
              else
                v_48 = a_49;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_48);
      t = foldr_2(t, r_68, s_68);
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
    ATerm n_2 (ATerm t)
    {
      t = term_e_9;
      return(t);
    }
    t = crush_2(t, n_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  f_49 :
  if(match_cons(i_49, sym__2))
    {
      j_49 = ATgetArgument(i_49, 0);
      k_49 = ATgetArgument(i_49, 1);
      {
        ATerm z_10;
        z_10 = t;
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_49), not_null(k_49));
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
              t = SSL_gtr(not_null(j_49), not_null(k_49));
            }
        }
        t = z_10;
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
  ATerm q_49 = NULL;
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
      r_49 = t;
      p_49 :
      if(match_cons(r_49, sym__2))
        {
          s_49 = ATgetArgument(r_49, 0);
          t_49 = ATgetArgument(r_49, 1);
          {
            if(((q_49 != NULL) && (q_49 != s_49)))
              _fail(s_49);
            else
              q_49 = s_49;
            if(((q_49 != NULL) && (q_49 != t_49)))
              _fail(t_49);
            else
              q_49 = t_49;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_11);
    }
  else
    {
      t = f_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11;
      m_11 = t;
      {
        ATerm w_49 = NULL;
        ATerm x_49 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            x_49 = t;
            if(((w_49 != NULL) && (w_49 != x_49)))
              _fail(x_49);
            else
              w_49 = x_49;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_49), term_y_6);
          t = geq_0(t);
        }
      }
      t = m_11;
      t = g_75(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm b_50 = NULL,d_50 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      ATerm c_50 = NULL;
      t = run_time_0(t);
      {
        c_50 = t;
        if(((b_50 != NULL) && (b_50 != c_50)))
          _fail(c_50);
        else
          b_50 = c_50;
      }
    }
    t = n_11;
    {
      ATerm e_50 = NULL;
      t = term_o_11;
      {
        t = get_config_0(t);
        {
          e_50 = t;
          if(((d_50 != NULL) && (d_50 != e_50)))
            _fail(e_50);
          else
            d_50 = e_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), not_null(b_50)), term_p_11), not_null(d_50)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_2);
  {
    t = term_e_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym_Version_0))
    {
      ATerm n_50 = NULL,c_51 = NULL;
      ATerm r_11;
      r_11 = t;
      {
        ATerm o_50 = NULL;
        t = SSLgetAnnotations(not_null(l_50));
        {
          o_50 = t;
          if(((n_50 != NULL) && (n_50 != o_50)))
            _fail(o_50);
          else
            n_50 = o_50;
        }
      }
      t = r_11;
      {
        ATerm d_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_50));
        {
          d_51 = t;
          if(((c_51 != NULL) && (c_51 != d_51)))
            _fail(d_51);
          else
            c_51 = d_51;
        }
        t = not_null(c_51);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          ATerm y_11 = t;
          int z_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(z_11);
            }
          else
            {
              t = y_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, p_2);
  t = w_76(t);
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
    ATerm a_12;
    a_12 = t;
    {
      t = term_e_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_12, term_g_12, not_null(o_52));
          t = table_put_0(t);
        }
      }
    }
    t = a_12;
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
  ATerm j_12;
  j_12 = t;
  {
    ATerm f_53 = NULL;
    ATerm i_53 = NULL;
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
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
      t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(f_53));
      t = printnl_0(t);
    }
  }
  t = j_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm l_53 (ATerm t)
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = Cons_2(t, w_64, l_53);
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
          ATerm p_12;
          p_12 = t;
          {
            ATerm y_53 = NULL,a_54 = NULL,c_54 = NULL;
            ATerm q_12;
            q_12 = t;
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
            t = q_12;
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
          t = p_12;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(x_53);
              return(t);
            }
            t = reverse_acc_2(t, h_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_53) == AT_LIST) && ATisEmpty(u_53)))
        {
          {
            t = term_u_8;
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
  ATerm r_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm n_54 = NULL,o_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym_Program_1))
    {
      o_54 = ATgetArgument(n_54, 0);
      {
        ATerm r_54 = NULL,t_54 = NULL;
        ATerm s_54 = NULL;
        t = SSLgetAnnotations(not_null(n_54));
        {
          s_54 = t;
          if(((r_54 != NULL) && (r_54 != s_54)))
            _fail(s_54);
          else
            r_54 = s_54;
        }
        {
          t = not_null(o_54);
          {
            ATerm v_54 = NULL;
            t = m_57(t);
            {
              t_54 = t;
              {
                ATerm w_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_54)), not_null(r_54));
                {
                  w_54 = t;
                  if(((v_54 != NULL) && (v_54 != w_54)))
                    _fail(w_54);
                  else
                    v_54 = w_54;
                }
                t = not_null(v_54);
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
  ATerm e_55 = NULL;
  ATerm r_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_55 = NULL;
      t = term_o_11;
      {
        t = get_config_0(t);
        {
          f_55 = t;
          if(((e_55 != NULL) && (e_55 != f_55)))
            _fail(f_55);
          else
            e_55 = f_55;
        }
      }
      LocalPopChoice(u_12);
    }
  else
    {
      t = r_12;
      {
        ATerm s_2 (ATerm t)
        {
          ATerm t_2 (ATerm t)
          {
            ATerm g_55 = NULL;
            g_55 = t;
            if(((e_55 != NULL) && (e_55 != g_55)))
              _fail(g_55);
            else
              e_55 = g_55;
            return(t);
          }
          t = Program_1(t, t_2);
          return(t);
        }
        t = fetch_1(t, s_2);
      }
    }
  {
    t = term_z_12;
    {
      t = echo_0(t);
      {
        t = term_c_13;
        {
          t = table_get_0(t);
          {
            ATerm u_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, u_2);
            {
              ATerm v_2 (ATerm t)
              {
                ATerm h_55 = NULL;
                ATerm i_55 = NULL;
                i_55 = t;
                if(((h_55 != NULL) && (h_55 != i_55)))
                  _fail(i_55);
                else
                  h_55 = i_55;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_55)), term_d_13);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, v_2);
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
  ATerm e_13;
  e_13 = t;
  {
    ATerm n_55 = NULL;
    ATerm o_55 = NULL;
    o_55 = t;
    if(((n_55 != NULL) && (n_55 != o_55)))
      _fail(o_55);
    else
      n_55 = o_55;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, not_null(n_55)));
      t = printnl_0(t);
    }
  }
  t = e_13;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm h_13;
  h_13 = t;
  {
    t = c_64(t);
    t = debug_0(t);
  }
  t = h_13;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_57 (ATerm))
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
            t = n_57(t);
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
ATerm fetch_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm j_56 (ATerm t)
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_65, _id);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = Cons_2(t, _id, j_56);
      }
    return(t);
  }
  t = j_56(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_78 (ATerm))
{
  t = fetch_1(t, d_78);
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
      ATerm o_13;
      o_13 = t;
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
      t = o_13;
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
ATerm try_1 (ATerm t, ATerm a_62 (ATerm))
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_62(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
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
        ATerm r_13;
        r_13 = t;
        {
          ATerm r_57 = NULL;
          ATerm s_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_57), not_null(k_57));
          {
            ATerm u_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_13);
              }
            else
              {
                t = u_13;
                t = (ATerm) ATempty;
              }
            {
              s_57 = t;
              if(((r_57 != NULL) && (r_57 != s_57)))
                _fail(s_57);
              else
                r_57 = s_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_57), not_null(k_57), (ATerm) ATinsert(CheckATermList(not_null(r_57)), not_null(l_57)));
            t = table_put_0(t);
          }
        }
        t = r_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm z_57 = NULL;
  ATerm a_58 = NULL;
  t = term_u_8;
  {
    t = i_79(t);
    {
      a_58 = t;
      if(((z_57 != NULL) && (z_57 != a_58)))
        _fail(a_58);
      else
        z_57 = a_58;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_13, term_b_13, not_null(z_57));
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
            ATerm a_14;
            a_14 = t;
            {
              t = not_null(h_58);
              t = a_0(t);
            }
            t = a_14;
            {
              ATerm m_58 = NULL;
              t = term_u_8;
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
  ATerm w_2 (ATerm t)
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
  ATerm x_2 (ATerm t)
  {
    t = term_c_14;
    {
      t = set_config_0(t);
      t = term_d_14;
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_e_14;
    return(t);
  }
  t = Option_3(t, w_2, x_2, y_2);
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
ATerm Cons_2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
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
            t = p_50(t);
            {
              o_59 = t;
              {
                t = not_null(i_59);
                {
                  ATerm s_59 = NULL;
                  t = q_50(t);
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
        ATerm f_14;
        f_14 = t;
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
        t = f_14;
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
        t = (ATerm) ATmakeAppl(sym__3, term_s_7, not_null(p_60), not_null(q_60));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm g_14;
  g_14 = t;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_14;
        t = g_79(t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        {
        }
      }
  }
  t = g_14;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm y_60 = NULL;
      ATerm r_14;
      r_14 = t;
      {
        ATerm w_60 = NULL;
        ATerm x_60 = NULL;
        x_60 = t;
        if(((w_60 != NULL) && (w_60 != x_60)))
          _fail(x_60);
        else
          w_60 = x_60;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(w_60));
          t = set_config_0(t);
        }
      }
      t = r_14;
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
    ATerm a_3 (ATerm t)
    {
      ATerm t_14 = t;
      int w_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              {
                t = g_79(t);
                t = Cons_2(t, _id, a_3);
              }
            }
          LocalPopChoice(w_14);
        }
      else
        {
          t = t_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_2, a_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
  ATerm z_14;
  z_14 = t;
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
  t = z_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm o_61 = NULL;
  ATerm a_15;
  a_15 = t;
  {
    t = term_b_15;
    t = table_put_0(t);
  }
  t = a_15;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_79(t);
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_3);
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_15;
          k_15 = t;
          {
            ATerm l_15 = t;
            int m_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_14;
                t = get_config_0(t);
                LocalPopChoice(m_15);
              }
            else
              {
                t = l_15;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_15;
          {
            t = system_usage_0(t);
            {
              t = term_e_9;
              t = exit_0(t);
            }
          }
          LocalPopChoice(f_15);
        }
      else
        {
          t = e_15;
          {
            ATerm q_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm p_61 = NULL;
                    p_61 = t;
                    if(((o_61 != NULL) && (o_61 != p_61)))
                      _fail(p_61);
                    else
                      o_61 = p_61;
                    return(t);
                  }
                  t = Undefined_1(t, d_3);
                  return(t);
                }
                t = fetch_1(t, c_3);
                {
                  ATerm e_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_61)), term_v_15);
                    return(t);
                  }
                  t = say_1(t, e_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_y_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_15);
              }
            else
              {
                t = q_15;
                {
                }
              }
          }
        }
      {
        ATerm w_15;
        w_15 = t;
        {
          t = term_a_13;
          t = table_destroy_0(t);
        }
        t = w_15;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm))
{
  t = parse_options_1(t, c_77);
  {
    t = store_options_0(t);
    {
      t = e_77(t);
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_77);
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm z_15 = t;
              int a_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_77(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_16);
                }
              else
                {
                  t = z_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_77(t);
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_77);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, f_3, v_77, w_77, g_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      ATerm d_16;
      d_16 = t;
      {
        ATerm s_61 = NULL;
        ATerm t_61 = NULL;
        t = term_o_11;
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
          t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, not_null(s_61)));
          t = printnl_0(t);
        }
      }
      t = d_16;
      return(t);
    }
    t = if_verbose2_1(t, i_3);
    return(t);
  }
  t = iowrap_4(t, n_77, o_77, p_77, h_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm))
{
  t = iowrap_3(t, l_77, m_77, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    t = _2(t, _id, i_77);
    return(t);
  }
  t = iowrap_2(t, j_3, _fail);
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

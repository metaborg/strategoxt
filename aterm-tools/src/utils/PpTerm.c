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
ATerm term_z_18;
ATerm term_o_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_k_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_q_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_m_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_u_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_q_4;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_k_4;
void init_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym_SOpt_2, term_k_4, term_m_4);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(sym_S_1, term_o_4);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_SOpt_2, term_r_4, term_m_4);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_S_1, term_u_4);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_S_1, term_f_5);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym_S_1, term_l_5);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("]", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_S_1, term_o_5);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("[]", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_S_1, term_q_5);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   {", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_S_1, term_n_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_S_1, term_p_6);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_e_5);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_s_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_e_5);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_e_5);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_i_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_e_5);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__3, term_h_16, term_i_16, (ATerm) ATempty);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm UP_App_1 (ATerm, ATerm t_87 (ATerm));
ATerm UP_Cnst_0 (ATerm);
ATerm hpost_sep_list_2 (ATerm, ATerm e_88 (ATerm), ATerm f_88 (ATerm));
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
ATerm _2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_68 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_81 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_79 (ATerm));
ATerm debug_1 (ATerm, ATerm s_78 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_75 (ATerm), ATerm y_75 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm crush_2 (ATerm, ATerm g_73 (ATerm), ATerm h_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_81 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_79 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_83 (ATerm));
ATerm map_1 (ATerm, ATerm u_67 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_83 (ATerm));
ATerm Program_1 (ATerm, ATerm n_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_78 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_68 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_52 (ATerm), ATerm i_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_83 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_83 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm u_80 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_80 (ATerm));
ATerm PpTerm_0 (ATerm);
ATerm main_0 (ATerm);
ATerm UP_App_1 (ATerm t, ATerm t_87 (ATerm))
{
  ATerm i_1 = NULL;
  ATerm u_1 = NULL,v_1 = NULL,e_2 = NULL;
  i_1 = t;
  {
    ATerm j_4;
    j_4 = t;
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
    t = j_4;
    {
      ATerm f_2 = NULL;
      t = not_null(v_1);
      {
        t = map_1(t, t_87);
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
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_n_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_n_4), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_4), (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_s_4), not_null(e_2))), term_q_4))), (ATerm) ATmakeAppl(sym_S_1, not_null(u_1))));
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
              if(((ATgetType(w_2) == AT_LIST) && ATisEmpty(w_2)))
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
ATerm hpost_sep_list_2 (ATerm t, ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm w_4 = t;
    int x_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_4);
      }
    else
      {
        t = w_4;
        {
          ATerm z_4 = t;
          int c_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, e_88, Nil_0);
              ;
              LocalPopChoice(c_5);
            }
          else
            {
              t = z_4;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm d_3 = NULL;
                  ATerm f_3 = NULL,h_3 = NULL;
                  d_3 = t;
                  {
                    ATerm d_5;
                    d_5 = t;
                    {
                      ATerm g_3 = NULL;
                      t = not_null(d_3);
                      {
                        t = e_88(t);
                        {
                          g_3 = t;
                          if(((f_3 != NULL) && (f_3 != g_3)))
                            _fail(g_3);
                          else
                            f_3 = g_3;
                        }
                      }
                    }
                    t = d_5;
                    {
                      ATerm i_3 = NULL;
                      t = term_e_5;
                      {
                        t = f_88(t);
                        {
                          i_3 = t;
                          if(((h_3 != NULL) && (h_3 != i_3)))
                            _fail(i_3);
                          else
                            h_3 = i_3;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_n_4), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_3)), not_null(f_3)));
                    }
                  }
                  return(t);
                }
                t = Cons_2(t, b_0, j_3);
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
  ATerm c_0 (ATerm t)
  {
    t = term_k_5;
    return(t);
  }
  t = hpost_sep_list_2(t, _id, c_0);
  return(t);
}
ATerm UP_Lst_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  t_3 = t;
  q_3 :
  if(((ATgetType(t_3) == AT_LIST) && !(ATisEmpty(t_3))))
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
        t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_n_4), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_5), (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_s_4), not_null(x_3))), term_m_5));
      }
    }
  else
    {
      if(((ATgetType(t_3) == AT_LIST) && ATisEmpty(t_3)))
        {
          t = term_r_5;
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
    t = (ATerm) ATinsert(ATempty, term_s_5);
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
    t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_n_4), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, not_null(g_4))), not_null(e_4)), (ATerm) ATmakeAppl(sym_S_1, not_null(g_4))));
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
    ATerm t_5;
    t_5 = t;
    {
      t = not_null(y_4);
      t = is_int_0(t);
    }
    t = t_5;
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
  ATerm u_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UP_Int_0(t);
      ;
      LocalPopChoice(z_5);
    }
  else
    {
      t = u_5;
      {
        ATerm a_6 = t;
        int b_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UP_Str_0(t);
            ;
            LocalPopChoice(b_6);
          }
        else
          {
            t = a_6;
            {
              ATerm f_6 = t;
              int h_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UP_Lst_1(t, ugly_print_0);
                  ;
                  LocalPopChoice(h_6);
                }
              else
                {
                  t = f_6;
                  {
                    ATerm k_6 = t;
                    int l_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = UP_Cnst_0(t);
                        ;
                        LocalPopChoice(l_6);
                      }
                    else
                      {
                        t = k_6;
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
  ATerm m_6;
  m_6 = t;
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
  t = m_6;
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
    t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_s_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_6), not_null(i_5)), term_o_6))), not_null(g_5)));
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
  ATerm v_6;
  v_6 = t;
  {
    t = get_annotations_0(t);
    {
      ATerm a_7 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_7;
        }
    }
  }
  t = v_6;
  return(t);
}
ATerm ugly_print_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_annotation_0(t);
      LocalPopChoice(c_7);
      t = ugly_print_with_anno_0(t);
    }
  else
    {
      t = b_7;
      t = ugly_print_without_anno_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
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
            t = y_50(t);
            {
              e_6 = t;
              {
                t = not_null(y_5);
                {
                  ATerm i_6 = NULL;
                  t = z_50(t);
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
  ATerm d_7;
  d_7 = t;
  {
    ATerm e_0 (ATerm t)
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
    t = option_defined_1(t, e_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_7), not_null(r_6)), term_g_7));
      {
        t = printnl_0(t);
        {
          t = term_m_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_7;
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
        ATerm n_7;
        n_7 = t;
        t = SSL_printnl(not_null(y_6), not_null(z_6));
        t = n_7;
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
  ATerm e_7 = NULL;
  e_7 = t;
  t = SSL_implode_string(not_null(e_7));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
        j_7 = t;
        i_7 :
        if(((ATgetType(j_7) == AT_LIST) && !(ATisEmpty(j_7))))
          {
            k_7 = ATgetFirst((ATermList) j_7);
            l_7 = (ATerm) ATgetNext((ATermList) j_7);
            {
              t = not_null(k_7);
              {
                ATerm f_0 (ATerm t)
                {
                  t = not_null(l_7);
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
  ATerm v_7 = NULL;
  ATerm x_7 = NULL;
  v_7 = t;
  {
    ATerm y_7 = NULL;
    ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
    t = not_null(v_7);
    {
      y_7 = t;
      {
        t = SSL_explode_term(not_null(y_7));
        {
          a_8 = t;
          t_7 :
          if(match_cons(a_8, sym__2))
            {
              b_8 = ATgetArgument(a_8, 0);
              c_8 = ATgetArgument(a_8, 1);
              u_7 :
              if(match_string(b_8, ""))
                {
                  if(((x_7 != NULL) && (x_7 != c_8)))
                    _fail(c_8);
                  else
                    x_7 = c_8;
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
      t = not_null(x_7);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm g_8 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_8);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        {
          t = Nil_0(t);
          t = j_68(t);
        }
      }
    return(t);
  }
  t = g_8(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym__2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        t = not_null(k_8);
        {
          ATerm n_0 (ATerm t)
          {
            t = not_null(l_8);
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
  ATerm s_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = s_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  t = SSL_explode_string(not_null(q_8));
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
  ATerm u_8 = NULL;
  u_8 = t;
  t = SSL_is_string(not_null(u_8));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_7 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = z_7;
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_0);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            {
              ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
              d_9 = t;
              c_9 :
              if(match_cons(d_9, sym_Path_1))
                {
                  e_9 = ATgetArgument(d_9, 0);
                  t = not_null(e_9);
                }
              else
                {
                  if(match_cons(d_9, sym_Var_1))
                    {
                      e_9 = ATgetArgument(d_9, 0);
                      {
                        t = not_null(e_9);
                        {
                          ATerm h_8 = t;
                          int m_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_8);
                            }
                          else
                            {
                              t = h_8;
                              {
                                ATerm p_0 (ATerm t)
                                {
                                  t = term_n_8;
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
                      if(match_cons(d_9, sym_Prefix_2))
                        {
                          e_9 = ATgetArgument(d_9, 0);
                          f_9 = ATgetArgument(d_9, 1);
                          {
                            ATerm k_9 = NULL,m_9 = NULL;
                            ATerm o_8;
                            o_8 = t;
                            {
                              ATerm l_9 = NULL;
                              t = not_null(e_9);
                              {
                                t = eval_config_0(t);
                                {
                                  l_9 = t;
                                  if(((k_9 != NULL) && (k_9 != l_9)))
                                    _fail(l_9);
                                  else
                                    k_9 = l_9;
                                }
                              }
                            }
                            t = o_8;
                            {
                              ATerm n_9 = NULL;
                              t = not_null(f_9);
                              {
                                t = eval_config_0(t);
                                {
                                  n_9 = t;
                                  if(((m_9 != NULL) && (m_9 != n_9)))
                                    _fail(n_9);
                                  else
                                    m_9 = n_9;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), not_null(m_9));
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
  ATerm v_9 = NULL;
  v_9 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(v_9));
    {
      t = table_get_0(t);
      {
        ATerm q_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_8;
            r_8 = t;
            {
              ATerm x_9 = NULL;
              ATerm y_9 = NULL;
              y_9 = t;
              if(((x_9 != NULL) && (x_9 != y_9)))
                _fail(y_9);
              else
                x_9 = y_9;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(v_9), not_null(x_9));
                t = table_put_0(t);
              }
            }
            t = r_8;
          }
          return(t);
        }
        t = try_1(t, q_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_81 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm s_8;
    s_8 = t;
    {
      ATerm c_10 = NULL;
      ATerm d_10 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          d_10 = t;
          if(((c_10 != NULL) && (c_10 != d_10)))
            _fail(d_10);
          else
            c_10 = d_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), term_v_8);
        t = geq_0(t);
      }
    }
    t = s_8;
    t = p_81(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      t = SSL_WriteToTextFile(not_null(i_10), not_null(j_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym__2))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      t = SSL_WriteToBinaryFile(not_null(q_10), not_null(r_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_10 = NULL;
  ATerm w_8;
  w_8 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 (ATerm t)
          {
            ATerm a_11 = NULL,b_11 = NULL;
            a_11 = t;
            w_10 :
            if(match_cons(a_11, sym_Output_1))
              {
                b_11 = ATgetArgument(a_11, 0);
                if(((z_10 != NULL) && (z_10 != b_11)))
                  _fail(b_11);
                else
                  z_10 = b_11;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_0);
          ;
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
          {
            ATerm c_11 = NULL;
            t = term_z_8;
            {
              c_11 = t;
              if(((z_10 != NULL) && (z_10 != c_11)))
                _fail(c_11);
              else
                z_10 = c_11;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_0, _id);
  }
  t = w_8;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(z_10);
        return(t);
      }
      t = split_2(t, v_0, _id);
      return(t);
    }
    t = _2(t, _id, u_0);
    {
      ATerm a_9 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              ATerm d_11 = NULL;
              d_11 = t;
              y_10 :
              if(!(match_cons(d_11, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_0);
            return(t);
          }
          t = _2(t, w_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(b_9);
        }
      else
        {
          t = a_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm j_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  ATerm g_9;
  g_9 = t;
  t = dtime_0(t);
  t = g_9;
  {
    t = w_79(t);
    {
      ATerm h_9;
      h_9 = t;
      {
        ATerm k_11 = NULL;
        t = dtime_0(t);
        {
          k_11 = t;
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
        }
      }
      t = h_9;
      {
        l_11 = t;
        i_11 :
        if(match_cons(l_11, sym__2))
          {
            m_11 = ATgetArgument(l_11, 0);
            n_11 = ATgetArgument(l_11, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_11)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_11))), not_null(n_11));
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
ATerm debug_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm i_9;
  i_9 = t;
  {
    ATerm u_11 = NULL,w_11 = NULL;
    ATerm j_9;
    j_9 = t;
    {
      ATerm v_11 = NULL;
      t = s_78(t);
      {
        v_11 = t;
        if(((u_11 != NULL) && (u_11 != v_11)))
          _fail(v_11);
        else
          u_11 = v_11;
      }
    }
    t = j_9;
    {
      ATerm x_11 = NULL;
      x_11 = t;
      if(((w_11 != NULL) && (w_11 != x_11)))
        _fail(x_11);
      else
        w_11 = x_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_11)), not_null(u_11)));
        t = printnl_0(t);
      }
    }
  }
  t = i_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_12 = NULL;
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = NULL;
      c_12 = t;
      {
        if(((b_12 != NULL) && (b_12 != c_12)))
          _fail(c_12);
        else
          b_12 = c_12;
        t = SSL_ReadFromFile(not_null(b_12));
      }
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm y_0 (ATerm t)
        {
          t = term_q_9;
          return(t);
        }
        t = debug_1(t, y_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_75 (ATerm), ATerm y_75 (ATerm))
{
  ATerm g_12 = NULL,i_12 = NULL;
  ATerm r_9;
  r_9 = t;
  {
    ATerm h_12 = NULL;
    t = x_75(t);
    {
      h_12 = t;
      if(((g_12 != NULL) && (g_12 != h_12)))
        _fail(h_12);
      else
        g_12 = h_12;
    }
  }
  t = r_9;
  {
    ATerm j_12 = NULL;
    t = y_75(t);
    {
      j_12 = t;
      if(((i_12 != NULL) && (i_12 != j_12)))
        _fail(j_12);
      else
        i_12 = j_12;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_12), not_null(i_12));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_12 = NULL;
  ATerm s_9;
  s_9 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          ATerm q_12 = NULL,r_12 = NULL;
          q_12 = t;
          n_12 :
          if(match_cons(q_12, sym_Input_1))
            {
              r_12 = ATgetArgument(q_12, 0);
              if(((p_12 != NULL) && (p_12 != r_12)))
                _fail(r_12);
              else
                p_12 = r_12;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_0);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        {
          ATerm s_12 = NULL;
          t = term_w_9;
          {
            s_12 = t;
            if(((p_12 != NULL) && (p_12 != s_12)))
              _fail(s_12);
            else
              p_12 = s_12;
          }
        }
      }
  }
  t = s_9;
  {
    ATerm a_1 (ATerm t)
    {
      t = not_null(p_12);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm w_12 = NULL;
    w_12 = t;
    v_12 :
    if(!(match_string(w_12, "-v")))
      {
        if(!(match_string(w_12, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_a_10;
    t = set_config_0(t);
    t = term_b_10;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_e_10;
    return(t);
  }
  t = Option_3(t, b_1, c_1, d_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm z_12 = NULL;
    z_12 = t;
    x_12 :
    if(!(match_string(z_12, "-k")))
      {
        if(!(match_string(z_12, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm a_13 = NULL;
      ATerm b_13 = NULL;
      t = string_to_int_0(t);
      {
        b_13 = t;
        if(((a_13 != NULL) && (a_13 != b_13)))
          _fail(b_13);
        else
          a_13 = b_13;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(a_13));
        t = set_config_0(t);
      }
    }
    t = f_10;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_l_10;
    return(t);
  }
  t = ArgOption_3(t, e_1, f_1, h_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_13 = NULL;
  e_13 = t;
  t = SSL_string_to_int(not_null(e_13));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm m_13 = NULL;
        m_13 = t;
        h_13 :
        if(!(match_string(m_13, "-S")))
          {
            if(!(match_string(m_13, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = term_t_10;
        t = set_config_0(t);
        t = term_u_10;
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_v_10;
        return(t);
      }
      t = Option_3(t, j_1, k_1, l_1);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm x_10 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_13 = NULL;
              n_13 = t;
              i_13 :
              if(!(match_string(n_13, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm q_13 = NULL;
              ATerm f_11;
              f_11 = t;
              {
                ATerm o_13 = NULL;
                ATerm p_13 = NULL;
                t = string_to_int_0(t);
                {
                  p_13 = t;
                  if(((o_13 != NULL) && (o_13 != p_13)))
                    _fail(p_13);
                  else
                    o_13 = p_13;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(o_13));
                  t = set_config_0(t);
                }
              }
              t = f_11;
              {
                ATerm r_13 = NULL;
                r_13 = t;
                if(((q_13 != NULL) && (q_13 != r_13)))
                  _fail(r_13);
                else
                  q_13 = r_13;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_13));
              }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = term_g_11;
              return(t);
            }
            t = ArgOption_3(t, m_1, n_1, o_1);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = x_10;
            {
              ATerm p_1 (ATerm t)
              {
                ATerm s_13 = NULL;
                s_13 = t;
                l_13 :
                if(!(match_string(s_13, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = term_o_11;
                t = set_config_0(t);
                t = term_p_11;
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                t = term_q_11;
                return(t);
              }
              t = Option_3(t, p_1, q_1, r_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm t_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = t_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm y_13 = NULL;
    y_13 = t;
    v_13 :
    if(!(match_string(y_13, "-o")))
      {
        if(!(match_string(y_13, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm b_14 = NULL;
    ATerm z_11;
    z_11 = t;
    {
      ATerm z_13 = NULL;
      ATerm a_14 = NULL;
      a_14 = t;
      if(((z_13 != NULL) && (z_13 != a_14)))
        _fail(a_14);
      else
        z_13 = a_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(z_13));
        t = set_config_0(t);
      }
    }
    t = z_11;
    {
      ATerm c_14 = NULL;
      c_14 = t;
      if(((b_14 != NULL) && (b_14 != c_14)))
        _fail(c_14);
      else
        b_14 = c_14;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_14));
    }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_d_12;
    return(t);
  }
  t = ArgOption_3(t, s_1, t_1, w_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm g_14 = NULL;
          g_14 = t;
          f_14 :
          if(!(match_string(g_14, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          t = term_l_12;
          t = set_config_0(t);
          t = term_m_12;
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = term_o_12;
          return(t);
        }
        t = Option_3(t, x_1, y_1, a_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  m_14 = t;
  k_14 :
  if(match_string(m_14, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(m_14) == AT_LIST) && !(ATisEmpty(m_14))))
        {
          n_14 = ATgetFirst((ATermList) m_14);
          o_14 = (ATerm) ATgetNext((ATermList) m_14);
          l_14 :
          if(((ATgetType(o_14) == AT_LIST) && !(ATisEmpty(o_14))))
            {
              p_14 = ATgetFirst((ATermList) o_14);
              q_14 = (ATerm) ATgetNext((ATermList) o_14);
              {
                ATerm u_14 = NULL;
                ATerm t_12;
                t_12 = t;
                {
                  t = not_null(n_14);
                  t = j_0(t);
                }
                t = t_12;
                {
                  ATerm v_14 = NULL;
                  t = not_null(p_14);
                  {
                    t = k_0(t);
                    {
                      v_14 = t;
                      if(((u_14 != NULL) && (u_14 != v_14)))
                        _fail(v_14);
                      else
                        u_14 = v_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_14)), not_null(u_14));
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
  ATerm g_2 (ATerm t)
  {
    ATerm c_15 = NULL;
    c_15 = t;
    z_14 :
    if(!(match_string(c_15, "-i")))
      {
        if(!(match_string(c_15, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm f_15 = NULL;
    ATerm u_12;
    u_12 = t;
    {
      ATerm d_15 = NULL;
      ATerm e_15 = NULL;
      e_15 = t;
      if(((d_15 != NULL) && (d_15 != e_15)))
        _fail(e_15);
      else
        d_15 = e_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(d_15));
        t = set_config_0(t);
      }
    }
    t = u_12;
    {
      ATerm g_15 = NULL;
      g_15 = t;
      if(((f_15 != NULL) && (f_15 != g_15)))
        _fail(g_15);
      else
        f_15 = g_15;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_15));
    }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_c_13;
    return(t);
  }
  t = ArgOption_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = d_13;
      {
        ATerm g_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = g_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_k_13));
  {
    t = printnl_0(t);
    {
      t = term_m_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  t = SSL_TicksToSeconds(not_null(k_15));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_15), not_null(r_15));
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = SSL_addr(not_null(q_15), not_null(r_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_74(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
        y_15 = t;
        x_15 :
        if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
          {
            z_15 = ATgetFirst((ATermList) y_15);
            a_16 = (ATerm) ATgetNext((ATermList) y_15);
            {
              ATerm d_16 = NULL;
              ATerm e_16 = NULL;
              t = not_null(a_16);
              {
                t = foldr_2(t, i_74, j_74);
                {
                  e_16 = t;
                  if(((d_16 != NULL) && (d_16 != e_16)))
                    _fail(e_16);
                  else
                    d_16 = e_16;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), not_null(d_16));
                t = j_74(t);
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
ATerm crush_2 (ATerm t, ATerm g_73 (ATerm), ATerm h_73 (ATerm))
{
  ATerm l_16 = NULL;
  ATerm n_16 = NULL;
  l_16 = t;
  {
    ATerm o_16 = NULL;
    ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
    t = not_null(l_16);
    {
      o_16 = t;
      {
        t = SSL_explode_term(not_null(o_16));
        {
          q_16 = t;
          k_16 :
          if(match_cons(q_16, sym__2))
            {
              r_16 = ATgetArgument(q_16, 0);
              s_16 = ATgetArgument(q_16, 1);
              if(((n_16 != NULL) && (n_16 != s_16)))
                _fail(s_16);
              else
                n_16 = s_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_16);
      t = foldr_2(t, g_73, h_73);
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
    ATerm j_2 (ATerm t)
    {
      t = term_s_10;
      return(t);
    }
    t = crush_2(t, j_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym__2))
    {
      z_16 = ATgetArgument(y_16, 0);
      a_17 = ATgetArgument(y_16, 1);
      {
        ATerm d_14;
        d_14 = t;
        {
          ATerm e_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_16), not_null(a_17));
              ;
              LocalPopChoice(h_14);
            }
          else
            {
              t = e_14;
              t = SSL_gtr(not_null(z_16), not_null(a_17));
            }
        }
        t = d_14;
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
  ATerm g_17 = NULL;
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
      h_17 = t;
      f_17 :
      if(match_cons(h_17, sym__2))
        {
          i_17 = ATgetArgument(h_17, 0);
          j_17 = ATgetArgument(h_17, 1);
          {
            if(((g_17 != NULL) && (g_17 != i_17)))
              _fail(i_17);
            else
              g_17 = i_17;
            if(((g_17 != NULL) && (g_17 != j_17)))
              _fail(j_17);
            else
              g_17 = j_17;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_81 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm r_14;
    r_14 = t;
    {
      ATerm m_17 = NULL;
      ATerm n_17 = NULL;
      t = term_t_8;
      {
        t = get_config_0(t);
        {
          n_17 = t;
          if(((m_17 != NULL) && (m_17 != n_17)))
            _fail(n_17);
          else
            m_17 = n_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), term_m_7);
        t = geq_0(t);
      }
    }
    t = r_14;
    t = o_81(t);
    return(t);
  }
  t = try_1(t, k_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm r_17 = NULL,t_17 = NULL;
    ATerm s_14;
    s_14 = t;
    {
      ATerm s_17 = NULL;
      t = run_time_0(t);
      {
        s_17 = t;
        if(((r_17 != NULL) && (r_17 != s_17)))
          _fail(s_17);
        else
          r_17 = s_17;
      }
    }
    t = s_14;
    {
      ATerm u_17 = NULL;
      t = term_t_14;
      {
        t = get_config_0(t);
        {
          u_17 = t;
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_14), not_null(r_17)), term_w_14), not_null(t_17)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, l_2);
  {
    t = term_s_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_Version_0))
    {
      ATerm d_18 = NULL,f_18 = NULL;
      ATerm y_14;
      y_14 = t;
      {
        ATerm e_18 = NULL;
        t = SSLgetAnnotations(not_null(b_18));
        {
          e_18 = t;
          if(((d_18 != NULL) && (d_18 != e_18)))
            _fail(e_18);
          else
            d_18 = e_18;
        }
      }
      t = y_14;
      {
        ATerm g_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_18));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        t = not_null(f_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_2);
  t = u_79(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  t = SSL_table_create(not_null(l_18));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  {
    ATerm j_15;
    j_15 = t;
    {
      t = term_l_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_15, term_m_15, not_null(p_18));
          t = table_put_0(t);
        }
      }
    }
    t = j_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  t = SSL_table_destroy(not_null(t_18));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  t = SSL_exit(not_null(x_18));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  a_19 :
  if(((ATgetType(b_19) == AT_LIST) && ATisEmpty(b_19)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
        {
          c_19 = ATgetFirst((ATermList) b_19);
          d_19 = (ATerm) ATgetNext((ATermList) b_19);
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
  ATerm n_15;
  n_15 = t;
  {
    ATerm g_19 = NULL;
    ATerm j_19 = NULL;
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        {
          ATerm h_19 = NULL;
          ATerm i_19 = NULL;
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
          t = (ATerm) ATinsert(ATempty, not_null(h_19));
        }
      }
    {
      j_19 = t;
      if(((g_19 != NULL) && (g_19 != j_19)))
        _fail(j_19);
      else
        g_19 = j_19;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(g_19));
      t = printnl_0(t);
    }
  }
  t = n_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_67 (ATerm))
{
  ATerm m_19 (ATerm t)
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = Cons_2(t, u_67, m_19);
      }
    return(t);
  }
  t = m_19(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  v_19 = t;
  s_19 :
  if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
    {
      t_19 = ATgetFirst((ATermList) v_19);
      u_19 = (ATerm) ATgetNext((ATermList) v_19);
      {
        ATerm y_19 = NULL;
        t = not_null(u_19);
        {
          ATerm w_15;
          w_15 = t;
          {
            ATerm z_19 = NULL,b_20 = NULL,d_20 = NULL;
            ATerm b_16;
            b_16 = t;
            {
              ATerm a_20 = NULL;
              t = i_0(t);
              {
                a_20 = t;
                if(((z_19 != NULL) && (z_19 != a_20)))
                  _fail(a_20);
                else
                  z_19 = a_20;
              }
            }
            t = b_16;
            {
              ATerm c_20 = NULL;
              t = not_null(t_19);
              {
                t = h_0(t);
                {
                  c_20 = t;
                  if(((b_20 != NULL) && (b_20 != c_20)))
                    _fail(c_20);
                  else
                    b_20 = c_20;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_19)), not_null(b_20));
                {
                  d_20 = t;
                  if(((y_19 != NULL) && (y_19 != d_20)))
                    _fail(d_20);
                  else
                    y_19 = d_20;
                }
              }
            }
          }
          t = w_15;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(y_19);
              return(t);
            }
            t = reverse_acc_2(t, h_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_19) == AT_LIST) && ATisEmpty(v_19)))
        {
          {
            t = term_e_5;
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
  ATerm t_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_57 (ATerm))
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Program_1))
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
            t = n_57(t);
            {
              u_20 = t;
              {
                ATerm x_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_20)), not_null(s_20));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm g_21 = NULL;
  ATerm c_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_21 = NULL;
      t = term_t_14;
      {
        t = get_config_0(t);
        {
          h_21 = t;
          if(((g_21 != NULL) && (g_21 != h_21)))
            _fail(h_21);
          else
            g_21 = h_21;
        }
      }
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = c_16;
      {
        ATerm x_2 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            ATerm i_21 = NULL;
            i_21 = t;
            if(((g_21 != NULL) && (g_21 != i_21)))
              _fail(i_21);
            else
              g_21 = i_21;
            return(t);
          }
          t = Program_1(t, y_2);
          return(t);
        }
        t = option_defined_1(t, x_2);
      }
    }
  {
    ATerm z_2 (ATerm t)
    {
      ATerm a_3 (ATerm t)
      {
        t = not_null(g_21);
        return(t);
      }
      t = short_description_1(t, a_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, z_2);
    {
      t = term_g_16;
      {
        t = echo_0(t);
        {
          t = term_j_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm j_21 = NULL;
                  ATerm k_21 = NULL;
                  k_21 = t;
                  if(((j_21 != NULL) && (j_21 != k_21)))
                    _fail(k_21);
                  else
                    j_21 = k_21;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_21)), term_m_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_3);
                {
                  ATerm c_3 (ATerm t)
                  {
                    ATerm l_21 = NULL;
                    ATerm m_21 = NULL;
                    ATerm e_3 (ATerm t)
                    {
                      t = not_null(g_21);
                      return(t);
                    }
                    t = long_description_1(t, e_3);
                    {
                      m_21 = t;
                      if(((l_21 != NULL) && (l_21 != m_21)))
                        _fail(m_21);
                      else
                        l_21 = m_21;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(l_21)), term_p_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_3);
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
  ATerm t_16;
  t_16 = t;
  {
    ATerm x_21 = NULL;
    ATerm y_21 = NULL;
    y_21 = t;
    if(((x_21 != NULL) && (x_21 != y_21)))
      _fail(y_21);
    else
      x_21 = y_21;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(x_21)));
      t = printnl_0(t);
    }
  }
  t = t_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm u_16;
  u_16 = t;
  {
    t = t_78(t);
    t = debug_0(t);
  }
  t = u_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_Undefined_1))
    {
      g_22 = ATgetArgument(f_22, 0);
      {
        ATerm m_22 = NULL,o_22 = NULL;
        ATerm n_22 = NULL;
        t = SSLgetAnnotations(not_null(f_22));
        {
          n_22 = t;
          if(((m_22 != NULL) && (m_22 != n_22)))
            _fail(n_22);
          else
            m_22 = n_22;
        }
        {
          t = not_null(g_22);
          {
            ATerm q_22 = NULL;
            t = o_57(t);
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
ATerm fetch_1 (ATerm t, ATerm d_68 (ATerm))
{
  ATerm w_22 (ATerm t)
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_68, _id);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        t = Cons_2(t, _id, w_22);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_82 (ATerm))
{
  t = fetch_1(t, r_82);
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
      ATerm b_17;
      b_17 = t;
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
      t = b_17;
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
ATerm try_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_59(t);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
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
        ATerm e_17;
        e_17 = t;
        {
          ATerm c_24 = NULL;
          ATerm d_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), not_null(x_23));
          {
            ATerm k_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_17);
              }
            else
              {
                t = k_17;
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
        t = e_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm h_24 = NULL;
  ATerm i_24 = NULL;
  t = term_e_5;
  {
    t = w_83(t);
    {
      i_24 = t;
      if(((h_24 != NULL) && (h_24 != i_24)))
        _fail(i_24);
      else
        h_24 = i_24;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_16, term_i_16, not_null(h_24));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
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
          q_24 = (ATerm) ATgetNext((ATermList) o_24);
          {
            ATerm t_24 = NULL;
            ATerm o_17;
            o_17 = t;
            {
              t = not_null(p_24);
              t = a_0(t);
            }
            t = o_17;
            {
              ATerm u_24 = NULL;
              t = term_e_5;
              {
                t = d_0(t);
                {
                  u_24 = t;
                  if(((t_24 != NULL) && (t_24 != u_24)))
                    _fail(u_24);
                  else
                    t_24 = u_24;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_24)), not_null(t_24));
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
  ATerm k_3 (ATerm t)
  {
    ATerm z_24 = NULL;
    z_24 = t;
    y_24 :
    if(!(match_string(z_24, "--help")))
      {
        if(!(match_string(z_24, "-h")))
          {
            if(!(match_string(z_24, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_q_17;
    {
      t = set_config_0(t);
      t = term_v_17;
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_w_17;
    return(t);
  }
  t = Option_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
    {
      d_25 = ATgetFirst((ATermList) c_25);
      e_25 = (ATerm) ATgetNext((ATermList) c_25);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_25)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_25)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_52 (ATerm), ATerm i_52 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  n_25 :
  if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
    {
      p_25 = ATgetFirst((ATermList) o_25);
      q_25 = (ATerm) ATgetNext((ATermList) o_25);
      {
        ATerm u_25 = NULL,w_25 = NULL;
        ATerm v_25 = NULL;
        t = SSLgetAnnotations(not_null(o_25));
        {
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
        }
        {
          t = not_null(p_25);
          {
            ATerm y_25 = NULL;
            t = h_52(t);
            {
              w_25 = t;
              {
                t = not_null(q_25);
                {
                  ATerm a_26 = NULL;
                  t = i_52(t);
                  {
                    y_25 = t;
                    {
                      ATerm b_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_25)), not_null(w_25)), not_null(u_25));
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
  ATerm l_26 = NULL;
  l_26 = t;
  k_26 :
  if(((ATgetType(l_26) == AT_LIST) && ATisEmpty(l_26)))
    {
      {
        ATerm n_26 = NULL,p_26 = NULL;
        ATerm x_17;
        x_17 = t;
        {
          ATerm o_26 = NULL;
          t = SSLgetAnnotations(not_null(l_26));
          {
            o_26 = t;
            if(((n_26 != NULL) && (n_26 != o_26)))
              _fail(o_26);
            else
              n_26 = o_26;
          }
        }
        t = x_17;
        {
          ATerm q_26 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_26));
          {
            q_26 = t;
            if(((p_26 != NULL) && (p_26 != q_26)))
              _fail(q_26);
            else
              p_26 = q_26;
          }
          t = not_null(p_26);
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
  ATerm w_26 = NULL,y_26 = NULL,z_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym__2))
    {
      y_26 = ATgetArgument(w_26, 0);
      z_26 = ATgetArgument(w_26, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(y_26), not_null(z_26));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_83 (ATerm))
{
  ATerm y_17;
  y_17 = t;
  {
    ATerm n_3 (ATerm t)
    {
      t = term_z_17;
      t = u_83(t);
      return(t);
    }
    t = try_1(t, n_3);
  }
  t = y_17;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm h_27 = NULL;
      ATerm c_18;
      c_18 = t;
      {
        ATerm f_27 = NULL;
        ATerm g_27 = NULL;
        g_27 = t;
        if(((f_27 != NULL) && (f_27 != g_27)))
          _fail(g_27);
        else
          f_27 = g_27;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_14, not_null(f_27));
          t = set_config_0(t);
        }
      }
      t = c_18;
      {
        ATerm i_27 = NULL;
        i_27 = t;
        if(((h_27 != NULL) && (h_27 != i_27)))
          _fail(i_27);
        else
          h_27 = i_27;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_27));
      }
      return(t);
    }
    ATerm p_3 (ATerm t)
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(k_18);
            }
          else
            {
              t = j_18;
              {
                t = u_83(t);
                t = Cons_2(t, _id, p_3);
              }
            }
          ;
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_3, p_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  ATerm m_18;
  m_18 = t;
  {
    ATerm r_27 = NULL,s_27 = NULL,v_27 = NULL,w_27 = NULL;
    r_27 = t;
    n_27 :
    if(match_cons(r_27, sym__3))
      {
        s_27 = ATgetArgument(r_27, 0);
        v_27 = ATgetArgument(r_27, 1);
        w_27 = ATgetArgument(r_27, 2);
        {
          if(((o_27 != NULL) && (o_27 != s_27)))
            _fail(s_27);
          else
            o_27 = s_27;
          {
            if(((p_27 != NULL) && (p_27 != v_27)))
              _fail(v_27);
            else
              p_27 = v_27;
            {
              if(((q_27 != NULL) && (q_27 != w_27)))
                _fail(w_27);
              else
                q_27 = w_27;
              t = SSL_table_put(not_null(o_27), not_null(p_27), not_null(q_27));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_83 (ATerm))
{
  ATerm z_27 = NULL;
  ATerm n_18;
  n_18 = t;
  {
    t = term_o_18;
    t = table_put_0(t);
  }
  t = n_18;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm q_18 = t;
      int r_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_83(t);
          ;
          LocalPopChoice(r_18);
        }
      else
        {
          t = q_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_3);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm s_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_18;
            v_18 = t;
            {
              ATerm w_18 = t;
              int y_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_p_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(y_18);
                }
              else
                {
                  t = w_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_18;
            {
              t = system_usage_0(t);
              {
                t = term_s_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = s_18;
            {
              ATerm w_3 (ATerm t)
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm a_28 = NULL;
                  a_28 = t;
                  if(((z_27 != NULL) && (z_27 != a_28)))
                    _fail(a_28);
                  else
                    z_27 = a_28;
                  return(t);
                }
                t = Undefined_1(t, z_3);
                return(t);
              }
              t = option_defined_1(t, w_3);
              {
                ATerm a_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_27)), term_z_18);
                  return(t);
                }
                t = say_1(t, a_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_3);
      {
        ATerm e_19;
        e_19 = t;
        {
          t = term_h_16;
          t = table_destroy_0(t);
        }
        t = e_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  t = parse_options_1(t, a_80);
  {
    t = store_options_0(t);
    {
      t = c_80(t);
      {
        ATerm f_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_80);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = f_19;
            {
              ATerm l_19 = t;
              int n_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_80(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_19);
                }
              else
                {
                  t = l_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_80(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_80);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_4, t_80, u_80, c_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm q_19;
      q_19 = t;
      {
        ATerm d_28 = NULL;
        ATerm e_28 = NULL;
        t = term_t_14;
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
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(d_28)));
          t = printnl_0(t);
        }
      }
      t = q_19;
      return(t);
    }
    t = if_verbose2_1(t, f_4);
    return(t);
  }
  t = iowrap_4(t, l_80, m_80, n_80, d_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  t = iowrap_3(t, j_80, k_80, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_80 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    t = _2(t, _id, g_80);
    return(t);
  }
  t = iowrap_2(t, i_4, _fail);
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

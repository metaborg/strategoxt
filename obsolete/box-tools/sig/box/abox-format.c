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
ATerm term_r_15;
ATerm term_e_15;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_b_14;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_f_9;
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
ATerm term_l_8;
ATerm term_c_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_r_6;
void init_constant_terms (void)
{
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
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
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_t_8);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_t_8);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_g_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_t_8);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__3, term_c_13, term_g_13, (ATerm) ATempty);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm L_2 (ATerm, ATerm w_50 (ATerm), ATerm x_50 (ATerm));
ATerm list_1 (ATerm, ATerm q_62 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm a_51 (ATerm), ATerm b_51 (ATerm));
ATerm REF_2 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm LBL_2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm R_2 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm));
ATerm AR_1 (ATerm, ATerm u_51 (ATerm));
ATerm AC_1 (ATerm, ATerm t_51 (ATerm));
ATerm AL_1 (ATerm, ATerm s_51 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm AOPTIONS_1 (ATerm, ATerm v_51 (ATerm));
ATerm A_3 (ATerm, ATerm n_51 (ATerm), ATerm o_51 (ATerm), ATerm p_51 (ATerm));
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
ATerm FFID_2 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm));
ATerm FNAT_2 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm k_51 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm l_51 (ATerm), ATerm m_51 (ATerm));
ATerm ALT_2 (ATerm, ATerm w_51 (ATerm), ATerm x_51 (ATerm));
ATerm HV_2 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm));
ATerm V_2 (ATerm, ATerm a_52 (ATerm), ATerm b_52 (ATerm));
ATerm H_2 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm));
ATerm S_1 (ATerm, ATerm s_50 (ATerm));
ATerm Box_0 (ATerm);
ATerm abox_format_0 (ATerm);
ATerm _2 (ATerm, ATerm h_49 (ATerm), ATerm i_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_63 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_75 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_76 (ATerm));
ATerm debug_1 (ATerm, ATerm b_58 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm));
ATerm crush_2 (ATerm, ATerm a_68 (ATerm), ATerm b_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_75 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_76 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_79 (ATerm));
ATerm map_1 (ATerm, ATerm o_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_79 (ATerm));
ATerm Program_1 (ATerm, ATerm o_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_58 (ATerm));
ATerm Undefined_1 (ATerm, ATerm p_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_62 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_61 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_50 (ATerm), ATerm r_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_79 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm g_77 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_77 (ATerm));
ATerm io_abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm L_2 (ATerm t, ATerm w_50 (ATerm), ATerm x_50 (ATerm))
{
  ATerm d_1 = NULL,t_3 = NULL,v_3 = NULL;
  d_1 = t;
  c_1 :
  if(match_cons(d_1, sym_L_2))
    {
      t_3 = ATgetArgument(d_1, 0);
      v_3 = ATgetArgument(d_1, 1);
      {
        ATerm f_4 = NULL,l_4 = NULL;
        ATerm h_4 = NULL;
        t = SSLgetAnnotations(not_null(d_1));
        {
          h_4 = t;
          if(((f_4 != NULL) && (f_4 != h_4)))
            _fail(h_4);
          else
            f_4 = h_4;
        }
        {
          t = not_null(t_3);
          {
            ATerm n_4 = NULL;
            t = w_50(t);
            {
              l_4 = t;
              {
                t = not_null(v_3);
                {
                  ATerm s_4 = NULL;
                  t = x_50(t);
                  {
                    n_4 = t;
                    {
                      ATerm t_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(l_4), not_null(n_4)), not_null(f_4));
                      {
                        t_4 = t;
                        if(((s_4 != NULL) && (s_4 != t_4)))
                          _fail(t_4);
                        else
                          s_4 = t_4;
                      }
                      t = not_null(s_4);
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
ATerm list_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm f_5 (ATerm t)
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
        t = Cons_2(t, q_62, f_5);
      }
    return(t);
  }
  t = f_5(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm q_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_IS_0))
    {
      ATerm v_5 = NULL,x_5 = NULL;
      ATerm o_3;
      o_3 = t;
      {
        ATerm w_5 = NULL;
        t = SSLgetAnnotations(not_null(q_5));
        {
          w_5 = t;
          if(((v_5 != NULL) && (v_5 != w_5)))
            _fail(w_5);
          else
            v_5 = w_5;
        }
      }
      t = o_3;
      {
        ATerm p_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(v_5));
        {
          p_8 = t;
          if(((x_5 != NULL) && (x_5 != p_8)))
            _fail(p_8);
          else
            x_5 = p_8;
        }
        t = not_null(x_5);
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
  ATerm u_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym_HS_0))
    {
      ATerm z_9 = NULL,b_10 = NULL;
      ATerm p_3;
      p_3 = t;
      {
        ATerm a_10 = NULL;
        t = SSLgetAnnotations(not_null(u_9));
        {
          a_10 = t;
          if(((z_9 != NULL) && (z_9 != a_10)))
            _fail(a_10);
          else
            z_9 = a_10;
        }
      }
      t = p_3;
      {
        ATerm c_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(z_9));
        {
          c_10 = t;
          if(((b_10 != NULL) && (b_10 != c_10)))
            _fail(c_10);
          else
            b_10 = c_10;
        }
        t = not_null(b_10);
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
  ATerm k_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_VS_0))
    {
      ATerm m_10 = NULL,o_10 = NULL;
      ATerm q_3;
      q_3 = t;
      {
        ATerm n_10 = NULL;
        t = SSLgetAnnotations(not_null(k_10));
        {
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
        }
      }
      t = q_3;
      {
        ATerm p_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(m_10));
        {
          p_10 = t;
          if(((o_10 != NULL) && (o_10 != p_10)))
            _fail(p_10);
          else
            o_10 = p_10;
        }
        t = not_null(o_10);
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
        ATerm u_3 = t;
        int w_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HS_0(t);
            LocalPopChoice(w_3);
          }
        else
          {
            t = u_3;
            t = IS_0(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  z_10 = t;
  y_10 :
  if(match_cons(z_10, sym_SOpt_2))
    {
      a_11 = ATgetArgument(z_10, 0);
      b_11 = ATgetArgument(z_10, 1);
      {
        ATerm f_11 = NULL,h_11 = NULL;
        ATerm g_11 = NULL;
        t = SSLgetAnnotations(not_null(z_10));
        {
          g_11 = t;
          if(((f_11 != NULL) && (f_11 != g_11)))
            _fail(g_11);
          else
            f_11 = g_11;
        }
        {
          t = not_null(a_11);
          {
            ATerm j_11 = NULL;
            t = e_52(t);
            {
              h_11 = t;
              {
                t = not_null(b_11);
                {
                  ATerm l_11 = NULL;
                  t = f_52(t);
                  {
                    j_11 = t;
                    {
                      ATerm m_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(h_11), not_null(j_11)), not_null(f_11));
                      {
                        m_11 = t;
                        if(((l_11 != NULL) && (l_11 != m_11)))
                          _fail(m_11);
                        else
                          l_11 = m_11;
                      }
                      t = not_null(l_11);
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
ATerm C_2 (ATerm t, ATerm a_51 (ATerm), ATerm b_51 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_C_2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        ATerm e_12 = NULL,g_12 = NULL;
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(y_11));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
        {
          t = not_null(z_11);
          {
            ATerm i_12 = NULL;
            t = a_51(t);
            {
              g_12 = t;
              {
                t = not_null(a_12);
                {
                  ATerm k_12 = NULL;
                  t = b_51(t);
                  {
                    i_12 = t;
                    {
                      ATerm l_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_C_2, not_null(g_12), not_null(i_12)), not_null(e_12));
                      {
                        l_12 = t;
                        if(((k_12 != NULL) && (k_12 != l_12)))
                          _fail(l_12);
                        else
                          k_12 = l_12;
                      }
                      t = not_null(k_12);
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
ATerm REF_2 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm))
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_REF_2))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      {
        ATerm d_13 = NULL,f_13 = NULL;
        ATerm e_13 = NULL;
        t = SSLgetAnnotations(not_null(x_12));
        {
          e_13 = t;
          if(((d_13 != NULL) && (d_13 != e_13)))
            _fail(e_13);
          else
            d_13 = e_13;
        }
        {
          t = not_null(y_12);
          {
            ATerm h_13 = NULL;
            t = e_51(t);
            {
              f_13 = t;
              {
                t = not_null(z_12);
                {
                  ATerm j_13 = NULL;
                  t = f_51(t);
                  {
                    h_13 = t;
                    {
                      ATerm k_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_REF_2, not_null(f_13), not_null(h_13)), not_null(d_13));
                      {
                        k_13 = t;
                        if(((j_13 != NULL) && (j_13 != k_13)))
                          _fail(k_13);
                        else
                          j_13 = k_13;
                      }
                      t = not_null(j_13);
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
ATerm LBL_2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym_LBL_2))
    {
      x_13 = ATgetArgument(w_13, 0);
      y_13 = ATgetArgument(w_13, 1);
      {
        ATerm c_14 = NULL,e_14 = NULL;
        ATerm d_14 = NULL;
        t = SSLgetAnnotations(not_null(w_13));
        {
          d_14 = t;
          if(((c_14 != NULL) && (c_14 != d_14)))
            _fail(d_14);
          else
            c_14 = d_14;
        }
        {
          t = not_null(x_13);
          {
            ATerm g_14 = NULL;
            t = c_51(t);
            {
              e_14 = t;
              {
                t = not_null(y_13);
                {
                  ATerm i_14 = NULL;
                  t = d_51(t);
                  {
                    g_14 = t;
                    {
                      ATerm j_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LBL_2, not_null(e_14), not_null(g_14)), not_null(c_14));
                      {
                        j_14 = t;
                        if(((i_14 != NULL) && (i_14 != j_14)))
                          _fail(j_14);
                        else
                          i_14 = j_14;
                      }
                      t = not_null(i_14);
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
ATerm R_2 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_R_2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      {
        ATerm b_15 = NULL,d_15 = NULL;
        ATerm c_15 = NULL;
        t = SSLgetAnnotations(not_null(v_14));
        {
          c_15 = t;
          if(((b_15 != NULL) && (b_15 != c_15)))
            _fail(c_15);
          else
            b_15 = c_15;
        }
        {
          t = not_null(w_14);
          {
            ATerm f_15 = NULL;
            t = q_51(t);
            {
              d_15 = t;
              {
                t = not_null(x_14);
                {
                  ATerm h_15 = NULL;
                  t = r_51(t);
                  {
                    f_15 = t;
                    {
                      ATerm i_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(d_15), not_null(f_15)), not_null(b_15));
                      {
                        i_15 = t;
                        if(((h_15 != NULL) && (h_15 != i_15)))
                          _fail(i_15);
                        else
                          h_15 = i_15;
                      }
                      t = not_null(h_15);
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
ATerm AR_1 (ATerm t, ATerm u_51 (ATerm))
{
  ATerm t_15 = NULL,u_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym_AR_1))
    {
      u_15 = ATgetArgument(t_15, 0);
      {
        ATerm x_15 = NULL,z_15 = NULL;
        ATerm y_15 = NULL;
        t = SSLgetAnnotations(not_null(t_15));
        {
          y_15 = t;
          if(((x_15 != NULL) && (x_15 != y_15)))
            _fail(y_15);
          else
            x_15 = y_15;
        }
        {
          t = not_null(u_15);
          {
            ATerm b_16 = NULL;
            t = u_51(t);
            {
              z_15 = t;
              {
                ATerm c_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(z_15)), not_null(x_15));
                {
                  c_16 = t;
                  if(((b_16 != NULL) && (b_16 != c_16)))
                    _fail(c_16);
                  else
                    b_16 = c_16;
                }
                t = not_null(b_16);
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
ATerm AC_1 (ATerm t, ATerm t_51 (ATerm))
{
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym_AC_1))
    {
      n_16 = ATgetArgument(m_16, 0);
      {
        ATerm q_16 = NULL,s_16 = NULL;
        ATerm r_16 = NULL;
        t = SSLgetAnnotations(not_null(m_16));
        {
          r_16 = t;
          if(((q_16 != NULL) && (q_16 != r_16)))
            _fail(r_16);
          else
            q_16 = r_16;
        }
        {
          t = not_null(n_16);
          {
            ATerm u_16 = NULL;
            t = t_51(t);
            {
              s_16 = t;
              {
                ATerm v_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(s_16)), not_null(q_16));
                {
                  v_16 = t;
                  if(((u_16 != NULL) && (u_16 != v_16)))
                    _fail(v_16);
                  else
                    u_16 = v_16;
                }
                t = not_null(u_16);
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
ATerm AL_1 (ATerm t, ATerm s_51 (ATerm))
{
  ATerm f_17 = NULL,g_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_AL_1))
    {
      g_17 = ATgetArgument(f_17, 0);
      {
        ATerm j_17 = NULL,l_17 = NULL;
        ATerm k_17 = NULL;
        t = SSLgetAnnotations(not_null(f_17));
        {
          k_17 = t;
          if(((j_17 != NULL) && (j_17 != k_17)))
            _fail(k_17);
          else
            j_17 = k_17;
        }
        {
          t = not_null(g_17);
          {
            ATerm n_17 = NULL;
            t = s_51(t);
            {
              l_17 = t;
              {
                ATerm o_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(l_17)), not_null(j_17));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm A_Option_0 (ATerm t)
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
      t = AL_1(t, b_0);
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
            ATerm c_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, c_0);
            LocalPopChoice(a_4);
          }
        else
          {
            t = z_3;
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
ATerm AOPTIONS_1 (ATerm t, ATerm v_51 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_AOPTIONS_1))
    {
      z_17 = ATgetArgument(y_17, 0);
      {
        ATerm c_18 = NULL,e_18 = NULL;
        ATerm d_18 = NULL;
        t = SSLgetAnnotations(not_null(y_17));
        {
          d_18 = t;
          if(((c_18 != NULL) && (c_18 != d_18)))
            _fail(d_18);
          else
            c_18 = d_18;
        }
        {
          t = not_null(z_17);
          {
            ATerm g_18 = NULL;
            t = v_51(t);
            {
              e_18 = t;
              {
                ATerm h_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AOPTIONS_1, not_null(e_18)), not_null(c_18));
                {
                  h_18 = t;
                  if(((g_18 != NULL) && (g_18 != h_18)))
                    _fail(h_18);
                  else
                    g_18 = h_18;
                }
                t = not_null(g_18);
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
ATerm A_3 (ATerm t, ATerm n_51 (ATerm), ATerm o_51 (ATerm), ATerm p_51 (ATerm))
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_A_3))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      w_18 = ATgetArgument(t_18, 2);
      {
        ATerm b_19 = NULL,d_19 = NULL;
        ATerm c_19 = NULL;
        t = SSLgetAnnotations(not_null(t_18));
        {
          c_19 = t;
          if(((b_19 != NULL) && (b_19 != c_19)))
            _fail(c_19);
          else
            b_19 = c_19;
        }
        {
          t = not_null(u_18);
          {
            ATerm f_19 = NULL;
            t = n_51(t);
            {
              d_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm h_19 = NULL;
                  t = o_51(t);
                  {
                    f_19 = t;
                    {
                      t = not_null(w_18);
                      {
                        ATerm j_19 = NULL;
                        t = p_51(t);
                        {
                          h_19 = t;
                          {
                            ATerm k_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, not_null(d_19), not_null(f_19), not_null(h_19)), not_null(b_19));
                            {
                              k_19 = t;
                              if(((j_19 != NULL) && (j_19 != k_19)))
                                _fail(k_19);
                              else
                                j_19 = k_19;
                            }
                            t = not_null(j_19);
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
  ATerm x_19 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym_MATH_0))
    {
      ATerm e_20 = NULL,g_20 = NULL;
      ATerm b_4;
      b_4 = t;
      {
        ATerm f_20 = NULL;
        t = SSLgetAnnotations(not_null(x_19));
        {
          f_20 = t;
          if(((e_20 != NULL) && (e_20 != f_20)))
            _fail(f_20);
          else
            e_20 = f_20;
        }
      }
      t = b_4;
      {
        ATerm h_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(e_20));
        {
          h_20 = t;
          if(((g_20 != NULL) && (g_20 != h_20)))
            _fail(h_20);
          else
            g_20 = h_20;
        }
        t = not_null(g_20);
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
  ATerm p_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_NUM_0))
    {
      ATerm r_20 = NULL,t_20 = NULL;
      ATerm c_4;
      c_4 = t;
      {
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(p_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
      }
      t = c_4;
      {
        ATerm u_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(r_20));
        {
          u_20 = t;
          if(((t_20 != NULL) && (t_20 != u_20)))
            _fail(u_20);
          else
            t_20 = u_20;
        }
        t = not_null(t_20);
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
  ATerm h_21 = NULL;
  h_21 = t;
  g_21 :
  if(match_cons(h_21, sym_VAR_0))
    {
      ATerm j_21 = NULL,l_21 = NULL;
      ATerm d_4;
      d_4 = t;
      {
        ATerm k_21 = NULL;
        t = SSLgetAnnotations(not_null(h_21));
        {
          k_21 = t;
          if(((j_21 != NULL) && (j_21 != k_21)))
            _fail(k_21);
          else
            j_21 = k_21;
        }
      }
      t = d_4;
      {
        ATerm m_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(j_21));
        {
          m_21 = t;
          if(((l_21 != NULL) && (l_21 != m_21)))
            _fail(m_21);
          else
            l_21 = m_21;
        }
        t = not_null(l_21);
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
  ATerm x_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym_KW_0))
    {
      ATerm z_21 = NULL,b_22 = NULL;
      ATerm e_4;
      e_4 = t;
      {
        ATerm a_22 = NULL;
        t = SSLgetAnnotations(not_null(x_21));
        {
          a_22 = t;
          if(((z_21 != NULL) && (z_21 != a_22)))
            _fail(a_22);
          else
            z_21 = a_22;
        }
      }
      t = e_4;
      {
        ATerm c_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(z_21));
        {
          c_22 = t;
          if(((b_22 != NULL) && (b_22 != c_22)))
            _fail(c_22);
          else
            b_22 = c_22;
        }
        t = not_null(b_22);
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
  ATerm k_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym_CL_0))
    {
      ATerm m_22 = NULL,o_22 = NULL;
      ATerm g_4;
      g_4 = t;
      {
        ATerm n_22 = NULL;
        t = SSLgetAnnotations(not_null(k_22));
        {
          n_22 = t;
          if(((m_22 != NULL) && (m_22 != n_22)))
            _fail(n_22);
          else
            m_22 = n_22;
        }
      }
      t = g_4;
      {
        ATerm p_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CL_0), not_null(m_22));
        {
          p_22 = t;
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
        }
        t = not_null(o_22);
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
  ATerm x_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_SZ_0))
    {
      ATerm z_22 = NULL,b_23 = NULL;
      ATerm i_4;
      i_4 = t;
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
      t = i_4;
      {
        ATerm c_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SZ_0), not_null(z_22));
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
ATerm SH_0 (ATerm t)
{
  ATerm k_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym_SH_0))
    {
      ATerm m_23 = NULL,o_23 = NULL;
      ATerm j_4;
      j_4 = t;
      {
        ATerm n_23 = NULL;
        t = SSLgetAnnotations(not_null(k_23));
        {
          n_23 = t;
          if(((m_23 != NULL) && (m_23 != n_23)))
            _fail(n_23);
          else
            m_23 = n_23;
        }
      }
      t = j_4;
      {
        ATerm p_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SH_0), not_null(m_23));
        {
          p_23 = t;
          if(((o_23 != NULL) && (o_23 != p_23)))
            _fail(p_23);
          else
            o_23 = p_23;
        }
        t = not_null(o_23);
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
  ATerm x_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_SE_0))
    {
      ATerm z_23 = NULL,b_24 = NULL;
      ATerm k_4;
      k_4 = t;
      {
        ATerm a_24 = NULL;
        t = SSLgetAnnotations(not_null(x_23));
        {
          a_24 = t;
          if(((z_23 != NULL) && (z_23 != a_24)))
            _fail(a_24);
          else
            z_23 = a_24;
        }
      }
      t = k_4;
      {
        ATerm c_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SE_0), not_null(z_23));
        {
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
        }
        t = not_null(b_24);
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
  ATerm k_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym_FM_0))
    {
      ATerm m_24 = NULL,o_24 = NULL;
      ATerm m_4;
      m_4 = t;
      {
        ATerm n_24 = NULL;
        t = SSLgetAnnotations(not_null(k_24));
        {
          n_24 = t;
          if(((m_24 != NULL) && (m_24 != n_24)))
            _fail(n_24);
          else
            m_24 = n_24;
        }
      }
      t = m_4;
      {
        ATerm p_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(m_24));
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
        t = not_null(o_24);
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
  ATerm x_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym_FN_0))
    {
      ATerm z_24 = NULL,b_25 = NULL;
      ATerm o_4;
      o_4 = t;
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
      t = o_4;
      {
        ATerm c_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FN_0), not_null(z_24));
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
ATerm Font_Param_0 (ATerm t)
{
  ATerm p_4 = t;
  int q_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FN_0(t);
      LocalPopChoice(q_4);
    }
  else
    {
      t = p_4;
      {
        ATerm r_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FM_0(t);
            LocalPopChoice(u_4);
          }
        else
          {
            t = r_4;
            {
              ATerm v_4 = t;
              int w_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SE_0(t);
                  LocalPopChoice(w_4);
                }
              else
                {
                  t = v_4;
                  {
                    ATerm x_4 = t;
                    int y_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SH_0(t);
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
                              t = SZ_0(t);
                              LocalPopChoice(a_5);
                            }
                          else
                            {
                              t = z_4;
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
ATerm FFID_2 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym_FFID_2))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      {
        ATerm s_25 = NULL,u_25 = NULL;
        ATerm t_25 = NULL;
        t = SSLgetAnnotations(not_null(m_25));
        {
          t_25 = t;
          if(((s_25 != NULL) && (s_25 != t_25)))
            _fail(t_25);
          else
            s_25 = t_25;
        }
        {
          t = not_null(n_25);
          {
            ATerm w_25 = NULL;
            t = i_51(t);
            {
              u_25 = t;
              {
                t = not_null(o_25);
                {
                  ATerm y_25 = NULL;
                  t = j_51(t);
                  {
                    w_25 = t;
                    {
                      ATerm z_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(u_25), not_null(w_25)), not_null(s_25));
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
ATerm FNAT_2 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm))
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym_FNAT_2))
    {
      n_26 = ATgetArgument(m_26, 0);
      o_26 = ATgetArgument(m_26, 1);
      {
        ATerm s_26 = NULL,u_26 = NULL;
        ATerm t_26 = NULL;
        t = SSLgetAnnotations(not_null(m_26));
        {
          t_26 = t;
          if(((s_26 != NULL) && (s_26 != t_26)))
            _fail(t_26);
          else
            s_26 = t_26;
        }
        {
          t = not_null(n_26);
          {
            ATerm w_26 = NULL;
            t = g_51(t);
            {
              u_26 = t;
              {
                t = not_null(o_26);
                {
                  ATerm y_26 = NULL;
                  t = h_51(t);
                  {
                    w_26 = t;
                    {
                      ATerm z_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FNAT_2, not_null(u_26), not_null(w_26)), not_null(s_26));
                      {
                        z_26 = t;
                        if(((y_26 != NULL) && (y_26 != z_26)))
                          _fail(z_26);
                        else
                          y_26 = z_26;
                      }
                      t = not_null(y_26);
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
  ATerm b_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FNAT_2(t, Font_Param_0, is_string_0);
      LocalPopChoice(c_5);
    }
  else
    {
      t = b_5;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym_F_1))
    {
      n_27 = ATgetArgument(m_27, 0);
      {
        ATerm q_27 = NULL,s_27 = NULL;
        ATerm r_27 = NULL;
        t = SSLgetAnnotations(not_null(m_27));
        {
          r_27 = t;
          if(((q_27 != NULL) && (q_27 != r_27)))
            _fail(r_27);
          else
            q_27 = r_27;
        }
        {
          t = not_null(n_27);
          {
            ATerm u_27 = NULL;
            t = k_51(t);
            {
              s_27 = t;
              {
                ATerm v_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_F_1, not_null(s_27)), not_null(q_27));
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
        ATerm g_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = KW_0(t);
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
                  t = VAR_0(t);
                  LocalPopChoice(j_5);
                }
              else
                {
                  t = i_5;
                  {
                    ATerm k_5 = t;
                    int l_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = NUM_0(t);
                        LocalPopChoice(l_5);
                      }
                    else
                      {
                        t = k_5;
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
ATerm FBOX_2 (ATerm t, ATerm l_51 (ATerm), ATerm m_51 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_FBOX_2))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      {
        ATerm m_28 = NULL,o_28 = NULL;
        ATerm n_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          n_28 = t;
          if(((m_28 != NULL) && (m_28 != n_28)))
            _fail(n_28);
          else
            m_28 = n_28;
        }
        {
          t = not_null(h_28);
          {
            ATerm q_28 = NULL;
            t = l_51(t);
            {
              o_28 = t;
              {
                t = not_null(i_28);
                {
                  ATerm s_28 = NULL;
                  t = m_51(t);
                  {
                    q_28 = t;
                    {
                      ATerm t_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FBOX_2, not_null(o_28), not_null(q_28)), not_null(m_28));
                      {
                        t_28 = t;
                        if(((s_28 != NULL) && (s_28 != t_28)))
                          _fail(t_28);
                        else
                          s_28 = t_28;
                      }
                      t = not_null(s_28);
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
ATerm ALT_2 (ATerm t, ATerm w_51 (ATerm), ATerm x_51 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_ALT_2))
    {
      g_29 = ATgetArgument(f_29, 0);
      h_29 = ATgetArgument(f_29, 1);
      {
        ATerm l_29 = NULL,n_29 = NULL;
        ATerm m_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          m_29 = t;
          if(((l_29 != NULL) && (l_29 != m_29)))
            _fail(m_29);
          else
            l_29 = m_29;
        }
        {
          t = not_null(g_29);
          {
            ATerm p_29 = NULL;
            t = w_51(t);
            {
              n_29 = t;
              {
                t = not_null(h_29);
                {
                  ATerm r_29 = NULL;
                  t = x_51(t);
                  {
                    p_29 = t;
                    {
                      ATerm s_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ALT_2, not_null(n_29), not_null(p_29)), not_null(l_29));
                      {
                        s_29 = t;
                        if(((r_29 != NULL) && (r_29 != s_29)))
                          _fail(s_29);
                        else
                          r_29 = s_29;
                      }
                      t = not_null(r_29);
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
ATerm HV_2 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm))
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym_HV_2))
    {
      f_30 = ATgetArgument(e_30, 0);
      g_30 = ATgetArgument(e_30, 1);
      {
        ATerm k_30 = NULL,m_30 = NULL;
        ATerm l_30 = NULL;
        t = SSLgetAnnotations(not_null(e_30));
        {
          l_30 = t;
          if(((k_30 != NULL) && (k_30 != l_30)))
            _fail(l_30);
          else
            k_30 = l_30;
        }
        {
          t = not_null(f_30);
          {
            ATerm o_30 = NULL;
            t = c_52(t);
            {
              m_30 = t;
              {
                t = not_null(g_30);
                {
                  ATerm q_30 = NULL;
                  t = d_52(t);
                  {
                    o_30 = t;
                    {
                      ATerm r_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HV_2, not_null(m_30), not_null(o_30)), not_null(k_30));
                      {
                        r_30 = t;
                        if(((q_30 != NULL) && (q_30 != r_30)))
                          _fail(r_30);
                        else
                          q_30 = r_30;
                      }
                      t = not_null(q_30);
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
ATerm V_2 (ATerm t, ATerm a_52 (ATerm), ATerm b_52 (ATerm))
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym_V_2))
    {
      e_31 = ATgetArgument(d_31, 0);
      f_31 = ATgetArgument(d_31, 1);
      {
        ATerm j_31 = NULL,l_31 = NULL;
        ATerm k_31 = NULL;
        t = SSLgetAnnotations(not_null(d_31));
        {
          k_31 = t;
          if(((j_31 != NULL) && (j_31 != k_31)))
            _fail(k_31);
          else
            j_31 = k_31;
        }
        {
          t = not_null(e_31);
          {
            ATerm n_31 = NULL;
            t = a_52(t);
            {
              l_31 = t;
              {
                t = not_null(f_31);
                {
                  ATerm p_31 = NULL;
                  t = b_52(t);
                  {
                    n_31 = t;
                    {
                      ATerm q_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, not_null(l_31), not_null(n_31)), not_null(j_31));
                      {
                        q_31 = t;
                        if(((p_31 != NULL) && (p_31 != q_31)))
                          _fail(q_31);
                        else
                          p_31 = q_31;
                      }
                      t = not_null(p_31);
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
ATerm H_2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_H_2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      {
        ATerm i_32 = NULL,k_32 = NULL;
        ATerm j_32 = NULL;
        t = SSLgetAnnotations(not_null(c_32));
        {
          j_32 = t;
          if(((i_32 != NULL) && (i_32 != j_32)))
            _fail(j_32);
          else
            i_32 = j_32;
        }
        {
          t = not_null(d_32);
          {
            ATerm m_32 = NULL;
            t = y_51(t);
            {
              k_32 = t;
              {
                t = not_null(e_32);
                {
                  ATerm o_32 = NULL;
                  t = z_51(t);
                  {
                    m_32 = t;
                    {
                      ATerm p_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(k_32), not_null(m_32)), not_null(i_32));
                      {
                        p_32 = t;
                        if(((o_32 != NULL) && (o_32 != p_32)))
                          _fail(p_32);
                        else
                          o_32 = p_32;
                      }
                      t = not_null(o_32);
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
ATerm S_1 (ATerm t, ATerm s_50 (ATerm))
{
  ATerm a_33 = NULL,b_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym_S_1))
    {
      b_33 = ATgetArgument(a_33, 0);
      {
        ATerm e_33 = NULL,j_33 = NULL;
        ATerm i_33 = NULL;
        t = SSLgetAnnotations(not_null(a_33));
        {
          i_33 = t;
          if(((e_33 != NULL) && (e_33 != i_33)))
            _fail(i_33);
          else
            e_33 = i_33;
        }
        {
          t = not_null(b_33);
          {
            ATerm l_33 = NULL;
            t = s_50(t);
            {
              j_33 = t;
              {
                ATerm m_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(j_33)), not_null(e_33));
                {
                  m_33 = t;
                  if(((l_33 != NULL) && (l_33 != m_33)))
                    _fail(m_33);
                  else
                    l_33 = m_33;
                }
                t = not_null(l_33);
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
  ATerm m_5 = t;
  int n_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1(t, is_string_0);
      LocalPopChoice(n_5);
    }
  else
    {
      t = m_5;
      {
        ATerm o_5 = t;
        int r_5 = stack_ptr;
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
            LocalPopChoice(r_5);
          }
        else
          {
            t = o_5;
            {
              ATerm s_5 = t;
              int t_5 = stack_ptr;
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
                  LocalPopChoice(t_5);
                }
              else
                {
                  t = s_5;
                  {
                    ATerm u_5 = t;
                    int y_5 = stack_ptr;
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
                        LocalPopChoice(y_5);
                      }
                    else
                      {
                        t = u_5;
                        {
                          ATerm z_5 = t;
                          int a_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ALT_2(t, Box_0, Box_0);
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
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
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
                                                ATerm w_0 (ATerm t)
                                                {
                                                  t = list_1(t, S_Option_0);
                                                  return(t);
                                                }
                                                ATerm x_0 (ATerm t)
                                                {
                                                  t = list_1(t, Box_0);
                                                  return(t);
                                                }
                                                t = R_2(t, w_0, x_0);
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
                                                      t = LBL_2(t, is_string_0, Box_0);
                                                      LocalPopChoice(i_6);
                                                    }
                                                  else
                                                    {
                                                      t = h_6;
                                                      {
                                                        ATerm j_6 = t;
                                                        int k_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = REF_2(t, is_string_0, Box_0);
                                                            LocalPopChoice(k_6);
                                                          }
                                                        else
                                                          {
                                                            t = j_6;
                                                            {
                                                              ATerm l_6 = t;
                                                              int m_6 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, S_Option_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm z_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, Box_0);
                                                                    return(t);
                                                                  }
                                                                  t = C_2(t, y_0, z_0);
                                                                  LocalPopChoice(m_6);
                                                                }
                                                              else
                                                                {
                                                                  t = l_6;
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
                                                                              t = Nil_0(t);
                                                                              LocalPopChoice(q_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_6;
                                                                              {
                                                                                ATerm a_1 (ATerm t)
                                                                                {
                                                                                  t = term_r_6;
                                                                                  return(t);
                                                                                }
                                                                                t = debug_1(t, a_1);
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
ATerm _2 (ATerm t, ATerm h_49 (ATerm), ATerm i_49 (ATerm))
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym__2))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      {
        ATerm d_34 = NULL,f_34 = NULL;
        ATerm e_34 = NULL;
        t = SSLgetAnnotations(not_null(x_33));
        {
          e_34 = t;
          if(((d_34 != NULL) && (d_34 != e_34)))
            _fail(e_34);
          else
            d_34 = e_34;
        }
        {
          t = not_null(y_33);
          {
            ATerm h_34 = NULL;
            t = h_49(t);
            {
              f_34 = t;
              {
                t = not_null(z_33);
                {
                  ATerm j_34 = NULL;
                  t = i_49(t);
                  {
                    h_34 = t;
                    {
                      ATerm k_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_34), not_null(h_34)), not_null(d_34));
                      {
                        k_34 = t;
                        if(((j_34 != NULL) && (j_34 != k_34)))
                          _fail(k_34);
                        else
                          j_34 = k_34;
                      }
                      t = not_null(j_34);
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
  ATerm t_34 = NULL;
  ATerm s_6;
  s_6 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm u_34 = NULL,v_34 = NULL;
      u_34 = t;
      s_34 :
      if(match_cons(u_34, sym_Program_1))
        {
          v_34 = ATgetArgument(u_34, 0);
          if(((t_34 != NULL) && (t_34 != v_34)))
            _fail(v_34);
          else
            t_34 = v_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, b_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_6), not_null(t_34)), term_u_6));
      {
        t = printnl_0(t);
        {
          t = term_w_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  a_35 :
  if(match_cons(b_35, sym__2))
    {
      c_35 = ATgetArgument(b_35, 0);
      d_35 = ATgetArgument(b_35, 1);
      {
        ATerm x_6;
        x_6 = t;
        t = SSL_printnl(not_null(c_35), not_null(d_35));
        t = x_6;
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
  ATerm i_35 = NULL;
  i_35 = t;
  t = SSL_implode_string(not_null(i_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
        n_35 = t;
        m_35 :
        if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
          {
            o_35 = ATgetFirst((ATermList) n_35);
            p_35 = (ATerm) ATgetNext((ATermList) n_35);
            {
              t = not_null(o_35);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(p_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_1);
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
  ATerm b_36 = NULL;
  ATerm e_36 = NULL;
  b_36 = t;
  {
    ATerm f_36 = NULL;
    ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
    t = not_null(b_36);
    {
      f_36 = t;
      {
        t = SSL_explode_term(not_null(f_36));
        {
          h_36 = t;
          z_35 :
          if(match_cons(h_36, sym__2))
            {
              i_36 = ATgetArgument(h_36, 0);
              j_36 = ATgetArgument(h_36, 1);
              a_36 :
              if(match_string(i_36, ""))
                {
                  if(((e_36 != NULL) && (e_36 != j_36)))
                    _fail(j_36);
                  else
                    e_36 = j_36;
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
      t = not_null(e_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_63 (ATerm))
{
  ATerm n_36 (ATerm t)
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_36);
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        {
          t = Nil_0(t);
          t = d_63(t);
        }
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_36 = NULL,u_36 = NULL,v_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym__2))
    {
      u_36 = ATgetArgument(q_36, 0);
      v_36 = ATgetArgument(q_36, 1);
      {
        t = not_null(u_36);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(v_36);
            return(t);
          }
          t = at_end_1(t, f_1);
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
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  t = SSL_explode_string(not_null(a_37));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
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
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_37 = NULL;
  e_37 = t;
  t = SSL_is_string(not_null(e_37));
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
            ATerm g_1 (ATerm t)
            {
              ATerm k_7 = t;
              int l_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(l_7);
                }
              else
                {
                  t = k_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, g_1);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
              n_37 = t;
              m_37 :
              if(match_cons(n_37, sym_Path_1))
                {
                  o_37 = ATgetArgument(n_37, 0);
                  t = not_null(o_37);
                }
              else
                {
                  if(match_cons(n_37, sym_Var_1))
                    {
                      o_37 = ATgetArgument(n_37, 0);
                      {
                        t = not_null(o_37);
                        {
                          ATerm m_7 = t;
                          int n_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_7);
                            }
                          else
                            {
                              t = m_7;
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = term_o_7;
                                  return(t);
                                }
                                t = debug_1(t, h_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(n_37, sym_Prefix_2))
                        {
                          o_37 = ATgetArgument(n_37, 0);
                          p_37 = ATgetArgument(n_37, 1);
                          {
                            ATerm u_37 = NULL,w_37 = NULL;
                            ATerm p_7;
                            p_7 = t;
                            {
                              ATerm v_37 = NULL;
                              t = not_null(o_37);
                              {
                                t = eval_config_0(t);
                                {
                                  v_37 = t;
                                  if(((u_37 != NULL) && (u_37 != v_37)))
                                    _fail(v_37);
                                  else
                                    u_37 = v_37;
                                }
                              }
                            }
                            t = p_7;
                            {
                              ATerm x_37 = NULL;
                              t = not_null(p_37);
                              {
                                t = eval_config_0(t);
                                {
                                  x_37 = t;
                                  if(((w_37 != NULL) && (w_37 != x_37)))
                                    _fail(x_37);
                                  else
                                    w_37 = x_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_37), not_null(w_37));
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
  ATerm m_38 = NULL;
  m_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_7, not_null(m_38));
    {
      t = table_get_0(t);
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm t_7;
              t_7 = t;
              {
                ATerm p_38 = NULL;
                ATerm q_38 = NULL;
                q_38 = t;
                if(((p_38 != NULL) && (p_38 != q_38)))
                  _fail(q_38);
                else
                  p_38 = q_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_7, not_null(m_38), not_null(p_38));
                  t = table_put_0(t);
                }
              }
              t = t_7;
            }
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7;
      w_7 = t;
      {
        ATerm u_38 = NULL;
        ATerm v_38 = NULL;
        t = term_x_7;
        {
          t = get_config_0(t);
          {
            v_38 = t;
            if(((u_38 != NULL) && (u_38 != v_38)))
              _fail(v_38);
            else
              u_38 = v_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_38), term_y_7);
          t = geq_0(t);
        }
      }
      t = w_7;
      t = i_75(t);
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  y_38 :
  if(match_cons(z_38, sym__2))
    {
      a_39 = ATgetArgument(z_38, 0);
      b_39 = ATgetArgument(z_38, 1);
      t = SSL_WriteToTextFile(not_null(a_39), not_null(b_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym__2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      t = SSL_WriteToBinaryFile(not_null(i_39), not_null(j_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_39 = NULL;
  ATerm z_7;
  z_7 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm a_8 = t;
      int b_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm s_39 = NULL,t_39 = NULL;
            s_39 = t;
            o_39 :
            if(match_cons(s_39, sym_Output_1))
              {
                t_39 = ATgetArgument(s_39, 0);
                if(((r_39 != NULL) && (r_39 != t_39)))
                  _fail(t_39);
                else
                  r_39 = t_39;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, j_1);
          LocalPopChoice(b_8);
        }
      else
        {
          t = a_8;
          {
            ATerm u_39 = NULL;
            t = term_c_8;
            {
              u_39 = t;
              if(((r_39 != NULL) && (r_39 != u_39)))
                _fail(u_39);
              else
                r_39 = u_39;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_1, _id);
  }
  t = z_7;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = not_null(r_39);
        return(t);
      }
      t = split_2(t, l_1, _id);
      return(t);
    }
    t = _2(t, _id, k_1);
    {
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm n_1 (ATerm t)
            {
              ATerm v_39 = NULL;
              v_39 = t;
              q_39 :
              if(!(match_cons(v_39, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, n_1);
            return(t);
          }
          t = _2(t, m_1, WriteToBinaryFile_0);
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_76 (ATerm))
{
  ATerm b_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  ATerm f_8;
  f_8 = t;
  t = dtime_0(t);
  t = f_8;
  {
    t = z_76(t);
    {
      ATerm g_8;
      g_8 = t;
      {
        ATerm c_40 = NULL;
        t = dtime_0(t);
        {
          c_40 = t;
          if(((b_40 != NULL) && (b_40 != c_40)))
            _fail(c_40);
          else
            b_40 = c_40;
        }
      }
      t = g_8;
      {
        d_40 = t;
        a_40 :
        if(match_cons(d_40, sym__2))
          {
            e_40 = ATgetArgument(d_40, 0);
            f_40 = ATgetArgument(d_40, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_40)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_40))), not_null(f_40));
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
ATerm debug_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm h_8;
  h_8 = t;
  {
    ATerm m_40 = NULL,o_40 = NULL;
    ATerm i_8;
    i_8 = t;
    {
      ATerm n_40 = NULL;
      t = b_58(t);
      {
        n_40 = t;
        if(((m_40 != NULL) && (m_40 != n_40)))
          _fail(n_40);
        else
          m_40 = n_40;
      }
    }
    t = i_8;
    {
      ATerm p_40 = NULL;
      p_40 = t;
      if(((o_40 != NULL) && (o_40 != p_40)))
        _fail(p_40);
      else
        o_40 = p_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_40)), not_null(m_40)));
        t = printnl_0(t);
      }
    }
  }
  t = h_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_40 = NULL;
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_40 = NULL;
      u_40 = t;
      {
        if(((t_40 != NULL) && (t_40 != u_40)))
          _fail(u_40);
        else
          t_40 = u_40;
        t = SSL_ReadFromFile(not_null(t_40));
      }
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm o_1 (ATerm t)
        {
          t = term_l_8;
          return(t);
        }
        t = debug_1(t, o_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm))
{
  ATerm y_40 = NULL,a_41 = NULL;
  ATerm m_8;
  m_8 = t;
  {
    ATerm z_40 = NULL;
    t = u_72(t);
    {
      z_40 = t;
      if(((y_40 != NULL) && (y_40 != z_40)))
        _fail(z_40);
      else
        y_40 = z_40;
    }
  }
  t = m_8;
  {
    ATerm b_41 = NULL;
    t = v_72(t);
    {
      b_41 = t;
      if(((a_41 != NULL) && (a_41 != b_41)))
        _fail(b_41);
      else
        a_41 = b_41;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_40), not_null(a_41));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_41 = NULL;
  ATerm n_8;
  n_8 = t;
  {
    ATerm o_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 (ATerm t)
        {
          ATerm i_41 = NULL,j_41 = NULL;
          i_41 = t;
          f_41 :
          if(match_cons(i_41, sym_Input_1))
            {
              j_41 = ATgetArgument(i_41, 0);
              if(((h_41 != NULL) && (h_41 != j_41)))
                _fail(j_41);
              else
                h_41 = j_41;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, p_1);
        LocalPopChoice(q_8);
      }
    else
      {
        t = o_8;
        {
          ATerm k_41 = NULL;
          t = term_r_8;
          {
            k_41 = t;
            if(((h_41 != NULL) && (h_41 != k_41)))
              _fail(k_41);
            else
              h_41 = k_41;
          }
        }
      }
  }
  t = n_8;
  {
    ATerm q_1 (ATerm t)
    {
      t = not_null(h_41);
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
    ATerm p_41 = NULL;
    p_41 = t;
    o_41 :
    if(!(match_string(p_41, "-v")))
      {
        if(!(match_string(p_41, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_u_8;
    t = set_config_0(t);
    t = term_v_8;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_w_8;
    return(t);
  }
  t = Option_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm s_41 = NULL;
    s_41 = t;
    q_41 :
    if(!(match_string(s_41, "-k")))
      {
        if(!(match_string(s_41, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm t_41 = NULL;
      ATerm u_41 = NULL;
      t = string_to_int_0(t);
      {
        u_41 = t;
        if(((t_41 != NULL) && (t_41 != u_41)))
          _fail(u_41);
        else
          t_41 = u_41;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(t_41));
        t = set_config_0(t);
      }
    }
    t = x_8;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_z_8;
    return(t);
  }
  t = ArgOption_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  t = SSL_string_to_int(not_null(x_41));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm f_42 = NULL;
        f_42 = t;
        a_42 :
        if(!(match_string(f_42, "-S")))
          {
            if(!(match_string(f_42, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_d_9;
        t = set_config_0(t);
        t = term_e_9;
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_f_9;
        return(t);
      }
      t = Option_3(t, x_1, y_1, z_1);
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm g_42 = NULL;
              g_42 = t;
              b_42 :
              if(!(match_string(g_42, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm j_42 = NULL;
              ATerm i_9;
              i_9 = t;
              {
                ATerm h_42 = NULL;
                ATerm i_42 = NULL;
                t = string_to_int_0(t);
                {
                  i_42 = t;
                  if(((h_42 != NULL) && (h_42 != i_42)))
                    _fail(i_42);
                  else
                    h_42 = i_42;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_7, not_null(h_42));
                  t = set_config_0(t);
                }
              }
              t = i_9;
              {
                ATerm k_42 = NULL;
                k_42 = t;
                if(((j_42 != NULL) && (j_42 != k_42)))
                  _fail(k_42);
                else
                  j_42 = k_42;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_42));
              }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_j_9;
              return(t);
            }
            t = ArgOption_3(t, a_2, b_2, c_2);
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm d_2 (ATerm t)
              {
                ATerm l_42 = NULL;
                l_42 = t;
                e_42 :
                if(!(match_string(l_42, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_2 (ATerm t)
              {
                t = term_l_9;
                t = set_config_0(t);
                t = term_m_9;
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = term_n_9;
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
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
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
    ATerm t_42 = NULL;
    t_42 = t;
    q_42 :
    if(!(match_string(t_42, "-o")))
      {
        if(!(match_string(t_42, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm w_42 = NULL;
    ATerm s_9;
    s_9 = t;
    {
      ATerm u_42 = NULL;
      ATerm v_42 = NULL;
      v_42 = t;
      if(((u_42 != NULL) && (u_42 != v_42)))
        _fail(v_42);
      else
        u_42 = v_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(u_42));
        t = set_config_0(t);
      }
    }
    t = s_9;
    {
      ATerm c_43 = NULL;
      c_43 = t;
      if(((w_42 != NULL) && (w_42 != c_43)))
        _fail(c_43);
      else
        w_42 = c_43;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_42));
    }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_w_9;
    return(t);
  }
  t = ArgOption_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm g_43 = NULL;
          g_43 = t;
          f_43 :
          if(!(match_string(g_43, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          t = term_e_10;
          t = set_config_0(t);
          t = term_f_10;
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          t = term_g_10;
          return(t);
        }
        t = Option_3(t, j_2, k_2, l_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  m_43 = t;
  k_43 :
  if(match_string(m_43, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
        {
          n_43 = ATgetFirst((ATermList) m_43);
          o_43 = (ATerm) ATgetNext((ATermList) m_43);
          l_43 :
          if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
            {
              p_43 = ATgetFirst((ATermList) o_43);
              q_43 = (ATerm) ATgetNext((ATermList) o_43);
              {
                ATerm g_44 = NULL;
                ATerm h_10;
                h_10 = t;
                {
                  t = not_null(n_43);
                  t = j_0(t);
                }
                t = h_10;
                {
                  ATerm h_44 = NULL;
                  t = not_null(p_43);
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_43)), not_null(g_44));
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
    ATerm s_44 = NULL;
    s_44 = t;
    l_44 :
    if(!(match_string(s_44, "-i")))
      {
        if(!(match_string(s_44, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm v_44 = NULL;
    ATerm i_10;
    i_10 = t;
    {
      ATerm t_44 = NULL;
      ATerm u_44 = NULL;
      u_44 = t;
      if(((t_44 != NULL) && (t_44 != u_44)))
        _fail(u_44);
      else
        t_44 = u_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(t_44));
        t = set_config_0(t);
      }
    }
    t = i_10;
    {
      ATerm w_44 = NULL;
      w_44 = t;
      if(((v_44 != NULL) && (v_44 != w_44)))
        _fail(w_44);
      else
        v_44 = w_44;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_44));
    }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_q_10;
    return(t);
  }
  t = ArgOption_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(u_10);
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
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATempty, term_v_10));
  {
    t = printnl_0(t);
    {
      t = term_w_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_45 = NULL;
  a_45 = t;
  t = SSL_TicksToSeconds(not_null(a_45));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym__2))
    {
      g_45 = ATgetArgument(f_45, 0);
      h_45 = ATgetArgument(f_45, 1);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_45), not_null(h_45));
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = SSL_addr(not_null(g_45), not_null(h_45));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm))
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_69(t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
        o_45 = t;
        n_45 :
        if(((ATgetType(o_45) == AT_LIST) && !(ATisEmpty(o_45))))
          {
            p_45 = ATgetFirst((ATermList) o_45);
            q_45 = (ATerm) ATgetNext((ATermList) o_45);
            {
              ATerm t_45 = NULL;
              ATerm u_45 = NULL;
              t = not_null(q_45);
              {
                t = foldr_2(t, c_69, d_69);
                {
                  u_45 = t;
                  if(((t_45 != NULL) && (t_45 != u_45)))
                    _fail(u_45);
                  else
                    t_45 = u_45;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_45), not_null(t_45));
                t = d_69(t);
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
ATerm crush_2 (ATerm t, ATerm a_68 (ATerm), ATerm b_68 (ATerm))
{
  ATerm b_46 = NULL;
  ATerm d_46 = NULL;
  b_46 = t;
  {
    ATerm e_46 = NULL;
    ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
    t = not_null(b_46);
    {
      e_46 = t;
      {
        t = SSL_explode_term(not_null(e_46));
        {
          g_46 = t;
          a_46 :
          if(match_cons(g_46, sym__2))
            {
              h_46 = ATgetArgument(g_46, 0);
              i_46 = ATgetArgument(g_46, 1);
              if(((d_46 != NULL) && (d_46 != i_46)))
                _fail(i_46);
              else
                d_46 = i_46;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_46);
      t = foldr_2(t, a_68, b_68);
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
      t = term_c_9;
      return(t);
    }
    t = crush_2(t, p_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym__2))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      {
        ATerm e_11;
        e_11 = t;
        {
          ATerm i_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_46), not_null(q_46));
              LocalPopChoice(k_11);
            }
          else
            {
              t = i_11;
              t = SSL_gtr(not_null(p_46), not_null(q_46));
            }
        }
        t = e_11;
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
  ATerm w_46 = NULL;
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
      x_46 = t;
      v_46 :
      if(match_cons(x_46, sym__2))
        {
          y_46 = ATgetArgument(x_46, 0);
          z_46 = ATgetArgument(x_46, 1);
          {
            if(((w_46 != NULL) && (w_46 != y_46)))
              _fail(y_46);
            else
              w_46 = y_46;
            if(((w_46 != NULL) && (w_46 != z_46)))
              _fail(z_46);
            else
              w_46 = z_46;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_11;
      r_11 = t;
      {
        ATerm c_47 = NULL;
        ATerm d_47 = NULL;
        t = term_x_7;
        {
          t = get_config_0(t);
          {
            d_47 = t;
            if(((c_47 != NULL) && (c_47 != d_47)))
              _fail(d_47);
            else
              c_47 = d_47;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_47), term_w_6);
          t = geq_0(t);
        }
      }
      t = r_11;
      t = h_75(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm h_47 = NULL,j_47 = NULL;
    ATerm s_11;
    s_11 = t;
    {
      ATerm i_47 = NULL;
      t = run_time_0(t);
      {
        i_47 = t;
        if(((h_47 != NULL) && (h_47 != i_47)))
          _fail(i_47);
        else
          h_47 = i_47;
      }
    }
    t = s_11;
    {
      ATerm k_47 = NULL;
      t = term_t_11;
      {
        t = get_config_0(t);
        {
          k_47 = t;
          if(((j_47 != NULL) && (j_47 != k_47)))
            _fail(k_47);
          else
            j_47 = k_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_11), not_null(h_47)), term_u_11), not_null(j_47)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_2);
  {
    t = term_c_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_47 = NULL;
  r_47 = t;
  q_47 :
  if(match_cons(r_47, sym_Version_0))
    {
      ATerm t_47 = NULL,v_47 = NULL;
      ATerm w_11;
      w_11 = t;
      {
        ATerm u_47 = NULL;
        t = SSLgetAnnotations(not_null(r_47));
        {
          u_47 = t;
          if(((t_47 != NULL) && (t_47 != u_47)))
            _fail(u_47);
          else
            t_47 = u_47;
        }
      }
      t = w_11;
      {
        ATerm w_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_47));
        {
          w_47 = t;
          if(((v_47 != NULL) && (v_47 != w_47)))
            _fail(w_47);
          else
            v_47 = w_47;
        }
        t = not_null(v_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        {
          ATerm d_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_12);
            }
          else
            {
              t = d_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, r_2);
  t = x_76(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  t = SSL_table_create(not_null(b_48));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  {
    ATerm j_12;
    j_12 = t;
    {
      t = term_m_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, not_null(f_48));
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
  ATerm j_48 = NULL;
  j_48 = t;
  t = SSL_table_destroy(not_null(j_48));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_48 = NULL;
  n_48 = t;
  t = SSL_exit(not_null(n_48));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
  r_48 = t;
  q_48 :
  if(((ATgetType(r_48) == AT_LIST) && ATisEmpty(r_48)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_48) == AT_LIST) && !(ATisEmpty(r_48))))
        {
          s_48 = ATgetFirst((ATermList) r_48);
          t_48 = (ATerm) ATgetNext((ATermList) r_48);
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
  ATerm o_12;
  o_12 = t;
  {
    ATerm w_48 = NULL;
    ATerm z_48 = NULL;
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm x_48 = NULL;
          ATerm y_48 = NULL;
          y_48 = t;
          if(((x_48 != NULL) && (x_48 != y_48)))
            _fail(y_48);
          else
            x_48 = y_48;
          t = (ATerm) ATinsert(ATempty, not_null(x_48));
        }
      }
    {
      z_48 = t;
      if(((w_48 != NULL) && (w_48 != z_48)))
        _fail(z_48);
      else
        w_48 = z_48;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, not_null(w_48));
      t = printnl_0(t);
    }
  }
  t = o_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm c_49 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = Cons_2(t, o_62, c_49);
      }
    return(t);
  }
  t = c_49(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  n_49 = t;
  k_49 :
  if(((ATgetType(n_49) == AT_LIST) && !(ATisEmpty(n_49))))
    {
      l_49 = ATgetFirst((ATermList) n_49);
      m_49 = (ATerm) ATgetNext((ATermList) n_49);
      {
        ATerm q_49 = NULL;
        t = not_null(m_49);
        {
          ATerm t_12;
          t_12 = t;
          {
            ATerm r_49 = NULL,t_49 = NULL,v_49 = NULL;
            ATerm u_12;
            u_12 = t;
            {
              ATerm s_49 = NULL;
              t = i_0(t);
              {
                s_49 = t;
                if(((r_49 != NULL) && (r_49 != s_49)))
                  _fail(s_49);
                else
                  r_49 = s_49;
              }
            }
            t = u_12;
            {
              ATerm u_49 = NULL;
              t = not_null(l_49);
              {
                t = h_0(t);
                {
                  u_49 = t;
                  if(((t_49 != NULL) && (t_49 != u_49)))
                    _fail(u_49);
                  else
                    t_49 = u_49;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_49)), not_null(t_49));
                {
                  v_49 = t;
                  if(((q_49 != NULL) && (q_49 != v_49)))
                    _fail(v_49);
                  else
                    q_49 = v_49;
                }
              }
            }
          }
          t = t_12;
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(q_49);
              return(t);
            }
            t = reverse_acc_2(t, h_0, s_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_49) == AT_LIST) && ATisEmpty(n_49)))
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
  ATerm t_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm g_50 = NULL,h_50 = NULL;
  g_50 = t;
  f_50 :
  if(match_cons(g_50, sym_Program_1))
    {
      h_50 = ATgetArgument(g_50, 0);
      {
        ATerm k_50 = NULL,m_50 = NULL;
        ATerm l_50 = NULL;
        t = SSLgetAnnotations(not_null(g_50));
        {
          l_50 = t;
          if(((k_50 != NULL) && (k_50 != l_50)))
            _fail(l_50);
          else
            k_50 = l_50;
        }
        {
          t = not_null(h_50);
          {
            ATerm o_50 = NULL;
            t = o_57(t);
            {
              m_50 = t;
              {
                ATerm p_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_50)), not_null(k_50));
                {
                  p_50 = t;
                  if(((o_50 != NULL) && (o_50 != p_50)))
                    _fail(p_50);
                  else
                    o_50 = p_50;
                }
                t = not_null(o_50);
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
  ATerm i_52 = NULL;
  ATerm v_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_52 = NULL;
      t = term_t_11;
      {
        t = get_config_0(t);
        {
          j_52 = t;
          if(((i_52 != NULL) && (i_52 != j_52)))
            _fail(j_52);
          else
            i_52 = j_52;
        }
      }
      LocalPopChoice(a_13);
    }
  else
    {
      t = v_12;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm v_2 (ATerm t)
          {
            ATerm k_52 = NULL;
            k_52 = t;
            if(((i_52 != NULL) && (i_52 != k_52)))
              _fail(k_52);
            else
              i_52 = k_52;
            return(t);
          }
          t = Program_1(t, v_2);
          return(t);
        }
        t = fetch_1(t, u_2);
      }
    }
  {
    t = term_b_13;
    {
      t = echo_0(t);
      {
        t = term_i_13;
        {
          t = table_get_0(t);
          {
            ATerm w_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, w_2);
            {
              ATerm x_2 (ATerm t)
              {
                ATerm l_52 = NULL;
                ATerm m_52 = NULL;
                m_52 = t;
                if(((l_52 != NULL) && (l_52 != m_52)))
                  _fail(m_52);
                else
                  l_52 = m_52;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_52)), term_l_13);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, x_2);
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
  ATerm m_13;
  m_13 = t;
  {
    ATerm r_52 = NULL;
    ATerm s_52 = NULL;
    s_52 = t;
    if(((r_52 != NULL) && (r_52 != s_52)))
      _fail(s_52);
    else
      r_52 = s_52;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATempty, not_null(r_52)));
      t = printnl_0(t);
    }
  }
  t = m_13;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm n_13;
  n_13 = t;
  {
    t = c_58(t);
    t = debug_0(t);
  }
  t = n_13;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_57 (ATerm))
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
            t = p_57(t);
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
ATerm fetch_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm n_53 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_62, _id);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = Cons_2(t, _id, n_53);
      }
    return(t);
  }
  t = n_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_78 (ATerm))
{
  t = fetch_1(t, e_78);
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
      ATerm q_13;
      q_13 = t;
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
      t = q_13;
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
ATerm try_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_61(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
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
        ATerm t_13;
        t_13 = t;
        {
          ATerm t_54 = NULL;
          ATerm u_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_54), not_null(o_54));
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
              u_54 = t;
              if(((t_54 != NULL) && (t_54 != u_54)))
                _fail(u_54);
              else
                t_54 = u_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_54), not_null(o_54), (ATerm) ATinsert(CheckATermList(not_null(t_54)), not_null(p_54)));
            t = table_put_0(t);
          }
        }
        t = t_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm y_54 = NULL;
  ATerm z_54 = NULL;
  t = term_t_8;
  {
    t = j_79(t);
    {
      z_54 = t;
      if(((y_54 != NULL) && (y_54 != z_54)))
        _fail(z_54);
      else
        y_54 = z_54;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_g_13, not_null(y_54));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  e_55 :
  if(match_string(f_55, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(f_55) == AT_LIST) && !(ATisEmpty(f_55))))
        {
          g_55 = ATgetFirst((ATermList) f_55);
          h_55 = (ATerm) ATgetNext((ATermList) f_55);
          {
            ATerm k_55 = NULL;
            ATerm a_14;
            a_14 = t;
            {
              t = not_null(g_55);
              t = a_0(t);
            }
            t = a_14;
            {
              ATerm l_55 = NULL;
              t = term_t_8;
              {
                t = d_0(t);
                {
                  l_55 = t;
                  if(((k_55 != NULL) && (k_55 != l_55)))
                    _fail(l_55);
                  else
                    k_55 = l_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_55)), not_null(k_55));
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
    ATerm q_55 = NULL;
    q_55 = t;
    p_55 :
    if(!(match_string(q_55, "--help")))
      {
        if(!(match_string(q_55, "-h")))
          {
            if(!(match_string(q_55, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_f_14;
    {
      t = set_config_0(t);
      t = term_h_14;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_k_14;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t_55 = t;
  s_55 :
  if(((ATgetType(t_55) == AT_LIST) && !(ATisEmpty(t_55))))
    {
      u_55 = ATgetFirst((ATermList) t_55);
      v_55 = (ATerm) ATgetNext((ATermList) t_55);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_55)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_50 (ATerm), ATerm r_50 (ATerm))
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  e_56 :
  if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
    {
      g_56 = ATgetFirst((ATermList) f_56);
      h_56 = (ATerm) ATgetNext((ATermList) f_56);
      {
        ATerm l_56 = NULL,n_56 = NULL;
        ATerm m_56 = NULL;
        t = SSLgetAnnotations(not_null(f_56));
        {
          m_56 = t;
          if(((l_56 != NULL) && (l_56 != m_56)))
            _fail(m_56);
          else
            l_56 = m_56;
        }
        {
          t = not_null(g_56);
          {
            ATerm p_56 = NULL;
            t = q_50(t);
            {
              n_56 = t;
              {
                t = not_null(h_56);
                {
                  ATerm r_56 = NULL;
                  t = r_50(t);
                  {
                    p_56 = t;
                    {
                      ATerm s_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_56)), not_null(n_56)), not_null(l_56));
                      {
                        s_56 = t;
                        if(((r_56 != NULL) && (r_56 != s_56)))
                          _fail(s_56);
                        else
                          r_56 = s_56;
                      }
                      t = not_null(r_56);
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
  ATerm c_57 = NULL;
  c_57 = t;
  b_57 :
  if(((ATgetType(c_57) == AT_LIST) && ATisEmpty(c_57)))
    {
      {
        ATerm e_57 = NULL,g_57 = NULL;
        ATerm l_14;
        l_14 = t;
        {
          ATerm f_57 = NULL;
          t = SSLgetAnnotations(not_null(c_57));
          {
            f_57 = t;
            if(((e_57 != NULL) && (e_57 != f_57)))
              _fail(f_57);
            else
              e_57 = f_57;
          }
        }
        t = l_14;
        {
          ATerm h_57 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_57));
          {
            h_57 = t;
            if(((g_57 != NULL) && (g_57 != h_57)))
              _fail(h_57);
            else
              g_57 = h_57;
          }
          t = not_null(g_57);
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
  ATerm n_57 = NULL,q_57 = NULL,r_57 = NULL;
  n_57 = t;
  m_57 :
  if(match_cons(n_57, sym__2))
    {
      q_57 = ATgetArgument(n_57, 0);
      r_57 = ATgetArgument(n_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_7, not_null(q_57), not_null(r_57));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm m_14;
  m_14 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_14;
        t = h_79(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
        }
      }
  }
  t = m_14;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm z_57 = NULL;
      ATerm q_14;
      q_14 = t;
      {
        ATerm x_57 = NULL;
        ATerm y_57 = NULL;
        y_57 = t;
        if(((x_57 != NULL) && (x_57 != y_57)))
          _fail(y_57);
        else
          x_57 = y_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_11, not_null(x_57));
          t = set_config_0(t);
        }
      }
      t = q_14;
      {
        ATerm a_58 = NULL;
        a_58 = t;
        if(((z_57 != NULL) && (z_57 != a_58)))
          _fail(a_58);
        else
          z_57 = a_58;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_57));
      }
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm r_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_14);
            }
          else
            {
              t = t_14;
              {
                t = h_79(t);
                t = Cons_2(t, _id, c_3);
              }
            }
          LocalPopChoice(s_14);
        }
      else
        {
          t = r_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_3, c_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  ATerm z_14;
  z_14 = t;
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
  t = z_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm r_58 = NULL;
  ATerm a_15;
  a_15 = t;
  {
    t = term_e_15;
    t = table_put_0(t);
  }
  t = a_15;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm g_15 = t;
      int j_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_79(t);
          LocalPopChoice(j_15);
        }
      else
        {
          t = g_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_3);
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_15;
          m_15 = t;
          {
            ATerm n_15 = t;
            int o_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_14;
                t = get_config_0(t);
                LocalPopChoice(o_15);
              }
            else
              {
                t = n_15;
                t = fetch_1(t, Help_0);
              }
          }
          t = m_15;
          {
            t = system_usage_0(t);
            {
              t = term_c_9;
              t = exit_0(t);
            }
          }
          LocalPopChoice(l_15);
        }
      else
        {
          t = k_15;
          {
            ATerm p_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm s_58 = NULL;
                    s_58 = t;
                    if(((r_58 != NULL) && (r_58 != s_58)))
                      _fail(s_58);
                    else
                      r_58 = s_58;
                    return(t);
                  }
                  t = Undefined_1(t, f_3);
                  return(t);
                }
                t = fetch_1(t, e_3);
                {
                  ATerm g_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_58)), term_r_15);
                    return(t);
                  }
                  t = say_1(t, g_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(q_15);
              }
            else
              {
                t = p_15;
                {
                }
              }
          }
        }
      {
        ATerm v_15;
        v_15 = t;
        {
          t = term_c_13;
          t = table_destroy_0(t);
        }
        t = v_15;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm g_77 (ATerm))
{
  t = parse_options_1(t, d_77);
  {
    t = store_options_0(t);
    {
      t = f_77(t);
      {
        ATerm w_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_77);
            LocalPopChoice(a_16);
          }
        else
          {
            t = w_15;
            {
              ATerm d_16 = t;
              int e_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_77(t);
                  t = report_success_0(t);
                  LocalPopChoice(e_16);
                }
              else
                {
                  t = d_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_77(t);
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, u_77);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, h_3, w_77, x_77, i_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      ATerm h_16;
      h_16 = t;
      {
        ATerm v_58 = NULL;
        ATerm w_58 = NULL;
        t = term_t_11;
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
          t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATempty, not_null(v_58)));
          t = printnl_0(t);
        }
      }
      t = h_16;
      return(t);
    }
    t = if_verbose2_1(t, k_3);
    return(t);
  }
  t = iowrap_4(t, o_77, p_77, q_77, j_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  t = iowrap_3(t, m_77, n_77, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    t = _2(t, _id, j_77);
    return(t);
  }
  t = iowrap_2(t, l_3, _fail);
  return(t);
}
ATerm io_abox_format_0 (ATerm t)
{
  t = iowrap_1(t, Box_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, Box_0);
  return(t);
}
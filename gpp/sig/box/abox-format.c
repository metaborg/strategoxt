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
ATerm L_2 (ATerm, ATerm a_51 (ATerm), ATerm b_51 (ATerm));
ATerm list_1 (ATerm, ATerm v_62 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm e_51 (ATerm), ATerm f_51 (ATerm));
ATerm REF_2 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm));
ATerm LBL_2 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm));
ATerm R_2 (ATerm, ATerm u_51 (ATerm), ATerm v_51 (ATerm));
ATerm AR_1 (ATerm, ATerm y_51 (ATerm));
ATerm AC_1 (ATerm, ATerm x_51 (ATerm));
ATerm AL_1 (ATerm, ATerm w_51 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm AOPTIONS_1 (ATerm, ATerm z_51 (ATerm));
ATerm A_3 (ATerm, ATerm r_51 (ATerm), ATerm s_51 (ATerm), ATerm t_51 (ATerm));
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
ATerm FFID_2 (ATerm, ATerm m_51 (ATerm), ATerm n_51 (ATerm));
ATerm FNAT_2 (ATerm, ATerm k_51 (ATerm), ATerm l_51 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm o_51 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm p_51 (ATerm), ATerm q_51 (ATerm));
ATerm ALT_2 (ATerm, ATerm a_52 (ATerm), ATerm b_52 (ATerm));
ATerm HV_2 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm V_2 (ATerm, ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm H_2 (ATerm, ATerm c_52 (ATerm), ATerm d_52 (ATerm));
ATerm S_1 (ATerm, ATerm w_50 (ATerm));
ATerm Box_0 (ATerm);
ATerm abox_format_0 (ATerm);
ATerm _2 (ATerm, ATerm l_49 (ATerm), ATerm m_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_63 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_75 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_77 (ATerm));
ATerm debug_1 (ATerm, ATerm f_58 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm));
ATerm crush_2 (ATerm, ATerm f_68 (ATerm), ATerm g_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_75 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_79 (ATerm));
ATerm map_1 (ATerm, ATerm t_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_79 (ATerm));
ATerm Program_1 (ATerm, ATerm s_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_58 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_61 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_79 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_77 (ATerm), ATerm t_77 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_77 (ATerm));
ATerm io_abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm L_2 (ATerm t, ATerm a_51 (ATerm), ATerm b_51 (ATerm))
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
            t = a_51(t);
            {
              b_4 = t;
              {
                t = not_null(d_1);
                {
                  ATerm l_4 = NULL;
                  t = b_51(t);
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
ATerm list_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm w_3 = t;
    int x_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_3);
      }
    else
      {
        t = w_3;
        t = Cons_2(t, v_62, y_4);
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
ATerm SOpt_2 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm))
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
            t = i_52(t);
            {
              d_11 = t;
              {
                t = not_null(x_10);
                {
                  ATerm h_11 = NULL;
                  t = j_52(t);
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
ATerm C_2 (ATerm t, ATerm e_51 (ATerm), ATerm f_51 (ATerm))
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
            t = e_51(t);
            {
              c_12 = t;
              {
                t = not_null(w_11);
                {
                  ATerm g_12 = NULL;
                  t = f_51(t);
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
ATerm REF_2 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm))
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
            t = i_51(t);
            {
              b_13 = t;
              {
                t = not_null(v_12);
                {
                  ATerm f_13 = NULL;
                  t = j_51(t);
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
ATerm LBL_2 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm))
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
            t = g_51(t);
            {
              a_14 = t;
              {
                t = not_null(u_13);
                {
                  ATerm e_14 = NULL;
                  t = h_51(t);
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
ATerm R_2 (ATerm t, ATerm u_51 (ATerm), ATerm v_51 (ATerm))
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
            t = u_51(t);
            {
              z_14 = t;
              {
                t = not_null(t_14);
                {
                  ATerm d_15 = NULL;
                  t = v_51(t);
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
ATerm AR_1 (ATerm t, ATerm y_51 (ATerm))
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
            t = y_51(t);
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
ATerm AC_1 (ATerm t, ATerm x_51 (ATerm))
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
            t = x_51(t);
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
ATerm AL_1 (ATerm t, ATerm w_51 (ATerm))
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
            t = w_51(t);
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
ATerm AOPTIONS_1 (ATerm t, ATerm z_51 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym_AOPTIONS_1))
    {
      v_17 = ATgetArgument(u_17, 0);
      {
        ATerm y_17 = NULL,a_18 = NULL;
        ATerm z_17 = NULL;
        t = SSLgetAnnotations(not_null(u_17));
        {
          z_17 = t;
          if(((y_17 != NULL) && (y_17 != z_17)))
            _fail(z_17);
          else
            y_17 = z_17;
        }
        {
          t = not_null(v_17);
          {
            ATerm c_18 = NULL;
            t = z_51(t);
            {
              a_18 = t;
              {
                ATerm d_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AOPTIONS_1, not_null(a_18)), not_null(y_17));
                {
                  d_18 = t;
                  if(((c_18 != NULL) && (c_18 != d_18)))
                    _fail(d_18);
                  else
                    c_18 = d_18;
                }
                t = not_null(c_18);
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
ATerm A_3 (ATerm t, ATerm r_51 (ATerm), ATerm s_51 (ATerm), ATerm t_51 (ATerm))
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym_A_3))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      s_18 = ATgetArgument(p_18, 2);
      {
        ATerm x_18 = NULL,z_18 = NULL;
        ATerm y_18 = NULL;
        t = SSLgetAnnotations(not_null(p_18));
        {
          y_18 = t;
          if(((x_18 != NULL) && (x_18 != y_18)))
            _fail(y_18);
          else
            x_18 = y_18;
        }
        {
          t = not_null(q_18);
          {
            ATerm b_19 = NULL;
            t = r_51(t);
            {
              z_18 = t;
              {
                t = not_null(r_18);
                {
                  ATerm d_19 = NULL;
                  t = s_51(t);
                  {
                    b_19 = t;
                    {
                      t = not_null(s_18);
                      {
                        ATerm f_19 = NULL;
                        t = t_51(t);
                        {
                          d_19 = t;
                          {
                            ATerm g_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_A_3, not_null(z_18), not_null(b_19), not_null(d_19)), not_null(x_18));
                            {
                              g_19 = t;
                              if(((f_19 != NULL) && (f_19 != g_19)))
                                _fail(g_19);
                              else
                                f_19 = g_19;
                            }
                            t = not_null(f_19);
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
  ATerm r_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_MATH_0))
    {
      ATerm t_19 = NULL,x_19 = NULL;
      ATerm p_4;
      p_4 = t;
      {
        ATerm w_19 = NULL;
        t = SSLgetAnnotations(not_null(r_19));
        {
          w_19 = t;
          if(((t_19 != NULL) && (t_19 != w_19)))
            _fail(w_19);
          else
            t_19 = w_19;
        }
      }
      t = p_4;
      {
        ATerm y_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(t_19));
        {
          y_19 = t;
          if(((x_19 != NULL) && (x_19 != y_19)))
            _fail(y_19);
          else
            x_19 = y_19;
        }
        t = not_null(x_19);
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
  ATerm l_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_NUM_0))
    {
      ATerm n_20 = NULL,p_20 = NULL;
      ATerm q_4;
      q_4 = t;
      {
        ATerm o_20 = NULL;
        t = SSLgetAnnotations(not_null(l_20));
        {
          o_20 = t;
          if(((n_20 != NULL) && (n_20 != o_20)))
            _fail(o_20);
          else
            n_20 = o_20;
        }
      }
      t = q_4;
      {
        ATerm q_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(n_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        t = not_null(p_20);
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
  ATerm y_20 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym_VAR_0))
    {
      ATerm f_21 = NULL,h_21 = NULL;
      ATerm r_4;
      r_4 = t;
      {
        ATerm g_21 = NULL;
        t = SSLgetAnnotations(not_null(y_20));
        {
          g_21 = t;
          if(((f_21 != NULL) && (f_21 != g_21)))
            _fail(g_21);
          else
            f_21 = g_21;
        }
      }
      t = r_4;
      {
        ATerm i_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(f_21));
        {
          i_21 = t;
          if(((h_21 != NULL) && (h_21 != i_21)))
            _fail(i_21);
          else
            h_21 = i_21;
        }
        t = not_null(h_21);
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
  ATerm q_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_KW_0))
    {
      ATerm v_21 = NULL,x_21 = NULL;
      ATerm s_4;
      s_4 = t;
      {
        ATerm w_21 = NULL;
        t = SSLgetAnnotations(not_null(q_21));
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
  ATerm g_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_FM_0))
    {
      ATerm i_24 = NULL,k_24 = NULL;
      ATerm x_4;
      x_4 = t;
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
      t = x_4;
      {
        ATerm l_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FM_0), not_null(i_24));
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
ATerm FN_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym_FN_0))
    {
      ATerm v_24 = NULL,x_24 = NULL;
      ATerm z_4;
      z_4 = t;
      {
        ATerm w_24 = NULL;
        t = SSLgetAnnotations(not_null(t_24));
        {
          w_24 = t;
          if(((v_24 != NULL) && (v_24 != w_24)))
            _fail(w_24);
          else
            v_24 = w_24;
        }
      }
      t = z_4;
      {
        ATerm y_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FN_0), not_null(v_24));
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
ATerm Font_Param_0 (ATerm t)
{
  ATerm a_5 = t;
  int b_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FN_0(t);
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
ATerm FFID_2 (ATerm t, ATerm m_51 (ATerm), ATerm n_51 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_FFID_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      {
        ATerm o_25 = NULL,q_25 = NULL;
        ATerm p_25 = NULL;
        t = SSLgetAnnotations(not_null(i_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
        {
          t = not_null(j_25);
          {
            ATerm s_25 = NULL;
            t = m_51(t);
            {
              q_25 = t;
              {
                t = not_null(k_25);
                {
                  ATerm u_25 = NULL;
                  t = n_51(t);
                  {
                    s_25 = t;
                    {
                      ATerm v_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FFID_2, not_null(q_25), not_null(s_25)), not_null(o_25));
                      {
                        v_25 = t;
                        if(((u_25 != NULL) && (u_25 != v_25)))
                          _fail(v_25);
                        else
                          u_25 = v_25;
                      }
                      t = not_null(u_25);
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
ATerm FNAT_2 (ATerm t, ATerm k_51 (ATerm), ATerm l_51 (ATerm))
{
  ATerm h_26 = NULL,j_26 = NULL,k_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_FNAT_2))
    {
      j_26 = ATgetArgument(h_26, 0);
      k_26 = ATgetArgument(h_26, 1);
      {
        ATerm o_26 = NULL,q_26 = NULL;
        ATerm p_26 = NULL;
        t = SSLgetAnnotations(not_null(h_26));
        {
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
        }
        {
          t = not_null(j_26);
          {
            ATerm s_26 = NULL;
            t = k_51(t);
            {
              q_26 = t;
              {
                t = not_null(k_26);
                {
                  ATerm u_26 = NULL;
                  t = l_51(t);
                  {
                    s_26 = t;
                    {
                      ATerm v_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FNAT_2, not_null(q_26), not_null(s_26)), not_null(o_26));
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
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm o_51 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_F_1))
    {
      h_27 = ATgetArgument(g_27, 0);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(h_27);
          {
            ATerm q_27 = NULL;
            t = o_51(t);
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
ATerm FBOX_2 (ATerm t, ATerm p_51 (ATerm), ATerm q_51 (ATerm))
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
            t = p_51(t);
            {
              k_28 = t;
              {
                t = not_null(e_28);
                {
                  ATerm o_28 = NULL;
                  t = q_51(t);
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
ATerm ALT_2 (ATerm t, ATerm a_52 (ATerm), ATerm b_52 (ATerm))
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
            t = a_52(t);
            {
              j_29 = t;
              {
                t = not_null(d_29);
                {
                  ATerm n_29 = NULL;
                  t = b_52(t);
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
ATerm HV_2 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm))
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
            t = g_52(t);
            {
              i_30 = t;
              {
                t = not_null(c_30);
                {
                  ATerm m_30 = NULL;
                  t = h_52(t);
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
ATerm V_2 (ATerm t, ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym_V_2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      {
        ATerm f_31 = NULL,h_31 = NULL;
        ATerm g_31 = NULL;
        t = SSLgetAnnotations(not_null(z_30));
        {
          g_31 = t;
          if(((f_31 != NULL) && (f_31 != g_31)))
            _fail(g_31);
          else
            f_31 = g_31;
        }
        {
          t = not_null(a_31);
          {
            ATerm j_31 = NULL;
            t = e_52(t);
            {
              h_31 = t;
              {
                t = not_null(b_31);
                {
                  ATerm l_31 = NULL;
                  t = f_52(t);
                  {
                    j_31 = t;
                    {
                      ATerm m_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_V_2, not_null(h_31), not_null(j_31)), not_null(f_31));
                      {
                        m_31 = t;
                        if(((l_31 != NULL) && (l_31 != m_31)))
                          _fail(m_31);
                        else
                          l_31 = m_31;
                      }
                      t = not_null(l_31);
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
ATerm H_2 (ATerm t, ATerm c_52 (ATerm), ATerm d_52 (ATerm))
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_H_2))
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
            t = c_52(t);
            {
              g_32 = t;
              {
                t = not_null(a_32);
                {
                  ATerm k_32 = NULL;
                  t = d_52(t);
                  {
                    i_32 = t;
                    {
                      ATerm l_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(g_32), not_null(i_32)), not_null(e_32));
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
ATerm S_1 (ATerm t, ATerm w_50 (ATerm))
{
  ATerm w_32 = NULL,x_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_S_1))
    {
      x_32 = ATgetArgument(w_32, 0);
      {
        ATerm a_33 = NULL,c_33 = NULL;
        ATerm b_33 = NULL;
        t = SSLgetAnnotations(not_null(w_32));
        {
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
        }
        {
          t = not_null(x_32);
          {
            ATerm e_33 = NULL;
            t = w_50(t);
            {
              c_33 = t;
              {
                ATerm f_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(c_33)), not_null(a_33));
                {
                  f_33 = t;
                  if(((e_33 != NULL) && (e_33 != f_33)))
                    _fail(f_33);
                  else
                    e_33 = f_33;
                }
                t = not_null(e_33);
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
ATerm _2 (ATerm t, ATerm l_49 (ATerm), ATerm m_49 (ATerm))
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym__2))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      {
        ATerm z_33 = NULL,b_34 = NULL;
        ATerm a_34 = NULL;
        t = SSLgetAnnotations(not_null(t_33));
        {
          a_34 = t;
          if(((z_33 != NULL) && (z_33 != a_34)))
            _fail(a_34);
          else
            z_33 = a_34;
        }
        {
          t = not_null(u_33);
          {
            ATerm d_34 = NULL;
            t = l_49(t);
            {
              b_34 = t;
              {
                t = not_null(v_33);
                {
                  ATerm f_34 = NULL;
                  t = m_49(t);
                  {
                    d_34 = t;
                    {
                      ATerm g_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_34), not_null(d_34)), not_null(z_33));
                      {
                        g_34 = t;
                        if(((f_34 != NULL) && (f_34 != g_34)))
                          _fail(g_34);
                        else
                          f_34 = g_34;
                      }
                      t = not_null(f_34);
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
  ATerm o_34 = NULL;
  ATerm b_7;
  b_7 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm p_34 = NULL,q_34 = NULL;
      p_34 = t;
      n_34 :
      if(match_cons(p_34, sym_Program_1))
        {
          q_34 = ATgetArgument(p_34, 0);
          if(((o_34 != NULL) && (o_34 != q_34)))
            _fail(q_34);
          else
            o_34 = q_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(o_34)), term_d_7));
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
  ATerm u_34 = NULL,w_34 = NULL,x_34 = NULL;
  u_34 = t;
  t_34 :
  if(match_cons(u_34, sym__2))
    {
      w_34 = ATgetArgument(u_34, 0);
      x_34 = ATgetArgument(u_34, 1);
      {
        ATerm g_7;
        g_7 = t;
        t = SSL_printnl(not_null(w_34), not_null(x_34));
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
  ATerm e_35 = NULL;
  e_35 = t;
  t = SSL_implode_string(not_null(e_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
        j_35 = t;
        i_35 :
        if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
          {
            k_35 = ATgetFirst((ATermList) j_35);
            l_35 = (ATerm) ATgetNext((ATermList) j_35);
            {
              t = not_null(k_35);
              {
                ATerm g_1 (ATerm t)
                {
                  t = not_null(l_35);
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
  ATerm v_35 = NULL;
  ATerm x_35 = NULL;
  v_35 = t;
  {
    ATerm y_35 = NULL;
    ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
    t = not_null(v_35);
    {
      y_35 = t;
      {
        t = SSL_explode_term(not_null(y_35));
        {
          c_36 = t;
          t_35 :
          if(match_cons(c_36, sym__2))
            {
              d_36 = ATgetArgument(c_36, 0);
              e_36 = ATgetArgument(c_36, 1);
              u_35 :
              if(match_string(d_36, ""))
                {
                  if(((x_35 != NULL) && (x_35 != e_36)))
                    _fail(e_36);
                  else
                    x_35 = e_36;
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
      t = not_null(x_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm j_36 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_36);
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        {
          t = Nil_0(t);
          t = i_63(t);
        }
      }
    return(t);
  }
  t = j_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        t = not_null(n_36);
        {
          ATerm h_1 (ATerm t)
          {
            t = not_null(o_36);
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
  ATerm t_36 = NULL;
  t_36 = t;
  t = SSL_explode_string(not_null(t_36));
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
  ATerm a_37 = NULL;
  a_37 = t;
  t = SSL_is_string(not_null(a_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
              j_37 = t;
              i_37 :
              if(match_cons(j_37, sym_Path_1))
                {
                  k_37 = ATgetArgument(j_37, 0);
                  t = not_null(k_37);
                }
              else
                {
                  if(match_cons(j_37, sym_Var_1))
                    {
                      k_37 = ATgetArgument(j_37, 0);
                      {
                        t = not_null(k_37);
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
                      if(match_cons(j_37, sym_Prefix_2))
                        {
                          k_37 = ATgetArgument(j_37, 0);
                          l_37 = ATgetArgument(j_37, 1);
                          {
                            ATerm q_37 = NULL,s_37 = NULL;
                            ATerm u_7;
                            u_7 = t;
                            {
                              ATerm r_37 = NULL;
                              t = not_null(k_37);
                              {
                                t = eval_config_0(t);
                                {
                                  r_37 = t;
                                  if(((q_37 != NULL) && (q_37 != r_37)))
                                    _fail(r_37);
                                  else
                                    q_37 = r_37;
                                }
                              }
                            }
                            t = u_7;
                            {
                              ATerm t_37 = NULL;
                              t = not_null(l_37);
                              {
                                t = eval_config_0(t);
                                {
                                  t_37 = t;
                                  if(((s_37 != NULL) && (s_37 != t_37)))
                                    _fail(t_37);
                                  else
                                    s_37 = t_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_37), not_null(s_37));
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
  ATerm b_38 = NULL;
  b_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(b_38));
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
              ATerm d_38 = NULL;
              ATerm e_38 = NULL;
              e_38 = t;
              if(((d_38 != NULL) && (d_38 != e_38)))
                _fail(e_38);
              else
                d_38 = e_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(b_38), not_null(d_38));
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
ATerm if_verbose2_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm x_7;
    x_7 = t;
    {
      ATerm p_38 = NULL;
      ATerm q_38 = NULL;
      t = term_y_7;
      {
        t = get_config_0(t);
        {
          q_38 = t;
          if(((p_38 != NULL) && (p_38 != q_38)))
            _fail(q_38);
          else
            p_38 = q_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_38), term_z_7);
        t = geq_0(t);
      }
    }
    t = x_7;
    t = o_75(t);
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
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym__2))
    {
      e_39 = ATgetArgument(d_39, 0);
      f_39 = ATgetArgument(d_39, 1);
      t = SSL_WriteToBinaryFile(not_null(e_39), not_null(f_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_39 = NULL;
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
            ATerm o_39 = NULL,p_39 = NULL;
            o_39 = t;
            k_39 :
            if(match_cons(o_39, sym_Output_1))
              {
                p_39 = ATgetArgument(o_39, 0);
                if(((n_39 != NULL) && (n_39 != p_39)))
                  _fail(p_39);
                else
                  n_39 = p_39;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_1);
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
          {
            ATerm q_39 = NULL;
            t = term_d_8;
            {
              q_39 = t;
              if(((n_39 != NULL) && (n_39 != q_39)))
                _fail(q_39);
              else
                n_39 = q_39;
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
        t = not_null(n_39);
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
              ATerm r_39 = NULL;
              r_39 = t;
              m_39 :
              if(!(match_cons(r_39, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, r_1);
            return(t);
          }
          t = _2(t, q_1, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm x_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  ATerm g_8;
  g_8 = t;
  t = dtime_0(t);
  t = g_8;
  {
    t = f_77(t);
    {
      ATerm h_8;
      h_8 = t;
      {
        ATerm y_39 = NULL;
        t = dtime_0(t);
        {
          y_39 = t;
          if(((x_39 != NULL) && (x_39 != y_39)))
            _fail(y_39);
          else
            x_39 = y_39;
        }
      }
      t = h_8;
      {
        z_39 = t;
        w_39 :
        if(match_cons(z_39, sym__2))
          {
            a_40 = ATgetArgument(z_39, 0);
            b_40 = ATgetArgument(z_39, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_40)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_39))), not_null(b_40));
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
ATerm debug_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm i_8;
  i_8 = t;
  {
    ATerm i_40 = NULL,k_40 = NULL;
    ATerm j_8;
    j_8 = t;
    {
      ATerm j_40 = NULL;
      t = f_58(t);
      {
        j_40 = t;
        if(((i_40 != NULL) && (i_40 != j_40)))
          _fail(j_40);
        else
          i_40 = j_40;
      }
    }
    t = j_8;
    {
      ATerm l_40 = NULL;
      l_40 = t;
      if(((k_40 != NULL) && (k_40 != l_40)))
        _fail(l_40);
      else
        k_40 = l_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_40)), not_null(i_40)));
        t = printnl_0(t);
      }
    }
  }
  t = i_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_40 = NULL;
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_40 = NULL;
      q_40 = t;
      {
        if(((p_40 != NULL) && (p_40 != q_40)))
          _fail(q_40);
        else
          p_40 = q_40;
        t = SSL_ReadFromFile(not_null(p_40));
      }
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
ATerm split_2 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm u_40 = NULL,w_40 = NULL;
  ATerm n_8;
  n_8 = t;
  {
    ATerm v_40 = NULL;
    t = a_73(t);
    {
      v_40 = t;
      if(((u_40 != NULL) && (u_40 != v_40)))
        _fail(v_40);
      else
        u_40 = v_40;
    }
  }
  t = n_8;
  {
    ATerm x_40 = NULL;
    t = b_73(t);
    {
      x_40 = t;
      if(((w_40 != NULL) && (w_40 != x_40)))
        _fail(x_40);
      else
        w_40 = x_40;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_40), not_null(w_40));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_41 = NULL;
  ATerm o_8;
  o_8 = t;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 (ATerm t)
        {
          ATerm e_41 = NULL,f_41 = NULL;
          e_41 = t;
          b_41 :
          if(match_cons(e_41, sym_Input_1))
            {
              f_41 = ATgetArgument(e_41, 0);
              if(((d_41 != NULL) && (d_41 != f_41)))
                _fail(f_41);
              else
                d_41 = f_41;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_1);
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm g_41 = NULL;
          t = term_r_8;
          {
            g_41 = t;
            if(((d_41 != NULL) && (d_41 != g_41)))
              _fail(g_41);
            else
              d_41 = g_41;
          }
        }
      }
  }
  t = o_8;
  {
    ATerm u_1 (ATerm t)
    {
      t = not_null(d_41);
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
    ATerm k_41 = NULL;
    k_41 = t;
    j_41 :
    if(!(match_string(k_41, "-v")))
      {
        if(!(match_string(k_41, "--version")))
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
    ATerm n_41 = NULL;
    n_41 = t;
    l_41 :
    if(!(match_string(n_41, "-k")))
      {
        if(!(match_string(n_41, "--keep")))
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
      ATerm o_41 = NULL;
      ATerm p_41 = NULL;
      t = string_to_int_0(t);
      {
        p_41 = t;
        if(((o_41 != NULL) && (o_41 != p_41)))
          _fail(p_41);
        else
          o_41 = p_41;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(o_41));
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
  ATerm t_41 = NULL;
  t_41 = t;
  t = SSL_string_to_int(not_null(t_41));
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
        ATerm b_42 = NULL;
        b_42 = t;
        w_41 :
        if(!(match_string(b_42, "-S")))
          {
            if(!(match_string(b_42, "--silent")))
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
              ATerm c_42 = NULL;
              c_42 = t;
              x_41 :
              if(!(match_string(c_42, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm f_42 = NULL;
              ATerm k_9;
              k_9 = t;
              {
                ATerm d_42 = NULL;
                ATerm e_42 = NULL;
                t = string_to_int_0(t);
                {
                  e_42 = t;
                  if(((d_42 != NULL) && (d_42 != e_42)))
                    _fail(e_42);
                  else
                    d_42 = e_42;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(d_42));
                  t = set_config_0(t);
                }
              }
              t = k_9;
              {
                ATerm g_42 = NULL;
                g_42 = t;
                if(((f_42 != NULL) && (f_42 != g_42)))
                  _fail(g_42);
                else
                  f_42 = g_42;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_42));
              }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = term_l_9;
              return(t);
            }
            t = ArgOption_3(t, e_2, f_2, g_2);
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            {
              ATerm h_2 (ATerm t)
              {
                ATerm h_42 = NULL;
                h_42 = t;
                a_42 :
                if(!(match_string(h_42, "-s")))
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
    ATerm n_42 = NULL;
    n_42 = t;
    k_42 :
    if(!(match_string(n_42, "-o")))
      {
        if(!(match_string(n_42, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm q_42 = NULL;
    ATerm x_9;
    x_9 = t;
    {
      ATerm o_42 = NULL;
      ATerm p_42 = NULL;
      p_42 = t;
      if(((o_42 != NULL) && (o_42 != p_42)))
        _fail(p_42);
      else
        o_42 = p_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(o_42));
        t = set_config_0(t);
      }
    }
    t = x_9;
    {
      ATerm r_42 = NULL;
      r_42 = t;
      if(((q_42 != NULL) && (q_42 != r_42)))
        _fail(r_42);
      else
        q_42 = r_42;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_42));
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
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm x_42 = NULL;
          x_42 = t;
          w_42 :
          if(!(match_string(x_42, "-b")))
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
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL;
  i_43 = t;
  g_43 :
  if(match_string(i_43, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_43) == AT_LIST) && !(ATisEmpty(i_43))))
        {
          j_43 = ATgetFirst((ATermList) i_43);
          k_43 = (ATerm) ATgetNext((ATermList) i_43);
          h_43 :
          if(((ATgetType(k_43) == AT_LIST) && !(ATisEmpty(k_43))))
            {
              l_43 = ATgetFirst((ATermList) k_43);
              m_43 = (ATerm) ATgetNext((ATermList) k_43);
              {
                ATerm q_43 = NULL;
                ATerm n_10;
                n_10 = t;
                {
                  t = not_null(j_43);
                  t = j_0(t);
                }
                t = n_10;
                {
                  ATerm r_43 = NULL;
                  t = not_null(l_43);
                  {
                    t = k_0(t);
                    {
                      r_43 = t;
                      if(((q_43 != NULL) && (q_43 != r_43)))
                        _fail(r_43);
                      else
                        q_43 = r_43;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_43)), not_null(q_43));
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
    ATerm k_44 = NULL;
    k_44 = t;
    c_44 :
    if(!(match_string(k_44, "-i")))
      {
        if(!(match_string(k_44, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm n_44 = NULL;
    ATerm o_10;
    o_10 = t;
    {
      ATerm l_44 = NULL;
      ATerm m_44 = NULL;
      m_44 = t;
      if(((l_44 != NULL) && (l_44 != m_44)))
        _fail(m_44);
      else
        l_44 = m_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_10, not_null(l_44));
        t = set_config_0(t);
      }
    }
    t = o_10;
    {
      ATerm o_44 = NULL;
      o_44 = t;
      if(((n_44 != NULL) && (n_44 != o_44)))
        _fail(o_44);
      else
        n_44 = o_44;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_44));
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
ATerm foldr_2 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm))
{
  ATerm g_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_69(t);
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
                t = foldr_2(t, h_69, i_69);
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
                t = i_69(t);
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
ATerm crush_2 (ATerm t, ATerm f_68 (ATerm), ATerm g_68 (ATerm))
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
      t = foldr_2(t, f_68, g_68);
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
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm p_11;
    p_11 = t;
    {
      ATerm y_46 = NULL;
      ATerm z_46 = NULL;
      t = term_y_7;
      {
        t = get_config_0(t);
        {
          z_46 = t;
          if(((y_46 != NULL) && (y_46 != z_46)))
            _fail(z_46);
          else
            y_46 = z_46;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_46), term_f_7);
        t = geq_0(t);
      }
    }
    t = p_11;
    t = n_75(t);
    return(t);
  }
  t = try_1(t, u_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm d_47 = NULL,f_47 = NULL;
    ATerm q_11;
    q_11 = t;
    {
      ATerm e_47 = NULL;
      t = run_time_0(t);
      {
        e_47 = t;
        if(((d_47 != NULL) && (d_47 != e_47)))
          _fail(e_47);
        else
          d_47 = e_47;
      }
    }
    t = q_11;
    {
      ATerm g_47 = NULL;
      t = term_r_11;
      {
        t = get_config_0(t);
        {
          g_47 = t;
          if(((f_47 != NULL) && (f_47 != g_47)))
            _fail(g_47);
          else
            f_47 = g_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_11), not_null(d_47)), term_s_11), not_null(f_47)));
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
  ATerm n_47 = NULL;
  n_47 = t;
  m_47 :
  if(match_cons(n_47, sym_Version_0))
    {
      ATerm p_47 = NULL,r_47 = NULL;
      ATerm y_11;
      y_11 = t;
      {
        ATerm q_47 = NULL;
        t = SSLgetAnnotations(not_null(n_47));
        {
          q_47 = t;
          if(((p_47 != NULL) && (p_47 != q_47)))
            _fail(q_47);
          else
            p_47 = q_47;
        }
      }
      t = y_11;
      {
        ATerm s_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_47));
        {
          s_47 = t;
          if(((r_47 != NULL) && (r_47 != s_47)))
            _fail(s_47);
          else
            r_47 = s_47;
        }
        t = not_null(r_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm z_11 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
  t = d_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  t = SSL_table_create(not_null(x_47));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  {
    ATerm j_12;
    j_12 = t;
    {
      t = term_k_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_12, term_l_12, not_null(b_48));
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
  ATerm f_48 = NULL;
  f_48 = t;
  t = SSL_table_destroy(not_null(f_48));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = SSL_exit(not_null(j_48));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  n_48 = t;
  m_48 :
  if(((ATgetType(n_48) == AT_LIST) && ATisEmpty(n_48)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_48) == AT_LIST) && !(ATisEmpty(n_48))))
        {
          o_48 = ATgetFirst((ATermList) n_48);
          p_48 = (ATerm) ATgetNext((ATermList) n_48);
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
    ATerm s_48 = NULL;
    ATerm v_48 = NULL;
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        {
          ATerm t_48 = NULL;
          ATerm u_48 = NULL;
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
          t = (ATerm) ATinsert(ATempty, not_null(t_48));
        }
      }
    {
      v_48 = t;
      if(((s_48 != NULL) && (s_48 != v_48)))
        _fail(v_48);
      else
        s_48 = v_48;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(s_48));
      t = printnl_0(t);
    }
  }
  t = m_12;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm y_48 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = Cons_2(t, t_62, y_48);
      }
    return(t);
  }
  t = y_48(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  h_49 = t;
  e_49 :
  if(((ATgetType(h_49) == AT_LIST) && !(ATisEmpty(h_49))))
    {
      f_49 = ATgetFirst((ATermList) h_49);
      g_49 = (ATerm) ATgetNext((ATermList) h_49);
      {
        ATerm k_49 = NULL;
        t = not_null(g_49);
        {
          ATerm r_12;
          r_12 = t;
          {
            ATerm n_49 = NULL,p_49 = NULL,r_49 = NULL;
            ATerm w_12;
            w_12 = t;
            {
              ATerm o_49 = NULL;
              t = i_0(t);
              {
                o_49 = t;
                if(((n_49 != NULL) && (n_49 != o_49)))
                  _fail(o_49);
                else
                  n_49 = o_49;
              }
            }
            t = w_12;
            {
              ATerm q_49 = NULL;
              t = not_null(f_49);
              {
                t = h_0(t);
                {
                  q_49 = t;
                  if(((p_49 != NULL) && (p_49 != q_49)))
                    _fail(q_49);
                  else
                    p_49 = q_49;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_49)), not_null(p_49));
                {
                  r_49 = t;
                  if(((k_49 != NULL) && (k_49 != r_49)))
                    _fail(r_49);
                  else
                    k_49 = r_49;
                }
              }
            }
          }
          t = r_12;
          {
            ATerm x_2 (ATerm t)
            {
              t = not_null(k_49);
              return(t);
            }
            t = reverse_acc_2(t, h_0, x_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_49) == AT_LIST) && ATisEmpty(h_49)))
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
ATerm short_description_1 (ATerm t, ATerm k_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm c_50 = NULL,d_50 = NULL;
  c_50 = t;
  b_50 :
  if(match_cons(c_50, sym_Program_1))
    {
      d_50 = ATgetArgument(c_50, 0);
      {
        ATerm g_50 = NULL,i_50 = NULL;
        ATerm h_50 = NULL;
        t = SSLgetAnnotations(not_null(c_50));
        {
          h_50 = t;
          if(((g_50 != NULL) && (g_50 != h_50)))
            _fail(h_50);
          else
            g_50 = h_50;
        }
        {
          t = not_null(d_50);
          {
            ATerm k_50 = NULL;
            t = s_57(t);
            {
              i_50 = t;
              {
                ATerm l_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_50)), not_null(g_50));
                {
                  l_50 = t;
                  if(((k_50 != NULL) && (k_50 != l_50)))
                    _fail(l_50);
                  else
                    k_50 = l_50;
                }
                t = not_null(k_50);
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
  ATerm x_50 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_50 = NULL;
      t = term_r_11;
      {
        t = get_config_0(t);
        {
          y_50 = t;
          if(((x_50 != NULL) && (x_50 != y_50)))
            _fail(y_50);
          else
            x_50 = y_50;
        }
      }
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
            ATerm z_50 = NULL;
            z_50 = t;
            if(((x_50 != NULL) && (x_50 != z_50)))
              _fail(z_50);
            else
              x_50 = z_50;
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
        t = not_null(x_50);
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
                  ATerm c_51 = NULL;
                  ATerm d_51 = NULL;
                  d_51 = t;
                  if(((c_51 != NULL) && (c_51 != d_51)))
                    _fail(d_51);
                  else
                    c_51 = d_51;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_51)), term_j_13);
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
                      t = not_null(x_50);
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
ATerm say_1 (ATerm t, ATerm g_58 (ATerm))
{
  ATerm m_13;
  m_13 = t;
  {
    t = g_58(t);
    t = debug_0(t);
  }
  t = m_13;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_57 (ATerm))
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
            t = t_57(t);
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
ATerm fetch_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm n_53 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_63, _id);
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
ATerm option_defined_1 (ATerm t, ATerm k_78 (ATerm))
{
  t = fetch_1(t, k_78);
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
ATerm try_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm q_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_61(t);
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
          ATerm t_54 = NULL;
          ATerm u_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_54), not_null(o_54));
          {
            ATerm x_13 = t;
            int b_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_14);
              }
            else
              {
                t = x_13;
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
        t = w_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm y_54 = NULL;
  ATerm z_54 = NULL;
  t = term_t_8;
  {
    t = p_79(t);
    {
      z_54 = t;
      if(((y_54 != NULL) && (y_54 != z_54)))
        _fail(z_54);
      else
        y_54 = z_54;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_h_13, not_null(y_54));
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
            ATerm d_14;
            d_14 = t;
            {
              t = not_null(g_55);
              t = a_0(t);
            }
            t = d_14;
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
  ATerm g_3 (ATerm t)
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
ATerm Cons_2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
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
            t = u_50(t);
            {
              n_56 = t;
              {
                t = not_null(h_56);
                {
                  ATerm r_56 = NULL;
                  t = v_50(t);
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
        ATerm k_14;
        k_14 = t;
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
        t = k_14;
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
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  m_57 :
  if(match_cons(n_57, sym__2))
    {
      o_57 = ATgetArgument(n_57, 0);
      p_57 = ATgetArgument(n_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(o_57), not_null(p_57));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm l_14;
  l_14 = t;
  {
    ATerm j_3 (ATerm t)
    {
      t = term_m_14;
      t = n_79(t);
      return(t);
    }
    t = try_1(t, j_3);
  }
  t = l_14;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm z_57 = NULL;
      ATerm n_14;
      n_14 = t;
      {
        ATerm x_57 = NULL;
        ATerm y_57 = NULL;
        y_57 = t;
        if(((x_57 != NULL) && (x_57 != y_57)))
          _fail(y_57);
        else
          x_57 = y_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(x_57));
          t = set_config_0(t);
        }
      }
      t = n_14;
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
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              {
                t = n_79(t);
                t = Cons_2(t, _id, l_3);
              }
            }
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
ATerm parse_options_1 (ATerm t, ATerm m_79 (ATerm))
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
          t = m_79(t);
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
ATerm option_wrap_4 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm))
{
  t = parse_options_1(t, j_77);
  {
    t = store_options_0(t);
    {
      t = l_77(t);
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_77);
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
                  t = m_77(t);
                  t = report_success_0(t);
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
ATerm iowrap_4 (ATerm t, ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_78(t);
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
      t = apply_strategy_1(t, a_78);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, r_3, c_78, d_78, s_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm))
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
  t = iowrap_4(t, u_77, v_77, w_77, t_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_77 (ATerm), ATerm t_77 (ATerm))
{
  t = iowrap_3(t, s_77, t_77, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    t = _2(t, _id, p_77);
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

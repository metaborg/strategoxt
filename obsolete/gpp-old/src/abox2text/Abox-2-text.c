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
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
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
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_S_1;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_PP_Table_1;
Symbol sym_selector_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_PP_Entry_2;
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
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
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
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
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
  init_constant_terms();
}
ATerm term_y_21;
ATerm term_q_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_e_19;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_j_14;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_u_12;
ATerm term_p_10;
ATerm term_o_9;
ATerm term_q_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_h_6;
ATerm term_b_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
void init_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("*** error: invalid box: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: HV box not supported", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_e_8);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__2, term_h_6, term_b_6);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_6);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_e_8);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_e_8);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_e_8);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__3, term_k_19, term_l_19, (ATerm) ATempty);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_77 (ATerm), ATerm h_77 (ATerm));
ATerm crush_2 (ATerm, ATerm e_76 (ATerm), ATerm f_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_62 (ATerm));
ATerm topdown_1 (ATerm, ATerm o_64 (ATerm));
ATerm subt_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_84 (ATerm));
ATerm dissuader_1 (ATerm, ATerm y_81 (ATerm));
ATerm separate_by_1 (ATerm, ATerm o_70 (ATerm));
ATerm add_0 (ATerm);
ATerm Abox2text_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm w_77 (ATerm));
ATerm H_2 (ATerm, ATerm m_55 (ATerm), ATerm n_55 (ATerm));
ATerm filter_1 (ATerm, ATerm j_78 (ATerm));
ATerm foldr_3 (ATerm, ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm s_71 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_64 (ATerm), ATerm g_64 (ATerm));
ATerm for_3 (ATerm, ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm k_64 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm l_71 (ATerm));
ATerm split_at_1 (ATerm, ATerm m_0 (ATerm));
ATerm string_length_p__1 (ATerm, ATerm w_62 (ATerm));
ATerm map_to_r_box_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm Abox2text_p__0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm _2 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_78 (ATerm), ATerm w_78 (ATerm));
ATerm input_file_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm x_81 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm b_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_85 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_82 (ATerm));
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
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_86 (ATerm));
ATerm Program_1 (ATerm, ATerm k_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_81 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_81 (ATerm));
ATerm map_1 (ATerm, ATerm s_70 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_86 (ATerm));
ATerm Abox_2_text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATempty, term_v_5));
  {
    t = printnl_0(t);
    {
      t = term_w_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  t = SSL_TicksToSeconds(not_null(b_1));
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_77 (ATerm), ATerm h_77 (ATerm))
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_77(t);
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm n_1 = NULL,g_2 = NULL,h_2 = NULL;
        n_1 = t;
        m_1 :
        if(((ATgetType(n_1) == AT_LIST) && !(ATisEmpty(n_1))))
          {
            g_2 = ATgetFirst((ATermList) n_1);
            h_2 = (ATerm) ATgetNext((ATermList) n_1);
            {
              ATerm x_2 = NULL;
              ATerm y_2 = NULL;
              t = not_null(h_2);
              {
                t = foldr_2(t, g_77, h_77);
                {
                  y_2 = t;
                  if(((x_2 != NULL) && (x_2 != y_2)))
                    _fail(y_2);
                  else
                    x_2 = y_2;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_2), not_null(x_2));
                t = h_77(t);
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
ATerm crush_2 (ATerm t, ATerm e_76 (ATerm), ATerm f_76 (ATerm))
{
  ATerm s_3 = NULL;
  ATerm u_3 = NULL;
  s_3 = t;
  {
    ATerm v_3 = NULL;
    ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
    t = not_null(s_3);
    {
      v_3 = t;
      {
        t = SSL_explode_term(not_null(v_3));
        {
          x_3 = t;
          r_3 :
          if(match_cons(x_3, sym__2))
            {
              y_3 = ATgetArgument(x_3, 0);
              z_3 = ATgetArgument(x_3, 1);
              if(((u_3 != NULL) && (u_3 != z_3)))
                _fail(z_3);
              else
                u_3 = z_3;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_3);
      t = foldr_2(t, e_76, f_76);
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
    ATerm b_0 (ATerm t)
    {
      t = term_b_6;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    ATerm g_6;
    g_6 = t;
    {
      ATerm e_4 = NULL;
      ATerm f_4 = NULL;
      t = term_h_6;
      {
        t = get_config_0(t);
        {
          f_4 = t;
          if(((e_4 != NULL) && (e_4 != f_4)))
            _fail(f_4);
          else
            e_4 = f_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_4), term_w_5);
        t = geq_0(t);
      }
    }
    t = g_6;
    t = m_84(t);
    return(t);
  }
  t = try_1(t, c_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm j_4 = NULL,l_4 = NULL;
    ATerm i_6;
    i_6 = t;
    {
      ATerm k_4 = NULL;
      t = run_time_0(t);
      {
        k_4 = t;
        if(((j_4 != NULL) && (j_4 != k_4)))
          _fail(k_4);
        else
          j_4 = k_4;
      }
    }
    t = i_6;
    {
      ATerm m_4 = NULL;
      t = term_n_6;
      {
        t = get_config_0(t);
        {
          m_4 = t;
          if(((l_4 != NULL) && (l_4 != m_4)))
            _fail(m_4);
          else
            l_4 = m_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_6), not_null(j_4)), term_o_6), not_null(l_4)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_0);
  {
    t = term_b_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        ATerm q_6;
        q_6 = t;
        t = SSL_print(not_null(s_4), not_null(t_4));
        t = q_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  t = SSL_is_string(not_null(y_4));
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_62(t);
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm o_64 (ATerm))
{
  t = o_64(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1(t, o_64);
      return(t);
    }
    t = _all(t, f_0);
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym__2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      {
        ATerm y_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(e_5), not_null(f_5));
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
            t = SSL_subtr(not_null(e_5), not_null(f_5));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  m_5 = t;
  l_5 :
  if(match_cons(m_5, sym__2))
    {
      n_5 = ATgetArgument(m_5, 0);
      o_5 = ATgetArgument(m_5, 1);
      {
        t = not_null(o_5);
        {
          ATerm a_7 = t;
          int k_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_7);
            }
          else
            {
              t = a_7;
              {
                ATerm n_0 (ATerm t)
                {
                  ATerm l_7 = t;
                  int m_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(m_7);
                    }
                  else
                    {
                      t = l_7;
                      {
                        ATerm r_5 = NULL;
                        t = Cons_2(t, _id, n_0);
                        {
                          ATerm s_5 = NULL;
                          s_5 = t;
                          if(((r_5 != NULL) && (r_5 != s_5)))
                            _fail(s_5);
                          else
                            r_5 = s_5;
                          t = (ATerm) ATinsert(CheckATermList(not_null(r_5)), not_null(n_5));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, n_0);
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
ATerm if_verbose2_1 (ATerm t, ATerm n_84 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    ATerm x_7;
    x_7 = t;
    {
      ATerm x_5 = NULL;
      ATerm y_5 = NULL;
      t = term_h_6;
      {
        t = get_config_0(t);
        {
          y_5 = t;
          if(((x_5 != NULL) && (x_5 != y_5)))
            _fail(y_5);
          else
            x_5 = y_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), term_y_7);
        t = geq_0(t);
      }
    }
    t = x_7;
    t = n_84(t);
    return(t);
  }
  t = try_1(t, o_0);
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm z_7;
  z_7 = t;
  {
    ATerm p_0 (ATerm t)
    {
      t = y_81(t);
      {
        ATerm r_0 (ATerm t)
        {
          t = term_b_8;
          return(t);
        }
        t = debug_1(t, r_0);
      }
      return(t);
    }
    t = if_verbose2_1(t, p_0);
  }
  t = z_7;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm c_6 = NULL,e_6 = NULL;
  ATerm s_0 (ATerm t)
  {
    t = term_c_8;
    return(t);
  }
  t = dissuader_1(t, s_0);
  {
    ATerm d_8;
    d_8 = t;
    {
      ATerm d_6 = NULL;
      d_6 = t;
      if(((c_6 != NULL) && (c_6 != d_6)))
        _fail(d_6);
      else
        c_6 = d_6;
    }
    t = d_8;
    {
      ATerm f_6 = NULL;
      t = term_e_8;
      {
        t = o_70(t);
        {
          f_6 = t;
          if(((e_6 != NULL) && (e_6 != f_6)))
            _fail(f_6);
          else
            e_6 = f_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_6), not_null(c_6));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        ATerm f_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_6), not_null(m_6));
            LocalPopChoice(k_8);
          }
        else
          {
            t = f_8;
            t = SSL_addr(not_null(l_6), not_null(m_6));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Abox2text_0 (ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2text_p__0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm u_0 (ATerm t)
        {
          t = term_q_8;
          return(t);
        }
        t = debug_1(t, u_0);
        {
          t = term_w_5;
          t = exit_0(t);
        }
      }
    }
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  r_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      s_6 :
      if(((ATgetType(u_6) == AT_LIST) && ATisEmpty(u_6)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(v_6));
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
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm q_0 (ATerm), ATerm t_0 (ATerm))
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  d_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      j_7 = ATgetArgument(f_7, 1);
      e_7 :
      if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
        {
          h_7 = ATgetFirst((ATermList) g_7);
          i_7 = (ATerm) ATgetNext((ATermList) g_7);
          {
            ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
            ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(j_7));
            {
              t = q_0(t);
              {
                r_7 = t;
                c_7 :
                if(match_cons(r_7, sym__2))
                  {
                    s_7 = ATgetArgument(r_7, 0);
                    t_7 = ATgetArgument(r_7, 1);
                    {
                      ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
                      if(((p_7 != NULL) && (p_7 != s_7)))
                        _fail(s_7);
                      else
                        p_7 = s_7;
                      {
                        if(((n_7 != NULL) && (n_7 != t_7)))
                          _fail(t_7);
                        else
                          n_7 = t_7;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_7), not_null(n_7));
                          {
                            t = t_0(t);
                            {
                              u_7 = t;
                              b_7 :
                              if(match_cons(u_7, sym__2))
                                {
                                  v_7 = ATgetArgument(u_7, 0);
                                  w_7 = ATgetArgument(u_7, 1);
                                  {
                                    if(((q_7 != NULL) && (q_7 != v_7)))
                                      _fail(v_7);
                                    else
                                      q_7 = v_7;
                                    if(((o_7 != NULL) && (o_7 != w_7)))
                                      _fail(w_7);
                                    else
                                      o_7 = w_7;
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
                else
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_7)), not_null(p_7)), not_null(o_7));
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
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm s_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, w_77, a_8);
        LocalPopChoice(v_8);
      }
    else
      {
        t = s_8;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = a_8(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm m_55 (ATerm), ATerm n_55 (ATerm))
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym_H_2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      {
        ATerm n_8 = NULL,p_8 = NULL;
        ATerm o_8 = NULL;
        t = SSLgetAnnotations(not_null(h_8));
        {
          o_8 = t;
          if(((n_8 != NULL) && (n_8 != o_8)))
            _fail(o_8);
          else
            n_8 = o_8;
        }
        {
          t = not_null(i_8);
          {
            ATerm r_8 = NULL;
            t = m_55(t);
            {
              p_8 = t;
              {
                t = not_null(j_8);
                {
                  ATerm t_8 = NULL;
                  t = n_55(t);
                  {
                    r_8 = t;
                    {
                      ATerm u_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(p_8), not_null(r_8)), not_null(n_8));
                      {
                        u_8 = t;
                        if(((t_8 != NULL) && (t_8 != u_8)))
                          _fail(u_8);
                        else
                          t_8 = u_8;
                      }
                      t = not_null(t_8);
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
ATerm filter_1 (ATerm t, ATerm j_78 (ATerm))
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = filter_1(t, j_78);
              return(t);
            }
            t = Cons_2(t, j_78, v_0);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
              c_9 = t;
              b_9 :
              if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
                {
                  d_9 = ATgetFirst((ATermList) c_9);
                  e_9 = (ATerm) ATgetNext((ATermList) c_9);
                  {
                    t = not_null(e_9);
                    t = filter_1(t, j_78);
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
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm a_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_77(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = a_9;
      {
        ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
        l_9 = t;
        k_9 :
        if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
          {
            m_9 = ATgetFirst((ATermList) l_9);
            n_9 = (ATerm) ATgetNext((ATermList) l_9);
            {
              ATerm q_9 = NULL,s_9 = NULL;
              ATerm g_9;
              g_9 = t;
              {
                ATerm r_9 = NULL;
                t = not_null(m_9);
                {
                  t = k_77(t);
                  {
                    r_9 = t;
                    if(((q_9 != NULL) && (q_9 != r_9)))
                      _fail(r_9);
                    else
                      q_9 = r_9;
                  }
                }
              }
              t = g_9;
              {
                ATerm t_9 = NULL;
                t = not_null(n_9);
                {
                  t = foldr_3(t, i_77, j_77, k_77);
                  {
                    t_9 = t;
                    if(((s_9 != NULL) && (s_9 != t_9)))
                      _fail(t_9);
                    else
                      s_9 = t_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), not_null(s_9));
                  t = j_77(t);
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
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    t = term_b_6;
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    t = term_w_5;
    return(t);
  }
  t = foldr_3(t, w_0, add_0, x_0);
  return(t);
}
ATerm string_length_0 (ATerm t)
{
  t = explode_string_0(t);
  t = length_0(t);
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  a_10 :
  if(match_cons(b_10, sym_HS_0))
    {
      ATerm d_10 = NULL,f_10 = NULL;
      ATerm h_9;
      h_9 = t;
      {
        ATerm e_10 = NULL;
        t = SSLgetAnnotations(not_null(b_10));
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
      }
      t = h_9;
      {
        ATerm g_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(d_10));
        {
          g_10 = t;
          if(((f_10 != NULL) && (f_10 != g_10)))
            _fail(g_10);
          else
            f_10 = g_10;
        }
        t = not_null(f_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm m_10 = NULL,o_10 = NULL;
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          ATerm n_10 = NULL;
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
          return(t);
        }
        t = SOpt_2(t, HS_0, z_0);
        return(t);
      }
      t = fetch_1(t, y_0);
      {
        t = not_null(m_10);
        t = string_to_int_0(t);
      }
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = term_w_5;
    }
  {
    o_10 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), term_o_9);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm y_10 = NULL;
  ATerm a_11 = NULL,b_11 = NULL;
  y_10 = t;
  {
    ATerm c_11 = NULL;
    ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
    t = not_null(y_10);
    {
      c_11 = t;
      {
        t = SSL_explode_term(not_null(c_11));
        {
          e_11 = t;
          v_10 :
          if(match_cons(e_11, sym__2))
            {
              f_11 = ATgetArgument(e_11, 0);
              g_11 = ATgetArgument(e_11, 1);
              w_10 :
              if(match_string(f_11, ""))
                {
                  x_10 :
                  if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
                    {
                      h_11 = ATgetFirst((ATermList) g_11);
                      i_11 = (ATerm) ATgetNext((ATermList) g_11);
                      {
                        if(((b_11 != NULL) && (b_11 != h_11)))
                          _fail(h_11);
                        else
                          b_11 = h_11;
                        if(((a_11 != NULL) && (a_11 != i_11)))
                          _fail(i_11);
                        else
                          a_11 = i_11;
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
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(b_11);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm m_11 (ATerm t)
  {
    ATerm p_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = s_71(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = p_9;
        t = Cons_2(t, _id, m_11);
      }
    return(t);
  }
  t = m_11(t);
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
ATerm geq_0 (ATerm t)
{
  ATerm p_11 = NULL;
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
      q_11 = t;
      o_11 :
      if(match_cons(q_11, sym__2))
        {
          r_11 = ATgetArgument(q_11, 0);
          s_11 = ATgetArgument(q_11, 1);
          {
            if(((p_11 != NULL) && (p_11 != r_11)))
              _fail(r_11);
            else
              p_11 = r_11;
            if(((p_11 != NULL) && (p_11 != s_11)))
              _fail(s_11);
            else
              p_11 = s_11;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm f_64 (ATerm), ATerm g_64 (ATerm))
{
  ATerm u_11 (ATerm t)
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_64(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        {
          t = g_64(t);
          t = u_11(t);
        }
      }
    return(t);
  }
  t = u_11(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm k_64 (ATerm))
{
  t = i_64(t);
  t = while_not_2(t, j_64, k_64);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
    d_12 = t;
    w_11 :
    if(match_cons(d_12, sym__2))
      {
        e_12 = ATgetArgument(d_12, 0);
        f_12 = ATgetArgument(d_12, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_12), not_null(f_12), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
    i_12 = t;
    y_11 :
    if(match_cons(i_12, sym__3))
      {
        j_12 = ATgetArgument(i_12, 0);
        k_12 = ATgetArgument(i_12, 1);
        l_12 = ATgetArgument(i_12, 2);
        z_11 :
        if(match_int(j_12, 0))
          {
            t = not_null(l_12);
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
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
    o_12 = t;
    c_12 :
    if(match_cons(o_12, sym__3))
      {
        p_12 = ATgetArgument(o_12, 0);
        q_12 = ATgetArgument(o_12, 1);
        r_12 = ATgetArgument(o_12, 2);
        {
          ATerm v_12 = NULL;
          ATerm z_9;
          z_9 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), term_w_5);
            t = geq_0(t);
          }
          t = z_9;
          {
            ATerm w_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), term_w_5);
            {
              t = subt_0(t);
              {
                w_12 = t;
                if(((v_12 != NULL) && (v_12 != w_12)))
                  _fail(w_12);
                else
                  v_12 = w_12;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_12), not_null(q_12), (ATerm) ATinsert(CheckATermList(not_null(r_12)), not_null(q_12)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, a_1, c_1, d_1);
  return(t);
}
ATerm copy_char_0 (ATerm t)
{
  t = copy_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym_IS_0))
    {
      ATerm h_13 = NULL,j_13 = NULL;
      ATerm c_10;
      c_10 = t;
      {
        ATerm i_13 = NULL;
        t = SSLgetAnnotations(not_null(f_13));
        {
          i_13 = t;
          if(((h_13 != NULL) && (h_13 != i_13)))
            _fail(i_13);
          else
            h_13 = i_13;
        }
      }
      t = c_10;
      {
        ATerm k_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(h_13));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm q_13 = NULL,s_13 = NULL;
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm r_13 = NULL;
          r_13 = t;
          if(((q_13 != NULL) && (q_13 != r_13)))
            _fail(r_13);
          else
            q_13 = r_13;
          return(t);
        }
        t = SOpt_2(t, IS_0, f_1);
        return(t);
      }
      t = fetch_1(t, e_1);
      {
        t = not_null(q_13);
        t = string_to_int_0(t);
      }
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      t = term_b_6;
    }
  {
    s_13 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), term_o_9);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_VS_0))
    {
      ATerm c_14 = NULL,e_14 = NULL;
      ATerm j_10;
      j_10 = t;
      {
        ATerm d_14 = NULL;
        t = SSLgetAnnotations(not_null(a_14));
        {
          d_14 = t;
          if(((c_14 != NULL) && (c_14 != d_14)))
            _fail(d_14);
          else
            c_14 = d_14;
        }
      }
      t = j_10;
      {
        ATerm f_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(c_14));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym_SOpt_2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      {
        ATerm v_14 = NULL,x_14 = NULL;
        ATerm w_14 = NULL;
        t = SSLgetAnnotations(not_null(p_14));
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
        {
          t = not_null(q_14);
          {
            ATerm z_14 = NULL;
            t = i_55(t);
            {
              x_14 = t;
              {
                t = not_null(r_14);
                {
                  ATerm b_15 = NULL;
                  t = j_55(t);
                  {
                    z_14 = t;
                    {
                      ATerm c_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(x_14), not_null(z_14)), not_null(v_14));
                      {
                        c_15 = t;
                        if(((b_15 != NULL) && (b_15 != c_15)))
                          _fail(c_15);
                        else
                          b_15 = c_15;
                      }
                      t = not_null(b_15);
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
ATerm Vspace_0 (ATerm t)
{
  ATerm l_15 = NULL,n_15 = NULL;
  ATerm p_15 = NULL;
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          ATerm m_15 = NULL;
          m_15 = t;
          if(((l_15 != NULL) && (l_15 != m_15)))
            _fail(m_15);
          else
            l_15 = m_15;
          return(t);
        }
        t = SOpt_2(t, VS_0, h_1);
        return(t);
      }
      t = fetch_1(t, g_1);
      {
        t = not_null(l_15);
        t = string_to_int_0(t);
      }
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      t = term_b_6;
    }
  {
    n_15 = t;
    {
      ATerm q_15 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), term_w_5);
      {
        t = add_0(t);
        {
          q_15 = t;
          if(((p_15 != NULL) && (p_15 != q_15)))
            _fail(q_15);
          else
            p_15 = q_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), term_p_10);
        t = copy_char_0(t);
      }
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
    {
      x_15 = ATgetFirst((ATermList) w_15);
      y_15 = (ATerm) ATgetNext((ATermList) w_15);
      t = not_null(y_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  c_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      g_16 = (ATerm) ATgetNext((ATermList) e_16);
      d_16 :
      if(((ATgetType(g_16) == AT_LIST) && ATisEmpty(g_16)))
        {
          t = not_null(f_16);
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
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm l_71 (ATerm))
{
  ATerm k_16 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_71(t);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = Cons_2(t, _id, k_16);
      }
    return(t);
  }
  t = k_16(t);
  return(t);
}
ATerm split_at_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm u_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_16 = NULL,w_16 = NULL;
      ATerm i_1 (ATerm t)
      {
        t = Cons_2(t, m_0, _id);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm v_16 = NULL;
            v_16 = t;
            if(((u_16 != NULL) && (u_16 != v_16)))
              _fail(v_16);
            else
              u_16 = v_16;
            return(t);
          }
          t = Cons_2(t, _id, j_1);
          t = (ATerm) ATempty;
        }
        return(t);
      }
      t = at_suffix_1(t, i_1);
      {
        ATerm x_16 = NULL;
        x_16 = t;
        if(((w_16 != NULL) && (w_16 != x_16)))
          _fail(x_16);
        else
          w_16 = x_16;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), not_null(u_16));
      }
      LocalPopChoice(z_10);
    }
  else
    {
      t = u_10;
      {
        ATerm y_16 = NULL;
        ATerm a_17 = NULL;
        y_16 = t;
        {
          ATerm b_17 = NULL;
          t = not_null(y_16);
          {
            t = explode_string_0(t);
            {
              t = reverse_0(t);
              {
                b_17 = t;
                if(((a_17 != NULL) && (a_17 != b_17)))
                  _fail(b_17);
                else
                  a_17 = b_17;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_17), (ATerm)ATempty, (ATerm) ATempty);
            {
              ATerm y_17 (ATerm t)
              {
                ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
                c_17 = t;
                s_16 :
                if(match_cons(c_17, sym__3))
                  {
                    d_17 = ATgetArgument(c_17, 0);
                    g_17 = ATgetArgument(c_17, 1);
                    h_17 = ATgetArgument(c_17, 2);
                    t_16 :
                    if(((ATgetType(d_17) == AT_LIST) && ATisEmpty(d_17)))
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(h_17)), not_null(g_17));
                      }
                    else
                      {
                        if(((ATgetType(d_17) == AT_LIST) && !(ATisEmpty(d_17))))
                          {
                            e_17 = ATgetFirst((ATermList) d_17);
                            f_17 = (ATerm) ATgetNext((ATermList) d_17);
                            {
                              ATerm d_11 = t;
                              int j_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(e_17);
                                  {
                                    t = m_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_17), (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(not_null(h_17)), not_null(g_17)));
                                      t = y_17(t);
                                    }
                                  }
                                  LocalPopChoice(j_11);
                                }
                              else
                                {
                                  t = d_11;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(f_17), (ATerm)ATinsert(CheckATermList(not_null(g_17)), not_null(e_17)), not_null(h_17));
                                    t = y_17(t);
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
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = y_17(t);
              t = map_1(t, implode_string_0);
            }
          }
        }
      }
    }
  return(t);
}
ATerm string_length_p__1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm d_18 = NULL;
    d_18 = t;
    c_18 :
    if(!(match_int(d_18, 10)))
      {
        _fail(t);
      }
    return(t);
  }
  t = split_at_1(t, k_1);
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        {
          t = last_0(t);
          t = string_length_0(t);
        }
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        {
          t = last_0(t);
          {
            t = string_length_0(t);
            {
              t = split_2(t, _id, w_62);
              t = subt_0(t);
            }
          }
        }
      }
  }
  return(t);
}
ATerm map_to_r_box_0 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, not_null(t_18), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm o_20 (ATerm t)
      {
        ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
        ATerm q_20 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(b_19))));
          t = conc_0(t);
          return(t);
        }
        ATerm r_20 (ATerm t)
        {
          ATerm v_19 = NULL;
          ATerm w_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(v_18), not_null(w_18))));
          {
            t = conc_0(t);
            {
              w_19 = t;
              if(((v_19 != NULL) && (v_19 != w_19)))
                _fail(w_19);
              else
                v_19 = w_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_19), (ATerm)ATempty, not_null(v_19));
            t = o_20(t);
          }
          return(t);
        }
        ATerm s_20 (ATerm t)
        {
          ATerm d_20 = NULL;
          ATerm e_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(v_18), not_null(w_18))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(b_19))));
          {
            t = conc_0(t);
            {
              e_20 = t;
              if(((d_20 != NULL) && (d_20 != e_20)))
                _fail(e_20);
              else
                d_20 = e_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_19), (ATerm)ATempty, not_null(d_20));
            t = o_20(t);
          }
          return(t);
        }
        ATerm t_20 (ATerm t)
        {
          ATerm l_20 = NULL;
          ATerm m_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), (ATerm) ATinsert(ATempty, not_null(z_18)));
          {
            t = conc_0(t);
            {
              m_20 = t;
              if(((l_20 != NULL) && (l_20 != m_20)))
                _fail(m_20);
              else
                l_20 = m_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_19), not_null(l_20), not_null(c_19));
            t = o_20(t);
          }
          return(t);
        }
        x_18 = t;
        n_18 :
        if(match_cons(x_18, sym__3))
          {
            y_18 = ATgetArgument(x_18, 0);
            b_19 = ATgetArgument(x_18, 1);
            c_19 = ATgetArgument(x_18, 2);
            o_18 :
            if(((ATgetType(y_18) == AT_LIST) && ATisEmpty(y_18)))
              {
                p_18 :
                if(((ATgetType(b_19) == AT_LIST) && ATisEmpty(b_19)))
                  {
                    {
                      ATerm n_11 = t;
                      int t_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(c_19);
                          LocalPopChoice(t_11);
                        }
                      else
                        {
                          t = n_11;
                          t = q_20(t);
                        }
                    }
                  }
                else
                  {
                    t = q_20(t);
                  }
              }
            else
              {
                if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
                  {
                    z_18 = ATgetFirst((ATermList) y_18);
                    a_19 = (ATerm) ATgetNext((ATermList) y_18);
                    q_18 :
                    if(((ATgetType(b_19) == AT_LIST) && ATisEmpty(b_19)))
                      {
                        r_18 :
                        if(match_cons(z_18, sym_R_2))
                          {
                            v_18 = ATgetArgument(z_18, 0);
                            w_18 = ATgetArgument(z_18, 1);
                            {
                              ATerm v_11 = t;
                              int x_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = r_20(t);
                                  LocalPopChoice(x_11);
                                }
                              else
                                {
                                  t = v_11;
                                  {
                                    ATerm a_12 = t;
                                    int b_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = s_20(t);
                                        LocalPopChoice(b_12);
                                      }
                                    else
                                      {
                                        t = a_12;
                                        t = t_20(t);
                                      }
                                  }
                                }
                            }
                          }
                        else
                          {
                            t = t_20(t);
                          }
                      }
                    else
                      {
                        s_18 :
                        if(match_cons(z_18, sym_R_2))
                          {
                            v_18 = ATgetArgument(z_18, 0);
                            w_18 = ATgetArgument(z_18, 1);
                            {
                              ATerm g_12 = t;
                              int h_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = s_20(t);
                                  LocalPopChoice(h_12);
                                }
                              else
                                {
                                  t = g_12;
                                  t = t_20(t);
                                }
                            }
                          }
                        else
                          {
                            t = t_20(t);
                          }
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = o_20(t);
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym__2))
    {
      t_23 = ATgetArgument(s_23, 0);
      u_23 = ATgetArgument(s_23, 1);
      {
        ATerm m_12;
        m_12 = t;
        {
          ATerm n_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_23), not_null(u_23));
              LocalPopChoice(s_12);
            }
          else
            {
              t = n_12;
              t = SSL_gtr(not_null(t_23), not_null(u_23));
            }
        }
        t = m_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm t_12 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_12;
    }
  return(t);
}
ATerm Abox2text_p__0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  n_26 = t;
  d_26 :
  if(match_cons(n_26, sym__2))
    {
      o_26 = ATgetArgument(n_26, 0);
      r_26 = ATgetArgument(n_26, 1);
      e_26 :
      if(((ATgetType(o_26) == AT_LIST) && ATisEmpty(o_26)))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(r_26));
        }
      else
        {
          if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
            {
              p_26 = ATgetFirst((ATermList) o_26);
              q_26 = (ATerm) ATgetNext((ATermList) o_26);
              f_26 :
              if(((ATgetType(q_26) == AT_LIST) && ATisEmpty(q_26)))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(r_26));
                    t = Abox2text_0(t);
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(o_26, sym_ALT_2))
                {
                  p_26 = ATgetArgument(o_26, 0);
                  q_26 = ATgetArgument(o_26, 1);
                  {
                    ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
                    ATerm x_12;
                    x_12 = t;
                    {
                      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(r_26));
                      {
                        t = Abox2text_0(t);
                        {
                          b_27 = t;
                          l_24 :
                          if(match_cons(b_27, sym__2))
                            {
                              c_27 = ATgetArgument(b_27, 0);
                              d_27 = ATgetArgument(b_27, 1);
                              {
                                if(((y_26 != NULL) && (y_26 != b_27)))
                                  _fail(b_27);
                                else
                                  y_26 = b_27;
                                {
                                  if(((z_26 != NULL) && (z_26 != c_27)))
                                    _fail(c_27);
                                  else
                                    z_26 = c_27;
                                  if(((a_27 != NULL) && (a_27 != d_27)))
                                    _fail(d_27);
                                  else
                                    a_27 = d_27;
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
                    t = x_12;
                    {
                      ATerm y_12 = t;
                      int z_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_27), term_a_13);
                          t = leq_0(t);
                          LocalPopChoice(z_12);
                          t = not_null(y_26);
                        }
                      else
                        {
                          t = y_12;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_26), not_null(r_26));
                            t = Abox2text_0(t);
                          }
                        }
                    }
                  }
                }
              else
                {
                  if(match_cons(o_26, sym_A_3))
                    {
                      p_26 = ATgetArgument(o_26, 0);
                      q_26 = ATgetArgument(o_26, 1);
                      j_26 = ATgetArgument(o_26, 2);
                      {
                        ATerm h_27 = NULL;
                        ATerm i_27 = NULL;
                        t = not_null(j_26);
                        {
                          t = map_to_r_box_0(t);
                          {
                            i_27 = t;
                            if(((h_27 != NULL) && (h_27 != i_27)))
                              _fail(i_27);
                            else
                              h_27 = i_27;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(q_26), not_null(h_27)), not_null(r_26));
                          t = Abox2text_0(t);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_26, sym_R_2))
                        {
                          p_26 = ATgetArgument(o_26, 0);
                          q_26 = ATgetArgument(o_26, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(p_26), not_null(q_26)), not_null(r_26));
                            t = Abox2text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(o_26, sym_HV_2))
                            {
                              p_26 = ATgetArgument(o_26, 0);
                              q_26 = ATgetArgument(o_26, 1);
                              {
                                ATerm b_13 = t;
                                int c_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(p_26), not_null(q_26)), not_null(r_26));
                                    t = Abox2text_0(t);
                                    LocalPopChoice(c_13);
                                  }
                                else
                                  {
                                    t = b_13;
                                    {
                                      ATerm l_1 (ATerm t)
                                      {
                                        t = term_d_13;
                                        return(t);
                                      }
                                      t = say_1(t, l_1);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(p_26), not_null(q_26)), not_null(r_26));
                                        t = Abox2text_p__0(t);
                                      }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(o_26, sym_FBOX_2))
                                {
                                  p_26 = ATgetArgument(o_26, 0);
                                  q_26 = ATgetArgument(o_26, 1);
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_26), not_null(r_26));
                                    t = Abox2text_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(o_26, sym_C_2))
                                    {
                                      p_26 = ATgetArgument(o_26, 0);
                                      q_26 = ATgetArgument(o_26, 1);
                                      g_26 :
                                      if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
                                        {
                                          k_26 = ATgetFirst((ATermList) q_26);
                                          m_26 = (ATerm) ATgetNext((ATermList) q_26);
                                          h_26 :
                                          if(match_cons(k_26, sym_S_1))
                                            {
                                              l_26 = ATgetArgument(k_26, 0);
                                              i_26 :
                                              if(((ATgetType(m_26) == AT_LIST) && ATisEmpty(m_26)))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_26), not_null(r_26));
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
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(o_26, sym_S_1))
                                        {
                                          p_26 = ATgetArgument(o_26, 0);
                                          {
                                            ATerm v_27 = NULL;
                                            ATerm w_27 = NULL,y_27 = NULL;
                                            ATerm x_27 = NULL;
                                            t = not_null(p_26);
                                            {
                                              ATerm o_1 (ATerm t)
                                              {
                                                t = not_null(r_26);
                                                return(t);
                                              }
                                              t = string_length_p__1(t, o_1);
                                              {
                                                x_27 = t;
                                                if(((w_27 != NULL) && (w_27 != x_27)))
                                                  _fail(x_27);
                                                else
                                                  w_27 = x_27;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_26), not_null(w_27));
                                              {
                                                t = add_0(t);
                                                {
                                                  y_27 = t;
                                                  if(((v_27 != NULL) && (v_27 != y_27)))
                                                    _fail(y_27);
                                                  else
                                                    v_27 = y_27;
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(v_27));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(o_26, sym_V_2))
                                            {
                                              p_26 = ATgetArgument(o_26, 0);
                                              q_26 = ATgetArgument(o_26, 1);
                                              {
                                                ATerm c_28 = NULL;
                                                t = not_null(p_26);
                                                {
                                                  ATerm e_28 = NULL;
                                                  t = Vspace_0(t);
                                                  {
                                                    c_28 = t;
                                                    {
                                                      t = not_null(p_26);
                                                      {
                                                        ATerm g_28 = NULL;
                                                        t = Ispace_0(t);
                                                        {
                                                          e_28 = t;
                                                          {
                                                            ATerm i_28 = NULL,k_28 = NULL;
                                                            t = string_length_0(t);
                                                            {
                                                              g_28 = t;
                                                              {
                                                                ATerm j_28 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_26), term_o_9);
                                                                {
                                                                  t = copy_char_0(t);
                                                                  {
                                                                    j_28 = t;
                                                                    if(((i_28 != NULL) && (i_28 != j_28)))
                                                                      _fail(j_28);
                                                                    else
                                                                      i_28 = j_28;
                                                                  }
                                                                }
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_28)), not_null(e_28)), not_null(c_28));
                                                                  {
                                                                    ATerm z_28 = NULL;
                                                                    t = concat_strings_0(t);
                                                                    {
                                                                      k_28 = t;
                                                                      {
                                                                        t = not_null(q_26);
                                                                        {
                                                                          ATerm p_1 (ATerm t)
                                                                          {
                                                                            ATerm g_13 = t;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm l_13 = t;
                                                                                int m_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Nil_0(t);
                                                                                    LocalPopChoice(m_13);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_13;
                                                                                    {
                                                                                      ATerm m_28 = NULL;
                                                                                      ATerm o_28 = NULL,p_28 = NULL,v_28 = NULL,w_28 = NULL;
                                                                                      m_28 = t;
                                                                                      {
                                                                                        ATerm n_13;
                                                                                        n_13 = t;
                                                                                        {
                                                                                          ATerm q_28 = NULL;
                                                                                          ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
                                                                                          t = not_null(m_28);
                                                                                          {
                                                                                            q_28 = t;
                                                                                            {
                                                                                              t = SSL_explode_term(not_null(q_28));
                                                                                              {
                                                                                                s_28 = t;
                                                                                                e_25 :
                                                                                                if(match_cons(s_28, sym__2))
                                                                                                  {
                                                                                                    t_28 = ATgetArgument(s_28, 0);
                                                                                                    u_28 = ATgetArgument(s_28, 1);
                                                                                                    {
                                                                                                      if(((o_28 != NULL) && (o_28 != t_28)))
                                                                                                        _fail(t_28);
                                                                                                      else
                                                                                                        o_28 = t_28;
                                                                                                      if(((p_28 != NULL) && (p_28 != u_28)))
                                                                                                        _fail(u_28);
                                                                                                      else
                                                                                                        p_28 = u_28;
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
                                                                                        t = n_13;
                                                                                        {
                                                                                          ATerm o_13;
                                                                                          o_13 = t;
                                                                                          {
                                                                                            ATerm x_28 = NULL;
                                                                                            ATerm y_28 = NULL;
                                                                                            t = not_null(o_28);
                                                                                            {
                                                                                              x_28 = t;
                                                                                              {
                                                                                                if(((v_28 != NULL) && (v_28 != x_28)))
                                                                                                  _fail(x_28);
                                                                                                else
                                                                                                  v_28 = x_28;
                                                                                                {
                                                                                                  t = not_null(p_28);
                                                                                                  {
                                                                                                    ATerm q_1 (ATerm t)
                                                                                                    {
                                                                                                      ATerm r_1 (ATerm t)
                                                                                                      {
                                                                                                        ATerm p_13 = t;
                                                                                                        int t_13 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Nil_0(t);
                                                                                                            LocalPopChoice(t_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = p_13;
                                                                                                            t = Cons_2(t, Nil_0, Nil_0);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Cons_2(t, r_1, Nil_0);
                                                                                                      return(t);
                                                                                                    }
                                                                                                    t = Cons_2(t, _id, q_1);
                                                                                                    {
                                                                                                      y_28 = t;
                                                                                                      if(((w_28 != NULL) && (w_28 != y_28)))
                                                                                                        _fail(y_28);
                                                                                                      else
                                                                                                        w_28 = y_28;
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          t = o_13;
                                                                                          t = SSL_mkterm(not_null(v_28), not_null(w_28));
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                PopChoice();
                                                                                _fail(t);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_13;
                                                                              }
                                                                            return(t);
                                                                          }
                                                                          t = filter_1(t, p_1);
                                                                          {
                                                                            ATerm u_13 = t;
                                                                            int v_13 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_26));
                                                                                LocalPopChoice(v_13);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_13;
                                                                                {
                                                                                  ATerm s_1 (ATerm t)
                                                                                  {
                                                                                    ATerm a_29 = NULL;
                                                                                    a_29 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(r_26));
                                                                                      t = Abox2text_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm t_1 (ATerm t)
                                                                                  {
                                                                                    ATerm u_1 (ATerm t)
                                                                                    {
                                                                                      ATerm c_29 = NULL;
                                                                                      ATerm e_29 = NULL;
                                                                                      c_29 = t;
                                                                                      {
                                                                                        ATerm f_29 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_26), not_null(g_28));
                                                                                        {
                                                                                          t = add_0(t);
                                                                                          {
                                                                                            f_29 = t;
                                                                                            if(((e_29 != NULL) && (e_29 != f_29)))
                                                                                              _fail(f_29);
                                                                                            else
                                                                                              e_29 = f_29;
                                                                                          }
                                                                                        }
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(e_29));
                                                                                          t = Abox2text_0(t);
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, u_1);
                                                                                    return(t);
                                                                                  }
                                                                                  t = Cons_2(t, s_1, t_1);
                                                                                  {
                                                                                    ATerm v_1 (ATerm t)
                                                                                    {
                                                                                      ATerm w_1 (ATerm t)
                                                                                      {
                                                                                        ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
                                                                                        g_29 = t;
                                                                                        l_25 :
                                                                                        if(match_cons(g_29, sym__2))
                                                                                          {
                                                                                            h_29 = ATgetArgument(g_29, 0);
                                                                                            i_29 = ATgetArgument(g_29, 1);
                                                                                            if(((z_28 != NULL) && (z_28 != i_29)))
                                                                                              _fail(i_29);
                                                                                            else
                                                                                              z_28 = i_29;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                        return(t);
                                                                                      }
                                                                                      t = Cons_2(t, w_1, Nil_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = at_last_1(t, v_1);
                                                                                    {
                                                                                      t = map_1(t, Fst_0);
                                                                                      {
                                                                                        ATerm x_1 (ATerm t)
                                                                                        {
                                                                                          t = not_null(k_28);
                                                                                          return(t);
                                                                                        }
                                                                                        t = separate_by_1(t, x_1);
                                                                                        {
                                                                                          ATerm y_1 (ATerm t)
                                                                                          {
                                                                                            t = not_null(z_28);
                                                                                            return(t);
                                                                                          }
                                                                                          t = split_2(t, _id, y_1);
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
                                          else
                                            {
                                              if(match_cons(o_26, sym_H_2))
                                                {
                                                  p_26 = ATgetArgument(o_26, 0);
                                                  q_26 = ATgetArgument(o_26, 1);
                                                  {
                                                    ATerm p_29 = NULL;
                                                    t = not_null(p_26);
                                                    {
                                                      ATerm r_29 = NULL;
                                                      t = Hspace_0(t);
                                                      {
                                                        p_29 = t;
                                                        {
                                                          ATerm t_29 = NULL,h_30 = NULL,j_30 = NULL,k_30 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            r_29 = t;
                                                            {
                                                              ATerm u_29 = NULL;
                                                              t = not_null(q_26);
                                                              {
                                                                ATerm z_1 (ATerm t)
                                                                {
                                                                  ATerm w_13 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm x_13 = t;
                                                                      int y_13 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = Nil_0(t);
                                                                          LocalPopChoice(y_13);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = x_13;
                                                                          t = H_2(t, Nil_0, Nil_0);
                                                                        }
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = w_13;
                                                                    }
                                                                  return(t);
                                                                }
                                                                t = filter_1(t, z_1);
                                                                {
                                                                  u_29 = t;
                                                                  if(((t_29 != NULL) && (t_29 != u_29)))
                                                                    _fail(u_29);
                                                                  else
                                                                    t_29 = u_29;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), not_null(r_26));
                                                                {
                                                                  ATerm a_2 (ATerm t)
                                                                  {
                                                                    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
                                                                    v_29 = t;
                                                                    y_25 :
                                                                    if(match_cons(v_29, sym__2))
                                                                      {
                                                                        w_29 = ATgetArgument(v_29, 0);
                                                                        x_29 = ATgetArgument(v_29, 1);
                                                                        {
                                                                          ATerm a_30 = NULL,b_30 = NULL,f_30 = NULL;
                                                                          ATerm b_14;
                                                                          b_14 = t;
                                                                          {
                                                                            ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_29), not_null(x_29));
                                                                            {
                                                                              t = Abox2text_0(t);
                                                                              {
                                                                                c_30 = t;
                                                                                r_25 :
                                                                                if(match_cons(c_30, sym__2))
                                                                                  {
                                                                                    d_30 = ATgetArgument(c_30, 0);
                                                                                    e_30 = ATgetArgument(c_30, 1);
                                                                                    {
                                                                                      if(((a_30 != NULL) && (a_30 != d_30)))
                                                                                        _fail(d_30);
                                                                                      else
                                                                                        a_30 = d_30;
                                                                                      if(((b_30 != NULL) && (b_30 != e_30)))
                                                                                        _fail(e_30);
                                                                                      else
                                                                                        b_30 = e_30;
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            }
                                                                          }
                                                                          t = b_14;
                                                                          {
                                                                            ATerm g_30 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(b_30));
                                                                            {
                                                                              t = add_0(t);
                                                                              {
                                                                                g_30 = t;
                                                                                if(((f_30 != NULL) && (f_30 != g_30)))
                                                                                  _fail(g_30);
                                                                                else
                                                                                  f_30 = g_30;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(f_30));
                                                                          }
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  t = thread_map_1(t, a_2);
                                                                  {
                                                                    h_30 = t;
                                                                    c_26 :
                                                                    if(match_cons(h_30, sym__2))
                                                                      {
                                                                        j_30 = ATgetArgument(h_30, 0);
                                                                        k_30 = ATgetArgument(h_30, 1);
                                                                        {
                                                                          ATerm n_30 = NULL;
                                                                          ATerm o_30 = NULL;
                                                                          t = not_null(j_30);
                                                                          {
                                                                            ATerm b_2 (ATerm t)
                                                                            {
                                                                              t = not_null(p_29);
                                                                              return(t);
                                                                            }
                                                                            t = separate_by_1(t, b_2);
                                                                            {
                                                                              o_30 = t;
                                                                              if(((n_30 != NULL) && (n_30 != o_30)))
                                                                                _fail(o_30);
                                                                              else
                                                                                n_30 = o_30;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), not_null(k_30));
                                                                            {
                                                                              ATerm c_2 (ATerm t)
                                                                              {
                                                                                ATerm d_2 (ATerm t)
                                                                                {
                                                                                  ATerm g_14 = t;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = Nil_0(t);
                                                                                      PopChoice();
                                                                                      _fail(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_14;
                                                                                    }
                                                                                  return(t);
                                                                                }
                                                                                ATerm e_2 (ATerm t)
                                                                                {
                                                                                  ATerm p_30 = NULL;
                                                                                  p_30 = t;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_30), not_null(r_29));
                                                                                    t = subt_0(t);
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = _2(t, d_2, e_2);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, c_2);
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
ATerm abox2text_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_b_6;
    return(t);
  }
  t = split_2(t, _id, f_2);
  t = Abox2text_p__0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm))
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym__2))
    {
      z_32 = ATgetArgument(y_32, 0);
      a_33 = ATgetArgument(y_32, 1);
      {
        ATerm e_33 = NULL,g_33 = NULL;
        ATerm f_33 = NULL;
        t = SSLgetAnnotations(not_null(y_32));
        {
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
        }
        {
          t = not_null(z_32);
          {
            ATerm i_33 = NULL;
            t = x_53(t);
            {
              g_33 = t;
              {
                t = not_null(a_33);
                {
                  ATerm k_33 = NULL;
                  t = y_53(t);
                  {
                    i_33 = t;
                    {
                      ATerm l_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_33), not_null(i_33)), not_null(e_33));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm s_33 = NULL;
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_33 = NULL;
      t_33 = t;
      {
        if(((s_33 != NULL) && (s_33 != t_33)))
          _fail(t_33);
        else
          s_33 = t_33;
        t = SSL_ReadFromFile(not_null(s_33));
      }
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_j_14;
          return(t);
        }
        t = debug_1(t, i_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_78 (ATerm), ATerm w_78 (ATerm))
{
  ATerm x_33 = NULL,z_33 = NULL;
  ATerm k_14;
  k_14 = t;
  {
    ATerm y_33 = NULL;
    t = v_78(t);
    {
      y_33 = t;
      if(((x_33 != NULL) && (x_33 != y_33)))
        _fail(y_33);
      else
        x_33 = y_33;
    }
  }
  t = k_14;
  {
    ATerm a_34 = NULL;
    t = w_78(t);
    {
      a_34 = t;
      if(((z_33 != NULL) && (z_33 != a_34)))
        _fail(a_34);
      else
        z_33 = a_34;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_33), not_null(z_33));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_34 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 (ATerm t)
        {
          ATerm h_34 = NULL,i_34 = NULL;
          h_34 = t;
          e_34 :
          if(match_cons(h_34, sym_Input_1))
            {
              i_34 = ATgetArgument(h_34, 0);
              if(((g_34 != NULL) && (g_34 != i_34)))
                _fail(i_34);
              else
                g_34 = i_34;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, j_2);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          ATerm j_34 = NULL;
          t = term_s_14;
          {
            j_34 = t;
            if(((g_34 != NULL) && (g_34 != j_34)))
              _fail(j_34);
            else
              g_34 = j_34;
          }
        }
      }
  }
  t = l_14;
  {
    ATerm k_2 (ATerm t)
    {
      t = not_null(g_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_2);
  }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm t_14;
  t_14 = t;
  {
    t = x_81(t);
    {
      ATerm l_2 (ATerm t)
      {
        t = term_u_14;
        return(t);
      }
      t = debug_1(t, l_2);
    }
  }
  t = t_14;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL;
  ATerm y_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
      s_34 = t;
      n_34 :
      if(match_cons(s_34, sym__2))
        {
          t_34 = ATgetArgument(s_34, 0);
          u_34 = ATgetArgument(s_34, 1);
          {
            if(((r_34 != NULL) && (r_34 != t_34)))
              _fail(t_34);
            else
              r_34 = t_34;
            if(((q_34 != NULL) && (q_34 != u_34)))
              _fail(u_34);
            else
              q_34 = u_34;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_15);
      t = SSL_open_file(not_null(r_34), not_null(q_34));
    }
  else
    {
      t = y_14;
      {
        ATerm v_34 = NULL;
        ATerm w_34 = NULL;
        ATerm m_2 (ATerm t)
        {
          t = term_d_15;
          return(t);
        }
        t = obsolete_1(t, m_2);
        {
          v_34 = t;
          {
            if(((r_34 != NULL) && (r_34 != v_34)))
              _fail(v_34);
            else
              r_34 = v_34;
            {
              ATerm e_15;
              e_15 = t;
              {
                ATerm x_34 = NULL;
                t = term_f_15;
                {
                  x_34 = t;
                  if(((w_34 != NULL) && (w_34 != x_34)))
                    _fail(x_34);
                  else
                    w_34 = x_34;
                }
              }
              t = e_15;
              t = SSL_open_file(not_null(r_34), not_null(w_34));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm b_35 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_71, _id);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = Cons_2(t, _id, b_35);
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_85 (ATerm))
{
  t = fetch_1(t, p_85);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm e_35 = NULL;
  ATerm i_15;
  i_15 = t;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm f_35 = NULL,g_35 = NULL;
      f_35 = t;
      d_35 :
      if(match_cons(f_35, sym_Program_1))
        {
          g_35 = ATgetArgument(f_35, 0);
          if(((e_35 != NULL) && (e_35 != g_35)))
            _fail(g_35);
          else
            e_35 = g_35;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, n_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_15), not_null(e_35)), term_j_15));
      {
        t = printnl_0(t);
        {
          t = term_b_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_15;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym_Version_0))
    {
      ATerm o_35 = NULL,q_35 = NULL;
      ATerm o_15;
      o_15 = t;
      {
        ATerm p_35 = NULL;
        t = SSLgetAnnotations(not_null(m_35));
        {
          p_35 = t;
          if(((o_35 != NULL) && (o_35 != p_35)))
            _fail(p_35);
          else
            o_35 = p_35;
        }
      }
      t = o_15;
      {
        ATerm r_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_35));
        {
          r_35 = t;
          if(((q_35 != NULL) && (q_35 != r_35)))
            _fail(r_35);
          else
            q_35 = r_35;
        }
        t = not_null(q_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_82 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_2);
  t = s_82(t);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm w_35 = NULL;
    w_35 = t;
    v_35 :
    if(!(match_string(w_35, "-v")))
      {
        if(!(match_string(w_35, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_a_16;
    t = set_config_0(t);
    t = term_b_16;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_h_16;
    return(t);
  }
  t = Option_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm z_35 = NULL;
    z_35 = t;
    x_35 :
    if(!(match_string(z_35, "-k")))
      {
        if(!(match_string(z_35, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm i_16;
    i_16 = t;
    {
      ATerm a_36 = NULL;
      ATerm b_36 = NULL;
      t = string_to_int_0(t);
      {
        b_36 = t;
        if(((a_36 != NULL) && (a_36 != b_36)))
          _fail(b_36);
        else
          a_36 = b_36;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_16, not_null(a_36));
        t = set_config_0(t);
      }
    }
    t = i_16;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_l_16;
    return(t);
  }
  t = ArgOption_3(t, s_2, t_2, u_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  t = SSL_string_to_int(not_null(e_36));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        ATerm m_36 = NULL;
        m_36 = t;
        h_36 :
        if(!(match_string(m_36, "-S")))
          {
            if(!(match_string(m_36, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_o_16;
        t = set_config_0(t);
        t = term_p_16;
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_q_16;
        return(t);
      }
      t = Option_3(t, v_2, w_2, z_2);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm r_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm n_36 = NULL;
              n_36 = t;
              i_36 :
              if(!(match_string(n_36, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm q_36 = NULL;
              ATerm i_17;
              i_17 = t;
              {
                ATerm o_36 = NULL;
                ATerm p_36 = NULL;
                t = string_to_int_0(t);
                {
                  p_36 = t;
                  if(((o_36 != NULL) && (o_36 != p_36)))
                    _fail(p_36);
                  else
                    o_36 = p_36;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_6, not_null(o_36));
                  t = set_config_0(t);
                }
              }
              t = i_17;
              {
                ATerm r_36 = NULL;
                r_36 = t;
                if(((q_36 != NULL) && (q_36 != r_36)))
                  _fail(r_36);
                else
                  q_36 = r_36;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_36));
              }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_j_17;
              return(t);
            }
            t = ArgOption_3(t, a_3, b_3, c_3);
            LocalPopChoice(z_16);
          }
        else
          {
            t = r_16;
            {
              ATerm d_3 (ATerm t)
              {
                ATerm s_36 = NULL;
                s_36 = t;
                l_36 :
                if(!(match_string(s_36, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_l_17;
                t = set_config_0(t);
                t = term_m_17;
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_n_17;
                return(t);
              }
              t = Option_3(t, d_3, e_3, f_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm y_36 = NULL;
    y_36 = t;
    v_36 :
    if(!(match_string(y_36, "-o")))
      {
        if(!(match_string(y_36, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm b_37 = NULL;
    ATerm s_17;
    s_17 = t;
    {
      ATerm z_36 = NULL;
      ATerm a_37 = NULL;
      a_37 = t;
      if(((z_36 != NULL) && (z_36 != a_37)))
        _fail(a_37);
      else
        z_36 = a_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_17, not_null(z_36));
        t = set_config_0(t);
      }
    }
    t = s_17;
    {
      ATerm c_37 = NULL;
      c_37 = t;
      if(((b_37 != NULL) && (b_37 != c_37)))
        _fail(c_37);
      else
        b_37 = c_37;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_37));
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_u_17;
    return(t);
  }
  t = ArgOption_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm g_37 = NULL;
          g_37 = t;
          f_37 :
          if(!(match_string(g_37, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = term_z_17;
          t = set_config_0(t);
          t = term_a_18;
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = term_b_18;
          return(t);
        }
        t = Option_3(t, j_3, k_3, l_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
  m_37 = t;
  k_37 :
  if(match_string(m_37, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
        {
          n_37 = ATgetFirst((ATermList) m_37);
          o_37 = (ATerm) ATgetNext((ATermList) m_37);
          l_37 :
          if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
            {
              p_37 = ATgetFirst((ATermList) o_37);
              q_37 = (ATerm) ATgetNext((ATermList) o_37);
              {
                ATerm x_37 = NULL;
                ATerm e_18;
                e_18 = t;
                {
                  t = not_null(n_37);
                  t = j_0(t);
                }
                t = e_18;
                {
                  ATerm y_37 = NULL;
                  t = not_null(p_37);
                  {
                    t = k_0(t);
                    {
                      y_37 = t;
                      if(((x_37 != NULL) && (x_37 != y_37)))
                        _fail(y_37);
                      else
                        x_37 = y_37;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_37)), not_null(x_37));
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
  ATerm m_3 (ATerm t)
  {
    ATerm f_38 = NULL;
    f_38 = t;
    c_38 :
    if(!(match_string(f_38, "-i")))
      {
        if(!(match_string(f_38, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm i_38 = NULL;
    ATerm f_18;
    f_18 = t;
    {
      ATerm g_38 = NULL;
      ATerm h_38 = NULL;
      h_38 = t;
      if(((g_38 != NULL) && (g_38 != h_38)))
        _fail(h_38);
      else
        g_38 = h_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_18, not_null(g_38));
        t = set_config_0(t);
      }
    }
    t = f_18;
    {
      ATerm j_38 = NULL;
      j_38 = t;
      if(((i_38 != NULL) && (i_38 != j_38)))
        _fail(j_38);
      else
        i_38 = j_38;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_38));
    }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_h_18;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, o_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_38 = NULL;
  n_38 = t;
  t = SSL_table_destroy(not_null(n_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_38 = NULL;
  r_38 = t;
  t = SSL_exit(not_null(r_38));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  u_38 :
  if(((ATgetType(v_38) == AT_LIST) && ATisEmpty(v_38)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_38) == AT_LIST) && !(ATisEmpty(v_38))))
        {
          w_38 = ATgetFirst((ATermList) v_38);
          x_38 = (ATerm) ATgetNext((ATermList) v_38);
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
  ATerm m_18;
  m_18 = t;
  {
    ATerm a_39 = NULL;
    ATerm d_39 = NULL;
    ATerm u_18 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = u_18;
        {
          ATerm b_39 = NULL;
          ATerm c_39 = NULL;
          c_39 = t;
          if(((b_39 != NULL) && (b_39 != c_39)))
            _fail(c_39);
          else
            b_39 = c_39;
          t = (ATerm) ATinsert(ATempty, not_null(b_39));
        }
      }
    {
      d_39 = t;
      if(((a_39 != NULL) && (a_39 != d_39)))
        _fail(d_39);
      else
        a_39 = d_39;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_19, not_null(a_39));
      t = printnl_0(t);
    }
  }
  t = m_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  p_39 = t;
  l_39 :
  if(((ATgetType(p_39) == AT_LIST) && !(ATisEmpty(p_39))))
    {
      n_39 = ATgetFirst((ATermList) p_39);
      o_39 = (ATerm) ATgetNext((ATermList) p_39);
      {
        ATerm u_39 = NULL;
        t = not_null(o_39);
        {
          ATerm f_19;
          f_19 = t;
          {
            ATerm v_39 = NULL,z_39 = NULL,b_40 = NULL;
            ATerm g_19;
            g_19 = t;
            {
              ATerm w_39 = NULL;
              t = i_0(t);
              {
                w_39 = t;
                if(((v_39 != NULL) && (v_39 != w_39)))
                  _fail(w_39);
                else
                  v_39 = w_39;
              }
            }
            t = g_19;
            {
              ATerm a_40 = NULL;
              t = not_null(n_39);
              {
                t = h_0(t);
                {
                  a_40 = t;
                  if(((z_39 != NULL) && (z_39 != a_40)))
                    _fail(a_40);
                  else
                    z_39 = a_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_39)), not_null(z_39));
                {
                  b_40 = t;
                  if(((u_39 != NULL) && (u_39 != b_40)))
                    _fail(b_40);
                  else
                    u_39 = b_40;
                }
              }
            }
          }
          t = f_19;
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(u_39);
              return(t);
            }
            t = reverse_acc_2(t, h_0, p_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_39) == AT_LIST) && ATisEmpty(p_39)))
        {
          {
            t = term_e_8;
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
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_Program_1))
    {
      n_40 = ATgetArgument(m_40, 0);
      {
        ATerm q_40 = NULL,u_40 = NULL;
        ATerm t_40 = NULL;
        t = SSLgetAnnotations(not_null(m_40));
        {
          t_40 = t;
          if(((q_40 != NULL) && (q_40 != t_40)))
            _fail(t_40);
          else
            q_40 = t_40;
        }
        {
          t = not_null(n_40);
          {
            ATerm w_40 = NULL;
            t = k_62(t);
            {
              u_40 = t;
              {
                ATerm y_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_40)), not_null(q_40));
                {
                  y_40 = t;
                  if(((w_40 != NULL) && (w_40 != y_40)))
                    _fail(y_40);
                  else
                    w_40 = y_40;
                }
                t = not_null(w_40);
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
  ATerm h_41 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_41 = NULL;
      t = term_n_6;
      {
        t = get_config_0(t);
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
      }
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm w_3 (ATerm t)
          {
            ATerm j_41 = NULL;
            j_41 = t;
            if(((h_41 != NULL) && (h_41 != j_41)))
              _fail(j_41);
            else
              h_41 = j_41;
            return(t);
          }
          t = Program_1(t, w_3);
          return(t);
        }
        t = option_defined_1(t, t_3);
      }
    }
  {
    ATerm a_4 (ATerm t)
    {
      ATerm b_4 (ATerm t)
      {
        t = not_null(h_41);
        return(t);
      }
      t = short_description_1(t, b_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_4);
    {
      t = term_j_19;
      {
        t = echo_0(t);
        {
          t = term_m_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm k_41 = NULL;
                  ATerm l_41 = NULL;
                  l_41 = t;
                  if(((k_41 != NULL) && (k_41 != l_41)))
                    _fail(l_41);
                  else
                    k_41 = l_41;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_41)), term_n_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_4);
                {
                  ATerm d_4 (ATerm t)
                  {
                    ATerm m_41 = NULL;
                    ATerm n_41 = NULL;
                    ATerm g_4 (ATerm t)
                    {
                      t = not_null(h_41);
                      return(t);
                    }
                    t = long_description_1(t, g_4);
                    {
                      n_41 = t;
                      if(((m_41 != NULL) && (m_41 != n_41)))
                        _fail(n_41);
                      else
                        m_41 = n_41;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), term_o_19);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_4);
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
  ATerm p_19;
  p_19 = t;
  {
    ATerm t_41 = NULL;
    ATerm u_41 = NULL;
    u_41 = t;
    if(((t_41 != NULL) && (t_41 != u_41)))
      _fail(u_41);
    else
      t_41 = u_41;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATempty, not_null(t_41)));
      t = printnl_0(t);
    }
  }
  t = p_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm q_19;
  q_19 = t;
  {
    t = r_81(t);
    t = debug_0(t);
  }
  t = q_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm h_42 = NULL,i_42 = NULL;
  h_42 = t;
  g_42 :
  if(match_cons(h_42, sym_Undefined_1))
    {
      i_42 = ATgetArgument(h_42, 0);
      {
        ATerm m_42 = NULL,o_42 = NULL;
        ATerm n_42 = NULL;
        t = SSLgetAnnotations(not_null(h_42));
        {
          n_42 = t;
          if(((m_42 != NULL) && (m_42 != n_42)))
            _fail(n_42);
          else
            m_42 = n_42;
        }
        {
          t = not_null(i_42);
          {
            ATerm r_42 = NULL;
            t = l_62(t);
            {
              o_42 = t;
              {
                ATerm s_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_42)), not_null(m_42));
                {
                  s_42 = t;
                  if(((r_42 != NULL) && (r_42 != s_42)))
                    _fail(s_42);
                  else
                    r_42 = s_42;
                }
                t = not_null(r_42);
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
ATerm Help_0 (ATerm t)
{
  ATerm b_43 = NULL;
  b_43 = t;
  a_43 :
  if(match_cons(b_43, sym_Help_0))
    {
      ATerm d_43 = NULL,f_43 = NULL;
      ATerm r_19;
      r_19 = t;
      {
        ATerm e_43 = NULL;
        t = SSLgetAnnotations(not_null(b_43));
        {
          e_43 = t;
          if(((d_43 != NULL) && (d_43 != e_43)))
            _fail(e_43);
          else
            d_43 = e_43;
        }
      }
      t = r_19;
      {
        ATerm g_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_43));
        {
          g_43 = t;
          if(((f_43 != NULL) && (f_43 != g_43)))
            _fail(g_43);
          else
            f_43 = g_43;
        }
        t = not_null(f_43);
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
  ATerm l_43 = NULL;
  l_43 = t;
  t = SSL_implode_string(not_null(l_43));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
        q_43 = t;
        p_43 :
        if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
          {
            r_43 = ATgetFirst((ATermList) q_43);
            s_43 = (ATerm) ATgetNext((ATermList) q_43);
            {
              t = not_null(r_43);
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(s_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_4);
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
  ATerm c_44 = NULL;
  ATerm e_44 = NULL;
  c_44 = t;
  {
    ATerm f_44 = NULL;
    ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
    t = not_null(c_44);
    {
      f_44 = t;
      {
        t = SSL_explode_term(not_null(f_44));
        {
          h_44 = t;
          a_44 :
          if(match_cons(h_44, sym__2))
            {
              i_44 = ATgetArgument(h_44, 0);
              j_44 = ATgetArgument(h_44, 1);
              b_44 :
              if(match_string(i_44, ""))
                {
                  if(((e_44 != NULL) && (e_44 != j_44)))
                    _fail(j_44);
                  else
                    e_44 = j_44;
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
      t = not_null(e_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm n_44 (ATerm t)
  {
    ATerm u_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_44);
        LocalPopChoice(x_19);
      }
    else
      {
        t = u_19;
        {
          t = Nil_0(t);
          t = h_71(t);
        }
      }
    return(t);
  }
  t = n_44(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym__2))
    {
      r_44 = ATgetArgument(q_44, 0);
      s_44 = ATgetArgument(q_44, 1);
      {
        t = not_null(r_44);
        {
          ATerm i_4 (ATerm t)
          {
            t = not_null(s_44);
            return(t);
          }
          t = at_end_1(t, i_4);
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
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  t = SSL_explode_string(not_null(x_44));
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
ATerm printnl_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  c_45 = t;
  b_45 :
  if(match_cons(c_45, sym__2))
    {
      d_45 = ATgetArgument(c_45, 0);
      e_45 = ATgetArgument(c_45, 1);
      {
        ATerm a_20;
        a_20 = t;
        t = SSL_printnl(not_null(d_45), not_null(e_45));
        t = a_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_81 (ATerm))
{
  ATerm b_20;
  b_20 = t;
  {
    ATerm k_45 = NULL,m_45 = NULL;
    ATerm c_20;
    c_20 = t;
    {
      ATerm l_45 = NULL;
      t = q_81(t);
      {
        l_45 = t;
        if(((k_45 != NULL) && (k_45 != l_45)))
          _fail(l_45);
        else
          k_45 = l_45;
      }
    }
    t = c_20;
    {
      ATerm n_45 = NULL;
      n_45 = t;
      if(((m_45 != NULL) && (m_45 != n_45)))
        _fail(n_45);
      else
        m_45 = n_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_45)), not_null(k_45)));
        t = printnl_0(t);
      }
    }
  }
  t = b_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm r_45 (ATerm t)
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = Cons_2(t, s_70, r_45);
      }
    return(t);
  }
  t = r_45(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_4);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm y_45 = NULL,z_45 = NULL,c_46 = NULL;
              y_45 = t;
              x_45 :
              if(match_cons(y_45, sym_Path_1))
                {
                  z_45 = ATgetArgument(y_45, 0);
                  t = not_null(z_45);
                }
              else
                {
                  if(match_cons(y_45, sym_Var_1))
                    {
                      z_45 = ATgetArgument(y_45, 0);
                      {
                        t = not_null(z_45);
                        {
                          ATerm n_20 = t;
                          int p_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_20);
                            }
                          else
                            {
                              t = n_20;
                              {
                                ATerm o_4 (ATerm t)
                                {
                                  t = term_u_20;
                                  return(t);
                                }
                                t = debug_1(t, o_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_45, sym_Prefix_2))
                        {
                          z_45 = ATgetArgument(y_45, 0);
                          c_46 = ATgetArgument(y_45, 1);
                          {
                            ATerm h_46 = NULL,t_46 = NULL;
                            ATerm v_20;
                            v_20 = t;
                            {
                              ATerm i_46 = NULL;
                              t = not_null(z_45);
                              {
                                t = eval_config_0(t);
                                {
                                  i_46 = t;
                                  if(((h_46 != NULL) && (h_46 != i_46)))
                                    _fail(i_46);
                                  else
                                    h_46 = i_46;
                                }
                              }
                            }
                            t = v_20;
                            {
                              ATerm u_46 = NULL;
                              t = not_null(c_46);
                              {
                                t = eval_config_0(t);
                                {
                                  u_46 = t;
                                  if(((t_46 != NULL) && (t_46 != u_46)))
                                    _fail(u_46);
                                  else
                                    t_46 = u_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_46), not_null(t_46));
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
  ATerm g_47 = NULL;
  g_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_20, not_null(g_47));
    {
      t = table_get_0(t);
      {
        ATerm p_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_20;
            x_20 = t;
            {
              ATerm i_47 = NULL;
              ATerm j_47 = NULL;
              j_47 = t;
              if(((i_47 != NULL) && (i_47 != j_47)))
                _fail(j_47);
              else
                i_47 = j_47;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_20, not_null(g_47), not_null(i_47));
                t = table_put_0(t);
              }
            }
            t = x_20;
          }
          return(t);
        }
        t = try_1(t, p_4);
      }
    }
  }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
  o_47 = t;
  n_47 :
  if(match_cons(o_47, sym__2))
    {
      p_47 = ATgetArgument(o_47, 0);
      q_47 = ATgetArgument(o_47, 1);
      t = SSL_table_get(not_null(p_47), not_null(q_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym__3))
    {
      z_47 = ATgetArgument(x_47, 0);
      a_48 = ATgetArgument(x_47, 1);
      b_48 = ATgetArgument(x_47, 2);
      {
        ATerm y_20;
        y_20 = t;
        {
          ATerm f_48 = NULL;
          ATerm g_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_47), not_null(a_48));
          {
            ATerm z_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_21);
              }
            else
              {
                t = z_20;
                t = (ATerm) ATempty;
              }
            {
              g_48 = t;
              if(((f_48 != NULL) && (f_48 != g_48)))
                _fail(g_48);
              else
                f_48 = g_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_47), not_null(a_48), (ATerm) ATinsert(CheckATermList(not_null(f_48)), not_null(b_48)));
            t = table_put_0(t);
          }
        }
        t = y_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm k_48 = NULL;
  ATerm l_48 = NULL;
  t = term_e_8;
  {
    t = u_86(t);
    {
      l_48 = t;
      if(((k_48 != NULL) && (k_48 != l_48)))
        _fail(l_48);
      else
        k_48 = l_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_19, term_l_19, not_null(k_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_string(r_48, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_48) == AT_LIST) && !(ATisEmpty(r_48))))
        {
          s_48 = ATgetFirst((ATermList) r_48);
          t_48 = (ATerm) ATgetNext((ATermList) r_48);
          {
            ATerm w_48 = NULL;
            ATerm b_21;
            b_21 = t;
            {
              t = not_null(s_48);
              t = a_0(t);
            }
            t = b_21;
            {
              ATerm x_48 = NULL;
              t = term_e_8;
              {
                t = d_0(t);
                {
                  x_48 = t;
                  if(((w_48 != NULL) && (w_48 != x_48)))
                    _fail(x_48);
                  else
                    w_48 = x_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_48)), not_null(w_48));
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
  ATerm u_4 (ATerm t)
  {
    ATerm f_49 = NULL;
    f_49 = t;
    e_49 :
    if(!(match_string(f_49, "--help")))
      {
        if(!(match_string(f_49, "-h")))
          {
            if(!(match_string(f_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_d_21;
    {
      t = set_config_0(t);
      t = term_e_21;
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_f_21;
    return(t);
  }
  t = Option_3(t, u_4, v_4, w_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  h_49 :
  if(((ATgetType(i_49) == AT_LIST) && !(ATisEmpty(i_49))))
    {
      j_49 = ATgetFirst((ATermList) i_49);
      k_49 = (ATerm) ATgetNext((ATermList) i_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  t_49 :
  if(((ATgetType(u_49) == AT_LIST) && !(ATisEmpty(u_49))))
    {
      v_49 = ATgetFirst((ATermList) u_49);
      w_49 = (ATerm) ATgetNext((ATermList) u_49);
      {
        ATerm a_50 = NULL,c_50 = NULL;
        ATerm b_50 = NULL;
        t = SSLgetAnnotations(not_null(u_49));
        {
          b_50 = t;
          if(((a_50 != NULL) && (a_50 != b_50)))
            _fail(b_50);
          else
            a_50 = b_50;
        }
        {
          t = not_null(v_49);
          {
            ATerm e_50 = NULL;
            t = g_55(t);
            {
              c_50 = t;
              {
                t = not_null(w_49);
                {
                  ATerm g_50 = NULL;
                  t = h_55(t);
                  {
                    e_50 = t;
                    {
                      ATerm h_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_50)), not_null(c_50)), not_null(a_50));
                      {
                        h_50 = t;
                        if(((g_50 != NULL) && (g_50 != h_50)))
                          _fail(h_50);
                        else
                          g_50 = h_50;
                      }
                      t = not_null(g_50);
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
  ATerm x_50 = NULL;
  x_50 = t;
  w_50 :
  if(((ATgetType(x_50) == AT_LIST) && ATisEmpty(x_50)))
    {
      {
        ATerm z_50 = NULL,b_51 = NULL;
        ATerm g_21;
        g_21 = t;
        {
          ATerm a_51 = NULL;
          t = SSLgetAnnotations(not_null(x_50));
          {
            a_51 = t;
            if(((z_50 != NULL) && (z_50 != a_51)))
              _fail(a_51);
            else
              z_50 = a_51;
          }
        }
        t = g_21;
        {
          ATerm c_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_50));
          {
            c_51 = t;
            if(((b_51 != NULL) && (b_51 != c_51)))
              _fail(c_51);
            else
              b_51 = c_51;
          }
          t = not_null(b_51);
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
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  h_51 :
  if(match_cons(i_51, sym__2))
    {
      j_51 = ATgetArgument(i_51, 0);
      k_51 = ATgetArgument(i_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_20, not_null(j_51), not_null(k_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm h_21;
  h_21 = t;
  {
    ATerm x_4 (ATerm t)
    {
      t = term_i_21;
      t = s_86(t);
      return(t);
    }
    t = try_1(t, x_4);
  }
  t = h_21;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm s_51 = NULL;
      ATerm j_21;
      j_21 = t;
      {
        ATerm q_51 = NULL;
        ATerm r_51 = NULL;
        r_51 = t;
        if(((q_51 != NULL) && (q_51 != r_51)))
          _fail(r_51);
        else
          q_51 = r_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_6, not_null(q_51));
          t = set_config_0(t);
        }
      }
      t = j_21;
      {
        ATerm t_51 = NULL;
        t_51 = t;
        if(((s_51 != NULL) && (s_51 != t_51)))
          _fail(t_51);
        else
          s_51 = t_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_51));
      }
      return(t);
    }
    ATerm a_5 (ATerm t)
    {
      ATerm k_21 = t;
      int l_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              {
                t = s_86(t);
                t = Cons_2(t, _id, a_5);
              }
            }
          LocalPopChoice(l_21);
        }
      else
        {
          t = k_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_4, a_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
  ATerm o_21;
  o_21 = t;
  {
    ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
    c_52 = t;
    y_51 :
    if(match_cons(c_52, sym__3))
      {
        d_52 = ATgetArgument(c_52, 0);
        e_52 = ATgetArgument(c_52, 1);
        f_52 = ATgetArgument(c_52, 2);
        {
          if(((z_51 != NULL) && (z_51 != d_52)))
            _fail(d_52);
          else
            z_51 = d_52;
          {
            if(((a_52 != NULL) && (a_52 != e_52)))
              _fail(e_52);
            else
              a_52 = e_52;
            {
              if(((b_52 != NULL) && (b_52 != f_52)))
                _fail(f_52);
              else
                b_52 = f_52;
              t = SSL_table_put(not_null(z_51), not_null(a_52), not_null(b_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm i_52 = NULL;
  ATerm p_21;
  p_21 = t;
  {
    t = term_q_21;
    t = table_put_0(t);
  }
  t = p_21;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_86(t);
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_5);
    {
      ATerm g_5 (ATerm t)
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_21;
            v_21 = t;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_21;
                  t = get_config_0(t);
                  LocalPopChoice(x_21);
                }
              else
                {
                  t = w_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_21;
            {
              t = system_usage_0(t);
              {
                t = term_b_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm h_5 (ATerm t)
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm j_52 = NULL;
                  j_52 = t;
                  if(((i_52 != NULL) && (i_52 != j_52)))
                    _fail(j_52);
                  else
                    i_52 = j_52;
                  return(t);
                }
                t = Undefined_1(t, i_5);
                return(t);
              }
              t = option_defined_1(t, h_5);
              {
                ATerm j_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_52)), term_y_21);
                  return(t);
                }
                t = say_1(t, j_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_5;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_5);
      {
        ATerm z_21;
        z_21 = t;
        {
          t = term_k_19;
          t = table_destroy_0(t);
        }
        t = z_21;
      }
    }
  }
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm r_52 = NULL;
  ATerm t_52 = NULL,u_52 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    r_52 = t;
    {
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_22;
                e_22 = t;
                {
                  ATerm f_22 = t;
                  int g_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_5 (ATerm t)
                      {
                        ATerm v_52 = NULL,w_52 = NULL;
                        v_52 = t;
                        n_52 :
                        if(match_cons(v_52, sym_Output_1))
                          {
                            w_52 = ATgetArgument(v_52, 0);
                            if(((u_52 != NULL) && (u_52 != w_52)))
                              _fail(w_52);
                            else
                              u_52 = w_52;
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = option_defined_1(t, k_5);
                      {
                        t = not_null(u_52);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(g_22);
                    }
                  else
                    {
                      t = f_22;
                      {
                        ATerm x_52 = NULL;
                        t = term_e_19;
                        {
                          x_52 = t;
                          if(((u_52 != NULL) && (u_52 != x_52)))
                            _fail(x_52);
                          else
                            u_52 = x_52;
                        }
                      }
                    }
                }
                t = e_22;
                {
                  t = input_file_0(t);
                  {
                    ATerm p_5 (ATerm t)
                    {
                      ATerm y_52 = NULL;
                      t = abox2text_0(t);
                      {
                        y_52 = t;
                        if(((t_52 != NULL) && (t_52 != y_52)))
                          _fail(y_52);
                        else
                          t_52 = y_52;
                      }
                      return(t);
                    }
                    t = _2(t, _id, p_5);
                    {
                      t = not_null(t_52);
                      {
                        ATerm q_5 (ATerm t)
                        {
                          ATerm t_5 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm h_22;
                              h_22 = t;
                              {
                                ATerm z_52 = NULL;
                                ATerm a_53 = NULL;
                                a_53 = t;
                                if(((z_52 != NULL) && (z_52 != a_53)))
                                  _fail(a_53);
                                else
                                  z_52 = a_53;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_52), (ATerm) ATinsert(ATempty, not_null(z_52)));
                                  t = print_0(t);
                                }
                              }
                              t = h_22;
                            }
                            return(t);
                          }
                          t = try_1(t, t_5);
                          return(t);
                        }
                        t = topdown_1(t, q_5);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_52), (ATerm) ATinsert(ATempty, term_o_19));
                          {
                            t = print_0(t);
                            t = report_success_0(t);
                          }
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Abox_2_text_0(t);
  return(t);
}
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
ATerm term_u_22;
ATerm term_i_22;
ATerm term_y_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_z_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_t_12;
ATerm term_b_10;
ATerm term_b_9;
ATerm term_d_8;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_v_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_q_5;
ATerm term_o_5;
ATerm term_g_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("*** error: invalid box: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: HV box not supported", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_f_7);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_o_5, term_g_5);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_5);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_f_7);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_f_7);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_f_7);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__3, term_p_19, term_q_19, (ATerm) ATempty);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm));
ATerm crush_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_62 (ATerm));
ATerm topdown_1 (ATerm, ATerm j_64 (ATerm));
ATerm subt_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_84 (ATerm));
ATerm dissuader_1 (ATerm, ATerm s_81 (ATerm));
ATerm separate_by_1 (ATerm, ATerm i_70 (ATerm));
ATerm add_0 (ATerm);
ATerm Abox2text_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm q_77 (ATerm));
ATerm H_2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm filter_1 (ATerm, ATerm d_78 (ATerm));
ATerm foldr_3 (ATerm, ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm m_71 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_64 (ATerm), ATerm b_64 (ATerm));
ATerm for_3 (ATerm, ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm f_64 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm e_55 (ATerm), ATerm f_55 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm f_71 (ATerm));
ATerm split_at_1 (ATerm, ATerm m_0 (ATerm));
ATerm string_length_p__1 (ATerm, ATerm s_62 (ATerm));
ATerm map_to_r_box_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm Abox2text_p__0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm _2 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm input_file_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm r_81 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm v_70 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_85 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_82 (ATerm));
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
ATerm long_description_1 (ATerm, ATerm k_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_86 (ATerm));
ATerm Program_1 (ATerm, ATerm g_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm l_81 (ATerm));
ATerm Undefined_1 (ATerm, ATerm h_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_81 (ATerm));
ATerm map_1 (ATerm, ATerm m_70 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_55 (ATerm), ATerm d_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_86 (ATerm));
ATerm Abox_2_text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATempty, term_b_5));
  {
    t = printnl_0(t);
    {
      t = term_c_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  t = SSL_TicksToSeconds(not_null(g_1));
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm))
{
  ATerm d_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_77(t);
      LocalPopChoice(f_5);
    }
  else
    {
      t = d_5;
      {
        ATerm i_2 = NULL,w_2 = NULL,y_2 = NULL;
        i_2 = t;
        h_2 :
        if(((ATgetType(i_2) == AT_LIST) && !(ATisEmpty(i_2))))
          {
            w_2 = ATgetFirst((ATermList) i_2);
            y_2 = (ATerm) ATgetNext((ATermList) i_2);
            {
              ATerm p_3 = NULL;
              ATerm q_3 = NULL;
              t = not_null(y_2);
              {
                t = foldr_2(t, a_77, b_77);
                {
                  q_3 = t;
                  if(((p_3 != NULL) && (p_3 != q_3)))
                    _fail(q_3);
                  else
                    p_3 = q_3;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_2), not_null(p_3));
                t = b_77(t);
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
ATerm crush_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm y_3 = NULL;
  ATerm a_4 = NULL;
  y_3 = t;
  {
    ATerm b_4 = NULL;
    ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
    t = not_null(y_3);
    {
      b_4 = t;
      {
        t = SSL_explode_term(not_null(b_4));
        {
          d_4 = t;
          x_3 :
          if(match_cons(d_4, sym__2))
            {
              e_4 = ATgetArgument(d_4, 0);
              f_4 = ATgetArgument(d_4, 1);
              if(((a_4 != NULL) && (a_4 != f_4)))
                _fail(f_4);
              else
                a_4 = f_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_4);
      t = foldr_2(t, y_75, z_75);
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
      t = term_g_5;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm h_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5;
      n_5 = t;
      {
        ATerm k_4 = NULL;
        ATerm l_4 = NULL;
        t = term_o_5;
        {
          t = get_config_0(t);
          {
            l_4 = t;
            if(((k_4 != NULL) && (k_4 != l_4)))
              _fail(l_4);
            else
              k_4 = l_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), term_c_5);
          t = geq_0(t);
        }
      }
      t = n_5;
      t = g_84(t);
      LocalPopChoice(m_5);
    }
  else
    {
      t = h_5;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm p_4 = NULL,r_4 = NULL;
    ATerm p_5;
    p_5 = t;
    {
      ATerm q_4 = NULL;
      t = run_time_0(t);
      {
        q_4 = t;
        if(((p_4 != NULL) && (p_4 != q_4)))
          _fail(q_4);
        else
          p_4 = q_4;
      }
    }
    t = p_5;
    {
      ATerm s_4 = NULL;
      t = term_q_5;
      {
        t = get_config_0(t);
        {
          s_4 = t;
          if(((r_4 != NULL) && (r_4 != s_4)))
            _fail(s_4);
          else
            r_4 = s_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_5), not_null(p_4)), term_v_5), not_null(r_4)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  {
    t = term_g_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym__2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm z_5;
        z_5 = t;
        t = SSL_print(not_null(y_4), not_null(z_4));
        t = z_5;
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
  ATerm e_5 = NULL;
  e_5 = t;
  t = SSL_is_string(not_null(e_5));
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_62(t);
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm j_64 (ATerm))
{
  t = j_64(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, j_64);
      return(t);
    }
    t = _all(t, e_0);
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        ATerm c_6 = t;
        int f_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(k_5), not_null(l_5));
            LocalPopChoice(f_6);
          }
        else
          {
            t = c_6;
            t = SSL_subtr(not_null(k_5), not_null(l_5));
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
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      {
        t = not_null(u_5);
        {
          ATerm g_6 = t;
          int h_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_6);
            }
          else
            {
              t = g_6;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm m_6 = t;
                  int n_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(n_6);
                    }
                  else
                    {
                      t = m_6;
                      {
                        ATerm x_5 = NULL;
                        t = Cons_2(t, _id, f_0);
                        {
                          ATerm y_5 = NULL;
                          y_5 = t;
                          if(((x_5 != NULL) && (x_5 != y_5)))
                            _fail(y_5);
                          else
                            x_5 = y_5;
                          t = (ATerm) ATinsert(CheckATermList(not_null(x_5)), not_null(t_5));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, f_0);
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
ATerm if_verbose2_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm o_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6;
      u_6 = t;
      {
        ATerm d_6 = NULL;
        ATerm e_6 = NULL;
        t = term_o_5;
        {
          t = get_config_0(t);
          {
            e_6 = t;
            if(((d_6 != NULL) && (d_6 != e_6)))
              _fail(e_6);
            else
              d_6 = e_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), term_v_6);
          t = geq_0(t);
        }
      }
      t = u_6;
      t = h_84(t);
      LocalPopChoice(t_6);
    }
  else
    {
      t = o_6;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm w_6;
  w_6 = t;
  {
    ATerm n_0 (ATerm t)
    {
      t = s_81(t);
      {
        ATerm o_0 (ATerm t)
        {
          t = term_c_7;
          return(t);
        }
        t = debug_1(t, o_0);
      }
      return(t);
    }
    t = if_verbose2_1(t, n_0);
  }
  t = w_6;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm i_6 = NULL,k_6 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = term_d_7;
    return(t);
  }
  t = dissuader_1(t, p_0);
  {
    ATerm e_7;
    e_7 = t;
    {
      ATerm j_6 = NULL;
      j_6 = t;
      if(((i_6 != NULL) && (i_6 != j_6)))
        _fail(j_6);
      else
        i_6 = j_6;
    }
    t = e_7;
    {
      ATerm l_6 = NULL;
      t = term_f_7;
      {
        t = i_70(t);
        {
          l_6 = t;
          if(((k_6 != NULL) && (k_6 != l_6)))
            _fail(l_6);
          else
            k_6 = l_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_6), not_null(i_6));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym__2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      {
        ATerm g_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_6), not_null(s_6));
            LocalPopChoice(q_7);
          }
        else
          {
            t = g_7;
            t = SSL_addr(not_null(r_6), not_null(s_6));
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
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2text_p__0(t);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm r_0 (ATerm t)
        {
          t = term_d_8;
          return(t);
        }
        t = debug_1(t, r_0);
        {
          t = term_c_5;
          t = exit_0(t);
        }
      }
    }
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  z_6 = t;
  x_6 :
  if(match_cons(z_6, sym__2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      y_6 :
      if(((ATgetType(a_7) == AT_LIST) && ATisEmpty(a_7)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_7));
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
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  l_7 = t;
  j_7 :
  if(match_cons(l_7, sym__2))
    {
      m_7 = ATgetArgument(l_7, 0);
      p_7 = ATgetArgument(l_7, 1);
      k_7 :
      if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
        {
          n_7 = ATgetFirst((ATermList) m_7);
          o_7 = (ATerm) ATgetNext((ATermList) m_7);
          {
            ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
            ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), not_null(p_7));
            {
              t = q_0(t);
              {
                x_7 = t;
                i_7 :
                if(match_cons(x_7, sym__2))
                  {
                    y_7 = ATgetArgument(x_7, 0);
                    z_7 = ATgetArgument(x_7, 1);
                    {
                      ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
                      if(((v_7 != NULL) && (v_7 != y_7)))
                        _fail(y_7);
                      else
                        v_7 = y_7;
                      {
                        if(((t_7 != NULL) && (t_7 != z_7)))
                          _fail(z_7);
                        else
                          t_7 = z_7;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), not_null(t_7));
                          {
                            t = t_0(t);
                            {
                              a_8 = t;
                              h_7 :
                              if(match_cons(a_8, sym__2))
                                {
                                  b_8 = ATgetArgument(a_8, 0);
                                  c_8 = ATgetArgument(a_8, 1);
                                  {
                                    if(((w_7 != NULL) && (w_7 != b_8)))
                                      _fail(b_8);
                                    else
                                      w_7 = b_8;
                                    if(((u_7 != NULL) && (u_7 != c_8)))
                                      _fail(c_8);
                                    else
                                      u_7 = c_8;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_7)), not_null(v_7)), not_null(u_7));
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
ATerm thread_map_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm g_8 (ATerm t)
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, q_77, g_8);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = g_8(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  m_8 :
  if(match_cons(n_8, sym_H_2))
    {
      o_8 = ATgetArgument(n_8, 0);
      p_8 = ATgetArgument(n_8, 1);
      {
        ATerm t_8 = NULL,v_8 = NULL;
        ATerm u_8 = NULL;
        t = SSLgetAnnotations(not_null(n_8));
        {
          u_8 = t;
          if(((t_8 != NULL) && (t_8 != u_8)))
            _fail(u_8);
          else
            t_8 = u_8;
        }
        {
          t = not_null(o_8);
          {
            ATerm x_8 = NULL;
            t = i_55(t);
            {
              v_8 = t;
              {
                t = not_null(p_8);
                {
                  ATerm z_8 = NULL;
                  t = j_55(t);
                  {
                    x_8 = t;
                    {
                      ATerm a_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(v_8), not_null(x_8)), not_null(t_8));
                      {
                        a_9 = t;
                        if(((z_8 != NULL) && (z_8 != a_9)))
                          _fail(a_9);
                        else
                          z_8 = a_9;
                      }
                      t = not_null(z_8);
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
ATerm filter_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, d_78);
              return(t);
            }
            t = Cons_2(t, d_78, s_0);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            {
              ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
              i_9 = t;
              h_9 :
              if(((ATgetType(i_9) == AT_LIST) && !(ATisEmpty(i_9))))
                {
                  j_9 = ATgetFirst((ATermList) i_9);
                  k_9 = (ATerm) ATgetNext((ATermList) i_9);
                  {
                    t = not_null(k_9);
                    t = filter_1(t, d_78);
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
ATerm foldr_3 (ATerm t, ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm))
{
  ATerm l_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_77(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = l_8;
      {
        ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
        r_9 = t;
        q_9 :
        if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
          {
            s_9 = ATgetFirst((ATermList) r_9);
            t_9 = (ATerm) ATgetNext((ATermList) r_9);
            {
              ATerm w_9 = NULL,y_9 = NULL;
              ATerm r_8;
              r_8 = t;
              {
                ATerm x_9 = NULL;
                t = not_null(s_9);
                {
                  t = e_77(t);
                  {
                    x_9 = t;
                    if(((w_9 != NULL) && (w_9 != x_9)))
                      _fail(x_9);
                    else
                      w_9 = x_9;
                  }
                }
              }
              t = r_8;
              {
                ATerm z_9 = NULL;
                t = not_null(t_9);
                {
                  t = foldr_3(t, c_77, d_77, e_77);
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
                  t = d_77(t);
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
  ATerm u_0 (ATerm t)
  {
    t = term_g_5;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    t = term_c_5;
    return(t);
  }
  t = foldr_3(t, u_0, add_0, v_0);
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
  ATerm h_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym_HS_0))
    {
      ATerm j_10 = NULL,l_10 = NULL;
      ATerm s_8;
      s_8 = t;
      {
        ATerm k_10 = NULL;
        t = SSLgetAnnotations(not_null(h_10));
        {
          k_10 = t;
          if(((j_10 != NULL) && (j_10 != k_10)))
            _fail(k_10);
          else
            j_10 = k_10;
        }
      }
      t = s_8;
      {
        ATerm m_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(j_10));
        {
          m_10 = t;
          if(((l_10 != NULL) && (l_10 != m_10)))
            _fail(m_10);
          else
            l_10 = m_10;
        }
        t = not_null(l_10);
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
  ATerm s_10 = NULL,u_10 = NULL;
  ATerm w_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          ATerm t_10 = NULL;
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
          return(t);
        }
        t = SOpt_2(t, HS_0, x_0);
        return(t);
      }
      t = fetch_1(t, w_0);
      {
        t = not_null(s_10);
        t = string_to_int_0(t);
      }
      LocalPopChoice(y_8);
    }
  else
    {
      t = w_8;
      t = term_c_5;
    }
  {
    u_10 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), term_b_9);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_11 = NULL;
  ATerm g_11 = NULL,h_11 = NULL;
  e_11 = t;
  {
    ATerm i_11 = NULL;
    ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
    t = not_null(e_11);
    {
      i_11 = t;
      {
        t = SSL_explode_term(not_null(i_11));
        {
          k_11 = t;
          b_11 :
          if(match_cons(k_11, sym__2))
            {
              l_11 = ATgetArgument(k_11, 0);
              m_11 = ATgetArgument(k_11, 1);
              c_11 :
              if(match_string(l_11, ""))
                {
                  d_11 :
                  if(((ATgetType(m_11) == AT_LIST) && !(ATisEmpty(m_11))))
                    {
                      n_11 = ATgetFirst((ATermList) m_11);
                      o_11 = (ATerm) ATgetNext((ATermList) m_11);
                      {
                        if(((h_11 != NULL) && (h_11 != n_11)))
                          _fail(n_11);
                        else
                          h_11 = n_11;
                        if(((g_11 != NULL) && (g_11 != o_11)))
                          _fail(o_11);
                        else
                          g_11 = o_11;
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
    t = not_null(h_11);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm s_11 (ATerm t)
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = m_71(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = Cons_2(t, _id, s_11);
      }
    return(t);
  }
  t = s_11(t);
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
  ATerm v_11 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
      w_11 = t;
      u_11 :
      if(match_cons(w_11, sym__2))
        {
          x_11 = ATgetArgument(w_11, 0);
          y_11 = ATgetArgument(w_11, 1);
          {
            if(((v_11 != NULL) && (v_11 != x_11)))
              _fail(x_11);
            else
              v_11 = x_11;
            if(((v_11 != NULL) && (v_11 != y_11)))
              _fail(y_11);
            else
              v_11 = y_11;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm a_12 (ATerm t)
  {
    ATerm g_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_64(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = g_9;
        {
          t = b_64(t);
          t = a_12(t);
        }
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm f_64 (ATerm))
{
  t = d_64(t);
  t = while_not_2(t, e_64, f_64);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
    j_12 = t;
    c_12 :
    if(match_cons(j_12, sym__2))
      {
        k_12 = ATgetArgument(j_12, 0);
        l_12 = ATgetArgument(j_12, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(k_12), not_null(l_12), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
    o_12 = t;
    e_12 :
    if(match_cons(o_12, sym__3))
      {
        p_12 = ATgetArgument(o_12, 0);
        q_12 = ATgetArgument(o_12, 1);
        r_12 = ATgetArgument(o_12, 2);
        f_12 :
        if(match_int(p_12, 0))
          {
            t = not_null(r_12);
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
  ATerm a_1 (ATerm t)
  {
    ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
    u_12 = t;
    i_12 :
    if(match_cons(u_12, sym__3))
      {
        v_12 = ATgetArgument(u_12, 0);
        w_12 = ATgetArgument(u_12, 1);
        x_12 = ATgetArgument(u_12, 2);
        {
          ATerm b_13 = NULL;
          ATerm m_9;
          m_9 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), term_c_5);
            t = geq_0(t);
          }
          t = m_9;
          {
            ATerm c_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), term_c_5);
            {
              t = subt_0(t);
              {
                c_13 = t;
                if(((b_13 != NULL) && (b_13 != c_13)))
                  _fail(c_13);
                else
                  b_13 = c_13;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_13), not_null(w_12), (ATerm) ATinsert(CheckATermList(not_null(x_12)), not_null(w_12)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, y_0, z_0, a_1);
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
  ATerm l_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_IS_0))
    {
      ATerm n_13 = NULL,p_13 = NULL;
      ATerm n_9;
      n_9 = t;
      {
        ATerm o_13 = NULL;
        t = SSLgetAnnotations(not_null(l_13));
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
      }
      t = n_9;
      {
        ATerm q_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(n_13));
        {
          q_13 = t;
          if(((p_13 != NULL) && (p_13 != q_13)))
            _fail(q_13);
          else
            p_13 = q_13;
        }
        t = not_null(p_13);
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
  ATerm w_13 = NULL,y_13 = NULL;
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          ATerm x_13 = NULL;
          x_13 = t;
          if(((w_13 != NULL) && (w_13 != x_13)))
            _fail(x_13);
          else
            w_13 = x_13;
          return(t);
        }
        t = SOpt_2(t, IS_0, c_1);
        return(t);
      }
      t = fetch_1(t, b_1);
      {
        t = not_null(w_13);
        t = string_to_int_0(t);
      }
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      t = term_g_5;
    }
  {
    y_13 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_b_9);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_VS_0))
    {
      ATerm i_14 = NULL,k_14 = NULL;
      ATerm u_9;
      u_9 = t;
      {
        ATerm j_14 = NULL;
        t = SSLgetAnnotations(not_null(g_14));
        {
          j_14 = t;
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
        }
      }
      t = u_9;
      {
        ATerm l_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(i_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        t = not_null(k_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_SOpt_2))
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
            t = e_55(t);
            {
              d_15 = t;
              {
                t = not_null(x_14);
                {
                  ATerm h_15 = NULL;
                  t = f_55(t);
                  {
                    f_15 = t;
                    {
                      ATerm i_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(d_15), not_null(f_15)), not_null(b_15));
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
ATerm Vspace_0 (ATerm t)
{
  ATerm r_15 = NULL,t_15 = NULL;
  ATerm v_15 = NULL;
  ATerm v_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          ATerm s_15 = NULL;
          s_15 = t;
          if(((r_15 != NULL) && (r_15 != s_15)))
            _fail(s_15);
          else
            r_15 = s_15;
          return(t);
        }
        t = SOpt_2(t, VS_0, e_1);
        return(t);
      }
      t = fetch_1(t, d_1);
      {
        t = not_null(r_15);
        t = string_to_int_0(t);
      }
      LocalPopChoice(a_10);
    }
  else
    {
      t = v_9;
      t = term_g_5;
    }
  {
    t_15 = t;
    {
      ATerm w_15 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), term_c_5);
      {
        t = add_0(t);
        {
          w_15 = t;
          if(((v_15 != NULL) && (v_15 != w_15)))
            _fail(w_15);
          else
            v_15 = w_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), term_b_10);
        t = copy_char_0(t);
      }
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
    {
      d_16 = ATgetFirst((ATermList) c_16);
      e_16 = (ATerm) ATgetNext((ATermList) c_16);
      t = not_null(e_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  i_16 :
  if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
    {
      l_16 = ATgetFirst((ATermList) k_16);
      m_16 = (ATerm) ATgetNext((ATermList) k_16);
      j_16 :
      if(((ATgetType(m_16) == AT_LIST) && ATisEmpty(m_16)))
        {
          t = not_null(l_16);
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
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_71(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = Cons_2(t, _id, q_16);
      }
    return(t);
  }
  t = q_16(t);
  return(t);
}
ATerm split_at_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm i_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_17 = NULL,c_17 = NULL;
      ATerm f_1 (ATerm t)
      {
        t = Cons_2(t, m_0, _id);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm b_17 = NULL;
            b_17 = t;
            if(((a_17 != NULL) && (a_17 != b_17)))
              _fail(b_17);
            else
              a_17 = b_17;
            return(t);
          }
          t = Cons_2(t, _id, h_1);
          t = (ATerm) ATempty;
        }
        return(t);
      }
      t = at_suffix_1(t, f_1);
      {
        ATerm d_17 = NULL;
        d_17 = t;
        if(((c_17 != NULL) && (c_17 != d_17)))
          _fail(d_17);
        else
          c_17 = d_17;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(a_17));
      }
      LocalPopChoice(n_10);
    }
  else
    {
      t = i_10;
      {
        ATerm e_17 = NULL;
        ATerm g_17 = NULL;
        e_17 = t;
        {
          ATerm h_17 = NULL;
          t = not_null(e_17);
          {
            t = explode_string_0(t);
            {
              ATerm i_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, i_1);
              {
                h_17 = t;
                if(((g_17 != NULL) && (g_17 != h_17)))
                  _fail(h_17);
                else
                  g_17 = h_17;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_17), (ATerm)ATempty, (ATerm) ATempty);
            {
              ATerm e_18 (ATerm t)
              {
                ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
                i_17 = t;
                y_16 :
                if(match_cons(i_17, sym__3))
                  {
                    j_17 = ATgetArgument(i_17, 0);
                    m_17 = ATgetArgument(i_17, 1);
                    n_17 = ATgetArgument(i_17, 2);
                    z_16 :
                    if(((ATgetType(j_17) == AT_LIST) && ATisEmpty(j_17)))
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(n_17)), not_null(m_17));
                      }
                    else
                      {
                        if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
                          {
                            k_17 = ATgetFirst((ATermList) j_17);
                            l_17 = (ATerm) ATgetNext((ATermList) j_17);
                            {
                              ATerm o_10 = t;
                              int p_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(k_17);
                                  {
                                    t = m_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_17), (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(not_null(n_17)), not_null(m_17)));
                                      t = e_18(t);
                                    }
                                  }
                                  LocalPopChoice(p_10);
                                }
                              else
                                {
                                  t = o_10;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(l_17), (ATerm)ATinsert(CheckATermList(not_null(m_17)), not_null(k_17)), not_null(n_17));
                                    t = e_18(t);
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
              t = e_18(t);
              t = map_1(t, implode_string_0);
            }
          }
        }
      }
    }
  return(t);
}
ATerm string_length_p__1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    ATerm j_18 = NULL;
    j_18 = t;
    i_18 :
    if(!(match_int(j_18, 10)))
      {
        _fail(t);
      }
    return(t);
  }
  t = split_at_1(t, j_1);
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        {
          t = last_0(t);
          t = string_length_0(t);
        }
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        {
          t = last_0(t);
          {
            t = string_length_0(t);
            {
              t = split_2(t, _id, s_62);
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
  ATerm z_18 = NULL;
  z_18 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_18), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm u_20 (ATerm t)
      {
        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
        ATerm o_23 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(h_19))));
          {
            ATerm v_10 = t;
            int w_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(w_10);
              }
            else
              {
                t = v_10;
                t = conc_more_lists_0(t);
              }
          }
          return(t);
        }
        ATerm p_23 (ATerm t)
        {
          ATerm b_20 = NULL;
          ATerm c_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(b_19), not_null(c_19))));
          {
            ATerm x_10 = t;
            int y_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(y_10);
              }
            else
              {
                t = x_10;
                t = conc_more_lists_0(t);
              }
            {
              c_20 = t;
              if(((b_20 != NULL) && (b_20 != c_20)))
                _fail(c_20);
              else
                b_20 = c_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_19), (ATerm)ATempty, not_null(b_20));
            t = u_20(t);
          }
          return(t);
        }
        ATerm q_23 (ATerm t)
        {
          ATerm j_20 = NULL;
          ATerm k_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(b_19), not_null(c_19))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(h_19))));
          {
            ATerm z_10 = t;
            int a_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(a_11);
              }
            else
              {
                t = z_10;
                t = conc_more_lists_0(t);
              }
            {
              k_20 = t;
              if(((j_20 != NULL) && (j_20 != k_20)))
                _fail(k_20);
              else
                j_20 = k_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_19), (ATerm)ATempty, not_null(j_20));
            t = u_20(t);
          }
          return(t);
        }
        ATerm r_23 (ATerm t)
        {
          ATerm r_20 = NULL;
          ATerm s_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), (ATerm) ATinsert(ATempty, not_null(f_19)));
          {
            ATerm f_11 = t;
            int j_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(j_11);
              }
            else
              {
                t = f_11;
                t = conc_more_lists_0(t);
              }
            {
              s_20 = t;
              if(((r_20 != NULL) && (r_20 != s_20)))
                _fail(s_20);
              else
                r_20 = s_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_19), not_null(r_20), not_null(i_19));
            t = u_20(t);
          }
          return(t);
        }
        d_19 = t;
        t_18 :
        if(match_cons(d_19, sym__3))
          {
            e_19 = ATgetArgument(d_19, 0);
            h_19 = ATgetArgument(d_19, 1);
            i_19 = ATgetArgument(d_19, 2);
            u_18 :
            if(((ATgetType(e_19) == AT_LIST) && ATisEmpty(e_19)))
              {
                v_18 :
                if(((ATgetType(h_19) == AT_LIST) && ATisEmpty(h_19)))
                  {
                    {
                      ATerm p_11 = t;
                      int q_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(i_19);
                          LocalPopChoice(q_11);
                        }
                      else
                        {
                          t = p_11;
                          t = o_23(t);
                        }
                    }
                  }
                else
                  {
                    t = o_23(t);
                  }
              }
            else
              {
                if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
                  {
                    f_19 = ATgetFirst((ATermList) e_19);
                    g_19 = (ATerm) ATgetNext((ATermList) e_19);
                    w_18 :
                    if(((ATgetType(h_19) == AT_LIST) && ATisEmpty(h_19)))
                      {
                        x_18 :
                        if(match_cons(f_19, sym_R_2))
                          {
                            b_19 = ATgetArgument(f_19, 0);
                            c_19 = ATgetArgument(f_19, 1);
                            {
                              ATerm r_11 = t;
                              int t_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = p_23(t);
                                  LocalPopChoice(t_11);
                                }
                              else
                                {
                                  t = r_11;
                                  {
                                    ATerm z_11 = t;
                                    int b_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = q_23(t);
                                        LocalPopChoice(b_12);
                                      }
                                    else
                                      {
                                        t = z_11;
                                        t = r_23(t);
                                      }
                                  }
                                }
                            }
                          }
                        else
                          {
                            t = r_23(t);
                          }
                      }
                    else
                      {
                        y_18 :
                        if(match_cons(f_19, sym_R_2))
                          {
                            b_19 = ATgetArgument(f_19, 0);
                            c_19 = ATgetArgument(f_19, 1);
                            {
                              ATerm d_12 = t;
                              int g_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = q_23(t);
                                  LocalPopChoice(g_12);
                                }
                              else
                                {
                                  t = d_12;
                                  t = r_23(t);
                                }
                            }
                          }
                        else
                          {
                            t = r_23(t);
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
      t = u_20(t);
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym__2))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      {
        ATerm h_12;
        h_12 = t;
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_23), not_null(z_23));
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
              t = SSL_gtr(not_null(y_23), not_null(z_23));
            }
        }
        t = h_12;
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
  ATerm s_12 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_12;
    }
  return(t);
}
ATerm Abox2text_p__0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  s_26 = t;
  i_26 :
  if(match_cons(s_26, sym__2))
    {
      t_26 = ATgetArgument(s_26, 0);
      w_26 = ATgetArgument(s_26, 1);
      j_26 :
      if(((ATgetType(t_26) == AT_LIST) && ATisEmpty(t_26)))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(w_26));
        }
      else
        {
          if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
            {
              u_26 = ATgetFirst((ATermList) t_26);
              v_26 = (ATerm) ATgetNext((ATermList) t_26);
              k_26 :
              if(((ATgetType(v_26) == AT_LIST) && ATisEmpty(v_26)))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(w_26));
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
              if(match_cons(t_26, sym_ALT_2))
                {
                  u_26 = ATgetArgument(t_26, 0);
                  v_26 = ATgetArgument(t_26, 1);
                  {
                    ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
                    ATerm y_12;
                    y_12 = t;
                    {
                      ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(w_26));
                      {
                        t = Abox2text_0(t);
                        {
                          g_27 = t;
                          q_24 :
                          if(match_cons(g_27, sym__2))
                            {
                              h_27 = ATgetArgument(g_27, 0);
                              i_27 = ATgetArgument(g_27, 1);
                              {
                                if(((d_27 != NULL) && (d_27 != g_27)))
                                  _fail(g_27);
                                else
                                  d_27 = g_27;
                                {
                                  if(((e_27 != NULL) && (e_27 != h_27)))
                                    _fail(h_27);
                                  else
                                    e_27 = h_27;
                                  if(((f_27 != NULL) && (f_27 != i_27)))
                                    _fail(i_27);
                                  else
                                    f_27 = i_27;
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
                    t = y_12;
                    {
                      ATerm z_12 = t;
                      int a_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), term_d_13);
                          t = leq_0(t);
                          LocalPopChoice(a_13);
                          t = not_null(d_27);
                        }
                      else
                        {
                          t = z_12;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), not_null(w_26));
                            t = Abox2text_0(t);
                          }
                        }
                    }
                  }
                }
              else
                {
                  if(match_cons(t_26, sym_A_3))
                    {
                      u_26 = ATgetArgument(t_26, 0);
                      v_26 = ATgetArgument(t_26, 1);
                      o_26 = ATgetArgument(t_26, 2);
                      {
                        ATerm m_27 = NULL;
                        ATerm n_27 = NULL;
                        t = not_null(o_26);
                        {
                          t = map_to_r_box_0(t);
                          {
                            n_27 = t;
                            if(((m_27 != NULL) && (m_27 != n_27)))
                              _fail(n_27);
                            else
                              m_27 = n_27;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(v_26), not_null(m_27)), not_null(w_26));
                          t = Abox2text_0(t);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_26, sym_R_2))
                        {
                          u_26 = ATgetArgument(t_26, 0);
                          v_26 = ATgetArgument(t_26, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(u_26), not_null(v_26)), not_null(w_26));
                            t = Abox2text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(t_26, sym_HV_2))
                            {
                              u_26 = ATgetArgument(t_26, 0);
                              v_26 = ATgetArgument(t_26, 1);
                              {
                                ATerm e_13 = t;
                                int f_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(u_26), not_null(v_26)), not_null(w_26));
                                    t = Abox2text_0(t);
                                    LocalPopChoice(f_13);
                                  }
                                else
                                  {
                                    t = e_13;
                                    {
                                      ATerm k_1 (ATerm t)
                                      {
                                        t = term_g_13;
                                        return(t);
                                      }
                                      t = say_1(t, k_1);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(u_26), not_null(v_26)), not_null(w_26));
                                        t = Abox2text_p__0(t);
                                      }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t_26, sym_FBOX_2))
                                {
                                  u_26 = ATgetArgument(t_26, 0);
                                  v_26 = ATgetArgument(t_26, 1);
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), not_null(w_26));
                                    t = Abox2text_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t_26, sym_C_2))
                                    {
                                      u_26 = ATgetArgument(t_26, 0);
                                      v_26 = ATgetArgument(t_26, 1);
                                      l_26 :
                                      if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
                                        {
                                          p_26 = ATgetFirst((ATermList) v_26);
                                          r_26 = (ATerm) ATgetNext((ATermList) v_26);
                                          m_26 :
                                          if(match_cons(p_26, sym_S_1))
                                            {
                                              q_26 = ATgetArgument(p_26, 0);
                                              n_26 :
                                              if(((ATgetType(r_26) == AT_LIST) && ATisEmpty(r_26)))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_26), not_null(w_26));
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
                                      if(match_cons(t_26, sym_S_1))
                                        {
                                          u_26 = ATgetArgument(t_26, 0);
                                          {
                                            ATerm a_28 = NULL;
                                            ATerm b_28 = NULL,d_28 = NULL;
                                            ATerm c_28 = NULL;
                                            t = not_null(u_26);
                                            {
                                              ATerm l_1 (ATerm t)
                                              {
                                                t = not_null(w_26);
                                                return(t);
                                              }
                                              t = string_length_p__1(t, l_1);
                                              {
                                                c_28 = t;
                                                if(((b_28 != NULL) && (b_28 != c_28)))
                                                  _fail(c_28);
                                                else
                                                  b_28 = c_28;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), not_null(b_28));
                                              {
                                                t = add_0(t);
                                                {
                                                  d_28 = t;
                                                  if(((a_28 != NULL) && (a_28 != d_28)))
                                                    _fail(d_28);
                                                  else
                                                    a_28 = d_28;
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(a_28));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t_26, sym_V_2))
                                            {
                                              u_26 = ATgetArgument(t_26, 0);
                                              v_26 = ATgetArgument(t_26, 1);
                                              {
                                                ATerm h_28 = NULL;
                                                t = not_null(u_26);
                                                {
                                                  ATerm j_28 = NULL;
                                                  t = Vspace_0(t);
                                                  {
                                                    h_28 = t;
                                                    {
                                                      t = not_null(u_26);
                                                      {
                                                        ATerm l_28 = NULL;
                                                        t = Ispace_0(t);
                                                        {
                                                          j_28 = t;
                                                          {
                                                            ATerm n_28 = NULL,p_28 = NULL;
                                                            t = string_length_0(t);
                                                            {
                                                              l_28 = t;
                                                              {
                                                                ATerm o_28 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), term_b_9);
                                                                {
                                                                  t = copy_char_0(t);
                                                                  {
                                                                    o_28 = t;
                                                                    if(((n_28 != NULL) && (n_28 != o_28)))
                                                                      _fail(o_28);
                                                                    else
                                                                      n_28 = o_28;
                                                                  }
                                                                }
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_28)), not_null(j_28)), not_null(h_28));
                                                                  {
                                                                    ATerm e_29 = NULL;
                                                                    t = concat_strings_0(t);
                                                                    {
                                                                      p_28 = t;
                                                                      {
                                                                        t = not_null(v_26);
                                                                        {
                                                                          ATerm m_1 (ATerm t)
                                                                          {
                                                                            ATerm h_13 = t;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm i_13 = t;
                                                                                int j_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Nil_0(t);
                                                                                    LocalPopChoice(j_13);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_13;
                                                                                    {
                                                                                      ATerm r_28 = NULL;
                                                                                      ATerm t_28 = NULL,u_28 = NULL,a_29 = NULL,b_29 = NULL;
                                                                                      r_28 = t;
                                                                                      {
                                                                                        ATerm m_13;
                                                                                        m_13 = t;
                                                                                        {
                                                                                          ATerm v_28 = NULL;
                                                                                          ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
                                                                                          t = not_null(r_28);
                                                                                          {
                                                                                            v_28 = t;
                                                                                            {
                                                                                              t = SSL_explode_term(not_null(v_28));
                                                                                              {
                                                                                                x_28 = t;
                                                                                                j_25 :
                                                                                                if(match_cons(x_28, sym__2))
                                                                                                  {
                                                                                                    y_28 = ATgetArgument(x_28, 0);
                                                                                                    z_28 = ATgetArgument(x_28, 1);
                                                                                                    {
                                                                                                      if(((t_28 != NULL) && (t_28 != y_28)))
                                                                                                        _fail(y_28);
                                                                                                      else
                                                                                                        t_28 = y_28;
                                                                                                      if(((u_28 != NULL) && (u_28 != z_28)))
                                                                                                        _fail(z_28);
                                                                                                      else
                                                                                                        u_28 = z_28;
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
                                                                                        t = m_13;
                                                                                        {
                                                                                          ATerm r_13;
                                                                                          r_13 = t;
                                                                                          {
                                                                                            ATerm c_29 = NULL;
                                                                                            ATerm d_29 = NULL;
                                                                                            t = not_null(t_28);
                                                                                            {
                                                                                              c_29 = t;
                                                                                              {
                                                                                                if(((a_29 != NULL) && (a_29 != c_29)))
                                                                                                  _fail(c_29);
                                                                                                else
                                                                                                  a_29 = c_29;
                                                                                                {
                                                                                                  t = not_null(u_28);
                                                                                                  {
                                                                                                    ATerm n_1 (ATerm t)
                                                                                                    {
                                                                                                      ATerm o_1 (ATerm t)
                                                                                                      {
                                                                                                        ATerm s_13 = t;
                                                                                                        int t_13 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Nil_0(t);
                                                                                                            LocalPopChoice(t_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = s_13;
                                                                                                            t = Cons_2(t, Nil_0, Nil_0);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Cons_2(t, o_1, Nil_0);
                                                                                                      return(t);
                                                                                                    }
                                                                                                    t = Cons_2(t, _id, n_1);
                                                                                                    {
                                                                                                      d_29 = t;
                                                                                                      if(((b_29 != NULL) && (b_29 != d_29)))
                                                                                                        _fail(d_29);
                                                                                                      else
                                                                                                        b_29 = d_29;
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          t = r_13;
                                                                                          t = SSL_mkterm(not_null(a_29), not_null(b_29));
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                PopChoice();
                                                                                _fail(t);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = h_13;
                                                                              }
                                                                            return(t);
                                                                          }
                                                                          t = filter_1(t, m_1);
                                                                          {
                                                                            ATerm u_13 = t;
                                                                            int v_13 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_26));
                                                                                LocalPopChoice(v_13);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_13;
                                                                                {
                                                                                  ATerm p_1 (ATerm t)
                                                                                  {
                                                                                    ATerm f_29 = NULL;
                                                                                    f_29 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_29), not_null(w_26));
                                                                                      t = Abox2text_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm q_1 (ATerm t)
                                                                                  {
                                                                                    ATerm r_1 (ATerm t)
                                                                                    {
                                                                                      ATerm h_29 = NULL;
                                                                                      ATerm j_29 = NULL;
                                                                                      h_29 = t;
                                                                                      {
                                                                                        ATerm k_29 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), not_null(l_28));
                                                                                        {
                                                                                          t = add_0(t);
                                                                                          {
                                                                                            k_29 = t;
                                                                                            if(((j_29 != NULL) && (j_29 != k_29)))
                                                                                              _fail(k_29);
                                                                                            else
                                                                                              j_29 = k_29;
                                                                                          }
                                                                                        }
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(j_29));
                                                                                          t = Abox2text_0(t);
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, r_1);
                                                                                    return(t);
                                                                                  }
                                                                                  t = Cons_2(t, p_1, q_1);
                                                                                  {
                                                                                    ATerm s_1 (ATerm t)
                                                                                    {
                                                                                      ATerm t_1 (ATerm t)
                                                                                      {
                                                                                        ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
                                                                                        l_29 = t;
                                                                                        v_25 :
                                                                                        if(match_cons(l_29, sym__2))
                                                                                          {
                                                                                            m_29 = ATgetArgument(l_29, 0);
                                                                                            n_29 = ATgetArgument(l_29, 1);
                                                                                            if(((e_29 != NULL) && (e_29 != n_29)))
                                                                                              _fail(n_29);
                                                                                            else
                                                                                              e_29 = n_29;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                        return(t);
                                                                                      }
                                                                                      t = Cons_2(t, t_1, Nil_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = at_last_1(t, s_1);
                                                                                    {
                                                                                      t = map_1(t, Fst_0);
                                                                                      {
                                                                                        ATerm u_1 (ATerm t)
                                                                                        {
                                                                                          t = not_null(p_28);
                                                                                          return(t);
                                                                                        }
                                                                                        t = separate_by_1(t, u_1);
                                                                                        {
                                                                                          ATerm v_1 (ATerm t)
                                                                                          {
                                                                                            t = not_null(e_29);
                                                                                            return(t);
                                                                                          }
                                                                                          t = split_2(t, _id, v_1);
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
                                              if(match_cons(t_26, sym_H_2))
                                                {
                                                  u_26 = ATgetArgument(t_26, 0);
                                                  v_26 = ATgetArgument(t_26, 1);
                                                  {
                                                    ATerm u_29 = NULL;
                                                    t = not_null(u_26);
                                                    {
                                                      ATerm w_29 = NULL;
                                                      t = Hspace_0(t);
                                                      {
                                                        u_29 = t;
                                                        {
                                                          ATerm y_29 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            w_29 = t;
                                                            {
                                                              ATerm z_29 = NULL;
                                                              t = not_null(v_26);
                                                              {
                                                                ATerm w_1 (ATerm t)
                                                                {
                                                                  ATerm z_13 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm a_14 = t;
                                                                      int b_14 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = Nil_0(t);
                                                                          LocalPopChoice(b_14);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_14;
                                                                          t = H_2(t, Nil_0, Nil_0);
                                                                        }
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_13;
                                                                    }
                                                                  return(t);
                                                                }
                                                                t = filter_1(t, w_1);
                                                                {
                                                                  z_29 = t;
                                                                  if(((y_29 != NULL) && (y_29 != z_29)))
                                                                    _fail(z_29);
                                                                  else
                                                                    y_29 = z_29;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_29), not_null(w_26));
                                                                {
                                                                  ATerm x_1 (ATerm t)
                                                                  {
                                                                    ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
                                                                    a_30 = t;
                                                                    d_26 :
                                                                    if(match_cons(a_30, sym__2))
                                                                      {
                                                                        b_30 = ATgetArgument(a_30, 0);
                                                                        c_30 = ATgetArgument(a_30, 1);
                                                                        {
                                                                          ATerm g_30 = NULL,h_30 = NULL,l_30 = NULL;
                                                                          ATerm c_14;
                                                                          c_14 = t;
                                                                          {
                                                                            ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_30), not_null(c_30));
                                                                            {
                                                                              t = Abox2text_0(t);
                                                                              {
                                                                                i_30 = t;
                                                                                b_26 :
                                                                                if(match_cons(i_30, sym__2))
                                                                                  {
                                                                                    j_30 = ATgetArgument(i_30, 0);
                                                                                    k_30 = ATgetArgument(i_30, 1);
                                                                                    {
                                                                                      if(((g_30 != NULL) && (g_30 != j_30)))
                                                                                        _fail(j_30);
                                                                                      else
                                                                                        g_30 = j_30;
                                                                                      if(((h_30 != NULL) && (h_30 != k_30)))
                                                                                        _fail(k_30);
                                                                                      else
                                                                                        h_30 = k_30;
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            }
                                                                          }
                                                                          t = c_14;
                                                                          {
                                                                            ATerm m_30 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_29), not_null(h_30));
                                                                            {
                                                                              t = add_0(t);
                                                                              {
                                                                                m_30 = t;
                                                                                if(((l_30 != NULL) && (l_30 != m_30)))
                                                                                  _fail(m_30);
                                                                                else
                                                                                  l_30 = m_30;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_30), not_null(l_30));
                                                                          }
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  t = thread_map_1(t, x_1);
                                                                  {
                                                                    n_30 = t;
                                                                    h_26 :
                                                                    if(match_cons(n_30, sym__2))
                                                                      {
                                                                        o_30 = ATgetArgument(n_30, 0);
                                                                        p_30 = ATgetArgument(n_30, 1);
                                                                        {
                                                                          ATerm s_30 = NULL;
                                                                          ATerm t_30 = NULL;
                                                                          t = not_null(o_30);
                                                                          {
                                                                            ATerm y_1 (ATerm t)
                                                                            {
                                                                              t = not_null(u_29);
                                                                              return(t);
                                                                            }
                                                                            t = separate_by_1(t, y_1);
                                                                            {
                                                                              t_30 = t;
                                                                              if(((s_30 != NULL) && (s_30 != t_30)))
                                                                                _fail(t_30);
                                                                              else
                                                                                s_30 = t_30;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_30), not_null(p_30));
                                                                            {
                                                                              ATerm d_14 = t;
                                                                              int e_14 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  ATerm z_1 (ATerm t)
                                                                                  {
                                                                                    ATerm h_14 = t;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = Nil_0(t);
                                                                                        PopChoice();
                                                                                        _fail(t);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_14;
                                                                                      }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm a_2 (ATerm t)
                                                                                  {
                                                                                    ATerm u_30 = NULL;
                                                                                    u_30 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_30), not_null(w_29));
                                                                                      t = subt_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  t = _2(t, z_1, a_2);
                                                                                  LocalPopChoice(e_14);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = d_14;
                                                                                  {
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
  ATerm b_2 (ATerm t)
  {
    t = term_g_5;
    return(t);
  }
  t = split_2(t, _id, b_2);
  t = Abox2text_p__0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym__2))
    {
      e_33 = ATgetArgument(d_33, 0);
      f_33 = ATgetArgument(d_33, 1);
      {
        ATerm j_33 = NULL,l_33 = NULL;
        ATerm k_33 = NULL;
        t = SSLgetAnnotations(not_null(d_33));
        {
          k_33 = t;
          if(((j_33 != NULL) && (j_33 != k_33)))
            _fail(k_33);
          else
            j_33 = k_33;
        }
        {
          t = not_null(e_33);
          {
            ATerm n_33 = NULL;
            t = t_53(t);
            {
              l_33 = t;
              {
                t = not_null(f_33);
                {
                  ATerm p_33 = NULL;
                  t = u_53(t);
                  {
                    n_33 = t;
                    {
                      ATerm q_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_33), not_null(n_33)), not_null(j_33));
                      {
                        q_33 = t;
                        if(((p_33 != NULL) && (p_33 != q_33)))
                          _fail(q_33);
                        else
                          p_33 = q_33;
                      }
                      t = not_null(p_33);
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
  ATerm x_33 = NULL;
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_33 = NULL;
      y_33 = t;
      {
        if(((x_33 != NULL) && (x_33 != y_33)))
          _fail(y_33);
        else
          x_33 = y_33;
        t = SSL_ReadFromFile(not_null(x_33));
      }
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm c_2 (ATerm t)
        {
          t = term_o_14;
          return(t);
        }
        t = debug_1(t, c_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  ATerm c_34 = NULL,e_34 = NULL;
  ATerm p_14;
  p_14 = t;
  {
    ATerm d_34 = NULL;
    t = p_78(t);
    {
      d_34 = t;
      if(((c_34 != NULL) && (c_34 != d_34)))
        _fail(d_34);
      else
        c_34 = d_34;
    }
  }
  t = p_14;
  {
    ATerm f_34 = NULL;
    t = q_78(t);
    {
      f_34 = t;
      if(((e_34 != NULL) && (e_34 != f_34)))
        _fail(f_34);
      else
        e_34 = f_34;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), not_null(e_34));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_34 = NULL;
  ATerm q_14;
  q_14 = t;
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 (ATerm t)
        {
          ATerm m_34 = NULL,n_34 = NULL;
          m_34 = t;
          j_34 :
          if(match_cons(m_34, sym_Input_1))
            {
              n_34 = ATgetArgument(m_34, 0);
              if(((l_34 != NULL) && (l_34 != n_34)))
                _fail(n_34);
              else
                l_34 = n_34;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, d_2);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm o_34 = NULL;
          t = term_t_14;
          {
            o_34 = t;
            if(((l_34 != NULL) && (l_34 != o_34)))
              _fail(o_34);
            else
              l_34 = o_34;
          }
        }
      }
  }
  t = q_14;
  {
    ATerm e_2 (ATerm t)
    {
      t = not_null(l_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_2);
  }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm y_14;
  y_14 = t;
  {
    t = r_81(t);
    {
      ATerm f_2 (ATerm t)
      {
        t = term_z_14;
        return(t);
      }
      t = debug_1(t, f_2);
    }
  }
  t = y_14;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  ATerm a_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
      x_34 = t;
      s_34 :
      if(match_cons(x_34, sym__2))
        {
          y_34 = ATgetArgument(x_34, 0);
          z_34 = ATgetArgument(x_34, 1);
          {
            if(((w_34 != NULL) && (w_34 != y_34)))
              _fail(y_34);
            else
              w_34 = y_34;
            if(((v_34 != NULL) && (v_34 != z_34)))
              _fail(z_34);
            else
              v_34 = z_34;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_15);
      t = SSL_open_file(not_null(w_34), not_null(v_34));
    }
  else
    {
      t = a_15;
      {
        ATerm a_35 = NULL;
        ATerm b_35 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_g_15;
          return(t);
        }
        t = obsolete_1(t, g_2);
        {
          a_35 = t;
          {
            if(((w_34 != NULL) && (w_34 != a_35)))
              _fail(a_35);
            else
              w_34 = a_35;
            {
              ATerm j_15;
              j_15 = t;
              {
                ATerm c_35 = NULL;
                t = term_k_15;
                {
                  c_35 = t;
                  if(((b_35 != NULL) && (b_35 != c_35)))
                    _fail(c_35);
                  else
                    b_35 = c_35;
                }
              }
              t = j_15;
              t = SSL_open_file(not_null(w_34), not_null(b_35));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm g_35 (ATerm t)
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_70, _id);
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        t = Cons_2(t, _id, g_35);
      }
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_85 (ATerm))
{
  t = fetch_1(t, j_85);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm j_35 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_35 = NULL,l_35 = NULL;
      k_35 = t;
      i_35 :
      if(match_cons(k_35, sym_Program_1))
        {
          l_35 = ATgetArgument(k_35, 0);
          if(((j_35 != NULL) && (j_35 != l_35)))
            _fail(l_35);
          else
            j_35 = l_35;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, j_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_15), not_null(j_35)), term_o_15));
      {
        t = printnl_0(t);
        {
          t = term_g_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_15;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym_Version_0))
    {
      ATerm t_35 = NULL,v_35 = NULL;
      ATerm q_15;
      q_15 = t;
      {
        ATerm u_35 = NULL;
        t = SSLgetAnnotations(not_null(r_35));
        {
          u_35 = t;
          if(((t_35 != NULL) && (t_35 != u_35)))
            _fail(u_35);
          else
            t_35 = u_35;
        }
      }
      t = q_15;
      {
        ATerm w_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_35));
        {
          w_35 = t;
          if(((v_35 != NULL) && (v_35 != w_35)))
            _fail(w_35);
          else
            v_35 = w_35;
        }
        t = not_null(v_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm u_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = u_15;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_2);
  t = m_82(t);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm b_36 = NULL;
    b_36 = t;
    a_36 :
    if(!(match_string(b_36, "-v")))
      {
        if(!(match_string(b_36, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_f_16;
    t = set_config_0(t);
    t = term_g_16;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_h_16;
    return(t);
  }
  t = Option_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm e_36 = NULL;
    e_36 = t;
    c_36 :
    if(!(match_string(e_36, "-k")))
      {
        if(!(match_string(e_36, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm n_16;
    n_16 = t;
    {
      ATerm f_36 = NULL;
      ATerm g_36 = NULL;
      t = string_to_int_0(t);
      {
        g_36 = t;
        if(((f_36 != NULL) && (f_36 != g_36)))
          _fail(g_36);
        else
          f_36 = g_36;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(f_36));
        t = set_config_0(t);
      }
    }
    t = n_16;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_string_to_int(not_null(j_36));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm r_36 = NULL;
        r_36 = t;
        m_36 :
        if(!(match_string(r_36, "-S")))
          {
            if(!(match_string(r_36, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_t_16;
        t = set_config_0(t);
        t = term_u_16;
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_v_16;
        return(t);
      }
      t = Option_3(t, r_2, s_2, t_2);
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 (ATerm t)
            {
              ATerm s_36 = NULL;
              s_36 = t;
              n_36 :
              if(!(match_string(s_36, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              ATerm v_36 = NULL;
              ATerm f_17;
              f_17 = t;
              {
                ATerm t_36 = NULL;
                ATerm u_36 = NULL;
                t = string_to_int_0(t);
                {
                  u_36 = t;
                  if(((t_36 != NULL) && (t_36 != u_36)))
                    _fail(u_36);
                  else
                    t_36 = u_36;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_5, not_null(t_36));
                  t = set_config_0(t);
                }
              }
              t = f_17;
              {
                ATerm w_36 = NULL;
                w_36 = t;
                if(((v_36 != NULL) && (v_36 != w_36)))
                  _fail(w_36);
                else
                  v_36 = w_36;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_36));
              }
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              t = term_o_17;
              return(t);
            }
            t = ArgOption_3(t, u_2, v_2, x_2);
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            {
              ATerm z_2 (ATerm t)
              {
                ATerm x_36 = NULL;
                x_36 = t;
                q_36 :
                if(!(match_string(x_36, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_q_17;
                t = set_config_0(t);
                t = term_r_17;
                return(t);
              }
              ATerm b_3 (ATerm t)
              {
                t = term_s_17;
                return(t);
              }
              t = Option_3(t, z_2, a_3, b_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm d_37 = NULL;
    d_37 = t;
    a_37 :
    if(!(match_string(d_37, "-o")))
      {
        if(!(match_string(d_37, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm g_37 = NULL;
    ATerm x_17;
    x_17 = t;
    {
      ATerm e_37 = NULL;
      ATerm f_37 = NULL;
      f_37 = t;
      if(((e_37 != NULL) && (e_37 != f_37)))
        _fail(f_37);
      else
        e_37 = f_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, not_null(e_37));
        t = set_config_0(t);
      }
    }
    t = x_17;
    {
      ATerm h_37 = NULL;
      h_37 = t;
      if(((g_37 != NULL) && (g_37 != h_37)))
        _fail(h_37);
      else
        g_37 = h_37;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_37));
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_z_17;
    return(t);
  }
  t = ArgOption_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm l_37 = NULL;
          l_37 = t;
          k_37 :
          if(!(match_string(l_37, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_d_18;
          t = set_config_0(t);
          t = term_f_18;
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_g_18;
          return(t);
        }
        t = Option_3(t, f_3, g_3, h_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  u_37 = t;
  s_37 :
  if(match_string(u_37, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
        {
          v_37 = ATgetFirst((ATermList) u_37);
          w_37 = (ATerm) ATgetNext((ATermList) u_37);
          t_37 :
          if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
            {
              x_37 = ATgetFirst((ATermList) w_37);
              y_37 = (ATerm) ATgetNext((ATermList) w_37);
              {
                ATerm c_38 = NULL;
                ATerm h_18;
                h_18 = t;
                {
                  t = not_null(v_37);
                  t = j_0(t);
                }
                t = h_18;
                {
                  ATerm d_38 = NULL;
                  t = not_null(x_37);
                  {
                    t = k_0(t);
                    {
                      d_38 = t;
                      if(((c_38 != NULL) && (c_38 != d_38)))
                        _fail(d_38);
                      else
                        c_38 = d_38;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_37)), not_null(c_38));
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
  ATerm i_3 (ATerm t)
  {
    ATerm k_38 = NULL;
    k_38 = t;
    h_38 :
    if(!(match_string(k_38, "-i")))
      {
        if(!(match_string(k_38, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm n_38 = NULL;
    ATerm k_18;
    k_18 = t;
    {
      ATerm l_38 = NULL;
      ATerm m_38 = NULL;
      m_38 = t;
      if(((l_38 != NULL) && (l_38 != m_38)))
        _fail(m_38);
      else
        l_38 = m_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_18, not_null(l_38));
        t = set_config_0(t);
      }
    }
    t = k_18;
    {
      ATerm o_38 = NULL;
      o_38 = t;
      if(((n_38 != NULL) && (n_38 != o_38)))
        _fail(o_38);
      else
        n_38 = o_38;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_38));
    }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  t = ArgOption_3(t, i_3, j_3, k_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_38 = NULL;
  s_38 = t;
  t = SSL_table_destroy(not_null(s_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  t = SSL_exit(not_null(w_38));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  a_39 = t;
  z_38 :
  if(((ATgetType(a_39) == AT_LIST) && ATisEmpty(a_39)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_39) == AT_LIST) && !(ATisEmpty(a_39))))
        {
          b_39 = ATgetFirst((ATermList) a_39);
          c_39 = (ATerm) ATgetNext((ATermList) a_39);
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
  ATerm r_18;
  r_18 = t;
  {
    ATerm f_39 = NULL;
    ATerm j_39 = NULL;
    ATerm s_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = s_18;
        {
          ATerm g_39 = NULL;
          ATerm h_39 = NULL;
          h_39 = t;
          if(((g_39 != NULL) && (g_39 != h_39)))
            _fail(h_39);
          else
            g_39 = h_39;
          t = (ATerm) ATinsert(ATempty, not_null(g_39));
        }
      }
    {
      j_39 = t;
      if(((f_39 != NULL) && (f_39 != j_39)))
        _fail(j_39);
      else
        f_39 = j_39;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_19, not_null(f_39));
      t = printnl_0(t);
    }
  }
  t = r_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  y_39 = t;
  v_39 :
  if(((ATgetType(y_39) == AT_LIST) && !(ATisEmpty(y_39))))
    {
      w_39 = ATgetFirst((ATermList) y_39);
      x_39 = (ATerm) ATgetNext((ATermList) y_39);
      {
        ATerm b_40 = NULL;
        t = not_null(x_39);
        {
          ATerm k_19;
          k_19 = t;
          {
            ATerm c_40 = NULL,e_40 = NULL,g_40 = NULL;
            ATerm l_19;
            l_19 = t;
            {
              ATerm d_40 = NULL;
              t = i_0(t);
              {
                d_40 = t;
                if(((c_40 != NULL) && (c_40 != d_40)))
                  _fail(d_40);
                else
                  c_40 = d_40;
              }
            }
            t = l_19;
            {
              ATerm f_40 = NULL;
              t = not_null(w_39);
              {
                t = h_0(t);
                {
                  f_40 = t;
                  if(((e_40 != NULL) && (e_40 != f_40)))
                    _fail(f_40);
                  else
                    e_40 = f_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_40)), not_null(e_40));
                {
                  g_40 = t;
                  if(((b_40 != NULL) && (b_40 != g_40)))
                    _fail(g_40);
                  else
                    b_40 = g_40;
                }
              }
            }
          }
          t = k_19;
          {
            ATerm l_3 (ATerm t)
            {
              t = not_null(b_40);
              return(t);
            }
            t = reverse_acc_2(t, h_0, l_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_39) == AT_LIST) && ATisEmpty(y_39)))
        {
          {
            t = term_f_7;
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
  ATerm m_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_62 (ATerm))
{
  ATerm u_40 = NULL,v_40 = NULL;
  u_40 = t;
  s_40 :
  if(match_cons(u_40, sym_Program_1))
    {
      v_40 = ATgetArgument(u_40, 0);
      {
        ATerm y_40 = NULL,a_41 = NULL;
        ATerm z_40 = NULL;
        t = SSLgetAnnotations(not_null(u_40));
        {
          z_40 = t;
          if(((y_40 != NULL) && (y_40 != z_40)))
            _fail(z_40);
          else
            y_40 = z_40;
        }
        {
          t = not_null(v_40);
          {
            ATerm c_41 = NULL;
            t = g_62(t);
            {
              a_41 = t;
              {
                ATerm d_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_41)), not_null(y_40));
                {
                  d_41 = t;
                  if(((c_41 != NULL) && (c_41 != d_41)))
                    _fail(d_41);
                  else
                    c_41 = d_41;
                }
                t = not_null(c_41);
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
  ATerm l_41 = NULL;
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_41 = NULL;
      t = term_q_5;
      {
        t = get_config_0(t);
        {
          m_41 = t;
          if(((l_41 != NULL) && (l_41 != m_41)))
            _fail(m_41);
          else
            l_41 = m_41;
        }
      }
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm o_3 (ATerm t)
          {
            ATerm n_41 = NULL;
            n_41 = t;
            if(((l_41 != NULL) && (l_41 != n_41)))
              _fail(n_41);
            else
              l_41 = n_41;
            return(t);
          }
          t = Program_1(t, o_3);
          return(t);
        }
        t = fetch_1(t, n_3);
      }
    }
  {
    t = term_o_19;
    {
      t = echo_0(t);
      {
        t = term_r_19;
        {
          t = table_get_0(t);
          {
            ATerm r_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, r_3);
            {
              ATerm s_3 (ATerm t)
              {
                ATerm o_41 = NULL;
                ATerm p_41 = NULL;
                p_41 = t;
                if(((o_41 != NULL) && (o_41 != p_41)))
                  _fail(p_41);
                else
                  o_41 = p_41;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_41)), term_s_19);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, s_3);
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
  ATerm t_19;
  t_19 = t;
  {
    ATerm w_41 = NULL;
    ATerm b_42 = NULL;
    b_42 = t;
    if(((w_41 != NULL) && (w_41 != b_42)))
      _fail(b_42);
    else
      w_41 = b_42;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATempty, not_null(w_41)));
      t = printnl_0(t);
    }
  }
  t = t_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm l_81 (ATerm))
{
  ATerm u_19;
  u_19 = t;
  {
    t = l_81(t);
    t = debug_0(t);
  }
  t = u_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm j_42 = NULL,k_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym_Undefined_1))
    {
      k_42 = ATgetArgument(j_42, 0);
      {
        ATerm o_42 = NULL,q_42 = NULL;
        ATerm p_42 = NULL;
        t = SSLgetAnnotations(not_null(j_42));
        {
          p_42 = t;
          if(((o_42 != NULL) && (o_42 != p_42)))
            _fail(p_42);
          else
            o_42 = p_42;
        }
        {
          t = not_null(k_42);
          {
            ATerm s_42 = NULL;
            t = h_62(t);
            {
              q_42 = t;
              {
                ATerm t_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_42)), not_null(o_42));
                {
                  t_42 = t;
                  if(((s_42 != NULL) && (s_42 != t_42)))
                    _fail(t_42);
                  else
                    s_42 = t_42;
                }
                t = not_null(s_42);
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
  ATerm c_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym_Help_0))
    {
      ATerm e_43 = NULL,g_43 = NULL;
      ATerm v_19;
      v_19 = t;
      {
        ATerm f_43 = NULL;
        t = SSLgetAnnotations(not_null(c_43));
        {
          f_43 = t;
          if(((e_43 != NULL) && (e_43 != f_43)))
            _fail(f_43);
          else
            e_43 = f_43;
        }
      }
      t = v_19;
      {
        ATerm h_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_43));
        {
          h_43 = t;
          if(((g_43 != NULL) && (g_43 != h_43)))
            _fail(h_43);
          else
            g_43 = h_43;
        }
        t = not_null(g_43);
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
  ATerm m_43 = NULL;
  m_43 = t;
  t = SSL_implode_string(not_null(m_43));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
        r_43 = t;
        q_43 :
        if(((ATgetType(r_43) == AT_LIST) && !(ATisEmpty(r_43))))
          {
            s_43 = ATgetFirst((ATermList) r_43);
            t_43 = (ATerm) ATgetNext((ATermList) r_43);
            {
              t = not_null(s_43);
              {
                ATerm t_3 (ATerm t)
                {
                  t = not_null(t_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_3);
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
  ATerm d_44 = NULL;
  ATerm f_44 = NULL;
  d_44 = t;
  {
    ATerm g_44 = NULL;
    ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
    t = not_null(d_44);
    {
      g_44 = t;
      {
        t = SSL_explode_term(not_null(g_44));
        {
          i_44 = t;
          b_44 :
          if(match_cons(i_44, sym__2))
            {
              j_44 = ATgetArgument(i_44, 0);
              k_44 = ATgetArgument(i_44, 1);
              c_44 :
              if(match_string(j_44, ""))
                {
                  if(((f_44 != NULL) && (f_44 != k_44)))
                    _fail(k_44);
                  else
                    f_44 = k_44;
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
      t = not_null(f_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm o_44 (ATerm t)
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_44);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        {
          t = Nil_0(t);
          t = b_71(t);
        }
      }
    return(t);
  }
  t = o_44(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
  r_44 = t;
  q_44 :
  if(match_cons(r_44, sym__2))
    {
      s_44 = ATgetArgument(r_44, 0);
      t_44 = ATgetArgument(r_44, 1);
      {
        t = not_null(s_44);
        {
          ATerm u_3 (ATerm t)
          {
            t = not_null(t_44);
            return(t);
          }
          t = at_end_1(t, u_3);
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
  ATerm a_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(d_20);
    }
  else
    {
      t = a_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_44 = NULL;
  y_44 = t;
  t = SSL_explode_string(not_null(y_44));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym__2))
    {
      e_45 = ATgetArgument(d_45, 0);
      f_45 = ATgetArgument(d_45, 1);
      {
        ATerm g_20;
        g_20 = t;
        t = SSL_printnl(not_null(e_45), not_null(f_45));
        t = g_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm h_20;
  h_20 = t;
  {
    ATerm l_45 = NULL,o_45 = NULL;
    ATerm i_20;
    i_20 = t;
    {
      ATerm n_45 = NULL;
      t = k_81(t);
      {
        n_45 = t;
        if(((l_45 != NULL) && (l_45 != n_45)))
          _fail(n_45);
        else
          l_45 = n_45;
      }
    }
    t = i_20;
    {
      ATerm p_45 = NULL;
      p_45 = t;
      if(((o_45 != NULL) && (o_45 != p_45)))
        _fail(p_45);
      else
        o_45 = p_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_45)), not_null(l_45)));
        t = printnl_0(t);
      }
    }
  }
  t = h_20;
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm s_45 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = Cons_2(t, m_70, s_45);
      }
    return(t);
  }
  t = s_45(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm t_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(v_20);
                }
              else
                {
                  t = t_20;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, v_3);
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
              b_46 = t;
              a_46 :
              if(match_cons(b_46, sym_Path_1))
                {
                  c_46 = ATgetArgument(b_46, 0);
                  t = not_null(c_46);
                }
              else
                {
                  if(match_cons(b_46, sym_Var_1))
                    {
                      c_46 = ATgetArgument(b_46, 0);
                      {
                        t = not_null(c_46);
                        {
                          ATerm w_20 = t;
                          int x_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_20);
                            }
                          else
                            {
                              t = w_20;
                              {
                                ATerm w_3 (ATerm t)
                                {
                                  t = term_y_20;
                                  return(t);
                                }
                                t = debug_1(t, w_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_46, sym_Prefix_2))
                        {
                          c_46 = ATgetArgument(b_46, 0);
                          d_46 = ATgetArgument(b_46, 1);
                          {
                            ATerm s_46 = NULL,u_46 = NULL;
                            ATerm z_20;
                            z_20 = t;
                            {
                              ATerm t_46 = NULL;
                              t = not_null(c_46);
                              {
                                t = eval_config_0(t);
                                {
                                  t_46 = t;
                                  if(((s_46 != NULL) && (s_46 != t_46)))
                                    _fail(t_46);
                                  else
                                    s_46 = t_46;
                                }
                              }
                            }
                            t = z_20;
                            {
                              ATerm v_46 = NULL;
                              t = not_null(d_46);
                              {
                                t = eval_config_0(t);
                                {
                                  v_46 = t;
                                  if(((u_46 != NULL) && (u_46 != v_46)))
                                    _fail(v_46);
                                  else
                                    u_46 = v_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_46), not_null(u_46));
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
  ATerm h_47 = NULL;
  h_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_21, not_null(h_47));
    {
      t = table_get_0(t);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm d_21;
              d_21 = t;
              {
                ATerm j_47 = NULL;
                ATerm k_47 = NULL;
                k_47 = t;
                if(((j_47 != NULL) && (j_47 != k_47)))
                  _fail(k_47);
                else
                  j_47 = k_47;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_21, not_null(h_47), not_null(j_47));
                  t = table_put_0(t);
                }
              }
              t = d_21;
            }
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym__2))
    {
      q_47 = ATgetArgument(p_47, 0);
      r_47 = ATgetArgument(p_47, 1);
      t = SSL_table_get(not_null(q_47), not_null(r_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym__3))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      c_48 = ATgetArgument(z_47, 2);
      {
        ATerm e_21;
        e_21 = t;
        {
          ATerm g_48 = NULL;
          ATerm h_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_48), not_null(b_48));
          {
            ATerm f_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
                t = (ATerm) ATempty;
              }
            {
              h_48 = t;
              if(((g_48 != NULL) && (g_48 != h_48)))
                _fail(h_48);
              else
                g_48 = h_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_48), not_null(b_48), (ATerm) ATinsert(CheckATermList(not_null(g_48)), not_null(c_48)));
            t = table_put_0(t);
          }
        }
        t = e_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm l_48 = NULL;
  ATerm m_48 = NULL;
  t = term_f_7;
  {
    t = o_86(t);
    {
      m_48 = t;
      if(((l_48 != NULL) && (l_48 != m_48)))
        _fail(m_48);
      else
        l_48 = m_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_19, term_q_19, not_null(l_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_48 = NULL,t_48 = NULL,x_48 = NULL;
  s_48 = t;
  r_48 :
  if(match_string(s_48, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_48) == AT_LIST) && !(ATisEmpty(s_48))))
        {
          t_48 = ATgetFirst((ATermList) s_48);
          x_48 = (ATerm) ATgetNext((ATermList) s_48);
          {
            ATerm a_49 = NULL;
            ATerm h_21;
            h_21 = t;
            {
              t = not_null(t_48);
              t = a_0(t);
            }
            t = h_21;
            {
              ATerm b_49 = NULL;
              t = term_f_7;
              {
                t = d_0(t);
                {
                  b_49 = t;
                  if(((a_49 != NULL) && (a_49 != b_49)))
                    _fail(b_49);
                  else
                    a_49 = b_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_48)), not_null(a_49));
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
  ATerm z_3 (ATerm t)
  {
    ATerm g_49 = NULL;
    g_49 = t;
    f_49 :
    if(!(match_string(g_49, "--help")))
      {
        if(!(match_string(g_49, "-h")))
          {
            if(!(match_string(g_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_j_21;
    {
      t = set_config_0(t);
      t = term_k_21;
    }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_l_21;
    return(t);
  }
  t = Option_3(t, z_3, c_4, g_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(((ATgetType(j_49) == AT_LIST) && !(ATisEmpty(j_49))))
    {
      k_49 = ATgetFirst((ATermList) j_49);
      l_49 = (ATerm) ATgetNext((ATermList) j_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_55 (ATerm), ATerm d_55 (ATerm))
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  v_49 = t;
  u_49 :
  if(((ATgetType(v_49) == AT_LIST) && !(ATisEmpty(v_49))))
    {
      w_49 = ATgetFirst((ATermList) v_49);
      x_49 = (ATerm) ATgetNext((ATermList) v_49);
      {
        ATerm b_50 = NULL,d_50 = NULL;
        ATerm c_50 = NULL;
        t = SSLgetAnnotations(not_null(v_49));
        {
          c_50 = t;
          if(((b_50 != NULL) && (b_50 != c_50)))
            _fail(c_50);
          else
            b_50 = c_50;
        }
        {
          t = not_null(w_49);
          {
            ATerm l_50 = NULL;
            t = c_55(t);
            {
              d_50 = t;
              {
                t = not_null(x_49);
                {
                  ATerm n_50 = NULL;
                  t = d_55(t);
                  {
                    l_50 = t;
                    {
                      ATerm o_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_50)), not_null(d_50)), not_null(b_50));
                      {
                        o_50 = t;
                        if(((n_50 != NULL) && (n_50 != o_50)))
                          _fail(o_50);
                        else
                          n_50 = o_50;
                      }
                      t = not_null(n_50);
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
  ATerm y_50 = NULL;
  y_50 = t;
  x_50 :
  if(((ATgetType(y_50) == AT_LIST) && ATisEmpty(y_50)))
    {
      {
        ATerm a_51 = NULL,c_51 = NULL;
        ATerm m_21;
        m_21 = t;
        {
          ATerm b_51 = NULL;
          t = SSLgetAnnotations(not_null(y_50));
          {
            b_51 = t;
            if(((a_51 != NULL) && (a_51 != b_51)))
              _fail(b_51);
            else
              a_51 = b_51;
          }
        }
        t = m_21;
        {
          ATerm d_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_51));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  i_51 :
  if(match_cons(j_51, sym__2))
    {
      k_51 = ATgetArgument(j_51, 0);
      l_51 = ATgetArgument(j_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_21, not_null(k_51), not_null(l_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm n_21;
  n_21 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_21;
        t = m_86(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
        }
      }
  }
  t = n_21;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm t_51 = NULL;
      ATerm r_21;
      r_21 = t;
      {
        ATerm r_51 = NULL;
        ATerm s_51 = NULL;
        s_51 = t;
        if(((r_51 != NULL) && (r_51 != s_51)))
          _fail(s_51);
        else
          r_51 = s_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_5, not_null(r_51));
          t = set_config_0(t);
        }
      }
      t = r_21;
      {
        ATerm u_51 = NULL;
        u_51 = t;
        if(((t_51 != NULL) && (t_51 != u_51)))
          _fail(u_51);
        else
          t_51 = u_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_51));
      }
      return(t);
    }
    ATerm i_4 (ATerm t)
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              {
                t = m_86(t);
                t = Cons_2(t, _id, i_4);
              }
            }
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_4, i_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  ATerm w_21;
  w_21 = t;
  {
    ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
    d_52 = t;
    z_51 :
    if(match_cons(d_52, sym__3))
      {
        e_52 = ATgetArgument(d_52, 0);
        f_52 = ATgetArgument(d_52, 1);
        g_52 = ATgetArgument(d_52, 2);
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
            {
              if(((c_52 != NULL) && (c_52 != g_52)))
                _fail(g_52);
              else
                c_52 = g_52;
              t = SSL_table_put(not_null(a_52), not_null(b_52), not_null(c_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm j_52 = NULL;
  ATerm x_21;
  x_21 = t;
  {
    t = term_y_21;
    t = table_put_0(t);
  }
  t = x_21;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm z_21 = t;
      int a_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_86(t);
          LocalPopChoice(a_22);
        }
      else
        {
          t = z_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_4);
    {
      ATerm b_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_22;
          d_22 = t;
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_21;
                t = get_config_0(t);
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                t = fetch_1(t, Help_0);
              }
          }
          t = d_22;
          {
            t = system_usage_0(t);
            {
              t = term_g_5;
              t = exit_0(t);
            }
          }
          LocalPopChoice(c_22);
        }
      else
        {
          t = b_22;
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm n_4 (ATerm t)
                  {
                    ATerm k_52 = NULL;
                    k_52 = t;
                    if(((j_52 != NULL) && (j_52 != k_52)))
                      _fail(k_52);
                    else
                      j_52 = k_52;
                    return(t);
                  }
                  t = Undefined_1(t, n_4);
                  return(t);
                }
                t = fetch_1(t, m_4);
                {
                  ATerm o_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_52)), term_i_22);
                    return(t);
                  }
                  t = say_1(t, o_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                {
                }
              }
          }
        }
      {
        ATerm j_22;
        j_22 = t;
        {
          t = term_p_19;
          t = table_destroy_0(t);
        }
        t = j_22;
      }
    }
  }
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm s_52 = NULL;
  ATerm u_52 = NULL,v_52 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    s_52 = t;
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_22;
                o_22 = t;
                {
                  ATerm p_22 = t;
                  int q_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_4 (ATerm t)
                      {
                        ATerm w_52 = NULL,x_52 = NULL;
                        w_52 = t;
                        o_52 :
                        if(match_cons(w_52, sym_Output_1))
                          {
                            x_52 = ATgetArgument(w_52, 0);
                            if(((v_52 != NULL) && (v_52 != x_52)))
                              _fail(x_52);
                            else
                              v_52 = x_52;
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = fetch_1(t, t_4);
                      {
                        t = not_null(v_52);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(q_22);
                    }
                  else
                    {
                      t = p_22;
                      {
                        ATerm y_52 = NULL;
                        t = term_j_19;
                        {
                          y_52 = t;
                          if(((v_52 != NULL) && (v_52 != y_52)))
                            _fail(y_52);
                          else
                            v_52 = y_52;
                        }
                      }
                    }
                }
                t = o_22;
                {
                  t = input_file_0(t);
                  {
                    ATerm u_4 (ATerm t)
                    {
                      ATerm z_52 = NULL;
                      t = abox2text_0(t);
                      {
                        z_52 = t;
                        if(((u_52 != NULL) && (u_52 != z_52)))
                          _fail(z_52);
                        else
                          u_52 = z_52;
                      }
                      return(t);
                    }
                    t = _2(t, _id, u_4);
                    {
                      t = not_null(u_52);
                      {
                        ATerm v_4 (ATerm t)
                        {
                          ATerm r_22 = t;
                          int s_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_string_0(t);
                              {
                                ATerm t_22;
                                t_22 = t;
                                {
                                  ATerm a_53 = NULL;
                                  ATerm b_53 = NULL;
                                  b_53 = t;
                                  if(((a_53 != NULL) && (a_53 != b_53)))
                                    _fail(b_53);
                                  else
                                    a_53 = b_53;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_52), (ATerm) ATinsert(ATempty, not_null(a_53)));
                                    t = print_0(t);
                                  }
                                }
                                t = t_22;
                              }
                              LocalPopChoice(s_22);
                            }
                          else
                            {
                              t = r_22;
                              {
                              }
                            }
                          return(t);
                        }
                        t = topdown_1(t, v_4);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_52), (ATerm) ATinsert(ATempty, term_u_22));
                          {
                            t = print_0(t);
                            t = report_success_0(t);
                          }
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
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

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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_c_21;
ATerm term_y_20;
ATerm term_p_20;
ATerm term_j_20;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_v_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_q_12;
ATerm term_g_12;
ATerm term_u_11;
ATerm term_a_10;
ATerm term_w_8;
ATerm term_p_7;
ATerm term_x_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_d_6;
ATerm term_a_6;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_d_5;
ATerm term_z_4;
ATerm term_w_4;
void init_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("*** error: invalid box: ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: HV box not supported", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_d_6, term_a_6);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_6);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_x_6);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_x_6);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_r_17, term_x_6);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__3, term_q_18, term_r_18, (ATerm) ATempty);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_68 (ATerm), ATerm i_68 (ATerm));
ATerm crush_2 (ATerm, ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_61 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_82 (ATerm));
ATerm topdown_1 (ATerm, ATerm i_78 (ATerm));
ATerm subt_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm l_75 (ATerm));
ATerm separate_by_1 (ATerm, ATerm m_75 (ATerm));
ATerm add_0 (ATerm);
ATerm Abox2text_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm x_68 (ATerm));
ATerm H_2 (ATerm, ATerm y_54 (ATerm), ATerm z_54 (ATerm));
ATerm filter_1 (ATerm, ATerm n_67 (ATerm));
ATerm foldr_3 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm l_64 (ATerm));
ATerm Fst_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm q_74 (ATerm));
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm g_82 (ATerm), ATerm h_82 (ATerm));
ATerm for_3 (ATerm, ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm u_54 (ATerm), ATerm v_54 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm l_74 (ATerm));
ATerm split_at_1 (ATerm, ATerm m_0 (ATerm));
ATerm string_length_p__1 (ATerm, ATerm c_83 (ATerm));
ATerm conc_0 (ATerm);
ATerm map_to_r_box_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm Abox2text_p__0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm _2 (ATerm, ATerm m_48 (ATerm), ATerm n_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_66 (ATerm), ATerm w_66 (ATerm));
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_64 (ATerm));
ATerm obsolete_1 (ATerm, ATerm r_64 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm b_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_61 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_63 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_60 (ATerm));
ATerm map_1 (ATerm, ATerm t_73 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_60 (ATerm));
ATerm Program_1 (ATerm, ATerm a_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_50 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_60 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_60 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_60 (ATerm));
ATerm Abox_2_text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATempty, term_z_4));
  {
    t = printnl_0(t);
    {
      t = term_d_5;
      t = exit_0(t);
    }
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
ATerm eval_config_0 (ATerm t)
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      {
        ATerm g_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_0);
            LocalPopChoice(j_5);
          }
        else
          {
            t = g_5;
            {
              ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
              l_1 = t;
              h_1 :
              if(match_cons(l_1, sym_Path_1))
                {
                  m_1 = ATgetArgument(l_1, 0);
                  t = not_null(m_1);
                }
              else
                {
                  if(match_cons(l_1, sym_Var_1))
                    {
                      m_1 = ATgetArgument(l_1, 0);
                      {
                        t = not_null(m_1);
                        {
                          ATerm k_5 = t;
                          int l_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_5);
                            }
                          else
                            {
                              t = k_5;
                              {
                                ATerm b_0 (ATerm t)
                                {
                                  t = term_q_5;
                                  return(t);
                                }
                                t = debug_1(t, b_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_1, sym_Prefix_2))
                        {
                          m_1 = ATgetArgument(l_1, 0);
                          n_1 = ATgetArgument(l_1, 1);
                          {
                            ATerm x_2 = NULL,j_3 = NULL;
                            ATerm r_5;
                            r_5 = t;
                            {
                              ATerm y_2 = NULL;
                              t = not_null(m_1);
                              {
                                t = eval_config_0(t);
                                {
                                  y_2 = t;
                                  if(((x_2 != NULL) && (x_2 != y_2)))
                                    _fail(y_2);
                                  else
                                    x_2 = y_2;
                                }
                              }
                            }
                            t = r_5;
                            {
                              ATerm k_3 = NULL;
                              t = not_null(n_1);
                              {
                                t = eval_config_0(t);
                                {
                                  k_3 = t;
                                  if(((j_3 != NULL) && (j_3 != k_3)))
                                    _fail(k_3);
                                  else
                                    j_3 = k_3;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), not_null(j_3));
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
  ATerm v_3 = NULL;
  v_3 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_5, not_null(v_3));
    {
      t = table_get_0(t);
      {
        ATerm e_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_5;
            x_5 = t;
            {
              ATerm x_3 = NULL;
              ATerm y_3 = NULL;
              y_3 = t;
              if(((x_3 != NULL) && (x_3 != y_3)))
                _fail(y_3);
              else
                x_3 = y_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_5, not_null(v_3), not_null(x_3));
                t = table_put_0(t);
              }
            }
            t = x_5;
          }
          return(t);
        }
        t = try_1(t, e_0);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_4 = NULL;
  c_4 = t;
  t = SSL_TicksToSeconds(not_null(c_4));
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_68 (ATerm), ATerm i_68 (ATerm))
{
  ATerm y_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_68(t);
      LocalPopChoice(z_5);
    }
  else
    {
      t = y_5;
      {
        ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
        i_4 = t;
        h_4 :
        if(((ATgetType(i_4) == AT_LIST) && ((ATermList) i_4 != ATempty)))
          {
            j_4 = ATgetFirst((ATermList) i_4);
            k_4 = (ATerm) ATgetNext((ATermList) i_4);
            {
              ATerm n_4 = NULL;
              ATerm o_4 = NULL;
              t = not_null(k_4);
              {
                t = foldr_2(t, h_68, i_68);
                {
                  o_4 = t;
                  if(((n_4 != NULL) && (n_4 != o_4)))
                    _fail(o_4);
                  else
                    n_4 = o_4;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_4), not_null(n_4));
                t = i_68(t);
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
  ATerm v_4 = NULL;
  ATerm x_4 = NULL;
  v_4 = t;
  {
    ATerm y_4 = NULL;
    ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
    t = not_null(v_4);
    {
      y_4 = t;
      {
        t = SSL_explode_term(not_null(y_4));
        {
          a_5 = t;
          u_4 :
          if(match_cons(a_5, sym__2))
            {
              b_5 = ATgetArgument(a_5, 0);
              c_5 = ATgetArgument(a_5, 1);
              if(((x_4 != NULL) && (x_4 != c_5)))
                _fail(c_5);
              else
                x_4 = c_5;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_4);
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
    ATerm f_0 (ATerm t)
    {
      t = term_a_6;
      return(t);
    }
    t = crush_2(t, f_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    ATerm c_6;
    c_6 = t;
    {
      ATerm h_5 = NULL;
      ATerm i_5 = NULL;
      t = term_d_6;
      {
        t = get_config_0(t);
        {
          i_5 = t;
          if(((h_5 != NULL) && (h_5 != i_5)))
            _fail(i_5);
          else
            h_5 = i_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), term_d_5);
        t = geq_0(t);
      }
    }
    t = c_6;
    t = t_61(t);
    return(t);
  }
  t = try_1(t, n_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm m_5 = NULL,o_5 = NULL;
    ATerm e_6;
    e_6 = t;
    {
      ATerm n_5 = NULL;
      t = run_time_0(t);
      {
        n_5 = t;
        if(((m_5 != NULL) && (m_5 != n_5)))
          _fail(n_5);
        else
          m_5 = n_5;
      }
    }
    t = e_6;
    {
      ATerm p_5 = NULL;
      t = term_j_6;
      {
        t = get_config_0(t);
        {
          p_5 = t;
          if(((o_5 != NULL) && (o_5 != p_5)))
            _fail(p_5);
          else
            o_5 = p_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_6), not_null(m_5)), term_k_6), not_null(o_5)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_0);
  {
    t = term_a_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym__2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      {
        ATerm m_6;
        m_6 = t;
        t = SSL_print(not_null(v_5), not_null(w_5));
        t = m_6;
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
  ATerm b_6 = NULL;
  b_6 = t;
  t = SSL_is_string(not_null(b_6));
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm n_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_82(t);
      LocalPopChoice(s_6);
    }
  else
    {
      t = n_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_78 (ATerm))
{
  t = i_78(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1(t, i_78);
      return(t);
    }
    t = _all(t, p_0);
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym__2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      {
        ATerm t_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_6), not_null(i_6));
            LocalPopChoice(w_6);
          }
        else
          {
            t = t_6;
            t = SSL_subtr(not_null(h_6), not_null(i_6));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  o_6 :
  if(((ATgetType(p_6) == AT_LIST) && ((ATermList) p_6 != ATempty)))
    {
      q_6 = ATgetFirst((ATermList) p_6);
      r_6 = (ATerm) ATgetNext((ATermList) p_6);
      {
        ATerm u_6 = NULL;
        ATerm v_6 = NULL;
        t = term_x_6;
        {
          t = l_75(t);
          {
            v_6 = t;
            if(((u_6 != NULL) && (u_6 != v_6)))
              _fail(v_6);
            else
              u_6 = v_6;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_6)), not_null(q_6)), not_null(u_6));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm m_75 (ATerm))
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
        ATerm r_0 (ATerm t)
        {
          ATerm e_7 = t;
          int f_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_7);
            }
          else
            {
              t = e_7;
              {
                t = Cons_2(t, _id, r_0);
                t = Sep_1(t, m_75);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, r_0);
      }
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym__2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_7), not_null(d_7));
            LocalPopChoice(h_7);
          }
        else
          {
            t = g_7;
            t = SSL_addr(not_null(c_7), not_null(d_7));
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
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2text_p__0(t);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm s_0 (ATerm t)
        {
          t = term_p_7;
          return(t);
        }
        t = debug_1(t, s_0);
        {
          t = term_d_5;
          t = exit_0(t);
        }
      }
    }
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  i_7 :
  if(match_cons(k_7, sym__2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      j_7 :
      if(((ATermList) l_7 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_7));
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
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  w_7 = t;
  u_7 :
  if(match_cons(w_7, sym__2))
    {
      x_7 = ATgetArgument(w_7, 0);
      a_8 = ATgetArgument(w_7, 1);
      v_7 :
      if(((ATgetType(x_7) == AT_LIST) && ((ATermList) x_7 != ATempty)))
        {
          y_7 = ATgetFirst((ATermList) x_7);
          z_7 = (ATerm) ATgetNext((ATermList) x_7);
          {
            ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
            ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), not_null(a_8));
            {
              t = q_0(t);
              {
                i_8 = t;
                t_7 :
                if(match_cons(i_8, sym__2))
                  {
                    j_8 = ATgetArgument(i_8, 0);
                    k_8 = ATgetArgument(i_8, 1);
                    {
                      ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
                      if(((g_8 != NULL) && (g_8 != j_8)))
                        _fail(j_8);
                      else
                        g_8 = j_8;
                      {
                        if(((e_8 != NULL) && (e_8 != k_8)))
                          _fail(k_8);
                        else
                          e_8 = k_8;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(e_8));
                          {
                            t = t_0(t);
                            {
                              l_8 = t;
                              s_7 :
                              if(match_cons(l_8, sym__2))
                                {
                                  m_8 = ATgetArgument(l_8, 0);
                                  n_8 = ATgetArgument(l_8, 1);
                                  {
                                    if(((h_8 != NULL) && (h_8 != m_8)))
                                      _fail(m_8);
                                    else
                                      h_8 = m_8;
                                    if(((f_8 != NULL) && (f_8 != n_8)))
                                      _fail(n_8);
                                    else
                                      f_8 = n_8;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_8)), not_null(g_8)), not_null(f_8));
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
ATerm thread_map_1 (ATerm t, ATerm x_68 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, x_68, r_8);
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = r_8(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm y_54 (ATerm), ATerm z_54 (ATerm))
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym_H_2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      {
        ATerm e_9 = NULL,g_9 = NULL;
        ATerm f_9 = NULL;
        t = SSLgetAnnotations(not_null(y_8));
        {
          f_9 = t;
          if(((e_9 != NULL) && (e_9 != f_9)))
            _fail(f_9);
          else
            e_9 = f_9;
        }
        {
          t = not_null(z_8);
          {
            ATerm i_9 = NULL;
            t = y_54(t);
            {
              g_9 = t;
              {
                t = not_null(a_9);
                {
                  ATerm k_9 = NULL;
                  t = z_54(t);
                  {
                    i_9 = t;
                    {
                      ATerm l_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_H_2, not_null(g_9), not_null(i_9)), not_null(e_9));
                      {
                        l_9 = t;
                        if(((k_9 != NULL) && (k_9 != l_9)))
                          _fail(l_9);
                        else
                          k_9 = l_9;
                      }
                      t = not_null(k_9);
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
ATerm filter_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm d_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 (ATerm t)
            {
              t = filter_1(t, n_67);
              return(t);
            }
            t = Cons_2(t, n_67, u_0);
            LocalPopChoice(o_8);
          }
        else
          {
            t = d_8;
            {
              ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
              t_9 = t;
              s_9 :
              if(((ATgetType(t_9) == AT_LIST) && ((ATermList) t_9 != ATempty)))
                {
                  u_9 = ATgetFirst((ATermList) t_9);
                  v_9 = (ATerm) ATgetNext((ATermList) t_9);
                  {
                    t = not_null(v_9);
                    t = filter_1(t, n_67);
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
ATerm foldr_3 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_68(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
        c_10 = t;
        b_10 :
        if(((ATgetType(c_10) == AT_LIST) && ((ATermList) c_10 != ATempty)))
          {
            d_10 = ATgetFirst((ATermList) c_10);
            e_10 = (ATerm) ATgetNext((ATermList) c_10);
            {
              ATerm h_10 = NULL,j_10 = NULL;
              ATerm s_8;
              s_8 = t;
              {
                ATerm i_10 = NULL;
                t = not_null(d_10);
                {
                  t = l_68(t);
                  {
                    i_10 = t;
                    if(((h_10 != NULL) && (h_10 != i_10)))
                      _fail(i_10);
                    else
                      h_10 = i_10;
                  }
                }
              }
              t = s_8;
              {
                ATerm k_10 = NULL;
                t = not_null(e_10);
                {
                  t = foldr_3(t, j_68, k_68, l_68);
                  {
                    k_10 = t;
                    if(((j_10 != NULL) && (j_10 != k_10)))
                      _fail(k_10);
                    else
                      j_10 = k_10;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), not_null(j_10));
                  t = k_68(t);
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
  ATerm v_0 (ATerm t)
  {
    t = term_a_6;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = term_d_5;
    return(t);
  }
  t = foldr_3(t, v_0, add_0, w_0);
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
  ATerm s_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym_HS_0))
    {
      ATerm u_10 = NULL,w_10 = NULL;
      ATerm t_8;
      t_8 = t;
      {
        ATerm v_10 = NULL;
        t = SSLgetAnnotations(not_null(s_10));
        {
          v_10 = t;
          if(((u_10 != NULL) && (u_10 != v_10)))
            _fail(v_10);
          else
            u_10 = v_10;
        }
      }
      t = t_8;
      {
        ATerm x_10 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(u_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        t = not_null(w_10);
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
  ATerm d_11 = NULL,f_11 = NULL;
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          ATerm e_11 = NULL;
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
          return(t);
        }
        t = SOpt_2(t, HS_0, y_0);
        return(t);
      }
      t = fetch_1(t, x_0);
      {
        t = not_null(d_11);
        t = string_to_int_0(t);
      }
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = term_d_5;
    }
  {
    f_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), term_w_8);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm b_9;
  b_9 = t;
  {
    ATerm k_11 = NULL;
    ATerm l_11 = NULL;
    l_11 = t;
    if(((k_11 != NULL) && (k_11 != l_11)))
      _fail(l_11);
    else
      k_11 = l_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATempty, not_null(k_11)));
      t = printnl_0(t);
    }
  }
  t = b_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm c_9;
  c_9 = t;
  {
    t = l_64(t);
    t = debug_0(t);
  }
  t = c_9;
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_11 = NULL;
  ATerm v_11 = NULL,w_11 = NULL;
  t_11 = t;
  {
    ATerm x_11 = NULL;
    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
    t = not_null(t_11);
    {
      x_11 = t;
      {
        t = SSL_explode_term(not_null(x_11));
        {
          z_11 = t;
          q_11 :
          if(match_cons(z_11, sym__2))
            {
              a_12 = ATgetArgument(z_11, 0);
              b_12 = ATgetArgument(z_11, 1);
              r_11 :
              if(match_string(a_12, ""))
                {
                  s_11 :
                  if(((ATgetType(b_12) == AT_LIST) && ((ATermList) b_12 != ATempty)))
                    {
                      c_12 = ATgetFirst((ATermList) b_12);
                      d_12 = (ATerm) ATgetNext((ATermList) b_12);
                      {
                        if(((w_11 != NULL) && (w_11 != c_12)))
                          _fail(c_12);
                        else
                          w_11 = c_12;
                        if(((v_11 != NULL) && (v_11 != d_12)))
                          _fail(d_12);
                        else
                          v_11 = d_12;
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
    t = not_null(w_11);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm h_12 (ATerm t)
  {
    ATerm d_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = q_74(t);
        LocalPopChoice(h_9);
      }
    else
      {
        t = d_9;
        t = Cons_2(t, _id, h_12);
      }
    return(t);
  }
  t = h_12(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm k_12 = NULL;
  ATerm j_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
      l_12 = t;
      j_12 :
      if(match_cons(l_12, sym__2))
        {
          m_12 = ATgetArgument(l_12, 0);
          n_12 = ATgetArgument(l_12, 1);
          {
            if(((k_12 != NULL) && (k_12 != m_12)))
              _fail(m_12);
            else
              k_12 = m_12;
            if(((k_12 != NULL) && (k_12 != n_12)))
              _fail(n_12);
            else
              k_12 = n_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_9);
    }
  else
    {
      t = j_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm p_12 (ATerm t)
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_82(t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          t = h_82(t);
          t = p_12(t);
        }
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm))
{
  t = j_82(t);
  t = while_not_2(t, k_82, l_82);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
    y_12 = t;
    r_12 :
    if(match_cons(y_12, sym__2))
      {
        z_12 = ATgetArgument(y_12, 0);
        a_13 = ATgetArgument(y_12, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_12), not_null(a_13), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
    d_13 = t;
    t_12 :
    if(match_cons(d_13, sym__3))
      {
        e_13 = ATgetArgument(d_13, 0);
        f_13 = ATgetArgument(d_13, 1);
        g_13 = ATgetArgument(d_13, 2);
        u_12 :
        if(match_int(e_13, 0))
          {
            t = not_null(g_13);
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
  ATerm b_1 (ATerm t)
  {
    ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
    j_13 = t;
    x_12 :
    if(match_cons(j_13, sym__3))
      {
        k_13 = ATgetArgument(j_13, 0);
        l_13 = ATgetArgument(j_13, 1);
        m_13 = ATgetArgument(j_13, 2);
        {
          ATerm q_13 = NULL;
          ATerm p_9;
          p_9 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), term_d_5);
            t = geq_0(t);
          }
          t = p_9;
          {
            ATerm r_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), term_d_5);
            {
              t = subt_0(t);
              {
                r_13 = t;
                if(((q_13 != NULL) && (q_13 != r_13)))
                  _fail(r_13);
                else
                  q_13 = r_13;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_13), not_null(l_13), (ATerm) ATinsert(CheckATermList(not_null(m_13)), not_null(l_13)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, z_0, a_1, b_1);
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
  ATerm a_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_IS_0))
    {
      ATerm c_14 = NULL,e_14 = NULL;
      ATerm q_9;
      q_9 = t;
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
      t = q_9;
      {
        ATerm f_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(c_14));
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
ATerm Ispace_0 (ATerm t)
{
  ATerm l_14 = NULL,n_14 = NULL;
  ATerm r_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          ATerm m_14 = NULL;
          m_14 = t;
          if(((l_14 != NULL) && (l_14 != m_14)))
            _fail(m_14);
          else
            l_14 = m_14;
          return(t);
        }
        t = SOpt_2(t, IS_0, d_1);
        return(t);
      }
      t = fetch_1(t, c_1);
      {
        t = not_null(l_14);
        t = string_to_int_0(t);
      }
      LocalPopChoice(w_9);
    }
  else
    {
      t = r_9;
      t = term_a_6;
    }
  {
    n_14 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), term_w_8);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_VS_0))
    {
      ATerm x_14 = NULL,z_14 = NULL;
      ATerm x_9;
      x_9 = t;
      {
        ATerm y_14 = NULL;
        t = SSLgetAnnotations(not_null(v_14));
        {
          y_14 = t;
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
        }
      }
      t = x_9;
      {
        ATerm a_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(x_14));
        {
          a_15 = t;
          if(((z_14 != NULL) && (z_14 != a_15)))
            _fail(a_15);
          else
            z_14 = a_15;
        }
        t = not_null(z_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm u_54 (ATerm), ATerm v_54 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_SOpt_2))
    {
      l_15 = ATgetArgument(k_15, 0);
      m_15 = ATgetArgument(k_15, 1);
      {
        ATerm q_15 = NULL,s_15 = NULL;
        ATerm r_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          r_15 = t;
          if(((q_15 != NULL) && (q_15 != r_15)))
            _fail(r_15);
          else
            q_15 = r_15;
        }
        {
          t = not_null(l_15);
          {
            ATerm u_15 = NULL;
            t = u_54(t);
            {
              s_15 = t;
              {
                t = not_null(m_15);
                {
                  ATerm w_15 = NULL;
                  t = v_54(t);
                  {
                    u_15 = t;
                    {
                      ATerm x_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(s_15), not_null(u_15)), not_null(q_15));
                      {
                        x_15 = t;
                        if(((w_15 != NULL) && (w_15 != x_15)))
                          _fail(x_15);
                        else
                          w_15 = x_15;
                      }
                      t = not_null(w_15);
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
  ATerm g_16 = NULL,i_16 = NULL;
  ATerm k_16 = NULL;
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm h_16 = NULL;
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
          return(t);
        }
        t = SOpt_2(t, VS_0, f_1);
        return(t);
      }
      t = fetch_1(t, e_1);
      {
        t = not_null(g_16);
        t = string_to_int_0(t);
      }
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = term_a_6;
    }
  {
    i_16 = t;
    {
      ATerm l_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), term_d_5);
      {
        t = add_0(t);
        {
          l_16 = t;
          if(((k_16 != NULL) && (k_16 != l_16)))
            _fail(l_16);
          else
            k_16 = l_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), term_a_10);
        t = copy_char_0(t);
      }
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(((ATgetType(r_16) == AT_LIST) && ((ATermList) r_16 != ATempty)))
    {
      s_16 = ATgetFirst((ATermList) r_16);
      t_16 = (ATerm) ATgetNext((ATermList) r_16);
      t = not_null(t_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  y_16 :
  if(((ATgetType(a_17) == AT_LIST) && ((ATermList) a_17 != ATempty)))
    {
      b_17 = ATgetFirst((ATermList) a_17);
      c_17 = (ATerm) ATgetNext((ATermList) a_17);
      z_16 :
      if(((ATermList) c_17 == ATempty))
        {
          t = not_null(b_17);
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
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm g_17 (ATerm t)
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_74(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = Cons_2(t, _id, g_17);
      }
    return(t);
  }
  t = g_17(t);
  return(t);
}
ATerm split_at_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL;
      ATerm s_17 = NULL;
      q_17 = t;
      {
        ATerm t_17 = NULL;
        t = not_null(q_17);
        {
          t = explode_string_0(t);
          {
            t = reverse_0(t);
            {
              t_17 = t;
              if(((s_17 != NULL) && (s_17 != t_17)))
                _fail(t_17);
              else
                s_17 = t_17;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, not_null(s_17), (ATerm)ATempty, (ATerm) ATempty);
          {
            ATerm s_18 (ATerm t)
            {
              ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
              u_17 = t;
              m_17 :
              if(match_cons(u_17, sym__3))
                {
                  v_17 = ATgetArgument(u_17, 0);
                  y_17 = ATgetArgument(u_17, 1);
                  z_17 = ATgetArgument(u_17, 2);
                  n_17 :
                  if(((ATermList) v_17 == ATempty))
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_17)), not_null(y_17));
                    }
                  else
                    {
                      if(((ATgetType(v_17) == AT_LIST) && ((ATermList) v_17 != ATempty)))
                        {
                          w_17 = ATgetFirst((ATermList) v_17);
                          x_17 = (ATerm) ATgetNext((ATermList) v_17);
                          {
                            ATerm p_10 = t;
                            int q_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = not_null(w_17);
                                {
                                  t = m_0(t);
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(x_17), (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(not_null(z_17)), not_null(y_17)));
                                    t = s_18(t);
                                  }
                                }
                                LocalPopChoice(q_10);
                              }
                            else
                              {
                                t = p_10;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, not_null(x_17), (ATerm)ATinsert(CheckATermList(not_null(y_17)), not_null(w_17)), not_null(z_17));
                                  t = s_18(t);
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
            t = s_18(t);
            t = map_1(t, implode_string_0);
          }
        }
      }
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm m_18 = NULL,o_18 = NULL;
        ATerm g_1 (ATerm t)
        {
          t = Cons_2(t, m_0, _id);
          {
            ATerm i_1 (ATerm t)
            {
              ATerm n_18 = NULL;
              n_18 = t;
              if(((m_18 != NULL) && (m_18 != n_18)))
                _fail(n_18);
              else
                m_18 = n_18;
              return(t);
            }
            t = Cons_2(t, _id, i_1);
            t = (ATerm) ATempty;
          }
          return(t);
        }
        t = at_suffix_1(t, g_1);
        {
          ATerm p_18 = NULL;
          p_18 = t;
          if(((o_18 != NULL) && (o_18 != p_18)))
            _fail(p_18);
          else
            o_18 = p_18;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(m_18));
        }
      }
    }
  return(t);
}
ATerm string_length_p__1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    ATerm z_18 = NULL;
    z_18 = t;
    y_18 :
    if(!(match_int(z_18, 10)))
      {
        _fail(t);
      }
    return(t);
  }
  t = split_at_1(t, j_1);
  {
    ATerm t_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        {
          t = last_0(t);
          t = string_length_0(t);
        }
        LocalPopChoice(y_10);
      }
    else
      {
        t = t_10;
        {
          t = last_0(t);
          {
            t = string_length_0(t);
            {
              t = split_2(t, _id, c_83);
              t = subt_0(t);
            }
          }
        }
      }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym__2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      {
        t = not_null(d_19);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(e_19);
            return(t);
          }
          t = at_end_1(t, k_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_to_r_box_0 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_19), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm y_21 (ATerm t)
      {
        ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
        ATerm d_22 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(f_20))));
          t = conc_0(t);
          return(t);
        }
        ATerm e_22 (ATerm t)
        {
          ATerm z_20 = NULL;
          ATerm a_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(z_19), not_null(a_20))));
          {
            t = conc_0(t);
            {
              a_21 = t;
              if(((z_20 != NULL) && (z_20 != a_21)))
                _fail(a_21);
              else
                z_20 = a_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_20), (ATerm)ATempty, not_null(z_20));
            t = y_21(t);
          }
          return(t);
        }
        ATerm f_22 (ATerm t)
        {
          ATerm n_21 = NULL;
          ATerm o_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(z_19), not_null(a_20))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(f_20))));
          {
            t = conc_0(t);
            {
              o_21 = t;
              if(((n_21 != NULL) && (n_21 != o_21)))
                _fail(o_21);
              else
                n_21 = o_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_20), (ATerm)ATempty, not_null(n_21));
            t = y_21(t);
          }
          return(t);
        }
        ATerm g_22 (ATerm t)
        {
          ATerm v_21 = NULL;
          ATerm w_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), (ATerm) ATinsert(ATempty, not_null(d_20)));
          {
            t = conc_0(t);
            {
              w_21 = t;
              if(((v_21 != NULL) && (v_21 != w_21)))
                _fail(w_21);
              else
                v_21 = w_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_20), not_null(v_21), not_null(g_20));
            t = y_21(t);
          }
          return(t);
        }
        b_20 = t;
        r_19 :
        if(match_cons(b_20, sym__3))
          {
            c_20 = ATgetArgument(b_20, 0);
            f_20 = ATgetArgument(b_20, 1);
            g_20 = ATgetArgument(b_20, 2);
            s_19 :
            if(((ATermList) c_20 == ATempty))
              {
                t_19 :
                if(((ATermList) f_20 == ATempty))
                  {
                    {
                      ATerm z_10 = t;
                      int a_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(g_20);
                          LocalPopChoice(a_11);
                        }
                      else
                        {
                          t = z_10;
                          t = d_22(t);
                        }
                    }
                  }
                else
                  {
                    t = d_22(t);
                  }
              }
            else
              {
                if(((ATgetType(c_20) == AT_LIST) && ((ATermList) c_20 != ATempty)))
                  {
                    d_20 = ATgetFirst((ATermList) c_20);
                    e_20 = (ATerm) ATgetNext((ATermList) c_20);
                    u_19 :
                    if(((ATermList) f_20 == ATempty))
                      {
                        v_19 :
                        if(match_cons(d_20, sym_R_2))
                          {
                            z_19 = ATgetArgument(d_20, 0);
                            a_20 = ATgetArgument(d_20, 1);
                            {
                              ATerm b_11 = t;
                              int c_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = e_22(t);
                                  LocalPopChoice(c_11);
                                }
                              else
                                {
                                  t = b_11;
                                  {
                                    ATerm g_11 = t;
                                    int h_11 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_22(t);
                                        LocalPopChoice(h_11);
                                      }
                                    else
                                      {
                                        t = g_11;
                                        t = g_22(t);
                                      }
                                  }
                                }
                            }
                          }
                        else
                          {
                            t = g_22(t);
                          }
                      }
                    else
                      {
                        w_19 :
                        if(match_cons(d_20, sym_R_2))
                          {
                            z_19 = ATgetArgument(d_20, 0);
                            a_20 = ATgetArgument(d_20, 1);
                            {
                              ATerm i_11 = t;
                              int j_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_22(t);
                                  LocalPopChoice(j_11);
                                }
                              else
                                {
                                  t = i_11;
                                  t = g_22(t);
                                }
                            }
                          }
                        else
                          {
                            t = g_22(t);
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
      t = y_21(t);
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym__2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      {
        ATerm m_11;
        m_11 = t;
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_22), not_null(o_22));
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = SSL_gtr(not_null(n_22), not_null(o_22));
            }
        }
        t = m_11;
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
  ATerm p_11 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_11;
    }
  return(t);
}
ATerm Abox2text_p__0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  w_24 :
  if(match_cons(i_25, sym__2))
    {
      j_25 = ATgetArgument(i_25, 0);
      m_25 = ATgetArgument(i_25, 1);
      x_24 :
      if(((ATermList) j_25 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(m_25));
        }
      else
        {
          if(((ATgetType(j_25) == AT_LIST) && ((ATermList) j_25 != ATempty)))
            {
              k_25 = ATgetFirst((ATermList) j_25);
              l_25 = (ATerm) ATgetNext((ATermList) j_25);
              y_24 :
              if(((ATermList) l_25 == ATempty))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), not_null(m_25));
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
              if(match_cons(j_25, sym_ALT_2))
                {
                  k_25 = ATgetArgument(j_25, 0);
                  l_25 = ATgetArgument(j_25, 1);
                  {
                    ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
                    ATerm y_11;
                    y_11 = t;
                    {
                      ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), not_null(m_25));
                      {
                        t = Abox2text_0(t);
                        {
                          c_26 = t;
                          g_23 :
                          if(match_cons(c_26, sym__2))
                            {
                              d_26 = ATgetArgument(c_26, 0);
                              e_26 = ATgetArgument(c_26, 1);
                              {
                                if(((z_25 != NULL) && (z_25 != c_26)))
                                  _fail(c_26);
                                else
                                  z_25 = c_26;
                                {
                                  if(((a_26 != NULL) && (a_26 != d_26)))
                                    _fail(d_26);
                                  else
                                    a_26 = d_26;
                                  if(((b_26 != NULL) && (b_26 != e_26)))
                                    _fail(e_26);
                                  else
                                    b_26 = e_26;
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
                    t = y_11;
                    {
                      ATerm e_12 = t;
                      int f_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), term_g_12);
                          t = leq_0(t);
                          LocalPopChoice(f_12);
                          t = not_null(z_25);
                        }
                      else
                        {
                          t = e_12;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_25), not_null(m_25));
                            t = Abox2text_0(t);
                          }
                        }
                    }
                  }
                }
              else
                {
                  if(match_cons(j_25, sym_A_3))
                    {
                      k_25 = ATgetArgument(j_25, 0);
                      l_25 = ATgetArgument(j_25, 1);
                      c_25 = ATgetArgument(j_25, 2);
                      {
                        ATerm i_26 = NULL;
                        ATerm j_26 = NULL;
                        t = not_null(c_25);
                        {
                          t = map_to_r_box_0(t);
                          {
                            j_26 = t;
                            if(((i_26 != NULL) && (i_26 != j_26)))
                              _fail(j_26);
                            else
                              i_26 = j_26;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(l_25), not_null(i_26)), not_null(m_25));
                          t = Abox2text_0(t);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_25, sym_R_2))
                        {
                          k_25 = ATgetArgument(j_25, 0);
                          l_25 = ATgetArgument(j_25, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(k_25), not_null(l_25)), not_null(m_25));
                            t = Abox2text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(j_25, sym_HV_2))
                            {
                              k_25 = ATgetArgument(j_25, 0);
                              l_25 = ATgetArgument(j_25, 1);
                              {
                                ATerm i_12 = t;
                                int o_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(k_25), not_null(l_25)), not_null(m_25));
                                    t = Abox2text_0(t);
                                    LocalPopChoice(o_12);
                                  }
                                else
                                  {
                                    t = i_12;
                                    {
                                      ATerm o_1 (ATerm t)
                                      {
                                        t = term_q_12;
                                        return(t);
                                      }
                                      t = say_1(t, o_1);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(k_25), not_null(l_25)), not_null(m_25));
                                        t = Abox2text_p__0(t);
                                      }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(j_25, sym_FBOX_2))
                                {
                                  k_25 = ATgetArgument(j_25, 0);
                                  l_25 = ATgetArgument(j_25, 1);
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_25), not_null(m_25));
                                    t = Abox2text_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(j_25, sym_C_2))
                                    {
                                      k_25 = ATgetArgument(j_25, 0);
                                      l_25 = ATgetArgument(j_25, 1);
                                      z_24 :
                                      if(((ATgetType(l_25) == AT_LIST) && ((ATermList) l_25 != ATempty)))
                                        {
                                          d_25 = ATgetFirst((ATermList) l_25);
                                          h_25 = (ATerm) ATgetNext((ATermList) l_25);
                                          a_25 :
                                          if(match_cons(d_25, sym_S_1))
                                            {
                                              g_25 = ATgetArgument(d_25, 0);
                                              b_25 :
                                              if(((ATermList) h_25 == ATempty))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), not_null(m_25));
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
                                      if(match_cons(j_25, sym_S_1))
                                        {
                                          k_25 = ATgetArgument(j_25, 0);
                                          {
                                            ATerm x_26 = NULL;
                                            ATerm y_26 = NULL,a_27 = NULL;
                                            ATerm z_26 = NULL;
                                            t = not_null(k_25);
                                            {
                                              ATerm p_1 (ATerm t)
                                              {
                                                t = not_null(m_25);
                                                return(t);
                                              }
                                              t = string_length_p__1(t, p_1);
                                              {
                                                z_26 = t;
                                                if(((y_26 != NULL) && (y_26 != z_26)))
                                                  _fail(z_26);
                                                else
                                                  y_26 = z_26;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_25), not_null(y_26));
                                              {
                                                t = add_0(t);
                                                {
                                                  a_27 = t;
                                                  if(((x_26 != NULL) && (x_26 != a_27)))
                                                    _fail(a_27);
                                                  else
                                                    x_26 = a_27;
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), not_null(x_26));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(j_25, sym_V_2))
                                            {
                                              k_25 = ATgetArgument(j_25, 0);
                                              l_25 = ATgetArgument(j_25, 1);
                                              {
                                                ATerm e_27 = NULL;
                                                t = not_null(k_25);
                                                {
                                                  ATerm g_27 = NULL;
                                                  t = Vspace_0(t);
                                                  {
                                                    e_27 = t;
                                                    {
                                                      t = not_null(k_25);
                                                      {
                                                        ATerm i_27 = NULL;
                                                        t = Ispace_0(t);
                                                        {
                                                          g_27 = t;
                                                          {
                                                            ATerm k_27 = NULL,m_27 = NULL;
                                                            t = string_length_0(t);
                                                            {
                                                              i_27 = t;
                                                              {
                                                                ATerm l_27 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_25), term_w_8);
                                                                {
                                                                  t = copy_char_0(t);
                                                                  {
                                                                    l_27 = t;
                                                                    if(((k_27 != NULL) && (k_27 != l_27)))
                                                                      _fail(l_27);
                                                                    else
                                                                      k_27 = l_27;
                                                                  }
                                                                }
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_27)), not_null(g_27)), not_null(e_27));
                                                                  {
                                                                    ATerm b_28 = NULL;
                                                                    t = concat_strings_0(t);
                                                                    {
                                                                      m_27 = t;
                                                                      {
                                                                        t = not_null(l_25);
                                                                        {
                                                                          ATerm q_1 (ATerm t)
                                                                          {
                                                                            ATerm s_12 = t;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm v_12 = t;
                                                                                int w_12 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Nil_0(t);
                                                                                    LocalPopChoice(w_12);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_12;
                                                                                    {
                                                                                      ATerm o_27 = NULL;
                                                                                      ATerm q_27 = NULL,r_27 = NULL,x_27 = NULL,y_27 = NULL;
                                                                                      o_27 = t;
                                                                                      {
                                                                                        ATerm b_13;
                                                                                        b_13 = t;
                                                                                        {
                                                                                          ATerm s_27 = NULL;
                                                                                          ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
                                                                                          t = not_null(o_27);
                                                                                          {
                                                                                            s_27 = t;
                                                                                            {
                                                                                              t = SSL_explode_term(not_null(s_27));
                                                                                              {
                                                                                                u_27 = t;
                                                                                                s_23 :
                                                                                                if(match_cons(u_27, sym__2))
                                                                                                  {
                                                                                                    v_27 = ATgetArgument(u_27, 0);
                                                                                                    w_27 = ATgetArgument(u_27, 1);
                                                                                                    {
                                                                                                      if(((q_27 != NULL) && (q_27 != v_27)))
                                                                                                        _fail(v_27);
                                                                                                      else
                                                                                                        q_27 = v_27;
                                                                                                      if(((r_27 != NULL) && (r_27 != w_27)))
                                                                                                        _fail(w_27);
                                                                                                      else
                                                                                                        r_27 = w_27;
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
                                                                                        t = b_13;
                                                                                        {
                                                                                          ATerm c_13;
                                                                                          c_13 = t;
                                                                                          {
                                                                                            ATerm z_27 = NULL;
                                                                                            ATerm a_28 = NULL;
                                                                                            t = not_null(q_27);
                                                                                            {
                                                                                              z_27 = t;
                                                                                              {
                                                                                                if(((x_27 != NULL) && (x_27 != z_27)))
                                                                                                  _fail(z_27);
                                                                                                else
                                                                                                  x_27 = z_27;
                                                                                                {
                                                                                                  t = not_null(r_27);
                                                                                                  {
                                                                                                    ATerm r_1 (ATerm t)
                                                                                                    {
                                                                                                      ATerm s_1 (ATerm t)
                                                                                                      {
                                                                                                        ATerm h_13 = t;
                                                                                                        int i_13 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Nil_0(t);
                                                                                                            LocalPopChoice(i_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = h_13;
                                                                                                            t = Cons_2(t, Nil_0, Nil_0);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Cons_2(t, s_1, Nil_0);
                                                                                                      return(t);
                                                                                                    }
                                                                                                    t = Cons_2(t, _id, r_1);
                                                                                                    {
                                                                                                      a_28 = t;
                                                                                                      if(((y_27 != NULL) && (y_27 != a_28)))
                                                                                                        _fail(a_28);
                                                                                                      else
                                                                                                        y_27 = a_28;
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          t = c_13;
                                                                                          t = SSL_mkterm(not_null(x_27), not_null(y_27));
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                PopChoice();
                                                                                _fail(t);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = s_12;
                                                                              }
                                                                            return(t);
                                                                          }
                                                                          t = filter_1(t, q_1);
                                                                          {
                                                                            ATerm n_13 = t;
                                                                            int o_13 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_25));
                                                                                LocalPopChoice(o_13);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_13;
                                                                                {
                                                                                  ATerm t_1 (ATerm t)
                                                                                  {
                                                                                    ATerm c_28 = NULL;
                                                                                    c_28 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), not_null(m_25));
                                                                                      t = Abox2text_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm u_1 (ATerm t)
                                                                                  {
                                                                                    ATerm v_1 (ATerm t)
                                                                                    {
                                                                                      ATerm e_28 = NULL;
                                                                                      ATerm g_28 = NULL;
                                                                                      e_28 = t;
                                                                                      {
                                                                                        ATerm j_28 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_25), not_null(i_27));
                                                                                        {
                                                                                          t = add_0(t);
                                                                                          {
                                                                                            j_28 = t;
                                                                                            if(((g_28 != NULL) && (g_28 != j_28)))
                                                                                              _fail(j_28);
                                                                                            else
                                                                                              g_28 = j_28;
                                                                                          }
                                                                                        }
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_28), not_null(g_28));
                                                                                          t = Abox2text_0(t);
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, v_1);
                                                                                    return(t);
                                                                                  }
                                                                                  t = Cons_2(t, t_1, u_1);
                                                                                  {
                                                                                    ATerm w_1 (ATerm t)
                                                                                    {
                                                                                      ATerm x_1 (ATerm t)
                                                                                      {
                                                                                        ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
                                                                                        o_28 = t;
                                                                                        z_23 :
                                                                                        if(match_cons(o_28, sym__2))
                                                                                          {
                                                                                            p_28 = ATgetArgument(o_28, 0);
                                                                                            q_28 = ATgetArgument(o_28, 1);
                                                                                            if(((b_28 != NULL) && (b_28 != q_28)))
                                                                                              _fail(q_28);
                                                                                            else
                                                                                              b_28 = q_28;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                        return(t);
                                                                                      }
                                                                                      t = Cons_2(t, x_1, Nil_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = at_last_1(t, w_1);
                                                                                    {
                                                                                      t = map_1(t, Fst_0);
                                                                                      {
                                                                                        ATerm y_1 (ATerm t)
                                                                                        {
                                                                                          t = not_null(m_27);
                                                                                          return(t);
                                                                                        }
                                                                                        t = separate_by_1(t, y_1);
                                                                                        {
                                                                                          ATerm z_1 (ATerm t)
                                                                                          {
                                                                                            t = not_null(b_28);
                                                                                            return(t);
                                                                                          }
                                                                                          t = split_2(t, _id, z_1);
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
                                              if(match_cons(j_25, sym_H_2))
                                                {
                                                  k_25 = ATgetArgument(j_25, 0);
                                                  l_25 = ATgetArgument(j_25, 1);
                                                  {
                                                    ATerm y_28 = NULL;
                                                    t = not_null(k_25);
                                                    {
                                                      ATerm a_29 = NULL;
                                                      t = Hspace_0(t);
                                                      {
                                                        y_28 = t;
                                                        {
                                                          ATerm c_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            a_29 = t;
                                                            {
                                                              ATerm d_29 = NULL;
                                                              t = not_null(l_25);
                                                              {
                                                                ATerm a_2 (ATerm t)
                                                                {
                                                                  ATerm p_13 = t;
                                                                  if((PushChoice() == 0))
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
                                                                          t = H_2(t, Nil_0, Nil_0);
                                                                        }
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = p_13;
                                                                    }
                                                                  return(t);
                                                                }
                                                                t = filter_1(t, a_2);
                                                                {
                                                                  d_29 = t;
                                                                  if(((c_29 != NULL) && (c_29 != d_29)))
                                                                    _fail(d_29);
                                                                  else
                                                                    c_29 = d_29;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(m_25));
                                                                {
                                                                  ATerm b_2 (ATerm t)
                                                                  {
                                                                    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
                                                                    e_29 = t;
                                                                    h_24 :
                                                                    if(match_cons(e_29, sym__2))
                                                                      {
                                                                        f_29 = ATgetArgument(e_29, 0);
                                                                        g_29 = ATgetArgument(e_29, 1);
                                                                        {
                                                                          ATerm j_29 = NULL,k_29 = NULL,o_29 = NULL;
                                                                          ATerm u_13;
                                                                          u_13 = t;
                                                                          {
                                                                            ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_29), not_null(g_29));
                                                                            {
                                                                              t = Abox2text_0(t);
                                                                              {
                                                                                l_29 = t;
                                                                                f_24 :
                                                                                if(match_cons(l_29, sym__2))
                                                                                  {
                                                                                    m_29 = ATgetArgument(l_29, 0);
                                                                                    n_29 = ATgetArgument(l_29, 1);
                                                                                    {
                                                                                      if(((j_29 != NULL) && (j_29 != m_29)))
                                                                                        _fail(m_29);
                                                                                      else
                                                                                        j_29 = m_29;
                                                                                      if(((k_29 != NULL) && (k_29 != n_29)))
                                                                                        _fail(n_29);
                                                                                      else
                                                                                        k_29 = n_29;
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            }
                                                                          }
                                                                          t = u_13;
                                                                          {
                                                                            ATerm p_29 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(k_29));
                                                                            {
                                                                              t = add_0(t);
                                                                              {
                                                                                p_29 = t;
                                                                                if(((o_29 != NULL) && (o_29 != p_29)))
                                                                                  _fail(p_29);
                                                                                else
                                                                                  o_29 = p_29;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(o_29));
                                                                          }
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  t = thread_map_1(t, b_2);
                                                                  {
                                                                    q_29 = t;
                                                                    t_24 :
                                                                    if(match_cons(q_29, sym__2))
                                                                      {
                                                                        r_29 = ATgetArgument(q_29, 0);
                                                                        s_29 = ATgetArgument(q_29, 1);
                                                                        {
                                                                          ATerm v_29 = NULL;
                                                                          ATerm y_29 = NULL;
                                                                          t = not_null(r_29);
                                                                          {
                                                                            ATerm c_2 (ATerm t)
                                                                            {
                                                                              t = not_null(y_28);
                                                                              return(t);
                                                                            }
                                                                            t = separate_by_1(t, c_2);
                                                                            {
                                                                              y_29 = t;
                                                                              if(((v_29 != NULL) && (v_29 != y_29)))
                                                                                _fail(y_29);
                                                                              else
                                                                                v_29 = y_29;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_29), not_null(s_29));
                                                                            {
                                                                              ATerm d_2 (ATerm t)
                                                                              {
                                                                                ATerm e_2 (ATerm t)
                                                                                {
                                                                                  ATerm v_13 = t;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = Nil_0(t);
                                                                                      PopChoice();
                                                                                      _fail(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_13;
                                                                                    }
                                                                                  return(t);
                                                                                }
                                                                                ATerm f_2 (ATerm t)
                                                                                {
                                                                                  ATerm z_29 = NULL;
                                                                                  z_29 = t;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), not_null(a_29));
                                                                                    t = subt_0(t);
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = _2(t, e_2, f_2);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, d_2);
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
  ATerm g_2 (ATerm t)
  {
    t = term_a_6;
    return(t);
  }
  t = split_2(t, _id, g_2);
  t = Abox2text_p__0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_48 (ATerm), ATerm n_48 (ATerm))
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_cons(a_32, sym__2))
    {
      b_32 = ATgetArgument(a_32, 0);
      c_32 = ATgetArgument(a_32, 1);
      {
        ATerm g_32 = NULL,i_32 = NULL;
        ATerm h_32 = NULL;
        t = SSLgetAnnotations(not_null(a_32));
        {
          h_32 = t;
          if(((g_32 != NULL) && (g_32 != h_32)))
            _fail(h_32);
          else
            g_32 = h_32;
        }
        {
          t = not_null(b_32);
          {
            ATerm k_32 = NULL;
            t = m_48(t);
            {
              i_32 = t;
              {
                t = not_null(c_32);
                {
                  ATerm m_32 = NULL;
                  t = n_48(t);
                  {
                    k_32 = t;
                    {
                      ATerm n_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_32), not_null(k_32)), not_null(g_32));
                      {
                        n_32 = t;
                        if(((m_32 != NULL) && (m_32 != n_32)))
                          _fail(n_32);
                        else
                          m_32 = n_32;
                      }
                      t = not_null(m_32);
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
  ATerm x_32 = NULL;
  x_32 = t;
  t = SSL_ReadFromFile(not_null(x_32));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_66 (ATerm), ATerm w_66 (ATerm))
{
  ATerm c_33 = NULL,e_33 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm d_33 = NULL;
    t = v_66(t);
    {
      d_33 = t;
      if(((c_33 != NULL) && (c_33 != d_33)))
        _fail(d_33);
      else
        c_33 = d_33;
    }
  }
  t = w_13;
  {
    ATerm f_33 = NULL;
    t = w_66(t);
    {
      f_33 = t;
      if(((e_33 != NULL) && (e_33 != f_33)))
        _fail(f_33);
      else
        e_33 = f_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_33), not_null(e_33));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_33 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm y_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 (ATerm t)
        {
          ATerm m_33 = NULL,n_33 = NULL;
          m_33 = t;
          j_33 :
          if(match_cons(m_33, sym_Input_1))
            {
              n_33 = ATgetArgument(m_33, 0);
              if(((l_33 != NULL) && (l_33 != n_33)))
                _fail(n_33);
              else
                l_33 = n_33;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, h_2);
        LocalPopChoice(b_14);
      }
    else
      {
        t = y_13;
        {
          ATerm o_33 = NULL;
          t = term_g_14;
          {
            o_33 = t;
            if(((l_33 != NULL) && (l_33 != o_33)))
              _fail(o_33);
            else
              l_33 = o_33;
          }
        }
      }
  }
  t = x_13;
  {
    ATerm i_2 (ATerm t)
    {
      t = not_null(l_33);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_2);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm h_14;
  h_14 = t;
  {
    ATerm t_33 = NULL,v_33 = NULL;
    ATerm i_14;
    i_14 = t;
    {
      ATerm u_33 = NULL;
      t = k_64(t);
      {
        u_33 = t;
        if(((t_33 != NULL) && (t_33 != u_33)))
          _fail(u_33);
        else
          t_33 = u_33;
      }
    }
    t = i_14;
    {
      ATerm w_33 = NULL;
      w_33 = t;
      if(((v_33 != NULL) && (v_33 != w_33)))
        _fail(w_33);
      else
        v_33 = w_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), not_null(t_33)));
        t = printnl_0(t);
      }
    }
  }
  t = h_14;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm j_14;
  j_14 = t;
  {
    t = r_64(t);
    {
      ATerm j_2 (ATerm t)
      {
        t = term_k_14;
        return(t);
      }
      t = debug_1(t, j_2);
    }
  }
  t = j_14;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
      f_34 = t;
      a_34 :
      if(match_cons(f_34, sym__2))
        {
          g_34 = ATgetArgument(f_34, 0);
          h_34 = ATgetArgument(f_34, 1);
          {
            if(((e_34 != NULL) && (e_34 != g_34)))
              _fail(g_34);
            else
              e_34 = g_34;
            {
              if(((d_34 != NULL) && (d_34 != h_34)))
                _fail(h_34);
              else
                d_34 = h_34;
              t = SSL_open_file(not_null(e_34), not_null(d_34));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm i_34 = NULL;
        ATerm j_34 = NULL;
        ATerm k_2 (ATerm t)
        {
          t = term_q_14;
          return(t);
        }
        t = obsolete_1(t, k_2);
        {
          i_34 = t;
          {
            if(((e_34 != NULL) && (e_34 != i_34)))
              _fail(i_34);
            else
              e_34 = i_34;
            {
              ATerm r_14;
              r_14 = t;
              {
                ATerm k_34 = NULL;
                t = term_s_14;
                {
                  k_34 = t;
                  if(((j_34 != NULL) && (j_34 != k_34)))
                    _fail(k_34);
                  else
                    j_34 = k_34;
                }
              }
              t = r_14;
              t = SSL_open_file(not_null(e_34), not_null(j_34));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_74 (ATerm))
{
  ATerm o_34 (ATerm t)
  {
    ATerm t_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_74, _id);
        LocalPopChoice(w_14);
      }
    else
      {
        t = t_14;
        t = Cons_2(t, _id, o_34);
      }
    return(t);
  }
  t = o_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_61 (ATerm))
{
  t = fetch_1(t, r_61);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm r_34 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm s_34 = NULL,t_34 = NULL;
      s_34 = t;
      q_34 :
      if(match_cons(s_34, sym_Program_1))
        {
          t_34 = ATgetArgument(s_34, 0);
          if(((r_34 != NULL) && (r_34 != t_34)))
            _fail(t_34);
          else
            r_34 = t_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, l_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_15), not_null(r_34)), term_c_15));
      {
        t = printnl_0(t);
        {
          t = term_a_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_15;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym_Version_0))
    {
      ATerm b_35 = NULL,d_35 = NULL;
      ATerm e_15;
      e_15 = t;
      {
        ATerm c_35 = NULL;
        t = SSLgetAnnotations(not_null(z_34));
        {
          c_35 = t;
          if(((b_35 != NULL) && (b_35 != c_35)))
            _fail(c_35);
          else
            b_35 = c_35;
        }
      }
      t = e_15;
      {
        ATerm e_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_35));
        {
          e_35 = t;
          if(((d_35 != NULL) && (d_35 != e_35)))
            _fail(e_35);
          else
            d_35 = e_35;
        }
        t = not_null(d_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_63 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
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
  t = s_63(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  t = SSL_string_to_int(not_null(j_35));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  r_35 = t;
  p_35 :
  if(match_string(r_35, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(r_35) == AT_LIST) && ((ATermList) r_35 != ATempty)))
        {
          s_35 = ATgetFirst((ATermList) r_35);
          t_35 = (ATerm) ATgetNext((ATermList) r_35);
          q_35 :
          if(((ATgetType(t_35) == AT_LIST) && ((ATermList) t_35 != ATempty)))
            {
              u_35 = ATgetFirst((ATermList) t_35);
              v_35 = (ATerm) ATgetNext((ATermList) t_35);
              {
                ATerm z_35 = NULL;
                ATerm n_15;
                n_15 = t;
                {
                  t = not_null(s_35);
                  t = j_0(t);
                }
                t = n_15;
                {
                  ATerm a_36 = NULL;
                  t = not_null(u_35);
                  {
                    t = k_0(t);
                    {
                      a_36 = t;
                      if(((z_35 != NULL) && (z_35 != a_36)))
                        _fail(a_36);
                      else
                        z_35 = a_36;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_35)), not_null(z_35));
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
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm t_36 = NULL;
        t_36 = t;
        e_36 :
        if(!(match_string(t_36, "-i")))
          {
            if(!(match_string(t_36, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        ATerm w_36 = NULL;
        ATerm t_15;
        t_15 = t;
        {
          ATerm u_36 = NULL;
          ATerm v_36 = NULL;
          v_36 = t;
          if(((u_36 != NULL) && (u_36 != v_36)))
            _fail(v_36);
          else
            u_36 = v_36;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(u_36));
            t = set_config_0(t);
          }
        }
        t = t_15;
        {
          ATerm x_36 = NULL;
          x_36 = t;
          if(((w_36 != NULL) && (w_36 != x_36)))
            _fail(x_36);
          else
            w_36 = x_36;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_36));
        }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_y_15;
        return(t);
      }
      t = ArgOption_3(t, n_2, o_2, p_2);
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm y_36 = NULL;
              y_36 = t;
              h_36 :
              if(!(match_string(y_36, "-o")))
                {
                  if(!(match_string(y_36, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              ATerm b_37 = NULL;
              ATerm b_16;
              b_16 = t;
              {
                ATerm z_36 = NULL;
                ATerm a_37 = NULL;
                a_37 = t;
                if(((z_36 != NULL) && (z_36 != a_37)))
                  _fail(a_37);
                else
                  z_36 = a_37;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_16, not_null(z_36));
                  t = set_config_0(t);
                }
              }
              t = b_16;
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
            ATerm s_2 (ATerm t)
            {
              t = term_d_16;
              return(t);
            }
            t = ArgOption_3(t, q_2, r_2, s_2);
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm d_37 = NULL;
                    d_37 = t;
                    k_36 :
                    if(!(match_string(d_37, "-S")))
                      {
                        if(!(match_string(d_37, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_2 (ATerm t)
                  {
                    t = term_j_16;
                    t = set_config_0(t);
                    t = term_m_16;
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    t = term_n_16;
                    return(t);
                  }
                  t = Option_3(t, t_2, u_2, v_2);
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  {
                    ATerm o_16 = t;
                    int p_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_2 (ATerm t)
                        {
                          ATerm e_37 = NULL;
                          e_37 = t;
                          n_36 :
                          if(!(match_string(e_37, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm z_2 (ATerm t)
                        {
                          ATerm h_37 = NULL;
                          ATerm u_16;
                          u_16 = t;
                          {
                            ATerm f_37 = NULL;
                            ATerm g_37 = NULL;
                            t = string_to_int_0(t);
                            {
                              g_37 = t;
                              if(((f_37 != NULL) && (f_37 != g_37)))
                                _fail(g_37);
                              else
                                f_37 = g_37;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_d_6, not_null(f_37));
                              t = set_config_0(t);
                            }
                          }
                          t = u_16;
                          {
                            ATerm i_37 = NULL;
                            i_37 = t;
                            if(((h_37 != NULL) && (h_37 != i_37)))
                              _fail(i_37);
                            else
                              h_37 = i_37;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_37));
                          }
                          return(t);
                        }
                        ATerm a_3 (ATerm t)
                        {
                          t = term_v_16;
                          return(t);
                        }
                        t = ArgOption_3(t, w_2, z_2, a_3);
                        LocalPopChoice(p_16);
                      }
                    else
                      {
                        t = o_16;
                        {
                          ATerm w_16 = t;
                          int x_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_3 (ATerm t)
                              {
                                ATerm j_37 = NULL;
                                j_37 = t;
                                q_36 :
                                if(!(match_string(j_37, "-v")))
                                  {
                                    if(!(match_string(j_37, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm c_3 (ATerm t)
                              {
                                t = term_e_17;
                                t = set_config_0(t);
                                t = term_f_17;
                                return(t);
                              }
                              ATerm d_3 (ATerm t)
                              {
                                t = term_h_17;
                                return(t);
                              }
                              t = Option_3(t, b_3, c_3, d_3);
                              LocalPopChoice(x_16);
                            }
                          else
                            {
                              t = w_16;
                              {
                                ATerm i_17 = t;
                                int j_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_3 (ATerm t)
                                    {
                                      ATerm k_37 = NULL;
                                      k_37 = t;
                                      r_36 :
                                      if(!(match_string(k_37, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_3 (ATerm t)
                                    {
                                      t = term_l_17;
                                      t = set_config_0(t);
                                      t = term_o_17;
                                      return(t);
                                    }
                                    ATerm g_3 (ATerm t)
                                    {
                                      t = term_p_17;
                                      return(t);
                                    }
                                    t = Option_3(t, e_3, f_3, g_3);
                                    LocalPopChoice(j_17);
                                  }
                                else
                                  {
                                    t = i_17;
                                    {
                                      ATerm h_3 (ATerm t)
                                      {
                                        ATerm l_37 = NULL;
                                        l_37 = t;
                                        s_36 :
                                        if(!(match_string(l_37, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm i_3 (ATerm t)
                                      {
                                        t = term_a_18;
                                        t = set_config_0(t);
                                        t = term_b_18;
                                        return(t);
                                      }
                                      ATerm l_3 (ATerm t)
                                      {
                                        t = term_c_18;
                                        return(t);
                                      }
                                      t = Option_3(t, h_3, i_3, l_3);
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
  ATerm e_38 = NULL;
  e_38 = t;
  t = SSL_table_destroy(not_null(e_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  t = SSL_exit(not_null(i_38));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm n_38 = NULL;
  n_38 = t;
  t = SSL_implode_string(not_null(n_38));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm q_38 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_38);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          t = Nil_0(t);
          t = h_74(t);
        }
      }
    return(t);
  }
  t = q_38(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
        ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
        t_38 = t;
        s_38 :
        if(((ATgetType(t_38) == AT_LIST) && ((ATermList) t_38 != ATempty)))
          {
            u_38 = ATgetFirst((ATermList) t_38);
            v_38 = (ATerm) ATgetNext((ATermList) t_38);
            {
              t = not_null(u_38);
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(v_38);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_3);
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
  ATerm b_39 = NULL;
  b_39 = t;
  t = SSL_explode_string(not_null(b_39));
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
ATerm long_description_1 (ATerm t, ATerm t_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm e_39 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = Cons_2(t, t_73, e_39);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
  o_39 = t;
  l_39 :
  if(((ATgetType(o_39) == AT_LIST) && ((ATermList) o_39 != ATempty)))
    {
      m_39 = ATgetFirst((ATermList) o_39);
      n_39 = (ATerm) ATgetNext((ATermList) o_39);
      {
        ATerm r_39 = NULL;
        t = not_null(n_39);
        {
          ATerm j_18;
          j_18 = t;
          {
            ATerm s_39 = NULL,u_39 = NULL,w_39 = NULL;
            ATerm k_18;
            k_18 = t;
            {
              ATerm t_39 = NULL;
              t = i_0(t);
              {
                t_39 = t;
                if(((s_39 != NULL) && (s_39 != t_39)))
                  _fail(t_39);
                else
                  s_39 = t_39;
              }
            }
            t = k_18;
            {
              ATerm v_39 = NULL;
              t = not_null(m_39);
              {
                t = h_0(t);
                {
                  v_39 = t;
                  if(((u_39 != NULL) && (u_39 != v_39)))
                    _fail(v_39);
                  else
                    u_39 = v_39;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_39)), not_null(u_39));
                {
                  w_39 = t;
                  if(((r_39 != NULL) && (r_39 != w_39)))
                    _fail(w_39);
                  else
                    r_39 = w_39;
                }
              }
            }
          }
          t = j_18;
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(r_39);
              return(t);
            }
            t = reverse_acc_2(t, h_0, n_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_39 == ATempty))
        {
          {
            t = term_x_6;
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
  ATerm o_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_50 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_Program_1))
    {
      i_40 = ATgetArgument(h_40, 0);
      {
        ATerm l_40 = NULL,n_40 = NULL;
        ATerm m_40 = NULL;
        t = SSLgetAnnotations(not_null(h_40));
        {
          m_40 = t;
          if(((l_40 != NULL) && (l_40 != m_40)))
            _fail(m_40);
          else
            l_40 = m_40;
        }
        {
          t = not_null(i_40);
          {
            ATerm p_40 = NULL;
            t = a_50(t);
            {
              n_40 = t;
              {
                ATerm q_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_40)), not_null(l_40));
                {
                  q_40 = t;
                  if(((p_40 != NULL) && (p_40 != q_40)))
                    _fail(q_40);
                  else
                    p_40 = q_40;
                }
                t = not_null(p_40);
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
  ATerm z_40 = NULL;
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      ATerm a_41 = NULL;
      a_41 = t;
      if(((z_40 != NULL) && (z_40 != a_41)))
        _fail(a_41);
      else
        z_40 = a_41;
      return(t);
    }
    t = Program_1(t, q_3);
    return(t);
  }
  t = option_defined_1(t, p_3);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm b_41 = NULL;
      ATerm c_41 = NULL;
      t = term_x_6;
      {
        ATerm s_3 (ATerm t)
        {
          t = not_null(z_40);
          return(t);
        }
        t = short_description_1(t, s_3);
        {
          t = concat_strings_0(t);
          {
            c_41 = t;
            if(((b_41 != NULL) && (b_41 != c_41)))
              _fail(c_41);
            else
              b_41 = c_41;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATempty, not_null(b_41)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, r_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATempty, term_l_18));
      {
        t = printnl_0(t);
        {
          t = term_t_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm d_41 = NULL;
                  d_41 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_41)), term_u_18));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_3);
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm f_41 = NULL;
                    ATerm g_41 = NULL;
                    t = term_x_6;
                    {
                      ATerm w_3 (ATerm t)
                      {
                        t = not_null(z_40);
                        return(t);
                      }
                      t = long_description_1(t, w_3);
                      {
                        t = concat_strings_0(t);
                        {
                          g_41 = t;
                          if(((f_41 != NULL) && (f_41 != g_41)))
                            _fail(g_41);
                          else
                            f_41 = g_41;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_41)), term_v_18));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_3);
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
ATerm printnl_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym__2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      {
        ATerm w_18;
        w_18 = t;
        t = SSL_printnl(not_null(o_41), not_null(p_41));
        t = w_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_50 (ATerm))
{
  ATerm y_41 = NULL,z_41 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym_Undefined_1))
    {
      z_41 = ATgetArgument(y_41, 0);
      {
        ATerm c_42 = NULL,e_42 = NULL;
        ATerm d_42 = NULL;
        t = SSLgetAnnotations(not_null(y_41));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
        {
          t = not_null(z_41);
          {
            ATerm g_42 = NULL;
            t = b_50(t);
            {
              e_42 = t;
              {
                ATerm h_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_42)), not_null(c_42));
                {
                  h_42 = t;
                  if(((g_42 != NULL) && (g_42 != h_42)))
                    _fail(h_42);
                  else
                    g_42 = h_42;
                }
                t = not_null(g_42);
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
  ATerm q_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_Help_0))
    {
      ATerm s_42 = NULL,u_42 = NULL;
      ATerm x_18;
      x_18 = t;
      {
        ATerm t_42 = NULL;
        t = SSLgetAnnotations(not_null(q_42));
        {
          t_42 = t;
          if(((s_42 != NULL) && (s_42 != t_42)))
            _fail(t_42);
          else
            s_42 = t_42;
        }
      }
      t = x_18;
      {
        ATerm v_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_42));
        {
          v_42 = t;
          if(((u_42 != NULL) && (u_42 != v_42)))
            _fail(v_42);
          else
            u_42 = v_42;
        }
        t = not_null(u_42);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  a_43 :
  if(match_cons(b_43, sym__2))
    {
      c_43 = ATgetArgument(b_43, 0);
      d_43 = ATgetArgument(b_43, 1);
      t = SSL_table_get(not_null(c_43), not_null(d_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  k_43 = t;
  j_43 :
  if(match_cons(k_43, sym__3))
    {
      l_43 = ATgetArgument(k_43, 0);
      m_43 = ATgetArgument(k_43, 1);
      n_43 = ATgetArgument(k_43, 2);
      {
        ATerm a_19;
        a_19 = t;
        {
          ATerm u_43 = NULL;
          ATerm v_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_43), not_null(m_43));
          {
            ATerm f_19 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_19);
              }
            else
              {
                t = f_19;
                t = (ATerm) ATempty;
              }
            {
              v_43 = t;
              if(((u_43 != NULL) && (u_43 != v_43)))
                _fail(v_43);
              else
                u_43 = v_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_43), not_null(m_43), (ATerm) ATinsert(CheckATermList(not_null(u_43)), not_null(n_43)));
            t = table_put_0(t);
          }
        }
        t = a_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm z_43 = NULL;
  ATerm a_44 = NULL;
  t = term_x_6;
  {
    t = x_60(t);
    {
      a_44 = t;
      if(((z_43 != NULL) && (z_43 != a_44)))
        _fail(a_44);
      else
        z_43 = a_44;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_18, term_r_18, not_null(z_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  i_44 :
  if(match_string(p_44, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(p_44) == AT_LIST) && ((ATermList) p_44 != ATempty)))
        {
          q_44 = ATgetFirst((ATermList) p_44);
          r_44 = (ATerm) ATgetNext((ATermList) p_44);
          {
            ATerm u_44 = NULL;
            ATerm h_19;
            h_19 = t;
            {
              t = not_null(q_44);
              t = c_0(t);
            }
            t = h_19;
            {
              ATerm v_44 = NULL;
              t = term_x_6;
              {
                t = d_0(t);
                {
                  v_44 = t;
                  if(((u_44 != NULL) && (u_44 != v_44)))
                    _fail(v_44);
                  else
                    u_44 = v_44;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_44)), not_null(u_44));
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
    ATerm a_45 = NULL;
    a_45 = t;
    z_44 :
    if(!(match_string(a_45, "--help")))
      {
        if(!(match_string(a_45, "-h")))
          {
            if(!(match_string(a_45, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_i_19;
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_j_19;
    return(t);
  }
  t = Option_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(((ATgetType(d_45) == AT_LIST) && ((ATermList) d_45 != ATempty)))
    {
      e_45 = ATgetFirst((ATermList) d_45);
      f_45 = (ATerm) ATgetNext((ATermList) d_45);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_45)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_45)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  p_45 = t;
  o_45 :
  if(((ATgetType(p_45) == AT_LIST) && ((ATermList) p_45 != ATempty)))
    {
      q_45 = ATgetFirst((ATermList) p_45);
      r_45 = (ATerm) ATgetNext((ATermList) p_45);
      {
        ATerm q_48 = NULL,s_48 = NULL;
        ATerm r_48 = NULL;
        t = SSLgetAnnotations(not_null(p_45));
        {
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
        }
        {
          t = not_null(q_45);
          {
            ATerm u_48 = NULL;
            t = s_56(t);
            {
              s_48 = t;
              {
                t = not_null(r_45);
                {
                  ATerm w_48 = NULL;
                  t = t_56(t);
                  {
                    u_48 = t;
                    {
                      ATerm x_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_48)), not_null(s_48)), not_null(q_48));
                      {
                        x_48 = t;
                        if(((w_48 != NULL) && (w_48 != x_48)))
                          _fail(x_48);
                        else
                          w_48 = x_48;
                      }
                      t = not_null(w_48);
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
  ATerm h_49 = NULL;
  h_49 = t;
  g_49 :
  if(((ATermList) h_49 == ATempty))
    {
      {
        ATerm j_49 = NULL,l_49 = NULL;
        ATerm k_19;
        k_19 = t;
        {
          ATerm k_49 = NULL;
          t = SSLgetAnnotations(not_null(h_49));
          {
            k_49 = t;
            if(((j_49 != NULL) && (j_49 != k_49)))
              _fail(k_49);
            else
              j_49 = k_49;
          }
        }
        t = k_19;
        {
          ATerm m_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_49));
          {
            m_49 = t;
            if(((l_49 != NULL) && (l_49 != m_49)))
              _fail(m_49);
            else
              l_49 = m_49;
          }
          t = not_null(l_49);
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
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym__2))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_5, not_null(t_49), not_null(u_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm l_19;
  l_19 = t;
  {
    ATerm d_4 (ATerm t)
    {
      t = term_m_19;
      t = v_60(t);
      return(t);
    }
    t = try_1(t, d_4);
  }
  t = l_19;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm e_50 = NULL;
      ATerm n_19;
      n_19 = t;
      {
        ATerm c_50 = NULL;
        ATerm d_50 = NULL;
        d_50 = t;
        if(((c_50 != NULL) && (c_50 != d_50)))
          _fail(d_50);
        else
          c_50 = d_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(c_50));
          t = set_config_0(t);
        }
      }
      t = n_19;
      {
        ATerm f_50 = NULL;
        f_50 = t;
        if(((e_50 != NULL) && (e_50 != f_50)))
          _fail(f_50);
        else
          e_50 = f_50;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_50));
      }
      return(t);
    }
    ATerm f_4 (ATerm t)
    {
      ATerm o_19 = t;
      int p_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_19);
            }
          else
            {
              t = q_19;
              {
                t = v_60(t);
                t = Cons_2(t, _id, f_4);
              }
            }
          LocalPopChoice(p_19);
        }
      else
        {
          t = o_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_4, f_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  ATerm h_20;
  h_20 = t;
  {
    ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
    o_50 = t;
    k_50 :
    if(match_cons(o_50, sym__3))
      {
        p_50 = ATgetArgument(o_50, 0);
        q_50 = ATgetArgument(o_50, 1);
        r_50 = ATgetArgument(o_50, 2);
        {
          if(((l_50 != NULL) && (l_50 != p_50)))
            _fail(p_50);
          else
            l_50 = p_50;
          {
            if(((m_50 != NULL) && (m_50 != q_50)))
              _fail(q_50);
            else
              m_50 = q_50;
            {
              if(((n_50 != NULL) && (n_50 != r_50)))
                _fail(r_50);
              else
                n_50 = r_50;
              t = SSL_table_put(not_null(l_50), not_null(m_50), not_null(n_50));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm u_50 = NULL;
  ATerm i_20;
  i_20 = t;
  {
    t = term_j_20;
    t = table_put_0(t);
  }
  t = i_20;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm k_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_60(t);
          LocalPopChoice(l_20);
        }
      else
        {
          t = k_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_4);
    {
      ATerm l_4 (ATerm t)
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_a_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            {
              ATerm m_4 (ATerm t)
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm v_50 = NULL;
                  v_50 = t;
                  if(((u_50 != NULL) && (u_50 != v_50)))
                    _fail(v_50);
                  else
                    u_50 = v_50;
                  return(t);
                }
                t = Undefined_1(t, p_4);
                return(t);
              }
              t = option_defined_1(t, m_4);
              {
                ATerm o_20;
                o_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_50)), term_p_20));
                  t = printnl_0(t);
                }
                t = o_20;
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_5;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_4);
      {
        ATerm q_20;
        q_20 = t;
        {
          t = term_q_18;
          t = table_destroy_0(t);
        }
        t = q_20;
      }
    }
  }
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm d_51 = NULL;
  ATerm f_51 = NULL,g_51 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    d_51 = t;
    {
      ATerm r_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(s_20);
        }
      else
        {
          t = r_20;
          {
            ATerm t_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_20;
                v_20 = t;
                {
                  ATerm w_20 = t;
                  int x_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_4 (ATerm t)
                      {
                        ATerm h_51 = NULL,i_51 = NULL;
                        h_51 = t;
                        z_50 :
                        if(match_cons(h_51, sym_Output_1))
                          {
                            i_51 = ATgetArgument(h_51, 0);
                            if(((g_51 != NULL) && (g_51 != i_51)))
                              _fail(i_51);
                            else
                              g_51 = i_51;
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = option_defined_1(t, q_4);
                      {
                        t = not_null(g_51);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(x_20);
                    }
                  else
                    {
                      t = w_20;
                      {
                        ATerm j_51 = NULL;
                        t = term_y_20;
                        {
                          j_51 = t;
                          if(((g_51 != NULL) && (g_51 != j_51)))
                            _fail(j_51);
                          else
                            g_51 = j_51;
                        }
                      }
                    }
                }
                t = v_20;
                {
                  t = input_file_0(t);
                  {
                    ATerm r_4 (ATerm t)
                    {
                      ATerm k_51 = NULL;
                      t = abox2text_0(t);
                      {
                        k_51 = t;
                        if(((f_51 != NULL) && (f_51 != k_51)))
                          _fail(k_51);
                        else
                          f_51 = k_51;
                      }
                      return(t);
                    }
                    t = _2(t, _id, r_4);
                    {
                      t = not_null(f_51);
                      {
                        ATerm s_4 (ATerm t)
                        {
                          ATerm t_4 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm b_21;
                              b_21 = t;
                              {
                                ATerm l_51 = NULL;
                                ATerm m_51 = NULL;
                                m_51 = t;
                                if(((l_51 != NULL) && (l_51 != m_51)))
                                  _fail(m_51);
                                else
                                  l_51 = m_51;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), (ATerm) ATinsert(ATempty, not_null(l_51)));
                                  t = print_0(t);
                                }
                              }
                              t = b_21;
                            }
                            return(t);
                          }
                          t = try_1(t, t_4);
                          return(t);
                        }
                        t = topdown_1(t, s_4);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), (ATerm) ATinsert(ATempty, term_c_21));
                          {
                            t = print_0(t);
                            t = report_success_0(t);
                          }
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(u_20);
              }
            else
              {
                t = t_20;
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

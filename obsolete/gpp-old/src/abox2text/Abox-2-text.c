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
ATerm term_j_22;
ATerm term_n_21;
ATerm term_d_21;
ATerm term_v_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_q_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_o_17;
ATerm term_f_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_s_12;
ATerm term_a_10;
ATerm term_y_8;
ATerm term_s_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_w_6;
ATerm term_u_6;
ATerm term_v_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_n_5;
ATerm term_f_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_v_4;
void init_constant_terms (void)
{
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("*** error: invalid box: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: HV box not supported", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_e_7);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__2, term_n_5, term_f_5);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_5);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_w_16, term_e_7);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_e_7);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_e_7);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__3, term_a_19, term_b_19, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm crush_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_81 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_60 (ATerm));
ATerm topdown_1 (ATerm, ATerm p_61 (ATerm));
ATerm subt_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_81 (ATerm));
ATerm dissuader_1 (ATerm, ATerm y_78 (ATerm));
ATerm separate_by_1 (ATerm, ATerm o_67 (ATerm));
ATerm add_0 (ATerm);
ATerm Abox2text_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm w_74 (ATerm));
ATerm H_2 (ATerm, ATerm a_53 (ATerm), ATerm b_53 (ATerm));
ATerm filter_1 (ATerm, ATerm j_75 (ATerm));
ATerm foldr_3 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm s_68 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm g_61 (ATerm), ATerm h_61 (ATerm));
ATerm for_3 (ATerm, ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm w_52 (ATerm), ATerm x_52 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm l_68 (ATerm));
ATerm split_at_1 (ATerm, ATerm m_0 (ATerm));
ATerm string_length_p__1 (ATerm, ATerm y_59 (ATerm));
ATerm map_to_r_box_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm Abox2text_p__0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm _2 (ATerm, ATerm l_51 (ATerm), ATerm m_51 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_75 (ATerm), ATerm w_75 (ATerm));
ATerm input_file_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm x_78 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm b_68 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_82 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_79 (ATerm));
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
ATerm long_description_1 (ATerm, ATerm q_83 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_83 (ATerm));
ATerm Program_1 (ATerm, ATerm m_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_78 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_68 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_78 (ATerm));
ATerm map_1 (ATerm, ATerm s_67 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_52 (ATerm), ATerm v_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_83 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_83 (ATerm));
ATerm Abox_2_text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATempty, term_a_5));
  {
    t = printnl_0(t);
    {
      t = term_b_5;
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
ATerm foldr_2 (ATerm t, ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_74(t);
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
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
                t = foldr_2(t, g_74, h_74);
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
                t = h_74(t);
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
ATerm crush_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
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
      t = foldr_2(t, e_73, f_73);
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
      t = term_f_5;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_81 (ATerm))
{
  ATerm g_5 = t;
  int h_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5;
      m_5 = t;
      {
        ATerm k_4 = NULL;
        ATerm l_4 = NULL;
        t = term_n_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), term_b_5);
          t = geq_0(t);
        }
      }
      t = m_5;
      t = m_81(t);
      LocalPopChoice(h_5);
    }
  else
    {
      t = g_5;
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
    ATerm o_5;
    o_5 = t;
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
    t = o_5;
    {
      ATerm s_4 = NULL;
      t = term_p_5;
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
        t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_5), not_null(p_4)), term_q_5), not_null(r_4)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  {
    t = term_f_5;
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
        ATerm w_5;
        w_5 = t;
        t = SSL_print(not_null(y_4), not_null(z_4));
        t = w_5;
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
ATerm try_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_60(t);
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm p_61 (ATerm))
{
  t = p_61(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, p_61);
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
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(k_5), not_null(l_5));
            LocalPopChoice(c_6);
          }
        else
          {
            t = b_6;
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
          ATerm f_6 = t;
          int g_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_6);
            }
          else
            {
              t = f_6;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm h_6 = t;
                  int m_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(m_6);
                    }
                  else
                    {
                      t = h_6;
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
ATerm if_verbose2_1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_6;
      t_6 = t;
      {
        ATerm d_6 = NULL;
        ATerm e_6 = NULL;
        t = term_n_5;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), term_u_6);
          t = geq_0(t);
        }
      }
      t = t_6;
      t = n_81(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm v_6;
  v_6 = t;
  {
    ATerm n_0 (ATerm t)
    {
      t = y_78(t);
      {
        ATerm o_0 (ATerm t)
        {
          t = term_w_6;
          return(t);
        }
        t = debug_1(t, o_0);
      }
      return(t);
    }
    t = if_verbose2_1(t, n_0);
  }
  t = v_6;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm o_67 (ATerm))
{
  ATerm i_6 = NULL,k_6 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = term_c_7;
    return(t);
  }
  t = dissuader_1(t, p_0);
  {
    ATerm d_7;
    d_7 = t;
    {
      ATerm j_6 = NULL;
      j_6 = t;
      if(((i_6 != NULL) && (i_6 != j_6)))
        _fail(j_6);
      else
        i_6 = j_6;
    }
    t = d_7;
    {
      ATerm l_6 = NULL;
      t = term_e_7;
      {
        t = o_67(t);
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
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_6), not_null(s_6));
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
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
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2text_p__0(t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm r_0 (ATerm t)
        {
          t = term_s_7;
          return(t);
        }
        t = debug_1(t, r_0);
        {
          t = term_b_5;
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
ATerm thread_map_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm g_8 (ATerm t)
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, w_74, g_8);
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = g_8(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm a_53 (ATerm), ATerm b_53 (ATerm))
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
            t = a_53(t);
            {
              v_8 = t;
              {
                t = not_null(p_8);
                {
                  ATerm z_8 = NULL;
                  t = b_53(t);
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
ATerm filter_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm f_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_8);
    }
  else
    {
      t = f_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, j_75);
              return(t);
            }
            t = Cons_2(t, j_75, s_0);
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
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
                    t = filter_1(t, j_75);
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
ATerm foldr_3 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm))
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_74(t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
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
              ATerm q_8;
              q_8 = t;
              {
                ATerm x_9 = NULL;
                t = not_null(s_9);
                {
                  t = k_74(t);
                  {
                    x_9 = t;
                    if(((w_9 != NULL) && (w_9 != x_9)))
                      _fail(x_9);
                    else
                      w_9 = x_9;
                  }
                }
              }
              t = q_8;
              {
                ATerm z_9 = NULL;
                t = not_null(t_9);
                {
                  t = foldr_3(t, i_74, j_74, k_74);
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
                  t = j_74(t);
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
    t = term_f_5;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    t = term_b_5;
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
      ATerm r_8;
      r_8 = t;
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
      t = r_8;
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
  ATerm s_8 = t;
  int w_8 = stack_ptr;
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
      LocalPopChoice(w_8);
    }
  else
    {
      t = s_8;
      t = term_b_5;
    }
  {
    u_10 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), term_y_8);
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
ATerm at_last_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm s_11 (ATerm t)
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = s_68(t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
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
  ATerm d_9 = t;
  int e_9 = stack_ptr;
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
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm g_61 (ATerm), ATerm h_61 (ATerm))
{
  ATerm a_12 (ATerm t)
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_61(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          t = h_61(t);
          t = a_12(t);
        }
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm l_61 (ATerm))
{
  t = j_61(t);
  t = while_not_2(t, k_61, l_61);
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
          ATerm l_9;
          l_9 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), term_b_5);
            t = geq_0(t);
          }
          t = l_9;
          {
            ATerm c_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), term_b_5);
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
      ATerm m_9;
      m_9 = t;
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
      t = m_9;
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
  ATerm n_9 = t;
  int o_9 = stack_ptr;
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
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      t = term_f_5;
    }
  {
    y_13 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_y_8);
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
      ATerm p_9;
      p_9 = t;
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
      t = p_9;
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
ATerm SOpt_2 (ATerm t, ATerm w_52 (ATerm), ATerm x_52 (ATerm))
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
            t = w_52(t);
            {
              d_15 = t;
              {
                t = not_null(x_14);
                {
                  ATerm h_15 = NULL;
                  t = x_52(t);
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
  ATerm u_9 = t;
  int v_9 = stack_ptr;
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
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      t = term_f_5;
    }
  {
    t_15 = t;
    {
      ATerm w_15 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), term_b_5);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), term_a_10);
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
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_68(t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = Cons_2(t, _id, q_16);
      }
    return(t);
  }
  t = q_16(t);
  return(t);
}
ATerm split_at_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm f_10 = t;
  int i_10 = stack_ptr;
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
      LocalPopChoice(i_10);
    }
  else
    {
      t = f_10;
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
                              ATerm n_10 = t;
                              int o_10 = stack_ptr;
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
                                  LocalPopChoice(o_10);
                                }
                              else
                                {
                                  t = n_10;
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
ATerm string_length_p__1 (ATerm t, ATerm y_59 (ATerm))
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
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        {
          t = last_0(t);
          t = string_length_0(t);
        }
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          t = last_0(t);
          {
            t = string_length_0(t);
            {
              t = split_2(t, _id, y_59);
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
  ATerm r_21 = NULL;
  r_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_21), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm y_23 (ATerm t)
      {
        ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
        ATerm a_24 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(z_21))));
          {
            ATerm r_10 = t;
            int v_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(v_10);
              }
            else
              {
                t = r_10;
                t = conc_more_lists_0(t);
              }
          }
          return(t);
        }
        ATerm b_24 (ATerm t)
        {
          ATerm v_22 = NULL;
          ATerm w_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(t_21), not_null(u_21))));
          {
            ATerm w_10 = t;
            int x_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(x_10);
              }
            else
              {
                t = w_10;
                t = conc_more_lists_0(t);
              }
            {
              w_22 = t;
              if(((v_22 != NULL) && (v_22 != w_22)))
                _fail(w_22);
              else
                v_22 = w_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_21), (ATerm)ATempty, not_null(v_22));
            t = y_23(t);
          }
          return(t);
        }
        ATerm c_24 (ATerm t)
        {
          ATerm i_23 = NULL;
          ATerm j_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(t_21), not_null(u_21))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(z_21))));
          {
            ATerm y_10 = t;
            int z_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(z_10);
              }
            else
              {
                t = y_10;
                t = conc_more_lists_0(t);
              }
            {
              j_23 = t;
              if(((i_23 != NULL) && (i_23 != j_23)))
                _fail(j_23);
              else
                i_23 = j_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_21), (ATerm)ATempty, not_null(i_23));
            t = y_23(t);
          }
          return(t);
        }
        ATerm d_24 (ATerm t)
        {
          ATerm t_23 = NULL;
          ATerm w_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_21), (ATerm) ATinsert(ATempty, not_null(x_21)));
          {
            ATerm a_11 = t;
            int f_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(f_11);
              }
            else
              {
                t = a_11;
                t = conc_more_lists_0(t);
              }
            {
              w_23 = t;
              if(((t_23 != NULL) && (t_23 != w_23)))
                _fail(w_23);
              else
                t_23 = w_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_21), not_null(t_23), not_null(a_22));
            t = y_23(t);
          }
          return(t);
        }
        v_21 = t;
        t_18 :
        if(match_cons(v_21, sym__3))
          {
            w_21 = ATgetArgument(v_21, 0);
            z_21 = ATgetArgument(v_21, 1);
            a_22 = ATgetArgument(v_21, 2);
            u_18 :
            if(((ATgetType(w_21) == AT_LIST) && ATisEmpty(w_21)))
              {
                v_18 :
                if(((ATgetType(z_21) == AT_LIST) && ATisEmpty(z_21)))
                  {
                    {
                      ATerm j_11 = t;
                      int p_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(a_22);
                          LocalPopChoice(p_11);
                        }
                      else
                        {
                          t = j_11;
                          t = a_24(t);
                        }
                    }
                  }
                else
                  {
                    t = a_24(t);
                  }
              }
            else
              {
                if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
                  {
                    x_21 = ATgetFirst((ATermList) w_21);
                    y_21 = (ATerm) ATgetNext((ATermList) w_21);
                    w_18 :
                    if(((ATgetType(z_21) == AT_LIST) && ATisEmpty(z_21)))
                      {
                        e_20 :
                        if(match_cons(x_21, sym_R_2))
                          {
                            t_21 = ATgetArgument(x_21, 0);
                            u_21 = ATgetArgument(x_21, 1);
                            {
                              ATerm q_11 = t;
                              int r_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = b_24(t);
                                  LocalPopChoice(r_11);
                                }
                              else
                                {
                                  t = q_11;
                                  {
                                    ATerm t_11 = t;
                                    int z_11 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = c_24(t);
                                        LocalPopChoice(z_11);
                                      }
                                    else
                                      {
                                        t = t_11;
                                        t = d_24(t);
                                      }
                                  }
                                }
                            }
                          }
                        else
                          {
                            t = d_24(t);
                          }
                      }
                    else
                      {
                        q_21 :
                        if(match_cons(x_21, sym_R_2))
                          {
                            t_21 = ATgetArgument(x_21, 0);
                            u_21 = ATgetArgument(x_21, 1);
                            {
                              ATerm b_12 = t;
                              int d_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = c_24(t);
                                  LocalPopChoice(d_12);
                                }
                              else
                                {
                                  t = b_12;
                                  t = d_24(t);
                                }
                            }
                          }
                        else
                          {
                            t = d_24(t);
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
      t = y_23(t);
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym__2))
    {
      k_24 = ATgetArgument(j_24, 0);
      l_24 = ATgetArgument(j_24, 1);
      {
        ATerm g_12;
        g_12 = t;
        {
          ATerm h_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_24), not_null(l_24));
              LocalPopChoice(m_12);
            }
          else
            {
              t = h_12;
              t = SSL_gtr(not_null(k_24), not_null(l_24));
            }
        }
        t = g_12;
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
  ATerm n_12 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_12;
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
          t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(w_26));
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
                    ATerm t_12;
                    t_12 = t;
                    {
                      ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(w_26));
                      {
                        t = Abox2text_0(t);
                        {
                          g_27 = t;
                          c_25 :
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
                    t = t_12;
                    {
                      ATerm y_12 = t;
                      int z_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), term_a_13);
                          t = leq_0(t);
                          LocalPopChoice(z_12);
                          t = not_null(d_27);
                        }
                      else
                        {
                          t = y_12;
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
                                ATerm d_13 = t;
                                int e_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(u_26), not_null(v_26)), not_null(w_26));
                                    t = Abox2text_0(t);
                                    LocalPopChoice(e_13);
                                  }
                                else
                                  {
                                    t = d_13;
                                    {
                                      ATerm k_1 (ATerm t)
                                      {
                                        t = term_f_13;
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
                                                ATerm i_28 = NULL;
                                                t = not_null(u_26);
                                                {
                                                  ATerm k_28 = NULL;
                                                  t = Vspace_0(t);
                                                  {
                                                    i_28 = t;
                                                    {
                                                      t = not_null(u_26);
                                                      {
                                                        ATerm m_28 = NULL;
                                                        t = Ispace_0(t);
                                                        {
                                                          k_28 = t;
                                                          {
                                                            ATerm o_28 = NULL,q_28 = NULL;
                                                            t = string_length_0(t);
                                                            {
                                                              m_28 = t;
                                                              {
                                                                ATerm p_28 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), term_y_8);
                                                                {
                                                                  t = copy_char_0(t);
                                                                  {
                                                                    p_28 = t;
                                                                    if(((o_28 != NULL) && (o_28 != p_28)))
                                                                      _fail(p_28);
                                                                    else
                                                                      o_28 = p_28;
                                                                  }
                                                                }
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_28)), not_null(k_28)), not_null(i_28));
                                                                  {
                                                                    ATerm q_29 = NULL;
                                                                    t = concat_strings_0(t);
                                                                    {
                                                                      q_28 = t;
                                                                      {
                                                                        t = not_null(v_26);
                                                                        {
                                                                          ATerm m_1 (ATerm t)
                                                                          {
                                                                            ATerm g_13 = t;
                                                                            if((PushChoice() == 0))
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
                                                                                    {
                                                                                      ATerm s_28 = NULL;
                                                                                      ATerm u_28 = NULL,v_28 = NULL,b_29 = NULL,g_29 = NULL;
                                                                                      s_28 = t;
                                                                                      {
                                                                                        ATerm j_13;
                                                                                        j_13 = t;
                                                                                        {
                                                                                          ATerm w_28 = NULL;
                                                                                          ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
                                                                                          t = not_null(s_28);
                                                                                          {
                                                                                            w_28 = t;
                                                                                            {
                                                                                              t = SSL_explode_term(not_null(w_28));
                                                                                              {
                                                                                                y_28 = t;
                                                                                                o_25 :
                                                                                                if(match_cons(y_28, sym__2))
                                                                                                  {
                                                                                                    z_28 = ATgetArgument(y_28, 0);
                                                                                                    a_29 = ATgetArgument(y_28, 1);
                                                                                                    {
                                                                                                      if(((u_28 != NULL) && (u_28 != z_28)))
                                                                                                        _fail(z_28);
                                                                                                      else
                                                                                                        u_28 = z_28;
                                                                                                      if(((v_28 != NULL) && (v_28 != a_29)))
                                                                                                        _fail(a_29);
                                                                                                      else
                                                                                                        v_28 = a_29;
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
                                                                                        t = j_13;
                                                                                        {
                                                                                          ATerm m_13;
                                                                                          m_13 = t;
                                                                                          {
                                                                                            ATerm h_29 = NULL;
                                                                                            ATerm i_29 = NULL;
                                                                                            t = not_null(u_28);
                                                                                            {
                                                                                              h_29 = t;
                                                                                              {
                                                                                                if(((b_29 != NULL) && (b_29 != h_29)))
                                                                                                  _fail(h_29);
                                                                                                else
                                                                                                  b_29 = h_29;
                                                                                                {
                                                                                                  t = not_null(v_28);
                                                                                                  {
                                                                                                    ATerm n_1 (ATerm t)
                                                                                                    {
                                                                                                      ATerm o_1 (ATerm t)
                                                                                                      {
                                                                                                        ATerm r_13 = t;
                                                                                                        int s_13 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Nil_0(t);
                                                                                                            LocalPopChoice(s_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_13;
                                                                                                            t = Cons_2(t, Nil_0, Nil_0);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Cons_2(t, o_1, Nil_0);
                                                                                                      return(t);
                                                                                                    }
                                                                                                    t = Cons_2(t, _id, n_1);
                                                                                                    {
                                                                                                      i_29 = t;
                                                                                                      if(((g_29 != NULL) && (g_29 != i_29)))
                                                                                                        _fail(i_29);
                                                                                                      else
                                                                                                        g_29 = i_29;
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          t = m_13;
                                                                                          t = SSL_mkterm(not_null(b_29), not_null(g_29));
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
                                                                          t = filter_1(t, m_1);
                                                                          {
                                                                            ATerm t_13 = t;
                                                                            int u_13 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_26));
                                                                                LocalPopChoice(u_13);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = t_13;
                                                                                {
                                                                                  ATerm p_1 (ATerm t)
                                                                                  {
                                                                                    ATerm r_29 = NULL;
                                                                                    r_29 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(w_26));
                                                                                      t = Abox2text_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm q_1 (ATerm t)
                                                                                  {
                                                                                    ATerm r_1 (ATerm t)
                                                                                    {
                                                                                      ATerm t_29 = NULL;
                                                                                      ATerm v_29 = NULL;
                                                                                      t_29 = t;
                                                                                      {
                                                                                        ATerm w_29 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), not_null(m_28));
                                                                                        {
                                                                                          t = add_0(t);
                                                                                          {
                                                                                            w_29 = t;
                                                                                            if(((v_29 != NULL) && (v_29 != w_29)))
                                                                                              _fail(w_29);
                                                                                            else
                                                                                              v_29 = w_29;
                                                                                          }
                                                                                        }
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), not_null(v_29));
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
                                                                                        ATerm x_29 = NULL,y_29 = NULL,a_30 = NULL;
                                                                                        x_29 = t;
                                                                                        v_25 :
                                                                                        if(match_cons(x_29, sym__2))
                                                                                          {
                                                                                            y_29 = ATgetArgument(x_29, 0);
                                                                                            a_30 = ATgetArgument(x_29, 1);
                                                                                            if(((q_29 != NULL) && (q_29 != a_30)))
                                                                                              _fail(a_30);
                                                                                            else
                                                                                              q_29 = a_30;
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
                                                                                          t = not_null(q_28);
                                                                                          return(t);
                                                                                        }
                                                                                        t = separate_by_1(t, u_1);
                                                                                        {
                                                                                          ATerm v_1 (ATerm t)
                                                                                          {
                                                                                            t = not_null(q_29);
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
                                                    ATerm h_30 = NULL;
                                                    t = not_null(u_26);
                                                    {
                                                      ATerm j_30 = NULL;
                                                      t = Hspace_0(t);
                                                      {
                                                        h_30 = t;
                                                        {
                                                          ATerm l_30 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            j_30 = t;
                                                            {
                                                              ATerm m_30 = NULL;
                                                              t = not_null(v_26);
                                                              {
                                                                ATerm w_1 (ATerm t)
                                                                {
                                                                  ATerm v_13 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm z_13 = t;
                                                                      int a_14 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = Nil_0(t);
                                                                          LocalPopChoice(a_14);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_13;
                                                                          t = H_2(t, Nil_0, Nil_0);
                                                                        }
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = v_13;
                                                                    }
                                                                  return(t);
                                                                }
                                                                t = filter_1(t, w_1);
                                                                {
                                                                  m_30 = t;
                                                                  if(((l_30 != NULL) && (l_30 != m_30)))
                                                                    _fail(m_30);
                                                                  else
                                                                    l_30 = m_30;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(w_26));
                                                                {
                                                                  ATerm x_1 (ATerm t)
                                                                  {
                                                                    ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
                                                                    n_30 = t;
                                                                    d_26 :
                                                                    if(match_cons(n_30, sym__2))
                                                                      {
                                                                        o_30 = ATgetArgument(n_30, 0);
                                                                        p_30 = ATgetArgument(n_30, 1);
                                                                        {
                                                                          ATerm u_30 = NULL,v_30 = NULL,z_30 = NULL;
                                                                          ATerm b_14;
                                                                          b_14 = t;
                                                                          {
                                                                            ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), not_null(p_30));
                                                                            {
                                                                              t = Abox2text_0(t);
                                                                              {
                                                                                w_30 = t;
                                                                                b_26 :
                                                                                if(match_cons(w_30, sym__2))
                                                                                  {
                                                                                    x_30 = ATgetArgument(w_30, 0);
                                                                                    y_30 = ATgetArgument(w_30, 1);
                                                                                    {
                                                                                      if(((u_30 != NULL) && (u_30 != x_30)))
                                                                                        _fail(x_30);
                                                                                      else
                                                                                        u_30 = x_30;
                                                                                      if(((v_30 != NULL) && (v_30 != y_30)))
                                                                                        _fail(y_30);
                                                                                      else
                                                                                        v_30 = y_30;
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
                                                                            ATerm a_31 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_30), not_null(v_30));
                                                                            {
                                                                              t = add_0(t);
                                                                              {
                                                                                a_31 = t;
                                                                                if(((z_30 != NULL) && (z_30 != a_31)))
                                                                                  _fail(a_31);
                                                                                else
                                                                                  z_30 = a_31;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_30), not_null(z_30));
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
                                                                    b_31 = t;
                                                                    h_26 :
                                                                    if(match_cons(b_31, sym__2))
                                                                      {
                                                                        c_31 = ATgetArgument(b_31, 0);
                                                                        d_31 = ATgetArgument(b_31, 1);
                                                                        {
                                                                          ATerm g_31 = NULL;
                                                                          ATerm h_31 = NULL;
                                                                          t = not_null(c_31);
                                                                          {
                                                                            ATerm y_1 (ATerm t)
                                                                            {
                                                                              t = not_null(h_30);
                                                                              return(t);
                                                                            }
                                                                            t = separate_by_1(t, y_1);
                                                                            {
                                                                              h_31 = t;
                                                                              if(((g_31 != NULL) && (g_31 != h_31)))
                                                                                _fail(h_31);
                                                                              else
                                                                                g_31 = h_31;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), not_null(d_31));
                                                                            {
                                                                              ATerm c_14 = t;
                                                                              int d_14 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  ATerm z_1 (ATerm t)
                                                                                  {
                                                                                    ATerm e_14 = t;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = Nil_0(t);
                                                                                        PopChoice();
                                                                                        _fail(t);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = e_14;
                                                                                      }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm a_2 (ATerm t)
                                                                                  {
                                                                                    ATerm i_31 = NULL;
                                                                                    i_31 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), not_null(j_30));
                                                                                      t = subt_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  t = _2(t, z_1, a_2);
                                                                                  LocalPopChoice(d_14);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = c_14;
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
    t = term_f_5;
    return(t);
  }
  t = split_2(t, _id, b_2);
  t = Abox2text_p__0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm l_51 (ATerm), ATerm m_51 (ATerm))
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
            t = l_51(t);
            {
              l_33 = t;
              {
                t = not_null(f_33);
                {
                  ATerm p_33 = NULL;
                  t = m_51(t);
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
  x_33 = t;
  t = SSL_ReadFromFile(not_null(x_33));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_75 (ATerm), ATerm w_75 (ATerm))
{
  ATerm c_34 = NULL,e_34 = NULL;
  ATerm h_14;
  h_14 = t;
  {
    ATerm d_34 = NULL;
    t = v_75(t);
    {
      d_34 = t;
      if(((c_34 != NULL) && (c_34 != d_34)))
        _fail(d_34);
      else
        c_34 = d_34;
    }
  }
  t = h_14;
  {
    ATerm f_34 = NULL;
    t = w_75(t);
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
  ATerm m_14;
  m_14 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 (ATerm t)
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
        t = fetch_1(t, c_2);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm o_34 = NULL;
          t = term_p_14;
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
  t = m_14;
  {
    ATerm d_2 (ATerm t)
    {
      t = not_null(l_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_2);
  }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm q_14;
  q_14 = t;
  {
    t = x_78(t);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_r_14;
        return(t);
      }
      t = debug_1(t, e_2);
    }
  }
  t = q_14;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  ATerm s_14 = t;
  int t_14 = stack_ptr;
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
      LocalPopChoice(t_14);
      t = SSL_open_file(not_null(w_34), not_null(v_34));
    }
  else
    {
      t = s_14;
      {
        ATerm a_35 = NULL;
        ATerm b_35 = NULL;
        ATerm f_2 (ATerm t)
        {
          t = term_y_14;
          return(t);
        }
        t = obsolete_1(t, f_2);
        {
          a_35 = t;
          {
            if(((w_34 != NULL) && (w_34 != a_35)))
              _fail(a_35);
            else
              w_34 = a_35;
            {
              ATerm z_14;
              z_14 = t;
              {
                ATerm c_35 = NULL;
                t = term_a_15;
                {
                  c_35 = t;
                  if(((b_35 != NULL) && (b_35 != c_35)))
                    _fail(c_35);
                  else
                    b_35 = c_35;
                }
              }
              t = z_14;
              t = SSL_open_file(not_null(w_34), not_null(b_35));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm g_35 (ATerm t)
  {
    ATerm e_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_68, _id);
        LocalPopChoice(g_15);
      }
    else
      {
        t = e_15;
        t = Cons_2(t, _id, g_35);
      }
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_82 (ATerm))
{
  t = fetch_1(t, p_82);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm j_35 = NULL;
  ATerm j_15;
  j_15 = t;
  {
    ATerm g_2 (ATerm t)
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
    t = fetch_1(t, g_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_15), not_null(j_35)), term_k_15));
      {
        t = printnl_0(t);
        {
          t = term_f_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_15;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  q_35 :
  if(match_cons(u_35, sym_Version_0))
    {
      ATerm w_35 = NULL,y_35 = NULL;
      ATerm m_15;
      m_15 = t;
      {
        ATerm x_35 = NULL;
        t = SSLgetAnnotations(not_null(u_35));
        {
          x_35 = t;
          if(((w_35 != NULL) && (w_35 != x_35)))
            _fail(x_35);
          else
            w_35 = x_35;
        }
      }
      t = m_15;
      {
        ATerm z_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_35));
        {
          z_35 = t;
          if(((y_35 != NULL) && (y_35 != z_35)))
            _fail(z_35);
          else
            y_35 = z_35;
        }
        t = not_null(y_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_2);
  t = s_79(t);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm e_36 = NULL;
    e_36 = t;
    d_36 :
    if(!(match_string(e_36, "-v")))
      {
        if(!(match_string(e_36, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_x_15;
    t = set_config_0(t);
    t = term_y_15;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_z_15;
    return(t);
  }
  t = Option_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm h_36 = NULL;
    h_36 = t;
    f_36 :
    if(!(match_string(h_36, "-k")))
      {
        if(!(match_string(h_36, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm a_16;
    a_16 = t;
    {
      ATerm i_36 = NULL;
      ATerm j_36 = NULL;
      t = string_to_int_0(t);
      {
        j_36 = t;
        if(((i_36 != NULL) && (i_36 != j_36)))
          _fail(j_36);
        else
          i_36 = j_36;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_16, not_null(i_36));
        t = set_config_0(t);
      }
    }
    t = a_16;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_g_16;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  t = SSL_string_to_int(not_null(m_36));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm u_36 = NULL;
        u_36 = t;
        p_36 :
        if(!(match_string(u_36, "-S")))
          {
            if(!(match_string(u_36, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = term_o_16;
        t = set_config_0(t);
        t = term_p_16;
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_r_16;
        return(t);
      }
      t = Option_3(t, q_2, r_2, s_2);
      LocalPopChoice(n_16);
    }
  else
    {
      t = h_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm v_36 = NULL;
              v_36 = t;
              q_36 :
              if(!(match_string(v_36, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              ATerm y_36 = NULL;
              ATerm u_16;
              u_16 = t;
              {
                ATerm w_36 = NULL;
                ATerm x_36 = NULL;
                t = string_to_int_0(t);
                {
                  x_36 = t;
                  if(((w_36 != NULL) && (w_36 != x_36)))
                    _fail(x_36);
                  else
                    w_36 = x_36;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_5, not_null(w_36));
                  t = set_config_0(t);
                }
              }
              t = u_16;
              {
                ATerm z_36 = NULL;
                z_36 = t;
                if(((y_36 != NULL) && (y_36 != z_36)))
                  _fail(z_36);
                else
                  y_36 = z_36;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_36));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_v_16;
              return(t);
            }
            t = ArgOption_3(t, t_2, u_2, v_2);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm x_2 (ATerm t)
              {
                ATerm a_37 = NULL;
                a_37 = t;
                t_36 :
                if(!(match_string(a_37, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = term_x_16;
                t = set_config_0(t);
                t = term_f_17;
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_o_17;
                return(t);
              }
              t = Option_3(t, x_2, z_2, a_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm g_37 = NULL;
    g_37 = t;
    d_37 :
    if(!(match_string(g_37, "-o")))
      {
        if(!(match_string(g_37, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm j_37 = NULL;
    ATerm t_17;
    t_17 = t;
    {
      ATerm h_37 = NULL;
      ATerm i_37 = NULL;
      i_37 = t;
      if(((h_37 != NULL) && (h_37 != i_37)))
        _fail(i_37);
      else
        h_37 = i_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_17, not_null(h_37));
        t = set_config_0(t);
      }
    }
    t = t_17;
    {
      ATerm l_37 = NULL;
      l_37 = t;
      if(((j_37 != NULL) && (j_37 != l_37)))
        _fail(l_37);
      else
        j_37 = l_37;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_37));
    }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_v_17;
    return(t);
  }
  t = ArgOption_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm e_3 (ATerm t)
        {
          ATerm r_37 = NULL;
          r_37 = t;
          o_37 :
          if(!(match_string(r_37, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          t = term_z_17;
          t = set_config_0(t);
          t = term_a_18;
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_b_18;
          return(t);
        }
        t = Option_3(t, e_3, f_3, g_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  z_37 = t;
  x_37 :
  if(match_string(z_37, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
        {
          a_38 = ATgetFirst((ATermList) z_37);
          b_38 = (ATerm) ATgetNext((ATermList) z_37);
          y_37 :
          if(((ATgetType(b_38) == AT_LIST) && !(ATisEmpty(b_38))))
            {
              c_38 = ATgetFirst((ATermList) b_38);
              d_38 = (ATerm) ATgetNext((ATermList) b_38);
              {
                ATerm h_38 = NULL;
                ATerm c_18;
                c_18 = t;
                {
                  t = not_null(a_38);
                  t = j_0(t);
                }
                t = c_18;
                {
                  ATerm i_38 = NULL;
                  t = not_null(c_38);
                  {
                    t = k_0(t);
                    {
                      i_38 = t;
                      if(((h_38 != NULL) && (h_38 != i_38)))
                        _fail(i_38);
                      else
                        h_38 = i_38;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_38)), not_null(h_38));
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
  ATerm h_3 (ATerm t)
  {
    ATerm r_38 = NULL;
    r_38 = t;
    m_38 :
    if(!(match_string(r_38, "-i")))
      {
        if(!(match_string(r_38, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm u_38 = NULL;
    ATerm d_18;
    d_18 = t;
    {
      ATerm s_38 = NULL;
      ATerm t_38 = NULL;
      t_38 = t;
      if(((s_38 != NULL) && (s_38 != t_38)))
        _fail(t_38);
      else
        s_38 = t_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_18, not_null(s_38));
        t = set_config_0(t);
      }
    }
    t = d_18;
    {
      ATerm w_38 = NULL;
      w_38 = t;
      if(((u_38 != NULL) && (u_38 != w_38)))
        _fail(w_38);
      else
        u_38 = w_38;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_38));
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_g_18;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = h_18;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_39 = NULL;
  a_39 = t;
  t = SSL_table_destroy(not_null(a_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  t = SSL_exit(not_null(e_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(((ATgetType(i_39) == AT_LIST) && ATisEmpty(i_39)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
        {
          j_39 = ATgetFirst((ATermList) i_39);
          k_39 = (ATerm) ATgetNext((ATermList) i_39);
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
  ATerm n_18;
  n_18 = t;
  {
    ATerm n_39 = NULL;
    ATerm q_39 = NULL;
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        {
          ATerm o_39 = NULL;
          ATerm p_39 = NULL;
          p_39 = t;
          if(((o_39 != NULL) && (o_39 != p_39)))
            _fail(p_39);
          else
            o_39 = p_39;
          t = (ATerm) ATinsert(ATempty, not_null(o_39));
        }
      }
    {
      q_39 = t;
      if(((n_39 != NULL) && (n_39 != q_39)))
        _fail(q_39);
      else
        n_39 = q_39;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(n_39));
      t = printnl_0(t);
    }
  }
  t = n_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,i_40 = NULL;
  i_40 = t;
  e_40 :
  if(((ATgetType(i_40) == AT_LIST) && !(ATisEmpty(i_40))))
    {
      f_40 = ATgetFirst((ATermList) i_40);
      g_40 = (ATerm) ATgetNext((ATermList) i_40);
      {
        ATerm l_40 = NULL;
        t = not_null(g_40);
        {
          ATerm r_18;
          r_18 = t;
          {
            ATerm m_40 = NULL,p_40 = NULL,r_40 = NULL;
            ATerm s_18;
            s_18 = t;
            {
              ATerm o_40 = NULL;
              t = i_0(t);
              {
                o_40 = t;
                if(((m_40 != NULL) && (m_40 != o_40)))
                  _fail(o_40);
                else
                  m_40 = o_40;
              }
            }
            t = s_18;
            {
              ATerm q_40 = NULL;
              t = not_null(f_40);
              {
                t = h_0(t);
                {
                  q_40 = t;
                  if(((p_40 != NULL) && (p_40 != q_40)))
                    _fail(q_40);
                  else
                    p_40 = q_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_40)), not_null(p_40));
                {
                  r_40 = t;
                  if(((l_40 != NULL) && (l_40 != r_40)))
                    _fail(r_40);
                  else
                    l_40 = r_40;
                }
              }
            }
          }
          t = r_18;
          {
            ATerm k_3 (ATerm t)
            {
              t = not_null(l_40);
              return(t);
            }
            t = reverse_acc_2(t, h_0, k_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_40) == AT_LIST) && ATisEmpty(i_40)))
        {
          {
            t = term_e_7;
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
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm c_41 = NULL,d_41 = NULL;
  c_41 = t;
  b_41 :
  if(match_cons(c_41, sym_Program_1))
    {
      d_41 = ATgetArgument(c_41, 0);
      {
        ATerm g_41 = NULL,i_41 = NULL;
        ATerm h_41 = NULL;
        t = SSLgetAnnotations(not_null(c_41));
        {
          h_41 = t;
          if(((g_41 != NULL) && (g_41 != h_41)))
            _fail(h_41);
          else
            g_41 = h_41;
        }
        {
          t = not_null(d_41);
          {
            ATerm k_41 = NULL;
            t = m_59(t);
            {
              i_41 = t;
              {
                ATerm l_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_41)), not_null(g_41));
                {
                  l_41 = t;
                  if(((k_41 != NULL) && (k_41 != l_41)))
                    _fail(l_41);
                  else
                    k_41 = l_41;
                }
                t = not_null(k_41);
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
  ATerm t_41 = NULL;
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_41 = NULL;
      t = term_p_5;
      {
        t = get_config_0(t);
        {
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
        }
      }
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm n_3 (ATerm t)
          {
            ATerm v_41 = NULL;
            v_41 = t;
            if(((t_41 != NULL) && (t_41 != v_41)))
              _fail(v_41);
            else
              t_41 = v_41;
            return(t);
          }
          t = Program_1(t, n_3);
          return(t);
        }
        t = fetch_1(t, m_3);
      }
    }
  {
    t = term_z_18;
    {
      t = echo_0(t);
      {
        t = term_c_19;
        {
          t = table_get_0(t);
          {
            ATerm o_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, o_3);
            {
              ATerm r_3 (ATerm t)
              {
                ATerm w_41 = NULL;
                ATerm x_41 = NULL;
                x_41 = t;
                if(((w_41 != NULL) && (w_41 != x_41)))
                  _fail(x_41);
                else
                  w_41 = x_41;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_41)), term_d_19);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, r_3);
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
  ATerm e_19;
  e_19 = t;
  {
    ATerm c_42 = NULL;
    ATerm d_42 = NULL;
    d_42 = t;
    if(((c_42 != NULL) && (c_42 != d_42)))
      _fail(d_42);
    else
      c_42 = d_42;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATempty, not_null(c_42)));
      t = printnl_0(t);
    }
  }
  t = e_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm f_19;
  f_19 = t;
  {
    t = r_78(t);
    t = debug_0(t);
  }
  t = f_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm k_42 = NULL,l_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_cons(k_42, sym_Undefined_1))
    {
      l_42 = ATgetArgument(k_42, 0);
      {
        ATerm o_42 = NULL,q_42 = NULL;
        ATerm p_42 = NULL;
        t = SSLgetAnnotations(not_null(k_42));
        {
          p_42 = t;
          if(((o_42 != NULL) && (o_42 != p_42)))
            _fail(p_42);
          else
            o_42 = p_42;
        }
        {
          t = not_null(l_42);
          {
            ATerm s_42 = NULL;
            t = n_59(t);
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
      ATerm f_43 = NULL,h_43 = NULL;
      ATerm g_19;
      g_19 = t;
      {
        ATerm g_43 = NULL;
        t = SSLgetAnnotations(not_null(c_43));
        {
          g_43 = t;
          if(((f_43 != NULL) && (f_43 != g_43)))
            _fail(g_43);
          else
            f_43 = g_43;
        }
      }
      t = g_19;
      {
        ATerm i_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_43));
        {
          i_43 = t;
          if(((h_43 != NULL) && (h_43 != i_43)))
            _fail(i_43);
          else
            h_43 = i_43;
        }
        t = not_null(h_43);
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
  ATerm n_43 = NULL;
  n_43 = t;
  t = SSL_implode_string(not_null(n_43));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      {
        ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
        u_43 = t;
        t_43 :
        if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
          {
            v_43 = ATgetFirst((ATermList) u_43);
            w_43 = (ATerm) ATgetNext((ATermList) u_43);
            {
              t = not_null(v_43);
              {
                ATerm s_3 (ATerm t)
                {
                  t = not_null(w_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_3);
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
  ATerm u_44 = NULL;
  ATerm w_44 = NULL;
  u_44 = t;
  {
    ATerm x_44 = NULL;
    ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
    t = not_null(u_44);
    {
      x_44 = t;
      {
        t = SSL_explode_term(not_null(x_44));
        {
          z_44 = t;
          o_44 :
          if(match_cons(z_44, sym__2))
            {
              a_45 = ATgetArgument(z_44, 0);
              b_45 = ATgetArgument(z_44, 1);
              t_44 :
              if(match_string(a_45, ""))
                {
                  if(((w_44 != NULL) && (w_44 != b_45)))
                    _fail(b_45);
                  else
                    w_44 = b_45;
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
      t = not_null(w_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_68 (ATerm))
{
  ATerm f_45 (ATerm t)
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_45);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          t = Nil_0(t);
          t = h_68(t);
        }
      }
    return(t);
  }
  t = f_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
  i_45 = t;
  h_45 :
  if(match_cons(i_45, sym__2))
    {
      j_45 = ATgetArgument(i_45, 0);
      k_45 = ATgetArgument(i_45, 1);
      {
        t = not_null(j_45);
        {
          ATerm t_3 (ATerm t)
          {
            t = not_null(k_45);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  t = SSL_explode_string(not_null(q_45));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
  v_45 = t;
  u_45 :
  if(match_cons(v_45, sym__2))
    {
      w_45 = ATgetArgument(v_45, 0);
      x_45 = ATgetArgument(v_45, 1);
      {
        ATerm p_19;
        p_19 = t;
        t = SSL_printnl(not_null(w_45), not_null(x_45));
        t = p_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm q_19;
  q_19 = t;
  {
    ATerm d_46 = NULL,f_46 = NULL;
    ATerm r_19;
    r_19 = t;
    {
      ATerm e_46 = NULL;
      t = q_78(t);
      {
        e_46 = t;
        if(((d_46 != NULL) && (d_46 != e_46)))
          _fail(e_46);
        else
          d_46 = e_46;
      }
    }
    t = r_19;
    {
      ATerm g_46 = NULL;
      g_46 = t;
      if(((f_46 != NULL) && (f_46 != g_46)))
        _fail(g_46);
      else
        f_46 = g_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_46)), not_null(d_46)));
        t = printnl_0(t);
      }
    }
  }
  t = q_19;
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm j_46 (ATerm t)
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
        t = Cons_2(t, s_67, j_46);
      }
    return(t);
  }
  t = j_46(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_3 (ATerm t)
            {
              ATerm y_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = y_19;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, u_3);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
              t_46 = t;
              s_46 :
              if(match_cons(t_46, sym_Path_1))
                {
                  u_46 = ATgetArgument(t_46, 0);
                  t = not_null(u_46);
                }
              else
                {
                  if(match_cons(t_46, sym_Var_1))
                    {
                      u_46 = ATgetArgument(t_46, 0);
                      {
                        t = not_null(u_46);
                        {
                          ATerm a_20 = t;
                          int b_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(b_20);
                            }
                          else
                            {
                              t = a_20;
                              {
                                ATerm v_3 (ATerm t)
                                {
                                  t = term_c_20;
                                  return(t);
                                }
                                t = debug_1(t, v_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_46, sym_Prefix_2))
                        {
                          u_46 = ATgetArgument(t_46, 0);
                          v_46 = ATgetArgument(t_46, 1);
                          {
                            ATerm a_47 = NULL,c_47 = NULL;
                            ATerm d_20;
                            d_20 = t;
                            {
                              ATerm b_47 = NULL;
                              t = not_null(u_46);
                              {
                                t = eval_config_0(t);
                                {
                                  b_47 = t;
                                  if(((a_47 != NULL) && (a_47 != b_47)))
                                    _fail(b_47);
                                  else
                                    a_47 = b_47;
                                }
                              }
                            }
                            t = d_20;
                            {
                              ATerm d_47 = NULL;
                              t = not_null(v_46);
                              {
                                t = eval_config_0(t);
                                {
                                  d_47 = t;
                                  if(((c_47 != NULL) && (c_47 != d_47)))
                                    _fail(d_47);
                                  else
                                    c_47 = d_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_47), not_null(c_47));
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
  ATerm l_47 = NULL;
  l_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_20, not_null(l_47));
    {
      t = table_get_0(t);
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm i_20;
              i_20 = t;
              {
                ATerm n_47 = NULL;
                ATerm o_47 = NULL;
                o_47 = t;
                if(((n_47 != NULL) && (n_47 != o_47)))
                  _fail(o_47);
                else
                  n_47 = o_47;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_20, not_null(l_47), not_null(n_47));
                  t = table_put_0(t);
                }
              }
              t = i_20;
            }
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
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
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym__2))
    {
      u_47 = ATgetArgument(t_47, 0);
      v_47 = ATgetArgument(t_47, 1);
      t = SSL_table_get(not_null(u_47), not_null(v_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  i_48 = t;
  h_48 :
  if(match_cons(i_48, sym__3))
    {
      j_48 = ATgetArgument(i_48, 0);
      k_48 = ATgetArgument(i_48, 1);
      l_48 = ATgetArgument(i_48, 2);
      {
        ATerm j_20;
        j_20 = t;
        {
          ATerm p_48 = NULL;
          ATerm q_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_48), not_null(k_48));
          {
            ATerm k_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_20);
              }
            else
              {
                t = k_20;
                t = (ATerm) ATempty;
              }
            {
              q_48 = t;
              if(((p_48 != NULL) && (p_48 != q_48)))
                _fail(q_48);
              else
                p_48 = q_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_48), not_null(k_48), (ATerm) ATinsert(CheckATermList(not_null(p_48)), not_null(l_48)));
            t = table_put_0(t);
          }
        }
        t = j_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_83 (ATerm))
{
  ATerm u_48 = NULL;
  ATerm v_48 = NULL;
  t = term_e_7;
  {
    t = u_83(t);
    {
      v_48 = t;
      if(((u_48 != NULL) && (u_48 != v_48)))
        _fail(v_48);
      else
        u_48 = v_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_19, term_b_19, not_null(u_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  a_49 :
  if(match_string(b_49, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(b_49) == AT_LIST) && !(ATisEmpty(b_49))))
        {
          c_49 = ATgetFirst((ATermList) b_49);
          d_49 = (ATerm) ATgetNext((ATermList) b_49);
          {
            ATerm g_49 = NULL;
            ATerm m_20;
            m_20 = t;
            {
              t = not_null(c_49);
              t = a_0(t);
            }
            t = m_20;
            {
              ATerm h_49 = NULL;
              t = term_e_7;
              {
                t = d_0(t);
                {
                  h_49 = t;
                  if(((g_49 != NULL) && (g_49 != h_49)))
                    _fail(h_49);
                  else
                    g_49 = h_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_49)), not_null(g_49));
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
  ATerm w_3 (ATerm t)
  {
    ATerm m_49 = NULL;
    m_49 = t;
    l_49 :
    if(!(match_string(m_49, "--help")))
      {
        if(!(match_string(m_49, "-h")))
          {
            if(!(match_string(m_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_o_20;
    {
      t = set_config_0(t);
      t = term_p_20;
    }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_q_20;
    return(t);
  }
  t = Option_3(t, w_3, z_3, c_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  o_49 :
  if(((ATgetType(p_49) == AT_LIST) && !(ATisEmpty(p_49))))
    {
      q_49 = ATgetFirst((ATermList) p_49);
      r_49 = (ATerm) ATgetNext((ATermList) p_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_52 (ATerm), ATerm v_52 (ATerm))
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
    {
      c_50 = ATgetFirst((ATermList) b_50);
      d_50 = (ATerm) ATgetNext((ATermList) b_50);
      {
        ATerm h_50 = NULL,j_50 = NULL;
        ATerm i_50 = NULL;
        t = SSLgetAnnotations(not_null(b_50));
        {
          i_50 = t;
          if(((h_50 != NULL) && (h_50 != i_50)))
            _fail(i_50);
          else
            h_50 = i_50;
        }
        {
          t = not_null(c_50);
          {
            ATerm l_50 = NULL;
            t = u_52(t);
            {
              j_50 = t;
              {
                t = not_null(d_50);
                {
                  ATerm n_50 = NULL;
                  t = v_52(t);
                  {
                    l_50 = t;
                    {
                      ATerm o_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_50)), not_null(j_50)), not_null(h_50));
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
        ATerm r_20;
        r_20 = t;
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
        t = r_20;
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
  ATerm j_51 = NULL,k_51 = NULL,n_51 = NULL;
  j_51 = t;
  i_51 :
  if(match_cons(j_51, sym__2))
    {
      k_51 = ATgetArgument(j_51, 0);
      n_51 = ATgetArgument(j_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_20, not_null(k_51), not_null(n_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm s_20;
  s_20 = t;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_20;
        t = s_83(t);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        {
        }
      }
  }
  t = s_20;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm v_51 = NULL;
      ATerm w_20;
      w_20 = t;
      {
        ATerm t_51 = NULL;
        ATerm u_51 = NULL;
        u_51 = t;
        if(((t_51 != NULL) && (t_51 != u_51)))
          _fail(u_51);
        else
          t_51 = u_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_5, not_null(t_51));
          t = set_config_0(t);
        }
      }
      t = w_20;
      {
        ATerm w_51 = NULL;
        w_51 = t;
        if(((v_51 != NULL) && (v_51 != w_51)))
          _fail(w_51);
        else
          v_51 = w_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_51));
      }
      return(t);
    }
    ATerm h_4 (ATerm t)
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              {
                t = s_83(t);
                t = Cons_2(t, _id, h_4);
              }
            }
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_4, h_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  ATerm b_21;
  b_21 = t;
  {
    ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
    f_52 = t;
    b_52 :
    if(match_cons(f_52, sym__3))
      {
        g_52 = ATgetArgument(f_52, 0);
        h_52 = ATgetArgument(f_52, 1);
        i_52 = ATgetArgument(f_52, 2);
        {
          if(((c_52 != NULL) && (c_52 != g_52)))
            _fail(g_52);
          else
            c_52 = g_52;
          {
            if(((d_52 != NULL) && (d_52 != h_52)))
              _fail(h_52);
            else
              d_52 = h_52;
            {
              if(((e_52 != NULL) && (e_52 != i_52)))
                _fail(i_52);
              else
                e_52 = i_52;
              t = SSL_table_put(not_null(c_52), not_null(d_52), not_null(e_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_83 (ATerm))
{
  ATerm l_52 = NULL;
  ATerm c_21;
  c_21 = t;
  {
    t = term_d_21;
    t = table_put_0(t);
  }
  t = c_21;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm e_21 = t;
      int f_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_83(t);
          LocalPopChoice(f_21);
        }
      else
        {
          t = e_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_4);
    {
      ATerm g_21 = t;
      int h_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_21;
          i_21 = t;
          {
            ATerm j_21 = t;
            int k_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_n_20;
                t = get_config_0(t);
                LocalPopChoice(k_21);
              }
            else
              {
                t = j_21;
                t = fetch_1(t, Help_0);
              }
          }
          t = i_21;
          {
            t = system_usage_0(t);
            {
              t = term_f_5;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_21);
        }
      else
        {
          t = g_21;
          {
            ATerm l_21 = t;
            int m_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm m_52 = NULL;
                    m_52 = t;
                    if(((l_52 != NULL) && (l_52 != m_52)))
                      _fail(m_52);
                    else
                      l_52 = m_52;
                    return(t);
                  }
                  t = Undefined_1(t, m_4);
                  return(t);
                }
                t = fetch_1(t, j_4);
                {
                  ATerm n_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_52)), term_n_21);
                    return(t);
                  }
                  t = say_1(t, n_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_b_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(m_21);
              }
            else
              {
                t = l_21;
                {
                }
              }
          }
        }
      {
        ATerm o_21;
        o_21 = t;
        {
          t = term_a_19;
          t = table_destroy_0(t);
        }
        t = o_21;
      }
    }
  }
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm y_52 = NULL;
  ATerm c_53 = NULL,d_53 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    y_52 = t;
    {
      ATerm p_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(s_21);
        }
      else
        {
          t = p_21;
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
                      ATerm o_4 (ATerm t)
                      {
                        ATerm e_53 = NULL,f_53 = NULL;
                        e_53 = t;
                        q_52 :
                        if(match_cons(e_53, sym_Output_1))
                          {
                            f_53 = ATgetArgument(e_53, 0);
                            if(((d_53 != NULL) && (d_53 != f_53)))
                              _fail(f_53);
                            else
                              d_53 = f_53;
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = fetch_1(t, o_4);
                      {
                        t = not_null(d_53);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(f_22);
                    }
                  else
                    {
                      t = e_22;
                      {
                        ATerm g_53 = NULL;
                        t = term_q_18;
                        {
                          g_53 = t;
                          if(((d_53 != NULL) && (d_53 != g_53)))
                            _fail(g_53);
                          else
                            d_53 = g_53;
                        }
                      }
                    }
                }
                t = d_22;
                {
                  t = input_file_0(t);
                  {
                    ATerm t_4 (ATerm t)
                    {
                      ATerm h_53 = NULL;
                      t = abox2text_0(t);
                      {
                        h_53 = t;
                        if(((c_53 != NULL) && (c_53 != h_53)))
                          _fail(h_53);
                        else
                          c_53 = h_53;
                      }
                      return(t);
                    }
                    t = _2(t, _id, t_4);
                    {
                      t = not_null(c_53);
                      {
                        ATerm u_4 (ATerm t)
                        {
                          ATerm g_22 = t;
                          int h_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_string_0(t);
                              {
                                ATerm i_22;
                                i_22 = t;
                                {
                                  ATerm i_53 = NULL;
                                  ATerm j_53 = NULL;
                                  j_53 = t;
                                  if(((i_53 != NULL) && (i_53 != j_53)))
                                    _fail(j_53);
                                  else
                                    i_53 = j_53;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_53), (ATerm) ATinsert(ATempty, not_null(i_53)));
                                    t = print_0(t);
                                  }
                                }
                                t = i_22;
                              }
                              LocalPopChoice(h_22);
                            }
                          else
                            {
                              t = g_22;
                              {
                              }
                            }
                          return(t);
                        }
                        t = topdown_1(t, u_4);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_53), (ATerm) ATinsert(ATempty, term_j_22));
                          {
                            t = print_0(t);
                            t = report_success_0(t);
                          }
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
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

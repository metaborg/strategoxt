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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_CUT_0;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_b_14;
ATerm term_r_13;
ATerm term_e_13;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_t_8;
ATerm term_e_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_n_3;
void init_constant_terms (void)
{
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Box: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__3, term_l_11, term_m_11, (ATerm) ATempty);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm v_53 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm c_38 (ATerm), ATerm d_38 (ATerm));
ATerm Arg_1 (ATerm, ATerm b_38 (ATerm));
ATerm LINT_2 (ATerm, ATerm z_37 (ATerm), ATerm a_38 (ATerm));
ATerm L_2 (ATerm, ATerm x_37 (ATerm), ATerm y_37 (ATerm));
ATerm list_1 (ATerm, ATerm b_52 (ATerm));
ATerm IS_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm Space_Symbol_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm y_36 (ATerm), ATerm z_36 (ATerm));
ATerm S_Option_0 (ATerm);
ATerm C_2 (ATerm, ATerm v_37 (ATerm), ATerm w_37 (ATerm));
ATerm is_string_0 (ATerm);
ATerm REF_2 (ATerm, ATerm t_37 (ATerm), ATerm u_37 (ATerm));
ATerm LBL_2 (ATerm, ATerm r_37 (ATerm), ATerm s_37 (ATerm));
ATerm R_2 (ATerm, ATerm f_37 (ATerm), ATerm g_37 (ATerm));
ATerm AR_1 (ATerm, ATerm j_37 (ATerm));
ATerm AC_1 (ATerm, ATerm i_37 (ATerm));
ATerm AL_1 (ATerm, ATerm h_37 (ATerm));
ATerm A_Option_0 (ATerm);
ATerm A_3 (ATerm, ATerm c_37 (ATerm), ATerm d_37 (ATerm), ATerm e_37 (ATerm));
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
ATerm FFID_2 (ATerm, ATerm p_37 (ATerm), ATerm q_37 (ATerm));
ATerm FInt_2 (ATerm, ATerm n_37 (ATerm), ATerm o_37 (ATerm));
ATerm F_Option_0 (ATerm);
ATerm F_1 (ATerm, ATerm m_37 (ATerm));
ATerm Font_Operator_0 (ATerm);
ATerm FBOX_2 (ATerm, ATerm k_37 (ATerm), ATerm l_37 (ATerm));
ATerm ALT_2 (ATerm, ATerm w_36 (ATerm), ATerm x_36 (ATerm));
ATerm HV_2 (ATerm, ATerm u_36 (ATerm), ATerm v_36 (ATerm));
ATerm V_2 (ATerm, ATerm s_36 (ATerm), ATerm t_36 (ATerm));
ATerm H_2 (ATerm, ATerm q_36 (ATerm), ATerm r_36 (ATerm));
ATerm S_1 (ATerm, ATerm p_36 (ATerm));
ATerm Box_0 (ATerm);
ATerm _2 (ATerm, ATerm r_30 (ATerm), ATerm s_30 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_44 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_44 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_52 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_43 (ATerm));
ATerm map_1 (ATerm, ATerm z_51 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_43 (ATerm));
ATerm Program_1 (ATerm, ATerm j_36 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_36 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_52 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_44 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_55 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_43 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_38 (ATerm), ATerm f_38 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_43 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_43 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm), ATerm m_44 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_44 (ATerm), ATerm g_44 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_44 (ATerm));
ATerm abox_format_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm l_3;
  l_3 = t;
  {
    ATerm w_3 = NULL,y_3 = NULL;
    ATerm m_3;
    m_3 = t;
    {
      ATerm x_3 = NULL;
      t = v_53(t);
      {
        x_3 = t;
        if(((w_3 != NULL) && (w_3 != x_3)))
          _fail(x_3);
        else
          w_3 = x_3;
      }
    }
    t = m_3;
    {
      ATerm z_3 = NULL;
      z_3 = t;
      if(((y_3 != NULL) && (y_3 != z_3)))
        _fail(z_3);
      else
        y_3 = z_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_3)), not_null(w_3)));
        t = printnl_0(t);
      }
    }
  }
  t = l_3;
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  t = SSL_is_int(not_null(d_4));
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm c_38 (ATerm), ATerm d_38 (ATerm))
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym_Arg2_2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      {
        ATerm p_4 = NULL;
        t = not_null(l_4);
        {
          ATerm r_4 = NULL;
          t = c_38(t);
          {
            p_4 = t;
            {
              t = not_null(m_4);
              {
                t = d_38(t);
                {
                  r_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(p_4), not_null(r_4));
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
ATerm Arg_1 (ATerm t, ATerm b_38 (ATerm))
{
  ATerm z_4 = NULL,a_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym_Arg_1))
    {
      a_5 = ATgetArgument(z_4, 0);
      {
        ATerm c_5 = NULL;
        t = not_null(a_5);
        {
          t = b_38(t);
          {
            c_5 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(c_5));
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
ATerm LINT_2 (ATerm t, ATerm z_37 (ATerm), ATerm a_38 (ATerm))
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
  k_5 = t;
  j_5 :
  if(match_cons(k_5, sym_LINT_2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      {
        ATerm p_5 = NULL;
        t = not_null(l_5);
        {
          ATerm r_5 = NULL;
          t = z_37(t);
          {
            p_5 = t;
            {
              t = not_null(m_5);
              {
                t = a_38(t);
                {
                  r_5 = t;
                  t = (ATerm) ATmakeAppl(sym_LINT_2, not_null(p_5), not_null(r_5));
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
ATerm L_2 (ATerm t, ATerm x_37 (ATerm), ATerm y_37 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_L_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm f_6 = NULL;
        t = not_null(b_6);
        {
          ATerm h_6 = NULL;
          t = x_37(t);
          {
            f_6 = t;
            {
              t = not_null(c_6);
              {
                t = y_37(t);
                {
                  h_6 = t;
                  t = (ATerm) ATmakeAppl(sym_L_2, not_null(f_6), not_null(h_6));
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
ATerm list_1 (ATerm t, ATerm b_52 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    ATerm o_3 = t;
    int p_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_3);
      }
    else
      {
        t = o_3;
        t = Cons_2(t, b_52, m_6);
      }
    return(t);
  }
  t = m_6(t);
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  n_6 :
  if(!(match_cons(o_6, sym_IS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm q_6 = NULL;
  q_6 = t;
  p_6 :
  if(!(match_cons(q_6, sym_HS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm s_6 = NULL;
  s_6 = t;
  r_6 :
  if(!(match_cons(s_6, sym_VS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Space_Symbol_0 (ATerm t)
{
  ATerm q_3 = t;
  int r_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = VS_0(t);
      LocalPopChoice(r_3);
    }
  else
    {
      t = q_3;
      {
        ATerm s_3 = t;
        int t_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HS_0(t);
            LocalPopChoice(t_3);
          }
        else
          {
            t = s_3;
            t = IS_0(t);
          }
      }
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm y_36 (ATerm), ATerm z_36 (ATerm))
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym_SOpt_2))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      {
        ATerm c_7 = NULL;
        t = not_null(y_6);
        {
          ATerm e_7 = NULL;
          t = y_36(t);
          {
            c_7 = t;
            {
              t = not_null(z_6);
              {
                t = z_36(t);
                {
                  e_7 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(c_7), not_null(e_7));
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
ATerm C_2 (ATerm t, ATerm v_37 (ATerm), ATerm w_37 (ATerm))
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym_C_2))
    {
      o_7 = ATgetArgument(n_7, 0);
      p_7 = ATgetArgument(n_7, 1);
      {
        ATerm s_7 = NULL;
        t = not_null(o_7);
        {
          ATerm u_7 = NULL;
          t = v_37(t);
          {
            s_7 = t;
            {
              t = not_null(p_7);
              {
                t = w_37(t);
                {
                  u_7 = t;
                  t = (ATerm) ATmakeAppl(sym_C_2, not_null(s_7), not_null(u_7));
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
ATerm is_string_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  t = SSL_is_string(not_null(a_8));
  return(t);
}
ATerm REF_2 (ATerm t, ATerm t_37 (ATerm), ATerm u_37 (ATerm))
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym_REF_2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      {
        ATerm m_8 = NULL;
        t = not_null(i_8);
        {
          ATerm o_8 = NULL;
          t = t_37(t);
          {
            m_8 = t;
            {
              t = not_null(j_8);
              {
                t = u_37(t);
                {
                  o_8 = t;
                  t = (ATerm) ATmakeAppl(sym_REF_2, not_null(m_8), not_null(o_8));
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
ATerm LBL_2 (ATerm t, ATerm r_37 (ATerm), ATerm s_37 (ATerm))
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_LBL_2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        ATerm c_9 = NULL;
        t = not_null(y_8);
        {
          ATerm e_9 = NULL;
          t = r_37(t);
          {
            c_9 = t;
            {
              t = not_null(z_8);
              {
                t = s_37(t);
                {
                  e_9 = t;
                  t = (ATerm) ATmakeAppl(sym_LBL_2, not_null(c_9), not_null(e_9));
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
ATerm R_2 (ATerm t, ATerm f_37 (ATerm), ATerm g_37 (ATerm))
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym_R_2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      {
        ATerm s_9 = NULL;
        t = not_null(o_9);
        {
          ATerm u_9 = NULL;
          t = f_37(t);
          {
            s_9 = t;
            {
              t = not_null(p_9);
              {
                t = g_37(t);
                {
                  u_9 = t;
                  t = (ATerm) ATmakeAppl(sym_R_2, not_null(s_9), not_null(u_9));
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
ATerm AR_1 (ATerm t, ATerm j_37 (ATerm))
{
  ATerm c_10 = NULL,d_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym_AR_1))
    {
      d_10 = ATgetArgument(c_10, 0);
      {
        ATerm f_10 = NULL;
        t = not_null(d_10);
        {
          t = j_37(t);
          {
            f_10 = t;
            t = (ATerm) ATmakeAppl(sym_AR_1, not_null(f_10));
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
ATerm AC_1 (ATerm t, ATerm i_37 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym_AC_1))
    {
      n_10 = ATgetArgument(m_10, 0);
      {
        ATerm p_10 = NULL;
        t = not_null(n_10);
        {
          t = i_37(t);
          {
            p_10 = t;
            t = (ATerm) ATmakeAppl(sym_AC_1, not_null(p_10));
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
ATerm AL_1 (ATerm t, ATerm h_37 (ATerm))
{
  ATerm d_11 = NULL,e_11 = NULL;
  d_11 = t;
  c_11 :
  if(match_cons(d_11, sym_AL_1))
    {
      e_11 = ATgetArgument(d_11, 0);
      {
        ATerm g_11 = NULL;
        t = not_null(e_11);
        {
          t = h_37(t);
          {
            g_11 = t;
            t = (ATerm) ATmakeAppl(sym_AL_1, not_null(g_11));
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
  ATerm u_3 = t;
  int v_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 (ATerm t)
      {
        t = list_1(t, S_Option_0);
        return(t);
      }
      t = AL_1(t, a_0);
      LocalPopChoice(v_3);
    }
  else
    {
      t = u_3;
      {
        ATerm a_4 = t;
        int b_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_0 (ATerm t)
            {
              t = list_1(t, S_Option_0);
              return(t);
            }
            t = AC_1(t, d_0);
            LocalPopChoice(b_4);
          }
        else
          {
            t = a_4;
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
ATerm A_3 (ATerm t, ATerm c_37 (ATerm), ATerm d_37 (ATerm), ATerm e_37 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_A_3))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      v_11 = ATgetArgument(s_11, 2);
      {
        ATerm z_11 = NULL;
        t = not_null(t_11);
        {
          ATerm b_12 = NULL;
          t = c_37(t);
          {
            z_11 = t;
            {
              t = not_null(u_11);
              {
                ATerm d_12 = NULL;
                t = d_37(t);
                {
                  b_12 = t;
                  {
                    t = not_null(v_11);
                    {
                      t = e_37(t);
                      {
                        d_12 = t;
                        t = (ATerm) ATmakeAppl(sym_A_3, not_null(z_11), not_null(b_12), not_null(d_12));
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
  ATerm k_12 = NULL;
  k_12 = t;
  j_12 :
  if(!(match_cons(k_12, sym_MATH_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm m_12 = NULL;
  m_12 = t;
  l_12 :
  if(!(match_cons(m_12, sym_NUM_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  n_12 :
  if(!(match_cons(o_12, sym_VAR_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  p_12 :
  if(!(match_cons(q_12, sym_KW_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm s_12 = NULL;
  s_12 = t;
  r_12 :
  if(!(match_cons(s_12, sym_CL_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SZ_0 (ATerm t)
{
  ATerm u_12 = NULL;
  u_12 = t;
  t_12 :
  if(!(match_cons(u_12, sym_SZ_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  v_12 :
  if(!(match_cons(w_12, sym_SH_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  x_12 :
  if(!(match_cons(y_12, sym_SE_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  z_12 :
  if(!(match_cons(a_13, sym_FM_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm FN_0 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  b_13 :
  if(!(match_cons(c_13, sym_FN_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Font_Param_0 (ATerm t)
{
  ATerm c_4 = t;
  int e_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FN_0(t);
      LocalPopChoice(e_4);
    }
  else
    {
      t = c_4;
      {
        ATerm f_4 = t;
        int g_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FM_0(t);
            LocalPopChoice(g_4);
          }
        else
          {
            t = f_4;
            {
              ATerm h_4 = t;
              int i_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SE_0(t);
                  LocalPopChoice(i_4);
                }
              else
                {
                  t = h_4;
                  {
                    ATerm n_4 = t;
                    int o_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SH_0(t);
                        LocalPopChoice(o_4);
                      }
                    else
                      {
                        t = n_4;
                        {
                          ATerm q_4 = t;
                          int s_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SZ_0(t);
                              LocalPopChoice(s_4);
                            }
                          else
                            {
                              t = q_4;
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
ATerm FFID_2 (ATerm t, ATerm p_37 (ATerm), ATerm q_37 (ATerm))
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym_FFID_2))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      {
        ATerm m_13 = NULL;
        t = not_null(i_13);
        {
          ATerm o_13 = NULL;
          t = p_37(t);
          {
            m_13 = t;
            {
              t = not_null(j_13);
              {
                t = q_37(t);
                {
                  o_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(m_13), not_null(o_13));
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
ATerm FInt_2 (ATerm t, ATerm n_37 (ATerm), ATerm o_37 (ATerm))
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
  x_13 = t;
  w_13 :
  if(match_cons(x_13, sym_FInt_2))
    {
      y_13 = ATgetArgument(x_13, 0);
      z_13 = ATgetArgument(x_13, 1);
      {
        ATerm c_14 = NULL;
        t = not_null(y_13);
        {
          ATerm e_14 = NULL;
          t = n_37(t);
          {
            c_14 = t;
            {
              t = not_null(z_13);
              {
                t = o_37(t);
                {
                  e_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FInt_2, not_null(c_14), not_null(e_14));
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
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FInt_2(t, Font_Param_0, is_string_0);
      LocalPopChoice(u_4);
    }
  else
    {
      t = t_4;
      t = FFID_2(t, Font_Param_0, is_string_0);
    }
  return(t);
}
ATerm F_1 (ATerm t, ATerm m_37 (ATerm))
{
  ATerm m_14 = NULL,w_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_F_1))
    {
      w_14 = ATgetArgument(m_14, 0);
      {
        ATerm y_14 = NULL;
        t = not_null(w_14);
        {
          t = m_37(t);
          {
            y_14 = t;
            t = (ATerm) ATmakeAppl(sym_F_1, not_null(y_14));
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
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_0 (ATerm t)
      {
        t = list_1(t, F_Option_0);
        return(t);
      }
      t = F_1(t, l_0);
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      {
        ATerm x_4 = t;
        int b_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = KW_0(t);
            LocalPopChoice(b_5);
          }
        else
          {
            t = x_4;
            {
              ATerm d_5 = t;
              int e_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = VAR_0(t);
                  LocalPopChoice(e_5);
                }
              else
                {
                  t = d_5;
                  {
                    ATerm f_5 = t;
                    int g_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = NUM_0(t);
                        LocalPopChoice(g_5);
                      }
                    else
                      {
                        t = f_5;
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
ATerm FBOX_2 (ATerm t, ATerm k_37 (ATerm), ATerm l_37 (ATerm))
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_FBOX_2))
    {
      t_15 = ATgetArgument(s_15, 0);
      u_15 = ATgetArgument(s_15, 1);
      {
        ATerm x_15 = NULL;
        t = not_null(t_15);
        {
          ATerm z_15 = NULL;
          t = k_37(t);
          {
            x_15 = t;
            {
              t = not_null(u_15);
              {
                t = l_37(t);
                {
                  z_15 = t;
                  t = (ATerm) ATmakeAppl(sym_FBOX_2, not_null(x_15), not_null(z_15));
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
ATerm ALT_2 (ATerm t, ATerm w_36 (ATerm), ATerm x_36 (ATerm))
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_ALT_2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      {
        ATerm o_16 = NULL;
        t = not_null(k_16);
        {
          ATerm q_16 = NULL;
          t = w_36(t);
          {
            o_16 = t;
            {
              t = not_null(l_16);
              {
                t = x_36(t);
                {
                  q_16 = t;
                  t = (ATerm) ATmakeAppl(sym_ALT_2, not_null(o_16), not_null(q_16));
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
ATerm HV_2 (ATerm t, ATerm u_36 (ATerm), ATerm v_36 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_HV_2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        ATerm e_17 = NULL;
        t = not_null(a_17);
        {
          ATerm g_17 = NULL;
          t = u_36(t);
          {
            e_17 = t;
            {
              t = not_null(b_17);
              {
                t = v_36(t);
                {
                  g_17 = t;
                  t = (ATerm) ATmakeAppl(sym_HV_2, not_null(e_17), not_null(g_17));
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
ATerm V_2 (ATerm t, ATerm s_36 (ATerm), ATerm t_36 (ATerm))
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_V_2))
    {
      q_17 = ATgetArgument(p_17, 0);
      r_17 = ATgetArgument(p_17, 1);
      {
        ATerm u_17 = NULL;
        t = not_null(q_17);
        {
          ATerm w_17 = NULL;
          t = s_36(t);
          {
            u_17 = t;
            {
              t = not_null(r_17);
              {
                t = t_36(t);
                {
                  w_17 = t;
                  t = (ATerm) ATmakeAppl(sym_V_2, not_null(u_17), not_null(w_17));
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
ATerm H_2 (ATerm t, ATerm q_36 (ATerm), ATerm r_36 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_H_2))
    {
      j_18 = ATgetArgument(i_18, 0);
      k_18 = ATgetArgument(i_18, 1);
      {
        ATerm n_18 = NULL;
        t = not_null(j_18);
        {
          ATerm p_18 = NULL;
          t = q_36(t);
          {
            n_18 = t;
            {
              t = not_null(k_18);
              {
                t = r_36(t);
                {
                  p_18 = t;
                  t = (ATerm) ATmakeAppl(sym_H_2, not_null(n_18), not_null(p_18));
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
ATerm S_1 (ATerm t, ATerm p_36 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_S_1))
    {
      y_18 = ATgetArgument(x_18, 0);
      {
        ATerm a_19 = NULL;
        t = not_null(y_18);
        {
          t = p_36(t);
          {
            a_19 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, not_null(a_19));
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
  ATerm h_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = S_1(t, is_string_0);
      LocalPopChoice(i_5);
    }
  else
    {
      t = h_5;
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
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
            LocalPopChoice(o_5);
          }
        else
          {
            t = n_5;
            {
              ATerm q_5 = t;
              int s_5 = stack_ptr;
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
                              t = ALT_2(t, Box_0, Box_0);
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
                                    t = FBOX_2(t, Font_Operator_0, Box_0);
                                    LocalPopChoice(y_5);
                                  }
                                else
                                  {
                                    t = x_5;
                                    {
                                      ATerm d_6 = t;
                                      int e_6 = stack_ptr;
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
                                          LocalPopChoice(e_6);
                                        }
                                      else
                                        {
                                          t = d_6;
                                          {
                                            ATerm g_6 = t;
                                            int i_6 = stack_ptr;
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
                                                LocalPopChoice(i_6);
                                              }
                                            else
                                              {
                                                t = g_6;
                                                {
                                                  ATerm j_6 = t;
                                                  int k_6 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LBL_2(t, is_string_0, Box_0);
                                                      LocalPopChoice(k_6);
                                                    }
                                                  else
                                                    {
                                                      t = j_6;
                                                      {
                                                        ATerm l_6 = t;
                                                        int t_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = REF_2(t, is_string_0, Box_0);
                                                            LocalPopChoice(t_6);
                                                          }
                                                        else
                                                          {
                                                            t = l_6;
                                                            {
                                                              ATerm u_6 = t;
                                                              int v_6 = stack_ptr;
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
                                                                  LocalPopChoice(v_6);
                                                                }
                                                              else
                                                                {
                                                                  t = u_6;
                                                                  {
                                                                    ATerm a_7 = t;
                                                                    int b_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = L_2(t, Box_0, Box_0);
                                                                        LocalPopChoice(b_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_7;
                                                                        {
                                                                          ATerm d_7 = t;
                                                                          int f_7 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = LINT_2(t, is_int_0, Box_0);
                                                                              LocalPopChoice(f_7);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_7;
                                                                              {
                                                                                ATerm g_7 = t;
                                                                                int h_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Arg_1(t, is_int_0);
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
                                                                                          t = Arg2_2(t, is_int_0, is_int_0);
                                                                                          LocalPopChoice(j_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_7;
                                                                                          {
                                                                                            ATerm z_0 (ATerm t)
                                                                                            {
                                                                                              t = term_k_7;
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
  return(t);
}
ATerm _2 (ATerm t, ATerm r_30 (ATerm), ATerm s_30 (ATerm))
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      {
        ATerm o_19 = NULL;
        t = not_null(k_19);
        {
          ATerm q_19 = NULL;
          t = r_30(t);
          {
            o_19 = t;
            {
              t = not_null(l_19);
              {
                t = s_30(t);
                {
                  q_19 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), not_null(q_19));
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
  ATerm x_19 = NULL;
  ATerm l_7;
  l_7 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm y_19 = NULL,z_19 = NULL;
      y_19 = t;
      w_19 :
      if(match_cons(y_19, sym_Program_1))
        {
          z_19 = ATgetArgument(y_19, 0);
          if(((x_19 != NULL) && (x_19 != z_19)))
            _fail(z_19);
          else
            x_19 = z_19;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), not_null(x_19)), term_q_7));
      {
        t = printnl_0(t);
        {
          t = term_t_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATempty, term_v_7));
  {
    t = printnl_0(t);
    {
      t = term_t_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      ATerm w_7 = t;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm i_20 = NULL;
            i_20 = t;
            b_20 :
            if(!(match_cons(i_20, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_1);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_7;
        }
      return(t);
    }
    t = _2(t, c_1, _id);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm j_20 = NULL,k_20 = NULL;
          j_20 = t;
          d_20 :
          if(match_cons(j_20, sym_Runtime_1))
            {
              k_20 = ATgetArgument(j_20, 0);
              if(((h_20 != NULL) && (h_20 != k_20)))
                _fail(k_20);
              else
                h_20 = k_20;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_1);
        return(t);
      }
      t = _2(t, e_1, _id);
      {
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            ATerm l_20 = NULL,m_20 = NULL;
            l_20 = t;
            f_20 :
            if(match_cons(l_20, sym_Program_1))
              {
                m_20 = ATgetArgument(l_20, 0);
                if(((g_20 != NULL) && (g_20 != m_20)))
                  _fail(m_20);
                else
                  g_20 = m_20;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, h_1);
          return(t);
        }
        t = _2(t, g_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(h_20)), term_x_7), not_null(g_20)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, b_1);
  {
    t = term_z_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym__2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      t = SSL_WriteToTextFile(not_null(s_20), not_null(t_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      t = SSL_WriteToBinaryFile(not_null(a_21), not_null(b_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_21 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm c_8 = t;
      int d_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_21 = NULL,l_21 = NULL;
            k_21 = t;
            g_21 :
            if(match_cons(k_21, sym_Output_1))
              {
                l_21 = ATgetArgument(k_21, 0);
                if(((j_21 != NULL) && (j_21 != l_21)))
                  _fail(l_21);
                else
                  j_21 = l_21;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, j_1);
          LocalPopChoice(d_8);
        }
      else
        {
          t = c_8;
          {
            ATerm m_21 = NULL;
            t = term_e_8;
            {
              m_21 = t;
              if(((j_21 != NULL) && (j_21 != m_21)))
                _fail(m_21);
              else
                j_21 = m_21;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_1, _id);
  }
  t = b_8;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = not_null(j_21);
        return(t);
      }
      t = split_2(t, l_1, _id);
      return(t);
    }
    t = _2(t, _id, k_1);
    {
      ATerm f_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm n_1 (ATerm t)
            {
              ATerm n_21 = NULL;
              n_21 = t;
              i_21 :
              if(!(match_cons(n_21, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, n_1);
            return(t);
          }
          t = _2(t, m_1, WriteToBinaryFile_0);
          LocalPopChoice(k_8);
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
ATerm apply_strategy_1 (ATerm t, ATerm w_44 (ATerm))
{
  ATerm t_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  ATerm l_8;
  l_8 = t;
  t = dtime_0(t);
  t = l_8;
  {
    t = w_44(t);
    {
      ATerm n_8;
      n_8 = t;
      {
        ATerm u_21 = NULL;
        t = dtime_0(t);
        {
          u_21 = t;
          if(((t_21 != NULL) && (t_21 != u_21)))
            _fail(u_21);
          else
            t_21 = u_21;
        }
      }
      t = n_8;
      {
        v_21 = t;
        s_21 :
        if(match_cons(v_21, sym__2))
          {
            w_21 = ATgetArgument(v_21, 0);
            x_21 = ATgetArgument(v_21, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_21)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_21))), not_null(x_21));
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
  ATerm d_22 = NULL;
  d_22 = t;
  t = SSL_ReadFromFile(not_null(d_22));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  ATerm i_22 = NULL,k_22 = NULL;
  ATerm p_8;
  p_8 = t;
  {
    ATerm j_22 = NULL;
    t = v_59(t);
    {
      j_22 = t;
      if(((i_22 != NULL) && (i_22 != j_22)))
        _fail(j_22);
      else
        i_22 = j_22;
    }
  }
  t = p_8;
  {
    ATerm l_22 = NULL;
    t = w_59(t);
    {
      l_22 = t;
      if(((k_22 != NULL) && (k_22 != l_22)))
        _fail(l_22);
      else
        k_22 = l_22;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), not_null(k_22));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_22 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_1 (ATerm t)
        {
          ATerm s_22 = NULL,t_22 = NULL;
          s_22 = t;
          p_22 :
          if(match_cons(s_22, sym_Input_1))
            {
              t_22 = ATgetArgument(s_22, 0);
              if(((r_22 != NULL) && (r_22 != t_22)))
                _fail(t_22);
              else
                r_22 = t_22;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_1);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        {
          ATerm u_22 = NULL;
          t = term_t_8;
          {
            u_22 = t;
            if(((r_22 != NULL) && (r_22 != u_22)))
              _fail(u_22);
            else
              r_22 = u_22;
          }
        }
      }
  }
  t = q_8;
  {
    ATerm p_1 (ATerm t)
    {
      t = not_null(r_22);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  x_22 :
  if(!(match_cons(y_22, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_44 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        {
          ATerm a_9 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_9);
            }
          else
            {
              t = a_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, q_1);
  t = v_44(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = SSL_table_create(not_null(a_23));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  {
    ATerm d_9;
    d_9 = t;
    {
      t = term_f_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_9, term_g_9, not_null(e_23));
          t = table_put_0(t);
        }
      }
    }
    t = d_9;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_string(m_23, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(m_23) == AT_LIST) && ((ATermList) m_23 != ATempty)))
        {
          n_23 = ATgetFirst((ATermList) m_23);
          o_23 = (ATerm) ATgetNext((ATermList) m_23);
          l_23 :
          if(((ATgetType(o_23) == AT_LIST) && ((ATermList) o_23 != ATempty)))
            {
              p_23 = ATgetFirst((ATermList) o_23);
              q_23 = (ATerm) ATgetNext((ATermList) o_23);
              {
                ATerm u_23 = NULL;
                ATerm h_9;
                h_9 = t;
                {
                  t = not_null(n_23);
                  t = i_0(t);
                }
                t = h_9;
                {
                  ATerm v_23 = NULL;
                  t = not_null(p_23);
                  {
                    t = j_0(t);
                    {
                      v_23 = t;
                      if(((u_23 != NULL) && (u_23 != v_23)))
                        _fail(v_23);
                      else
                        u_23 = v_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_23)), not_null(u_23));
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
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm k_24 = NULL;
        k_24 = t;
        z_23 :
        if(!(match_string(k_24, "-S")))
          {
            if(!(match_string(k_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_k_9;
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_l_9;
        return(t);
      }
      t = Option_3(t, r_1, s_1, t_1);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              ATerm l_24 = NULL;
              l_24 = t;
              a_24 :
              if(!(match_string(l_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_t_9;
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = term_v_9;
              return(t);
            }
            t = Option_3(t, u_1, v_1, w_1);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            {
              ATerm w_9 = t;
              int x_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_1 (ATerm t)
                  {
                    ATerm m_24 = NULL;
                    m_24 = t;
                    b_24 :
                    if(!(match_string(m_24, "-v")))
                      {
                        if(!(match_string(m_24, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm y_1 (ATerm t)
                  {
                    t = term_y_9;
                    return(t);
                  }
                  ATerm z_1 (ATerm t)
                  {
                    t = term_z_9;
                    return(t);
                  }
                  t = Option_3(t, x_1, y_1, z_1);
                  LocalPopChoice(x_9);
                }
              else
                {
                  t = w_9;
                  {
                    ATerm a_10 = t;
                    int e_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_2 (ATerm t)
                        {
                          ATerm n_24 = NULL;
                          n_24 = t;
                          c_24 :
                          if(!(match_string(n_24, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm b_2 (ATerm t)
                        {
                          ATerm o_24 = NULL;
                          ATerm p_24 = NULL;
                          p_24 = t;
                          if(((o_24 != NULL) && (o_24 != p_24)))
                            _fail(p_24);
                          else
                            o_24 = p_24;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_24));
                          return(t);
                        }
                        ATerm c_2 (ATerm t)
                        {
                          t = term_g_10;
                          return(t);
                        }
                        t = ArgOption_3(t, a_2, b_2, c_2);
                        LocalPopChoice(e_10);
                      }
                    else
                      {
                        t = a_10;
                        {
                          ATerm h_10 = t;
                          int i_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_2 (ATerm t)
                              {
                                ATerm q_24 = NULL;
                                q_24 = t;
                                e_24 :
                                if(!(match_string(q_24, "-i")))
                                  {
                                    if(!(match_string(q_24, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm e_2 (ATerm t)
                              {
                                ATerm r_24 = NULL;
                                ATerm s_24 = NULL;
                                s_24 = t;
                                if(((r_24 != NULL) && (r_24 != s_24)))
                                  _fail(s_24);
                                else
                                  r_24 = s_24;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_24));
                                return(t);
                              }
                              ATerm f_2 (ATerm t)
                              {
                                t = term_j_10;
                                return(t);
                              }
                              t = ArgOption_3(t, d_2, e_2, f_2);
                              LocalPopChoice(i_10);
                            }
                          else
                            {
                              t = h_10;
                              {
                                ATerm k_10 = t;
                                int o_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_2 (ATerm t)
                                    {
                                      ATerm t_24 = NULL;
                                      t_24 = t;
                                      g_24 :
                                      if(!(match_string(t_24, "-o")))
                                        {
                                          if(!(match_string(t_24, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_2 (ATerm t)
                                    {
                                      ATerm u_24 = NULL;
                                      ATerm v_24 = NULL;
                                      v_24 = t;
                                      if(((u_24 != NULL) && (u_24 != v_24)))
                                        _fail(v_24);
                                      else
                                        u_24 = v_24;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_24));
                                      return(t);
                                    }
                                    ATerm i_2 (ATerm t)
                                    {
                                      t = term_q_10;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, g_2, h_2, i_2);
                                    LocalPopChoice(o_10);
                                  }
                                else
                                  {
                                    t = k_10;
                                    {
                                      ATerm r_10 = t;
                                      int s_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_2 (ATerm t)
                                          {
                                            ATerm w_24 = NULL;
                                            w_24 = t;
                                            i_24 :
                                            if(!(match_string(w_24, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_t_10;
                                            return(t);
                                          }
                                          ATerm l_2 (ATerm t)
                                          {
                                            t = term_u_10;
                                            return(t);
                                          }
                                          t = Option_3(t, j_2, k_2, l_2);
                                          LocalPopChoice(s_10);
                                        }
                                      else
                                        {
                                          t = r_10;
                                          {
                                            ATerm m_2 (ATerm t)
                                            {
                                              ATerm x_24 = NULL;
                                              x_24 = t;
                                              j_24 :
                                              if(!(match_string(x_24, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_v_10;
                                              return(t);
                                            }
                                            ATerm o_2 (ATerm t)
                                            {
                                              t = term_w_10;
                                              return(t);
                                            }
                                            t = Option_3(t, m_2, n_2, o_2);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  t = SSL_table_destroy(not_null(c_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = SSL_exit(not_null(g_25));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  t = SSL_implode_string(not_null(k_25));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_52 (ATerm))
{
  ATerm n_25 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_25);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        {
          t = Nil_0(t);
          t = n_52(t);
        }
      }
    return(t);
  }
  t = n_25(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
        q_25 = t;
        p_25 :
        if(((ATgetType(q_25) == AT_LIST) && ((ATermList) q_25 != ATempty)))
          {
            r_25 = ATgetFirst((ATermList) q_25);
            s_25 = (ATerm) ATgetNext((ATermList) q_25);
            {
              t = not_null(r_25);
              {
                ATerm p_2 (ATerm t)
                {
                  t = not_null(s_25);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_2);
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
  ATerm b_26 = NULL;
  b_26 = t;
  t = SSL_explode_string(not_null(b_26));
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
ATerm long_description_1 (ATerm t, ATerm c_43 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_51 (ATerm))
{
  ATerm e_26 (ATerm t)
  {
    ATerm b_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = b_11;
        t = Cons_2(t, z_51, e_26);
      }
    return(t);
  }
  t = e_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  p_26 = t;
  m_26 :
  if(((ATgetType(p_26) == AT_LIST) && ((ATermList) p_26 != ATempty)))
    {
      n_26 = ATgetFirst((ATermList) p_26);
      o_26 = (ATerm) ATgetNext((ATermList) p_26);
      {
        ATerm u_26 = NULL;
        t = not_null(o_26);
        {
          ATerm h_11;
          h_11 = t;
          {
            ATerm v_26 = NULL,c_27 = NULL,e_27 = NULL;
            ATerm i_11;
            i_11 = t;
            {
              ATerm b_27 = NULL;
              t = h_0(t);
              {
                b_27 = t;
                if(((v_26 != NULL) && (v_26 != b_27)))
                  _fail(b_27);
                else
                  v_26 = b_27;
              }
            }
            t = i_11;
            {
              ATerm d_27 = NULL;
              t = not_null(n_26);
              {
                t = g_0(t);
                {
                  d_27 = t;
                  if(((c_27 != NULL) && (c_27 != d_27)))
                    _fail(d_27);
                  else
                    c_27 = d_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_26)), not_null(c_27));
                {
                  e_27 = t;
                  if(((u_26 != NULL) && (u_26 != e_27)))
                    _fail(e_27);
                  else
                    u_26 = e_27;
                }
              }
            }
          }
          t = h_11;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(u_26);
              return(t);
            }
            t = reverse_acc_2(t, g_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) p_26 == ATempty))
        {
          {
            t = term_j_11;
            t = h_0(t);
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
ATerm short_description_1 (ATerm t, ATerm b_43 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_36 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL;
  n_27 = t;
  m_27 :
  if(match_cons(n_27, sym_Program_1))
    {
      o_27 = ATgetArgument(n_27, 0);
      {
        ATerm q_27 = NULL;
        t = not_null(o_27);
        {
          t = j_36(t);
          {
            q_27 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_27));
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
  ATerm y_27 = NULL;
  ATerm s_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      ATerm z_27 = NULL;
      z_27 = t;
      if(((y_27 != NULL) && (y_27 != z_27)))
        _fail(z_27);
      else
        y_27 = z_27;
      return(t);
    }
    t = Program_1(t, t_2);
    return(t);
  }
  t = option_defined_1(t, s_2);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm a_28 = NULL;
      ATerm b_28 = NULL;
      t = term_j_11;
      {
        ATerm v_2 (ATerm t)
        {
          t = not_null(y_27);
          return(t);
        }
        t = short_description_1(t, v_2);
        {
          t = concat_strings_0(t);
          {
            b_28 = t;
            if(((a_28 != NULL) && (a_28 != b_28)))
              _fail(b_28);
            else
              a_28 = b_28;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATempty, not_null(a_28)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, u_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATempty, term_k_11));
      {
        t = printnl_0(t);
        {
          t = term_n_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm w_2 (ATerm t)
                {
                  ATerm c_28 = NULL;
                  c_28 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_28)), term_o_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, w_2);
                {
                  ATerm x_2 (ATerm t)
                  {
                    ATerm e_28 = NULL;
                    ATerm f_28 = NULL;
                    t = term_j_11;
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = not_null(y_27);
                        return(t);
                      }
                      t = long_description_1(t, y_2);
                      {
                        t = concat_strings_0(t);
                        {
                          f_28 = t;
                          if(((e_28 != NULL) && (e_28 != f_28)))
                            _fail(f_28);
                          else
                            e_28 = f_28;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_28)), term_p_11));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, x_2);
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
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym__2))
    {
      n_28 = ATgetArgument(m_28, 0);
      o_28 = ATgetArgument(m_28, 1);
      {
        ATerm q_11;
        q_11 = t;
        t = SSL_printnl(not_null(n_28), not_null(o_28));
        t = q_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_36 (ATerm))
{
  ATerm v_28 = NULL,w_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym_Undefined_1))
    {
      w_28 = ATgetArgument(v_28, 0);
      {
        ATerm y_28 = NULL;
        t = not_null(w_28);
        {
          t = k_36(t);
          {
            y_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_28));
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
ATerm fetch_1 (ATerm t, ATerm h_52 (ATerm))
{
  ATerm c_29 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_52, _id);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = Cons_2(t, _id, c_29);
      }
    return(t);
  }
  t = c_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_44 (ATerm))
{
  t = fetch_1(t, a_44);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  d_29 :
  if(!(match_cons(e_29, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm y_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_55(t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = y_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym__2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      t = SSL_table_get(not_null(i_29), not_null(j_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym__3))
    {
      r_29 = ATgetArgument(q_29, 0);
      s_29 = ATgetArgument(q_29, 1);
      t_29 = ATgetArgument(q_29, 2);
      {
        ATerm c_12;
        c_12 = t;
        {
          ATerm x_29 = NULL;
          ATerm y_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(s_29));
          {
            ATerm e_12 = t;
            int f_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_12);
              }
            else
              {
                t = e_12;
                t = (ATerm) ATempty;
              }
            {
              y_29 = t;
              if(((x_29 != NULL) && (x_29 != y_29)))
                _fail(y_29);
              else
                x_29 = y_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_29), not_null(s_29), (ATerm) ATinsert(CheckATermList(not_null(x_29)), not_null(t_29)));
            t = table_put_0(t);
          }
        }
        t = c_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm c_30 = NULL;
  ATerm d_30 = NULL;
  t = term_j_11;
  {
    t = g_43(t);
    {
      d_30 = t;
      if(((c_30 != NULL) && (c_30 != d_30)))
        _fail(d_30);
      else
        c_30 = d_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_11, term_m_11, not_null(c_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_string(j_30, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(j_30) == AT_LIST) && ((ATermList) j_30 != ATempty)))
        {
          k_30 = ATgetFirst((ATermList) j_30);
          l_30 = (ATerm) ATgetNext((ATermList) j_30);
          {
            ATerm o_30 = NULL;
            ATerm g_12;
            g_12 = t;
            {
              t = not_null(k_30);
              t = b_0(t);
            }
            t = g_12;
            {
              ATerm p_30 = NULL;
              t = term_j_11;
              {
                t = c_0(t);
                {
                  p_30 = t;
                  if(((o_30 != NULL) && (o_30 != p_30)))
                    _fail(p_30);
                  else
                    o_30 = p_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_30)), not_null(o_30));
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
  ATerm z_2 (ATerm t)
  {
    ATerm w_30 = NULL;
    w_30 = t;
    v_30 :
    if(!(match_string(w_30, "--help")))
      {
        if(!(match_string(w_30, "-h")))
          {
            if(!(match_string(w_30, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_h_12;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_i_12;
    return(t);
  }
  t = Option_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(((ATgetType(z_30) == AT_LIST) && ((ATermList) z_30 != ATempty)))
    {
      a_31 = ATgetFirst((ATermList) z_30);
      b_31 = (ATerm) ATgetNext((ATermList) z_30);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_38 (ATerm), ATerm f_38 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  i_31 :
  if(((ATgetType(j_31) == AT_LIST) && ((ATermList) j_31 != ATempty)))
    {
      k_31 = ATgetFirst((ATermList) j_31);
      l_31 = (ATerm) ATgetNext((ATermList) j_31);
      {
        ATerm o_31 = NULL;
        t = not_null(k_31);
        {
          ATerm q_31 = NULL;
          t = e_38(t);
          {
            o_31 = t;
            {
              t = not_null(l_31);
              {
                t = f_38(t);
                {
                  q_31 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_31)), not_null(o_31));
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
  ATerm w_31 = NULL;
  w_31 = t;
  v_31 :
  if(((ATermList) w_31 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm d_13;
  d_13 = t;
  {
    ATerm c_3 (ATerm t)
    {
      t = term_e_13;
      t = e_43(t);
      return(t);
    }
    t = try_1(t, c_3);
  }
  t = d_13;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm y_31 = NULL;
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_31));
      return(t);
    }
    ATerm e_3 (ATerm t)
    {
      ATerm f_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_13);
            }
          else
            {
              t = l_13;
              {
                t = e_43(t);
                t = Cons_2(t, _id, e_3);
              }
            }
          LocalPopChoice(k_13);
        }
      else
        {
          t = f_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_3, e_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  ATerm p_13;
  p_13 = t;
  {
    ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
    h_32 = t;
    d_32 :
    if(match_cons(h_32, sym__3))
      {
        i_32 = ATgetArgument(h_32, 0);
        j_32 = ATgetArgument(h_32, 1);
        k_32 = ATgetArgument(h_32, 2);
        {
          if(((e_32 != NULL) && (e_32 != i_32)))
            _fail(i_32);
          else
            e_32 = i_32;
          {
            if(((f_32 != NULL) && (f_32 != j_32)))
              _fail(j_32);
            else
              f_32 = j_32;
            {
              if(((g_32 != NULL) && (g_32 != k_32)))
                _fail(k_32);
              else
                g_32 = k_32;
              t = SSL_table_put(not_null(e_32), not_null(f_32), not_null(g_32));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_43 (ATerm))
{
  ATerm n_32 = NULL;
  ATerm q_13;
  q_13 = t;
  {
    t = term_r_13;
    t = table_put_0(t);
  }
  t = q_13;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_43(t);
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_3);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_z_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm h_3 (ATerm t)
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm o_32 = NULL;
                  o_32 = t;
                  if(((n_32 != NULL) && (n_32 != o_32)))
                    _fail(o_32);
                  else
                    n_32 = o_32;
                  return(t);
                }
                t = Undefined_1(t, i_3);
                return(t);
              }
              t = option_defined_1(t, h_3);
              {
                ATerm a_14;
                a_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_32)), term_b_14));
                  t = printnl_0(t);
                }
                t = a_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_3);
      {
        ATerm d_14;
        d_14 = t;
        {
          t = term_l_11;
          t = table_destroy_0(t);
        }
        t = d_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm), ATerm m_44 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_44(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_3);
  {
    t = store_options_0(t);
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, m_44);
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, k_44);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_44 (ATerm), ATerm g_44 (ATerm))
{
  t = iowrap_3(t, f_44, g_44, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    t = _2(t, _id, c_44);
    return(t);
  }
  t = iowrap_2(t, k_3, _fail);
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

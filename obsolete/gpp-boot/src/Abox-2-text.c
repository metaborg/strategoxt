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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
ATerm term_a_19;
ATerm term_y_18;
ATerm term_r_17;
ATerm term_h_16;
ATerm term_x_14;
ATerm term_r_13;
ATerm term_z_12;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_r_8;
ATerm term_n_8;
ATerm term_g_8;
ATerm term_c_8;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
void init_constant_terms (void)
{
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_q_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, (ATerm) ATempty);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_63 (ATerm));
ATerm topdown_1 (ATerm, ATerm g_59 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm _2 (ATerm, ATerm w_33 (ATerm), ATerm x_33 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_47 (ATerm));
ATerm obsolete_1 (ATerm, ATerm c_48 (ATerm));
ATerm open_file_0 (ATerm);
ATerm option_defined_1 (ATerm, ATerm e_46 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_46 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm f_2 (ATerm), ATerm g_2 (ATerm), ATerm h_2 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_45 (ATerm));
ATerm short_description_1 (ATerm, ATerm f_45 (ATerm));
ATerm Program_1 (ATerm, ATerm f_35 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_35 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_45 (ATerm));
ATerm Option_3 (ATerm, ATerm c_2 (ATerm), ATerm d_2 (ATerm), ATerm e_2 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_45 (ATerm));
ATerm subt_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm a_58 (ATerm));
ATerm separate_by_1 (ATerm, ATerm b_58 (ATerm));
ATerm add_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm i_0 (ATerm), ATerm l_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm u_51 (ATerm));
ATerm H_2 (ATerm, ATerm y_39 (ATerm), ATerm z_39 (ATerm));
ATerm filter_1 (ATerm, ATerm k_50 (ATerm));
ATerm foldr_3 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm), ATerm i_51 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_49 (ATerm), ATerm t_49 (ATerm));
ATerm Fst_0 (ATerm);
ATerm map_1 (ATerm, ATerm k_56 (ATerm));
ATerm Cons_2 (ATerm, ATerm s_41 (ATerm), ATerm t_41 (ATerm));
ATerm at_last_1 (ATerm, ATerm i_57 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm for_3 (ATerm, ATerm j_63 (ATerm), ATerm k_63 (ATerm), ATerm l_63 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm u_39 (ATerm), ATerm v_39 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_56 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm reverse_acc_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm split_at_1 (ATerm, ATerm d_64 (ATerm));
ATerm string_length_p__1 (ATerm, ATerm c_64 (ATerm));
ATerm at_end_1 (ATerm, ATerm y_56 (ATerm));
ATerm conc_0 (ATerm);
ATerm map_to_r_box_0 (ATerm);
ATerm Abox_2_text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, term_f_7));
  {
    t = printnl_0(t);
    {
      t = term_g_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm d_0 (ATerm t)
    {
      ATerm h_7 = t;
      if((PushChoice() == 0))
        {
          ATerm e_0 (ATerm t)
          {
            ATerm m_1 = NULL;
            m_1 = t;
            f_1 :
            if(!(match_cons(m_1, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_7;
        }
      return(t);
    }
    t = _2(t, d_0, _id);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm g_0 (ATerm t)
        {
          ATerm n_1 = NULL,o_1 = NULL;
          n_1 = t;
          h_1 :
          if(match_cons(n_1, sym_Runtime_1))
            {
              o_1 = ATgetArgument(n_1, 0);
              if(((l_1 != NULL) && (l_1 != o_1)))
                _fail(o_1);
              else
                l_1 = o_1;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, g_0);
        return(t);
      }
      t = _2(t, f_0, _id);
      {
        ATerm h_0 (ATerm t)
        {
          ATerm j_0 (ATerm t)
          {
            ATerm p_1 = NULL,q_1 = NULL;
            p_1 = t;
            j_1 :
            if(match_cons(p_1, sym_Program_1))
              {
                q_1 = ATgetArgument(p_1, 0);
                if(((k_1 != NULL) && (k_1 != q_1)))
                  _fail(q_1);
                else
                  k_1 = q_1;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, j_0);
          return(t);
        }
        t = _2(t, h_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_7), not_null(l_1)), term_i_7), not_null(k_1)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = term_k_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  v_1 :
  if(match_cons(w_1, sym__2))
    {
      x_1 = ATgetArgument(w_1, 0);
      y_1 = ATgetArgument(w_1, 1);
      {
        ATerm q_7;
        q_7 = t;
        t = SSL_print(not_null(x_1), not_null(y_1));
        t = q_7;
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
  ATerm j_2 = NULL;
  j_2 = t;
  t = SSL_is_string(not_null(j_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_63(t);
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    t = g_59(t);
    t = _all(t, m_2);
    return(t);
  }
  t = m_2(t);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm k_0 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  t = split_2(t, _id, k_0);
  t = Abox_2_text_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm w_33 (ATerm), ATerm x_33 (ATerm))
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym__2))
    {
      s_2 = ATgetArgument(r_2, 0);
      t_2 = ATgetArgument(r_2, 1);
      {
        ATerm w_2 = NULL;
        t = not_null(s_2);
        {
          ATerm y_2 = NULL;
          t = w_33(t);
          {
            w_2 = t;
            {
              t = not_null(t_2);
              {
                t = x_33(t);
                {
                  y_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_2), not_null(y_2));
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
  ATerm e_3 = NULL;
  e_3 = t;
  t = SSL_ReadFromFile(not_null(e_3));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_3 = NULL;
  ATerm v_7;
  v_7 = t;
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_0 (ATerm t)
        {
          ATerm l_3 = NULL,m_3 = NULL;
          l_3 = t;
          i_3 :
          if(match_cons(l_3, sym_Input_1))
            {
              m_3 = ATgetArgument(l_3, 0);
              if(((k_3 != NULL) && (k_3 != m_3)))
                _fail(m_3);
              else
                k_3 = m_3;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_0);
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        {
          ATerm n_3 = NULL;
          t = term_c_8;
          {
            n_3 = t;
            if(((k_3 != NULL) && (k_3 != n_3)))
              _fail(n_3);
            else
              k_3 = n_3;
          }
        }
      }
  }
  t = v_7;
  {
    ATerm n_0 (ATerm t)
    {
      t = not_null(k_3);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_0);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_47 (ATerm))
{
  ATerm d_8;
  d_8 = t;
  {
    ATerm s_3 = NULL,u_3 = NULL;
    ATerm e_8;
    e_8 = t;
    {
      ATerm t_3 = NULL;
      t = v_47(t);
      {
        t_3 = t;
        if(((s_3 != NULL) && (s_3 != t_3)))
          _fail(t_3);
        else
          s_3 = t_3;
      }
    }
    t = e_8;
    {
      ATerm v_3 = NULL;
      v_3 = t;
      if(((u_3 != NULL) && (u_3 != v_3)))
        _fail(v_3);
      else
        u_3 = v_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_3)), not_null(s_3)));
        t = printnl_0(t);
      }
    }
  }
  t = d_8;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm c_48 (ATerm))
{
  ATerm f_8;
  f_8 = t;
  {
    t = c_48(t);
    {
      ATerm o_0 (ATerm t)
      {
        t = term_g_8;
        return(t);
      }
      t = debug_1(t, o_0);
    }
  }
  t = f_8;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  ATerm k_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
      e_4 = t;
      z_3 :
      if(match_cons(e_4, sym__2))
        {
          f_4 = ATgetArgument(e_4, 0);
          g_4 = ATgetArgument(e_4, 1);
          {
            if(((d_4 != NULL) && (d_4 != f_4)))
              _fail(f_4);
            else
              d_4 = f_4;
            {
              if(((c_4 != NULL) && (c_4 != g_4)))
                _fail(g_4);
              else
                c_4 = g_4;
              t = SSL_open_file(not_null(d_4), not_null(c_4));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_8);
    }
  else
    {
      t = k_8;
      {
        ATerm h_4 = NULL;
        ATerm i_4 = NULL;
        ATerm p_0 (ATerm t)
        {
          t = term_n_8;
          return(t);
        }
        t = obsolete_1(t, p_0);
        {
          h_4 = t;
          {
            if(((d_4 != NULL) && (d_4 != h_4)))
              _fail(h_4);
            else
              d_4 = h_4;
            {
              ATerm o_8;
              o_8 = t;
              {
                ATerm j_4 = NULL;
                t = term_r_8;
                {
                  j_4 = t;
                  if(((i_4 != NULL) && (i_4 != j_4)))
                    _fail(j_4);
                  else
                    i_4 = j_4;
                }
              }
              t = o_8;
              t = SSL_open_file(not_null(d_4), not_null(i_4));
            }
          }
        }
      }
    }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_46 (ATerm))
{
  t = fetch_1(t, e_46);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm p_4 = NULL;
  ATerm w_8;
  w_8 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm q_4 = NULL,r_4 = NULL;
      q_4 = t;
      o_4 :
      if(match_cons(q_4, sym_Program_1))
        {
          r_4 = ATgetArgument(q_4, 0);
          if(((p_4 != NULL) && (p_4 != r_4)))
            _fail(r_4);
          else
            p_4 = r_4;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, q_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_8), not_null(p_4)), term_x_8));
      {
        t = printnl_0(t);
        {
          t = term_k_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_8;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_4 = NULL;
  u_4 = t;
  t_4 :
  if(!(match_cons(u_4, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_46 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_0);
  t = z_46(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm f_2 (ATerm), ATerm g_2 (ATerm), ATerm h_2 (ATerm))
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  a_5 = t;
  y_4 :
  if(match_string(a_5, "register-usage-info"))
    {
      t = register_usage_1(t, h_2);
    }
  else
    {
      if(((ATgetType(a_5) == AT_LIST) && ((ATermList) a_5 != ATempty)))
        {
          b_5 = ATgetFirst((ATermList) a_5);
          c_5 = (ATerm) ATgetNext((ATermList) a_5);
          z_4 :
          if(((ATgetType(c_5) == AT_LIST) && ((ATermList) c_5 != ATempty)))
            {
              d_5 = ATgetFirst((ATermList) c_5);
              e_5 = (ATerm) ATgetNext((ATermList) c_5);
              {
                ATerm i_5 = NULL;
                ATerm i_9;
                i_9 = t;
                {
                  t = not_null(b_5);
                  t = f_2(t);
                }
                t = i_9;
                {
                  ATerm j_5 = NULL;
                  t = not_null(d_5);
                  {
                    t = g_2(t);
                    {
                      j_5 = t;
                      if(((i_5 != NULL) && (i_5 != j_5)))
                        _fail(j_5);
                      else
                        i_5 = j_5;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_5)), not_null(i_5));
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm y_5 = NULL;
        y_5 = t;
        n_5 :
        if(!(match_string(y_5, "-S")))
          {
            if(!(match_string(y_5, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        t = term_n_9;
        return(t);
      }
      ATerm u_0 (ATerm t)
      {
        t = term_q_9;
        return(t);
      }
      t = Option_3(t, s_0, t_0, u_0);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              ATerm z_5 = NULL;
              z_5 = t;
              o_5 :
              if(!(match_string(z_5, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_0 (ATerm t)
            {
              t = term_t_9;
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              t = term_y_9;
              return(t);
            }
            t = Option_3(t, v_0, w_0, x_0);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            {
              ATerm z_9 = t;
              int c_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_0 (ATerm t)
                  {
                    ATerm a_6 = NULL;
                    a_6 = t;
                    p_5 :
                    if(!(match_string(a_6, "-v")))
                      {
                        if(!(match_string(a_6, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm z_0 (ATerm t)
                  {
                    t = term_d_10;
                    return(t);
                  }
                  ATerm a_1 (ATerm t)
                  {
                    t = term_e_10;
                    return(t);
                  }
                  t = Option_3(t, y_0, z_0, a_1);
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = z_9;
                  {
                    ATerm h_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_1 (ATerm t)
                        {
                          ATerm b_6 = NULL;
                          b_6 = t;
                          q_5 :
                          if(!(match_string(b_6, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm c_1 (ATerm t)
                        {
                          ATerm c_6 = NULL;
                          ATerm d_6 = NULL;
                          d_6 = t;
                          if(((c_6 != NULL) && (c_6 != d_6)))
                            _fail(d_6);
                          else
                            c_6 = d_6;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(c_6));
                          return(t);
                        }
                        ATerm d_1 (ATerm t)
                        {
                          t = term_n_10;
                          return(t);
                        }
                        t = ArgOption_3(t, b_1, c_1, d_1);
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = h_10;
                        {
                          ATerm o_10 = t;
                          int p_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_1 (ATerm t)
                              {
                                ATerm e_6 = NULL;
                                e_6 = t;
                                s_5 :
                                if(!(match_string(e_6, "-i")))
                                  {
                                    if(!(match_string(e_6, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm g_1 (ATerm t)
                              {
                                ATerm f_6 = NULL;
                                ATerm g_6 = NULL;
                                g_6 = t;
                                if(((f_6 != NULL) && (f_6 != g_6)))
                                  _fail(g_6);
                                else
                                  f_6 = g_6;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_6));
                                return(t);
                              }
                              ATerm i_1 (ATerm t)
                              {
                                t = term_r_10;
                                return(t);
                              }
                              t = ArgOption_3(t, e_1, g_1, i_1);
                              LocalPopChoice(p_10);
                            }
                          else
                            {
                              t = o_10;
                              {
                                ATerm s_10 = t;
                                int t_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_1 (ATerm t)
                                    {
                                      ATerm h_6 = NULL;
                                      h_6 = t;
                                      u_5 :
                                      if(!(match_string(h_6, "-o")))
                                        {
                                          if(!(match_string(h_6, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm s_1 (ATerm t)
                                    {
                                      ATerm i_6 = NULL;
                                      ATerm j_6 = NULL;
                                      j_6 = t;
                                      if(((i_6 != NULL) && (i_6 != j_6)))
                                        _fail(j_6);
                                      else
                                        i_6 = j_6;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_6));
                                      return(t);
                                    }
                                    ATerm t_1 (ATerm t)
                                    {
                                      t = term_u_10;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, r_1, s_1, t_1);
                                    LocalPopChoice(t_10);
                                  }
                                else
                                  {
                                    t = s_10;
                                    {
                                      ATerm d_11 = t;
                                      int e_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_1 (ATerm t)
                                          {
                                            ATerm k_6 = NULL;
                                            k_6 = t;
                                            w_5 :
                                            if(!(match_string(k_6, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm z_1 (ATerm t)
                                          {
                                            t = term_h_11;
                                            return(t);
                                          }
                                          ATerm a_2 (ATerm t)
                                          {
                                            t = term_i_11;
                                            return(t);
                                          }
                                          t = Option_3(t, u_1, z_1, a_2);
                                          LocalPopChoice(e_11);
                                        }
                                      else
                                        {
                                          t = d_11;
                                          {
                                            ATerm b_2 (ATerm t)
                                            {
                                              ATerm l_6 = NULL;
                                              l_6 = t;
                                              x_5 :
                                              if(!(match_string(l_6, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm i_2 (ATerm t)
                                            {
                                              t = term_l_11;
                                              return(t);
                                            }
                                            ATerm k_2 (ATerm t)
                                            {
                                              t = term_m_11;
                                              return(t);
                                            }
                                            t = Option_3(t, b_2, i_2, k_2);
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
  ATerm q_6 = NULL;
  q_6 = t;
  t = SSL_table_destroy(not_null(q_6));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_6 = NULL;
  u_6 = t;
  t = SSL_exit(not_null(u_6));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_45 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_45 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_35 (ATerm))
{
  ATerm a_7 = NULL,b_7 = NULL;
  a_7 = t;
  z_6 :
  if(match_cons(a_7, sym_Program_1))
    {
      b_7 = ATgetArgument(a_7, 0);
      {
        ATerm d_7 = NULL;
        t = not_null(b_7);
        {
          t = f_35(t);
          {
            d_7 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_7));
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
  ATerm l_7 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm m_7 = NULL;
      m_7 = t;
      if(((l_7 != NULL) && (l_7 != m_7)))
        _fail(m_7);
      else
        l_7 = m_7;
      return(t);
    }
    t = Program_1(t, n_2);
    return(t);
  }
  t = option_defined_1(t, l_2);
  {
    ATerm o_2 (ATerm t)
    {
      ATerm n_7 = NULL;
      ATerm o_7 = NULL;
      t = term_n_11;
      {
        ATerm p_2 (ATerm t)
        {
          t = not_null(l_7);
          return(t);
        }
        t = short_description_1(t, p_2);
        {
          t = concat_strings_0(t);
          {
            o_7 = t;
            if(((n_7 != NULL) && (n_7 != o_7)))
              _fail(o_7);
            else
              n_7 = o_7;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(n_7)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, o_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, term_o_11));
      {
        t = printnl_0(t);
        {
          t = term_t_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_2 (ATerm t)
                {
                  ATerm p_7 = NULL;
                  p_7 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_7)), term_u_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_2);
                {
                  ATerm v_2 (ATerm t)
                  {
                    ATerm r_7 = NULL;
                    ATerm s_7 = NULL;
                    t = term_n_11;
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = not_null(l_7);
                        return(t);
                      }
                      t = long_description_1(t, x_2);
                      {
                        t = concat_strings_0(t);
                        {
                          s_7 = t;
                          if(((r_7 != NULL) && (r_7 != s_7)))
                            _fail(s_7);
                          else
                            r_7 = s_7;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_7)), term_v_11));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_2);
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
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym__2))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      {
        ATerm y_11;
        y_11 = t;
        t = SSL_printnl(not_null(a_8), not_null(b_8));
        t = y_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_35 (ATerm))
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Undefined_1))
    {
      j_8 = ATgetArgument(i_8, 0);
      {
        ATerm l_8 = NULL;
        t = not_null(j_8);
        {
          t = g_35(t);
          {
            l_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_8));
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
  ATerm q_8 = NULL;
  q_8 = t;
  p_8 :
  if(!(match_cons(q_8, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym__2))
    {
      u_8 = ATgetArgument(t_8, 0);
      v_8 = ATgetArgument(t_8, 1);
      t = SSL_table_get(not_null(u_8), not_null(v_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__3))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      f_9 = ATgetArgument(c_9, 2);
      {
        ATerm z_11;
        z_11 = t;
        {
          ATerm j_9 = NULL;
          ATerm k_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(e_9));
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
              k_9 = t;
              if(((j_9 != NULL) && (j_9 != k_9)))
                _fail(k_9);
              else
                j_9 = k_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_9), not_null(e_9), (ATerm) ATinsert(CheckATermList(not_null(j_9)), not_null(f_9)));
            t = table_put_0(t);
          }
        }
        t = z_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_45 (ATerm))
{
  ATerm o_9 = NULL;
  ATerm p_9 = NULL;
  t = term_n_11;
  {
    t = k_45(t);
    {
      p_9 = t;
      if(((o_9 != NULL) && (o_9 != p_9)))
        _fail(p_9);
      else
        o_9 = p_9;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, not_null(o_9));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_2 (ATerm), ATerm d_2 (ATerm), ATerm e_2 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_string(v_9, "register-usage-info"))
    {
      t = register_usage_1(t, e_2);
    }
  else
    {
      if(((ATgetType(v_9) == AT_LIST) && ((ATermList) v_9 != ATempty)))
        {
          w_9 = ATgetFirst((ATermList) v_9);
          x_9 = (ATerm) ATgetNext((ATermList) v_9);
          {
            ATerm a_10 = NULL;
            ATerm g_12;
            g_12 = t;
            {
              t = not_null(w_9);
              t = c_2(t);
            }
            t = g_12;
            {
              ATerm b_10 = NULL;
              t = term_n_11;
              {
                t = d_2(t);
                {
                  b_10 = t;
                  if(((a_10 != NULL) && (a_10 != b_10)))
                    _fail(b_10);
                  else
                    a_10 = b_10;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_9)), not_null(a_10));
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
    ATerm g_10 = NULL;
    g_10 = t;
    f_10 :
    if(!(match_string(g_10, "--help")))
      {
        if(!(match_string(g_10, "-h")))
          {
            if(!(match_string(g_10, "-?")))
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
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  i_10 :
  if(((ATgetType(j_10) == AT_LIST) && ((ATermList) j_10 != ATempty)))
    {
      k_10 = ATgetFirst((ATermList) j_10);
      l_10 = (ATerm) ATgetNext((ATermList) j_10);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_10)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_10)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_45 (ATerm))
{
  ATerm l_12;
  l_12 = t;
  {
    ATerm c_3 (ATerm t)
    {
      t = term_m_12;
      t = i_45(t);
      return(t);
    }
    t = try_1(t, c_3);
  }
  t = l_12;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm q_10 = NULL;
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_10));
      return(t);
    }
    ATerm f_3 (ATerm t)
    {
      ATerm n_12 = t;
      int o_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              {
                t = i_45(t);
                t = Cons_2(t, _id, f_3);
              }
            }
          LocalPopChoice(o_12);
        }
      else
        {
          t = n_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_3, f_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  ATerm v_12;
  v_12 = t;
  {
    ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
    z_10 = t;
    v_10 :
    if(match_cons(z_10, sym__3))
      {
        a_11 = ATgetArgument(z_10, 0);
        b_11 = ATgetArgument(z_10, 1);
        c_11 = ATgetArgument(z_10, 2);
        {
          if(((w_10 != NULL) && (w_10 != a_11)))
            _fail(a_11);
          else
            w_10 = a_11;
          {
            if(((x_10 != NULL) && (x_10 != b_11)))
              _fail(b_11);
            else
              x_10 = b_11;
            {
              if(((y_10 != NULL) && (y_10 != c_11)))
                _fail(c_11);
              else
                y_10 = c_11;
              t = SSL_table_put(not_null(w_10), not_null(x_10), not_null(y_10));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_45 (ATerm))
{
  ATerm f_11 = NULL;
  ATerm w_12;
  w_12 = t;
  {
    t = term_z_12;
    t = table_put_0(t);
  }
  t = w_12;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_45(t);
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_3);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_k_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            {
              ATerm j_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm g_11 = NULL;
                  g_11 = t;
                  if(((f_11 != NULL) && (f_11 != g_11)))
                    _fail(g_11);
                  else
                    f_11 = g_11;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, j_3);
              {
                ATerm h_13;
                h_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_11)), term_r_13));
                  t = printnl_0(t);
                }
                t = h_13;
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_3);
      {
        ATerm s_13;
        s_13 = t;
        {
          t = term_p_11;
          t = table_destroy_0(t);
        }
        t = s_13;
      }
    }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm k_11 = NULL,r_11 = NULL,s_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym__2))
    {
      r_11 = ATgetArgument(k_11, 0);
      s_11 = ATgetArgument(k_11, 1);
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(r_11), not_null(s_11));
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = SSL_subtr(not_null(r_11), not_null(s_11));
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
  ATerm x_11 = NULL;
  x_11 = t;
  w_11 :
  if(((ATermList) x_11 == ATempty))
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
ATerm Sep_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(((ATgetType(b_12) == AT_LIST) && ((ATermList) b_12 != ATempty)))
    {
      c_12 = ATgetFirst((ATermList) b_12);
      d_12 = (ATerm) ATgetNext((ATermList) b_12);
      {
        ATerm j_12 = NULL;
        ATerm k_12 = NULL;
        t = term_n_11;
        {
          t = a_58(t);
          {
            k_12 = t;
            if(((j_12 != NULL) && (j_12 != k_12)))
              _fail(k_12);
            else
              j_12 = k_12;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_12)), not_null(c_12)), not_null(j_12));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm p_3 (ATerm t)
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
              {
                t = Cons_2(t, _id, p_3);
                t = Sep_1(t, b_58);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, p_3);
      }
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_12), not_null(s_12));
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = SSL_addr(not_null(r_12), not_null(s_12));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  x_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      y_12 :
      if(((ATermList) b_13 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_13));
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
ATerm Cons_T_2 (ATerm t, ATerm i_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  m_13 = t;
  k_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      q_13 = ATgetArgument(m_13, 1);
      l_13 :
      if(((ATgetType(n_13) == AT_LIST) && ((ATermList) n_13 != ATempty)))
        {
          o_13 = ATgetFirst((ATermList) n_13);
          p_13 = (ATerm) ATgetNext((ATermList) n_13);
          {
            ATerm d_14 = NULL,e_14 = NULL,h_14 = NULL,i_14 = NULL;
            ATerm j_14 = NULL,k_14 = NULL,m_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(q_13));
            {
              t = i_0(t);
              {
                j_14 = t;
                j_13 :
                if(match_cons(j_14, sym__2))
                  {
                    k_14 = ATgetArgument(j_14, 0);
                    m_14 = ATgetArgument(j_14, 1);
                    {
                      ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
                      if(((h_14 != NULL) && (h_14 != k_14)))
                        _fail(k_14);
                      else
                        h_14 = k_14;
                      {
                        if(((d_14 != NULL) && (d_14 != m_14)))
                          _fail(m_14);
                        else
                          d_14 = m_14;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(d_14));
                          {
                            t = l_0(t);
                            {
                              n_14 = t;
                              i_13 :
                              if(match_cons(n_14, sym__2))
                                {
                                  o_14 = ATgetArgument(n_14, 0);
                                  p_14 = ATgetArgument(n_14, 1);
                                  {
                                    if(((i_14 != NULL) && (i_14 != o_14)))
                                      _fail(o_14);
                                    else
                                      i_14 = o_14;
                                    if(((e_14 != NULL) && (e_14 != p_14)))
                                      _fail(p_14);
                                    else
                                      e_14 = p_14;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_14)), not_null(h_14)), not_null(e_14));
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
ATerm thread_map_1 (ATerm t, ATerm u_51 (ATerm))
{
  ATerm v_14 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, u_51, v_14);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = v_14(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm y_39 (ATerm), ATerm z_39 (ATerm))
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_H_2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        ATerm f_15 = NULL;
        t = not_null(b_15);
        {
          ATerm h_15 = NULL;
          t = y_39(t);
          {
            f_15 = t;
            {
              t = not_null(c_15);
              {
                t = z_39(t);
                {
                  h_15 = t;
                  t = (ATerm) ATmakeAppl(sym_H_2, not_null(f_15), not_null(h_15));
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
ATerm filter_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm l_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              t = filter_1(t, k_50);
              return(t);
            }
            t = Cons_2(t, k_50, q_3);
            LocalPopChoice(q_14);
          }
        else
          {
            t = l_14;
            {
              ATerm o_15 = NULL,p_15 = NULL,s_15 = NULL;
              o_15 = t;
              n_15 :
              if(((ATgetType(o_15) == AT_LIST) && ((ATermList) o_15 != ATempty)))
                {
                  p_15 = ATgetFirst((ATermList) o_15);
                  s_15 = (ATerm) ATgetNext((ATermList) o_15);
                  {
                    t = not_null(s_15);
                    t = filter_1(t, k_50);
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
ATerm foldr_3 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm), ATerm i_51 (ATerm))
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_51(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
        e_16 = t;
        d_16 :
        if(((ATgetType(e_16) == AT_LIST) && ((ATermList) e_16 != ATempty)))
          {
            f_16 = ATgetFirst((ATermList) e_16);
            g_16 = (ATerm) ATgetNext((ATermList) e_16);
            {
              ATerm j_16 = NULL,l_16 = NULL;
              ATerm t_14;
              t_14 = t;
              {
                ATerm k_16 = NULL;
                t = not_null(f_16);
                {
                  t = i_51(t);
                  {
                    k_16 = t;
                    if(((j_16 != NULL) && (j_16 != k_16)))
                      _fail(k_16);
                    else
                      j_16 = k_16;
                  }
                }
              }
              t = t_14;
              {
                ATerm m_16 = NULL;
                t = not_null(g_16);
                {
                  t = foldr_3(t, g_51, h_51, i_51);
                  {
                    m_16 = t;
                    if(((l_16 != NULL) && (l_16 != m_16)))
                      _fail(m_16);
                    else
                      l_16 = m_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), not_null(l_16));
                  t = h_51(t);
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
  ATerm r_3 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_g_7;
    return(t);
  }
  t = foldr_3(t, r_3, add_0, w_3);
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
  ATerm t_16 = NULL;
  t_16 = t;
  q_16 :
  if(!(match_cons(t_16, sym_HS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm w_16 = NULL,a_17 = NULL;
  ATerm u_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_16 = NULL;
          z_16 = t;
          if(((w_16 != NULL) && (w_16 != z_16)))
            _fail(z_16);
          else
            w_16 = z_16;
          return(t);
        }
        t = SOpt_2(t, HS_0, y_3);
        return(t);
      }
      t = fetch_1(t, x_3);
      {
        t = not_null(w_16);
        t = string_to_int_0(t);
      }
      LocalPopChoice(w_14);
    }
  else
    {
      t = u_14;
      t = term_g_7;
    }
  {
    a_17 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), term_x_14);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_49 (ATerm), ATerm t_49 (ATerm))
{
  ATerm g_17 = NULL,i_17 = NULL;
  ATerm y_14;
  y_14 = t;
  {
    ATerm h_17 = NULL;
    t = s_49(t);
    {
      h_17 = t;
      if(((g_17 != NULL) && (g_17 != h_17)))
        _fail(h_17);
      else
        g_17 = h_17;
    }
  }
  t = y_14;
  {
    ATerm j_17 = NULL;
    t = t_49(t);
    {
      j_17 = t;
      if(((i_17 != NULL) && (i_17 != j_17)))
        _fail(j_17);
      else
        i_17 = j_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(i_17));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm u_17 = NULL;
  ATerm w_17 = NULL,y_17 = NULL;
  u_17 = t;
  {
    ATerm z_17 = NULL;
    ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
    t = not_null(u_17);
    {
      z_17 = t;
      {
        t = SSL_explode_term(not_null(z_17));
        {
          c_18 = t;
          p_17 :
          if(match_cons(c_18, sym__2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              q_17 :
              if(match_string(d_18, ""))
                {
                  t_17 :
                  if(((ATgetType(e_18) == AT_LIST) && ((ATermList) e_18 != ATempty)))
                    {
                      f_18 = ATgetFirst((ATermList) e_18);
                      g_18 = (ATerm) ATgetNext((ATermList) e_18);
                      {
                        if(((y_17 != NULL) && (y_17 != f_18)))
                          _fail(f_18);
                        else
                          y_17 = f_18;
                        if(((w_17 != NULL) && (w_17 != g_18)))
                          _fail(g_18);
                        else
                          w_17 = g_18;
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
    t = not_null(y_17);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm k_18 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = Cons_2(t, k_56, k_18);
      }
    return(t);
  }
  t = k_18(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_41 (ATerm), ATerm t_41 (ATerm))
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(((ATgetType(p_18) == AT_LIST) && ((ATermList) p_18 != ATempty)))
    {
      q_18 = ATgetFirst((ATermList) p_18);
      r_18 = (ATerm) ATgetNext((ATermList) p_18);
      {
        ATerm u_18 = NULL;
        t = not_null(q_18);
        {
          ATerm w_18 = NULL;
          t = s_41(t);
          {
            u_18 = t;
            {
              t = not_null(r_18);
              {
                t = t_41(t);
                {
                  w_18 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_18)), not_null(u_18));
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
ATerm at_last_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm b_19 (ATerm t)
  {
    ATerm g_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = i_57(t);
        LocalPopChoice(i_15);
      }
    else
      {
        t = g_15;
        t = Cons_2(t, _id, b_19);
      }
    return(t);
  }
  t = b_19(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
        h_19 = t;
        g_19 :
        if(((ATgetType(h_19) == AT_LIST) && ((ATermList) h_19 != ATempty)))
          {
            i_19 = ATgetFirst((ATermList) h_19);
            j_19 = (ATerm) ATgetNext((ATermList) h_19);
            {
              t = not_null(i_19);
              {
                ATerm a_4 (ATerm t)
                {
                  t = not_null(j_19);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_4);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym__2))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      {
        ATerm l_15;
        l_15 = t;
        {
          ATerm m_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_19), not_null(s_19));
              LocalPopChoice(q_15);
            }
          else
            {
              t = m_15;
              t = SSL_gtr(not_null(r_19), not_null(s_19));
            }
        }
        t = l_15;
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
  ATerm y_19 = NULL;
  ATerm r_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
      z_19 = t;
      x_19 :
      if(match_cons(z_19, sym__2))
        {
          a_20 = ATgetArgument(z_19, 0);
          b_20 = ATgetArgument(z_19, 1);
          {
            if(((y_19 != NULL) && (y_19 != a_20)))
              _fail(a_20);
            else
              y_19 = a_20;
            if(((y_19 != NULL) && (y_19 != b_20)))
              _fail(b_20);
            else
              y_19 = b_20;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_15);
    }
  else
    {
      t = r_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm d_20 (ATerm t)
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_63(t);
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        {
          t = h_63(t);
          t = d_20(t);
        }
      }
    return(t);
  }
  t = d_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm j_63 (ATerm), ATerm k_63 (ATerm), ATerm l_63 (ATerm))
{
  t = j_63(t);
  t = while_not_2(t, k_63, l_63);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
    m_20 = t;
    f_20 :
    if(match_cons(m_20, sym__2))
      {
        n_20 = ATgetArgument(m_20, 0);
        o_20 = ATgetArgument(m_20, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_20), not_null(o_20), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
    r_20 = t;
    h_20 :
    if(match_cons(r_20, sym__3))
      {
        s_20 = ATgetArgument(r_20, 0);
        t_20 = ATgetArgument(r_20, 1);
        u_20 = ATgetArgument(r_20, 2);
        i_20 :
        if(match_int(s_20, 0))
          {
            t = not_null(u_20);
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
  ATerm l_4 (ATerm t)
  {
    ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
    x_20 = t;
    l_20 :
    if(match_cons(x_20, sym__3))
      {
        y_20 = ATgetArgument(x_20, 0);
        z_20 = ATgetArgument(x_20, 1);
        a_21 = ATgetArgument(x_20, 2);
        {
          ATerm e_21 = NULL;
          ATerm w_15;
          w_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), term_g_7);
            t = geq_0(t);
          }
          t = w_15;
          {
            ATerm f_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), term_g_7);
            {
              t = subt_0(t);
              {
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_21), not_null(z_20), (ATerm) ATinsert(CheckATermList(not_null(a_21)), not_null(z_20)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, b_4, k_4, l_4);
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
  ATerm l_21 = NULL;
  l_21 = t;
  k_21 :
  if(!(match_cons(l_21, sym_IS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm o_21 = NULL,q_21 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          ATerm p_21 = NULL;
          p_21 = t;
          if(((o_21 != NULL) && (o_21 != p_21)))
            _fail(p_21);
          else
            o_21 = p_21;
          return(t);
        }
        t = SOpt_2(t, IS_0, n_4);
        return(t);
      }
      t = fetch_1(t, m_4);
      {
        t = not_null(o_21);
        t = string_to_int_0(t);
      }
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      t = term_k_7;
    }
  {
    q_21 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_21), term_x_14);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = SSL_string_to_int(not_null(v_21));
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm z_21 = NULL;
  z_21 = t;
  y_21 :
  if(!(match_cons(z_21, sym_VS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm u_39 (ATerm), ATerm v_39 (ATerm))
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_SOpt_2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      {
        ATerm j_22 = NULL;
        t = not_null(f_22);
        {
          ATerm l_22 = NULL;
          t = u_39(t);
          {
            j_22 = t;
            {
              t = not_null(g_22);
              {
                t = v_39(t);
                {
                  l_22 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(j_22), not_null(l_22));
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
ATerm fetch_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm q_22 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_56, _id);
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        t = Cons_2(t, _id, q_22);
      }
    return(t);
  }
  t = q_22(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm w_22 = NULL,y_22 = NULL;
  ATerm a_23 = NULL;
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 (ATerm t)
      {
        ATerm v_4 (ATerm t)
        {
          ATerm x_22 = NULL;
          x_22 = t;
          if(((w_22 != NULL) && (w_22 != x_22)))
            _fail(x_22);
          else
            w_22 = x_22;
          return(t);
        }
        t = SOpt_2(t, VS_0, v_4);
        return(t);
      }
      t = fetch_1(t, s_4);
      {
        t = not_null(w_22);
        t = string_to_int_0(t);
      }
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      t = term_k_7;
    }
  {
    y_22 = t;
    {
      ATerm b_23 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), term_g_7);
      {
        t = add_0(t);
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), term_h_16);
        t = copy_char_0(t);
      }
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  g_23 :
  if(((ATgetType(h_23) == AT_LIST) && ((ATermList) h_23 != ATempty)))
    {
      i_23 = ATgetFirst((ATermList) h_23);
      j_23 = (ATerm) ATgetNext((ATermList) h_23);
      t = not_null(j_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  o_23 :
  if(((ATgetType(q_23) == AT_LIST) && ((ATermList) q_23 != ATempty)))
    {
      r_23 = ATgetFirst((ATermList) q_23);
      s_23 = (ATerm) ATgetNext((ATermList) q_23);
      p_23 :
      if(((ATermList) s_23 == ATempty))
        {
          t = not_null(r_23);
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
  ATerm i_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = i_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_23 = NULL;
  x_23 = t;
  t = SSL_implode_string(not_null(x_23));
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  r_24 = t;
  o_24 :
  if(((ATgetType(r_24) == AT_LIST) && ((ATermList) r_24 != ATempty)))
    {
      p_24 = ATgetFirst((ATermList) r_24);
      q_24 = (ATerm) ATgetNext((ATermList) r_24);
      {
        ATerm u_24 = NULL;
        t = not_null(q_24);
        {
          ATerm o_16;
          o_16 = t;
          {
            ATerm v_24 = NULL,x_24 = NULL,z_24 = NULL;
            ATerm p_16;
            p_16 = t;
            {
              ATerm w_24 = NULL;
              t = c_0(t);
              {
                w_24 = t;
                if(((v_24 != NULL) && (v_24 != w_24)))
                  _fail(w_24);
                else
                  v_24 = w_24;
              }
            }
            t = p_16;
            {
              ATerm y_24 = NULL;
              t = not_null(p_24);
              {
                t = b_0(t);
                {
                  y_24 = t;
                  if(((x_24 != NULL) && (x_24 != y_24)))
                    _fail(y_24);
                  else
                    x_24 = y_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_24)), not_null(x_24));
                {
                  z_24 = t;
                  if(((u_24 != NULL) && (u_24 != z_24)))
                    _fail(z_24);
                  else
                    u_24 = z_24;
                }
              }
            }
          }
          t = o_16;
          {
            ATerm w_4 (ATerm t)
            {
              t = not_null(u_24);
              return(t);
            }
            t = reverse_acc_2(t, b_0, w_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) r_24 == ATempty))
        {
          {
            t = term_n_11;
            t = c_0(t);
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
  ATerm x_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_4);
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = SSL_explode_string(not_null(g_25));
  return(t);
}
ATerm split_at_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm q_25 = NULL;
  ATerm s_25 = NULL;
  q_25 = t;
  {
    ATerm t_25 = NULL;
    t = not_null(q_25);
    {
      t = explode_string_0(t);
      {
        t = reverse_0(t);
        {
          t_25 = t;
          if(((s_25 != NULL) && (s_25 != t_25)))
            _fail(t_25);
          else
            s_25 = t_25;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(s_25), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm o_26 (ATerm t)
        {
          ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
          u_25 = t;
          o_25 :
          if(match_cons(u_25, sym__3))
            {
              v_25 = ATgetArgument(u_25, 0);
              y_25 = ATgetArgument(u_25, 1);
              z_25 = ATgetArgument(u_25, 2);
              p_25 :
              if(((ATermList) v_25 == ATempty))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_25)), not_null(y_25));
                }
              else
                {
                  if(((ATgetType(v_25) == AT_LIST) && ((ATermList) v_25 != ATempty)))
                    {
                      w_25 = ATgetFirst((ATermList) v_25);
                      x_25 = (ATerm) ATgetNext((ATermList) v_25);
                      {
                        ATerm r_16 = t;
                        int s_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = not_null(w_25);
                            {
                              t = d_64(t);
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_25), (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(not_null(z_25)), not_null(y_25)));
                                t = o_26(t);
                              }
                            }
                            LocalPopChoice(s_16);
                          }
                        else
                          {
                            t = r_16;
                            {
                              t = (ATerm) ATmakeAppl(sym__3, not_null(x_25), (ATerm)ATinsert(CheckATermList(not_null(y_25)), not_null(w_25)), not_null(z_25));
                              t = o_26(t);
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
        t = o_26(t);
        t = map_1(t, implode_string_0);
      }
    }
  }
  return(t);
}
ATerm string_length_p__1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm t_26 = NULL;
    t_26 = t;
    s_26 :
    if(!(match_int(t_26, 10)))
      {
        _fail(t);
      }
    return(t);
  }
  t = split_at_1(t, f_5);
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        {
          t = last_0(t);
          t = string_length_0(t);
        }
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        {
          t = last_0(t);
          {
            t = string_length_0(t);
            {
              t = split_2(t, _id, c_64);
              t = subt_0(t);
            }
          }
        }
      }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_56 (ATerm))
{
  ATerm u_26 (ATerm t)
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_26);
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        {
          t = Nil_0(t);
          t = y_56(t);
        }
      }
    return(t);
  }
  t = u_26(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym__2))
    {
      y_26 = ATgetArgument(x_26, 0);
      z_26 = ATgetArgument(x_26, 1);
      {
        t = not_null(y_26);
        {
          ATerm g_5 (ATerm t)
          {
            t = not_null(z_26);
            return(t);
          }
          t = at_end_1(t, g_5);
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
  ATerm s_27 = NULL;
  s_27 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, not_null(s_27), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm n_29 (ATerm t)
      {
        ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
        ATerm p_29 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(a_28))));
          t = conc_0(t);
          return(t);
        }
        ATerm q_29 (ATerm t)
        {
          ATerm u_28 = NULL;
          ATerm v_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(u_27), not_null(v_27))));
          {
            t = conc_0(t);
            {
              v_28 = t;
              if(((u_28 != NULL) && (u_28 != v_28)))
                _fail(v_28);
              else
                u_28 = v_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_27), (ATerm)ATempty, not_null(u_28));
            t = n_29(t);
          }
          return(t);
        }
        ATerm r_29 (ATerm t)
        {
          ATerm c_29 = NULL;
          ATerm d_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(u_27), not_null(v_27))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(a_28))));
          {
            t = conc_0(t);
            {
              d_29 = t;
              if(((c_29 != NULL) && (c_29 != d_29)))
                _fail(d_29);
              else
                c_29 = d_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_27), (ATerm)ATempty, not_null(c_29));
            t = n_29(t);
          }
          return(t);
        }
        ATerm v_29 (ATerm t)
        {
          ATerm k_29 = NULL;
          ATerm l_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), (ATerm) ATinsert(ATempty, not_null(y_27)));
          {
            t = conc_0(t);
            {
              l_29 = t;
              if(((k_29 != NULL) && (k_29 != l_29)))
                _fail(l_29);
              else
                k_29 = l_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_27), not_null(k_29), not_null(b_28));
            t = n_29(t);
          }
          return(t);
        }
        w_27 = t;
        m_27 :
        if(match_cons(w_27, sym__3))
          {
            x_27 = ATgetArgument(w_27, 0);
            a_28 = ATgetArgument(w_27, 1);
            b_28 = ATgetArgument(w_27, 2);
            n_27 :
            if(((ATermList) x_27 == ATempty))
              {
                o_27 :
                if(((ATermList) a_28 == ATempty))
                  {
                    {
                      ATerm b_17 = t;
                      int c_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(b_28);
                          LocalPopChoice(c_17);
                        }
                      else
                        {
                          t = b_17;
                          t = p_29(t);
                        }
                    }
                  }
                else
                  {
                    t = p_29(t);
                  }
              }
            else
              {
                if(((ATgetType(x_27) == AT_LIST) && ((ATermList) x_27 != ATempty)))
                  {
                    y_27 = ATgetFirst((ATermList) x_27);
                    z_27 = (ATerm) ATgetNext((ATermList) x_27);
                    p_27 :
                    if(((ATermList) a_28 == ATempty))
                      {
                        q_27 :
                        if(match_cons(y_27, sym_R_2))
                          {
                            u_27 = ATgetArgument(y_27, 0);
                            v_27 = ATgetArgument(y_27, 1);
                            {
                              ATerm d_17 = t;
                              int e_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = q_29(t);
                                  LocalPopChoice(e_17);
                                }
                              else
                                {
                                  t = d_17;
                                  {
                                    ATerm f_17 = t;
                                    int k_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = r_29(t);
                                        LocalPopChoice(k_17);
                                      }
                                    else
                                      {
                                        t = f_17;
                                        t = v_29(t);
                                      }
                                  }
                                }
                            }
                          }
                        else
                          {
                            t = v_29(t);
                          }
                      }
                    else
                      {
                        r_27 :
                        if(match_cons(y_27, sym_R_2))
                          {
                            u_27 = ATgetArgument(y_27, 0);
                            v_27 = ATgetArgument(y_27, 1);
                            {
                              ATerm l_17 = t;
                              int m_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = r_29(t);
                                  LocalPopChoice(m_17);
                                }
                              else
                                {
                                  t = l_17;
                                  t = v_29(t);
                                }
                            }
                          }
                        else
                          {
                            t = v_29(t);
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
      t = n_29(t);
    }
  }
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
      x_34 = t;
      h_34 :
      if(match_cons(x_34, sym__2))
        {
          y_34 = ATgetArgument(x_34, 0);
          b_35 = ATgetArgument(x_34, 1);
          i_34 :
          if(((ATermList) y_34 == ATempty))
            {
              t = (ATerm) ATmakeAppl(sym__2, term_r_17, not_null(b_35));
            }
          else
            {
              if(((ATgetType(y_34) == AT_LIST) && ((ATermList) y_34 != ATempty)))
                {
                  z_34 = ATgetFirst((ATermList) y_34);
                  a_35 = (ATerm) ATgetNext((ATermList) y_34);
                  j_34 :
                  if(((ATermList) a_35 == ATempty))
                    {
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), not_null(b_35));
                        t = Abox_2_text_0(t);
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(y_34, sym_ALT_2))
                    {
                      z_34 = ATgetArgument(y_34, 0);
                      a_35 = ATgetArgument(y_34, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), not_null(b_35));
                        t = Abox_2_text_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(y_34, sym_A_3))
                        {
                          z_34 = ATgetArgument(y_34, 0);
                          a_35 = ATgetArgument(y_34, 1);
                          t_34 = ATgetArgument(y_34, 2);
                          {
                            ATerm n_35 = NULL;
                            ATerm o_35 = NULL;
                            t = not_null(t_34);
                            {
                              t = map_to_r_box_0(t);
                              {
                                o_35 = t;
                                if(((n_35 != NULL) && (n_35 != o_35)))
                                  _fail(o_35);
                                else
                                  n_35 = o_35;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(a_35), not_null(n_35)), not_null(b_35));
                              t = Abox_2_text_0(t);
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(y_34, sym_R_2))
                            {
                              z_34 = ATgetArgument(y_34, 0);
                              a_35 = ATgetArgument(y_34, 1);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(z_34), not_null(a_35)), not_null(b_35));
                                t = Abox_2_text_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(y_34, sym_HV_2))
                                {
                                  z_34 = ATgetArgument(y_34, 0);
                                  a_35 = ATgetArgument(y_34, 1);
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(z_34), not_null(a_35)), not_null(b_35));
                                    t = Abox_2_text_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(y_34, sym_FBOX_2))
                                    {
                                      z_34 = ATgetArgument(y_34, 0);
                                      a_35 = ATgetArgument(y_34, 1);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_35), not_null(b_35));
                                        t = Abox_2_text_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(y_34, sym_C_2))
                                        {
                                          z_34 = ATgetArgument(y_34, 0);
                                          a_35 = ATgetArgument(y_34, 1);
                                          k_34 :
                                          if(((ATgetType(a_35) == AT_LIST) && ((ATermList) a_35 != ATempty)))
                                            {
                                              u_34 = ATgetFirst((ATermList) a_35);
                                              w_34 = (ATerm) ATgetNext((ATermList) a_35);
                                              l_34 :
                                              if(match_cons(u_34, sym_S_1))
                                                {
                                                  v_34 = ATgetArgument(u_34, 0);
                                                  m_34 :
                                                  if(((ATermList) w_34 == ATempty))
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_34), not_null(b_35));
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
                                          if(match_cons(y_34, sym_S_1))
                                            {
                                              z_34 = ATgetArgument(y_34, 0);
                                              {
                                                ATerm b_36 = NULL;
                                                ATerm c_36 = NULL,e_36 = NULL;
                                                ATerm d_36 = NULL;
                                                t = not_null(z_34);
                                                {
                                                  ATerm h_5 (ATerm t)
                                                  {
                                                    t = not_null(b_35);
                                                    return(t);
                                                  }
                                                  t = string_length_p__1(t, h_5);
                                                  {
                                                    d_36 = t;
                                                    if(((c_36 != NULL) && (c_36 != d_36)))
                                                      _fail(d_36);
                                                    else
                                                      c_36 = d_36;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), not_null(c_36));
                                                  {
                                                    t = add_0(t);
                                                    {
                                                      e_36 = t;
                                                      if(((b_36 != NULL) && (b_36 != e_36)))
                                                        _fail(e_36);
                                                      else
                                                        b_36 = e_36;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), not_null(b_36));
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(y_34, sym_V_2))
                                                {
                                                  z_34 = ATgetArgument(y_34, 0);
                                                  a_35 = ATgetArgument(y_34, 1);
                                                  {
                                                    ATerm i_36 = NULL;
                                                    t = not_null(z_34);
                                                    {
                                                      ATerm k_36 = NULL;
                                                      t = Vspace_0(t);
                                                      {
                                                        i_36 = t;
                                                        {
                                                          t = not_null(z_34);
                                                          {
                                                            ATerm m_36 = NULL;
                                                            t = Ispace_0(t);
                                                            {
                                                              k_36 = t;
                                                              {
                                                                ATerm o_36 = NULL,q_36 = NULL;
                                                                t = string_length_0(t);
                                                                {
                                                                  m_36 = t;
                                                                  {
                                                                    ATerm p_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), term_x_14);
                                                                    {
                                                                      t = copy_char_0(t);
                                                                      {
                                                                        p_36 = t;
                                                                        if(((o_36 != NULL) && (o_36 != p_36)))
                                                                          _fail(p_36);
                                                                        else
                                                                          o_36 = p_36;
                                                                      }
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_36)), not_null(k_36)), not_null(i_36));
                                                                      {
                                                                        ATerm s_36 = NULL;
                                                                        t = concat_strings_0(t);
                                                                        {
                                                                          q_36 = t;
                                                                          {
                                                                            t = not_null(a_35);
                                                                            {
                                                                              ATerm k_5 (ATerm t)
                                                                              {
                                                                                ATerm s_17 = t;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Nil_0(t);
                                                                                    PopChoice();
                                                                                    _fail(t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_17;
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = filter_1(t, k_5);
                                                                              {
                                                                                ATerm v_17 = t;
                                                                                int x_17 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Nil_0(t);
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_35));
                                                                                    LocalPopChoice(x_17);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_17;
                                                                                    {
                                                                                      ATerm l_5 (ATerm t)
                                                                                      {
                                                                                        ATerm t_36 = NULL;
                                                                                        t_36 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(b_35));
                                                                                          t = Abox_2_text_0(t);
                                                                                        }
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm m_5 (ATerm t)
                                                                                      {
                                                                                        ATerm r_5 (ATerm t)
                                                                                        {
                                                                                          ATerm v_36 = NULL;
                                                                                          ATerm x_36 = NULL;
                                                                                          v_36 = t;
                                                                                          {
                                                                                            ATerm y_36 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), not_null(m_36));
                                                                                            {
                                                                                              t = add_0(t);
                                                                                              {
                                                                                                y_36 = t;
                                                                                                if(((x_36 != NULL) && (x_36 != y_36)))
                                                                                                  _fail(y_36);
                                                                                                else
                                                                                                  x_36 = y_36;
                                                                                              }
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_36), not_null(x_36));
                                                                                              t = Abox_2_text_0(t);
                                                                                            }
                                                                                          }
                                                                                          return(t);
                                                                                        }
                                                                                        t = map_1(t, r_5);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Cons_2(t, l_5, m_5);
                                                                                      {
                                                                                        ATerm t_5 (ATerm t)
                                                                                        {
                                                                                          ATerm v_5 (ATerm t)
                                                                                          {
                                                                                            ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
                                                                                            z_36 = t;
                                                                                            f_31 :
                                                                                            if(match_cons(z_36, sym__2))
                                                                                              {
                                                                                                a_37 = ATgetArgument(z_36, 0);
                                                                                                b_37 = ATgetArgument(z_36, 1);
                                                                                                if(((s_36 != NULL) && (s_36 != b_37)))
                                                                                                  _fail(b_37);
                                                                                                else
                                                                                                  s_36 = b_37;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          t = Cons_2(t, v_5, Nil_0);
                                                                                          return(t);
                                                                                        }
                                                                                        t = at_last_1(t, t_5);
                                                                                        {
                                                                                          t = map_1(t, Fst_0);
                                                                                          {
                                                                                            ATerm m_6 (ATerm t)
                                                                                            {
                                                                                              t = not_null(q_36);
                                                                                              return(t);
                                                                                            }
                                                                                            t = separate_by_1(t, m_6);
                                                                                            {
                                                                                              ATerm n_6 (ATerm t)
                                                                                              {
                                                                                                t = not_null(s_36);
                                                                                                return(t);
                                                                                              }
                                                                                              t = split_2(t, _id, n_6);
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
                                                  if(match_cons(y_34, sym_H_2))
                                                    {
                                                      z_34 = ATgetArgument(y_34, 0);
                                                      a_35 = ATgetArgument(y_34, 1);
                                                      {
                                                        ATerm f_37 = NULL;
                                                        t = not_null(z_34);
                                                        {
                                                          ATerm h_37 = NULL;
                                                          t = Hspace_0(t);
                                                          {
                                                            f_37 = t;
                                                            {
                                                              ATerm j_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
                                                              t = string_length_0(t);
                                                              {
                                                                h_37 = t;
                                                                {
                                                                  ATerm k_37 = NULL;
                                                                  t = not_null(a_35);
                                                                  {
                                                                    ATerm o_6 (ATerm t)
                                                                    {
                                                                      ATerm a_18 = t;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          ATerm b_18 = t;
                                                                          int h_18 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Nil_0(t);
                                                                              LocalPopChoice(h_18);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_18;
                                                                              t = H_2(t, Nil_0, Nil_0);
                                                                            }
                                                                          PopChoice();
                                                                          _fail(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_18;
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = filter_1(t, o_6);
                                                                    {
                                                                      k_37 = t;
                                                                      if(((j_37 != NULL) && (j_37 != k_37)))
                                                                        _fail(k_37);
                                                                      else
                                                                        j_37 = k_37;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_37), not_null(b_35));
                                                                    {
                                                                      ATerm p_6 (ATerm t)
                                                                      {
                                                                        ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
                                                                        l_37 = t;
                                                                        c_34 :
                                                                        if(match_cons(l_37, sym__2))
                                                                          {
                                                                            m_37 = ATgetArgument(l_37, 0);
                                                                            n_37 = ATgetArgument(l_37, 1);
                                                                            {
                                                                              ATerm q_37 = NULL,r_37 = NULL,v_37 = NULL;
                                                                              ATerm i_18;
                                                                              i_18 = t;
                                                                              {
                                                                                ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), not_null(n_37));
                                                                                {
                                                                                  t = Abox_2_text_0(t);
                                                                                  {
                                                                                    s_37 = t;
                                                                                    a_34 :
                                                                                    if(match_cons(s_37, sym__2))
                                                                                      {
                                                                                        t_37 = ATgetArgument(s_37, 0);
                                                                                        u_37 = ATgetArgument(s_37, 1);
                                                                                        {
                                                                                          if(((q_37 != NULL) && (q_37 != t_37)))
                                                                                            _fail(t_37);
                                                                                          else
                                                                                            q_37 = t_37;
                                                                                          if(((r_37 != NULL) && (r_37 != u_37)))
                                                                                            _fail(u_37);
                                                                                          else
                                                                                            r_37 = u_37;
                                                                                        }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                }
                                                                              }
                                                                              t = i_18;
                                                                              {
                                                                                ATerm w_37 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(r_37));
                                                                                {
                                                                                  t = add_0(t);
                                                                                  {
                                                                                    w_37 = t;
                                                                                    if(((v_37 != NULL) && (v_37 != w_37)))
                                                                                      _fail(w_37);
                                                                                    else
                                                                                      v_37 = w_37;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_37), not_null(v_37));
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                        return(t);
                                                                      }
                                                                      t = thread_map_1(t, p_6);
                                                                      {
                                                                        x_37 = t;
                                                                        g_34 :
                                                                        if(match_cons(x_37, sym__2))
                                                                          {
                                                                            y_37 = ATgetArgument(x_37, 0);
                                                                            z_37 = ATgetArgument(x_37, 1);
                                                                            {
                                                                              ATerm c_38 = NULL;
                                                                              ATerm d_38 = NULL;
                                                                              t = not_null(y_37);
                                                                              {
                                                                                ATerm r_6 (ATerm t)
                                                                                {
                                                                                  t = not_null(f_37);
                                                                                  return(t);
                                                                                }
                                                                                t = separate_by_1(t, r_6);
                                                                                {
                                                                                  d_38 = t;
                                                                                  if(((c_38 != NULL) && (c_38 != d_38)))
                                                                                    _fail(d_38);
                                                                                  else
                                                                                    c_38 = d_38;
                                                                                }
                                                                              }
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(z_37));
                                                                                {
                                                                                  ATerm s_6 (ATerm t)
                                                                                  {
                                                                                    ATerm t_6 (ATerm t)
                                                                                    {
                                                                                      ATerm j_18 = t;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Nil_0(t);
                                                                                          PopChoice();
                                                                                          _fail(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_18;
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm v_6 (ATerm t)
                                                                                    {
                                                                                      ATerm e_38 = NULL;
                                                                                      e_38 = t;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), not_null(h_37));
                                                                                        t = subt_0(t);
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = _2(t, t_6, v_6);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, s_6);
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
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm g_38 = NULL;
        ATerm i_38 = NULL,j_38 = NULL;
        t = parse_options_1(t, io_options_0);
        {
          g_38 = t;
          {
            ATerm l_18 = t;
            int m_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = need_help_1(t, usage_0);
                LocalPopChoice(m_18);
              }
            else
              {
                t = l_18;
                {
                  ATerm n_18 = t;
                  int s_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_18;
                      t_18 = t;
                      {
                        ATerm v_18 = t;
                        int x_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_6 (ATerm t)
                            {
                              ATerm k_38 = NULL,l_38 = NULL;
                              k_38 = t;
                              p_34 :
                              if(match_cons(k_38, sym_Output_1))
                                {
                                  l_38 = ATgetArgument(k_38, 0);
                                  if(((j_38 != NULL) && (j_38 != l_38)))
                                    _fail(l_38);
                                  else
                                    j_38 = l_38;
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = option_defined_1(t, w_6);
                            {
                              t = not_null(j_38);
                              t = open_file_0(t);
                            }
                            LocalPopChoice(x_18);
                          }
                        else
                          {
                            t = v_18;
                            {
                              ATerm m_38 = NULL;
                              t = term_y_18;
                              {
                                m_38 = t;
                                if(((j_38 != NULL) && (j_38 != m_38)))
                                  _fail(m_38);
                                else
                                  j_38 = m_38;
                              }
                            }
                          }
                      }
                      t = t_18;
                      {
                        t = input_file_0(t);
                        {
                          ATerm x_6 (ATerm t)
                          {
                            ATerm n_38 = NULL;
                            t = abox2text_0(t);
                            {
                              n_38 = t;
                              if(((i_38 != NULL) && (i_38 != n_38)))
                                _fail(n_38);
                              else
                                i_38 = n_38;
                            }
                            return(t);
                          }
                          t = _2(t, _id, x_6);
                          {
                            t = not_null(i_38);
                            {
                              ATerm y_6 (ATerm t)
                              {
                                ATerm c_7 (ATerm t)
                                {
                                  t = is_string_0(t);
                                  {
                                    ATerm z_18;
                                    z_18 = t;
                                    {
                                      ATerm o_38 = NULL;
                                      ATerm p_38 = NULL;
                                      p_38 = t;
                                      if(((o_38 != NULL) && (o_38 != p_38)))
                                        _fail(p_38);
                                      else
                                        o_38 = p_38;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), (ATerm) ATinsert(ATempty, not_null(o_38)));
                                        t = print_0(t);
                                      }
                                    }
                                    t = z_18;
                                  }
                                  return(t);
                                }
                                t = try_1(t, c_7);
                                return(t);
                              }
                              t = topdown_1(t, y_6);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), (ATerm) ATinsert(ATempty, term_a_19));
                                {
                                  t = print_0(t);
                                  t = report_success_0(t);
                                }
                              }
                            }
                          }
                        }
                      }
                      LocalPopChoice(s_18);
                    }
                  else
                    {
                      t = n_18;
                      t = report_failure_0(t);
                    }
                }
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

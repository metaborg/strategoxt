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
ATerm term_r_16;
ATerm term_p_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_k_11;
ATerm term_x_10;
ATerm term_v_9;
ATerm term_g_8;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_p_3;
void init_constant_terms (void)
{
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_a_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, (ATerm) ATempty);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_63 (ATerm));
ATerm topdown_1 (ATerm, ATerm y_58 (ATerm));
ATerm subt_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm s_57 (ATerm));
ATerm separate_by_1 (ATerm, ATerm t_57 (ATerm));
ATerm add_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm o_0 (ATerm), ATerm r_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm m_51 (ATerm));
ATerm H_2 (ATerm, ATerm p_39 (ATerm), ATerm q_39 (ATerm));
ATerm filter_1 (ATerm, ATerm c_50 (ATerm));
ATerm foldr_3 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm), ATerm a_51 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm a_57 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_62 (ATerm), ATerm z_62 (ATerm));
ATerm for_3 (ATerm, ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm d_63 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm l_39 (ATerm), ATerm m_39 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm map_to_r_box_0 (ATerm);
ATerm Abox_2_text_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm _2 (ATerm, ATerm n_33 (ATerm), ATerm o_33 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_47 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_47 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm k_56 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_45 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_46 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_56 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_44 (ATerm));
ATerm map_1 (ATerm, ATerm c_56 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_44 (ATerm));
ATerm Program_1 (ATerm, ATerm w_34 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_34 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_45 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_41 (ATerm), ATerm k_41 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_44 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_44 (ATerm));
ATerm Abox2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATempty, term_d_7));
  {
    t = printnl_0(t);
    {
      t = term_e_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm d_0 (ATerm t)
    {
      ATerm f_7 = t;
      if((PushChoice() == 0))
        {
          ATerm e_0 (ATerm t)
          {
            ATerm s_1 = NULL;
            s_1 = t;
            l_1 :
            if(!(match_cons(s_1, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_0);
          PopChoice();
          _fail(t);
        }
      else
        t = f_7;
      return(t);
    }
    t = _2(t, d_0, _id);
    {
      ATerm l_0 (ATerm t)
      {
        ATerm m_0 (ATerm t)
        {
          ATerm t_1 = NULL,u_1 = NULL;
          t_1 = t;
          n_1 :
          if(match_cons(t_1, sym_Runtime_1))
            {
              u_1 = ATgetArgument(t_1, 0);
              if(((r_1 != NULL) && (r_1 != u_1)))
                _fail(u_1);
              else
                r_1 = u_1;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, m_0);
        return(t);
      }
      t = _2(t, l_0, _id);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            ATerm v_1 = NULL,w_1 = NULL;
            v_1 = t;
            p_1 :
            if(match_cons(v_1, sym_Program_1))
              {
                w_1 = ATgetArgument(v_1, 0);
                if(((q_1 != NULL) && (q_1 != w_1)))
                  _fail(w_1);
                else
                  q_1 = w_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_0);
          return(t);
        }
        t = _2(t, n_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_7), not_null(r_1)), term_g_7), not_null(q_1)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = term_i_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
  c_2 = t;
  b_2 :
  if(match_cons(c_2, sym__2))
    {
      d_2 = ATgetArgument(c_2, 0);
      e_2 = ATgetArgument(c_2, 1);
      {
        ATerm n_7;
        n_7 = t;
        t = SSL_print(not_null(d_2), not_null(e_2));
        t = n_7;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm k_2 = NULL,m_2 = NULL;
  ATerm r_7;
  r_7 = t;
  {
    ATerm l_2 = NULL;
    t = k_49(t);
    {
      l_2 = t;
      if(((k_2 != NULL) && (k_2 != l_2)))
        _fail(l_2);
      else
        k_2 = l_2;
    }
  }
  t = r_7;
  {
    ATerm n_2 = NULL;
    t = l_49(t);
    {
      n_2 = t;
      if(((m_2 != NULL) && (m_2 != n_2)))
        _fail(n_2);
      else
        m_2 = n_2;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_2), not_null(m_2));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm r_2 = NULL;
  r_2 = t;
  t = SSL_is_string(not_null(r_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_63(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    t = y_58(t);
    t = _all(t, u_2);
    return(t);
  }
  t = u_2(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
  x_2 = t;
  w_2 :
  if(match_cons(x_2, sym__2))
    {
      y_2 = ATgetArgument(x_2, 0);
      z_2 = ATgetArgument(x_2, 1);
      {
        ATerm z_7 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(y_2), not_null(z_2));
            LocalPopChoice(b_8);
          }
        else
          {
            t = z_7;
            t = SSL_subtr(not_null(y_2), not_null(z_2));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  f_3 :
  if(((ATgetType(g_3) == AT_LIST) && ((ATermList) g_3 != ATempty)))
    {
      h_3 = ATgetFirst((ATermList) g_3);
      i_3 = (ATerm) ATgetNext((ATermList) g_3);
      {
        ATerm l_3 = NULL;
        ATerm m_3 = NULL;
        t = term_g_8;
        {
          t = s_57(t);
          {
            m_3 = t;
            if(((l_3 != NULL) && (l_3 != m_3)))
              _fail(m_3);
            else
              l_3 = m_3;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_3)), not_null(h_3)), not_null(l_3));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm t_57 (ATerm))
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
        ATerm q_0 (ATerm t)
        {
          ATerm j_8 = t;
          int p_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_8);
            }
          else
            {
              t = j_8;
              {
                t = Cons_2(t, _id, q_0);
                t = Sep_1(t, t_57);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, q_0);
      }
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym__2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      {
        ATerm r_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_3), not_null(u_3));
            LocalPopChoice(t_8);
          }
        else
          {
            t = r_8;
            t = SSL_addr(not_null(t_3), not_null(u_3));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  b_4 = t;
  z_3 :
  if(match_cons(b_4, sym__2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      a_4 :
      if(((ATermList) c_4 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(d_4));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm o_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  n_4 = t;
  l_4 :
  if(match_cons(n_4, sym__2))
    {
      o_4 = ATgetArgument(n_4, 0);
      r_4 = ATgetArgument(n_4, 1);
      m_4 :
      if(((ATgetType(o_4) == AT_LIST) && ((ATermList) o_4 != ATempty)))
        {
          p_4 = ATgetFirst((ATermList) o_4);
          q_4 = (ATerm) ATgetNext((ATermList) o_4);
          {
            ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
            ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), not_null(r_4));
            {
              t = o_0(t);
              {
                z_4 = t;
                k_4 :
                if(match_cons(z_4, sym__2))
                  {
                    a_5 = ATgetArgument(z_4, 0);
                    b_5 = ATgetArgument(z_4, 1);
                    {
                      ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
                      if(((x_4 != NULL) && (x_4 != a_5)))
                        _fail(a_5);
                      else
                        x_4 = a_5;
                      {
                        if(((v_4 != NULL) && (v_4 != b_5)))
                          _fail(b_5);
                        else
                          v_4 = b_5;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), not_null(v_4));
                          {
                            t = r_0(t);
                            {
                              c_5 = t;
                              j_4 :
                              if(match_cons(c_5, sym__2))
                                {
                                  d_5 = ATgetArgument(c_5, 0);
                                  e_5 = ATgetArgument(c_5, 1);
                                  {
                                    if(((y_4 != NULL) && (y_4 != d_5)))
                                      _fail(d_5);
                                    else
                                      y_4 = d_5;
                                    if(((w_4 != NULL) && (w_4 != e_5)))
                                      _fail(e_5);
                                    else
                                      w_4 = e_5;
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        }
                      }
                    }
                  }
                else
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_4)), not_null(x_4)), not_null(w_4));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm m_51 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, m_51, i_5);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = i_5(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm p_39 (ATerm), ATerm q_39 (ATerm))
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
  n_5 = t;
  m_5 :
  if(match_cons(n_5, sym_H_2))
    {
      o_5 = ATgetArgument(n_5, 0);
      p_5 = ATgetArgument(n_5, 1);
      {
        ATerm s_5 = NULL;
        t = not_null(o_5);
        {
          ATerm u_5 = NULL;
          t = p_39(t);
          {
            s_5 = t;
            {
              t = not_null(p_5);
              {
                t = q_39(t);
                {
                  u_5 = t;
                  t = (ATerm) ATmakeAppl(sym_H_2, not_null(s_5), not_null(u_5));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm c_50 (ATerm))
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, c_50);
              return(t);
            }
            t = Cons_2(t, c_50, s_0);
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            {
              ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
              b_6 = t;
              a_6 :
              if(((ATgetType(b_6) == AT_LIST) && ((ATermList) b_6 != ATempty)))
                {
                  c_6 = ATgetFirst((ATermList) b_6);
                  d_6 = (ATerm) ATgetNext((ATermList) b_6);
                  {
                    t = not_null(d_6);
                    t = filter_1(t, c_50);
                  }
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm), ATerm a_51 (ATerm))
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_50(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
        k_6 = t;
        j_6 :
        if(((ATgetType(k_6) == AT_LIST) && ((ATermList) k_6 != ATempty)))
          {
            l_6 = ATgetFirst((ATermList) k_6);
            m_6 = (ATerm) ATgetNext((ATermList) k_6);
            {
              ATerm p_6 = NULL,r_6 = NULL;
              ATerm q_9;
              q_9 = t;
              {
                ATerm q_6 = NULL;
                t = not_null(l_6);
                {
                  t = a_51(t);
                  {
                    q_6 = t;
                    if(((p_6 != NULL) && (p_6 != q_6)))
                      _fail(q_6);
                    else
                      p_6 = q_6;
                  }
                }
              }
              t = q_9;
              {
                ATerm s_6 = NULL;
                t = not_null(m_6);
                {
                  t = foldr_3(t, y_50, z_50, a_51);
                  {
                    s_6 = t;
                    if(((r_6 != NULL) && (r_6 != s_6)))
                      _fail(s_6);
                    else
                      r_6 = s_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), not_null(r_6));
                  t = z_50(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = term_i_7;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  t = foldr_3(t, t_0, add_0, u_0);
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
  ATerm x_6 = NULL;
  x_6 = t;
  w_6 :
  if(!(match_cons(x_6, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm a_7 = NULL,c_7 = NULL;
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          ATerm b_7 = NULL;
          b_7 = t;
          if(((a_7 != NULL) && (a_7 != b_7)))
            _fail(b_7);
          else
            a_7 = b_7;
          return(t);
        }
        t = SOpt_2(t, HS_0, w_0);
        return(t);
      }
      t = fetch_1(t, v_0);
      {
        t = not_null(a_7);
        t = string_to_int_0(t);
      }
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = term_e_7;
    }
  {
    c_7 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_7), term_v_9);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL,p_7 = NULL;
  m_7 = t;
  {
    ATerm q_7 = NULL;
    ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
    t = not_null(m_7);
    {
      q_7 = t;
      {
        t = SSL_explode_term(not_null(q_7));
        {
          s_7 = t;
          j_7 :
          if(match_cons(s_7, sym__2))
            {
              t_7 = ATgetArgument(s_7, 0);
              u_7 = ATgetArgument(s_7, 1);
              k_7 :
              if(match_string(t_7, ""))
                {
                  l_7 :
                  if(((ATgetType(u_7) == AT_LIST) && ((ATermList) u_7 != ATempty)))
                    {
                      v_7 = ATgetFirst((ATermList) u_7);
                      w_7 = (ATerm) ATgetNext((ATermList) u_7);
                      {
                        if(((p_7 != NULL) && (p_7 != v_7)))
                          _fail(v_7);
                        else
                          p_7 = v_7;
                        if(((o_7 != NULL) && (o_7 != w_7)))
                          _fail(w_7);
                        else
                          o_7 = w_7;
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(p_7);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm w_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = a_57(t);
        LocalPopChoice(z_9);
      }
    else
      {
        t = w_9;
        t = Cons_2(t, _id, a_8);
      }
    return(t);
  }
  t = a_8(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym__2))
    {
      e_8 = ATgetArgument(d_8, 0);
      f_8 = ATgetArgument(d_8, 1);
      {
        ATerm a_10;
        a_10 = t;
        {
          ATerm e_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_8), not_null(f_8));
              LocalPopChoice(f_10);
            }
          else
            {
              t = e_10;
              t = SSL_gtr(not_null(e_8), not_null(f_8));
            }
        }
        t = a_10;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm l_8 = NULL;
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
      m_8 = t;
      k_8 :
      if(match_cons(m_8, sym__2))
        {
          n_8 = ATgetArgument(m_8, 0);
          o_8 = ATgetArgument(m_8, 1);
          {
            if(((l_8 != NULL) && (l_8 != n_8)))
              _fail(n_8);
            else
              l_8 = n_8;
            if(((l_8 != NULL) && (l_8 != o_8)))
              _fail(o_8);
            else
              l_8 = o_8;
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm y_62 (ATerm), ATerm z_62 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_62(t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        {
          t = z_62(t);
          t = q_8(t);
        }
      }
    return(t);
  }
  t = q_8(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm d_63 (ATerm))
{
  t = b_63(t);
  t = while_not_2(t, c_63, d_63);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
    z_8 = t;
    s_8 :
    if(match_cons(z_8, sym__2))
      {
        a_9 = ATgetArgument(z_8, 0);
        b_9 = ATgetArgument(z_8, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(a_9), not_null(b_9), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
    e_9 = t;
    u_8 :
    if(match_cons(e_9, sym__3))
      {
        f_9 = ATgetArgument(e_9, 0);
        g_9 = ATgetArgument(e_9, 1);
        h_9 = ATgetArgument(e_9, 2);
        v_8 :
        if(match_int(f_9, 0))
          t = not_null(h_9);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
    k_9 = t;
    y_8 :
    if(match_cons(k_9, sym__3))
      {
        l_9 = ATgetArgument(k_9, 0);
        m_9 = ATgetArgument(k_9, 1);
        n_9 = ATgetArgument(k_9, 2);
        {
          ATerm r_9 = NULL;
          ATerm n_10;
          n_10 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), term_e_7);
            t = geq_0(t);
          }
          t = n_10;
          {
            ATerm s_9 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), term_e_7);
            {
              t = subt_0(t);
              {
                s_9 = t;
                if(((r_9 != NULL) && (r_9 != s_9)))
                  _fail(s_9);
                else
                  r_9 = s_9;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_9), not_null(m_9), (ATerm) ATinsert(CheckATermList(not_null(n_9)), not_null(m_9)));
          }
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = for_3(t, x_0, y_0, z_0);
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
  ATerm y_9 = NULL;
  y_9 = t;
  x_9 :
  if(!(match_cons(y_9, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm b_10 = NULL,d_10 = NULL;
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_10 = NULL;
          c_10 = t;
          if(((b_10 != NULL) && (b_10 != c_10)))
            _fail(c_10);
          else
            b_10 = c_10;
          return(t);
        }
        t = SOpt_2(t, IS_0, b_1);
        return(t);
      }
      t = fetch_1(t, a_1);
      {
        t = not_null(b_10);
        t = string_to_int_0(t);
      }
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = term_i_7;
    }
  {
    d_10 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), term_v_9);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  t = SSL_string_to_int(not_null(i_10));
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  l_10 :
  if(!(match_cons(m_10, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm l_39 (ATerm), ATerm m_39 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_SOpt_2))
    {
      s_10 = ATgetArgument(r_10, 0);
      t_10 = ATgetArgument(r_10, 1);
      {
        ATerm w_10 = NULL;
        t = not_null(s_10);
        {
          ATerm y_10 = NULL;
          t = l_39(t);
          {
            w_10 = t;
            {
              t = not_null(t_10);
              {
                t = m_39(t);
                {
                  y_10 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(w_10), not_null(y_10));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm g_11 = NULL,i_11 = NULL;
  ATerm q_11 = NULL;
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          ATerm h_11 = NULL;
          h_11 = t;
          if(((g_11 != NULL) && (g_11 != h_11)))
            _fail(h_11);
          else
            g_11 = h_11;
          return(t);
        }
        t = SOpt_2(t, VS_0, d_1);
        return(t);
      }
      t = fetch_1(t, c_1);
      {
        t = not_null(g_11);
        t = string_to_int_0(t);
      }
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      t = term_i_7;
    }
  {
    i_11 = t;
    {
      ATerm r_11 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), term_e_7);
      {
        t = add_0(t);
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), term_x_10);
        t = copy_char_0(t);
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,c_12 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym__2))
    {
      y_11 = ATgetArgument(x_11, 0);
      c_12 = ATgetArgument(x_11, 1);
      {
        t = not_null(y_11);
        {
          ATerm e_1 (ATerm t)
          {
            t = not_null(c_12);
            return(t);
          }
          t = at_end_1(t, e_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm map_to_r_box_0 (ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, not_null(w_12), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm f_15 (ATerm t)
      {
        ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
        ATerm h_15 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(e_13))));
          t = conc_0(t);
          return(t);
        }
        ATerm i_15 (ATerm t)
        {
          ATerm k_14 = NULL;
          ATerm n_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(y_12), not_null(z_12))));
          {
            t = conc_0(t);
            {
              n_14 = t;
              if(((k_14 != NULL) && (k_14 != n_14)))
                _fail(n_14);
              else
                k_14 = n_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_13), (ATerm)ATempty, not_null(k_14));
            t = f_15(t);
          }
          return(t);
        }
        ATerm j_15 (ATerm t)
        {
          ATerm u_14 = NULL;
          ATerm v_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(y_12), not_null(z_12))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(e_13))));
          {
            t = conc_0(t);
            {
              v_14 = t;
              if(((u_14 != NULL) && (u_14 != v_14)))
                _fail(v_14);
              else
                u_14 = v_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_13), (ATerm)ATempty, not_null(u_14));
            t = f_15(t);
          }
          return(t);
        }
        ATerm k_15 (ATerm t)
        {
          ATerm c_15 = NULL;
          ATerm d_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), (ATerm) ATinsert(ATempty, not_null(c_13)));
          {
            t = conc_0(t);
            {
              d_15 = t;
              if(((c_15 != NULL) && (c_15 != d_15)))
                _fail(d_15);
              else
                c_15 = d_15;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_13), not_null(c_15), not_null(f_13));
            t = f_15(t);
          }
          return(t);
        }
        a_13 = t;
        p_12 :
        if(match_cons(a_13, sym__3))
          {
            b_13 = ATgetArgument(a_13, 0);
            e_13 = ATgetArgument(a_13, 1);
            f_13 = ATgetArgument(a_13, 2);
            q_12 :
            if(((ATermList) b_13 == ATempty))
              {
                r_12 :
                if(((ATermList) e_13 == ATempty))
                  {
                    {
                      ATerm z_10 = t;
                      int a_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(f_13);
                          LocalPopChoice(a_11);
                        }
                      else
                        {
                          t = z_10;
                          t = h_15(t);
                        }
                    }
                  }
                else
                  t = h_15(t);
              }
            else
              {
                if(((ATgetType(b_13) == AT_LIST) && ((ATermList) b_13 != ATempty)))
                  {
                    c_13 = ATgetFirst((ATermList) b_13);
                    d_13 = (ATerm) ATgetNext((ATermList) b_13);
                    s_12 :
                    if(((ATermList) e_13 == ATempty))
                      {
                        t_12 :
                        if(match_cons(c_13, sym_R_2))
                          {
                            y_12 = ATgetArgument(c_13, 0);
                            z_12 = ATgetArgument(c_13, 1);
                            {
                              ATerm b_11 = t;
                              int c_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_15(t);
                                  LocalPopChoice(c_11);
                                }
                              else
                                {
                                  t = b_11;
                                  {
                                    ATerm d_11 = t;
                                    int e_11 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = j_15(t);
                                        LocalPopChoice(e_11);
                                      }
                                    else
                                      {
                                        t = d_11;
                                        t = k_15(t);
                                      }
                                  }
                                }
                            }
                          }
                        else
                          t = k_15(t);
                      }
                    else
                      {
                        v_12 :
                        if(match_cons(c_13, sym_R_2))
                          {
                            y_12 = ATgetArgument(c_13, 0);
                            z_12 = ATgetArgument(c_13, 1);
                            {
                              ATerm f_11 = t;
                              int j_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_15(t);
                                  LocalPopChoice(j_11);
                                }
                              else
                                {
                                  t = f_11;
                                  t = k_15(t);
                                }
                            }
                          }
                        else
                          t = k_15(t);
                      }
                  }
                else
                  _fail(t);
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = f_15(t);
    }
  }
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm r_17 = NULL,t_17 = NULL,u_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  x_17 = t;
  j_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      b_18 = ATgetArgument(x_17, 1);
      k_17 :
      if(((ATermList) y_17 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(b_18));
        }
      else
        {
          if(((ATgetType(y_17) == AT_LIST) && ((ATermList) y_17 != ATempty)))
            {
              z_17 = ATgetFirst((ATermList) y_17);
              a_18 = (ATerm) ATgetNext((ATermList) y_17);
              l_17 :
              if(((ATermList) a_18 == ATempty))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(b_18));
                    t = Abox_2_text_0(t);
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(y_17, sym_ALT_2))
                {
                  z_17 = ATgetArgument(y_17, 0);
                  a_18 = ATgetArgument(y_17, 1);
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(b_18));
                    t = Abox_2_text_0(t);
                  }
                }
              else
                {
                  if(match_cons(y_17, sym_A_3))
                    {
                      z_17 = ATgetArgument(y_17, 0);
                      a_18 = ATgetArgument(y_17, 1);
                      r_17 = ATgetArgument(y_17, 2);
                      {
                        ATerm l_18 = NULL;
                        ATerm m_18 = NULL;
                        t = not_null(r_17);
                        {
                          t = map_to_r_box_0(t);
                          {
                            m_18 = t;
                            if(((l_18 != NULL) && (l_18 != m_18)))
                              _fail(m_18);
                            else
                              l_18 = m_18;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(a_18), not_null(l_18)), not_null(b_18));
                          t = Abox_2_text_0(t);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_17, sym_R_2))
                        {
                          z_17 = ATgetArgument(y_17, 0);
                          a_18 = ATgetArgument(y_17, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(z_17), not_null(a_18)), not_null(b_18));
                            t = Abox_2_text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(y_17, sym_HV_2))
                            {
                              z_17 = ATgetArgument(y_17, 0);
                              a_18 = ATgetArgument(y_17, 1);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(z_17), not_null(a_18)), not_null(b_18));
                                t = Abox_2_text_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(y_17, sym_FBOX_2))
                                {
                                  z_17 = ATgetArgument(y_17, 0);
                                  a_18 = ATgetArgument(y_17, 1);
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), not_null(b_18));
                                    t = Abox_2_text_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(y_17, sym_C_2))
                                    {
                                      z_17 = ATgetArgument(y_17, 0);
                                      a_18 = ATgetArgument(y_17, 1);
                                      o_17 :
                                      if(((ATgetType(a_18) == AT_LIST) && ((ATermList) a_18 != ATempty)))
                                        {
                                          t_17 = ATgetFirst((ATermList) a_18);
                                          w_17 = (ATerm) ATgetNext((ATermList) a_18);
                                          p_17 :
                                          if(match_cons(t_17, sym_S_1))
                                            {
                                              u_17 = ATgetArgument(t_17, 0);
                                              q_17 :
                                              if(((ATermList) w_17 == ATempty))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(b_18));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(y_17, sym_S_1))
                                        {
                                          z_17 = ATgetArgument(y_17, 0);
                                          {
                                            ATerm c_19 = NULL;
                                            ATerm d_19 = NULL,f_19 = NULL;
                                            ATerm e_19 = NULL;
                                            t = not_null(z_17);
                                            {
                                              t = string_length_0(t);
                                              {
                                                e_19 = t;
                                                if(((d_19 != NULL) && (d_19 != e_19)))
                                                  _fail(e_19);
                                                else
                                                  d_19 = e_19;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), not_null(d_19));
                                              {
                                                t = add_0(t);
                                                {
                                                  f_19 = t;
                                                  if(((c_19 != NULL) && (c_19 != f_19)))
                                                    _fail(f_19);
                                                  else
                                                    c_19 = f_19;
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(c_19));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(y_17, sym_V_2))
                                            {
                                              z_17 = ATgetArgument(y_17, 0);
                                              a_18 = ATgetArgument(y_17, 1);
                                              {
                                                ATerm j_19 = NULL;
                                                t = not_null(z_17);
                                                {
                                                  ATerm l_19 = NULL;
                                                  t = Vspace_0(t);
                                                  {
                                                    j_19 = t;
                                                    {
                                                      t = not_null(z_17);
                                                      {
                                                        ATerm n_19 = NULL;
                                                        t = Ispace_0(t);
                                                        {
                                                          l_19 = t;
                                                          {
                                                            ATerm p_19 = NULL,r_19 = NULL;
                                                            t = string_length_0(t);
                                                            {
                                                              n_19 = t;
                                                              {
                                                                ATerm q_19 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), term_v_9);
                                                                {
                                                                  t = copy_char_0(t);
                                                                  {
                                                                    q_19 = t;
                                                                    if(((p_19 != NULL) && (p_19 != q_19)))
                                                                      _fail(q_19);
                                                                    else
                                                                      p_19 = q_19;
                                                                  }
                                                                }
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_19)), not_null(l_19)), not_null(j_19));
                                                                  {
                                                                    ATerm t_19 = NULL;
                                                                    t = concat_strings_0(t);
                                                                    {
                                                                      r_19 = t;
                                                                      {
                                                                        t = not_null(a_18);
                                                                        {
                                                                          ATerm f_1 (ATerm t)
                                                                          {
                                                                            ATerm l_11 = t;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                PopChoice();
                                                                                _fail(t);
                                                                              }
                                                                            else
                                                                              t = l_11;
                                                                            return(t);
                                                                          }
                                                                          t = filter_1(t, f_1);
                                                                          {
                                                                            ATerm m_11 = t;
                                                                            int n_11 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_18));
                                                                                LocalPopChoice(n_11);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_11;
                                                                                {
                                                                                  ATerm g_1 (ATerm t)
                                                                                  {
                                                                                    ATerm u_19 = NULL;
                                                                                    u_19 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_19), not_null(b_18));
                                                                                      t = Abox_2_text_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm h_1 (ATerm t)
                                                                                  {
                                                                                    ATerm i_1 (ATerm t)
                                                                                    {
                                                                                      ATerm w_19 = NULL;
                                                                                      ATerm y_19 = NULL;
                                                                                      w_19 = t;
                                                                                      {
                                                                                        ATerm z_19 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), not_null(n_19));
                                                                                        {
                                                                                          t = add_0(t);
                                                                                          {
                                                                                            z_19 = t;
                                                                                            if(((y_19 != NULL) && (y_19 != z_19)))
                                                                                              _fail(z_19);
                                                                                            else
                                                                                              y_19 = z_19;
                                                                                          }
                                                                                        }
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(y_19));
                                                                                          t = Abox_2_text_0(t);
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, i_1);
                                                                                    return(t);
                                                                                  }
                                                                                  t = Cons_2(t, g_1, h_1);
                                                                                  {
                                                                                    ATerm j_1 (ATerm t)
                                                                                    {
                                                                                      ATerm k_1 (ATerm t)
                                                                                      {
                                                                                        ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
                                                                                        a_20 = t;
                                                                                        w_16 :
                                                                                        if(match_cons(a_20, sym__2))
                                                                                          {
                                                                                            b_20 = ATgetArgument(a_20, 0);
                                                                                            c_20 = ATgetArgument(a_20, 1);
                                                                                            if(((t_19 != NULL) && (t_19 != c_20)))
                                                                                              _fail(c_20);
                                                                                            else
                                                                                              t_19 = c_20;
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Cons_2(t, k_1, Nil_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = at_last_1(t, j_1);
                                                                                    {
                                                                                      t = map_1(t, Fst_0);
                                                                                      {
                                                                                        ATerm m_1 (ATerm t)
                                                                                        {
                                                                                          t = not_null(r_19);
                                                                                          return(t);
                                                                                        }
                                                                                        t = separate_by_1(t, m_1);
                                                                                        {
                                                                                          ATerm o_1 (ATerm t)
                                                                                          {
                                                                                            t = not_null(t_19);
                                                                                            return(t);
                                                                                          }
                                                                                          t = split_2(t, _id, o_1);
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
                                              if(match_cons(y_17, sym_H_2))
                                                {
                                                  z_17 = ATgetArgument(y_17, 0);
                                                  a_18 = ATgetArgument(y_17, 1);
                                                  {
                                                    ATerm g_20 = NULL;
                                                    t = not_null(z_17);
                                                    {
                                                      ATerm i_20 = NULL;
                                                      t = Hspace_0(t);
                                                      {
                                                        g_20 = t;
                                                        {
                                                          ATerm k_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            i_20 = t;
                                                            {
                                                              ATerm l_20 = NULL;
                                                              t = not_null(a_18);
                                                              {
                                                                ATerm x_1 (ATerm t)
                                                                {
                                                                  ATerm o_11 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm p_11 = t;
                                                                      int s_11 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = Nil_0(t);
                                                                          LocalPopChoice(s_11);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_11;
                                                                          t = H_2(t, Nil_0, Nil_0);
                                                                        }
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    t = o_11;
                                                                  return(t);
                                                                }
                                                                t = filter_1(t, x_1);
                                                                {
                                                                  l_20 = t;
                                                                  if(((k_20 != NULL) && (k_20 != l_20)))
                                                                    _fail(l_20);
                                                                  else
                                                                    k_20 = l_20;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), not_null(b_18));
                                                                {
                                                                  ATerm y_1 (ATerm t)
                                                                  {
                                                                    ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
                                                                    m_20 = t;
                                                                    e_17 :
                                                                    if(match_cons(m_20, sym__2))
                                                                      {
                                                                        n_20 = ATgetArgument(m_20, 0);
                                                                        o_20 = ATgetArgument(m_20, 1);
                                                                        {
                                                                          ATerm r_20 = NULL,s_20 = NULL,w_20 = NULL;
                                                                          ATerm t_11;
                                                                          t_11 = t;
                                                                          {
                                                                            ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), not_null(o_20));
                                                                            {
                                                                              t = Abox_2_text_0(t);
                                                                              {
                                                                                t_20 = t;
                                                                                c_17 :
                                                                                if(match_cons(t_20, sym__2))
                                                                                  {
                                                                                    u_20 = ATgetArgument(t_20, 0);
                                                                                    v_20 = ATgetArgument(t_20, 1);
                                                                                    {
                                                                                      if(((r_20 != NULL) && (r_20 != u_20)))
                                                                                        _fail(u_20);
                                                                                      else
                                                                                        r_20 = u_20;
                                                                                      if(((s_20 != NULL) && (s_20 != v_20)))
                                                                                        _fail(v_20);
                                                                                      else
                                                                                        s_20 = v_20;
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                              }
                                                                            }
                                                                          }
                                                                          t = t_11;
                                                                          {
                                                                            ATerm x_20 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(s_20));
                                                                            {
                                                                              t = add_0(t);
                                                                              {
                                                                                x_20 = t;
                                                                                if(((w_20 != NULL) && (w_20 != x_20)))
                                                                                  _fail(x_20);
                                                                                else
                                                                                  w_20 = x_20;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), not_null(w_20));
                                                                          }
                                                                        }
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  t = thread_map_1(t, y_1);
                                                                  {
                                                                    y_20 = t;
                                                                    i_17 :
                                                                    if(match_cons(y_20, sym__2))
                                                                      {
                                                                        z_20 = ATgetArgument(y_20, 0);
                                                                        a_21 = ATgetArgument(y_20, 1);
                                                                        {
                                                                          ATerm d_21 = NULL;
                                                                          ATerm e_21 = NULL;
                                                                          t = not_null(z_20);
                                                                          {
                                                                            ATerm z_1 (ATerm t)
                                                                            {
                                                                              t = not_null(g_20);
                                                                              return(t);
                                                                            }
                                                                            t = separate_by_1(t, z_1);
                                                                            {
                                                                              e_21 = t;
                                                                              if(((d_21 != NULL) && (d_21 != e_21)))
                                                                                _fail(e_21);
                                                                              else
                                                                                d_21 = e_21;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), not_null(a_21));
                                                                            {
                                                                              ATerm a_2 (ATerm t)
                                                                              {
                                                                                ATerm f_2 (ATerm t)
                                                                                {
                                                                                  ATerm u_11 = t;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = Nil_0(t);
                                                                                      PopChoice();
                                                                                      _fail(t);
                                                                                    }
                                                                                  else
                                                                                    t = u_11;
                                                                                  return(t);
                                                                                }
                                                                                ATerm g_2 (ATerm t)
                                                                                {
                                                                                  ATerm f_21 = NULL;
                                                                                  f_21 = t;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(i_20));
                                                                                    t = subt_0(t);
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = _2(t, f_2, g_2);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, a_2);
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    else
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
                                              else
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
    _fail(t);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_i_7;
    return(t);
  }
  t = split_2(t, _id, h_2);
  t = Abox_2_text_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm n_33 (ATerm), ATerm o_33 (ATerm))
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym__2))
    {
      u_22 = ATgetArgument(t_22, 0);
      v_22 = ATgetArgument(t_22, 1);
      {
        ATerm y_22 = NULL;
        t = not_null(u_22);
        {
          ATerm a_23 = NULL;
          t = n_33(t);
          {
            y_22 = t;
            {
              t = not_null(v_22);
              {
                t = o_33(t);
                {
                  a_23 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), not_null(a_23));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm g_23 = NULL;
  g_23 = t;
  t = SSL_ReadFromFile(not_null(g_23));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_23 = NULL;
  ATerm v_11;
  v_11 = t;
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 (ATerm t)
        {
          ATerm n_23 = NULL,o_23 = NULL;
          n_23 = t;
          k_23 :
          if(match_cons(n_23, sym_Input_1))
            {
              o_23 = ATgetArgument(n_23, 0);
              if(((m_23 != NULL) && (m_23 != o_23)))
                _fail(o_23);
              else
                m_23 = o_23;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_2);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        {
          ATerm p_23 = NULL;
          t = term_b_12;
          {
            p_23 = t;
            if(((m_23 != NULL) && (m_23 != p_23)))
              _fail(p_23);
            else
              m_23 = p_23;
          }
        }
      }
  }
  t = v_11;
  {
    ATerm j_2 (ATerm t)
    {
      t = not_null(m_23);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_2);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_47 (ATerm))
{
  ATerm d_12;
  d_12 = t;
  {
    ATerm w_23 = NULL,y_23 = NULL;
    ATerm e_12;
    e_12 = t;
    {
      ATerm x_23 = NULL;
      t = m_47(t);
      {
        x_23 = t;
        if(((w_23 != NULL) && (w_23 != x_23)))
          _fail(x_23);
        else
          w_23 = x_23;
      }
    }
    t = e_12;
    {
      ATerm g_24 = NULL;
      g_24 = t;
      if(((y_23 != NULL) && (y_23 != g_24)))
        _fail(g_24);
      else
        y_23 = g_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_23)), not_null(w_23)));
        t = printnl_0(t);
      }
    }
  }
  t = d_12;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_47 (ATerm))
{
  ATerm f_12;
  f_12 = t;
  {
    t = t_47(t);
    {
      ATerm o_2 (ATerm t)
      {
        t = term_g_12;
        return(t);
      }
      t = debug_1(t, o_2);
    }
  }
  t = f_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
      p_24 = t;
      k_24 :
      if(match_cons(p_24, sym__2))
        {
          q_24 = ATgetArgument(p_24, 0);
          r_24 = ATgetArgument(p_24, 1);
          {
            if(((o_24 != NULL) && (o_24 != q_24)))
              _fail(q_24);
            else
              o_24 = q_24;
            {
              if(((n_24 != NULL) && (n_24 != r_24)))
                _fail(r_24);
              else
                n_24 = r_24;
              t = SSL_open_file(not_null(o_24), not_null(n_24));
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm s_24 = NULL;
        ATerm t_24 = NULL;
        ATerm p_2 (ATerm t)
        {
          t = term_j_12;
          return(t);
        }
        t = obsolete_1(t, p_2);
        {
          s_24 = t;
          {
            if(((o_24 != NULL) && (o_24 != s_24)))
              _fail(s_24);
            else
              o_24 = s_24;
            {
              ATerm k_12;
              k_12 = t;
              {
                ATerm u_24 = NULL;
                t = term_l_12;
                {
                  u_24 = t;
                  if(((t_24 != NULL) && (t_24 != u_24)))
                    _fail(u_24);
                  else
                    t_24 = u_24;
                }
              }
              t = k_12;
              t = SSL_open_file(not_null(o_24), not_null(t_24));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm y_24 (ATerm t)
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_56, _id);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = Cons_2(t, _id, y_24);
      }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_45 (ATerm))
{
  t = fetch_1(t, v_45);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm b_25 = NULL;
  ATerm o_12;
  o_12 = t;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm c_25 = NULL,d_25 = NULL;
      c_25 = t;
      a_25 :
      if(match_cons(c_25, sym_Program_1))
        {
          d_25 = ATgetArgument(c_25, 0);
          if(((b_25 != NULL) && (b_25 != d_25)))
            _fail(d_25);
          else
            b_25 = d_25;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, q_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_12), not_null(b_25)), term_u_12));
      {
        t = printnl_0(t);
        {
          t = term_i_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_12;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  f_25 :
  if(!(match_cons(g_25, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_46 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_2);
  t = q_46(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  m_25 = t;
  k_25 :
  if(match_string(m_25, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(m_25) == AT_LIST) && ((ATermList) m_25 != ATempty)))
        {
          n_25 = ATgetFirst((ATermList) m_25);
          o_25 = (ATerm) ATgetNext((ATermList) m_25);
          l_25 :
          if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
            {
              p_25 = ATgetFirst((ATermList) o_25);
              q_25 = (ATerm) ATgetNext((ATermList) o_25);
              {
                ATerm u_25 = NULL;
                ATerm k_13;
                k_13 = t;
                {
                  t = not_null(n_25);
                  t = i_0(t);
                }
                t = k_13;
                {
                  ATerm v_25 = NULL;
                  t = not_null(p_25);
                  {
                    t = j_0(t);
                    {
                      v_25 = t;
                      if(((u_25 != NULL) && (u_25 != v_25)))
                        _fail(v_25);
                      else
                        u_25 = v_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_25)), not_null(u_25));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 (ATerm t)
      {
        ATerm k_26 = NULL;
        k_26 = t;
        z_25 :
        if(!(match_string(k_26, "-S")))
          {
            if(!(match_string(k_26, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_n_13;
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_o_13;
        return(t);
      }
      t = Option_3(t, t_2, v_2, a_3);
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              ATerm l_26 = NULL;
              l_26 = t;
              a_26 :
              if(!(match_string(l_26, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_r_13;
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              t = term_s_13;
              return(t);
            }
            t = Option_3(t, b_3, c_3, d_3);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm t_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm m_26 = NULL;
                    m_26 = t;
                    b_26 :
                    if(!(match_string(m_26, "-v")))
                      {
                        if(!(match_string(m_26, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm j_3 (ATerm t)
                  {
                    t = term_v_13;
                    return(t);
                  }
                  ATerm k_3 (ATerm t)
                  {
                    t = term_w_13;
                    return(t);
                  }
                  t = Option_3(t, e_3, j_3, k_3);
                  LocalPopChoice(u_13);
                }
              else
                {
                  t = t_13;
                  {
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_3 (ATerm t)
                        {
                          ATerm n_26 = NULL;
                          n_26 = t;
                          c_26 :
                          if(!(match_string(n_26, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm o_3 (ATerm t)
                        {
                          ATerm o_26 = NULL;
                          ATerm p_26 = NULL;
                          p_26 = t;
                          if(((o_26 != NULL) && (o_26 != p_26)))
                            _fail(p_26);
                          else
                            o_26 = p_26;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_26));
                          return(t);
                        }
                        ATerm q_3 (ATerm t)
                        {
                          t = term_z_13;
                          return(t);
                        }
                        t = ArgOption_3(t, n_3, o_3, q_3);
                        LocalPopChoice(y_13);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm a_14 = t;
                          int b_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_3 (ATerm t)
                              {
                                ATerm q_26 = NULL;
                                q_26 = t;
                                e_26 :
                                if(!(match_string(q_26, "-i")))
                                  {
                                    if(!(match_string(q_26, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_3 (ATerm t)
                              {
                                ATerm r_26 = NULL;
                                ATerm s_26 = NULL;
                                s_26 = t;
                                if(((r_26 != NULL) && (r_26 != s_26)))
                                  _fail(s_26);
                                else
                                  r_26 = s_26;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_26));
                                return(t);
                              }
                              ATerm x_3 (ATerm t)
                              {
                                t = term_c_14;
                                return(t);
                              }
                              t = ArgOption_3(t, v_3, w_3, x_3);
                              LocalPopChoice(b_14);
                            }
                          else
                            {
                              t = a_14;
                              {
                                ATerm d_14 = t;
                                int e_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_3 (ATerm t)
                                    {
                                      ATerm t_26 = NULL;
                                      t_26 = t;
                                      g_26 :
                                      if(!(match_string(t_26, "-o")))
                                        {
                                          if(!(match_string(t_26, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm e_4 (ATerm t)
                                    {
                                      ATerm u_26 = NULL;
                                      ATerm v_26 = NULL;
                                      v_26 = t;
                                      if(((u_26 != NULL) && (u_26 != v_26)))
                                        _fail(v_26);
                                      else
                                        u_26 = v_26;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_26));
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      t = term_f_14;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, y_3, e_4, f_4);
                                    LocalPopChoice(e_14);
                                  }
                                else
                                  {
                                    t = d_14;
                                    {
                                      ATerm g_14 = t;
                                      int h_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_4 (ATerm t)
                                          {
                                            ATerm w_26 = NULL;
                                            w_26 = t;
                                            i_26 :
                                            if(!(match_string(w_26, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm h_4 (ATerm t)
                                          {
                                            t = term_i_14;
                                            return(t);
                                          }
                                          ATerm i_4 (ATerm t)
                                          {
                                            t = term_j_14;
                                            return(t);
                                          }
                                          t = Option_3(t, g_4, h_4, i_4);
                                          LocalPopChoice(h_14);
                                        }
                                      else
                                        {
                                          t = g_14;
                                          {
                                            ATerm s_4 (ATerm t)
                                            {
                                              ATerm x_26 = NULL;
                                              x_26 = t;
                                              j_26 :
                                              if(!(match_string(x_26, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_4 (ATerm t)
                                            {
                                              t = term_l_14;
                                              return(t);
                                            }
                                            ATerm u_4 (ATerm t)
                                            {
                                              t = term_m_14;
                                              return(t);
                                            }
                                            t = Option_3(t, s_4, t_4, u_4);
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
  ATerm c_27 = NULL;
  c_27 = t;
  t = SSL_table_destroy(not_null(c_27));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_27 = NULL;
  g_27 = t;
  t = SSL_exit(not_null(g_27));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  t = SSL_implode_string(not_null(k_27));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_56 (ATerm))
{
  ATerm n_27 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_27);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          t = Nil_0(t);
          t = q_56(t);
        }
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
        q_27 = t;
        p_27 :
        if(((ATgetType(q_27) == AT_LIST) && ((ATermList) q_27 != ATempty)))
          {
            r_27 = ATgetFirst((ATermList) q_27);
            s_27 = (ATerm) ATgetNext((ATermList) q_27);
            {
              t = not_null(r_27);
              {
                ATerm f_5 (ATerm t)
                {
                  t = not_null(s_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_5);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  t = SSL_explode_string(not_null(y_27));
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
ATerm long_description_1 (ATerm t, ATerm x_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm b_28 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = Cons_2(t, c_56, b_28);
      }
    return(t);
  }
  t = b_28(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  k_28 = t;
  h_28 :
  if(((ATgetType(k_28) == AT_LIST) && ((ATermList) k_28 != ATempty)))
    {
      i_28 = ATgetFirst((ATermList) k_28);
      j_28 = (ATerm) ATgetNext((ATermList) k_28);
      {
        ATerm n_28 = NULL;
        t = not_null(j_28);
        {
          ATerm w_14;
          w_14 = t;
          {
            ATerm o_28 = NULL,q_28 = NULL,s_28 = NULL;
            ATerm x_14;
            x_14 = t;
            {
              ATerm p_28 = NULL;
              t = h_0(t);
              {
                p_28 = t;
                if(((o_28 != NULL) && (o_28 != p_28)))
                  _fail(p_28);
                else
                  o_28 = p_28;
              }
            }
            t = x_14;
            {
              ATerm r_28 = NULL;
              t = not_null(i_28);
              {
                t = g_0(t);
                {
                  r_28 = t;
                  if(((q_28 != NULL) && (q_28 != r_28)))
                    _fail(r_28);
                  else
                    q_28 = r_28;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_28)), not_null(q_28));
                {
                  s_28 = t;
                  if(((n_28 != NULL) && (n_28 != s_28)))
                    _fail(s_28);
                  else
                    n_28 = s_28;
                }
              }
            }
          }
          t = w_14;
          {
            ATerm g_5 (ATerm t)
            {
              t = not_null(n_28);
              return(t);
            }
            t = reverse_acc_2(t, g_0, g_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) k_28 == ATempty))
        {
          {
            t = term_g_8;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_34 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL;
  b_29 = t;
  a_29 :
  if(match_cons(b_29, sym_Program_1))
    {
      c_29 = ATgetArgument(b_29, 0);
      {
        ATerm e_29 = NULL;
        t = not_null(c_29);
        {
          t = w_34(t);
          {
            e_29 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_29));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_29 = NULL;
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      ATerm n_29 = NULL;
      n_29 = t;
      if(((m_29 != NULL) && (m_29 != n_29)))
        _fail(n_29);
      else
        m_29 = n_29;
      return(t);
    }
    t = Program_1(t, k_5);
    return(t);
  }
  t = option_defined_1(t, j_5);
  {
    ATerm l_5 (ATerm t)
    {
      ATerm o_29 = NULL;
      ATerm p_29 = NULL;
      t = term_g_8;
      {
        ATerm q_5 (ATerm t)
        {
          t = not_null(m_29);
          return(t);
        }
        t = short_description_1(t, q_5);
        {
          t = concat_strings_0(t);
          {
            p_29 = t;
            if(((o_29 != NULL) && (o_29 != p_29)))
              _fail(p_29);
            else
              o_29 = p_29;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATempty, not_null(o_29)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATempty, term_y_14));
      {
        t = printnl_0(t);
        {
          t = term_b_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_5 (ATerm t)
                {
                  ATerm q_29 = NULL;
                  q_29 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_29)), term_e_15));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_5);
                {
                  ATerm t_5 (ATerm t)
                  {
                    ATerm s_29 = NULL;
                    ATerm t_29 = NULL;
                    t = term_g_8;
                    {
                      ATerm v_5 (ATerm t)
                      {
                        t = not_null(m_29);
                        return(t);
                      }
                      t = long_description_1(t, v_5);
                      {
                        t = concat_strings_0(t);
                        {
                          t_29 = t;
                          if(((s_29 != NULL) && (s_29 != t_29)))
                            _fail(t_29);
                          else
                            s_29 = t_29;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_29)), term_g_15));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_5);
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
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym__2))
    {
      e_30 = ATgetArgument(d_30, 0);
      f_30 = ATgetArgument(d_30, 1);
      {
        ATerm l_15;
        l_15 = t;
        t = SSL_printnl(not_null(e_30), not_null(f_30));
        t = l_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_34 (ATerm))
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym_Undefined_1))
    {
      t_30 = ATgetArgument(s_30, 0);
      {
        ATerm v_30 = NULL;
        t = not_null(t_30);
        {
          t = x_34(t);
          {
            v_30 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_30));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  z_30 :
  if(!(match_cons(a_31, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_33 = NULL,p_33 = NULL,q_33 = NULL;
  m_33 = t;
  c_31 :
  if(match_cons(m_33, sym__2))
    {
      p_33 = ATgetArgument(m_33, 0);
      q_33 = ATgetArgument(m_33, 1);
      t = SSL_table_get(not_null(p_33), not_null(q_33));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym__3))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      a_34 = ATgetArgument(x_33, 2);
      {
        ATerm m_15;
        m_15 = t;
        {
          ATerm e_34 = NULL;
          ATerm f_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(z_33));
          {
            ATerm n_15 = t;
            int o_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_15);
              }
            else
              {
                t = n_15;
                t = (ATerm) ATempty;
              }
            {
              f_34 = t;
              if(((e_34 != NULL) && (e_34 != f_34)))
                _fail(f_34);
              else
                e_34 = f_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_33), not_null(z_33), (ATerm) ATinsert(CheckATermList(not_null(e_34)), not_null(a_34)));
            t = table_put_0(t);
          }
        }
        t = m_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_45 (ATerm))
{
  ATerm j_34 = NULL;
  ATerm k_34 = NULL;
  t = term_g_8;
  {
    t = b_45(t);
    {
      k_34 = t;
      if(((j_34 != NULL) && (j_34 != k_34)))
        _fail(k_34);
      else
        j_34 = k_34;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, not_null(j_34));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  p_34 :
  if(match_string(q_34, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(q_34) == AT_LIST) && ((ATermList) q_34 != ATempty)))
        {
          r_34 = ATgetFirst((ATermList) q_34);
          s_34 = (ATerm) ATgetNext((ATermList) q_34);
          {
            ATerm v_34 = NULL;
            ATerm p_15;
            p_15 = t;
            {
              t = not_null(r_34);
              t = b_0(t);
            }
            t = p_15;
            {
              ATerm y_34 = NULL;
              t = term_g_8;
              {
                t = c_0(t);
                {
                  y_34 = t;
                  if(((v_34 != NULL) && (v_34 != y_34)))
                    _fail(y_34);
                  else
                    v_34 = y_34;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_34)), not_null(v_34));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm d_35 = NULL;
    d_35 = t;
    c_35 :
    if(!(match_string(d_35, "--help")))
      {
        if(!(match_string(d_35, "-h")))
          {
            if(!(match_string(d_35, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_q_15;
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  t = Option_3(t, w_5, x_5, y_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(((ATgetType(g_35) == AT_LIST) && ((ATermList) g_35 != ATempty)))
    {
      h_35 = ATgetFirst((ATermList) g_35);
      i_35 = (ATerm) ATgetNext((ATermList) g_35);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_35)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_35)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_41 (ATerm), ATerm k_41 (ATerm))
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  p_35 :
  if(((ATgetType(q_35) == AT_LIST) && ((ATermList) q_35 != ATempty)))
    {
      r_35 = ATgetFirst((ATermList) q_35);
      s_35 = (ATerm) ATgetNext((ATermList) q_35);
      {
        ATerm v_35 = NULL;
        t = not_null(r_35);
        {
          ATerm x_35 = NULL;
          t = j_41(t);
          {
            v_35 = t;
            {
              t = not_null(s_35);
              {
                t = k_41(t);
                {
                  x_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_35)), not_null(v_35));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  c_36 :
  if(((ATermList) d_36 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_44 (ATerm))
{
  ATerm s_15;
  s_15 = t;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_t_15;
      t = z_44(t);
      return(t);
    }
    t = try_1(t, z_5);
  }
  t = s_15;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm f_36 = NULL;
      f_36 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_36));
      return(t);
    }
    ATerm f_6 (ATerm t)
    {
      ATerm u_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              {
                t = z_44(t);
                t = Cons_2(t, _id, f_6);
              }
            }
          LocalPopChoice(v_15);
        }
      else
        {
          t = u_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_6, f_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  ATerm y_15;
  y_15 = t;
  {
    ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
    o_36 = t;
    k_36 :
    if(match_cons(o_36, sym__3))
      {
        p_36 = ATgetArgument(o_36, 0);
        q_36 = ATgetArgument(o_36, 1);
        r_36 = ATgetArgument(o_36, 2);
        {
          if(((l_36 != NULL) && (l_36 != p_36)))
            _fail(p_36);
          else
            l_36 = p_36;
          {
            if(((m_36 != NULL) && (m_36 != q_36)))
              _fail(q_36);
            else
              m_36 = q_36;
            {
              if(((n_36 != NULL) && (n_36 != r_36)))
                _fail(r_36);
              else
                n_36 = r_36;
              t = SSL_table_put(not_null(l_36), not_null(m_36), not_null(n_36));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = y_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm u_36 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    t = term_a_16;
    t = table_put_0(t);
  }
  t = z_15;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_44(t);
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_6);
    {
      ATerm h_6 (ATerm t)
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm i_6 (ATerm t)
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm v_36 = NULL;
                  v_36 = t;
                  if(((u_36 != NULL) && (u_36 != v_36)))
                    _fail(v_36);
                  else
                    u_36 = v_36;
                  return(t);
                }
                t = Undefined_1(t, n_6);
                return(t);
              }
              t = option_defined_1(t, i_6);
              {
                ATerm f_16;
                f_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_36)), term_g_16));
                  t = printnl_0(t);
                }
                t = f_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_6);
      {
        ATerm h_16;
        h_16 = t;
        {
          t = term_z_14;
          t = table_destroy_0(t);
        }
        t = h_16;
      }
    }
  }
  return(t);
}
ATerm Abox2text_0 (ATerm t)
{
  ATerm d_37 = NULL;
  ATerm f_37 = NULL,g_37 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    d_37 = t;
    {
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(j_16);
        }
      else
        {
          t = i_16;
          {
            ATerm k_16 = t;
            int l_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_16;
                m_16 = t;
                {
                  ATerm n_16 = t;
                  int o_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_6 (ATerm t)
                      {
                        ATerm h_37 = NULL,i_37 = NULL;
                        h_37 = t;
                        z_36 :
                        if(match_cons(h_37, sym_Output_1))
                          {
                            i_37 = ATgetArgument(h_37, 0);
                            if(((g_37 != NULL) && (g_37 != i_37)))
                              _fail(i_37);
                            else
                              g_37 = i_37;
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = option_defined_1(t, o_6);
                      {
                        t = not_null(g_37);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(o_16);
                    }
                  else
                    {
                      t = n_16;
                      {
                        ATerm j_37 = NULL;
                        t = term_p_16;
                        {
                          j_37 = t;
                          if(((g_37 != NULL) && (g_37 != j_37)))
                            _fail(j_37);
                          else
                            g_37 = j_37;
                        }
                      }
                    }
                }
                t = m_16;
                {
                  t = input_file_0(t);
                  {
                    ATerm t_6 (ATerm t)
                    {
                      ATerm k_37 = NULL;
                      t = abox2text_0(t);
                      {
                        k_37 = t;
                        if(((f_37 != NULL) && (f_37 != k_37)))
                          _fail(k_37);
                        else
                          f_37 = k_37;
                      }
                      return(t);
                    }
                    t = _2(t, _id, t_6);
                    {
                      t = not_null(f_37);
                      {
                        ATerm u_6 (ATerm t)
                        {
                          ATerm v_6 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm q_16;
                              q_16 = t;
                              {
                                ATerm y_6 (ATerm t)
                                {
                                  t = not_null(g_37);
                                  return(t);
                                }
                                ATerm z_6 (ATerm t)
                                {
                                  ATerm l_37 = NULL;
                                  l_37 = t;
                                  t = (ATerm) ATinsert(ATempty, not_null(l_37));
                                  return(t);
                                }
                                t = split_2(t, y_6, z_6);
                                t = print_0(t);
                              }
                              t = q_16;
                            }
                            return(t);
                          }
                          t = try_1(t, v_6);
                          return(t);
                        }
                        t = topdown_1(t, u_6);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_37), (ATerm) ATinsert(ATempty, term_r_16));
                          {
                            t = print_0(t);
                            t = report_success_0(t);
                          }
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(l_16);
              }
            else
              {
                t = k_16;
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
  t = Abox2text_0(t);
  return(t);
}

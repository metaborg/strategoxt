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
ATerm term_q_17;
ATerm term_j_17;
ATerm term_w_16;
ATerm term_q_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_j_12;
ATerm term_q_11;
ATerm term_t_10;
ATerm term_s_9;
ATerm term_b_8;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_j_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_h_3;
void init_constant_terms (void)
{
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__3, term_u_15, term_v_15, (ATerm) ATempty);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_63 (ATerm));
ATerm topdown_1 (ATerm, ATerm g_59 (ATerm));
ATerm subt_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm a_58 (ATerm));
ATerm separate_by_1 (ATerm, ATerm b_58 (ATerm));
ATerm add_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm o_0 (ATerm), ATerm r_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm u_51 (ATerm));
ATerm H_2 (ATerm, ATerm y_39 (ATerm), ATerm z_39 (ATerm));
ATerm filter_1 (ATerm, ATerm k_50 (ATerm));
ATerm foldr_3 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm), ATerm i_51 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm i_57 (ATerm));
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
ATerm Vspace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm split_at_1 (ATerm, ATerm d_64 (ATerm));
ATerm string_length_p__1 (ATerm, ATerm c_64 (ATerm));
ATerm conc_0 (ATerm);
ATerm map_to_r_box_0 (ATerm);
ATerm Abox2text_0 (ATerm);
ATerm abox2text_0 (ATerm);
ATerm _2 (ATerm, ATerm w_33 (ATerm), ATerm x_33 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_49 (ATerm), ATerm t_49 (ATerm));
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_47 (ATerm));
ATerm obsolete_1 (ATerm, ATerm c_48 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm s_56 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_46 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_46 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_56 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_45 (ATerm));
ATerm map_1 (ATerm, ATerm k_56 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_45 (ATerm));
ATerm Program_1 (ATerm, ATerm f_35 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_35 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_45 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_41 (ATerm), ATerm t_41 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_45 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_45 (ATerm));
ATerm Abox_2_text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATempty, term_z_6));
  {
    t = printnl_0(t);
    {
      t = term_a_7;
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
          t = f_7;
        }
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
            {
              _fail(t);
            }
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
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_0);
          return(t);
        }
        t = _2(t, n_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(r_1)), term_j_7), not_null(q_1)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = term_q_7;
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
        ATerm r_7;
        r_7 = t;
        t = SSL_print(not_null(d_2), not_null(e_2));
        t = r_7;
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
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_63(t);
      LocalPopChoice(y_7);
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
ATerm subt_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
  p_2 = t;
  o_2 :
  if(match_cons(p_2, sym__2))
    {
      q_2 = ATgetArgument(p_2, 0);
      r_2 = ATgetArgument(p_2, 1);
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(q_2), not_null(r_2));
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            t = SSL_subtr(not_null(q_2), not_null(r_2));
          }
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
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  x_2 :
  if(((ATgetType(y_2) == AT_LIST) && ((ATermList) y_2 != ATempty)))
    {
      z_2 = ATgetFirst((ATermList) y_2);
      a_3 = (ATerm) ATgetNext((ATermList) y_2);
      {
        ATerm d_3 = NULL;
        ATerm e_3 = NULL;
        t = term_b_8;
        {
          t = a_58(t);
          {
            e_3 = t;
            if(((d_3 != NULL) && (d_3 != e_3)))
              _fail(e_3);
            else
              d_3 = e_3;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_3)), not_null(z_2)), not_null(d_3));
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
  ATerm h_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = h_8;
      {
        ATerm q_0 (ATerm t)
        {
          ATerm l_8 = t;
          int o_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_8);
            }
          else
            {
              t = l_8;
              {
                t = Cons_2(t, _id, q_0);
                t = Sep_1(t, b_58);
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
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  j_3 :
  if(match_cons(k_3, sym__2))
    {
      l_3 = ATgetArgument(k_3, 0);
      m_3 = ATgetArgument(k_3, 1);
      {
        ATerm p_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_3), not_null(m_3));
            LocalPopChoice(u_8);
          }
        else
          {
            t = p_8;
            t = SSL_addr(not_null(l_3), not_null(m_3));
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
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  r_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      s_3 :
      if(((ATermList) u_3 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(v_3));
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
ATerm Cons_T_2 (ATerm t, ATerm o_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  f_4 = t;
  d_4 :
  if(match_cons(f_4, sym__2))
    {
      g_4 = ATgetArgument(f_4, 0);
      j_4 = ATgetArgument(f_4, 1);
      e_4 :
      if(((ATgetType(g_4) == AT_LIST) && ((ATermList) g_4 != ATempty)))
        {
          h_4 = ATgetFirst((ATermList) g_4);
          i_4 = (ATerm) ATgetNext((ATermList) g_4);
          {
            ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
            ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), not_null(j_4));
            {
              t = o_0(t);
              {
                r_4 = t;
                c_4 :
                if(match_cons(r_4, sym__2))
                  {
                    s_4 = ATgetArgument(r_4, 0);
                    t_4 = ATgetArgument(r_4, 1);
                    {
                      ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
                      if(((p_4 != NULL) && (p_4 != s_4)))
                        _fail(s_4);
                      else
                        p_4 = s_4;
                      {
                        if(((n_4 != NULL) && (n_4 != t_4)))
                          _fail(t_4);
                        else
                          n_4 = t_4;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(n_4));
                          {
                            t = r_0(t);
                            {
                              u_4 = t;
                              b_4 :
                              if(match_cons(u_4, sym__2))
                                {
                                  v_4 = ATgetArgument(u_4, 0);
                                  w_4 = ATgetArgument(u_4, 1);
                                  {
                                    if(((q_4 != NULL) && (q_4 != v_4)))
                                      _fail(v_4);
                                    else
                                      q_4 = v_4;
                                    if(((o_4 != NULL) && (o_4 != w_4)))
                                      _fail(w_4);
                                    else
                                      o_4 = w_4;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_4)), not_null(p_4)), not_null(o_4));
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
  ATerm a_5 (ATerm t)
  {
    ATerm v_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, u_51, a_5);
        LocalPopChoice(a_9);
      }
    else
      {
        t = v_8;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = a_5(t);
  return(t);
}
ATerm H_2 (ATerm t, ATerm y_39 (ATerm), ATerm z_39 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_H_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      {
        ATerm k_5 = NULL;
        t = not_null(g_5);
        {
          ATerm m_5 = NULL;
          t = y_39(t);
          {
            k_5 = t;
            {
              t = not_null(h_5);
              {
                t = z_39(t);
                {
                  m_5 = t;
                  t = (ATerm) ATmakeAppl(sym_H_2, not_null(k_5), not_null(m_5));
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
  ATerm b_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_9);
    }
  else
    {
      t = b_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, k_50);
              return(t);
            }
            t = Cons_2(t, k_50, s_0);
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
              t_5 = t;
              s_5 :
              if(((ATgetType(t_5) == AT_LIST) && ((ATermList) t_5 != ATempty)))
                {
                  u_5 = ATgetFirst((ATermList) t_5);
                  v_5 = (ATerm) ATgetNext((ATermList) t_5);
                  {
                    t = not_null(v_5);
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_51(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
        c_6 = t;
        b_6 :
        if(((ATgetType(c_6) == AT_LIST) && ((ATermList) c_6 != ATempty)))
          {
            d_6 = ATgetFirst((ATermList) c_6);
            e_6 = (ATerm) ATgetNext((ATermList) c_6);
            {
              ATerm h_6 = NULL,j_6 = NULL;
              ATerm n_9;
              n_9 = t;
              {
                ATerm i_6 = NULL;
                t = not_null(d_6);
                {
                  t = i_51(t);
                  {
                    i_6 = t;
                    if(((h_6 != NULL) && (h_6 != i_6)))
                      _fail(i_6);
                    else
                      h_6 = i_6;
                  }
                }
              }
              t = n_9;
              {
                ATerm k_6 = NULL;
                t = not_null(e_6);
                {
                  t = foldr_3(t, g_51, h_51, i_51);
                  {
                    k_6 = t;
                    if(((j_6 != NULL) && (j_6 != k_6)))
                      _fail(k_6);
                    else
                      j_6 = k_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), not_null(j_6));
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
  ATerm t_0 (ATerm t)
  {
    t = term_q_7;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = term_a_7;
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
  ATerm p_6 = NULL;
  p_6 = t;
  o_6 :
  if(!(match_cons(p_6, sym_HS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm s_6 = NULL,u_6 = NULL;
  ATerm o_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          ATerm t_6 = NULL;
          t_6 = t;
          if(((s_6 != NULL) && (s_6 != t_6)))
            _fail(t_6);
          else
            s_6 = t_6;
          return(t);
        }
        t = SOpt_2(t, HS_0, w_0);
        return(t);
      }
      t = fetch_1(t, v_0);
      {
        t = not_null(s_6);
        t = string_to_int_0(t);
      }
      LocalPopChoice(r_9);
    }
  else
    {
      t = o_9;
      t = term_a_7;
    }
  {
    u_6 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_6), term_s_9);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_7 = NULL;
  ATerm g_7 = NULL,h_7 = NULL;
  e_7 = t;
  {
    ATerm i_7 = NULL;
    ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
    t = not_null(e_7);
    {
      i_7 = t;
      {
        t = SSL_explode_term(not_null(i_7));
        {
          k_7 = t;
          b_7 :
          if(match_cons(k_7, sym__2))
            {
              l_7 = ATgetArgument(k_7, 0);
              m_7 = ATgetArgument(k_7, 1);
              c_7 :
              if(match_string(l_7, ""))
                {
                  d_7 :
                  if(((ATgetType(m_7) == AT_LIST) && ((ATermList) m_7 != ATempty)))
                    {
                      n_7 = ATgetFirst((ATermList) m_7);
                      o_7 = (ATerm) ATgetNext((ATermList) m_7);
                      {
                        if(((h_7 != NULL) && (h_7 != n_7)))
                          _fail(n_7);
                        else
                          h_7 = n_7;
                        if(((g_7 != NULL) && (g_7 != o_7)))
                          _fail(o_7);
                        else
                          g_7 = o_7;
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
    t = not_null(h_7);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm s_7 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = i_57(t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = Cons_2(t, _id, s_7);
      }
    return(t);
  }
  t = s_7(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      {
        ATerm y_9;
        y_9 = t;
        {
          ATerm z_9 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_7), not_null(x_7));
              LocalPopChoice(b_10);
            }
          else
            {
              t = z_9;
              t = SSL_gtr(not_null(w_7), not_null(x_7));
            }
        }
        t = y_9;
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
  ATerm d_8 = NULL;
  ATerm c_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
      e_8 = t;
      c_8 :
      if(match_cons(e_8, sym__2))
        {
          f_8 = ATgetArgument(e_8, 0);
          g_8 = ATgetArgument(e_8, 1);
          {
            if(((d_8 != NULL) && (d_8 != f_8)))
              _fail(f_8);
            else
              d_8 = f_8;
            if(((d_8 != NULL) && (d_8 != g_8)))
              _fail(g_8);
            else
              d_8 = g_8;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_10);
    }
  else
    {
      t = c_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm i_8 (ATerm t)
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_63(t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        {
          t = h_63(t);
          t = i_8(t);
        }
      }
    return(t);
  }
  t = i_8(t);
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
  ATerm x_0 (ATerm t)
  {
    ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
    r_8 = t;
    k_8 :
    if(match_cons(r_8, sym__2))
      {
        s_8 = ATgetArgument(r_8, 0);
        t_8 = ATgetArgument(r_8, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_8), not_null(t_8), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
    w_8 = t;
    m_8 :
    if(match_cons(w_8, sym__3))
      {
        x_8 = ATgetArgument(w_8, 0);
        y_8 = ATgetArgument(w_8, 1);
        z_8 = ATgetArgument(w_8, 2);
        n_8 :
        if(match_int(x_8, 0))
          {
            t = not_null(z_8);
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
  ATerm z_0 (ATerm t)
  {
    ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
    c_9 = t;
    q_8 :
    if(match_cons(c_9, sym__3))
      {
        d_9 = ATgetArgument(c_9, 0);
        e_9 = ATgetArgument(c_9, 1);
        f_9 = ATgetArgument(c_9, 2);
        {
          ATerm j_9 = NULL;
          ATerm m_10;
          m_10 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), term_a_7);
            t = geq_0(t);
          }
          t = m_10;
          {
            ATerm k_9 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), term_a_7);
            {
              t = subt_0(t);
              {
                k_9 = t;
                if(((j_9 != NULL) && (j_9 != k_9)))
                  _fail(k_9);
                else
                  j_9 = k_9;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_9), not_null(e_9), (ATerm) ATinsert(CheckATermList(not_null(f_9)), not_null(e_9)));
          }
        }
      }
    else
      {
        _fail(t);
      }
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
  ATerm q_9 = NULL;
  q_9 = t;
  p_9 :
  if(!(match_cons(q_9, sym_IS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm t_9 = NULL,v_9 = NULL;
  ATerm n_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm u_9 = NULL;
          u_9 = t;
          if(((t_9 != NULL) && (t_9 != u_9)))
            _fail(u_9);
          else
            t_9 = u_9;
          return(t);
        }
        t = SOpt_2(t, IS_0, b_1);
        return(t);
      }
      t = fetch_1(t, a_1);
      {
        t = not_null(t_9);
        t = string_to_int_0(t);
      }
      LocalPopChoice(p_10);
    }
  else
    {
      t = n_10;
      t = term_q_7;
    }
  {
    v_9 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), term_s_9);
      t = copy_char_0(t);
    }
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  t = SSL_string_to_int(not_null(a_10));
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm e_10 = NULL;
  e_10 = t;
  d_10 :
  if(!(match_cons(e_10, sym_VS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm u_39 (ATerm), ATerm v_39 (ATerm))
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym_SOpt_2))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      {
        ATerm o_10 = NULL;
        t = not_null(k_10);
        {
          ATerm q_10 = NULL;
          t = u_39(t);
          {
            o_10 = t;
            {
              t = not_null(l_10);
              {
                t = v_39(t);
                {
                  q_10 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(o_10), not_null(q_10));
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
  ATerm y_10 = NULL,a_11 = NULL;
  ATerm c_11 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          ATerm z_10 = NULL;
          z_10 = t;
          if(((y_10 != NULL) && (y_10 != z_10)))
            _fail(z_10);
          else
            y_10 = z_10;
          return(t);
        }
        t = SOpt_2(t, VS_0, d_1);
        return(t);
      }
      t = fetch_1(t, c_1);
      {
        t = not_null(y_10);
        t = string_to_int_0(t);
      }
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      t = term_q_7;
    }
  {
    a_11 = t;
    {
      ATerm d_11 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), term_a_7);
      {
        t = add_0(t);
        {
          d_11 = t;
          if(((c_11 != NULL) && (c_11 != d_11)))
            _fail(d_11);
          else
            c_11 = d_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_t_10);
        t = copy_char_0(t);
      }
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,r_11 = NULL;
  j_11 = t;
  i_11 :
  if(((ATgetType(j_11) == AT_LIST) && ((ATermList) j_11 != ATempty)))
    {
      k_11 = ATgetFirst((ATermList) j_11);
      r_11 = (ATerm) ATgetNext((ATermList) j_11);
      t = not_null(r_11);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  w_11 :
  if(((ATgetType(y_11) == AT_LIST) && ((ATermList) y_11 != ATempty)))
    {
      z_11 = ATgetFirst((ATermList) y_11);
      a_12 = (ATerm) ATgetNext((ATermList) y_11);
      x_11 :
      if(((ATermList) a_12 == ATempty))
        {
          t = not_null(z_11);
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
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm split_at_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm o_12 = NULL;
  ATerm q_12 = NULL;
  o_12 = t;
  {
    ATerm r_12 = NULL;
    t = not_null(o_12);
    {
      t = explode_string_0(t);
      {
        t = reverse_0(t);
        {
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(q_12), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm n_13 (ATerm t)
        {
          ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
          s_12 = t;
          m_12 :
          if(match_cons(s_12, sym__3))
            {
              t_12 = ATgetArgument(s_12, 0);
              w_12 = ATgetArgument(s_12, 1);
              x_12 = ATgetArgument(s_12, 2);
              n_12 :
              if(((ATermList) t_12 == ATempty))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_12)), not_null(w_12));
                }
              else
                {
                  if(((ATgetType(t_12) == AT_LIST) && ((ATermList) t_12 != ATempty)))
                    {
                      u_12 = ATgetFirst((ATermList) t_12);
                      v_12 = (ATerm) ATgetNext((ATermList) t_12);
                      {
                        ATerm w_10 = t;
                        int x_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = not_null(u_12);
                            {
                              t = d_64(t);
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_12), (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(not_null(x_12)), not_null(w_12)));
                                t = n_13(t);
                              }
                            }
                            LocalPopChoice(x_10);
                          }
                        else
                          {
                            t = w_10;
                            {
                              t = (ATerm) ATmakeAppl(sym__3, not_null(v_12), (ATerm)ATinsert(CheckATermList(not_null(w_12)), not_null(u_12)), not_null(x_12));
                              t = n_13(t);
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
        t = n_13(t);
        t = map_1(t, implode_string_0);
      }
    }
  }
  return(t);
}
ATerm string_length_p__1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    ATerm b_14 = NULL;
    b_14 = t;
    r_13 :
    if(!(match_int(b_14, 10)))
      {
        _fail(t);
      }
    return(t);
  }
  t = split_at_1(t, e_1);
  {
    ATerm b_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        {
          t = last_0(t);
          t = string_length_0(t);
        }
        LocalPopChoice(e_11);
      }
    else
      {
        t = b_11;
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
ATerm conc_0 (ATerm t)
{
  ATerm e_14 = NULL,h_14 = NULL,i_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym__2))
    {
      h_14 = ATgetArgument(e_14, 0);
      i_14 = ATgetArgument(e_14, 1);
      {
        t = not_null(h_14);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(i_14);
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
ATerm map_to_r_box_0 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, not_null(e_15), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm k_17 (ATerm t)
      {
        ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
        ATerm m_17 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(m_15))));
          t = conc_0(t);
          return(t);
        }
        ATerm n_17 (ATerm t)
        {
          ATerm n_16 = NULL;
          ATerm o_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(g_15), not_null(h_15))));
          {
            t = conc_0(t);
            {
              o_16 = t;
              if(((n_16 != NULL) && (n_16 != o_16)))
                _fail(o_16);
              else
                n_16 = o_16;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_15), (ATerm)ATempty, not_null(n_16));
            t = k_17(t);
          }
          return(t);
        }
        ATerm o_17 (ATerm t)
        {
          ATerm z_16 = NULL;
          ATerm a_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, not_null(g_15), not_null(h_15))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(m_15))));
          {
            t = conc_0(t);
            {
              a_17 = t;
              if(((z_16 != NULL) && (z_16 != a_17)))
                _fail(a_17);
              else
                z_16 = a_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_15), (ATerm)ATempty, not_null(z_16));
            t = k_17(t);
          }
          return(t);
        }
        ATerm p_17 (ATerm t)
        {
          ATerm h_17 = NULL;
          ATerm i_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_15), (ATerm) ATinsert(ATempty, not_null(k_15)));
          {
            t = conc_0(t);
            {
              i_17 = t;
              if(((h_17 != NULL) && (h_17 != i_17)))
                _fail(i_17);
              else
                h_17 = i_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_15), not_null(h_17), not_null(n_15));
            t = k_17(t);
          }
          return(t);
        }
        i_15 = t;
        y_14 :
        if(match_cons(i_15, sym__3))
          {
            j_15 = ATgetArgument(i_15, 0);
            m_15 = ATgetArgument(i_15, 1);
            n_15 = ATgetArgument(i_15, 2);
            z_14 :
            if(((ATermList) j_15 == ATempty))
              {
                a_15 :
                if(((ATermList) m_15 == ATempty))
                  {
                    {
                      ATerm f_11 = t;
                      int g_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(n_15);
                          LocalPopChoice(g_11);
                        }
                      else
                        {
                          t = f_11;
                          t = m_17(t);
                        }
                    }
                  }
                else
                  {
                    t = m_17(t);
                  }
              }
            else
              {
                if(((ATgetType(j_15) == AT_LIST) && ((ATermList) j_15 != ATempty)))
                  {
                    k_15 = ATgetFirst((ATermList) j_15);
                    l_15 = (ATerm) ATgetNext((ATermList) j_15);
                    b_15 :
                    if(((ATermList) m_15 == ATempty))
                      {
                        c_15 :
                        if(match_cons(k_15, sym_R_2))
                          {
                            g_15 = ATgetArgument(k_15, 0);
                            h_15 = ATgetArgument(k_15, 1);
                            {
                              ATerm h_11 = t;
                              int l_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = n_17(t);
                                  LocalPopChoice(l_11);
                                }
                              else
                                {
                                  t = h_11;
                                  {
                                    ATerm m_11 = t;
                                    int n_11 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = o_17(t);
                                        LocalPopChoice(n_11);
                                      }
                                    else
                                      {
                                        t = m_11;
                                        t = p_17(t);
                                      }
                                  }
                                }
                            }
                          }
                        else
                          {
                            t = p_17(t);
                          }
                      }
                    else
                      {
                        d_15 :
                        if(match_cons(k_15, sym_R_2))
                          {
                            g_15 = ATgetArgument(k_15, 0);
                            h_15 = ATgetArgument(k_15, 1);
                            {
                              ATerm o_11 = t;
                              int p_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = o_17(t);
                                  LocalPopChoice(p_11);
                                }
                              else
                                {
                                  t = o_11;
                                  t = p_17(t);
                                }
                            }
                          }
                        else
                          {
                            t = p_17(t);
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
      t = k_17(t);
    }
  }
  return(t);
}
ATerm Abox2text_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  u_19 = t;
  k_19 :
  if(match_cons(u_19, sym__2))
    {
      v_19 = ATgetArgument(u_19, 0);
      y_19 = ATgetArgument(u_19, 1);
      l_19 :
      if(((ATermList) v_19 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(y_19));
        }
      else
        {
          if(((ATgetType(v_19) == AT_LIST) && ((ATermList) v_19 != ATempty)))
            {
              w_19 = ATgetFirst((ATermList) v_19);
              x_19 = (ATerm) ATgetNext((ATermList) v_19);
              m_19 :
              if(((ATermList) x_19 == ATempty))
                {
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(y_19));
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
              if(match_cons(v_19, sym_ALT_2))
                {
                  w_19 = ATgetArgument(v_19, 0);
                  x_19 = ATgetArgument(v_19, 1);
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(y_19));
                    t = Abox2text_0(t);
                  }
                }
              else
                {
                  if(match_cons(v_19, sym_A_3))
                    {
                      w_19 = ATgetArgument(v_19, 0);
                      x_19 = ATgetArgument(v_19, 1);
                      q_19 = ATgetArgument(v_19, 2);
                      {
                        ATerm i_20 = NULL;
                        ATerm j_20 = NULL;
                        t = not_null(q_19);
                        {
                          t = map_to_r_box_0(t);
                          {
                            j_20 = t;
                            if(((i_20 != NULL) && (i_20 != j_20)))
                              _fail(j_20);
                            else
                              i_20 = j_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(x_19), not_null(i_20)), not_null(y_19));
                          t = Abox2text_0(t);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_19, sym_R_2))
                        {
                          w_19 = ATgetArgument(v_19, 0);
                          x_19 = ATgetArgument(v_19, 1);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(w_19), not_null(x_19)), not_null(y_19));
                            t = Abox2text_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(v_19, sym_HV_2))
                            {
                              w_19 = ATgetArgument(v_19, 0);
                              x_19 = ATgetArgument(v_19, 1);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(w_19), not_null(x_19)), not_null(y_19));
                                t = Abox2text_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(v_19, sym_FBOX_2))
                                {
                                  w_19 = ATgetArgument(v_19, 0);
                                  x_19 = ATgetArgument(v_19, 1);
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(y_19));
                                    t = Abox2text_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(v_19, sym_C_2))
                                    {
                                      w_19 = ATgetArgument(v_19, 0);
                                      x_19 = ATgetArgument(v_19, 1);
                                      n_19 :
                                      if(((ATgetType(x_19) == AT_LIST) && ((ATermList) x_19 != ATempty)))
                                        {
                                          r_19 = ATgetFirst((ATermList) x_19);
                                          t_19 = (ATerm) ATgetNext((ATermList) x_19);
                                          o_19 :
                                          if(match_cons(r_19, sym_S_1))
                                            {
                                              s_19 = ATgetArgument(r_19, 0);
                                              p_19 :
                                              if(((ATermList) t_19 == ATempty))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), not_null(y_19));
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
                                      if(match_cons(v_19, sym_S_1))
                                        {
                                          w_19 = ATgetArgument(v_19, 0);
                                          {
                                            ATerm w_20 = NULL;
                                            ATerm x_20 = NULL,z_20 = NULL;
                                            ATerm y_20 = NULL;
                                            t = not_null(w_19);
                                            {
                                              ATerm g_1 (ATerm t)
                                              {
                                                t = not_null(y_19);
                                                return(t);
                                              }
                                              t = string_length_p__1(t, g_1);
                                              {
                                                y_20 = t;
                                                if(((x_20 != NULL) && (x_20 != y_20)))
                                                  _fail(y_20);
                                                else
                                                  x_20 = y_20;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(x_20));
                                              {
                                                t = add_0(t);
                                                {
                                                  z_20 = t;
                                                  if(((w_20 != NULL) && (w_20 != z_20)))
                                                    _fail(z_20);
                                                  else
                                                    w_20 = z_20;
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(w_20));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(v_19, sym_V_2))
                                            {
                                              w_19 = ATgetArgument(v_19, 0);
                                              x_19 = ATgetArgument(v_19, 1);
                                              {
                                                ATerm d_21 = NULL;
                                                t = not_null(w_19);
                                                {
                                                  ATerm f_21 = NULL;
                                                  t = Vspace_0(t);
                                                  {
                                                    d_21 = t;
                                                    {
                                                      t = not_null(w_19);
                                                      {
                                                        ATerm h_21 = NULL;
                                                        t = Ispace_0(t);
                                                        {
                                                          f_21 = t;
                                                          {
                                                            ATerm j_21 = NULL,l_21 = NULL;
                                                            t = string_length_0(t);
                                                            {
                                                              h_21 = t;
                                                              {
                                                                ATerm k_21 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), term_s_9);
                                                                {
                                                                  t = copy_char_0(t);
                                                                  {
                                                                    k_21 = t;
                                                                    if(((j_21 != NULL) && (j_21 != k_21)))
                                                                      _fail(k_21);
                                                                    else
                                                                      j_21 = k_21;
                                                                  }
                                                                }
                                                                {
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_21)), not_null(f_21)), not_null(d_21));
                                                                  {
                                                                    ATerm n_21 = NULL;
                                                                    t = concat_strings_0(t);
                                                                    {
                                                                      l_21 = t;
                                                                      {
                                                                        t = not_null(x_19);
                                                                        {
                                                                          ATerm h_1 (ATerm t)
                                                                          {
                                                                            ATerm s_11 = t;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                PopChoice();
                                                                                _fail(t);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = s_11;
                                                                              }
                                                                            return(t);
                                                                          }
                                                                          t = filter_1(t, h_1);
                                                                          {
                                                                            ATerm t_11 = t;
                                                                            int u_11 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(y_19));
                                                                                LocalPopChoice(u_11);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = t_11;
                                                                                {
                                                                                  ATerm i_1 (ATerm t)
                                                                                  {
                                                                                    ATerm o_21 = NULL;
                                                                                    o_21 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_21), not_null(y_19));
                                                                                      t = Abox2text_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm j_1 (ATerm t)
                                                                                  {
                                                                                    ATerm k_1 (ATerm t)
                                                                                    {
                                                                                      ATerm q_21 = NULL;
                                                                                      ATerm s_21 = NULL;
                                                                                      q_21 = t;
                                                                                      {
                                                                                        ATerm t_21 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(h_21));
                                                                                        {
                                                                                          t = add_0(t);
                                                                                          {
                                                                                            t_21 = t;
                                                                                            if(((s_21 != NULL) && (s_21 != t_21)))
                                                                                              _fail(t_21);
                                                                                            else
                                                                                              s_21 = t_21;
                                                                                          }
                                                                                        }
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_21), not_null(s_21));
                                                                                          t = Abox2text_0(t);
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, k_1);
                                                                                    return(t);
                                                                                  }
                                                                                  t = Cons_2(t, i_1, j_1);
                                                                                  {
                                                                                    ATerm m_1 (ATerm t)
                                                                                    {
                                                                                      ATerm o_1 (ATerm t)
                                                                                      {
                                                                                        ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
                                                                                        u_21 = t;
                                                                                        u_18 :
                                                                                        if(match_cons(u_21, sym__2))
                                                                                          {
                                                                                            v_21 = ATgetArgument(u_21, 0);
                                                                                            w_21 = ATgetArgument(u_21, 1);
                                                                                            if(((n_21 != NULL) && (n_21 != w_21)))
                                                                                              _fail(w_21);
                                                                                            else
                                                                                              n_21 = w_21;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                        return(t);
                                                                                      }
                                                                                      t = Cons_2(t, o_1, Nil_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = at_last_1(t, m_1);
                                                                                    {
                                                                                      t = map_1(t, Fst_0);
                                                                                      {
                                                                                        ATerm x_1 (ATerm t)
                                                                                        {
                                                                                          t = not_null(l_21);
                                                                                          return(t);
                                                                                        }
                                                                                        t = separate_by_1(t, x_1);
                                                                                        {
                                                                                          ATerm y_1 (ATerm t)
                                                                                          {
                                                                                            t = not_null(n_21);
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
                                              if(match_cons(v_19, sym_H_2))
                                                {
                                                  w_19 = ATgetArgument(v_19, 0);
                                                  x_19 = ATgetArgument(v_19, 1);
                                                  {
                                                    ATerm a_22 = NULL;
                                                    t = not_null(w_19);
                                                    {
                                                      ATerm c_22 = NULL;
                                                      t = Hspace_0(t);
                                                      {
                                                        a_22 = t;
                                                        {
                                                          ATerm e_22 = NULL,s_22 = NULL,t_22 = NULL,w_22 = NULL;
                                                          t = string_length_0(t);
                                                          {
                                                            c_22 = t;
                                                            {
                                                              ATerm f_22 = NULL;
                                                              t = not_null(x_19);
                                                              {
                                                                ATerm z_1 (ATerm t)
                                                                {
                                                                  ATerm v_11 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm b_12 = t;
                                                                      int c_12 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = Nil_0(t);
                                                                          LocalPopChoice(c_12);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_12;
                                                                          t = H_2(t, Nil_0, Nil_0);
                                                                        }
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = v_11;
                                                                    }
                                                                  return(t);
                                                                }
                                                                t = filter_1(t, z_1);
                                                                {
                                                                  f_22 = t;
                                                                  if(((e_22 != NULL) && (e_22 != f_22)))
                                                                    _fail(f_22);
                                                                  else
                                                                    e_22 = f_22;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_22), not_null(y_19));
                                                                {
                                                                  ATerm a_2 (ATerm t)
                                                                  {
                                                                    ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
                                                                    g_22 = t;
                                                                    f_19 :
                                                                    if(match_cons(g_22, sym__2))
                                                                      {
                                                                        h_22 = ATgetArgument(g_22, 0);
                                                                        i_22 = ATgetArgument(g_22, 1);
                                                                        {
                                                                          ATerm l_22 = NULL,m_22 = NULL,q_22 = NULL;
                                                                          ATerm d_12;
                                                                          d_12 = t;
                                                                          {
                                                                            ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(i_22));
                                                                            {
                                                                              t = Abox2text_0(t);
                                                                              {
                                                                                n_22 = t;
                                                                                a_19 :
                                                                                if(match_cons(n_22, sym__2))
                                                                                  {
                                                                                    o_22 = ATgetArgument(n_22, 0);
                                                                                    p_22 = ATgetArgument(n_22, 1);
                                                                                    {
                                                                                      if(((l_22 != NULL) && (l_22 != o_22)))
                                                                                        _fail(o_22);
                                                                                      else
                                                                                        l_22 = o_22;
                                                                                      if(((m_22 != NULL) && (m_22 != p_22)))
                                                                                        _fail(p_22);
                                                                                      else
                                                                                        m_22 = p_22;
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            }
                                                                          }
                                                                          t = d_12;
                                                                          {
                                                                            ATerm r_22 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(m_22));
                                                                            {
                                                                              t = add_0(t);
                                                                              {
                                                                                r_22 = t;
                                                                                if(((q_22 != NULL) && (q_22 != r_22)))
                                                                                  _fail(r_22);
                                                                                else
                                                                                  q_22 = r_22;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), not_null(q_22));
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
                                                                    s_22 = t;
                                                                    j_19 :
                                                                    if(match_cons(s_22, sym__2))
                                                                      {
                                                                        t_22 = ATgetArgument(s_22, 0);
                                                                        w_22 = ATgetArgument(s_22, 1);
                                                                        {
                                                                          ATerm z_22 = NULL;
                                                                          ATerm a_23 = NULL;
                                                                          t = not_null(t_22);
                                                                          {
                                                                            ATerm f_2 (ATerm t)
                                                                            {
                                                                              t = not_null(a_22);
                                                                              return(t);
                                                                            }
                                                                            t = separate_by_1(t, f_2);
                                                                            {
                                                                              a_23 = t;
                                                                              if(((z_22 != NULL) && (z_22 != a_23)))
                                                                                _fail(a_23);
                                                                              else
                                                                                z_22 = a_23;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(w_22));
                                                                            {
                                                                              ATerm g_2 (ATerm t)
                                                                              {
                                                                                ATerm h_2 (ATerm t)
                                                                                {
                                                                                  ATerm e_12 = t;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = Nil_0(t);
                                                                                      PopChoice();
                                                                                      _fail(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_12;
                                                                                    }
                                                                                  return(t);
                                                                                }
                                                                                ATerm i_2 (ATerm t)
                                                                                {
                                                                                  ATerm b_23 = NULL;
                                                                                  b_23 = t;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), not_null(c_22));
                                                                                    t = subt_0(t);
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = _2(t, h_2, i_2);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, g_2);
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
  ATerm k_2 (ATerm t)
  {
    t = term_q_7;
    return(t);
  }
  t = split_2(t, _id, k_2);
  t = Abox2text_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm w_33 (ATerm), ATerm x_33 (ATerm))
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym__2))
    {
      x_24 = ATgetArgument(w_24, 0);
      y_24 = ATgetArgument(w_24, 1);
      {
        ATerm b_25 = NULL;
        t = not_null(x_24);
        {
          ATerm d_25 = NULL;
          t = w_33(t);
          {
            b_25 = t;
            {
              t = not_null(y_24);
              {
                t = x_33(t);
                {
                  d_25 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_25), not_null(d_25));
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
  ATerm j_25 = NULL;
  j_25 = t;
  t = SSL_ReadFromFile(not_null(j_25));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_49 (ATerm), ATerm t_49 (ATerm))
{
  ATerm o_25 = NULL,q_25 = NULL;
  ATerm f_12;
  f_12 = t;
  {
    ATerm p_25 = NULL;
    t = s_49(t);
    {
      p_25 = t;
      if(((o_25 != NULL) && (o_25 != p_25)))
        _fail(p_25);
      else
        o_25 = p_25;
    }
  }
  t = f_12;
  {
    ATerm r_25 = NULL;
    t = t_49(t);
    {
      r_25 = t;
      if(((q_25 != NULL) && (q_25 != r_25)))
        _fail(r_25);
      else
        q_25 = r_25;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), not_null(q_25));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_25 = NULL;
  ATerm g_12;
  g_12 = t;
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 (ATerm t)
        {
          ATerm y_25 = NULL,z_25 = NULL;
          y_25 = t;
          v_25 :
          if(match_cons(y_25, sym_Input_1))
            {
              z_25 = ATgetArgument(y_25, 0);
              if(((x_25 != NULL) && (x_25 != z_25)))
                _fail(z_25);
              else
                x_25 = z_25;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_2);
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        {
          ATerm a_26 = NULL;
          t = term_j_12;
          {
            a_26 = t;
            if(((x_25 != NULL) && (x_25 != a_26)))
              _fail(a_26);
            else
              x_25 = a_26;
          }
        }
      }
  }
  t = g_12;
  {
    ATerm n_2 (ATerm t)
    {
      t = not_null(x_25);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_2);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_47 (ATerm))
{
  ATerm k_12;
  k_12 = t;
  {
    ATerm f_26 = NULL,h_26 = NULL;
    ATerm l_12;
    l_12 = t;
    {
      ATerm g_26 = NULL;
      t = v_47(t);
      {
        g_26 = t;
        if(((f_26 != NULL) && (f_26 != g_26)))
          _fail(g_26);
        else
          f_26 = g_26;
      }
    }
    t = l_12;
    {
      ATerm i_26 = NULL;
      i_26 = t;
      if(((h_26 != NULL) && (h_26 != i_26)))
        _fail(i_26);
      else
        h_26 = i_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_26)), not_null(f_26)));
        t = printnl_0(t);
      }
    }
  }
  t = k_12;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm c_48 (ATerm))
{
  ATerm p_12;
  p_12 = t;
  {
    t = c_48(t);
    {
      ATerm s_2 (ATerm t)
      {
        t = term_y_12;
        return(t);
      }
      t = debug_1(t, s_2);
    }
  }
  t = p_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
      r_26 = t;
      m_26 :
      if(match_cons(r_26, sym__2))
        {
          s_26 = ATgetArgument(r_26, 0);
          t_26 = ATgetArgument(r_26, 1);
          {
            if(((q_26 != NULL) && (q_26 != s_26)))
              _fail(s_26);
            else
              q_26 = s_26;
            {
              if(((p_26 != NULL) && (p_26 != t_26)))
                _fail(t_26);
              else
                p_26 = t_26;
              t = SSL_open_file(not_null(q_26), not_null(p_26));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm u_26 = NULL;
        ATerm v_26 = NULL;
        ATerm t_2 (ATerm t)
        {
          t = term_b_13;
          return(t);
        }
        t = obsolete_1(t, t_2);
        {
          u_26 = t;
          {
            if(((q_26 != NULL) && (q_26 != u_26)))
              _fail(u_26);
            else
              q_26 = u_26;
            {
              ATerm c_13;
              c_13 = t;
              {
                ATerm w_26 = NULL;
                t = term_d_13;
                {
                  w_26 = t;
                  if(((v_26 != NULL) && (v_26 != w_26)))
                    _fail(w_26);
                  else
                    v_26 = w_26;
                }
              }
              t = c_13;
              t = SSL_open_file(not_null(q_26), not_null(v_26));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm a_27 (ATerm t)
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_56, _id);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = Cons_2(t, _id, a_27);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_46 (ATerm))
{
  t = fetch_1(t, e_46);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm d_27 = NULL;
  ATerm g_13;
  g_13 = t;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm e_27 = NULL,f_27 = NULL;
      e_27 = t;
      c_27 :
      if(match_cons(e_27, sym_Program_1))
        {
          f_27 = ATgetArgument(e_27, 0);
          if(((d_27 != NULL) && (d_27 != f_27)))
            _fail(f_27);
          else
            d_27 = f_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, u_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_13), not_null(d_27)), term_h_13));
      {
        t = printnl_0(t);
        {
          t = term_q_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_13;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  h_27 :
  if(!(match_cons(i_27, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_46 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_2);
  t = z_46(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  o_27 = t;
  m_27 :
  if(match_string(o_27, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(o_27) == AT_LIST) && ((ATermList) o_27 != ATempty)))
        {
          p_27 = ATgetFirst((ATermList) o_27);
          q_27 = (ATerm) ATgetNext((ATermList) o_27);
          n_27 :
          if(((ATgetType(q_27) == AT_LIST) && ((ATermList) q_27 != ATempty)))
            {
              r_27 = ATgetFirst((ATermList) q_27);
              s_27 = (ATerm) ATgetNext((ATermList) q_27);
              {
                ATerm w_27 = NULL;
                ATerm o_13;
                o_13 = t;
                {
                  t = not_null(p_27);
                  t = i_0(t);
                }
                t = o_13;
                {
                  ATerm x_27 = NULL;
                  t = not_null(r_27);
                  {
                    t = j_0(t);
                    {
                      x_27 = t;
                      if(((w_27 != NULL) && (w_27 != x_27)))
                        _fail(x_27);
                      else
                        w_27 = x_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_27)), not_null(w_27));
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
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm m_28 = NULL;
        m_28 = t;
        b_28 :
        if(!(match_string(m_28, "-S")))
          {
            if(!(match_string(m_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_s_13;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_t_13;
        return(t);
      }
      t = Option_3(t, w_2, b_3, c_3);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm n_28 = NULL;
              n_28 = t;
              c_28 :
              if(!(match_string(n_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              t = term_w_13;
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = term_x_13;
              return(t);
            }
            t = Option_3(t, f_3, g_3, i_3);
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm y_13 = t;
              int z_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm o_28 = NULL;
                    o_28 = t;
                    d_28 :
                    if(!(match_string(o_28, "-v")))
                      {
                        if(!(match_string(o_28, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm o_3 (ATerm t)
                  {
                    t = term_a_14;
                    return(t);
                  }
                  ATerm p_3 (ATerm t)
                  {
                    t = term_c_14;
                    return(t);
                  }
                  t = Option_3(t, n_3, o_3, p_3);
                  LocalPopChoice(z_13);
                }
              else
                {
                  t = y_13;
                  {
                    ATerm f_14 = t;
                    int g_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_3 (ATerm t)
                        {
                          ATerm p_28 = NULL;
                          p_28 = t;
                          e_28 :
                          if(!(match_string(p_28, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_3 (ATerm t)
                        {
                          ATerm q_28 = NULL;
                          ATerm r_28 = NULL;
                          r_28 = t;
                          if(((q_28 != NULL) && (q_28 != r_28)))
                            _fail(r_28);
                          else
                            q_28 = r_28;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_28));
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          t = term_j_14;
                          return(t);
                        }
                        t = ArgOption_3(t, q_3, w_3, x_3);
                        LocalPopChoice(g_14);
                      }
                    else
                      {
                        t = f_14;
                        {
                          ATerm k_14 = t;
                          int l_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_3 (ATerm t)
                              {
                                ATerm s_28 = NULL;
                                s_28 = t;
                                g_28 :
                                if(!(match_string(s_28, "-i")))
                                  {
                                    if(!(match_string(s_28, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm z_3 (ATerm t)
                              {
                                ATerm t_28 = NULL;
                                ATerm u_28 = NULL;
                                u_28 = t;
                                if(((t_28 != NULL) && (t_28 != u_28)))
                                  _fail(u_28);
                                else
                                  t_28 = u_28;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_28));
                                return(t);
                              }
                              ATerm a_4 (ATerm t)
                              {
                                t = term_m_14;
                                return(t);
                              }
                              t = ArgOption_3(t, y_3, z_3, a_4);
                              LocalPopChoice(l_14);
                            }
                          else
                            {
                              t = k_14;
                              {
                                ATerm n_14 = t;
                                int o_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_4 (ATerm t)
                                    {
                                      ATerm v_28 = NULL;
                                      v_28 = t;
                                      i_28 :
                                      if(!(match_string(v_28, "-o")))
                                        {
                                          if(!(match_string(v_28, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm l_4 (ATerm t)
                                    {
                                      ATerm w_28 = NULL;
                                      ATerm x_28 = NULL;
                                      x_28 = t;
                                      if(((w_28 != NULL) && (w_28 != x_28)))
                                        _fail(x_28);
                                      else
                                        w_28 = x_28;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_28));
                                      return(t);
                                    }
                                    ATerm m_4 (ATerm t)
                                    {
                                      t = term_p_14;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, k_4, l_4, m_4);
                                    LocalPopChoice(o_14);
                                  }
                                else
                                  {
                                    t = n_14;
                                    {
                                      ATerm q_14 = t;
                                      int r_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_4 (ATerm t)
                                          {
                                            ATerm y_28 = NULL;
                                            y_28 = t;
                                            k_28 :
                                            if(!(match_string(y_28, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_4 (ATerm t)
                                          {
                                            t = term_s_14;
                                            return(t);
                                          }
                                          ATerm z_4 (ATerm t)
                                          {
                                            t = term_t_14;
                                            return(t);
                                          }
                                          t = Option_3(t, x_4, y_4, z_4);
                                          LocalPopChoice(r_14);
                                        }
                                      else
                                        {
                                          t = q_14;
                                          {
                                            ATerm b_5 (ATerm t)
                                            {
                                              ATerm z_28 = NULL;
                                              z_28 = t;
                                              l_28 :
                                              if(!(match_string(z_28, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm c_5 (ATerm t)
                                            {
                                              t = term_u_14;
                                              return(t);
                                            }
                                            ATerm d_5 (ATerm t)
                                            {
                                              t = term_v_14;
                                              return(t);
                                            }
                                            t = Option_3(t, b_5, c_5, d_5);
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
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_table_destroy(not_null(e_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  t = SSL_exit(not_null(i_29));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  t = SSL_implode_string(not_null(m_29));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_56 (ATerm))
{
  ATerm p_29 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_29);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          t = Nil_0(t);
          t = y_56(t);
        }
      }
    return(t);
  }
  t = p_29(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = f_15;
      {
        ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
        v_29 = t;
        r_29 :
        if(((ATgetType(v_29) == AT_LIST) && ((ATermList) v_29 != ATempty)))
          {
            w_29 = ATgetFirst((ATermList) v_29);
            x_29 = (ATerm) ATgetNext((ATermList) v_29);
            {
              t = not_null(w_29);
              {
                ATerm i_5 (ATerm t)
                {
                  t = not_null(x_29);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_5);
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
  ATerm d_30 = NULL;
  d_30 = t;
  t = SSL_explode_string(not_null(d_30));
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
ATerm long_description_1 (ATerm t, ATerm g_45 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm j_30 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = Cons_2(t, k_56, j_30);
      }
    return(t);
  }
  t = j_30(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  y_30 = t;
  v_30 :
  if(((ATgetType(y_30) == AT_LIST) && ((ATermList) y_30 != ATempty)))
    {
      w_30 = ATgetFirst((ATermList) y_30);
      x_30 = (ATerm) ATgetNext((ATermList) y_30);
      {
        ATerm b_31 = NULL;
        t = not_null(x_30);
        {
          ATerm r_15;
          r_15 = t;
          {
            ATerm c_31 = NULL,e_31 = NULL,g_31 = NULL;
            ATerm s_15;
            s_15 = t;
            {
              ATerm d_31 = NULL;
              t = h_0(t);
              {
                d_31 = t;
                if(((c_31 != NULL) && (c_31 != d_31)))
                  _fail(d_31);
                else
                  c_31 = d_31;
              }
            }
            t = s_15;
            {
              ATerm f_31 = NULL;
              t = not_null(w_30);
              {
                t = g_0(t);
                {
                  f_31 = t;
                  if(((e_31 != NULL) && (e_31 != f_31)))
                    _fail(f_31);
                  else
                    e_31 = f_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_31)), not_null(e_31));
                {
                  g_31 = t;
                  if(((b_31 != NULL) && (b_31 != g_31)))
                    _fail(g_31);
                  else
                    b_31 = g_31;
                }
              }
            }
          }
          t = r_15;
          {
            ATerm j_5 (ATerm t)
            {
              t = not_null(b_31);
              return(t);
            }
            t = reverse_acc_2(t, g_0, j_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) y_30 == ATempty))
        {
          {
            t = term_b_8;
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
  ATerm l_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_45 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_35 (ATerm))
{
  ATerm e_34 = NULL,f_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym_Program_1))
    {
      f_34 = ATgetArgument(e_34, 0);
      {
        ATerm h_34 = NULL;
        t = not_null(f_34);
        {
          t = f_35(t);
          {
            h_34 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_34));
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
  ATerm p_34 = NULL;
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm q_34 = NULL;
      q_34 = t;
      if(((p_34 != NULL) && (p_34 != q_34)))
        _fail(q_34);
      else
        p_34 = q_34;
      return(t);
    }
    t = Program_1(t, o_5);
    return(t);
  }
  t = option_defined_1(t, n_5);
  {
    ATerm p_5 (ATerm t)
    {
      ATerm r_34 = NULL;
      ATerm s_34 = NULL;
      t = term_b_8;
      {
        ATerm q_5 (ATerm t)
        {
          t = not_null(p_34);
          return(t);
        }
        t = short_description_1(t, q_5);
        {
          t = concat_strings_0(t);
          {
            s_34 = t;
            if(((r_34 != NULL) && (r_34 != s_34)))
              _fail(s_34);
            else
              r_34 = s_34;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATempty, not_null(r_34)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, p_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATempty, term_t_15));
      {
        t = printnl_0(t);
        {
          t = term_w_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_5 (ATerm t)
                {
                  ATerm t_34 = NULL;
                  t_34 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_34)), term_x_15));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    ATerm v_34 = NULL;
                    ATerm w_34 = NULL;
                    t = term_b_8;
                    {
                      ATerm x_5 (ATerm t)
                      {
                        t = not_null(p_34);
                        return(t);
                      }
                      t = long_description_1(t, x_5);
                      {
                        t = concat_strings_0(t);
                        {
                          w_34 = t;
                          if(((v_34 != NULL) && (v_34 != w_34)))
                            _fail(w_34);
                          else
                            v_34 = w_34;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_34)), term_y_15));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_5);
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
  ATerm d_35 = NULL,e_35 = NULL,h_35 = NULL;
  d_35 = t;
  c_35 :
  if(match_cons(d_35, sym__2))
    {
      e_35 = ATgetArgument(d_35, 0);
      h_35 = ATgetArgument(d_35, 1);
      {
        ATerm z_15;
        z_15 = t;
        t = SSL_printnl(not_null(e_35), not_null(h_35));
        t = z_15;
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
  ATerm o_35 = NULL,p_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym_Undefined_1))
    {
      p_35 = ATgetArgument(o_35, 0);
      {
        ATerm r_35 = NULL;
        t = not_null(p_35);
        {
          t = g_35(t);
          {
            r_35 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_35));
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
  ATerm w_35 = NULL;
  w_35 = t;
  v_35 :
  if(!(match_cons(w_35, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym__2))
    {
      a_36 = ATgetArgument(z_35, 0);
      b_36 = ATgetArgument(z_35, 1);
      t = SSL_table_get(not_null(a_36), not_null(b_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  i_36 = t;
  h_36 :
  if(match_cons(i_36, sym__3))
    {
      j_36 = ATgetArgument(i_36, 0);
      k_36 = ATgetArgument(i_36, 1);
      l_36 = ATgetArgument(i_36, 2);
      {
        ATerm a_16;
        a_16 = t;
        {
          ATerm p_36 = NULL;
          ATerm q_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), not_null(k_36));
          {
            ATerm b_16 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_16);
              }
            else
              {
                t = b_16;
                t = (ATerm) ATempty;
              }
            {
              q_36 = t;
              if(((p_36 != NULL) && (p_36 != q_36)))
                _fail(q_36);
              else
                p_36 = q_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_36), not_null(k_36), (ATerm) ATinsert(CheckATermList(not_null(p_36)), not_null(l_36)));
            t = table_put_0(t);
          }
        }
        t = a_16;
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
  ATerm u_36 = NULL;
  ATerm v_36 = NULL;
  t = term_b_8;
  {
    t = k_45(t);
    {
      v_36 = t;
      if(((u_36 != NULL) && (u_36 != v_36)))
        _fail(v_36);
      else
        u_36 = v_36;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_15, term_v_15, not_null(u_36));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  a_37 :
  if(match_string(b_37, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(b_37) == AT_LIST) && ((ATermList) b_37 != ATempty)))
        {
          c_37 = ATgetFirst((ATermList) b_37);
          d_37 = (ATerm) ATgetNext((ATermList) b_37);
          {
            ATerm g_37 = NULL;
            ATerm d_16;
            d_16 = t;
            {
              t = not_null(c_37);
              t = b_0(t);
            }
            t = d_16;
            {
              ATerm h_37 = NULL;
              t = term_b_8;
              {
                t = c_0(t);
                {
                  h_37 = t;
                  if(((g_37 != NULL) && (g_37 != h_37)))
                    _fail(h_37);
                  else
                    g_37 = h_37;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_37)), not_null(g_37));
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
  ATerm y_5 (ATerm t)
  {
    ATerm m_37 = NULL;
    m_37 = t;
    l_37 :
    if(!(match_string(m_37, "--help")))
      {
        if(!(match_string(m_37, "-h")))
          {
            if(!(match_string(m_37, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_e_16;
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_f_16;
    return(t);
  }
  t = Option_3(t, y_5, z_5, a_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
  p_37 = t;
  o_37 :
  if(((ATgetType(p_37) == AT_LIST) && ((ATermList) p_37 != ATempty)))
    {
      q_37 = ATgetFirst((ATermList) p_37);
      r_37 = (ATerm) ATgetNext((ATermList) p_37);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_37)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_37)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_41 (ATerm), ATerm t_41 (ATerm))
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(((ATgetType(z_37) == AT_LIST) && ((ATermList) z_37 != ATempty)))
    {
      a_38 = ATgetFirst((ATermList) z_37);
      b_38 = (ATerm) ATgetNext((ATermList) z_37);
      {
        ATerm e_38 = NULL;
        t = not_null(a_38);
        {
          ATerm g_38 = NULL;
          t = s_41(t);
          {
            e_38 = t;
            {
              t = not_null(b_38);
              {
                t = t_41(t);
                {
                  g_38 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_38)), not_null(e_38));
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
  ATerm m_38 = NULL;
  m_38 = t;
  l_38 :
  if(((ATermList) m_38 == ATempty))
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
ATerm parse_options_p__1 (ATerm t, ATerm i_45 (ATerm))
{
  ATerm g_16;
  g_16 = t;
  {
    ATerm f_6 (ATerm t)
    {
      t = term_h_16;
      t = i_45(t);
      return(t);
    }
    t = try_1(t, f_6);
  }
  t = g_16;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm o_38 = NULL;
      o_38 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_38));
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_16 = t;
          int l_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_16);
            }
          else
            {
              t = k_16;
              {
                t = i_45(t);
                t = Cons_2(t, _id, l_6);
              }
            }
          LocalPopChoice(j_16);
        }
      else
        {
          t = i_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_6, l_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  ATerm m_16;
  m_16 = t;
  {
    ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
    x_38 = t;
    t_38 :
    if(match_cons(x_38, sym__3))
      {
        y_38 = ATgetArgument(x_38, 0);
        z_38 = ATgetArgument(x_38, 1);
        a_39 = ATgetArgument(x_38, 2);
        {
          if(((u_38 != NULL) && (u_38 != y_38)))
            _fail(y_38);
          else
            u_38 = y_38;
          {
            if(((v_38 != NULL) && (v_38 != z_38)))
              _fail(z_38);
            else
              v_38 = z_38;
            {
              if(((w_38 != NULL) && (w_38 != a_39)))
                _fail(a_39);
              else
                w_38 = a_39;
              t = SSL_table_put(not_null(u_38), not_null(v_38), not_null(w_38));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_45 (ATerm))
{
  ATerm d_39 = NULL;
  ATerm p_16;
  p_16 = t;
  {
    t = term_q_16;
    t = table_put_0(t);
  }
  t = p_16;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_45(t);
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_6);
    {
      ATerm n_6 (ATerm t)
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            {
              ATerm q_6 (ATerm t)
              {
                ATerm r_6 (ATerm t)
                {
                  ATerm e_39 = NULL;
                  e_39 = t;
                  if(((d_39 != NULL) && (d_39 != e_39)))
                    _fail(e_39);
                  else
                    d_39 = e_39;
                  return(t);
                }
                t = Undefined_1(t, r_6);
                return(t);
              }
              t = option_defined_1(t, q_6);
              {
                ATerm v_16;
                v_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_39)), term_w_16));
                  t = printnl_0(t);
                }
                t = v_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_6);
      {
        ATerm x_16;
        x_16 = t;
        {
          t = term_u_15;
          t = table_destroy_0(t);
        }
        t = x_16;
      }
    }
  }
  return(t);
}
ATerm Abox_2_text_0 (ATerm t)
{
  ATerm m_39 = NULL;
  ATerm o_39 = NULL,p_39 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    m_39 = t;
    {
      ATerm y_16 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(b_17);
        }
      else
        {
          t = y_16;
          {
            ATerm c_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_17;
                e_17 = t;
                {
                  ATerm f_17 = t;
                  int g_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_6 (ATerm t)
                      {
                        ATerm q_39 = NULL,r_39 = NULL;
                        q_39 = t;
                        i_39 :
                        if(match_cons(q_39, sym_Output_1))
                          {
                            r_39 = ATgetArgument(q_39, 0);
                            if(((p_39 != NULL) && (p_39 != r_39)))
                              _fail(r_39);
                            else
                              p_39 = r_39;
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = option_defined_1(t, v_6);
                      {
                        t = not_null(p_39);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(g_17);
                    }
                  else
                    {
                      t = f_17;
                      {
                        ATerm s_39 = NULL;
                        t = term_j_17;
                        {
                          s_39 = t;
                          if(((p_39 != NULL) && (p_39 != s_39)))
                            _fail(s_39);
                          else
                            p_39 = s_39;
                        }
                      }
                    }
                }
                t = e_17;
                {
                  t = input_file_0(t);
                  {
                    ATerm w_6 (ATerm t)
                    {
                      ATerm t_39 = NULL;
                      t = abox2text_0(t);
                      {
                        t_39 = t;
                        if(((o_39 != NULL) && (o_39 != t_39)))
                          _fail(t_39);
                        else
                          o_39 = t_39;
                      }
                      return(t);
                    }
                    t = _2(t, _id, w_6);
                    {
                      t = not_null(o_39);
                      {
                        ATerm x_6 (ATerm t)
                        {
                          ATerm y_6 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm l_17;
                              l_17 = t;
                              {
                                ATerm w_39 = NULL;
                                ATerm x_39 = NULL;
                                x_39 = t;
                                if(((w_39 != NULL) && (w_39 != x_39)))
                                  _fail(x_39);
                                else
                                  w_39 = x_39;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), (ATerm) ATinsert(ATempty, not_null(w_39)));
                                  t = print_0(t);
                                }
                              }
                              t = l_17;
                            }
                            return(t);
                          }
                          t = try_1(t, y_6);
                          return(t);
                        }
                        t = topdown_1(t, x_6);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), (ATerm) ATinsert(ATempty, term_q_17));
                          {
                            t = print_0(t);
                            t = report_success_0(t);
                          }
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(d_17);
              }
            else
              {
                t = c_17;
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

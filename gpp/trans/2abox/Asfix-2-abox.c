#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_PP_Table_1;
Symbol sym_layout_1;
Symbol sym_Verbose_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Path_1;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_iter_sep_n_2;
Symbol sym_iter_n_1;
Symbol sym_selector_2;
Symbol sym_Path_2;
Symbol sym_Path1_1;
Symbol sym_PP_Entry_2;
Symbol sym_PP_Table_1;
Symbol sym_KW_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_Arg2_2;
Symbol sym_Arg_1;
Symbol sym_LNAT_2;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_REF_2;
Symbol sym_LBL_2;
Symbol sym_FBOX_2;
Symbol sym_R_2;
Symbol sym_A_3;
Symbol sym_ALT_2;
Symbol sym_HV_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Strict_0;
Symbol sym_amb_1;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_reject_0;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_char_class_1;
Symbol sym_layout_0;
Symbol sym_func_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_sort_1;
Symbol sym_seq_2;
Symbol sym_alt_2;
Symbol sym_opt_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_lit_1;
Symbol sym_empty_0;
Symbol sym_Conservative_0;
Symbol sym_layout_place_holder_0;
Symbol sym_Injections_0;
Symbol sym_term_1;
Symbol sym_seq_1;
Symbol sym_bracket_symbol_1;
Symbol sym_alt_2;
Symbol sym_seq_2;
Symbol sym_char_class_1;
Symbol sym_label_2;
Symbol sym_lit_1;
Symbol sym_sort_1;
Symbol sym_char_class_1;
Symbol sym_alt_2;
Symbol sym_func_2;
Symbol sym_pair_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_opt_1;
Symbol sym_seq_2;
Symbol sym_empty_0;
Symbol sym_layout_0;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_prod_fun_4;
Symbol sym_prod_3;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_reject_0;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_appl_2;
Symbol sym_fun_1;
Symbol sym_uqlit_1;
Symbol sym_qlit_1;
static void init_module_constructors (void)
{
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_iter_sep_n_2 = ATmakeSymbol("iter-sep-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_2);
  sym_iter_n_1 = ATmakeSymbol("iter-n", 1, ATfalse);
  ATprotectSymbol(sym_iter_n_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_Conservative_0 = ATmakeSymbol("Conservative", 0, ATfalse);
  ATprotectSymbol(sym_Conservative_0);
  sym_layout_place_holder_0 = ATmakeSymbol("layout-place-holder", 0, ATfalse);
  ATprotectSymbol(sym_layout_place_holder_0);
  sym_Injections_0 = ATmakeSymbol("Injections", 0, ATfalse);
  ATprotectSymbol(sym_Injections_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
  ATprotectSymbol(sym_fun_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
}
ATerm term_m_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_i_84;
ATerm term_m_83;
ATerm term_l_83;
ATerm term_k_83;
ATerm term_f_83;
ATerm term_t_82;
ATerm term_p_82;
ATerm term_d_82;
ATerm term_c_82;
ATerm term_b_82;
ATerm term_z_81;
ATerm term_o_81;
ATerm term_i_81;
ATerm term_h_81;
ATerm term_g_81;
ATerm term_f_81;
ATerm term_e_81;
ATerm term_d_81;
ATerm term_b_81;
ATerm term_q_80;
ATerm term_p_80;
ATerm term_m_80;
ATerm term_l_80;
ATerm term_k_80;
ATerm term_g_80;
ATerm term_f_80;
ATerm term_b_80;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_k_79;
ATerm term_j_79;
ATerm term_i_79;
ATerm term_d_79;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_w_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_r_78;
ATerm term_q_78;
ATerm term_g_78;
ATerm term_i_77;
ATerm term_d_77;
ATerm term_i_76;
ATerm term_e_76;
ATerm term_d_76;
ATerm term_b_76;
ATerm term_y_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_b_75;
ATerm term_z_74;
ATerm term_y_74;
ATerm term_d_74;
ATerm term_o_72;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_h_72;
ATerm term_t_71;
ATerm term_s_69;
ATerm term_l_69;
ATerm term_i_69;
ATerm term_f_69;
ATerm term_b_69;
ATerm term_y_68;
ATerm term_u_68;
ATerm term_r_68;
ATerm term_o_68;
ATerm term_g_68;
ATerm term_c_68;
ATerm term_s_67;
ATerm term_k_67;
ATerm term_g_67;
ATerm term_d_67;
ATerm term_a_67;
ATerm term_l_66;
ATerm term_e_66;
ATerm term_b_66;
ATerm term_y_65;
ATerm term_t_65;
ATerm term_d_65;
ATerm term_y_64;
ATerm term_v_64;
ATerm term_s_64;
ATerm term_p_64;
ATerm term_m_64;
ATerm term_j_64;
ATerm term_g_64;
ATerm term_d_64;
ATerm term_z_63;
ATerm term_v_63;
ATerm term_s_63;
ATerm term_p_63;
ATerm term_m_63;
ATerm term_b_63;
ATerm term_a_63;
ATerm term_s_62;
ATerm term_f_62;
ATerm term_u_61;
ATerm term_t_61;
ATerm term_s_61;
ATerm term_o_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_z_60;
ATerm term_t_60;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_d_59;
ATerm term_a_59;
ATerm term_n_58;
ATerm term_b_58;
ATerm term_h_56;
ATerm term_l_55;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_b_54;
ATerm term_x_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_l_53;
ATerm term_a_51;
ATerm term_w_50;
ATerm term_r_50;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_i_49;
ATerm term_g_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_t_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_a_47;
ATerm term_s_46;
ATerm term_q_46;
ATerm term_l_46;
ATerm term_h_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_m_45;
ATerm term_i_45;
ATerm term_g_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_t_44;
ATerm term_p_44;
ATerm term_m_44;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_c_43;
ATerm term_l_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_f_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_m_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_z_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_s_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_w_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_c_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_i_34;
ATerm term_b_34;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_w_25;
ATerm term_u_23;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_SOpt_2, term_l_20, term_m_20);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_i_34);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_35, term_w_19, term_p_35);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_35, term_w_25, term_s_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_35, term_z_35, term_a_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_36, term_f_36, term_g_36);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_36, term_x_32, term_p_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_36, term_u_36, term_v_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_36, term_y_36, term_c_37);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_37, term_h_37, term_i_37);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_37, term_l_37, term_m_37);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_37, term_s_37, term_t_37);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_37, term_z_37, term_c_38);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_38, term_f_38, term_g_38);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_38, term_l_38, term_m_38);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_38, term_q_38, term_x_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_38, term_a_39, term_b_39);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_39, term_g_39, term_h_39);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_39, term_m_39, term_n_39);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_39, term_q_39, term_s_39);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_39, term_z_39, term_a_40);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_40, term_h_40, term_i_40);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_40, term_l_40, term_m_40);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_40, term_q_40, term_u_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_40, term_x_40, term_z_40);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_41, term_d_41, term_e_41);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_41, term_q_41, term_r_41);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_41, term_u_41, term_v_41);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_41, term_y_41, term_c_42);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_42, term_i_42, term_j_42);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_x_45);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_e_46);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_m_45);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2-pgen2.0.pp.af", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym__2, term_o_49, term_i_49);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_lit_1, term_l_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_lit_1, term_g_35);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_SOpt_2, term_f_54, term_g_54);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym_Arg_1, term_w_19);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_l_72);
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(sym__2, term_w_75, term_x_75);
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_78));
  term_g_78 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_78));
  term_r_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_t_78);
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_78);
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(sym__2, term_a_79, term_s_19);
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_79));
  term_i_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_l_79);
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_f_80);
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_y_19);
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(sym__2, term_b_81, term_s_19);
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(sym__2, term_f_81, term_s_19);
  ATprotect(&(term_h_81));
  term_h_81 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_81));
  term_z_81 = (ATerm) ATmakeAppl(sym__2, term_f_80, term_s_19);
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_82));
  term_c_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(sym__3, term_x_19, term_y_19, (ATerm) ATempty);
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_b_81);
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(sym__2, term_f_83, term_s_19);
  ATprotect(&(term_l_83));
  term_l_83 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm p_13 (ATerm x_83, ATerm t);
static ATerm i_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm j_6 (ATerm u_2, ATerm v_2, ATerm w_2, ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm p_147 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm collect_p__1_0 (ATerm c_147 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm f_112 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm r_38 (ATerm z_34, ATerm a_35, ATerm b_35, ATerm t);
static ATerm r_13 (ATerm p_21, ATerm o_21, ATerm t);
ATerm instantiate_list_1_0 (ATerm i_147 (ATerm), ATerm t);
static ATerm t_13 (ATerm e_24, ATerm f_24, ATerm c_24, ATerm d_24, ATerm t);
static ATerm y_44 (ATerm z_41, ATerm a_42, ATerm b_42, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm k_147 (ATerm), ATerm t);
static ATerm u_13 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm v_13 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm k_25, ATerm l_25, ATerm t);
ATerm genzip_4_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm nzip_1_0 (ATerm g_121 (ATerm), ATerm t);
static ATerm z_13 (ATerm b_25, ATerm c_25, ATerm a_25, ATerm g_25, ATerm t);
static ATerm b_14 (ATerm o_31, ATerm m_31, ATerm n_31, ATerm t);
static ATerm t_2 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm c_14 (ATerm y_80, ATerm x_80, ATerm t);
static ATerm d_14 (ATerm z_118 (ATerm), ATerm g_29, ATerm l_230, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm p_119 (ATerm), ATerm t);
ATerm rtrim_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm l_119 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm m_126 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm l_0 (ATerm), ATerm t);
static ATerm e_14 (ATerm j_43, ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm f_14 (ATerm o_46, ATerm p_46, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm t);
static ATerm g_14 (ATerm t_62, ATerm u_62, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm a_137 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm x_145 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
static ATerm i_14 (ATerm n_71, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm r_135 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm q_135 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm s_135 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm k_14 (ATerm l_67, ATerm m_67, ATerm n_67, ATerm t);
static ATerm l_14 (ATerm j_140 (ATerm), ATerm v_67, ATerm u_67, ATerm t);
static ATerm m_14 (ATerm g_43, ATerm h_43, ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm d_99 (ATerm u_97, ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm e_146 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
static ATerm n_14 (ATerm o_66, ATerm p_66, ATerm n_66, ATerm t);
static ATerm o_14 (ATerm c_132 (ATerm), ATerm w_47, ATerm u_47, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm p_14 (ATerm t_66, ATerm u_66, ATerm t);
ATerm end_scope_1_0 (ATerm z_131 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_131 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_145 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
static ATerm n_111 (ATerm v_106, ATerm w_106, ATerm x_106, ATerm y_106, ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm j_144 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm c_119 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
static ATerm q_14 (ATerm z_43, ATerm a_44, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm k_125 (ATerm i_124, ATerm l_124, ATerm m_124, ATerm t);
ATerm number_node_1_0 (ATerm n_144 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm symbol2abox_1_0 (ATerm k_144 (ATerm), ATerm t);
static ATerm w_133 (ATerm g_132, ATerm h_132, ATerm i_132, ATerm t);
static ATerm x_133 (ATerm f_133, ATerm g_133, ATerm h_133, ATerm i_133, ATerm j_133, ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm f_129 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
ATerm escape_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
static ATerm o_139 (ATerm g_139, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm r_142 (ATerm h_142, ATerm t);
static ATerm g_12 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
static ATerm w_14 (ATerm s_28, ATerm t_28, ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm v_147 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm j_149 (ATerm n_148, ATerm o_148, ATerm p_148, ATerm t);
static ATerm i_12 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm c_15 (ATerm b_22, ATerm c_22, ATerm a_22, ATerm z_21, ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm d_15 (ATerm i_21, ATerm g_21, ATerm h_21, ATerm j_21, ATerm t);
ATerm filter_1_0 (ATerm t_126 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm e_112 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm s_113 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_119 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm e_15 (ATerm v_80, ATerm w_80, ATerm t);
ATerm unescape_chars_1_0 (ATerm h_129 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm s_119 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm unquote_chars_2_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t);
static ATerm y_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm n_15 (ATerm u_80, ATerm t);
ATerm oncetd_1_0 (ATerm i_113 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm debug_1_0 (ATerm f_118 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
static ATerm q_15 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm q_34, ATerm p_34, ATerm t);
static ATerm r_15 (ATerm b_123 (ATerm), ATerm m_34, ATerm l_34, ATerm t);
ATerm foldr_3_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t);
static ATerm i_15 (ATerm t);
ATerm collect_om_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm s_15 (ATerm s_26, ATerm r_26, ATerm t);
static ATerm u_15 (ATerm n_43, ATerm o_43, ATerm t);
static ATerm v_15 (ATerm i_28, ATerm j_28, ATerm t);
static ATerm x_15 (ATerm h_118 (ATerm), ATerm n_217, ATerm o_28, ATerm t);
static ATerm w_15 (ATerm e_28, ATerm f_28, ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm x_16 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_137 (ATerm), ATerm t);
static ATerm j_168 (ATerm d_168, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_15 (ATerm k_28, ATerm t);
static ATerm z_15 (ATerm g_42, ATerm h_42, ATerm t);
static ATerm a_16 (ATerm p_43, ATerm q_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_169 (ATerm t_168, ATerm t);
static ATerm v_169 (ATerm x_168, ATerm y_168, ATerm z_168, ATerm t);
static ATerm w_169 (ATerm h_169, ATerm i_169, ATerm j_169, ATerm t);
static ATerm b_16 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_119 (ATerm), ATerm t);
static ATerm g_16 (ATerm h_68, ATerm i_68, ATerm t);
ATerm if_verbose2_1_0 (ATerm o_135 (ATerm), ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm e_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_16 (ATerm w_61, ATerm x_61, ATerm t);
static ATerm t_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_16 (ATerm i_46, ATerm j_46, ATerm t);
ATerm foldr_2_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_135 (ATerm), ATerm t);
static ATerm c_18 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_18 (ATerm t);
ATerm need_help_1_0 (ATerm d_138 (ATerm), ATerm t);
static ATerm j_16 (ATerm g_71, ATerm h_71, ATerm i_71, ATerm t);
static ATerm k_16 (ATerm j_71, ATerm k_71, ATerm t);
ATerm lookup_table_0_1 (ATerm a_68, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_71, ATerm p_71, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm e_16 (ATerm l_71, ATerm m_71, ATerm t);
static ATerm f_16 (ATerm q_71, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm i_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_140 (ATerm), ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
ATerm parse_options_1_0 (ATerm f_140 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_138 (ATerm), ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm t);
static ATerm x_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm iowrap_3_0 (ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm q_137 (ATerm), ATerm t);
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm q_19 (ATerm t);
static ATerm r_19 (ATerm t);
ATerm io_Asfix_2_abox_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL;
  a_0 = t;
  t = term_s_19;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_t_19;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_19), b_0), term_u_19);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_w_19;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL;
      t = term_s_19;
      t = x_0(t);
      d_1 = t;
      t = term_x_19;
      e_1 = t;
      t = term_y_19;
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_19, term_y_19, d_1);
      t = n_14(e_1, f_1, d_1, t);
      _fail(t);
    }
  else
    {
      ATerm l_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_0 = ATgetFirst((ATermList) t);
          a_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_1 = ATgetFirst((ATermList) t);
          c_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_0;
      t = u_0(t);
      t = b_1;
      t = w_0(t);
      l_1 = t;
      t = (ATerm) ATinsert(CheckATermList(c_1), l_1);
    }
  return(t);
}
ATerm Option_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
      t = term_s_19;
      t = t_0(t);
      s_1 = t;
      t = term_x_19;
      t_1 = t;
      t = term_y_19;
      u_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_19, term_y_19, s_1);
      t = n_14(t_1, u_1, s_1, t);
      _fail(t);
    }
  else
    {
      ATerm z_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_1 = ATgetFirst((ATermList) t);
          r_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_1;
      t = q_0(t);
      t = term_s_19;
      t = r_0(t);
      z_1 = t;
      t = (ATerm) ATinsert(CheckATermList(r_1), z_1);
    }
  return(t);
}
static ATerm p_13 (ATerm x_83, ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(x_83);
      a_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, a_2)));
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm b_2 = NULL;
        t = SSL_concat_strings(x_83);
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, b_2);
      }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm b_20 = t;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL;
      j_2 = t;
      if(match_int(t, 9))
        {
          t = j_2;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = j_2;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = j_2;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = j_2;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_20;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  e_2 = t;
  {
    ATerm c_20 = t;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,y_7 = NULL;
        i_2 = t;
        if(match_cons(t, sym_layout_1))
          {
            h_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_2);
        g_2 = t;
        t = h_2;
        if(!(match_cons(t, sym_layout_place_holder_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_layout_1, h_2);
        y_7 = t;
        t = SSLsetAnnotations(y_7, g_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_20;
      }
  }
  if(match_cons(t, sym_layout_1))
    {
      d_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_concat_strings(d_2);
  f_2 = t;
  t = SSL_explode_string(f_2);
  t = filter_1_0(i_0, t);
  {
    ATerm d_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_20;
      }
  }
  t = e_2;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm e_20 = t;
  if((PushChoice() == 0))
    {
      ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,a_8 = NULL;
      m_2 = t;
      if(match_cons(t, sym_layout_1))
        {
          l_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_2);
      k_2 = t;
      t = l_2;
      if(!(match_cons(t, sym_layout_place_holder_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_layout_1, l_2);
      a_8 = t;
      t = SSLsetAnnotations(a_8, k_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_20;
    }
  return(t);
}
static ATerm j_6 (ATerm u_2, ATerm v_2, ATerm w_2, ATerm t)
{
  ATerm p_3 = NULL,g_8 = NULL;
  t = SSLgetAnnotations(w_2);
  p_3 = t;
  t = u_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
  g_8 = t;
  t = SSLsetAnnotations(g_8, p_3);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm InsLayout_1_0 (ATerm p_147 (ATerm), ATerm t)
{
  static ATerm i_6 (ATerm t);
  static ATerm i_6 (ATerm t)
  {
    static ATerm l_6 (ATerm t_3, ATerm w_3, ATerm x_3, ATerm t);
    static ATerm m_6 (ATerm r_4, ATerm s_4, ATerm t_4, ATerm u_4, ATerm v_4, ATerm t);
    static ATerm l_6 (ATerm t_3, ATerm w_3, ATerm x_3, ATerm t)
    {
      ATerm z_3 = NULL,j_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_3, w_3);
      t = p_147(t);
      if(match_cons(t, sym__2))
        {
          z_3 = ATgetArgument(t, 0);
          j_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, z_3), j_4);
      return(t);
    }
    static ATerm m_6 (ATerm r_4, ATerm s_4, ATerm t_4, ATerm u_4, ATerm v_4, ATerm t)
    {
      ATerm b_5 = NULL,c_5 = NULL,f_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_4, u_4);
      t = p_147(t);
      if(match_cons(t, sym__2))
        {
          b_5 = ATgetArgument(t, 0);
          {
            ATerm f_20 = ATgetArgument(t, 1);
            if(((ATgetType(f_20) == AT_LIST) && !(ATisEmpty(f_20))))
              {
                c_5 = ATgetFirst((ATermList) f_20);
                p_5 = (ATerm) ATgetNext((ATermList) f_20);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_4), s_4), p_5);
      t = i_6(t);
      if(match_cons(t, sym__2))
        {
          ATerm g_20 = ATgetArgument(t, 0);
          if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
            {
              f_5 = ATgetFirst((ATermList) g_20);
              r_5 = (ATerm) ATgetNext((ATermList) g_20);
            }
          else
            _fail(t);
          q_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,t_5 = NULL;
            t = term_k_20;
            t = get_options_0_0(t);
            t = oncetd_1_0(k_0, t);
            t = c_5;
            t = has_layout_0_0(t);
            t = c_5;
            if(match_cons(t, sym_layout_1))
              {
                t_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_13(t_5, t);
            s_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_5), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_n_20), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_5))), s_5), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_5))))), q_5);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm o_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_5 = NULL,w_5 = NULL;
                  ATerm q_20 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm x_5 = NULL;
                      x_5 = t;
                      t = term_k_20;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(n_0, t);
                      t = x_5;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = q_20;
                    }
                  t = c_5;
                  t = has_significant_layout_0_0(t);
                  t = c_5;
                  if(match_cons(t, sym_layout_1))
                    {
                      w_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_13(w_5, t);
                  v_5 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(r_5), f_5), v_5), b_5), q_5);
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = o_20;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(r_5), f_5), b_5), q_5);
                }
            }
          }
      }
      return(t);
    }
    ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL,d_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
    z_5 = t;
    if(match_cons(t, sym__2))
      {
        a_6 = ATgetArgument(t, 0);
        h_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = a_6;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_6 = ATgetFirst((ATermList) t);
        d_6 = (ATerm) ATgetNext((ATermList) t);
        t = d_6;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_6(a_6, h_6, z_5, t);
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                t = l_6(c_6, h_6, z_5, t);
              }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_6 = ATgetFirst((ATermList) t);
                g_6 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm t_20 = t;
                  int u_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_6(a_6, h_6, z_5, t);
                      LocalPopChoice(u_20);
                    }
                  else
                    {
                      t = t_20;
                      t = m_6(c_6, f_6, g_6, h_6, z_5, t);
                    }
                }
              }
            else
              {
                t = j_6(a_6, h_6, z_5, t);
              }
          }
      }
    else
      {
        t = j_6(a_6, h_6, z_5, t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_20 = t;
      if((PushChoice() == 0))
        {
          ATerm n_25 = NULL,s_25 = NULL,t_25 = NULL,n_8 = NULL;
          t_25 = t;
          if(match_cons(t, sym_layout_1))
            {
              s_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_25);
          n_25 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, s_25);
          n_8 = t;
          t = SSLsetAnnotations(n_8, n_25);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_20;
        }
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm j_27 = NULL,l_27 = NULL;
        j_27 = t;
        if(match_cons(t, sym_layout_1))
          {
            l_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_13 = NULL,x_13 = NULL,h_14 = NULL,o_8 = NULL;
              t = SSLgetAnnotations(j_27);
              x_13 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, l_27);
              o_8 = t;
              t = SSLsetAnnotations(o_8, x_13);
              h_14 = t;
              t = term_k_20;
              t = get_options_0_0(t);
              t = oncetd_1_0(v_0, t);
              t = h_14;
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  n_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_13(n_13, t);
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              {
                ATerm p_16 = NULL,s_16 = NULL,p_8 = NULL;
                t = SSLgetAnnotations(j_27);
                s_16 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, l_27);
                p_8 = t;
                t = SSLsetAnnotations(p_8, s_16);
                {
                  ATerm a_21 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm w_16 = NULL;
                      w_16 = t;
                      t = term_k_20;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(z_0, t);
                      t = w_16;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = a_21;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    p_16 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_13(p_16, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,s_7 = NULL,t_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,m_8 = NULL,i_8 = NULL;
  x_7 = t;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_7);
  s_7 = t;
  t = v_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_7 = ATgetFirst((ATermList) t);
      {
        ATerm b_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_21 = ATgetFirst((ATermList) t);
      w_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_7, w_7);
  i_8 = t;
  t = SSLsetAnnotations(i_8, s_7);
  {
    static ATerm b_28 (ATerm t);
    static ATerm b_28 (ATerm t)
    {
      static ATerm b_29 (ATerm z_14, ATerm a_15, ATerm b_15, ATerm t);
      static ATerm b_29 (ATerm z_14, ATerm a_15, ATerm b_15, ATerm t)
      {
        ATerm t_15 = NULL,n_16 = NULL,q_16 = NULL,r_16 = NULL,v_16 = NULL,l_8 = NULL,k_8 = NULL;
        t = SSLgetAnnotations(z_14);
        t_15 = t;
        t = a_15;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_16 = ATgetFirst((ATermList) t);
            r_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_15);
        n_16 = t;
        t = (ATerm) ATinsert(CheckATermList(r_16), q_16);
        k_8 = t;
        t = SSLsetAnnotations(k_8, n_16);
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_16, b_15);
        l_8 = t;
        t = SSLsetAnnotations(l_8, t_15);
        t = InsLayout_1_0(b_28, t);
        return(t);
      }
      ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,h_17 = NULL,i_17 = NULL;
      i_17 = t;
      if(match_cons(t, sym__2))
        {
          d_17 = ATgetArgument(t, 0);
          h_17 = ATgetArgument(t, 1);
          t = d_17;
          if(match_cons(t, sym_H_2))
            {
              b_17 = ATgetArgument(t, 0);
              c_17 = ATgetArgument(t, 1);
              {
                ATerm e_21 = t;
                int f_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_1 = NULL,n_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                    t = InsLayout_1_0(b_28, t);
                    if(match_cons(t, sym__2))
                      {
                        m_1 = ATgetArgument(t, 0);
                        n_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, b_17, m_1), n_1);
                    LocalPopChoice(f_21);
                  }
                else
                  {
                    t = e_21;
                    {
                      ATerm l_21 = t;
                      int m_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_29(i_17, d_17, h_17, t);
                          LocalPopChoice(m_21);
                        }
                      else
                        {
                          t = l_21;
                          t = i_17;
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  b_17 = ATgetArgument(t, 0);
                  c_17 = ATgetArgument(t, 1);
                  {
                    ATerm n_21 = t;
                    int q_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_2 = NULL,a_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                        t = InsLayout_1_0(b_28, t);
                        if(match_cons(t, sym__2))
                          {
                            y_2 = ATgetArgument(t, 0);
                            a_3 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, b_17, y_2), a_3);
                        LocalPopChoice(q_21);
                      }
                    else
                      {
                        t = n_21;
                        {
                          ATerm r_21 = t;
                          int s_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = b_29(i_17, d_17, h_17, t);
                              LocalPopChoice(s_21);
                            }
                          else
                            {
                              t = r_21;
                              t = i_17;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      b_17 = ATgetArgument(t, 0);
                      c_17 = ATgetArgument(t, 1);
                      {
                        ATerm t_21 = t;
                        int v_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_4 = NULL,l_4 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                            t = InsLayout_1_0(b_28, t);
                            if(match_cons(t, sym__2))
                              {
                                i_4 = ATgetArgument(t, 0);
                                l_4 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, b_17, i_4), l_4);
                            LocalPopChoice(v_21);
                          }
                        else
                          {
                            t = t_21;
                            {
                              ATerm w_21 = t;
                              int x_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = b_29(i_17, d_17, h_17, t);
                                  LocalPopChoice(x_21);
                                }
                              else
                                {
                                  t = w_21;
                                  t = i_17;
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          b_17 = ATgetArgument(t, 0);
                          c_17 = ATgetArgument(t, 1);
                          a_17 = ATgetArgument(t, 2);
                          {
                            ATerm y_21 = t;
                            int d_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_5 = NULL,l_5 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, a_17, h_17);
                                t = InsLayout_1_0(b_28, t);
                                if(match_cons(t, sym__2))
                                  {
                                    k_5 = ATgetArgument(t, 0);
                                    l_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, b_17, c_17, k_5), l_5);
                                LocalPopChoice(d_22);
                              }
                            else
                              {
                                t = y_21;
                                {
                                  ATerm e_22 = t;
                                  int f_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = b_29(i_17, d_17, h_17, t);
                                      LocalPopChoice(f_22);
                                    }
                                  else
                                    {
                                      t = e_22;
                                      t = i_17;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              b_17 = ATgetArgument(t, 0);
                              c_17 = ATgetArgument(t, 1);
                              {
                                ATerm h_22 = t;
                                int i_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_6 = NULL,v_6 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                                    t = InsLayout_1_0(b_28, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        u_6 = ATgetArgument(t, 0);
                                        v_6 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, b_17, u_6), v_6);
                                    LocalPopChoice(i_22);
                                  }
                                else
                                  {
                                    t = h_22;
                                    {
                                      ATerm j_22 = t;
                                      int k_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = b_29(i_17, d_17, h_17, t);
                                          LocalPopChoice(k_22);
                                        }
                                      else
                                        {
                                          t = j_22;
                                          t = i_17;
                                        }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  b_17 = ATgetArgument(t, 0);
                                  c_17 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_22 = t;
                                    int m_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm e_7 = NULL,h_7 = NULL,r_7 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, b_17, h_17);
                                        t = InsLayout_1_0(b_28, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            e_7 = ATgetArgument(t, 0);
                                            {
                                              ATerm n_22 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                                        t = InsLayout_1_0(b_28, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            h_7 = ATgetArgument(t, 0);
                                            r_7 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, e_7, h_7), r_7);
                                        LocalPopChoice(m_22);
                                      }
                                    else
                                      {
                                        t = l_22;
                                        {
                                          ATerm o_22 = t;
                                          int p_22 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = b_29(i_17, d_17, h_17, t);
                                              LocalPopChoice(p_22);
                                            }
                                          else
                                            {
                                              t = o_22;
                                              t = i_17;
                                            }
                                        }
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      b_17 = ATgetArgument(t, 0);
                                      c_17 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_22 = t;
                                        int r_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm q_9 = NULL,r_9 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                                            t = InsLayout_1_0(b_28, t);
                                            if(match_cons(t, sym__2))
                                              {
                                                q_9 = ATgetArgument(t, 0);
                                                r_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, b_17, q_9), r_9);
                                            LocalPopChoice(r_22);
                                          }
                                        else
                                          {
                                            t = q_22;
                                            {
                                              ATerm t_22 = t;
                                              int u_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = b_29(i_17, d_17, h_17, t);
                                                  LocalPopChoice(u_22);
                                                }
                                              else
                                                {
                                                  t = t_22;
                                                  t = i_17;
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          b_17 = ATgetArgument(t, 0);
                                          c_17 = ATgetArgument(t, 1);
                                          {
                                            ATerm v_22 = t;
                                            int w_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm u_10 = NULL,v_10 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                                                t = InsLayout_1_0(b_28, t);
                                                if(match_cons(t, sym__2))
                                                  {
                                                    u_10 = ATgetArgument(t, 0);
                                                    v_10 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, b_17, u_10), v_10);
                                                LocalPopChoice(w_22);
                                              }
                                            else
                                              {
                                                t = v_22;
                                                {
                                                  ATerm x_22 = t;
                                                  int y_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = b_29(i_17, d_17, h_17, t);
                                                      LocalPopChoice(y_22);
                                                    }
                                                  else
                                                    {
                                                      t = x_22;
                                                      t = i_17;
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              b_17 = ATgetArgument(t, 0);
                                              c_17 = ATgetArgument(t, 1);
                                              {
                                                ATerm z_22 = t;
                                                int a_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm m_11 = NULL,q_11 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                                                    t = InsLayout_1_0(b_28, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        m_11 = ATgetArgument(t, 0);
                                                        q_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, b_17, m_11), q_11);
                                                    LocalPopChoice(a_23);
                                                  }
                                                else
                                                  {
                                                    t = z_22;
                                                    {
                                                      ATerm b_23 = t;
                                                      int c_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = b_29(i_17, d_17, h_17, t);
                                                          LocalPopChoice(c_23);
                                                        }
                                                      else
                                                        {
                                                          t = b_23;
                                                          t = i_17;
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  b_17 = ATgetArgument(t, 0);
                                                  c_17 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm d_23 = t;
                                                    int e_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_13 = NULL,b_13 = NULL;
                                                        t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
                                                        t = InsLayout_1_0(b_28, t);
                                                        if(match_cons(t, sym__2))
                                                          {
                                                            a_13 = ATgetArgument(t, 0);
                                                            b_13 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, b_17, a_13), b_13);
                                                        LocalPopChoice(e_23);
                                                      }
                                                    else
                                                      {
                                                        t = d_23;
                                                        {
                                                          ATerm f_23 = t;
                                                          int g_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = b_29(i_17, d_17, h_17, t);
                                                              LocalPopChoice(g_23);
                                                            }
                                                          else
                                                            {
                                                              t = f_23;
                                                              t = i_17;
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm h_23 = t;
                                                  int i_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = b_29(i_17, d_17, h_17, t);
                                                      LocalPopChoice(i_23);
                                                    }
                                                  else
                                                    {
                                                      t = h_23;
                                                      t = i_17;
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
          t = i_17;
        }
      return(t);
    }
    t = b_28(t);
  }
  p_7 = t;
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_7);
  l_7 = t;
  t = m_7;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_23 = ATgetFirst((ATermList) t);
                ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, m_7);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
      }
  }
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_7, n_7);
  m_8 = t;
  t = SSLsetAnnotations(m_8, l_7);
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      {
        ATerm n_23 = ATgetArgument(t, 1);
        if(((ATgetType(n_23) == AT_LIST) && !(ATisEmpty(n_23))))
          {
            k_7 = ATgetFirst((ATermList) n_23);
            {
              ATerm o_23 = (ATerm) ATgetNext((ATermList) n_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_7), j_7), i_7);
  t = filter_1_0(s_0, t);
  t = flat_list_0_0(t);
  s_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      r_27 = (ATerm) ATgetNext((ATermList) t);
      t = r_27;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_27;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_n_20), s_27);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_n_20), s_27);
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm c_147 (ATerm), ATerm t)
{
  static ATerm i_29 (ATerm t);
  static ATerm i_29 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL;
        t = c_147(t);
        f_29 = t;
        t = (ATerm) ATinsert(ATempty, f_29);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm f_17 = NULL,g_17 = NULL;
          g_17 = t;
          t = SSL_explode_term(g_17);
          if(match_cons(t, sym__2))
            {
              ATerm r_23 = ATgetArgument(t, 0);
              f_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_17;
          t = foldr_3_0(g_1, conc_0_0, i_29, t);
        }
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,q_29 = NULL,y_8 = NULL;
  q_29 = t;
  if(match_cons(t, sym_amb_1))
    {
      o_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_29);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, o_29);
  y_8 = t;
  t = SSLsetAnnotations(y_8, n_29);
  t = term_t_19;
  l_29 = t;
  t = (ATerm) ATinsert(ATempty, term_u_23);
  m_29 = t;
  t = SSL_printnl(l_29, m_29);
  t = term_w_19;
  k_29 = t;
  t = SSL_exit(k_29);
  t = (ATerm) ATinsert(ATempty, term_u_23);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm k_31 = NULL,q_31 = NULL,t_31 = NULL;
  k_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_31;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_31 = ATgetFirst((ATermList) t);
          t_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_18 = NULL,o_18 = NULL,a_9 = NULL;
            t = SSLgetAnnotations(k_31);
            h_18 = t;
            t = q_31;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_31;
            t = flat_list_0_0(t);
            o_18 = t;
            t = (ATerm) ATinsert(CheckATermList(o_18), q_31);
            a_9 = t;
            t = SSLsetAnnotations(a_9, h_18);
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm y_23 = t;
              int z_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_19 = NULL,m_19 = NULL,p_19 = NULL,h_20 = NULL,b_9 = NULL;
                  t = SSLgetAnnotations(k_31);
                  p_19 = t;
                  t = q_31;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = q_31;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm a_24 = ATgetFirst((ATermList) t);
                          ATerm b_24 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = q_31;
                    }
                  t = (ATerm) ATinsert(CheckATermList(t_31), q_31);
                  b_9 = t;
                  t = SSLsetAnnotations(b_9, p_19);
                  h_20 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_19 = ATgetFirst((ATermList) t);
                      {
                        ATerm g_24 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = h_20;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm h_24 = ATgetFirst((ATermList) t);
                      k_19 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, m_19, k_19);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(z_23);
                }
              else
                {
                  t = y_23;
                  {
                    ATerm d_21 = NULL,k_21 = NULL,c_9 = NULL;
                    t = SSLgetAnnotations(k_31);
                    d_21 = t;
                    t = t_31;
                    t = flat_list_0_0(t);
                    k_21 = t;
                    t = (ATerm) ATinsert(CheckATermList(k_21), q_31);
                    c_9 = t;
                    t = SSLsetAnnotations(c_9, d_21);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_32 = NULL,f_32 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      f_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
      {
        ATerm l_32 = NULL,m_32 = NULL;
        t = term_s_19;
        t = p_0(t);
        m_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_32, m_32);
        t = index_0_0(t);
        l_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_32, l_32);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm o_32 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          f_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_s_19;
      t = p_0(t);
      o_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_32, o_32);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t);
  static ATerm h_1 (ATerm t)
  {
    t = bottomup_1_0(f_112, t);
    return(t);
  }
  t = SRTS_all(h_1, t);
  t = f_112(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  x_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      y_34 = ATgetArgument(t, 0);
      {
        ATerm u_21 = NULL,g_9 = NULL;
        t = SSLgetAnnotations(x_34);
        u_21 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, y_34);
        g_9 = t;
        t = SSLsetAnnotations(g_9, u_21);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          y_34 = ATgetArgument(t, 0);
          w_34 = ATgetArgument(t, 1);
          {
            ATerm g_22 = NULL,h_9 = NULL;
            t = SSLgetAnnotations(x_34);
            g_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, y_34, w_34);
            h_9 = t;
            t = SSLsetAnnotations(h_9, g_22);
          }
        }
      else
        {
          ATerm s_22 = NULL,i_9 = NULL;
          if(match_cons(t, sym_S_1))
            {
              y_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_34);
          s_22 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, y_34);
          i_9 = t;
          t = SSLsetAnnotations(i_9, s_22);
        }
    }
  return(t);
}
static ATerm r_38 (ATerm z_34, ATerm a_35, ATerm b_35, ATerm t)
{
  ATerm l_35 = NULL,k_9 = NULL;
  t = SSLgetAnnotations(z_34);
  l_35 = t;
  t = a_35;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = b_35;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_35, b_35);
  k_9 = t;
  t = SSLsetAnnotations(k_9, l_35);
  return(t);
}
static ATerm r_13 (ATerm p_21, ATerm o_21, ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,k_33 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,j_9 = NULL;
  k_33 = t;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_33);
  l_33 = t;
  t = n_33;
  t = collect_p__1_0(i_1, t);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_33, o_33);
  j_9 = t;
  t = SSLsetAnnotations(j_9, l_33);
  {
    static ATerm n_38 (ATerm t);
    static ATerm n_38 (ATerm t)
    {
      static ATerm s_38 (ATerm t_35, ATerm u_35, ATerm v_35, ATerm x_35, ATerm t);
      static ATerm t_38 (ATerm h_36, ATerm k_36, ATerm l_36, ATerm m_36, ATerm n_36, ATerm t);
      static ATerm u_38 (ATerm z_36, ATerm a_37, ATerm b_37, ATerm t);
      static ATerm s_38 (ATerm t_35, ATerm u_35, ATerm v_35, ATerm x_35, ATerm t)
      {
        ATerm b_36 = NULL,d_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, u_35, x_35);
        t = n_38(t);
        if(match_cons(t, sym__2))
          {
            b_36 = ATgetArgument(t, 0);
            d_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_36), (ATerm) ATmakeAppl(sym_Arg_1, t_35)), (ATerm) ATinsert(CheckATermList(d_36), v_35));
        return(t);
      }
      static ATerm t_38 (ATerm h_36, ATerm k_36, ATerm l_36, ATerm m_36, ATerm n_36, ATerm t)
      {
        ATerm q_36 = NULL,t_36 = NULL;
        t = k_36;
        if(((d_33 != NULL) && (d_33 != t)))
          _fail(t);
        else
          d_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_36, n_36);
        t = n_38(t);
        if(match_cons(t, sym__2))
          {
            q_36 = ATgetArgument(t, 0);
            t_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_36), (ATerm) ATmakeAppl(sym_Arg2_2, h_36, k_36)), (ATerm) ATinsert(CheckATermList(t_36), m_36));
        return(t);
      }
      static ATerm u_38 (ATerm z_36, ATerm a_37, ATerm b_37, ATerm t)
      {
        ATerm e_37 = NULL,g_37 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, a_37, b_37);
        t = n_38(t);
        if(match_cons(t, sym__2))
          {
            e_37 = ATgetArgument(t, 0);
            g_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_37), z_36), g_37);
        return(t);
      }
      ATerm q_37 = NULL,r_37 = NULL,u_37 = NULL,v_37 = NULL,x_37 = NULL,a_38 = NULL,b_38 = NULL,i_38 = NULL,j_38 = NULL;
      u_37 = t;
      if(match_cons(t, sym__2))
        {
          v_37 = ATgetArgument(t, 0);
          b_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_38 = ATgetFirst((ATermList) t);
          j_38 = (ATerm) ATgetNext((ATermList) t);
          t = v_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_37 = ATgetFirst((ATermList) t);
              a_38 = (ATerm) ATgetNext((ATermList) t);
              t = x_37;
              if(match_cons(t, sym_Arg_1))
                {
                  q_37 = ATgetArgument(t, 0);
                  {
                    ATerm i_24 = t;
                    int j_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_38(u_37, v_37, b_38, t);
                        LocalPopChoice(j_24);
                      }
                    else
                      {
                        t = i_24;
                        {
                          ATerm k_24 = t;
                          int l_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_38(q_37, a_38, i_38, j_38, t);
                              LocalPopChoice(l_24);
                            }
                          else
                            {
                              t = k_24;
                              t = u_38(x_37, a_38, j_38, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      q_37 = ATgetArgument(t, 0);
                      r_37 = ATgetArgument(t, 1);
                      {
                        ATerm m_24 = t;
                        int n_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = r_38(u_37, v_37, b_38, t);
                            LocalPopChoice(n_24);
                          }
                        else
                          {
                            t = m_24;
                            {
                              ATerm p_24 = t;
                              int q_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = t_38(q_37, r_37, a_38, i_38, j_38, t);
                                  LocalPopChoice(q_24);
                                }
                              else
                                {
                                  t = p_24;
                                  t = u_38(x_37, a_38, j_38, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_24 = t;
                      int t_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_38(u_37, v_37, b_38, t);
                          LocalPopChoice(t_24);
                        }
                      else
                        {
                          t = r_24;
                          t = u_38(x_37, a_38, j_38, t);
                        }
                    }
                }
            }
          else
            {
              t = r_38(u_37, v_37, b_38, t);
            }
        }
      else
        {
          t = v_37;
          t = r_38(u_37, v_37, b_38, t);
        }
      return(t);
    }
    t = n_38(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm u_24 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_21, e_33);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm i_147 (ATerm), ATerm t)
{
  static ATerm f_40 (ATerm t);
  static ATerm f_40 (ATerm t)
  {
    ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
    u_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_39;
      }
    else
      {
        ATerm s_23 = NULL,t_23 = NULL,v_23 = NULL,w_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_39 = ATgetFirst((ATermList) t);
            w_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_39;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_24 = ATgetFirst((ATermList) t);
            ATerm w_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_39);
        s_23 = t;
        t = term_s_19;
        t = i_147(t);
        {
          static ATerm j_1 (ATerm t);
          static ATerm j_1 (ATerm t)
          {
            ATerm x_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_25 = t;
                int e_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm k_1 (ATerm t);
                    static ATerm k_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, v_39);
                      return(t);
                    }
                    t = Instantiate_1_0(k_1, t);
                    LocalPopChoice(e_25);
                  }
                else
                  {
                    t = d_25;
                    t = flat_list_0_0(t);
                  }
                LocalPopChoice(z_24);
              }
            else
              {
                t = x_24;
              }
            return(t);
          }
          t = bottomup_1_0(j_1, t);
        }
        v_23 = t;
        t = w_39;
        t = f_40(t);
        t_23 = t;
        t = (ATerm) ATinsert(CheckATermList(t_23), v_23);
        w_9 = t;
        t = SSLsetAnnotations(w_9, s_23);
      }
    return(t);
  }
  t = f_40(t);
  return(t);
}
static ATerm t_13 (ATerm e_24, ATerm f_24, ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm o_40 = NULL,r_40 = NULL,s_40 = NULL,h_41 = NULL;
  static ATerm p_1 (ATerm t);
  static ATerm p_1 (ATerm t)
  {
    t = not_null(r_40);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATinsert(ATempty, d_24));
  t = conc_0_0(t);
  s_40 = t;
  t = e_24;
  if(match_cons(t, sym_iter_1))
    {
      h_41 = ATgetArgument(t, 0);
      {
        ATerm o_24 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(e_24);
        o_24 = t;
        t = h_41;
        o_40 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, h_41);
        z_9 = t;
        t = SSLsetAnnotations(z_9, o_24);
      }
    }
  else
    {
      ATerm s_24 = NULL,a_10 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          h_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_24);
      s_24 = t;
      t = h_41;
      o_40 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, h_41);
      a_10 = t;
      t = SSLsetAnnotations(a_10, s_24);
    }
  t = (ATerm) ATmakeAppl(sym__2, e_24, s_40);
  t = get_pp_entry_0_0(t);
  if(((r_40 != NULL) && (r_40 != t)))
    _fail(t);
  else
    r_40 = t;
  t = f_24;
  {
    static ATerm o_1 (ATerm t);
    static ATerm o_1 (ATerm t)
    {
      ATerm i_41 = NULL;
      i_41 = t;
      t = (ATerm) ATmakeAppl(sym__4, o_40, i_41, s_40, term_w_19);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(o_1, t);
  }
  t = instantiate_list_1_0(p_1, t);
  return(t);
}
static ATerm y_44 (ATerm z_41, ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm k_42 = NULL,d_10 = NULL;
  t = SSLgetAnnotations(b_42);
  k_42 = t;
  t = a_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_42), z_41);
  d_10 = t;
  t = SSLsetAnnotations(d_10, k_42);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm k_147 (ATerm), ATerm t)
{
  static ATerm x_44 (ATerm t);
  static ATerm x_44 (ATerm t)
  {
    static ATerm z_44 (ATerm o_42, ATerm p_42, ATerm t_42, ATerm w_42, ATerm t);
    static ATerm z_44 (ATerm o_42, ATerm p_42, ATerm t_42, ATerm w_42, ATerm t)
    {
      ATerm i_43 = NULL,k_43 = NULL,v_43 = NULL,e_10 = NULL;
      t = w_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm f_25 = ATgetFirst((ATermList) t);
          ATerm h_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_42);
      i_43 = t;
      t = term_s_19;
      t = k_147(t);
      {
        static ATerm v_1 (ATerm t);
        static ATerm v_1 (ATerm t)
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm w_1 (ATerm t);
                  static ATerm w_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, p_42), o_42);
                    return(t);
                  }
                  t = Instantiate_1_0(w_1, t);
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = m_25;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
            }
          return(t);
        }
        t = bottomup_1_0(v_1, t);
      }
      v_43 = t;
      t = t_42;
      t = x_44(t);
      k_43 = t;
      t = (ATerm) ATinsert(CheckATermList(k_43), v_43);
      e_10 = t;
      t = SSLsetAnnotations(e_10, i_43);
      return(t);
    }
    ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,n_44 = NULL,o_44 = NULL;
    g_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_44;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_44 = ATgetFirst((ATermList) t);
            i_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_44;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_44 = ATgetFirst((ATermList) t);
            o_44 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm p_25 = t;
              int r_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_44(h_44, i_44, g_44, t);
                  LocalPopChoice(r_25);
                }
              else
                {
                  t = p_25;
                  t = z_44(h_44, n_44, o_44, g_44, t);
                }
            }
          }
        else
          {
            t = y_44(h_44, i_44, g_44, t);
          }
      }
    return(t);
  }
  t = x_44(t);
  return(t);
}
static ATerm u_13 (ATerm g_47, ATerm h_47, ATerm t)
{
  t = SSL_mod(g_47, h_47);
  return(t);
}
static ATerm v_13 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_45 = NULL,s_45 = NULL,u_45 = NULL,b_46 = NULL;
      t = term_w_25;
      u_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_25, term_w_25);
      t = u_13(k_25, u_45, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_s_19;
      t = d_110(t);
      n_45 = t;
      t = term_s_19;
      t = e_110(t);
      s_45 = t;
      t = (ATerm) ATmakeAppl(sym__4, n_45, l_25, s_45, term_w_25);
      t = symbol2abox_0_0(t);
      b_46 = t;
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_46;
            {
              ATerm b_26 = t;
              if((PushChoice() == 0))
                {
                  ATerm y_24 = NULL;
                  y_24 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = y_24;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm c_26 = ATgetFirst((ATermList) t);
                          ATerm d_26 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = y_24;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = b_26;
                }
            }
            t = (ATerm) ATinsert(ATempty, b_46);
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            t = b_46;
          }
      }
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm f_46 = NULL,g_46 = NULL,r_46 = NULL;
        t = term_s_19;
        t = c_110(t);
        f_46 = t;
        t = term_s_19;
        t = e_110(t);
        g_46 = t;
        t = (ATerm) ATmakeAppl(sym__4, f_46, l_25, g_46, term_w_19);
        t = symbol2abox_0_0(t);
        r_46 = t;
        {
          ATerm e_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_46;
              {
                ATerm h_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_25 = NULL;
                    q_25 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = q_25;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm j_26 = ATgetFirst((ATermList) t);
                            ATerm k_26 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = q_25;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_26;
                  }
              }
              t = (ATerm) ATinsert(ATempty, r_46);
              LocalPopChoice(g_26);
            }
          else
            {
              t = e_26;
              t = r_46;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm t)
{
  static ATerm j_47 (ATerm t);
  static ATerm j_47 (ATerm t)
  {
    ATerm l_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_120(t);
        LocalPopChoice(n_26);
      }
    else
      {
        t = l_26;
        {
          ATerm v_46 = NULL,y_46 = NULL,z_46 = NULL,c_47 = NULL,d_47 = NULL,f_47 = NULL,h_10 = NULL;
          t = v_120(t);
          f_47 = t;
          if(match_cons(t, sym__2))
            {
              y_46 = ATgetArgument(t, 0);
              z_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_47);
          v_46 = t;
          t = y_46;
          t = x_120(t);
          c_47 = t;
          t = z_46;
          t = j_47(t);
          d_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_47, d_47);
          h_10 = t;
          t = SSLsetAnnotations(h_10, v_46);
          t = w_120(t);
        }
      }
    return(t);
  }
  t = j_47(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      ATerm p_26 = ATgetArgument(t, 1);
      if(((ATgetType(p_26) != AT_LIST) || !(ATisEmpty(p_26))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,k_48 = NULL,m_48 = NULL;
  if(match_cons(t, sym__2))
    {
      d_48 = ATgetArgument(t, 0);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
          {
            e_48 = ATgetFirst((ATermList) q_26);
            f_48 = (ATerm) ATgetNext((ATermList) q_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_w_19;
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_48, term_w_19);
  t = c_16(d_48, m_48, t);
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_48, e_48), (ATerm) ATmakeAppl(sym__2, k_48, f_48));
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_48), n_48);
  return(t);
}
ATerm nzip_1_0 (ATerm g_121 (ATerm), ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, l_47);
  t = genzip_4_0(x_1, y_1, c_2, g_121, t);
  return(t);
}
static ATerm z_13 (ATerm b_25, ATerm c_25, ATerm a_25, ATerm g_25, ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,y_48 = NULL,r_49 = NULL,s_49 = NULL;
  static ATerm s_2 (ATerm t);
  static ATerm s_2 (ATerm t)
  {
    t = not_null(w_48);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATinsert(ATempty, g_25));
  t = conc_0_0(t);
  y_48 = t;
  t = b_25;
  if(match_cons(t, sym_iter_sep_2))
    {
      r_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
      {
        ATerm a_26 = NULL,l_10 = NULL;
        t = SSLgetAnnotations(b_25);
        a_26 = t;
        t = r_49;
        u_48 = t;
        t = s_49;
        v_48 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, r_49, s_49);
        l_10 = t;
        t = SSLsetAnnotations(l_10, a_26);
      }
    }
  else
    {
      ATerm i_26 = NULL,s_10 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          r_49 = ATgetArgument(t, 0);
          s_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_25);
      i_26 = t;
      t = r_49;
      u_48 = t;
      t = s_49;
      v_48 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, r_49, s_49);
      s_10 = t;
      t = SSLsetAnnotations(s_10, i_26);
    }
  t = (ATerm) ATmakeAppl(sym__2, b_25, y_48);
  t = get_pp_entry_0_0(t);
  if(((w_48 != NULL) && (w_48 != t)))
    _fail(t);
  else
    w_48 = t;
  t = c_25;
  {
    static ATerm n_2 (ATerm t);
    static ATerm n_2 (ATerm t)
    {
      ATerm x_49 = NULL,a_50 = NULL;
      static ATerm o_2 (ATerm t);
      static ATerm p_2 (ATerm t);
      static ATerm q_2 (ATerm t);
      static ATerm r_2 (ATerm t);
      static ATerm o_2 (ATerm t)
      {
        t = u_48;
        return(t);
      }
      static ATerm p_2 (ATerm t)
      {
        t = v_48;
        return(t);
      }
      static ATerm q_2 (ATerm t)
      {
        t = y_48;
        return(t);
      }
      static ATerm r_2 (ATerm t)
      {
        t = g_25;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          x_49 = ATgetArgument(t, 0);
          a_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_13(o_2, p_2, q_2, r_2, x_49, a_50, t);
      return(t);
    }
    t = nzip_1_0(n_2, t);
  }
  t = instantiate_sep_list_1_0(s_2, t);
  return(t);
}
static ATerm b_14 (ATerm o_31, ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm d_50 = NULL,h_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_31, term_w_25);
  t = geq_0_0(t);
  t = term_w_19;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_31, term_w_19);
  t = f_14(o_31, h_50, t);
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_50, n_31);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm l_50 = NULL,x_50 = NULL,y_50 = NULL;
  if(match_cons(t, sym__2))
    {
      l_50 = ATgetArgument(t, 0);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
          {
            x_50 = ATgetFirst((ATermList) t_26);
            y_50 = (ATerm) ATgetNext((ATermList) t_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_14(l_50, x_50, y_50, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm j_50 = NULL;
  t = repeat_2_0(t_2, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if(((ATgetType(v_26) != AT_INT) || (ATgetInt((ATermInt) v_26) != 1)))
        _fail(t);
      {
        ATerm x_26 = ATgetArgument(t, 1);
        if(((ATgetType(x_26) == AT_LIST) && !(ATisEmpty(x_26))))
          {
            j_50 = ATgetFirst((ATermList) x_26);
            {
              ATerm y_26 = (ATerm) ATgetNext((ATermList) x_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_50;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm z_26 = t;
  if((PushChoice() == 0))
    {
      ATerm q_66 = NULL,r_66 = NULL,w_66 = NULL,i_11 = NULL;
      w_66 = t;
      if(match_cons(t, sym_lit_1))
        {
          r_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_66);
      q_66 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, r_66);
      i_11 = t;
      t = SSLsetAnnotations(i_11, q_66);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm b_27 = t;
  if((PushChoice() == 0))
    {
      ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,k_11 = NULL;
      z_66 = t;
      if(match_cons(t, sym_lit_1))
        {
          y_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_66);
      x_66 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, y_66);
      k_11 = t;
      t = SSLsetAnnotations(k_11, x_66);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_27;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,k_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,u_65 = NULL,v_65 = NULL;
  o_65 = t;
  if(match_cons(t, sym__4))
    {
      p_65 = ATgetArgument(t, 0);
      r_65 = ATgetArgument(t, 1);
      u_65 = ATgetArgument(t, 2);
      v_65 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_65;
  if(match_cons(t, sym_seq_1))
    {
      q_65 = ATgetArgument(t, 0);
      {
        ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,k_66 = NULL,m_66 = NULL;
        static ATerm b_3 (ATerm t);
        static ATerm b_3 (ATerm t)
        {
          ATerm c_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_27 = t;
              int h_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm c_3 (ATerm t);
                  static ATerm c_3 (ATerm t)
                  {
                    t = not_null(h_66);
                    return(t);
                  }
                  t = Instantiate_1_0(c_3, t);
                  LocalPopChoice(h_27);
                }
              else
                {
                  t = f_27;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(d_27);
            }
          else
            {
              t = c_27;
            }
          return(t);
        }
        t = r_65;
        if(match_cons(t, sym_appl_2))
          {
            ATerm i_27 = ATgetArgument(t, 0);
            n_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_65, (ATerm) ATinsert(ATempty, v_65));
        t = conc_0_0(t);
        m_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, q_65), m_66);
        t = get_pp_entry_0_0(t);
        g_66 = t;
        t = q_65;
        t = filter_1_0(x_2, t);
        i_66 = t;
        t = n_65;
        t = filter_1_0(z_2, t);
        k_66 = t;
        t = (ATerm) ATmakeAppl(sym__4, i_66, k_66, m_66, term_w_19);
        t = seq2abox_0_0(t);
        if(((h_66 != NULL) && (h_66 != t)))
          _fail(t);
        else
          h_66 = t;
        t = g_66;
        t = bottomup_1_0(b_3, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          q_65 = ATgetArgument(t, 0);
          g_65 = ATgetArgument(t, 1);
          {
            ATerm p_27 = NULL,w_27 = NULL,x_27 = NULL;
            static ATerm e_40 (ATerm t);
            static ATerm e_40 (ATerm t)
            {
              ATerm y_27 = NULL,z_27 = NULL,m_28 = NULL,n_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,h_29 = NULL,j_29 = NULL,p_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
              if(match_cons(t, sym__4))
                {
                  h_29 = ATgetArgument(t, 0);
                  j_29 = ATgetArgument(t, 1);
                  u_29 = ATgetArgument(t, 2);
                  v_29 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = j_29;
              if(match_cons(t, sym_appl_2))
                {
                  p_29 = ATgetArgument(t, 0);
                  r_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_29;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_29 = ATgetFirst((ATermList) t);
                  t_29 = (ATerm) ATgetNext((ATermList) t);
                  t = t_29;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = p_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          m_28 = ATgetArgument(t, 0);
                          x_28 = ATgetArgument(t, 1);
                          a_29 = ATgetArgument(t, 2);
                          t = x_28;
                          if(match_cons(t, sym_alt_2))
                            {
                              y_28 = ATgetArgument(t, 0);
                              z_28 = ATgetArgument(t, 1);
                              t = m_28;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  n_28 = ATgetFirst((ATermList) t);
                                  w_28 = (ATerm) ATgetNext((ATermList) t);
                                  t = w_28;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = h_29;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          y_27 = ATgetArgument(t, 0);
                                          z_27 = ATgetArgument(t, 1);
                                          {
                                            ATerm k_27 = t;
                                            int m_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = n_28;
                                                if((y_27 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = y_28;
                                                if((y_27 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = z_28;
                                                if((z_27 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, y_27, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, y_27), y_27, a_29), r_29), u_29, v_29);
                                                t = e_40(t);
                                                LocalPopChoice(m_27);
                                              }
                                            else
                                              {
                                                t = k_27;
                                                {
                                                  ATerm n_27 = t;
                                                  int o_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_31 = NULL,v_31 = NULL;
                                                      t = y_28;
                                                      if((y_27 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = z_28;
                                                      if((z_27 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = term_w_19;
                                                      v_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, v_29, term_w_19);
                                                      t = c_16(v_29, v_31, t);
                                                      s_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, z_27, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, n_28), z_27, a_29), r_29), u_29, s_31);
                                                      t = e_40(t);
                                                      LocalPopChoice(o_27);
                                                    }
                                                  else
                                                    {
                                                      t = n_27;
                                                      {
                                                        ATerm p_32 = NULL;
                                                        static ATerm d_3 (ATerm t);
                                                        static ATerm d_3 (ATerm t)
                                                        {
                                                          ATerm t_27 = t;
                                                          int u_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_27 = t;
                                                              int a_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  static ATerm e_3 (ATerm t);
                                                                  static ATerm e_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                                                    return(t);
                                                                  }
                                                                  t = Instantiate_1_0(e_3, t);
                                                                  LocalPopChoice(a_28);
                                                                }
                                                              else
                                                                {
                                                                  t = v_27;
                                                                  t = flat_list_0_0(t);
                                                                }
                                                              LocalPopChoice(u_27);
                                                            }
                                                          else
                                                            {
                                                              t = t_27;
                                                            }
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_65, g_65), u_29);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((p_27 != NULL) && (p_27 != t)))
                                                          _fail(t);
                                                        else
                                                          p_27 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_w_19);
                                                        t = symbol2abox_0_0(t);
                                                        if(((w_27 != NULL) && (w_27 != t)))
                                                          _fail(t);
                                                        else
                                                          w_27 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, v_29, p_27);
                                                        t = index_0_0(t);
                                                        p_32 = t;
                                                        t = (ATerm) ATinsert(ATempty, p_32);
                                                        t = bottomup_1_0(d_3, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm z_32 = NULL;
                                          static ATerm f_3 (ATerm t);
                                          static ATerm f_3 (ATerm t)
                                          {
                                            ATerm c_28 = t;
                                            int u_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_28 = t;
                                                int c_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    static ATerm g_3 (ATerm t);
                                                    static ATerm g_3 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(g_3, t);
                                                    LocalPopChoice(c_29);
                                                  }
                                                else
                                                  {
                                                    t = v_28;
                                                    t = flat_list_0_0(t);
                                                  }
                                                LocalPopChoice(u_28);
                                              }
                                            else
                                              {
                                                t = c_28;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_65, g_65), u_29);
                                          t = get_pp_entry_0_0(t);
                                          if(((p_27 != NULL) && (p_27 != t)))
                                            _fail(t);
                                          else
                                            p_27 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_w_19);
                                          t = symbol2abox_0_0(t);
                                          if(((w_27 != NULL) && (w_27 != t)))
                                            _fail(t);
                                          else
                                            w_27 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, v_29, p_27);
                                          t = index_0_0(t);
                                          z_32 = t;
                                          t = (ATerm) ATinsert(ATempty, z_32);
                                          t = bottomup_1_0(f_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm q_33 = NULL;
                                      static ATerm h_3 (ATerm t);
                                      static ATerm h_3 (ATerm t)
                                      {
                                        ATerm d_29 = t;
                                        int e_29 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_29 = t;
                                            int x_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                static ATerm i_3 (ATerm t);
                                                static ATerm i_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(i_3, t);
                                                LocalPopChoice(x_29);
                                              }
                                            else
                                              {
                                                t = w_29;
                                                t = flat_list_0_0(t);
                                              }
                                            LocalPopChoice(e_29);
                                          }
                                        else
                                          {
                                            t = d_29;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_65, g_65), u_29);
                                      t = get_pp_entry_0_0(t);
                                      if(((p_27 != NULL) && (p_27 != t)))
                                        _fail(t);
                                      else
                                        p_27 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_w_19);
                                      t = symbol2abox_0_0(t);
                                      if(((w_27 != NULL) && (w_27 != t)))
                                        _fail(t);
                                      else
                                        w_27 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, v_29, p_27);
                                      t = index_0_0(t);
                                      q_33 = t;
                                      t = (ATerm) ATinsert(ATempty, q_33);
                                      t = bottomup_1_0(h_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm r_34 = NULL;
                                  static ATerm j_3 (ATerm t);
                                  static ATerm j_3 (ATerm t)
                                  {
                                    ATerm y_29 = t;
                                    int z_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm a_30 = t;
                                        int b_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm k_3 (ATerm t);
                                            static ATerm k_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(k_3, t);
                                            LocalPopChoice(b_30);
                                          }
                                        else
                                          {
                                            t = a_30;
                                            t = flat_list_0_0(t);
                                          }
                                        LocalPopChoice(z_29);
                                      }
                                    else
                                      {
                                        t = y_29;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_65, g_65), u_29);
                                  t = get_pp_entry_0_0(t);
                                  if(((p_27 != NULL) && (p_27 != t)))
                                    _fail(t);
                                  else
                                    p_27 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_w_19);
                                  t = symbol2abox_0_0(t);
                                  if(((w_27 != NULL) && (w_27 != t)))
                                    _fail(t);
                                  else
                                    w_27 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, v_29, p_27);
                                  t = index_0_0(t);
                                  r_34 = t;
                                  t = (ATerm) ATinsert(ATempty, r_34);
                                  t = bottomup_1_0(j_3, t);
                                }
                            }
                          else
                            {
                              ATerm i_36 = NULL;
                              static ATerm l_3 (ATerm t);
                              static ATerm l_3 (ATerm t)
                              {
                                ATerm e_30 = t;
                                int f_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_30 = t;
                                    int k_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        static ATerm m_3 (ATerm t);
                                        static ATerm m_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(m_3, t);
                                        LocalPopChoice(k_30);
                                      }
                                    else
                                      {
                                        t = h_30;
                                        t = flat_list_0_0(t);
                                      }
                                    LocalPopChoice(f_30);
                                  }
                                else
                                  {
                                    t = e_30;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_65, g_65), u_29);
                              t = get_pp_entry_0_0(t);
                              if(((p_27 != NULL) && (p_27 != t)))
                                _fail(t);
                              else
                                p_27 = t;
                              t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_w_19);
                              t = symbol2abox_0_0(t);
                              if(((w_27 != NULL) && (w_27 != t)))
                                _fail(t);
                              else
                                w_27 = t;
                              t = (ATerm) ATmakeAppl(sym__2, v_29, p_27);
                              t = index_0_0(t);
                              i_36 = t;
                              t = (ATerm) ATinsert(ATempty, i_36);
                              t = bottomup_1_0(l_3, t);
                            }
                        }
                      else
                        {
                          ATerm n_37 = NULL;
                          static ATerm n_3 (ATerm t);
                          static ATerm n_3 (ATerm t)
                          {
                            ATerm l_30 = t;
                            int m_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_30 = t;
                                int q_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    static ATerm o_3 (ATerm t);
                                    static ATerm o_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(o_3, t);
                                    LocalPopChoice(q_30);
                                  }
                                else
                                  {
                                    t = n_30;
                                    t = flat_list_0_0(t);
                                  }
                                LocalPopChoice(m_30);
                              }
                            else
                              {
                                t = l_30;
                              }
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_65, g_65), u_29);
                          t = get_pp_entry_0_0(t);
                          if(((p_27 != NULL) && (p_27 != t)))
                            _fail(t);
                          else
                            p_27 = t;
                          t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_w_19);
                          t = symbol2abox_0_0(t);
                          if(((w_27 != NULL) && (w_27 != t)))
                            _fail(t);
                          else
                            w_27 = t;
                          t = (ATerm) ATmakeAppl(sym__2, v_29, p_27);
                          t = index_0_0(t);
                          n_37 = t;
                          t = (ATerm) ATinsert(ATempty, n_37);
                          t = bottomup_1_0(n_3, t);
                        }
                    }
                  else
                    {
                      t = p_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          m_28 = ATgetArgument(t, 0);
                          x_28 = ATgetArgument(t, 1);
                          a_29 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = h_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          y_27 = ATgetArgument(t, 0);
                          z_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_28;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          n_28 = ATgetFirst((ATermList) t);
                          w_28 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = w_28;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = x_28;
                      if(match_cons(t, sym_alt_2))
                        {
                          y_28 = ATgetArgument(t, 0);
                          z_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm r_30 = t;
                        int s_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_28;
                            if((y_27 != t))
                              {
                                _fail(t);
                              }
                            t = y_28;
                            if((y_27 != t))
                              {
                                _fail(t);
                              }
                            t = z_28;
                            if((z_27 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, y_27, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, y_27), y_27, a_29), r_29), u_29, v_29);
                            t = e_40(t);
                            LocalPopChoice(s_30);
                          }
                        else
                          {
                            t = r_30;
                            {
                              ATerm v_38 = NULL,w_38 = NULL;
                              t = y_28;
                              if((y_27 != t))
                                {
                                  _fail(t);
                                }
                              t = z_28;
                              if((z_27 != t))
                                {
                                  _fail(t);
                                }
                              t = term_w_19;
                              w_38 = t;
                              t = (ATerm) ATmakeAppl(sym__2, v_29, term_w_19);
                              t = c_16(v_29, w_38, t);
                              v_38 = t;
                              t = (ATerm) ATmakeAppl(sym__4, z_27, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, n_28), z_27, a_29), r_29), u_29, v_38);
                              t = e_40(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = p_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      m_28 = ATgetArgument(t, 0);
                      x_28 = ATgetArgument(t, 1);
                      a_29 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = h_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      y_27 = ATgetArgument(t, 0);
                      z_27 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_28;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_28 = ATgetFirst((ATermList) t);
                      w_28 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = w_28;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_28;
                  if(match_cons(t, sym_alt_2))
                    {
                      y_28 = ATgetArgument(t, 0);
                      z_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_30 = t;
                    int v_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_28;
                        if((y_27 != t))
                          {
                            _fail(t);
                          }
                        t = y_28;
                        if((y_27 != t))
                          {
                            _fail(t);
                          }
                        t = z_28;
                        if((z_27 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, y_27, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, y_27), y_27, a_29), r_29), u_29, v_29);
                        t = e_40(t);
                        LocalPopChoice(v_30);
                      }
                    else
                      {
                        t = t_30;
                        {
                          ATerm c_40 = NULL,d_40 = NULL;
                          t = y_28;
                          if((y_27 != t))
                            {
                              _fail(t);
                            }
                          t = z_28;
                          if((z_27 != t))
                            {
                              _fail(t);
                            }
                          t = term_w_19;
                          d_40 = t;
                          t = (ATerm) ATmakeAppl(sym__2, v_29, term_w_19);
                          t = c_16(v_29, d_40, t);
                          c_40 = t;
                          t = (ATerm) ATmakeAppl(sym__4, z_27, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, n_28), z_27, a_29), r_29), u_29, c_40);
                          t = e_40(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, u_65, (ATerm) ATinsert(ATempty, v_65));
            t = conc_0_0(t);
            x_27 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, q_65, g_65), r_65, x_27, term_w_19);
            t = e_40(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              q_65 = ATgetArgument(t, 0);
              g_65 = ATgetArgument(t, 1);
              {
                ATerm h_67 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, q_65, g_65);
                h_67 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, q_65, g_65), r_65, u_65, v_65);
                t = z_13(h_67, r_65, u_65, v_65, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  q_65 = ATgetArgument(t, 0);
                  g_65 = ATgetArgument(t, 1);
                  {
                    ATerm t_67 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_65, g_65);
                    t_67 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, q_65, g_65), r_65, u_65, v_65);
                    t = z_13(t_67, r_65, u_65, v_65, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      q_65 = ATgetArgument(t, 0);
                      {
                        ATerm n_68 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, q_65);
                        n_68 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, q_65), r_65, u_65, v_65);
                        t = t_13(n_68, r_65, u_65, v_65, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          q_65 = ATgetArgument(t, 0);
                          {
                            ATerm v_68 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, q_65);
                            v_68 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, q_65), r_65, u_65, v_65);
                            t = t_13(v_68, r_65, u_65, v_65, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              q_65 = ATgetArgument(t, 0);
                              t = r_65;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm w_30 = ATgetArgument(t, 0);
                                  n_65 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = n_65;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  h_65 = ATgetFirst((ATermList) t);
                                  k_65 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm g_41 = NULL,j_41 = NULL,k_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
                                    static ATerm q_3 (ATerm t);
                                    static ATerm q_3 (ATerm t)
                                    {
                                      ATerm x_30 = t;
                                      int z_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_31 = t;
                                          int d_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm r_3 (ATerm t);
                                              static ATerm r_3 (ATerm t)
                                              {
                                                t = not_null(n_41);
                                                return(t);
                                              }
                                              t = Instantiate_1_0(r_3, t);
                                              LocalPopChoice(d_31);
                                            }
                                          else
                                            {
                                              t = b_31;
                                              t = flat_list_0_0(t);
                                            }
                                          LocalPopChoice(z_30);
                                        }
                                      else
                                        {
                                          t = x_30;
                                        }
                                      return(t);
                                    }
                                    t = k_65;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, u_65, (ATerm) ATinsert(ATempty, v_65));
                                    t = conc_0_0(t);
                                    p_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, q_65), p_41);
                                    t = get_pp_entry_0_0(t);
                                    g_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, q_65, h_65, p_41, term_w_19);
                                    t = symbol2abox_0_0(t);
                                    j_41 = t;
                                    t = (ATerm) ATinsert(ATempty, j_41);
                                    o_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, g_41, (ATerm) ATinsert(ATempty, j_41));
                                    t = r_13(g_41, o_41, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        k_41 = ATgetArgument(t, 0);
                                        if(((n_41 != NULL) && (n_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          n_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = k_41;
                                    t = bottomup_1_0(q_3, t);
                                  }
                                }
                              else
                                {
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = (ATerm) ATempty;
                                }
                            }
                          else
                            {
                              ATerm e_31 = t;
                              int g_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm h_31 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(g_31);
                                  {
                                    ATerm l_31 = t;
                                    int p_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = r_65;
                                        {
                                          ATerm r_31 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm e_42 = NULL;
                                              e_42 = t;
                                              t = SSL_is_string(e_42);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = r_31;
                                            }
                                        }
                                        t = r_65;
                                        {
                                          ATerm u_31 = t;
                                          int w_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,u_42 = NULL,v_42 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  q_42 = ATgetArgument(t, 0);
                                                  v_42 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = q_42;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  r_42 = ATgetArgument(t, 0);
                                                  s_42 = ATgetArgument(t, 1);
                                                  u_42 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = r_65;
                                              t = d_15(r_42, s_42, u_42, v_42, t);
                                              LocalPopChoice(w_31);
                                            }
                                          else
                                            {
                                              t = u_31;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(p_31);
                                      }
                                    else
                                      {
                                        t = l_31;
                                        t = SSL_is_string(r_65);
                                        t = (ATerm) ATmakeAppl(sym_S_1, r_65);
                                      }
                                  }
                                }
                              else
                                {
                                  t = e_31;
                                  {
                                    ATerm x_31 = t;
                                    int b_32 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm c_32 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(b_32);
                                        {
                                          ATerm e_44 = NULL,f_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, r_65);
                                          f_44 = t;
                                          t = SSL_implode_string(f_44);
                                          e_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, e_44);
                                        }
                                      }
                                    else
                                      {
                                        t = x_31;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            q_65 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, q_65);
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
ATerm seq2abox_0_0 (ATerm t)
{
  ATerm a_70 = NULL,e_70 = NULL,f_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,n_70 = NULL,q_70 = NULL;
  if(match_cons(t, sym__4))
    {
      a_70 = ATgetArgument(t, 0);
      h_70 = ATgetArgument(t, 1);
      n_70 = ATgetArgument(t, 2);
      q_70 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = a_70;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_70;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_70 = ATgetFirst((ATermList) t);
          f_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_70 = ATgetFirst((ATermList) t);
          j_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_70;
      {
        ATerm e_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm h_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(g_32);
            t = e_70;
            {
              ATerm i_32 = t;
              int j_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm k_32 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_32);
                  {
                    ATerm n_32 = t;
                    int q_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, f_70, j_70, n_70, q_70);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(q_32);
                      }
                    else
                      {
                        t = n_32;
                        {
                          ATerm m_72 = NULL,n_72 = NULL,r_72 = NULL,t_72 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, e_70, i_70, n_70, q_70);
                          t = symbol2abox_0_0(t);
                          m_72 = t;
                          t = term_w_19;
                          t_72 = t;
                          t = (ATerm) ATmakeAppl(sym__2, q_70, term_w_19);
                          t = c_16(q_70, t_72, t);
                          r_72 = t;
                          t = (ATerm) ATmakeAppl(sym__4, f_70, j_70, n_70, r_72);
                          t = seq2abox_0_0(t);
                          n_72 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_72), m_72);
                        }
                      }
                  }
                }
              else
                {
                  t = i_32;
                  {
                    ATerm w_73 = NULL,b_74 = NULL,e_74 = NULL,f_74 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, e_70, i_70, n_70, q_70);
                    t = symbol2abox_0_0(t);
                    w_73 = t;
                    t = term_w_19;
                    f_74 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_70, term_w_19);
                    t = c_16(q_70, f_74, t);
                    e_74 = t;
                    t = (ATerm) ATmakeAppl(sym__4, f_70, j_70, n_70, e_74);
                    t = seq2abox_0_0(t);
                    b_74 = t;
                    t = (ATerm) ATinsert(CheckATermList(b_74), w_73);
                  }
                }
            }
          }
        else
          {
            t = e_32;
            {
              ATerm l_74 = NULL,m_74 = NULL,o_74 = NULL,p_74 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, e_70, i_70, n_70, q_70);
              t = symbol2abox_0_0(t);
              l_74 = t;
              t = term_w_19;
              p_74 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_70, term_w_19);
              t = c_16(q_70, p_74, t);
              o_74 = t;
              t = (ATerm) ATmakeAppl(sym__4, f_70, j_70, n_70, o_74);
              t = seq2abox_0_0(t);
              m_74 = t;
              t = (ATerm) ATinsert(CheckATermList(m_74), l_74);
            }
          }
      }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm x_74 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL;
  x_74 = t;
  t = term_s_32;
  f_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_32, x_74);
  t = g_16(f_75, x_74, t);
  if(match_cons(t, sym__2))
    {
      e_75 = ATgetArgument(t, 0);
      d_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_75;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(s_3, t);
  t = (ATerm) ATmakeAppl(sym__2, e_75, d_75);
  return(t);
}
static ATerm c_14 (ATerm y_80, ATerm x_80, ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,h_76 = NULL;
  t_75 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      u_75 = ATgetArgument(t, 0);
      h_76 = ATgetArgument(t, 1);
      {
        ATerm t_32 = t;
        int u_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_76 = NULL,q_76 = NULL;
            t = y_80;
            t = mk_key_0_0(t);
            n_76 = t;
            t = term_s_32;
            q_76 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_s_32, n_76);
            t = g_16(q_76, n_76, t);
            t = t_75;
            LocalPopChoice(u_32);
          }
        else
          {
            t = t_32;
            t = t_75;
            t = e_15(u_75, h_76, t);
          }
      }
    }
  else
    {
      ATerm w_77 = NULL,x_77 = NULL;
      t = y_80;
      t = mk_key_0_0(t);
      w_77 = t;
      t = term_s_32;
      x_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_32, w_77);
      t = g_16(x_77, w_77, t);
      t = t_75;
    }
  return(t);
}
static ATerm d_14 (ATerm z_118 (ATerm), ATerm g_29, ATerm l_230, ATerm t)
{
  static ATerm v_3 (ATerm t);
  static ATerm v_3 (ATerm t)
  {
    ATerm y_77 = NULL;
    y_77 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_29, y_77);
    t = z_118(t);
    t = y_77;
    return(t);
  }
  t = l_230;
  t = SRTS_one(v_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm i_78 = NULL;
  if(match_cons(t, sym__2))
    {
      i_78 = ATgetArgument(t, 0);
      if((i_78 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm p_78 = NULL;
  if(match_cons(t, sym__2))
    {
      p_78 = ATgetArgument(t, 0);
      if((p_78 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm v_78 = NULL;
  if(match_cons(t, sym__2))
    {
      v_78 = ATgetArgument(t, 0);
      if((v_78 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_whitespace_0_0 (ATerm t)
{
  ATerm a_78 = NULL;
  a_78 = t;
  if(match_int(t, 10))
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_78 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_y_32), term_x_32);
          h_78 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_78, (ATerm) ATinsert(ATinsert(ATempty, term_y_32), term_x_32));
          t = d_14(y_3, a_78, h_78, t);
          t = a_78;
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          t = a_78;
        }
    }
  else
    {
      if(match_int(t, 13))
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_78 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_y_32), term_x_32);
              o_78 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_78, (ATerm) ATinsert(ATinsert(ATempty, term_y_32), term_x_32));
              t = d_14(a_4, a_78, o_78, t);
              t = a_78;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              t = a_78;
            }
        }
      else
        {
          ATerm s_78 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_y_32), term_x_32);
          s_78 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_78, (ATerm) ATinsert(ATinsert(ATempty, term_y_32), term_x_32));
          t = d_14(b_4, a_78, s_78, t);
          t = a_78;
        }
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm p_119 (ATerm), ATerm t)
{
  static ATerm r_79 (ATerm t);
  static ATerm r_79 (ATerm t)
  {
    ATerm c_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_79 = NULL,o_79 = NULL,q_79 = NULL,r_44 = NULL,v_44 = NULL,o_11 = NULL;
        n_79 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_79 = ATgetFirst((ATermList) t);
            q_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_79);
        r_44 = t;
        t = q_79;
        t = r_79(t);
        v_44 = t;
        t = (ATerm) ATinsert(CheckATermList(v_44), o_79);
        o_11 = t;
        t = SSLsetAnnotations(o_11, r_44);
        LocalPopChoice(f_33);
      }
    else
      {
        t = c_33;
        t = p_119(t);
      }
    return(t);
  }
  t = r_79(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_45 = NULL,f_45 = NULL;
      f_45 = t;
      t = SSL_explode_string(f_45);
      t = rtrim_1_0(o_0, t);
      e_45 = t;
      t = SSL_implode_string(e_45);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm j_80 = NULL,j_45 = NULL;
        j_80 = t;
        t = (ATerm) ATinsert(CheckATermList(j_80), term_s_19);
        {
          static ATerm c_4 (ATerm t);
          static ATerm c_4 (ATerm t)
          {
            ATerm k_45 = NULL,l_45 = NULL;
            k_45 = t;
            {
              ATerm i_33 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_33;
                }
            }
            {
              ATerm j_33 = t;
              if((PushChoice() == 0))
                {
                  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,t_45 = NULL,r_11 = NULL;
                  t_45 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_45 = ATgetFirst((ATermList) t);
                      q_45 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_45);
                  o_45 = t;
                  t = p_45;
                  t = o_0(t);
                  r_45 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_45), r_45);
                  r_11 = t;
                  t = SSLsetAnnotations(r_11, o_45);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = j_33;
                }
            }
            t = k_45;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_45 = ATgetFirst((ATermList) t);
                {
                  ATerm m_33 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, l_45);
            return(t);
          }
          t = at_suffix_rev_1_0(c_4, t);
        }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_33 = ATgetFirst((ATermList) t);
            j_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_45;
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  static ATerm v_81 (ATerm t);
  static ATerm v_81 (ATerm t)
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_119(t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        {
          ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,w_46 = NULL,b_47 = NULL,t_11 = NULL;
          q_81 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_81 = ATgetFirst((ATermList) t);
              s_81 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_81);
          w_46 = t;
          t = s_81;
          t = v_81(t);
          b_47 = t;
          t = (ATerm) ATinsert(CheckATermList(b_47), r_81);
          t_11 = t;
          t = SSLsetAnnotations(t_11, w_46);
        }
      }
    return(t);
  }
  t = v_81(t);
  return(t);
}
ATerm drop_while_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm a_82 = NULL;
  static ATerm d_4 (ATerm t);
  static ATerm d_4 (ATerm t)
  {
    ATerm s_82 = NULL,w_82 = NULL,x_82 = NULL;
    s_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_82;
      }
    else
      {
        ATerm r_47 = NULL,v_47 = NULL,w_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_82 = ATgetFirst((ATermList) t);
            x_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_82);
        r_47 = t;
        t = w_82;
        {
          ATerm u_33 = t;
          if((PushChoice() == 0))
            {
              t = m_126(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_33;
            }
        }
        v_47 = t;
        t = (ATerm) ATinsert(CheckATermList(x_82), v_47);
        w_11 = t;
        t = SSLsetAnnotations(w_11, r_47);
      }
    if(((a_82 != NULL) && (a_82 != t)))
      _fail(t);
    else
      a_82 = t;
    return(t);
  }
  t = at_suffix_1_0(d_4, t);
  t = not_null(a_82);
  return(t);
}
ATerm ltrim_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_48 = NULL,c_48 = NULL;
      c_48 = t;
      t = SSL_explode_string(c_48);
      t = ltrim_1_0(m_0, t);
      b_48 = t;
      t = SSL_implode_string(b_48);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      t = drop_while_1_0(m_0, t);
    }
  return(t);
}
ATerm trim_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_48 = NULL,i_48 = NULL;
      i_48 = t;
      t = SSL_explode_string(i_48);
      t = trim_1_0(l_0, t);
      h_48 = t;
      t = SSL_implode_string(h_48);
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      t = ltrim_1_0(l_0, t);
      t = rtrim_1_0(l_0, t);
    }
  return(t);
}
static ATerm e_14 (ATerm j_43, ATerm t)
{
  t = SSL_fgetc(j_43);
  return(t);
}
ATerm read_text_from_stream_0_0 (ATerm t)
{
  ATerm z_83 = NULL,c_84 = NULL;
  z_83 = t;
  {
    static ATerm n_84 (ATerm t);
    static ATerm n_84 (ATerm t)
    {
      ATerm z_33 = t;
      int a_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_84 = NULL,p_48 = NULL,q_48 = NULL,s_48 = NULL;
          l_84 = t;
          t = z_83;
          if(match_cons(t, sym_Stream_1))
            {
              s_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_14(s_48, t);
          p_48 = t;
          t = term_s_19;
          t = n_84(t);
          q_48 = t;
          t = (ATerm) ATinsert(CheckATermList(q_48), p_48);
          LocalPopChoice(a_34);
        }
      else
        {
          t = z_33;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = n_84(t);
  }
  c_84 = t;
  t = SSL_implode_string(c_84);
  return(t);
}
ATerm read_text_file_0_0 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL,t_84 = NULL;
  p_84 = t;
  t = term_b_34;
  t_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_84, term_b_34);
  t = a_16(p_84, t_84, t);
  q_84 = t;
  t = read_text_from_stream_0_0(t);
  r_84 = t;
  t = q_84;
  t = fclose_0_0(t);
  t = r_84;
  return(t);
}
static ATerm f_14 (ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm d_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_46, p_46);
      LocalPopChoice(h_34);
    }
  else
    {
      t = d_34;
      t = SSL_subtr(o_46, p_46);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL,x_84 = NULL,y_84 = NULL;
  t = term_i_34;
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_85 = NULL,b_85 = NULL;
        t = term_n_34;
        a_85 = t;
        t = term_i_34;
        b_85 = t;
        t = term_o_34;
        t = g_16(a_85, b_85, t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        t = term_w_19;
      }
  }
  v_84 = t;
  t = term_w_19;
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_84, term_w_19);
  t = f_14(v_84, y_84, t);
  x_84 = t;
  t = SSL_int_to_string(x_84);
  u_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_84), term_i_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_86 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_35;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm g_86 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_35);
      g_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_86, (ATerm) ATinsert(ATempty, term_d_35));
      t = m_14(e_86, g_86, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm l_87 = NULL,o_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if(match_cons(e_35, sym_Stream_1))
        {
          l_87 = ATgetArgument(e_35, 0);
        }
      else
        _fail(t);
      o_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15(l_87, o_87, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm t)
{
  ATerm i_86 = NULL,k_87 = NULL;
  k_87 = t;
  t = xtc_new_file_0_0(t);
  i_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_86, k_87);
  t = x_15(e_4, i_86, k_87, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_86);
  t = xtc_transform_file_2_0(w_144, x_144, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_14 (ATerm t_62, ATerm u_62, ATerm t)
{
  t = SSL_execvp(t_62, u_62);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,c_89 = NULL,k_89 = NULL;
  w_88 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_88 = ATgetArgument(t, 0);
      {
        ATerm c_49 = NULL,d_49 = NULL;
        t = SSL_int_to_string(x_88);
        c_49 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_35), c_49), term_f_35);
        d_49 = t;
        t = SSL_concat_strings(d_49);
      }
    }
  else
    {
      ATerm f_50 = NULL,g_50 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_88 = ATgetArgument(t, 0);
          c_89 = ATgetArgument(t, 1);
          k_89 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_89);
      f_50 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_89), term_i_35), f_50), term_h_35), x_88);
      g_50 = t;
      t = SSL_concat_strings(g_50);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_89 = NULL;
  p_89 = t;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_4 (ATerm t);
        static ATerm f_4 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm m_35 = ATgetArgument(t, 0);
              if((p_89 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm n_35 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_42), term_d_42), term_w_41), term_s_41), term_f_41), term_b_41), term_v_40), term_n_40), term_j_40), term_b_40), term_x_39), term_o_39), term_i_39), term_c_39), term_y_38), term_o_38), term_h_38), term_d_38), term_w_37), term_o_37), term_j_37), term_d_37), term_w_36), term_r_36), term_j_36), term_c_36), term_w_35), term_q_35);
        t = fetch_elem_1_0(f_4, t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_89);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_90 = NULL,p_90 = NULL;
  d_90 = t;
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_42 = ATgetArgument(t, 0);
            p_90 = ATgetArgument(t, 1);
            {
              ATerm y_42 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_42);
        {
          ATerm z_42 = t;
          int a_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_50 = NULL,s_50 = NULL,t_50 = NULL;
              t = p_90;
              {
                ATerm b_43 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_43;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              q_50 = t;
              t = term_t_19;
              s_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, q_50), term_c_43);
              t_50 = t;
              t = SSL_printnl(s_50, t_50);
              t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATempty, q_50), term_c_43));
              LocalPopChoice(a_43);
            }
          else
            {
              t = z_42;
              t = d_90;
            }
        }
      }
    else
      {
        t = m_42;
        t = d_90;
      }
  }
  t = d_90;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm a_137 (ATerm), ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL;
  c_91 = t;
  t = fork_0_0(t);
  b_91 = t;
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_91;
        t = a_137(t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        t = SSL_waitpid(b_91);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_43 = ATgetArgument(t, 0);
            if(((ATgetType(f_43) != AT_INT) || (ATgetInt((ATermInt) f_43) != 0)))
              _fail(t);
            {
              ATerm l_43 = ATgetArgument(t, 1);
            }
            {
              ATerm m_43 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_91;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_145 (ATerm), ATerm t)
{
  ATerm e_91 = NULL,f_91 = NULL;
  f_91 = t;
  t = x_145(t);
  t = xtc_find_0_0(t);
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_91, f_91);
  {
    static ATerm g_4 (ATerm t);
    static ATerm g_4 (ATerm t)
    {
      ATerm g_91 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_91, f_91);
      t = g_14(e_91, f_91, t);
      t = term_r_43;
      g_91 = t;
      t = SSL_exit(g_91);
      return(t);
    }
    t = fork_and_wait_1_0(g_4, t);
  }
  t = f_91;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_91 = NULL,n_91 = NULL;
  l_91 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_91 = NULL,q_91 = NULL;
      t = l_91;
      t = xtc_new_file_0_0(t);
      o_91 = t;
      t = j_0(t);
      q_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_91, (ATerm) ATinsert(ATinsert(ATempty, o_91), term_s_43));
      t = conc_0_0(t);
      t = xtc_command_1_0(h_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_91);
    }
  else
    {
      ATerm t_91 = NULL,w_91 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_91;
      t = xtc_new_file_0_0(t);
      t_91 = t;
      t = j_0(t);
      w_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_91, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_91), term_s_43), n_91), term_t_43));
      t = conc_0_0(t);
      t = xtc_command_1_0(h_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_91);
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm b_92 = NULL,e_92 = NULL;
  if(match_cons(t, sym__2))
    {
      b_92 = ATgetArgument(t, 0);
      e_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_92;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm p_92 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_92, e_92);
      t = w_14(b_92, e_92, t);
      p_92 = t;
      t = (ATerm) ATinsert(CheckATermList(p_92), b_92);
    }
  return(t);
}
static ATerm i_14 (ATerm n_71, ATerm t)
{
  t = SSL_hashtable_keys(n_71);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_92 = NULL,s_92 = NULL;
  static ATerm h_4 (ATerm t);
  static ATerm h_4 (ATerm t)
  {
    ATerm t_92 = NULL,u_92 = NULL;
    t_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_92), t_92);
    t = g_16(not_null(q_92), t_92, t);
    u_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_92, u_92);
    return(t);
  }
  if(((q_92 != NULL) && (q_92 != t)))
    _fail(t);
  else
    q_92 = t;
  t = lookup_table_0_1(q_92, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(s_92, t);
  t = map_1_0(h_4, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_135 (ATerm), ATerm t)
{
  ATerm y_92 = NULL;
  y_92 = t;
  {
    ATerm u_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_93 = NULL,e_93 = NULL,f_93 = NULL;
        t = term_n_34;
        e_93 = t;
        t = term_i_34;
        f_93 = t;
        t = term_o_34;
        t = g_16(e_93, f_93, t);
        a_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_93, term_q_41);
        t = geq_0_0(t);
        t = y_92;
        t = r_135(t);
        LocalPopChoice(w_43);
      }
    else
      {
        t = u_43;
        t = y_92;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_135 (ATerm), ATerm t)
{
  ATerm n_93 = NULL;
  n_93 = t;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_93 = NULL,r_93 = NULL,u_93 = NULL;
        t = term_n_34;
        r_93 = t;
        t = term_i_34;
        u_93 = t;
        t = term_o_34;
        t = g_16(r_93, u_93, t);
        q_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_93, term_f_38);
        t = geq_0_0(t);
        t = n_93;
        t = q_135(t);
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        t = n_93;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_135 (ATerm), ATerm t)
{
  ATerm y_93 = NULL;
  y_93 = t;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_94 = NULL,e_94 = NULL,f_94 = NULL;
        t = term_n_34;
        e_94 = t;
        t = term_i_34;
        f_94 = t;
        t = term_o_34;
        t = g_16(e_94, f_94, t);
        a_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_94, term_f_36);
        t = geq_0_0(t);
        t = y_93;
        t = s_135(t);
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = y_93;
      }
  }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm x_94 = NULL;
  if(match_cons(t, sym__2))
    {
      x_94 = ATgetArgument(t, 0);
      if((x_94 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm l_67, ATerm m_67, ATerm n_67, ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL;
  l_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_67, m_67);
  {
    ATerm d_44 = t;
    int j_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_44 = ATgetArgument(t, 0);
            ATerm l_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_67, m_67);
        t = g_16(l_67, m_67, t);
        LocalPopChoice(j_44);
      }
    else
      {
        t = d_44;
        t = (ATerm) ATempty;
      }
  }
  n_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_94, n_67);
  t = r_15(k_4, n_94, n_67, t);
  m_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_67, m_67, m_94);
  t = lookup_table_0_1(l_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(m_67, m_94, o_94, t);
  t = l_94;
  return(t);
}
static ATerm l_14 (ATerm j_140 (ATerm), ATerm v_67, ATerm u_67, ATerm t)
{
  static ATerm m_4 (ATerm t);
  static ATerm m_4 (ATerm t)
  {
    ATerm z_94 = NULL,a_95 = NULL;
    if(match_cons(t, sym__2))
      {
        z_94 = ATgetArgument(t, 0);
        a_95 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_67, z_94, a_95);
    t = j_140(t);
    return(t);
  }
  t = u_67;
  t = map_1_0(m_4, t);
  return(t);
}
static ATerm m_14 (ATerm g_43, ATerm h_43, ATerm t)
{
  t = SSL_access(g_43, h_43);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_m_44;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_p_44;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_95 = NULL,c_95 = NULL;
      b_95 = t;
      t = (ATerm) ATinsert(ATempty, term_t_44);
      c_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_95, (ATerm) ATinsert(ATempty, term_t_44));
      t = m_14(b_95, c_95, t);
      LocalPopChoice(s_44);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_44;
      {
        ATerm u_44 = t;
        int w_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_45 = t;
            if((PushChoice() == 0))
              {
                ATerm d_95 = NULL,e_95 = NULL;
                d_95 = t;
                t = (ATerm) ATinsert(ATempty, term_d_35);
                e_95 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_95, (ATerm) ATinsert(ATempty, term_d_35));
                t = m_14(d_95, e_95, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_45;
              }
            t = debug_1_0(n_4, t);
            LocalPopChoice(w_44);
          }
        else
          {
            t = u_44;
            t = debug_1_0(o_4, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = debug_1_0(q_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = debug_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL;
  a_96 = t;
  t = term_t_19;
  b_96 = t;
  t = (ATerm) ATinsert(ATempty, term_d_45);
  c_96 = t;
  t = SSL_printnl(b_96, c_96);
  t = a_96;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm d_96 = NULL,f_96 = NULL,m_96 = NULL;
  if(match_cons(t, sym__3))
    {
      d_96 = ATgetArgument(t, 0);
      f_96 = ATgetArgument(t, 1);
      m_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_14(d_96, f_96, m_96, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
  p_96 = t;
  t = term_t_19;
  q_96 = t;
  t = (ATerm) ATinsert(ATempty, term_g_45);
  r_96 = t;
  t = SSL_printnl(q_96, r_96);
  t = p_96;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm s_96 = NULL,w_96 = NULL,x_96 = NULL;
  s_96 = t;
  t = term_t_19;
  w_96 = t;
  t = (ATerm) ATinsert(ATempty, term_d_45);
  x_96 = t;
  t = SSL_printnl(w_96, x_96);
  t = s_96;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL;
  f_95 = t;
  t = if_verbose5_1_0(p_4, t);
  {
    ATerm h_45 = t;
    if((PushChoice() == 0))
      {
        ATerm y_95 = NULL,z_95 = NULL;
        t = term_i_45;
        y_95 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, f_95);
        z_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_45, (ATerm) ATmakeAppl(sym_Imported_1, f_95));
        t = g_16(y_95, z_95, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_45;
      }
  }
  h_95 = t;
  t = term_i_45;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_45, term_m_45, (ATerm) ATinsert(ATempty, f_95));
  t = lookup_table_0_1(s_95, t);
  x_95 = t;
  t = term_m_45;
  t_95 = t;
  t = (ATerm) ATinsert(ATempty, f_95);
  v_95 = t;
  t = x_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(t_95, v_95, w_95, t);
  t = h_95;
  t = if_verbose4_1_0(w_4, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_4, t);
  g_95 = t;
  t = term_i_45;
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_45, g_95);
  t = l_14(z_4, r_95, g_95, t);
  t = if_verbose6_1_0(a_5, t);
  t = term_i_45;
  i_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_45, (ATerm)ATmakeAppl(sym_Imported_1, f_95), (ATerm) ATempty);
  t = lookup_table_0_1(i_95, t);
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, f_95);
  l_95 = t;
  t = (ATerm) ATempty;
  m_95 = t;
  t = q_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(l_95, m_95, n_95, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_45, (ATerm)ATmakeAppl(sym_Imported_1, f_95), (ATerm) ATempty);
  t = if_verbose4_1_0(d_5, t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_96 = NULL,c_97 = NULL;
      t = term_n_34;
      y_96 = t;
      t = term_x_45;
      c_97 = t;
      t = term_y_45;
      t = g_16(y_96, c_97, t);
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      {
        ATerm z_45 = t;
        int a_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_97 = NULL;
            t = term_c_46;
            e_97 = t;
            t = SSL_getenv(e_97);
            LocalPopChoice(a_46);
          }
        else
          {
            t = z_45;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = debug_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_d_46;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm k_97 = NULL,l_97 = NULL;
  t = term_i_45;
  k_97 = t;
  t = term_e_46;
  l_97 = t;
  t = term_h_46;
  t = g_16(k_97, l_97, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_46 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_46;
      }
  }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = debug_1_0(j_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_l_46;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_97 = NULL;
  t = if_verbose5_1_0(e_5, t);
  g_97 = t;
  {
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_97 = NULL,i_97 = NULL;
        t = term_i_45;
        h_97 = t;
        t = term_m_45;
        i_97 = t;
        t = term_q_46;
        t = g_16(h_97, i_97, t);
        LocalPopChoice(n_46);
      }
    else
      {
        t = m_46;
        {
          ATerm j_97 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_97 = t;
          t = repeat_2_0(h_5, _id, t);
          t = j_97;
        }
      }
  }
  t = g_97;
  t = if_verbose5_1_0(i_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = debug_1_0(n_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm d_99 (ATerm u_97, ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL;
  t = term_i_45;
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_97);
  d_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_45, (ATerm) ATmakeAppl(sym_Tool_1, u_97));
  t = g_16(c_98, d_98, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_46 = ATgetFirst((ATermList) t);
      if(match_cons(t_46, sym__2))
        {
          ATerm x_46 = ATgetArgument(t_46, 0);
          b_98 = ATgetArgument(t_46, 1);
        }
      else
        _fail(t);
      {
        ATerm u_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_98;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = debug_1_0(y_5, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_i_45;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_6, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_a_47;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_47 = t;
  int i_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_98 = NULL,f_98 = NULL,k_98 = NULL;
      t = if_verbose5_1_0(m_5, t);
      t = xtc_load_0_0(t);
      k_98 = t;
      if(match_cons(t, sym__2))
        {
          e_98 = ATgetArgument(t, 0);
          f_98 = ATgetArgument(t, 1);
          {
            ATerm k_47 = t;
            int m_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
                t = term_i_45;
                u_98 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_98);
                v_98 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_45, (ATerm) ATmakeAppl(sym_Tool_1, e_98));
                t = g_16(u_98, v_98, t);
                {
                  static ATerm o_5 (ATerm t);
                  static ATerm o_5 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_98 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_98 != NULL) && (t_98 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_98 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(o_5, t);
                }
                t = not_null(t_98);
                LocalPopChoice(m_47);
              }
            else
              {
                t = k_47;
                t = d_99(k_98, t);
              }
          }
        }
      else
        {
          t = d_99(k_98, t);
        }
      t = if_verbose5_1_0(u_5, t);
      LocalPopChoice(i_47);
    }
  else
    {
      t = e_47;
      {
        ATerm a_99 = NULL,z_50 = NULL,b_51 = NULL;
        a_99 = t;
        t = term_t_19;
        z_50 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_47), a_99), term_n_47);
        b_51 = t;
        t = SSL_printnl(z_50, b_51);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_47), a_99), term_n_47);
        t = if_verbose5_1_0(b_6, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_p_47;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm e_146 (ATerm), ATerm t)
{
  ATerm q_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_99 = NULL,w_99 = NULL;
      w_99 = t;
      if(match_cons(t, sym_FILE_1))
        {
          v_99 = ATgetArgument(t, 0);
          {
            ATerm f_51 = NULL,y_11 = NULL;
            t = SSLgetAnnotations(w_99);
            f_51 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, v_99);
            y_11 = t;
            t = SSLsetAnnotations(y_11, f_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_99;
        }
      LocalPopChoice(s_47);
      {
        static ATerm n_6 (ATerm t);
        static ATerm n_6 (ATerm t)
        {
          ATerm y_99 = NULL,z_99 = NULL,b_100 = NULL;
          t = term_s_19;
          t = pass_verbose_0_0(t);
          y_99 = t;
          t = term_s_19;
          t = e_146(t);
          t = map_1_0(xtc_find_0_0, t);
          b_100 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_47, b_100);
          t = add_arg_flags_0_0(t);
          z_99 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_99, z_99);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(k_6, n_6, t);
      }
    }
  else
    {
      t = q_47;
      {
        static ATerm p_6 (ATerm t);
        static ATerm p_6 (ATerm t)
        {
          ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL;
          t = term_s_19;
          t = pass_verbose_0_0(t);
          e_100 = t;
          t = term_s_19;
          t = e_146(t);
          t = map_1_0(xtc_find_0_0, t);
          g_100 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_47, g_100);
          t = add_arg_flags_0_0(t);
          f_100 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_100, f_100);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(o_6, p_6, t);
      }
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_48), term_z_47);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_g_48;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_g_48;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  ATerm j_48 = t;
  int l_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_101 = NULL,h_101 = NULL;
      h_101 = t;
      if(match_cons(t, sym_FILE_1))
        {
          f_101 = ATgetArgument(t, 0);
          {
            ATerm m_51 = NULL,a_12 = NULL;
            t = SSLgetAnnotations(h_101);
            m_51 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_101);
            a_12 = t;
            t = SSLsetAnnotations(a_12, m_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_101;
        }
      LocalPopChoice(l_48);
      t = xtc_transform_file_2_0(q_6, pass_verbose_0_0, t);
    }
  else
    {
      t = j_48;
      t = xtc_transform_term_2_0(r_6, pass_verbose_0_0, t);
    }
  {
    ATerm r_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_101 = NULL,x_101 = NULL;
        x_101 = t;
        if(match_cons(t, sym_FILE_1))
          {
            r_101 = ATgetArgument(t, 0);
            {
              ATerm t_51 = NULL,b_12 = NULL;
              t = SSLgetAnnotations(x_101);
              t_51 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_101);
              b_12 = t;
              t = SSLsetAnnotations(b_12, t_51);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_101;
          }
        LocalPopChoice(t_48);
        t = xtc_transform_file_2_0(s_6, pass_verbose_0_0, t);
      }
    else
      {
        t = r_48;
        t = xtc_transform_term_2_0(t_6, pass_verbose_0_0, t);
      }
  }
  t = xtc_ast2abox_1_0(w_6, t);
  {
    ATerm x_48 = t;
    int z_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_102 = NULL,j_102 = NULL;
        j_102 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_102 = ATgetArgument(t, 0);
            {
              ATerm a_52 = NULL,c_12 = NULL;
              t = SSLgetAnnotations(j_102);
              a_52 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_102);
              c_12 = t;
              t = SSLsetAnnotations(c_12, a_52);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_102;
          }
        LocalPopChoice(z_48);
        t = xtc_transform_file_2_0(x_6, pass_verbose_0_0, t);
      }
    else
      {
        t = x_48;
        t = xtc_transform_term_2_0(y_6, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm n_14 (ATerm o_66, ATerm p_66, ATerm n_66, ATerm t)
{
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL;
  r_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_66, p_66);
  {
    ATerm a_49 = t;
    int b_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_49 = ATgetArgument(t, 0);
            ATerm f_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_66, p_66);
        t = g_16(o_66, p_66, t);
        LocalPopChoice(b_49);
      }
    else
      {
        t = a_49;
        t = (ATerm) ATempty;
      }
  }
  s_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_66, p_66, (ATerm) ATinsert(CheckATermList(s_102), n_66));
  t = lookup_table_0_1(o_66, t);
  v_102 = t;
  t = (ATerm) ATinsert(CheckATermList(s_102), n_66);
  t_102 = t;
  t = v_102;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(p_66, t_102, u_102, t);
  t = r_102;
  return(t);
}
static ATerm o_14 (ATerm c_132 (ATerm), ATerm w_47, ATerm u_47, ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL;
  e_103 = t;
  t = c_132(t);
  z_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_102, w_47, u_47);
  t = n_14(z_102, w_47, u_47, t);
  {
    ATerm g_49 = t;
    int h_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_103 = NULL;
        t = term_i_49;
        j_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_102, term_i_49);
        t = g_16(z_102, j_103, t);
        {
          ATerm j_49 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_49;
            }
        }
        LocalPopChoice(h_49);
      }
    else
      {
        t = g_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_103 = ATgetFirst((ATermList) t);
      d_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_102, term_i_49, (ATerm) ATinsert(CheckATermList(d_103), (ATerm) ATinsert(CheckATermList(a_103), w_47)));
  t = lookup_table_0_1(z_102, t);
  i_103 = t;
  t = term_i_49;
  f_103 = t;
  t = (ATerm) ATinsert(CheckATermList(d_103), (ATerm) ATinsert(CheckATermList(a_103), w_47));
  g_103 = t;
  t = i_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(f_103, g_103, h_103, t);
  t = e_103;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm l_103 = NULL;
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_103 = NULL,h_52 = NULL;
      p_103 = t;
      t = term_m_49;
      h_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_103, term_m_49);
      t = z_15(p_103, h_52, t);
      l_103 = t;
      t = SSL_mkstemp(l_103);
      LocalPopChoice(l_49);
    }
  else
    {
      t = k_49;
      {
        ATerm q_103 = NULL;
        t = term_n_49;
        q_103 = t;
        t = SSL_perror(q_103);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_o_49;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL;
  t = P__tmpdir_0_0(t);
  v_103 = t;
  t = term_p_49;
  w_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_103, term_p_49);
  t = z_15(v_103, w_103, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_103 = ATgetArgument(t, 0);
      s_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_19;
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_103, term_s_19);
  t = o_14(z_6, t_103, u_103, t);
  t = SSL_close(s_103);
  t = t_103;
  return(t);
}
static ATerm p_14 (ATerm t_66, ATerm u_66, ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL;
  z_103 = t;
  {
    ATerm q_49 = t;
    int t_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_66, u_66);
        t = g_16(t_66, u_66, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_49 = ATgetFirst((ATermList) t);
            y_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_49);
        {
          ATerm a_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, t_66, u_66, y_103);
          t = lookup_table_0_1(t_66, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_104 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_16(u_66, y_103, a_104, t);
          t = (ATerm) ATmakeAppl(sym__3, t_66, u_66, y_103);
        }
      }
    else
      {
        t = q_49;
        {
          ATerm c_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_66, u_66);
          t = lookup_table_0_1(t_66, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_104 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_16(u_66, c_104, t);
          t = (ATerm) ATmakeAppl(sym__2, t_66, u_66);
        }
      }
  }
  t = z_103;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_131 (ATerm), ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL;
  h_104 = t;
  t = z_131(t);
  g_104 = t;
  {
    ATerm v_49 = t;
    int w_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_104 = NULL;
        t = term_i_49;
        l_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_104, term_i_49);
        t = g_16(g_104, l_104, t);
        {
          ATerm y_49 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_49;
            }
        }
        LocalPopChoice(w_49);
      }
    else
      {
        t = v_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_104 = ATgetFirst((ATermList) t);
      e_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_104, term_i_49, e_104);
  t = lookup_table_0_1(g_104, t);
  k_104 = t;
  t = term_i_49;
  i_104 = t;
  t = k_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(i_104, e_104, j_104, t);
  t = f_104;
  {
    static ATerm a_7 (ATerm t);
    static ATerm a_7 (ATerm t)
    {
      ATerm m_104 = NULL;
      m_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_104, m_104);
      t = p_14(g_104, m_104, t);
      return(t);
    }
    t = map_1_0(a_7, t);
  }
  t = h_104;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm t)
{
  ATerm z_49 = t;
  int b_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_111(t);
      t = b_111(t);
      LocalPopChoice(b_50);
    }
  else
    {
      t = z_49;
      t = b_111(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_131 (ATerm), ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL,v_104 = NULL,w_104 = NULL;
  p_104 = t;
  t = y_131(t);
  o_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_104, term_i_49);
  {
    ATerm c_50 = t;
    int e_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_105 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_50 = ATgetArgument(t, 0);
            ATerm k_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_49;
        b_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_104, term_i_49);
        t = g_16(o_104, b_105, t);
        LocalPopChoice(e_50);
      }
    else
      {
        t = c_50;
        t = (ATerm) ATempty;
      }
  }
  q_104 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_104, term_i_49, (ATerm) ATinsert(CheckATermList(q_104), (ATerm) ATempty));
  t = lookup_table_0_1(o_104, t);
  w_104 = t;
  t = term_i_49;
  r_104 = t;
  t = (ATerm) ATinsert(CheckATermList(q_104), (ATerm) ATempty);
  s_104 = t;
  t = w_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(r_104, s_104, v_104, t);
  t = p_104;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_o_49;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm m_105 = NULL;
  m_105 = t;
  {
    ATerm m_50 = t;
    int n_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(m_105);
        LocalPopChoice(n_50);
      }
    else
      {
        t = m_50;
        t = m_105;
      }
  }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_o_49;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_145 (ATerm), ATerm t)
{
  ATerm e_105 = NULL;
  static ATerm c_7 (ATerm t);
  static ATerm c_7 (ATerm t)
  {
    ATerm h_105 = NULL;
    h_105 = t;
    {
      ATerm o_50 = t;
      int p_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_105 = NULL,j_105 = NULL;
          t = term_o_49;
          i_105 = t;
          t = term_i_49;
          j_105 = t;
          t = term_r_50;
          t = g_16(i_105, j_105, t);
          LocalPopChoice(p_50);
        }
      else
        {
          t = o_50;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_105 != NULL) && (e_105 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_105 = ATgetFirst((ATermList) t);
        {
          ATerm u_50 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_105;
    t = map_1_0(d_7, t);
    t = h_105;
    t = end_scope_1_0(f_7, t);
    return(t);
  }
  t = begin_scope_1_0(b_7, t);
  t = restore_always_2_0(j_145, c_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL;
  u_105 = t;
  t = xtc_new_file_0_0(t);
  t_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_105, u_105);
  t = x_15(q_7, t_105, u_105, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_105);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      s_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_105;
  t = read_text_file_0_0(t);
  t = trim_1_0(is_whitespace_0_0, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_50 = ATgetArgument(t, 0);
      if(match_cons(v_50, sym_Stream_1))
        {
          x_105 = ATgetArgument(v_50, 0);
        }
      else
        _fail(t);
      y_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15(x_105, y_105, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL;
  t = xtc_temp_files_1_0(g_7, t);
  p_105 = t;
  t = term_t_19;
  q_105 = t;
  t = (ATerm) ATinsert(ATempty, term_a_51);
  r_105 = t;
  t = SSL_printnl(q_105, r_105);
  t = p_105;
  t = debug_1_0(u_7, t);
  return(t);
}
static ATerm n_111 (ATerm v_106, ATerm w_106, ATerm x_106, ATerm y_106, ATerm t)
{
  t = x_106;
  t = fetch_1_0(z_7, t);
  t = x_106;
  {
    ATerm c_51 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_51;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, v_106, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, w_106)), (ATerm) ATmakeAppl(sym_attrs_1, x_106));
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm g_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL;
  p_107 = t;
  if(match_cons(t, sym_prod_3))
    {
      q_107 = ATgetArgument(t, 0);
      v_107 = ATgetArgument(t, 1);
      w_107 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_107;
  if(match_cons(t, sym_attrs_1))
    {
      x_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_107;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_107;
      {
        ATerm d_51 = t;
        int e_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm g_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(e_51);
            t = q_107;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_107 = ATgetFirst((ATermList) t);
                m_107 = (ATerm) ATgetNext((ATermList) t);
                t = m_107;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = g_107;
                    {
                      ATerm h_51 = t;
                      int i_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm j_51 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(i_51);
                          {
                            ATerm k_51 = t;
                            int l_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_107;
                                t = fetch_1_0(b_8, t);
                                t = p_107;
                                LocalPopChoice(l_51);
                              }
                            else
                              {
                                t = k_51;
                                {
                                  ATerm n_51 = t;
                                  int o_51 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_107;
                                      t = fetch_1_0(c_8, t);
                                      t = p_107;
                                      LocalPopChoice(o_51);
                                    }
                                  else
                                    {
                                      t = n_51;
                                      t = p_107;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = h_51;
                          {
                            ATerm p_51 = t;
                            int q_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_107;
                                t = fetch_1_0(d_8, t);
                                t = p_107;
                                LocalPopChoice(q_51);
                              }
                            else
                              {
                                t = p_51;
                                {
                                  ATerm r_51 = t;
                                  int s_51 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_107;
                                      t = fetch_1_0(e_8, t);
                                      t = p_107;
                                      LocalPopChoice(s_51);
                                    }
                                  else
                                    {
                                      t = r_51;
                                      t = x_107;
                                      t = fetch_1_0(f_8, t);
                                      t = p_107;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = g_107;
                    {
                      ATerm u_51 = t;
                      int v_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_107;
                          t = fetch_1_0(h_8, t);
                          t = p_107;
                          LocalPopChoice(v_51);
                        }
                      else
                        {
                          t = u_51;
                          {
                            ATerm w_51 = t;
                            int x_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_107;
                                t = fetch_1_0(j_8, t);
                                t = p_107;
                                LocalPopChoice(x_51);
                              }
                            else
                              {
                                t = w_51;
                                t = x_107;
                                t = fetch_1_0(q_8, t);
                                t = p_107;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm y_51 = t;
                int z_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_107;
                    t = fetch_1_0(r_8, t);
                    t = p_107;
                    LocalPopChoice(z_51);
                  }
                else
                  {
                    t = y_51;
                    {
                      ATerm b_52 = t;
                      int c_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_107;
                          t = fetch_1_0(s_8, t);
                          t = p_107;
                          LocalPopChoice(c_52);
                        }
                      else
                        {
                          t = b_52;
                          t = x_107;
                          t = fetch_1_0(t_8, t);
                          t = p_107;
                        }
                    }
                  }
              }
          }
        else
          {
            t = d_51;
            if(match_cons(t, sym_cf_1))
              {
                n_107 = ATgetArgument(t, 0);
                t = n_107;
                if(match_cons(t, sym_sort_1))
                  {
                    o_107 = ATgetArgument(t, 0);
                    t = q_107;
                    {
                      ATerm d_52 = t;
                      int e_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_107;
                          t = fetch_1_0(u_8, t);
                          t = p_107;
                          LocalPopChoice(e_52);
                        }
                      else
                        {
                          t = d_52;
                          {
                            ATerm f_52 = t;
                            int g_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_107;
                                t = fetch_1_0(v_8, t);
                                t = p_107;
                                LocalPopChoice(g_52);
                              }
                            else
                              {
                                t = f_52;
                                {
                                  ATerm i_52 = t;
                                  int j_52 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = n_111(q_107, o_107, x_107, p_107, t);
                                      LocalPopChoice(j_52);
                                    }
                                  else
                                    {
                                      t = i_52;
                                      t = x_107;
                                      t = fetch_1_0(w_8, t);
                                      t = p_107;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = q_107;
                    {
                      ATerm k_52 = t;
                      int l_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_107;
                          t = fetch_1_0(x_8, t);
                          t = p_107;
                          LocalPopChoice(l_52);
                        }
                      else
                        {
                          t = k_52;
                          {
                            ATerm n_52 = t;
                            int o_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_107;
                                t = fetch_1_0(z_8, t);
                                t = p_107;
                                LocalPopChoice(o_52);
                              }
                            else
                              {
                                t = n_52;
                                t = x_107;
                                t = fetch_1_0(d_9, t);
                                t = p_107;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = q_107;
                {
                  ATerm p_52 = t;
                  int q_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_107;
                      t = fetch_1_0(e_9, t);
                      t = p_107;
                      LocalPopChoice(q_52);
                    }
                  else
                    {
                      t = p_52;
                      {
                        ATerm r_52 = t;
                        int s_52 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_107;
                            t = fetch_1_0(f_9, t);
                            t = p_107;
                            LocalPopChoice(s_52);
                          }
                        else
                          {
                            t = r_52;
                            t = x_107;
                            t = fetch_1_0(l_9, t);
                            t = p_107;
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
      t = v_107;
      if(match_cons(t, sym_cf_1))
        {
          n_107 = ATgetArgument(t, 0);
          t = n_107;
          if(match_cons(t, sym_sort_1))
            {
              o_107 = ATgetArgument(t, 0);
              t = q_107;
              {
                ATerm t_52 = t;
                int x_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_107;
                    t = fetch_1_0(m_9, t);
                    t = p_107;
                    LocalPopChoice(x_52);
                  }
                else
                  {
                    t = t_52;
                    {
                      ATerm y_52 = t;
                      int z_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_107;
                          t = fetch_1_0(n_9, t);
                          t = p_107;
                          LocalPopChoice(z_52);
                        }
                      else
                        {
                          t = y_52;
                          {
                            ATerm a_53 = t;
                            int b_53 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_111(q_107, o_107, x_107, p_107, t);
                                LocalPopChoice(b_53);
                              }
                            else
                              {
                                t = a_53;
                                t = x_107;
                                t = fetch_1_0(o_9, t);
                                t = p_107;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = q_107;
              {
                ATerm c_53 = t;
                int d_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_107;
                    t = fetch_1_0(p_9, t);
                    t = p_107;
                    LocalPopChoice(d_53);
                  }
                else
                  {
                    t = c_53;
                    {
                      ATerm e_53 = t;
                      int f_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_107;
                          t = fetch_1_0(s_9, t);
                          t = p_107;
                          LocalPopChoice(f_53);
                        }
                      else
                        {
                          t = e_53;
                          t = x_107;
                          t = fetch_1_0(t_9, t);
                          t = p_107;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = q_107;
          {
            ATerm h_53 = t;
            int i_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_107;
                t = fetch_1_0(u_9, t);
                t = p_107;
                LocalPopChoice(i_53);
              }
            else
              {
                t = h_53;
                {
                  ATerm j_53 = t;
                  int k_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_107;
                      t = fetch_1_0(v_9, t);
                      t = p_107;
                      LocalPopChoice(k_53);
                    }
                  else
                    {
                      t = j_53;
                      t = x_107;
                      t = fetch_1_0(x_9, t);
                      t = p_107;
                    }
                }
              }
          }
        }
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm j_144 (ATerm), ATerm t)
{
  ATerm o_111 = NULL,s_111 = NULL,t_111 = NULL,u_111 = NULL;
  t = number_nonterminals_0_0(t);
  u_111 = t;
  t = make_0_0(t);
  o_111 = t;
  t = u_111;
  {
    static ATerm y_9 (ATerm t);
    static ATerm y_9 (ATerm t)
    {
      static ATerm b_10 (ATerm t);
      static ATerm b_10 (ATerm t)
      {
        ATerm y_111 = NULL;
        t = term_s_19;
        t = j_144(t);
        y_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_111, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(b_10, t);
      return(t);
    }
    t = map_1_0(y_9, t);
  }
  t = concat_0_0(t);
  s_111 = t;
  t = term_s_19;
  t = j_144(t);
  t_111 = t;
  t = (ATerm) ATinsert(CheckATermList(s_111), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, t_111), o_111));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm b_112 = NULL;
  static ATerm c_10 (ATerm t);
  static ATerm c_10 (ATerm t)
  {
    t = c_119(t);
    if(((b_112 != NULL) && (b_112 != t)))
      _fail(t);
    else
      b_112 = t;
    return(t);
  }
  t = fetch_1_0(c_10, t);
  t = not_null(b_112);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm p_112 = NULL,r_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL,z_112 = NULL,b_113 = NULL,c_113 = NULL;
  if(match_cons(t, sym_term_1))
    {
      b_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_113;
  if(match_cons(t, sym_appl_2))
    {
      c_113 = ATgetArgument(t, 0);
      r_112 = ATgetArgument(t, 1);
      {
        ATerm m_52 = NULL;
        t = c_113;
        if(match_cons(t, sym_uqlit_1))
          {
            p_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_112;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
          _fail(t);
        t = r_112;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_112 = ATgetFirst((ATermList) t);
            z_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_112;
        if(match_cons(t, sym_fun_1))
          {
            w_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_112;
        if(match_cons(t, sym_qlit_1))
          {
            x_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_112;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = SSL_explode_string(x_112);
        t = unquote_chars_2_0(g_10, i_10, t);
        m_52 = t;
        t = SSL_implode_string(m_52);
      }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          c_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_113;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(f_10, t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm h_114 = NULL,i_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL;
  i_114 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      l_114 = ATgetArgument(t, 0);
      m_114 = ATgetArgument(t, 1);
      n_114 = ATgetArgument(t, 2);
      h_114 = ATgetArgument(t, 3);
      {
        ATerm w_114 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_53)), m_114), (ATerm) ATinsert(ATinsert(ATempty, term_n_53), (ATerm) ATmakeAppl(sym_lit_1, l_114)));
        t = concat_0_0(t);
        w_114 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, w_114, n_114, h_114);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm u_52 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          l_114 = ATgetArgument(t, 0);
          {
            ATerm p_53 = ATgetArgument(t, 1);
          }
          n_114 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_114;
      {
        ATerm q_53 = t;
        int r_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_52 = NULL;
            t = n_114;
            if(match_cons(t, sym_attrs_1))
              {
                v_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_52;
            t = get_cnstr_name_0_0(t);
            u_52 = t;
            LocalPopChoice(r_53);
            {
              static ATerm j_10 (ATerm t);
              static ATerm j_10 (ATerm t)
              {
                t = u_52;
                return(t);
              }
              t = l_114;
              t = symbols2pp_entries_1_0(j_10, t);
            }
          }
        else
          {
            t = q_53;
            {
              ATerm s_53 = t;
              int t_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(t_53);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = s_53;
                  {
                    ATerm u_53 = t;
                    int v_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_53 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm w_52 = NULL;
                            w_52 = t;
                            t = term_x_53;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(k_10, t);
                            t = w_52;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = w_53;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(v_53);
                      }
                    else
                      {
                        t = u_53;
                      }
                  }
                  t = (ATerm) ATempty;
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_14 (ATerm z_43, ATerm a_44, ATerm t)
{
  t = SSL_mkterm(z_43, a_44);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm u_126 = NULL,v_126 = NULL,x_126 = NULL,y_126 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      x_126 = ATgetArgument(t, 0);
      y_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_126;
  if(match_cons(t, sym_alt_2))
    {
      u_126 = ATgetArgument(t, 0);
      v_126 = ATgetArgument(t, 1);
      {
        ATerm y_53 = t;
        int z_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_127 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, u_126, v_126);
            t = flat_alt_0_0(t);
            c_127 = t;
            t = (ATerm) ATinsert(CheckATermList(c_127), x_126);
            LocalPopChoice(z_53);
          }
        else
          {
            t = y_53;
            t = (ATerm) ATinsert(ATinsert(ATempty, y_126), x_126);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, y_126), x_126);
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL;
  d_115 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_115;
    }
  else
    {
      ATerm l_115 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_115 = ATgetFirst((ATermList) t);
          f_115 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_115;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_115 = ATgetFirst((ATermList) t);
          h_115 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_115;
      t = pair_0_0(t);
      l_115 = t;
      t = (ATerm) ATinsert(CheckATermList(l_115), (ATerm) ATmakeAppl(sym__2, e_115, g_115));
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm n_119 = NULL,r_119 = NULL,u_119 = NULL,w_119 = NULL,s_12 = NULL;
  u_119 = t;
  if(match_cons(t, sym_lit_1))
    {
      r_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_119);
  n_119 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, r_119);
  s_12 = t;
  t = SSLsetAnnotations(s_12, n_119);
  if(match_cons(t, sym_lit_1))
    {
      w_119 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_54, (ATerm) ATmakeAppl(sym_S_1, w_119));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_119 = ATgetArgument(t, 0);
          {
            ATerm c_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_119);
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm p_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,v_121 = NULL,y_121 = NULL,z_121 = NULL,a_122 = NULL,e_13 = NULL,a_123 = NULL,c_122 = NULL,z_12 = NULL;
  a_122 = t;
  if(match_cons(t, sym__2))
    {
      t_121 = ATgetArgument(t, 0);
      v_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_122);
  s_121 = t;
  t = t_121;
  if(match_cons(t, sym_lit_1))
    {
      z_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_121);
  y_121 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, z_121);
  z_12 = t;
  t = SSLsetAnnotations(z_12, y_121);
  if(match_cons(t, sym_lit_1))
    {
      c_122 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_54, (ATerm) ATmakeAppl(sym_S_1, c_122));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          c_122 = ATgetArgument(t, 0);
          {
            ATerm d_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, c_122);
    }
  p_121 = t;
  t = v_121;
  t = _2_0(_id, t_10, t);
  if(match_cons(t, sym_lit_1))
    {
      a_123 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_54, (ATerm) ATmakeAppl(sym_S_1, a_123));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          a_123 = ATgetArgument(t, 0);
          {
            ATerm e_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, a_123);
    }
  r_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_121, r_121);
  e_13 = t;
  t = SSLsetAnnotations(e_13, s_121);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_h_54), (ATerm) ATinsert(ATinsert(ATempty, r_121), p_121));
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm v_122 = NULL,w_122 = NULL;
  v_122 = t;
  if(match_cons(t, sym_iter_1))
    {
      w_122 = ATgetArgument(t, 0);
      {
        ATerm u_55 = NULL,c_13 = NULL;
        t = SSLgetAnnotations(v_122);
        u_55 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, w_122);
        c_13 = t;
        t = SSLsetAnnotations(c_13, u_55);
      }
    }
  else
    {
      ATerm g_56 = NULL,d_13 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          w_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_122);
      g_56 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, w_122);
      d_13 = t;
      t = SSLsetAnnotations(d_13, g_56);
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm n_123 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      n_123 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_54, (ATerm) ATmakeAppl(sym_S_1, n_123));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          n_123 = ATgetArgument(t, 0);
          {
            ATerm i_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, n_123);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm o_116 = NULL,p_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL;
  ATerm j_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL,m_117 = NULL,n_117 = NULL,t_12 = NULL,x_118 = NULL,r_12 = NULL,s_118 = NULL,v_118 = NULL;
      t = reverse_acc_2_0(_id, m_10, t);
      n_117 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_116 = ATgetFirst((ATermList) t);
          f_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_117);
      v_116 = t;
      t = w_116;
      if(match_cons(t, sym__2))
        {
          j_117 = ATgetArgument(t, 0);
          k_117 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_116);
      i_117 = t;
      t = k_117;
      if(match_cons(t, sym_iter_1))
        {
          s_118 = ATgetArgument(t, 0);
          {
            ATerm g_53 = NULL,m_12 = NULL;
            t = SSLgetAnnotations(k_117);
            g_53 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, s_118);
            m_12 = t;
            t = SSLsetAnnotations(m_12, g_53);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              s_118 = ATgetArgument(t, 0);
              {
                ATerm m_53 = NULL,n_12 = NULL;
                t = SSLgetAnnotations(k_117);
                m_53 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, s_118);
                n_12 = t;
                t = SSLsetAnnotations(n_12, m_53);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  s_118 = ATgetArgument(t, 0);
                  v_118 = ATgetArgument(t, 1);
                  {
                    ATerm a_54 = NULL,o_12 = NULL;
                    t = SSLgetAnnotations(k_117);
                    a_54 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, s_118, v_118);
                    o_12 = t;
                    t = SSLsetAnnotations(o_12, a_54);
                  }
                }
              else
                {
                  ATerm e_55 = NULL,p_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      s_118 = ATgetArgument(t, 0);
                      v_118 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_117);
                  e_55 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, s_118, v_118);
                  p_12 = t;
                  t = SSLsetAnnotations(p_12, e_55);
                }
            }
        }
      m_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_117, m_117);
      r_12 = t;
      t = SSLsetAnnotations(r_12, i_117);
      if(match_cons(t, sym_lit_1))
        {
          x_118 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_54, (ATerm) ATmakeAppl(sym_S_1, x_118));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              x_118 = ATgetArgument(t, 0);
              {
                ATerm l_54 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, x_118);
        }
      g_117 = t;
      t = f_117;
      t = map_1_0(n_10, t);
      h_117 = t;
      t = (ATerm) ATinsert(CheckATermList(h_117), g_117);
      t_12 = t;
      t = SSLsetAnnotations(t_12, v_116);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_116 = ATgetFirst((ATermList) t);
          o_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_54 = t;
        if((PushChoice() == 0))
          {
            ATerm b_120 = NULL,c_120 = NULL,h_120 = NULL,k_120 = NULL,v_12 = NULL;
            k_120 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_120 = ATgetFirst((ATermList) t);
                h_120 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_120);
            b_120 = t;
            t = h_120;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_120), c_120);
            v_12 = t;
            t = SSLsetAnnotations(v_12, b_120);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_54;
          }
      }
      t = o_116;
      t = reverse_acc_2_0(_id, o_10, t);
      u_116 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, p_116), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, u_116)));
      LocalPopChoice(k_54);
    }
  else
    {
      t = j_54;
      {
        ATerm n_54 = t;
        int o_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_120 = NULL,r_120 = NULL,t_120 = NULL,z_120 = NULL,y_12 = NULL,f_121 = NULL;
            t = reverse_acc_2_0(_id, p_10, t);
            z_120 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_120 = ATgetFirst((ATermList) t);
                t_120 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_120);
            o_120 = t;
            t = r_120;
            if(match_cons(t, sym_lit_1))
              {
                f_121 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_54, (ATerm) ATmakeAppl(sym_S_1, f_121));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    f_121 = ATgetArgument(t, 0);
                    {
                      ATerm p_54 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, f_121);
              }
            t_116 = t;
            t = t_120;
            {
              ATerm q_54 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_54;
                }
            }
            t = reverse_acc_2_0(_id, q_10, t);
            r_116 = t;
            t = (ATerm) ATinsert(CheckATermList(r_116), t_116);
            y_12 = t;
            t = SSLsetAnnotations(y_12, o_120);
            t = r_116;
            t = pair_0_0(t);
            t = map_1_0(r_10, t);
            s_116 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, t_116), s_116));
            LocalPopChoice(o_54);
          }
        else
          {
            t = n_54;
            t = map_1_0(w_10, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm r_54 = t;
  if((PushChoice() == 0))
    {
      ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL,y_14 = NULL;
      d_124 = t;
      if(match_cons(t, sym_lit_1))
        {
          c_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_124);
      b_124 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, c_124);
      y_14 = t;
      t = SSLsetAnnotations(y_14, b_124);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_54;
    }
  return(t);
}
static ATerm k_125 (ATerm i_124, ATerm l_124, ATerm m_124, ATerm t)
{
  ATerm q_124 = NULL,j_17 = NULL;
  t = SSLgetAnnotations(i_124);
  q_124 = t;
  t = m_124;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_124, m_124);
  j_17 = t;
  t = SSLsetAnnotations(j_17, q_124);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm n_144 (ATerm), ATerm t)
{
  ATerm h_124 = NULL;
  static ATerm j_125 (ATerm t);
  static ATerm j_125 (ATerm t)
  {
    ATerm u_124 = NULL,v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL;
    u_124 = t;
    if(match_cons(t, sym__2))
      {
        v_124 = ATgetArgument(t, 0);
        w_124 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_124;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_124 = ATgetFirst((ATermList) t);
        y_124 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_54 = t;
          int t_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_125(u_124, v_124, w_124, t);
              LocalPopChoice(t_54);
            }
          else
            {
              t = s_54;
              {
                ATerm u_54 = t;
                int v_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_125 = NULL,d_125 = NULL,e_125 = NULL;
                    t = x_124;
                    t = n_144(t);
                    t = term_w_19;
                    e_125 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_124, term_w_19);
                    t = c_16(v_124, e_125, t);
                    d_125 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_125, y_124);
                    t = j_125(t);
                    c_125 = t;
                    t = (ATerm) ATinsert(CheckATermList(c_125), (ATerm) ATmakeAppl(sym__2, v_124, x_124));
                    LocalPopChoice(v_54);
                  }
                else
                  {
                    t = u_54;
                    {
                      ATerm i_125 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, v_124, y_124);
                      t = j_125(t);
                      i_125 = t;
                      t = (ATerm) ATinsert(CheckATermList(i_125), x_124);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = k_125(u_124, v_124, w_124, t);
      }
    return(t);
  }
  h_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, h_124);
  t = j_125(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm o_125 = NULL,u_125 = NULL;
  u_125 = t;
  {
    ATerm w_54 = t;
    int x_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm y_54 = ATgetArgument(t, 0);
            o_125 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_54);
        t = o_125;
      }
    else
      {
        t = w_54;
        t = u_125;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(x_10, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm h_126 = NULL;
  h_126 = t;
  {
    ATerm z_54 = t;
    int a_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_126;
        {
          ATerm b_55 = t;
          if((PushChoice() == 0))
            {
              ATerm k_57 = NULL;
              k_57 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = k_57;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm c_55 = ATgetFirst((ATermList) t);
                      ATerm d_55 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = k_57;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_55;
            }
        }
        t = (ATerm) ATinsert(ATempty, h_126);
        LocalPopChoice(a_55);
      }
    else
      {
        t = z_54;
        t = h_126;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(y_10, t);
  t = concat_0_0(t);
  return(t);
}
ATerm _2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t)
{
  ATerm k_126 = NULL,l_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL,u_17 = NULL;
  q_126 = t;
  if(match_cons(t, sym__2))
    {
      l_126 = ATgetArgument(t, 0);
      n_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_126);
  k_126 = t;
  t = l_126;
  t = r_89(t);
  o_126 = t;
  t = n_126;
  t = s_89(t);
  p_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_126, p_126);
  u_17 = t;
  t = SSLsetAnnotations(u_17, k_126);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL;
  ATerm f_55 = t;
  int g_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          g_130 = ATgetArgument(t, 0);
          h_130 = ATgetArgument(t, 1);
          {
            ATerm h_55 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_55);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, g_130, h_130);
    }
  else
    {
      t = f_55;
      if(match_cons(t, sym_iter_n_2))
        {
          g_130 = ATgetArgument(t, 0);
          {
            ATerm i_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, g_130);
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  u_59 = t;
  if(match_cons(t, sym_Arg_1))
    {
      t_59 = ATgetArgument(t, 0);
      {
        ATerm j_55 = t;
        int k_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_60 = NULL,f_26 = NULL;
            t = SSLgetAnnotations(u_59);
            j_60 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, t_59);
            f_26 = t;
            t = SSLsetAnnotations(f_26, j_60);
            t = term_l_55;
            LocalPopChoice(k_55);
          }
        else
          {
            t = j_55;
            t = u_59;
          }
      }
    }
  else
    {
      t = u_59;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm k_144 (ATerm), ATerm t)
{
  ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL;
  static ATerm p_131 (ATerm t);
  static ATerm p_131 (ATerm t)
  {
    static ATerm r_131 (ATerm q_129, ATerm r_129, ATerm s_129, ATerm t);
    static ATerm s_131 (ATerm l_130, ATerm m_130, ATerm n_130, ATerm o_130, ATerm t);
    static ATerm r_131 (ATerm q_129, ATerm r_129, ATerm s_129, ATerm t)
    {
      ATerm t_129 = NULL,w_129 = NULL,z_25 = NULL;
      t = SSLgetAnnotations(q_129);
      t_129 = t;
      t = s_129;
      t = _2_0(_id, z_10, t);
      w_129 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_129, w_129);
      z_25 = t;
      t = SSLsetAnnotations(z_25, t_129);
      t = p_131(t);
      return(t);
    }
    static ATerm s_131 (ATerm l_130, ATerm m_130, ATerm n_130, ATerm o_130, ATerm t)
    {
      ATerm r_130 = NULL,s_130 = NULL,t_130 = NULL,v_130 = NULL,w_130 = NULL,x_130 = NULL;
      t = SSL_explode_term(o_130);
      if(match_cons(t, sym__2))
        {
          v_130 = ATgetArgument(t, 0);
          w_130 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, m_130, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, n_130, v_130)));
      t = conc_0_0(t);
      r_130 = t;
      t = w_130;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      x_130 = t;
      t = make_0_0(t);
      s_130 = t;
      t = x_130;
      {
        static ATerm a_11 (ATerm t);
        static ATerm a_11 (ATerm t)
        {
          ATerm z_130 = NULL;
          z_130 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_130, r_130), z_130);
          t = p_131(t);
          return(t);
        }
        t = map_1_0(a_11, t);
      }
      t = concat_0_0(t);
      t_130 = t;
      t = (ATerm) ATinsert(CheckATermList(t_130), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, l_130, r_130), s_130));
      return(t);
    }
    ATerm a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL,f_131 = NULL,g_131 = NULL,h_131 = NULL,i_131 = NULL,j_131 = NULL,k_131 = NULL;
    e_131 = t;
    if(match_cons(t, sym__2))
      {
        f_131 = ATgetArgument(t, 0);
        i_131 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_131;
    {
      ATerm m_55 = t;
      int n_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm o_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(n_55);
          t = (ATerm) ATempty;
        }
      else
        {
          t = m_55;
          if(match_cons(t, sym__2))
            {
              j_131 = ATgetArgument(t, 0);
              k_131 = ATgetArgument(t, 1);
              t = k_131;
              {
                ATerm p_55 = t;
                int q_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm r_55 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_55);
                    t = f_131;
                    {
                      ATerm s_55 = t;
                      int t_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm v_55 = ATgetArgument(t, 0);
                              ATerm w_55 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_55);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = s_55;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = p_55;
                    {
                      ATerm x_55 = t;
                      int y_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm z_55 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(y_55);
                          t = f_131;
                          {
                            ATerm a_56 = t;
                            int b_56 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm c_56 = ATgetArgument(t, 0);
                                    ATerm d_56 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(b_56);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = a_56;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = x_55;
                          if(match_cons(t, sym_alt_2))
                            {
                              d_131 = ATgetArgument(t, 0);
                              a_131 = ATgetArgument(t, 1);
                              t = a_131;
                              if(match_cons(t, sym_alt_2))
                                {
                                  b_131 = ATgetArgument(t, 0);
                                  c_131 = ATgetArgument(t, 1);
                                  t = f_131;
                                  if(match_cons(t, sym__2))
                                    {
                                      g_131 = ATgetArgument(t, 0);
                                      h_131 = ATgetArgument(t, 1);
                                      {
                                        ATerm e_56 = t;
                                        int f_56 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm p_58 = NULL,t_58 = NULL,v_58 = NULL,z_58 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,i_59 = NULL,m_26 = NULL;
                                            t = g_131;
                                            if(((e_128 != NULL) && (e_128 != t)))
                                              _fail(t);
                                            else
                                              e_128 = t;
                                            t = h_131;
                                            if(((f_128 != NULL) && (f_128 != t)))
                                              _fail(t);
                                            else
                                              f_128 = t;
                                            t = j_131;
                                            if(((g_128 != NULL) && (g_128 != t)))
                                              _fail(t);
                                            else
                                              g_128 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, d_131, (ATerm) ATmakeAppl(sym_alt_2, b_131, c_131));
                                            t = flat_alt_0_0(t);
                                            p_58 = t;
                                            t = term_h_56;
                                            v_58 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_h_56, p_58);
                                            t = q_14(v_58, p_58, t);
                                            t_58 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_131, h_131), (ATerm) ATmakeAppl(sym__2, j_131, t_58));
                                            t = p_131(t);
                                            i_59 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                e_59 = ATgetFirst((ATermList) t);
                                                f_59 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(i_59);
                                            z_58 = t;
                                            t = e_59;
                                            t = topdown_1_0(b_11, t);
                                            g_59 = t;
                                            t = (ATerm) ATinsert(CheckATermList(f_59), g_59);
                                            m_26 = t;
                                            t = SSLsetAnnotations(m_26, z_58);
                                            LocalPopChoice(f_56);
                                          }
                                        else
                                          {
                                            t = e_56;
                                            {
                                              ATerm i_56 = t;
                                              int j_56 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = r_131(e_131, f_131, i_131, t);
                                                  LocalPopChoice(j_56);
                                                }
                                              else
                                                {
                                                  t = i_56;
                                                  t = s_131(g_131, h_131, j_131, k_131, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = r_131(e_131, f_131, i_131, t);
                                    }
                                }
                              else
                                {
                                  t = f_131;
                                  if(match_cons(t, sym__2))
                                    {
                                      g_131 = ATgetArgument(t, 0);
                                      h_131 = ATgetArgument(t, 1);
                                      {
                                        ATerm k_56 = t;
                                        int l_56 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_131(e_131, f_131, i_131, t);
                                            LocalPopChoice(l_56);
                                          }
                                        else
                                          {
                                            t = k_56;
                                            t = s_131(g_131, h_131, j_131, k_131, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = r_131(e_131, f_131, i_131, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  d_131 = ATgetArgument(t, 0);
                                  t = f_131;
                                  if(match_cons(t, sym__2))
                                    {
                                      g_131 = ATgetArgument(t, 0);
                                      h_131 = ATgetArgument(t, 1);
                                      {
                                        ATerm m_56 = t;
                                        int n_56 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_131(e_131, f_131, i_131, t);
                                            LocalPopChoice(n_56);
                                          }
                                        else
                                          {
                                            t = m_56;
                                            {
                                              ATerm o_56 = t;
                                              int p_56 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_131, h_131), (ATerm) ATmakeAppl(sym__2, j_131, d_131));
                                                  t = p_131(t);
                                                  LocalPopChoice(p_56);
                                                }
                                              else
                                                {
                                                  t = o_56;
                                                  t = s_131(g_131, h_131, j_131, k_131, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = r_131(e_131, f_131, i_131, t);
                                    }
                                }
                              else
                                {
                                  t = f_131;
                                  if(match_cons(t, sym__2))
                                    {
                                      g_131 = ATgetArgument(t, 0);
                                      h_131 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_56 = t;
                                        int r_56 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_131(e_131, f_131, i_131, t);
                                            LocalPopChoice(r_56);
                                          }
                                        else
                                          {
                                            t = q_56;
                                            t = s_131(g_131, h_131, j_131, k_131, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = r_131(e_131, f_131, i_131, t);
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
              t = f_131;
              t = r_131(e_131, f_131, i_131, t);
            }
        }
    }
    return(t);
  }
  i_128 = t;
  t = term_s_19;
  t = k_144(t);
  h_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_128, i_128);
  t = p_131(t);
  return(t);
}
static ATerm w_133 (ATerm g_132, ATerm h_132, ATerm i_132, ATerm t)
{
  ATerm j_132 = NULL,l_132 = NULL;
  t = i_132;
  {
    ATerm s_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_60 = NULL,v_60 = NULL;
        t = h_132;
        t = pp_table_get_0_0(t);
        v_60 = t;
        t = SSL_explode_term(v_60);
        if(match_cons(t, sym__2))
          {
            ATerm u_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_56) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_56 = ATgetArgument(t, 1);
              if(((ATgetType(v_56) == AT_LIST) && !(ATisEmpty(v_56))))
                {
                  ATerm w_56 = ATgetFirst((ATermList) v_56);
                  ATerm x_56 = (ATerm) ATgetNext((ATermList) v_56);
                  if(((ATgetType(x_56) == AT_LIST) && !(ATisEmpty(x_56))))
                    {
                      u_60 = ATgetFirst((ATermList) x_56);
                      {
                        ATerm y_56 = (ATerm) ATgetNext((ATermList) x_56);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_60;
        LocalPopChoice(t_56);
      }
    else
      {
        t = s_56;
        {
          ATerm n_132 = NULL,o_132 = NULL,p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL,w_60 = NULL,x_60 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,z_132 = NULL,u_26 = NULL;
          t = h_132;
          t = reverse_acc_2_0(_id, c_11, t);
          s_132 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_132 = ATgetFirst((ATermList) t);
              r_132 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_132);
          p_132 = t;
          t = r_132;
          t = reverse_acc_2_0(_id, d_11, t);
          j_132 = t;
          t = (ATerm) ATinsert(CheckATermList(j_132), q_132);
          u_26 = t;
          t = SSLsetAnnotations(u_26, p_132);
          t = j_132;
          t = pp_table_get_0_0(t);
          o_132 = t;
          t = SSL_explode_term(o_132);
          if(match_cons(t, sym__2))
            {
              ATerm z_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_56) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm a_57 = ATgetArgument(t, 1);
                if(((ATgetType(a_57) == AT_LIST) && !(ATisEmpty(a_57))))
                  {
                    n_132 = ATgetFirst((ATermList) a_57);
                    {
                      ATerm b_57 = (ATerm) ATgetNext((ATermList) a_57);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = n_132;
          if(match_cons(t, sym_Path_2))
            {
              z_132 = ATgetArgument(t, 0);
              v_132 = ATgetArgument(t, 1);
              t = v_132;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_132 = ATgetFirst((ATermList) t);
                  x_132 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_132;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, z_132, (ATerm) ATinsert(ATempty, w_132));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  z_132 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, z_132, (ATerm) ATempty);
            }
          l_132 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_132, g_132);
          {
            static ATerm e_11 (ATerm t);
            static ATerm e_11 (ATerm t)
            {
              t = l_132;
              return(t);
            }
            t = symbol2abox_1_0(e_11, t);
          }
          t = map_1_0(f_11, t);
          t = h_132;
          t = pp_table_get_0_0(t);
          x_60 = t;
          t = SSL_explode_term(x_60);
          if(match_cons(t, sym__2))
            {
              ATerm c_57 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_57) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm d_57 = ATgetArgument(t, 1);
                if(((ATgetType(d_57) == AT_LIST) && !(ATisEmpty(d_57))))
                  {
                    ATerm e_57 = ATgetFirst((ATermList) d_57);
                    ATerm f_57 = (ATerm) ATgetNext((ATermList) d_57);
                    if(((ATgetType(f_57) == AT_LIST) && !(ATisEmpty(f_57))))
                      {
                        w_60 = ATgetFirst((ATermList) f_57);
                        {
                          ATerm g_57 = (ATerm) ATgetNext((ATermList) f_57);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = w_60;
        }
      }
  }
  return(t);
}
static ATerm x_133 (ATerm f_133, ATerm g_133, ATerm h_133, ATerm i_133, ATerm j_133, ATerm t)
{
  t = j_133;
  {
    ATerm h_57 = t;
    int i_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_60 = NULL,b_61 = NULL;
        t = i_133;
        t = pp_table_get_0_0(t);
        b_61 = t;
        t = SSL_explode_term(b_61);
        if(match_cons(t, sym__2))
          {
            ATerm j_57 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_57) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_57 = ATgetArgument(t, 1);
              if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
                {
                  ATerm m_57 = ATgetFirst((ATermList) l_57);
                  ATerm n_57 = (ATerm) ATgetNext((ATermList) l_57);
                  if(((ATgetType(n_57) == AT_LIST) && !(ATisEmpty(n_57))))
                    {
                      y_60 = ATgetFirst((ATermList) n_57);
                      {
                        ATerm o_57 = (ATerm) ATgetNext((ATermList) n_57);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_60;
        LocalPopChoice(i_57);
      }
    else
      {
        t = h_57;
        {
          ATerm d_61 = NULL,e_61 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, f_133, g_133, h_133);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(g_11, t);
          t = i_133;
          t = pp_table_get_0_0(t);
          e_61 = t;
          t = SSL_explode_term(e_61);
          if(match_cons(t, sym__2))
            {
              ATerm p_57 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_57) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm q_57 = ATgetArgument(t, 1);
                if(((ATgetType(q_57) == AT_LIST) && !(ATisEmpty(q_57))))
                  {
                    ATerm r_57 = ATgetFirst((ATermList) q_57);
                    ATerm s_57 = (ATerm) ATgetNext((ATermList) q_57);
                    if(((ATgetType(s_57) == AT_LIST) && !(ATisEmpty(s_57))))
                      {
                        d_61 = ATgetFirst((ATermList) s_57);
                        {
                          ATerm t_57 = (ATerm) ATgetNext((ATermList) s_57);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = d_61;
        }
      }
  }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm d_133 = NULL,e_133 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      d_133 = ATgetArgument(t, 0);
      e_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_14(d_133, e_133, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm o_133 = NULL,p_133 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      o_133 = ATgetArgument(t, 0);
      p_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_14(o_133, p_133, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL,t_133 = NULL,u_133 = NULL,v_133 = NULL;
  q_133 = t;
  if(match_cons(t, sym__2))
    {
      r_133 = ATgetArgument(t, 0);
      v_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_133;
  if(match_cons(t, sym_prod_3))
    {
      s_133 = ATgetArgument(t, 0);
      t_133 = ATgetArgument(t, 1);
      u_133 = ATgetArgument(t, 2);
      {
        ATerm u_57 = t;
        int v_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_133(r_133, v_133, q_133, t);
            LocalPopChoice(v_57);
          }
        else
          {
            t = u_57;
            t = x_133(s_133, t_133, u_133, v_133, q_133, t);
          }
      }
    }
  else
    {
      t = w_133(r_133, v_133, q_133, t);
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_57 = ATgetFirst((ATermList) t);
      if(((ATgetType(w_57) != AT_INT) || (ATgetInt((ATermInt) w_57) != 34)))
        _fail(t);
      {
        ATerm x_57 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(x_57) != AT_LIST) || !(ATisEmpty(x_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm y_133 = NULL,z_133 = NULL,a_134 = NULL;
  a_134 = t;
  t = SSL_explode_string(a_134);
  y_133 = t;
  {
    ATerm y_57 = t;
    if((PushChoice() == 0))
      {
        ATerm b_134 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_134 = ATgetFirst((ATermList) t);
            {
              ATerm z_57 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_134;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_57;
      }
  }
  t = y_133;
  {
    ATerm a_58 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(h_11, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_58;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_58)), y_133), (ATerm) ATinsert(ATempty, term_b_58));
  t = concat_0_0(t);
  z_133 = t;
  t = SSL_implode_string(z_133);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm d_134 = NULL,i_134 = NULL;
  ATerm c_58 = t;
  int d_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm e_58 = ATgetArgument(t, 0);
          ATerm f_58 = ATgetArgument(t, 1);
          ATerm g_58 = ATgetArgument(t, 2);
          d_134 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(d_58);
      {
        ATerm k_134 = NULL;
        t = d_134;
        {
          static ATerm j_11 (ATerm t);
          static ATerm j_11 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((k_134 != NULL) && (k_134 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_134 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(j_11, t);
        }
        t = not_null(k_134);
      }
    }
  else
    {
      t = c_58;
      {
        ATerm m_134 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm h_58 = ATgetArgument(t, 0);
            ATerm i_58 = ATgetArgument(t, 1);
            i_134 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = i_134;
        {
          static ATerm l_11 (ATerm t);
          static ATerm l_11 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((m_134 != NULL) && (m_134 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_134 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(l_11, t);
        }
        t = not_null(m_134);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm r_134 = NULL,s_134 = NULL,t_134 = NULL,v_134 = NULL,w_134 = NULL,x_134 = NULL,y_134 = NULL,z_134 = NULL;
  if(match_cons(t, sym__2))
    {
      v_134 = ATgetArgument(t, 0);
      z_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_134;
  if(match_cons(t, sym_prod_fun_4))
    {
      w_134 = ATgetArgument(t, 0);
      x_134 = ATgetArgument(t, 1);
      y_134 = ATgetArgument(t, 2);
      s_134 = ATgetArgument(t, 3);
      t = s_134;
      if(match_cons(t, sym_attrs_1))
        {
          r_134 = ATgetArgument(t, 0);
          {
            ATerm f_135 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, r_134, z_134);
            t = conc_0_0(t);
            f_135 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, w_134, x_134, y_134, (ATerm) ATmakeAppl(sym_attrs_1, f_135));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, w_134, x_134, y_134, (ATerm) ATmakeAppl(sym_attrs_1, z_134));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          w_134 = ATgetArgument(t, 0);
          x_134 = ATgetArgument(t, 1);
          y_134 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_134;
      if(match_cons(t, sym_attrs_1))
        {
          t_134 = ATgetArgument(t, 0);
          {
            ATerm t_135 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, t_134, z_134);
            t = conc_0_0(t);
            t_135 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, w_134, x_134, (ATerm) ATmakeAppl(sym_attrs_1, t_135));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, w_134, x_134, (ATerm) ATmakeAppl(sym_attrs_1, z_134));
        }
    }
  return(t);
}
ATerm escape_chars_1_0 (ATerm f_129 (ATerm), ATerm t)
{
  static ATerm t_136 (ATerm t);
  static ATerm t_136 (ATerm t)
  {
    ATerm j_58 = t;
    int k_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_136 = NULL,d_136 = NULL,e_136 = NULL,f_136 = NULL,g_136 = NULL,w_26 = NULL;
        t = f_129(t);
        g_136 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_136 = ATgetFirst((ATermList) t);
            e_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_136);
        c_136 = t;
        t = e_136;
        t = Cons_2_0(_id, t_136, t);
        f_136 = t;
        t = (ATerm) ATinsert(CheckATermList(f_136), d_136);
        w_26 = t;
        t = SSLsetAnnotations(w_26, c_136);
        LocalPopChoice(k_58);
      }
    else
      {
        t = j_58;
        {
          ATerm q_136 = NULL,r_136 = NULL,s_136 = NULL;
          s_136 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_136 = ATgetFirst((ATermList) t);
              r_136 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm y_61 = NULL,g_62 = NULL,a_27 = NULL;
                t = SSLgetAnnotations(s_136);
                y_61 = t;
                t = r_136;
                t = t_136(t);
                g_62 = t;
                t = (ATerm) ATinsert(CheckATermList(g_62), q_136);
                a_27 = t;
                t = SSLsetAnnotations(a_27, y_61);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_136;
            }
        }
      }
    return(t);
  }
  t = t_136(t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm v_62 = NULL,x_62 = NULL,z_62 = NULL;
  v_62 = t;
  if(match_int(t, 34))
    {
      ATerm l_58 = t;
      int m_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_58), term_n_58);
          LocalPopChoice(m_58);
        }
      else
        {
          t = l_58;
          t = (ATerm) ATinsert(ATempty, v_62);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm o_58 = t;
          int q_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_n_58), term_n_58);
              LocalPopChoice(q_58);
            }
          else
            {
              t = o_58;
              t = (ATerm) ATinsert(ATempty, v_62);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_62 = ATgetFirst((ATermList) t);
              z_62 = (ATerm) ATgetNext((ATermList) t);
              t = x_62;
              if(match_int(t, 34))
                {
                  ATerm r_58 = t;
                  int s_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, v_62);
                      LocalPopChoice(s_58);
                    }
                  else
                    {
                      t = r_58;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_62), term_b_58), term_n_58);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm u_58 = t;
                      int w_58 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, v_62);
                          LocalPopChoice(w_58);
                        }
                      else
                        {
                          t = u_58;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_62), term_n_58), term_n_58);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm x_58 = t;
                          int y_58 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, v_62);
                              LocalPopChoice(y_58);
                            }
                          else
                            {
                              t = x_58;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_62), term_a_59), term_n_58);
                            }
                        }
                      else
                        {
                          if(match_int(t, 13))
                            {
                              ATerm b_59 = t;
                              int c_59 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, v_62);
                                  LocalPopChoice(c_59);
                                }
                              else
                                {
                                  t = b_59;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(z_62), term_d_59), term_n_58);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, v_62);
                            }
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, v_62);
            }
        }
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,l_65 = NULL;
  i_65 = t;
  if(match_int(t, 34))
    {
      ATerm h_59 = t;
      int j_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_58), term_n_58);
          LocalPopChoice(j_59);
        }
      else
        {
          t = h_59;
          t = (ATerm) ATinsert(ATempty, i_65);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm k_59 = t;
          int l_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_n_58), term_n_58);
              LocalPopChoice(l_59);
            }
          else
            {
              t = k_59;
              t = (ATerm) ATinsert(ATempty, i_65);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_65 = ATgetFirst((ATermList) t);
              l_65 = (ATerm) ATgetNext((ATermList) t);
              t = j_65;
              if(match_int(t, 34))
                {
                  ATerm m_59 = t;
                  int n_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, i_65);
                      LocalPopChoice(n_59);
                    }
                  else
                    {
                      t = m_59;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(l_65), term_b_58), term_n_58);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm o_59 = t;
                      int p_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, i_65);
                          LocalPopChoice(p_59);
                        }
                      else
                        {
                          t = o_59;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(l_65), term_n_58), term_n_58);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm q_59 = t;
                          int r_59 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, i_65);
                              LocalPopChoice(r_59);
                            }
                          else
                            {
                              t = q_59;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_65), term_a_59), term_n_58);
                            }
                        }
                      else
                        {
                          if(match_int(t, 13))
                            {
                              ATerm s_59 = t;
                              int v_59 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, i_65);
                                  LocalPopChoice(v_59);
                                }
                              else
                                {
                                  t = s_59;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(l_65), term_d_59), term_n_58);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, i_65);
                            }
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, i_65);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm w_59 = t;
  int x_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_137 = NULL,r_62 = NULL;
      z_137 = t;
      t = SSL_explode_string(z_137);
      t = map_1_0(n_11, t);
      t = concat_0_0(t);
      r_62 = t;
      t = SSL_implode_string(r_62);
      LocalPopChoice(x_59);
    }
  else
    {
      t = w_59;
      {
        ATerm x_63 = NULL,a_64 = NULL;
        a_64 = t;
        t = SSL_explode_string(a_64);
        t = escape_chars_1_0(p_11, t);
        x_63 = t;
        t = SSL_implode_string(x_63);
      }
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm y_59 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_59;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL,b_139 = NULL,w_67 = NULL,x_67 = NULL,b_68 = NULL,o_67 = NULL,p_67 = NULL,e_27 = NULL;
  t = filter_1_0(s_11, t);
  b_139 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_138 = ATgetFirst((ATermList) t);
      z_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_139);
  x_138 = t;
  t = SSL_explode_string(y_138);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_139 = ATgetFirst((ATermList) t);
      {
        ATerm z_59 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_139;
  {
    ATerm a_60 = t;
    int b_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_60, a_139);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_139, term_d_60);
        t = leq_0_0(t);
        t = a_139;
        LocalPopChoice(b_60);
      }
    else
      {
        t = a_60;
        t = (ATerm) ATmakeAppl(sym__2, term_e_60, a_139);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_139, term_f_60);
        t = leq_0_0(t);
        t = a_139;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(z_138), y_138);
  e_27 = t;
  t = SSLsetAnnotations(e_27, x_138);
  p_67 = t;
  t = term_g_60;
  o_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_60, p_67);
  t = w_14(o_67, p_67, t);
  w_138 = t;
  t = SSL_concat_strings(w_138);
  v_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_138, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_60), term_t_60), term_s_60), term_r_60), term_q_60), term_p_60), term_o_60), term_n_60), term_m_60), term_l_60), term_k_60), term_i_60), term_h_60));
  {
    ATerm a_61 = t;
    if((PushChoice() == 0))
      {
        ATerm c_139 = NULL,d_139 = NULL;
        if(match_cons(t, sym__2))
          {
            c_139 = ATgetArgument(t, 0);
            d_139 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_139;
        {
          static ATerm u_11 (ATerm t);
          static ATerm u_11 (ATerm t)
          {
            if((c_139 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(u_11, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, c_139, d_139);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_61;
      }
  }
  t = v_138;
  t = escape_0_0(t);
  x_67 = t;
  t = SSL_explode_string(x_67);
  b_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_58)), b_68), (ATerm) ATinsert(ATempty, term_b_58));
  t = concat_0_0(t);
  w_67 = t;
  t = SSL_implode_string(w_67);
  return(t);
}
static ATerm o_139 (ATerm g_139, ATerm t)
{
  ATerm h_139 = NULL;
  t = SSL_explode_term(g_139);
  if(match_cons(t, sym__2))
    {
      ATerm c_61 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_61) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_139;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL;
  l_139 = t;
  if(match_cons(t, sym__2))
    {
      j_139 = ATgetArgument(t, 0);
      k_139 = ATgetArgument(t, 1);
      {
        ATerm f_61 = t;
        int g_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_11 (ATerm t);
            static ATerm v_11 (ATerm t)
            {
              t = k_139;
              return(t);
            }
            t = j_139;
            t = at_end_1_0(v_11, t);
            LocalPopChoice(g_61);
          }
        else
          {
            t = f_61;
            t = o_139(l_139, t);
          }
      }
    }
  else
    {
      t = o_139(l_139, t);
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_61);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_61);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_61);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm k_140 = NULL,l_140 = NULL,m_140 = NULL;
  m_140 = t;
  if(match_cons(t, sym_cf_1))
    {
      k_140 = ATgetArgument(t, 0);
      t = k_140;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          k_140 = ATgetArgument(t, 0);
          t = k_140;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_k_61);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  k_140 = ATgetArgument(t, 0);
                  l_140 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(l_140), k_140);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      k_140 = ATgetArgument(t, 0);
                      t = k_140;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(x_11, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          k_140 = ATgetArgument(t, 0);
                          t = k_140;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(z_11, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              k_140 = ATgetArgument(t, 0);
                              t = k_140;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(d_12, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  k_140 = ATgetArgument(t, 0);
                                  l_140 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_140 = NULL,x_140 = NULL;
                                    t = k_140;
                                    t = Sym2Strs_0_0(t);
                                    w_140 = t;
                                    t = l_140;
                                    t = Sym2Strs_0_0(t);
                                    x_140 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_61)), x_140), w_140);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      k_140 = ATgetArgument(t, 0);
                                      l_140 = ATgetArgument(t, 1);
                                      {
                                        ATerm a_141 = NULL,b_141 = NULL;
                                        t = k_140;
                                        t = Sym2Strs_0_0(t);
                                        a_141 = t;
                                        t = l_140;
                                        t = Sym2Strs_0_0(t);
                                        b_141 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_61)), b_141), a_141);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm l_61 = t;
                                      int m_61 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              k_140 = ATgetArgument(t, 0);
                                              {
                                                ATerm n_61 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(m_61);
                                          {
                                            ATerm d_141 = NULL;
                                            t = k_140;
                                            t = Sym2Strs_0_0(t);
                                            d_141 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_61)), d_141);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = l_61;
                                          {
                                            ATerm p_61 = t;
                                            int q_61 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    k_140 = ATgetArgument(t, 0);
                                                    l_140 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_61 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(q_61);
                                                {
                                                  ATerm h_141 = NULL,i_141 = NULL;
                                                  t = k_140;
                                                  t = Sym2Strs_0_0(t);
                                                  h_141 = t;
                                                  t = l_140;
                                                  t = Sym2Strs_0_0(t);
                                                  i_141 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_61)), i_141), h_141);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = p_61;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    k_140 = ATgetArgument(t, 0);
                                                    l_140 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_141 = NULL,m_141 = NULL;
                                                      t = k_140;
                                                      t = Sym2Strs_0_0(t);
                                                      l_141 = t;
                                                      t = l_140;
                                                      t = Sym2Strs_0_0(t);
                                                      m_141 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_141), (ATerm) ATinsert(ATempty, term_s_61)), l_141);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        k_140 = ATgetArgument(t, 0);
                                                        l_140 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_141 = NULL,q_141 = NULL;
                                                          t = k_140;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          p_141 = t;
                                                          t = l_140;
                                                          t = Sym2Strs_0_0(t);
                                                          q_141 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_141), (ATerm) ATinsert(ATempty, term_t_61)), p_141);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            k_140 = ATgetArgument(t, 0);
                                                            l_140 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_141 = NULL,u_141 = NULL;
                                                              t = k_140;
                                                              t = Sym2Strs_0_0(t);
                                                              t_141 = t;
                                                              t = l_140;
                                                              t = Sym2Strs_0_0(t);
                                                              u_141 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_141), (ATerm) ATinsert(ATempty, term_u_61)), t_141);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                k_140 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, k_140);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    k_140 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm f_68 = NULL;
                                                                      t = k_140;
                                                                      {
                                                                        ATerm v_61 = t;
                                                                        int z_61 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = de_quote_0_0(t);
                                                                            t = de_escape_0_0(t);
                                                                            LocalPopChoice(z_61);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = v_61;
                                                                          }
                                                                      }
                                                                      f_68 = t;
                                                                      t = (ATerm) ATinsert(ATempty, f_68);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm a_62 = t;
                                                                    int b_62 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            k_140 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm c_62 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(b_62);
                                                                        {
                                                                          ATerm d_69 = NULL;
                                                                          t = k_140;
                                                                          {
                                                                            ATerm d_62 = t;
                                                                            int e_62 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = de_quote_0_0(t);
                                                                                t = de_escape_0_0(t);
                                                                                LocalPopChoice(e_62);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = d_62;
                                                                              }
                                                                          }
                                                                          d_69 = t;
                                                                          t = (ATerm) ATinsert(ATempty, d_69);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_62;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_f_62);
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
static ATerm e_12 (ATerm t)
{
  ATerm h_62 = t;
  int i_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(i_62);
    }
  else
    {
      t = h_62;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(e_12, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_62 = ATgetFirst((ATermList) t);
      if(((ATgetType(j_62) != AT_INT) || (ATgetInt((ATermInt) j_62) != 34)))
        _fail(t);
      {
        ATerm k_62 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(k_62) != AT_LIST) || !(ATisEmpty(k_62))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm u_147 = NULL,x_147 = NULL,y_147 = NULL,a_148 = NULL,b_148 = NULL;
  b_148 = t;
  t = SSL_explode_string(b_148);
  u_147 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_148 = ATgetFirst((ATermList) t);
      {
        ATerm l_62 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_148;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = u_147;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_62 = ATgetFirst((ATermList) t);
      y_147 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_147;
  t = at_last_1_0(f_12, t);
  x_147 = t;
  t = SSL_implode_string(x_147);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm n_62 = t;
  if((PushChoice() == 0))
    {
      ATerm c_142 = NULL,d_142 = NULL;
      if(match_cons(t, sym__2))
        {
          c_142 = ATgetArgument(t, 0);
          d_142 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_142, d_142);
      {
        ATerm o_62 = t;
        int p_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(c_142, d_142);
            LocalPopChoice(p_62);
          }
        else
          {
            t = o_62;
            t = SSL_gtr(c_142, d_142);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, c_142, d_142);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_62;
    }
  return(t);
}
static ATerm r_142 (ATerm h_142, ATerm t)
{
  t = SSL_explode_string(h_142);
  {
    ATerm q_62 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(g_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_62;
      }
  }
  t = term_s_62;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm j_142 = NULL;
  j_142 = t;
  if(match_int(t, 45))
    {
      ATerm w_62 = t;
      int y_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_63, j_142);
          t = leq_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, j_142, term_b_63);
          t = leq_0_0(t);
          t = j_142;
          LocalPopChoice(y_62);
        }
      else
        {
          t = w_62;
          {
            ATerm c_63 = t;
            int d_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, term_c_60, j_142);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, j_142, term_d_60);
                t = leq_0_0(t);
                t = j_142;
                LocalPopChoice(d_63);
              }
            else
              {
                t = c_63;
                {
                  ATerm e_63 = t;
                  int f_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_60, j_142);
                      t = leq_0_0(t);
                      t = (ATerm) ATmakeAppl(sym__2, j_142, term_f_60);
                      t = leq_0_0(t);
                      t = j_142;
                      LocalPopChoice(f_63);
                    }
                  else
                    {
                      t = e_63;
                      t = term_s_19;
                    }
                }
              }
          }
        }
    }
  else
    {
      ATerm g_63 = t;
      int h_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_63, j_142);
          t = leq_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, j_142, term_b_63);
          t = leq_0_0(t);
          t = j_142;
          LocalPopChoice(h_63);
        }
      else
        {
          t = g_63;
          {
            ATerm i_63 = t;
            int j_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, term_c_60, j_142);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, j_142, term_d_60);
                t = leq_0_0(t);
                t = j_142;
                LocalPopChoice(j_63);
              }
            else
              {
                t = i_63;
                t = (ATerm) ATmakeAppl(sym__2, term_e_60, j_142);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, j_142, term_f_60);
                t = leq_0_0(t);
                t = j_142;
              }
          }
        }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm q_142 = NULL;
  q_142 = t;
  if(match_string(t, "|="))
    {
      ATerm k_63 = t;
      int l_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_142(q_142, t);
          LocalPopChoice(l_63);
        }
      else
        {
          t = k_63;
          t = term_m_63;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm n_63 = t;
          int o_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_142(q_142, t);
              LocalPopChoice(o_63);
            }
          else
            {
              t = n_63;
              t = term_p_63;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm q_63 = t;
              int r_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_142(q_142, t);
                  LocalPopChoice(r_63);
                }
              else
                {
                  t = q_63;
                  t = term_s_63;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm t_63 = t;
                  int u_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_142(q_142, t);
                      LocalPopChoice(u_63);
                    }
                  else
                    {
                      t = t_63;
                      t = term_v_63;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm w_63 = t;
                      int y_63 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_142(q_142, t);
                          LocalPopChoice(y_63);
                        }
                      else
                        {
                          t = w_63;
                          t = term_z_63;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm b_64 = t;
                          int c_64 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = r_142(q_142, t);
                              LocalPopChoice(c_64);
                            }
                          else
                            {
                              t = b_64;
                              t = term_d_64;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm e_64 = t;
                              int f_64 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = r_142(q_142, t);
                                  LocalPopChoice(f_64);
                                }
                              else
                                {
                                  t = e_64;
                                  t = term_g_64;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm h_64 = t;
                                  int i_64 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = r_142(q_142, t);
                                      LocalPopChoice(i_64);
                                    }
                                  else
                                    {
                                      t = h_64;
                                      t = term_j_64;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm k_64 = t;
                                      int l_64 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = r_142(q_142, t);
                                          LocalPopChoice(l_64);
                                        }
                                      else
                                        {
                                          t = k_64;
                                          t = term_m_64;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm n_64 = t;
                                          int o_64 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = r_142(q_142, t);
                                              LocalPopChoice(o_64);
                                            }
                                          else
                                            {
                                              t = n_64;
                                              t = term_p_64;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm q_64 = t;
                                              int r_64 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = r_142(q_142, t);
                                                  LocalPopChoice(r_64);
                                                }
                                              else
                                                {
                                                  t = q_64;
                                                  t = term_s_64;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm t_64 = t;
                                                  int u_64 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = r_142(q_142, t);
                                                      LocalPopChoice(u_64);
                                                    }
                                                  else
                                                    {
                                                      t = t_64;
                                                      t = term_v_64;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm w_64 = t;
                                                      int x_64 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = r_142(q_142, t);
                                                          LocalPopChoice(x_64);
                                                        }
                                                      else
                                                        {
                                                          t = w_64;
                                                          t = term_y_64;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm z_64 = t;
                                                          int a_65 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = r_142(q_142, t);
                                                              LocalPopChoice(a_65);
                                                            }
                                                          else
                                                            {
                                                              t = z_64;
                                                              t = term_u_61;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm b_65 = t;
                                                              int c_65 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = r_142(q_142, t);
                                                                  LocalPopChoice(c_65);
                                                                }
                                                              else
                                                                {
                                                                  t = b_65;
                                                                  t = term_d_65;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm e_65 = t;
                                                                  int f_65 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = r_142(q_142, t);
                                                                      LocalPopChoice(f_65);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_65;
                                                                      t = term_d_65;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm m_65 = t;
                                                                      int s_65 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = r_142(q_142, t);
                                                                          LocalPopChoice(s_65);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = m_65;
                                                                          t = term_t_65;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm w_65 = t;
                                                                          int x_65 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = r_142(q_142, t);
                                                                              LocalPopChoice(x_65);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_65;
                                                                              t = term_y_65;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm z_65 = t;
                                                                              int a_66 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = r_142(q_142, t);
                                                                                  LocalPopChoice(a_66);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = z_65;
                                                                                  t = term_b_66;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm c_66 = t;
                                                                                  int d_66 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = r_142(q_142, t);
                                                                                      LocalPopChoice(d_66);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_66;
                                                                                      t = term_e_66;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm f_66 = t;
                                                                                      int j_66 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = r_142(q_142, t);
                                                                                          LocalPopChoice(j_66);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_66;
                                                                                          t = term_l_66;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm s_66 = t;
                                                                                          int v_66 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = r_142(q_142, t);
                                                                                              LocalPopChoice(v_66);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_66;
                                                                                              t = term_a_67;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm b_67 = t;
                                                                                              int c_67 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = r_142(q_142, t);
                                                                                                  LocalPopChoice(c_67);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = b_67;
                                                                                                  t = term_d_67;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm e_67 = t;
                                                                                                  int f_67 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = r_142(q_142, t);
                                                                                                      LocalPopChoice(f_67);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = e_67;
                                                                                                      t = term_g_67;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm i_67 = t;
                                                                                                      int j_67 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = r_142(q_142, t);
                                                                                                          LocalPopChoice(j_67);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = i_67;
                                                                                                          t = term_k_67;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm q_67 = t;
                                                                                                          int r_67 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = r_142(q_142, t);
                                                                                                              LocalPopChoice(r_67);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_67;
                                                                                                              t = term_s_67;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm y_67 = t;
                                                                                                              int z_67 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = r_142(q_142, t);
                                                                                                                  LocalPopChoice(z_67);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_67;
                                                                                                                  t = term_c_68;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm d_68 = t;
                                                                                                                  int e_68 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = r_142(q_142, t);
                                                                                                                      LocalPopChoice(e_68);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = d_68;
                                                                                                                      t = term_g_68;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm j_68 = t;
                                                                                                                      int k_68 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = r_142(q_142, t);
                                                                                                                          LocalPopChoice(k_68);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_68;
                                                                                                                          t = term_s_61;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm l_68 = t;
                                                                                                                          int m_68 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = r_142(q_142, t);
                                                                                                                              LocalPopChoice(m_68);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = l_68;
                                                                                                                              t = term_o_68;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm p_68 = t;
                                                                                                                              int q_68 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = r_142(q_142, t);
                                                                                                                                  LocalPopChoice(q_68);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = p_68;
                                                                                                                                  t = term_r_68;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm s_68 = t;
                                                                                                                                  int t_68 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = r_142(q_142, t);
                                                                                                                                      LocalPopChoice(t_68);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = s_68;
                                                                                                                                      t = term_u_68;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm w_68 = t;
                                                                                                                                      int x_68 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = r_142(q_142, t);
                                                                                                                                          LocalPopChoice(x_68);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = w_68;
                                                                                                                                          t = term_y_68;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm z_68 = t;
                                                                                                                                          int a_69 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = r_142(q_142, t);
                                                                                                                                              LocalPopChoice(a_69);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = z_68;
                                                                                                                                              t = term_b_69;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm c_69 = t;
                                                                                                                                              int e_69 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = r_142(q_142, t);
                                                                                                                                                  LocalPopChoice(e_69);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = c_69;
                                                                                                                                                  t = term_f_69;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm g_69 = t;
                                                                                                                                                  int h_69 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = r_142(q_142, t);
                                                                                                                                                      LocalPopChoice(h_69);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = g_69;
                                                                                                                                                      t = term_i_69;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm j_69 = t;
                                                                                                                                                      int k_69 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_142(q_142, t);
                                                                                                                                                          LocalPopChoice(k_69);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = j_69;
                                                                                                                                                          t = term_l_69;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm n_69 = t;
                                                                                                                                                          int o_69 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = r_142(q_142, t);
                                                                                                                                                              LocalPopChoice(o_69);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = n_69;
                                                                                                                                                              t = term_s_69;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = r_142(q_142, t);
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
static ATerm w_14 (ATerm s_28, ATerm t_28, ATerm t)
{
  ATerm h_143 = NULL,i_143 = NULL;
  t = t_28;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_28;
    }
  else
    {
      ATerm m_69 = NULL,p_69 = NULL,g_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_143 = ATgetFirst((ATermList) t);
          i_143 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_28);
      m_69 = t;
      t = i_143;
      {
        static ATerm t_69 (ATerm t);
        static ATerm t_69 (ATerm t)
        {
          ATerm u_69 = t;
          int v_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_69 = NULL;
              q_69 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_69;
              LocalPopChoice(v_69);
            }
          else
            {
              t = u_69;
              {
                ATerm r_69 = NULL;
                t = Cons_2_0(_id, t_69, t);
                r_69 = t;
                t = (ATerm) ATinsert(CheckATermList(r_69), s_28);
              }
            }
          return(t);
        }
        t = t_69(t);
      }
      p_69 = t;
      t = (ATerm) ATinsert(CheckATermList(p_69), h_143);
      g_27 = t;
      t = SSLsetAnnotations(g_27, m_69);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm u_143 = NULL,v_143 = NULL,w_143 = NULL,x_143 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_143 = ATgetFirst((ATermList) t);
      x_143 = (ATerm) ATgetNext((ATermList) t);
      t = x_143;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_143 = ATgetFirst((ATermList) t);
          v_143 = (ATerm) ATgetNext((ATermList) t);
          t = u_143;
          if(match_int(t, 34))
            {
              t = w_143;
              if(match_int(t, 92))
                {
                  ATerm w_69 = t;
                  int x_69 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_144 = NULL;
                      t = v_143;
                      t = De_Escape_0_0(t);
                      a_144 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_144), term_b_58);
                      LocalPopChoice(x_69);
                    }
                  else
                    {
                      t = w_69;
                      {
                        ATerm d_144 = NULL;
                        t = x_143;
                        t = De_Escape_0_0(t);
                        d_144 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_144), w_143);
                      }
                    }
                }
              else
                {
                  ATerm g_144 = NULL;
                  t = x_143;
                  t = De_Escape_0_0(t);
                  g_144 = t;
                  t = (ATerm) ATinsert(CheckATermList(g_144), w_143);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = w_143;
                  if(match_int(t, 92))
                    {
                      ATerm y_69 = t;
                      int z_69 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_144 = NULL;
                          t = v_143;
                          t = De_Escape_0_0(t);
                          i_144 = t;
                          t = (ATerm) ATinsert(CheckATermList(i_144), term_n_58);
                          LocalPopChoice(z_69);
                        }
                      else
                        {
                          t = y_69;
                          {
                            ATerm s_144 = NULL;
                            t = x_143;
                            t = De_Escape_0_0(t);
                            s_144 = t;
                            t = (ATerm) ATinsert(CheckATermList(s_144), w_143);
                          }
                        }
                    }
                  else
                    {
                      ATerm v_144 = NULL;
                      t = x_143;
                      t = De_Escape_0_0(t);
                      v_144 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_144), w_143);
                    }
                }
              else
                {
                  ATerm a_145 = NULL;
                  t = x_143;
                  t = De_Escape_0_0(t);
                  a_145 = t;
                  t = (ATerm) ATinsert(CheckATermList(a_145), w_143);
                }
            }
        }
      else
        {
          ATerm d_145 = NULL;
          t = x_143;
          t = De_Escape_0_0(t);
          d_145 = t;
          t = (ATerm) ATinsert(CheckATermList(d_145), w_143);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm m_145 = NULL,n_145 = NULL,o_145 = NULL,p_145 = NULL,q_145 = NULL,r_145 = NULL;
  n_145 = t;
  t = SSL_explode_string(n_145);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_145 = ATgetFirst((ATermList) t);
      r_145 = (ATerm) ATgetNext((ATermList) t);
      t = r_145;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_145 = ATgetFirst((ATermList) t);
          p_145 = (ATerm) ATgetNext((ATermList) t);
          t = o_145;
          if(match_int(t, 34))
            {
              t = q_145;
              if(match_int(t, 92))
                {
                  ATerm b_70 = t;
                  int d_70 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_145 = NULL;
                      t = p_145;
                      t = De_Escape_0_0(t);
                      u_145 = t;
                      t = (ATerm) ATinsert(CheckATermList(u_145), term_b_58);
                      LocalPopChoice(d_70);
                    }
                  else
                    {
                      t = b_70;
                      {
                        ATerm y_145 = NULL;
                        t = r_145;
                        t = De_Escape_0_0(t);
                        y_145 = t;
                        t = (ATerm) ATinsert(CheckATermList(y_145), q_145);
                      }
                    }
                }
              else
                {
                  ATerm b_146 = NULL;
                  t = r_145;
                  t = De_Escape_0_0(t);
                  b_146 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_146), q_145);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = q_145;
                  if(match_int(t, 92))
                    {
                      ATerm g_70 = t;
                      int m_70 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_146 = NULL;
                          t = p_145;
                          t = De_Escape_0_0(t);
                          d_146 = t;
                          t = (ATerm) ATinsert(CheckATermList(d_146), term_n_58);
                          LocalPopChoice(m_70);
                        }
                      else
                        {
                          t = g_70;
                          {
                            ATerm h_146 = NULL;
                            t = r_145;
                            t = De_Escape_0_0(t);
                            h_146 = t;
                            t = (ATerm) ATinsert(CheckATermList(h_146), q_145);
                          }
                        }
                    }
                  else
                    {
                      ATerm k_146 = NULL;
                      t = r_145;
                      t = De_Escape_0_0(t);
                      k_146 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_146), q_145);
                    }
                }
              else
                {
                  ATerm n_146 = NULL;
                  t = r_145;
                  t = De_Escape_0_0(t);
                  n_146 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_146), q_145);
                }
            }
        }
      else
        {
          ATerm q_146 = NULL;
          t = r_145;
          t = De_Escape_0_0(t);
          q_146 = t;
          t = (ATerm) ATinsert(CheckATermList(q_146), q_145);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  m_145 = t;
  t = SSL_implode_string(m_145);
  return(t);
}
ATerm list_ana_1_0 (ATerm v_147 (ATerm), ATerm t)
{
  static ATerm y_146 (ATerm t);
  static ATerm y_146 (ATerm t)
  {
    ATerm o_70 = t;
    int p_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_146 = NULL;
        t = v_147(t);
        t_146 = t;
        t = (ATerm) ATinsert(ATempty, t_146);
        LocalPopChoice(p_70);
      }
    else
      {
        t = o_70;
        {
          ATerm r_70 = t;
          int s_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_146 = NULL,c_70 = NULL;
              x_146 = t;
              t = SSL_explode_term(x_146);
              if(match_cons(t, sym__2))
                {
                  ATerm u_70 = ATgetArgument(t, 0);
                  c_70 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_70;
              t = filter_1_0(y_146, t);
              t = concat_0_0(t);
              LocalPopChoice(s_70);
            }
          else
            {
              t = r_70;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = y_146(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm g_147 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      g_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_147;
  {
    ATerm v_70 = t;
    int w_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        LocalPopChoice(w_70);
      }
    else
      {
        t = v_70;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm f_147 = NULL,k_70 = NULL,l_70 = NULL;
  t = list_ana_1_0(h_12, t);
  l_70 = t;
  t = term_g_60;
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_60, l_70);
  t = w_14(k_70, l_70, t);
  f_147 = t;
  t = SSL_concat_strings(f_147);
  {
    ATerm x_70 = t;
    int y_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(y_70);
      }
    else
      {
        t = x_70;
      }
  }
  return(t);
}
static ATerm j_149 (ATerm n_148, ATerm o_148, ATerm p_148, ATerm t)
{
  ATerm s_148 = NULL;
  t = p_148;
  {
    ATerm z_70 = t;
    int a_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_148;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        s_148 = t;
        LocalPopChoice(a_71);
      }
    else
      {
        t = z_70;
        {
          ATerm b_71 = t;
          int c_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_148 = NULL,v_148 = NULL;
              t = (ATerm) ATinsert(ATempty, o_148);
              t = syms2strs_0_0(t);
              u_148 = t;
              t = n_148;
              t = filter_1_0(lit2str_0_0, t);
              v_148 = t;
              t = filter_1_0(i_12, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_71 = ATgetFirst((ATermList) t);
                  ATerm f_71 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, u_148, v_148);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              s_148 = t;
              LocalPopChoice(c_71);
            }
          else
            {
              t = b_71;
              {
                ATerm r_71 = t;
                int s_71 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_148;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    s_148 = t;
                    LocalPopChoice(s_71);
                  }
                else
                  {
                    t = r_71;
                    {
                      ATerm y_148 = NULL,z_148 = NULL;
                      t = (ATerm) ATinsert(ATempty, o_148);
                      t = syms2strs_0_0(t);
                      y_148 = t;
                      t = term_s_19;
                      t = new_0_0(t);
                      z_148 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_148, (ATerm) ATinsert(ATinsert(ATempty, z_148), term_t_71));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      s_148 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = s_148;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm u_71 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_71;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm b_149 = NULL,c_149 = NULL,d_149 = NULL;
  b_149 = t;
  {
    ATerm v_71 = t;
    int w_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            c_149 = ATgetArgument(t, 0);
            {
              ATerm y_71 = ATgetArgument(t, 1);
            }
            {
              ATerm z_71 = ATgetArgument(t, 2);
            }
            {
              ATerm a_72 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_71);
        t = c_149;
        {
          ATerm b_72 = t;
          int c_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_70 = NULL,e_71 = NULL;
              ATerm d_72 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = d_72;
                }
              t = SSL_explode_string(c_149);
              e_71 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_58)), e_71), (ATerm) ATinsert(ATempty, term_b_58));
              t = concat_0_0(t);
              t_70 = t;
              t = SSL_implode_string(t_70);
              LocalPopChoice(c_72);
            }
          else
            {
              t = b_72;
            }
        }
      }
    else
      {
        t = v_71;
        if(match_cons(t, sym_prod_3))
          {
            c_149 = ATgetArgument(t, 0);
            d_149 = ATgetArgument(t, 1);
            {
              ATerm e_72 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_149;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm f_72 = t;
            int g_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_149(c_149, d_149, b_149, t);
                LocalPopChoice(g_72);
              }
            else
              {
                t = f_72;
                {
                  ATerm g_149 = NULL;
                  t = (ATerm) ATinsert(ATempty, d_149);
                  t = syms2strs_0_0(t);
                  g_149 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_149, (ATerm) ATinsert(ATempty, term_h_72));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = j_149(c_149, d_149, b_149, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm o_151 = NULL,p_151 = NULL,q_151 = NULL;
  o_151 = t;
  if(match_cons(t, sym_sort_1))
    {
      p_151 = ATgetArgument(t, 0);
      {
        ATerm x_71 = NULL,d_28 = NULL;
        t = SSLgetAnnotations(o_151);
        x_71 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, p_151);
        d_28 = t;
        t = SSLsetAnnotations(d_28, x_71);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          p_151 = ATgetArgument(t, 0);
          q_151 = ATgetArgument(t, 1);
          {
            ATerm u_72 = NULL,x_72 = NULL,y_72 = NULL,g_28 = NULL;
            t = SSLgetAnnotations(o_151);
            u_72 = t;
            t = p_151;
            t = syntaxless_sort_0_0(t);
            x_72 = t;
            t = q_151;
            t = syntaxless_sort_0_0(t);
            y_72 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, x_72, y_72);
            g_28 = t;
            t = SSLsetAnnotations(g_28, u_72);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              p_151 = ATgetArgument(t, 0);
              {
                ATerm h_73 = NULL,j_73 = NULL,h_28 = NULL;
                t = SSLgetAnnotations(o_151);
                h_73 = t;
                t = p_151;
                t = syntaxless_sort_0_0(t);
                j_73 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, j_73);
                h_28 = t;
                t = SSLsetAnnotations(h_28, h_73);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  p_151 = ATgetArgument(t, 0);
                  {
                    ATerm r_73 = NULL,t_73 = NULL,l_28 = NULL;
                    t = SSLgetAnnotations(o_151);
                    r_73 = t;
                    t = p_151;
                    t = syntaxless_sort_0_0(t);
                    t_73 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, t_73);
                    l_28 = t;
                    t = SSLsetAnnotations(l_28, r_73);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      p_151 = ATgetArgument(t, 0);
                      {
                        ATerm c_74 = NULL,t_74 = NULL,p_28 = NULL;
                        t = SSLgetAnnotations(o_151);
                        c_74 = t;
                        t = p_151;
                        t = syntaxless_sort_0_0(t);
                        t_74 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, t_74);
                        p_28 = t;
                        t = SSLsetAnnotations(p_28, c_74);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          p_151 = ATgetArgument(t, 0);
                          q_151 = ATgetArgument(t, 1);
                          {
                            ATerm c_75 = NULL,i_75 = NULL,q_28 = NULL;
                            t = SSLgetAnnotations(o_151);
                            c_75 = t;
                            t = p_151;
                            t = syntaxless_sort_0_0(t);
                            i_75 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, i_75, q_151);
                            q_28 = t;
                            t = SSLsetAnnotations(q_28, c_75);
                          }
                        }
                      else
                        {
                          ATerm q_75 = NULL,v_75 = NULL,r_28 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              p_151 = ATgetArgument(t, 0);
                              q_151 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(o_151);
                          q_75 = t;
                          t = p_151;
                          t = syntaxless_sort_0_0(t);
                          v_75 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, v_75, q_151);
                          r_28 = t;
                          t = SSLsetAnnotations(r_28, q_75);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm z_151 = NULL,a_152 = NULL,b_152 = NULL,c_152 = NULL,d_152 = NULL,e_152 = NULL,f_152 = NULL,g_152 = NULL,h_152 = NULL,i_152 = NULL,j_152 = NULL,d_30 = NULL,c_30 = NULL;
  j_152 = t;
  if(match_cons(t, sym_prod_3))
    {
      a_152 = ATgetArgument(t, 0);
      b_152 = ATgetArgument(t, 1);
      c_152 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_152);
  z_151 = t;
  t = a_152;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_152 = ATgetFirst((ATermList) t);
      g_152 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_152);
  e_152 = t;
  t = f_152;
  t = syntaxless_sort_0_0(t);
  h_152 = t;
  t = g_152;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_152), h_152);
  c_30 = t;
  t = SSLsetAnnotations(c_30, e_152);
  i_152 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, i_152, b_152, c_152);
  d_30 = t;
  t = SSLsetAnnotations(d_30, z_151);
  d_152 = t;
  {
    ATerm i_72 = t;
    int j_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_72;
        t = get_options_0_0(t);
        t = oncetd_1_0(j_12, t);
        t = d_152;
        LocalPopChoice(j_72);
      }
    else
      {
        t = i_72;
        {
          ATerm l_152 = NULL,m_152 = NULL;
          t = term_n_34;
          l_152 = t;
          t = term_l_72;
          m_152 = t;
          t = term_o_72;
          t = g_16(l_152, m_152, t);
        }
      }
  }
  t = d_152;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm o_152 = NULL,s_152 = NULL;
  ATerm p_72 = t;
  int q_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm s_72 = ATgetArgument(t, 0);
          ATerm v_72 = ATgetArgument(t, 1);
          ATerm w_72 = ATgetArgument(t, 2);
          o_152 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(q_72);
      t = o_152;
      t = oncetd_1_0(k_12, t);
      t = term_s_19;
    }
  else
    {
      t = p_72;
      if(match_cons(t, sym_prod_3))
        {
          ATerm z_72 = ATgetArgument(t, 0);
          ATerm a_73 = ATgetArgument(t, 1);
          s_152 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_152;
      t = oncetd_1_0(l_12, t);
      t = term_s_19;
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm w_152 = NULL,a_153 = NULL;
  ATerm b_73 = t;
  int c_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm d_73 = ATgetArgument(t, 0);
          ATerm e_73 = ATgetArgument(t, 1);
          ATerm f_73 = ATgetArgument(t, 2);
          w_152 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(c_73);
      t = w_152;
      t = oncetd_1_0(q_12, t);
      t = term_s_19;
    }
  else
    {
      t = b_73;
      if(match_cons(t, sym_prod_3))
        {
          ATerm g_73 = ATgetArgument(t, 0);
          ATerm i_73 = ATgetArgument(t, 1);
          a_153 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_153;
      t = oncetd_1_0(u_12, t);
      t = term_s_19;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm h_153 = NULL;
  h_153 = t;
  {
    ATerm k_73 = t;
    int l_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_76 = NULL;
        t = h_153;
        {
          ATerm m_73 = t;
          if((PushChoice() == 0))
            {
              ATerm n_73 = t;
              int o_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  LocalPopChoice(o_73);
                }
              else
                {
                  t = n_73;
                  {
                    ATerm p_73 = t;
                    int q_73 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        LocalPopChoice(q_73);
                      }
                    else
                      {
                        t = p_73;
                        {
                          ATerm s_73 = t;
                          int u_73 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(u_73);
                            }
                          else
                            {
                              t = s_73;
                              t = is_injection_0_0(t);
                            }
                        }
                      }
                  }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_73;
            }
        }
        t = h_153;
        t = mk_constr_0_0(t);
        c_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_153, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, c_76))));
        t = add_attributes_0_0(t);
        LocalPopChoice(l_73);
      }
    else
      {
        t = k_73;
        {
          ATerm j_153 = NULL;
          static ATerm w_12 (ATerm t);
          static ATerm w_12 (ATerm t)
          {
            ATerm k_153 = NULL,l_153 = NULL,m_153 = NULL,g_30 = NULL;
            m_153 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm v_73 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_153);
            k_153 = t;
            t = not_null(j_153);
            t = uq2q_0_0(t);
            l_153 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, l_153);
            g_30 = t;
            t = SSLsetAnnotations(g_30, k_153);
            return(t);
          }
          t = h_153;
          t = get_constr_0_0(t);
          if(((j_153 != NULL) && (j_153 != t)))
            _fail(t);
          else
            j_153 = t;
          t = h_153;
          t = oncetd_1_0(w_12, t);
        }
      }
  }
  return(t);
}
static ATerm c_15 (ATerm b_22, ATerm c_22, ATerm a_22, ATerm z_21, ATerm t)
{
  ATerm o_153 = NULL,p_153 = NULL;
  ATerm x_73 = t;
  int y_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm x_12 (ATerm t);
      static ATerm x_12 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((o_153 != NULL) && (o_153 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              o_153 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = a_22;
      t = oncetd_1_0(x_12, t);
      LocalPopChoice(y_73);
    }
  else
    {
      t = x_73;
      {
        ATerm z_73 = t;
        int a_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_153 = NULL,r_153 = NULL,s_153 = NULL,t_153 = NULL,u_153 = NULL,v_153 = NULL,w_153 = NULL,x_153 = NULL,j_30 = NULL,i_30 = NULL;
            t = c_22;
            if(match_cons(t, sym_sort_1))
              {
                x_153 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_22);
            w_153 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, x_153);
            i_30 = t;
            t = SSLsetAnnotations(i_30, w_153);
            t = (ATerm) ATmakeAppl(sym_prod_3, b_22, c_22, a_22);
            t = prodcons_0_0(t);
            v_153 = t;
            if(match_cons(t, sym_prod_3))
              {
                r_153 = ATgetArgument(t, 0);
                s_153 = ATgetArgument(t, 1);
                t_153 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_153);
            q_153 = t;
            t = t_153;
            {
              static ATerm f_13 (ATerm t);
              static ATerm f_13 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((o_153 != NULL) && (o_153 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_153 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(f_13, t);
            }
            u_153 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, r_153, s_153, u_153);
            j_30 = t;
            t = SSLsetAnnotations(j_30, q_153);
            LocalPopChoice(a_74);
          }
        else
          {
            t = z_73;
            t = term_d_74;
            o_153 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, b_22, c_22, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(o_153))))), (ATerm) ATinsert(ATempty, not_null(o_153)));
  t = get_pp_entry_0_0(t);
  p_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_153), p_153);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm g_74 = t;
  if((PushChoice() == 0))
    {
      ATerm e_154 = NULL,f_154 = NULL,g_154 = NULL,o_30 = NULL;
      g_154 = t;
      if(match_cons(t, sym_lit_1))
        {
          f_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_154);
      e_154 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, f_154);
      o_30 = t;
      t = SSLsetAnnotations(o_30, e_154);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_74;
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm h_74 = t;
  if((PushChoice() == 0))
    {
      ATerm h_154 = NULL,i_154 = NULL,j_154 = NULL,p_30 = NULL;
      j_154 = t;
      if(match_cons(t, sym_lit_1))
        {
          i_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_154);
      h_154 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, i_154);
      p_30 = t;
      t = SSLsetAnnotations(p_30, h_154);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_74;
    }
  return(t);
}
static ATerm d_15 (ATerm i_21, ATerm g_21, ATerm h_21, ATerm j_21, ATerm t)
{
  ATerm z_153 = NULL,a_154 = NULL,b_154 = NULL,c_154 = NULL,d_154 = NULL;
  static ATerm i_13 (ATerm t);
  static ATerm i_13 (ATerm t)
  {
    ATerm i_74 = t;
    int j_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_74 = t;
        int n_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_13 (ATerm t);
            static ATerm j_13 (ATerm t)
            {
              t = not_null(b_154);
              return(t);
            }
            t = Instantiate_1_0(j_13, t);
            LocalPopChoice(n_74);
          }
        else
          {
            t = k_74;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(j_74);
      }
    else
      {
        t = i_74;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, i_21, g_21, h_21), j_21);
  t = c_15(i_21, g_21, h_21, j_21, t);
  if(match_cons(t, sym__2))
    {
      z_153 = ATgetArgument(t, 0);
      a_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_21;
  t = filter_1_0(g_13, t);
  c_154 = t;
  t = j_21;
  t = filter_1_0(h_13, t);
  d_154 = t;
  t = (ATerm) ATmakeAppl(sym__4, c_154, d_154, (ATerm)ATinsert(ATempty, z_153), term_w_19);
  t = seq2abox_0_0(t);
  if(((b_154 != NULL) && (b_154 != t)))
    _fail(t);
  else
    b_154 = t;
  t = a_154;
  t = bottomup_1_0(i_13, t);
  return(t);
}
ATerm filter_1_0 (ATerm t_126 (ATerm), ATerm t)
{
  ATerm x_154 = NULL,y_154 = NULL,z_154 = NULL;
  x_154 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_154;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_154 = ATgetFirst((ATermList) t);
          z_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_74 = t;
        int r_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_76 = NULL,m_76 = NULL,o_76 = NULL,u_30 = NULL;
            t = SSLgetAnnotations(x_154);
            j_76 = t;
            t = y_154;
            t = t_126(t);
            m_76 = t;
            t = z_154;
            t = filter_1_0(t_126, t);
            o_76 = t;
            t = (ATerm) ATinsert(CheckATermList(o_76), m_76);
            u_30 = t;
            t = SSLsetAnnotations(u_30, j_76);
            LocalPopChoice(r_74);
          }
        else
          {
            t = q_74;
            t = z_154;
            t = filter_1_0(t_126, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  static ATerm k_13 (ATerm t);
  static ATerm k_13 (ATerm t)
  {
    t = topdown_1_0(e_112, t);
    return(t);
  }
  t = e_112(t);
  t = SRTS_all(k_13, t);
  return(t);
}
ATerm sometd_1_0 (ATerm s_113 (ATerm), ATerm t)
{
  static ATerm c_155 (ATerm t);
  static ATerm c_155 (ATerm t)
  {
    ATerm s_74 = t;
    int u_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_113(t);
        LocalPopChoice(u_74);
      }
    else
      {
        t = s_74;
        t = SRTS_some(c_155, t);
      }
    return(t);
  }
  t = c_155(t);
  return(t);
}
ATerm repeat_2_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm t)
{
  static ATerm d_155 (ATerm t);
  static ATerm d_155 (ATerm t)
  {
    ATerm v_74 = t;
    int w_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_111(t);
        t = d_155(t);
        LocalPopChoice(w_74);
      }
    else
      {
        t = v_74;
        t = f_111(t);
      }
    return(t);
  }
  t = d_155(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  static ATerm r_155 (ATerm t);
  static ATerm r_155 (ATerm t)
  {
    ATerm o_155 = NULL,p_155 = NULL,q_155 = NULL;
    q_155 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_155 = ATgetFirst((ATermList) t);
        p_155 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_76 = NULL,b_77 = NULL,y_30 = NULL;
          t = SSLgetAnnotations(q_155);
          y_76 = t;
          t = p_155;
          t = r_155(t);
          b_77 = t;
          t = (ATerm) ATinsert(CheckATermList(b_77), o_155);
          y_30 = t;
          t = SSLsetAnnotations(y_30, y_76);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_155;
        t = h_119(t);
      }
    return(t);
  }
  t = r_155(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL;
  u_155 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_155;
    }
  else
    {
      static ATerm l_13 (ATerm t);
      static ATerm l_13 (ATerm t)
      {
        t = not_null(w_155);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_155 = ATgetFirst((ATermList) t);
          if(((w_155 != NULL) && (w_155 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_155 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_155;
      t = at_end_1_0(l_13, t);
    }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,s_77 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      p_77 = ATgetArgument(t, 0);
      q_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(p_77);
  s_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_77), term_z_74), s_77), term_y_74);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm o_156 = NULL,p_156 = NULL,q_156 = NULL;
  o_156 = t;
  if(match_cons(t, sym_Path1_1))
    {
      p_156 = ATgetArgument(t, 0);
      t = p_156;
    }
  else
    {
      ATerm n_77 = NULL,o_77 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          p_156 = ATgetArgument(t, 0);
          q_156 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_156;
      t = map_1_0(m_13, t);
      t = concat_0_0(t);
      n_77 = t;
      t = (ATerm) ATinsert(CheckATermList(n_77), p_156);
      o_77 = t;
      t = SSL_concat_strings(o_77);
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm i_157 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      i_157 = ATgetArgument(t, 0);
      {
        ATerm a_75 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_157;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm y_156 = NULL,z_156 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      y_156 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, y_156);
    }
  else
    {
      ATerm h_157 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          y_156 = ATgetArgument(t, 0);
          z_156 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_156;
      t = map_1_0(o_13, t);
      h_157 = t;
      t = (ATerm) ATinsert(CheckATermList(h_157), y_156);
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = debug_1_0(s_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_b_75;
  return(t);
}
static ATerm e_15 (ATerm v_80, ATerm w_80, ATerm t)
{
  ATerm j_157 = NULL,k_157 = NULL,l_157 = NULL,m_157 = NULL,n_157 = NULL,o_157 = NULL;
  t = v_80;
  t = mk_key_0_0(t);
  k_157 = t;
  t = term_s_32;
  l_157 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_32, k_157, (ATerm) ATmakeAppl(sym__2, v_80, w_80));
  t = lookup_table_0_1(l_157, t);
  o_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_80, w_80);
  m_157 = t;
  t = o_157;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(k_157, m_157, n_157, t);
  t = v_80;
  t = path_to_string_0_0(t);
  j_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_157, w_80);
  t = if_verbose1_1_0(q_13, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  static ATerm f_158 (ATerm t);
  static ATerm f_158 (ATerm t)
  {
    ATerm c_158 = NULL,d_158 = NULL,e_158 = NULL;
    ATerm g_75 = t;
    int h_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_129(t);
        LocalPopChoice(h_75);
      }
    else
      {
        t = g_75;
      }
    e_158 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_158 = ATgetFirst((ATermList) t);
        d_158 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_78 = NULL,k_78 = NULL,a_31 = NULL;
          t = SSLgetAnnotations(e_158);
          e_78 = t;
          t = d_158;
          t = f_158(t);
          k_78 = t;
          t = (ATerm) ATinsert(CheckATermList(k_78), c_158);
          a_31 = t;
          t = SSLsetAnnotations(a_31, e_78);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_158;
      }
    return(t);
  }
  t = f_158(t);
  return(t);
}
ATerm at_last_1_0 (ATerm s_119 (ATerm), ATerm t)
{
  static ATerm c_159 (ATerm t);
  static ATerm c_159 (ATerm t)
  {
    ATerm z_158 = NULL,a_159 = NULL,b_159 = NULL;
    z_158 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_159 = ATgetFirst((ATermList) t);
        b_159 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_75 = t;
      int k_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_78 = NULL,c_31 = NULL;
          t = SSLgetAnnotations(z_158);
          x_78 = t;
          t = b_159;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_159), a_159);
          c_31 = t;
          t = SSLsetAnnotations(c_31, x_78);
          t = s_119(t);
          LocalPopChoice(k_75);
        }
      else
        {
          t = j_75;
          {
            ATerm x_79 = NULL,e_80 = NULL,f_31 = NULL;
            t = SSLgetAnnotations(z_158);
            x_79 = t;
            t = b_159;
            t = c_159(t);
            e_80 = t;
            t = (ATerm) ATinsert(CheckATermList(e_80), a_159);
            f_31 = t;
            t = SSLsetAnnotations(f_31, x_79);
          }
        }
    }
    return(t);
  }
  t = c_159(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm j_159 = NULL,k_159 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_159 = ATgetFirst((ATermList) t);
      k_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_159;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_159;
    }
  else
    {
      t = k_159;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm s_159 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_75 = ATgetFirst((ATermList) t);
      s_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_159;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t)
{
  ATerm p_159 = NULL,q_159 = NULL,r_159 = NULL;
  p_159 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_159 = ATgetFirst((ATermList) t);
      {
        ATerm m_75 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_159;
  t = s_128(t);
  t = p_159;
  t = last_0_0(t);
  t = t_128(t);
  t = p_159;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_75 = ATgetFirst((ATermList) t);
      q_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_159;
  t = at_last_1_0(w_13, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_83 = ATgetFirst((ATermList) t);
      h_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_83;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = h_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_83 = ATgetFirst((ATermList) t);
      j_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_83;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(j_83), term_b_58);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(j_83), term_n_58);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(j_83), term_h_40);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(j_83), term_x_32);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(j_83), term_l_38);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm a_162 = NULL,b_162 = NULL,c_162 = NULL;
  a_162 = t;
  if(match_cons(t, sym_Arg_1))
    {
      b_162 = ATgetArgument(t, 0);
      {
        ATerm a_81 = NULL,c_81 = NULL,i_31 = NULL;
        t = SSLgetAnnotations(a_162);
        a_81 = t;
        t = SSL_string_to_int(b_162);
        c_81 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, c_81);
        i_31 = t;
        t = SSLsetAnnotations(i_31, a_81);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          b_162 = ATgetArgument(t, 0);
          c_162 = ATgetArgument(t, 1);
          {
            ATerm m_81 = NULL,p_81 = NULL,t_81 = NULL,j_31 = NULL;
            t = SSLgetAnnotations(a_162);
            m_81 = t;
            t = SSL_string_to_int(b_162);
            p_81 = t;
            t = SSL_string_to_int(c_162);
            t_81 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, p_81, t_81);
            j_31 = t;
            t = SSLsetAnnotations(j_31, m_81);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              b_162 = ATgetArgument(t, 0);
              c_162 = ATgetArgument(t, 1);
              {
                ATerm m_82 = NULL,y_31 = NULL;
                t = SSLgetAnnotations(a_162);
                m_82 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, b_162, c_162);
                y_31 = t;
                t = SSLsetAnnotations(y_31, m_82);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  b_162 = ATgetArgument(t, 0);
                  {
                    ATerm y_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,z_31 = NULL;
                    t = SSLgetAnnotations(a_162);
                    y_82 = t;
                    t = SSL_explode_string(b_162);
                    t = unquote_chars_2_0(y_13, a_14, t);
                    d_83 = t;
                    t = SSL_implode_string(d_83);
                    c_83 = t;
                    t = SSL_explode_string(c_83);
                    t = unescape_chars_1_0(j_14, t);
                    b_83 = t;
                    t = SSL_implode_string(b_83);
                    a_83 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, a_83);
                    z_31 = t;
                    t = SSLsetAnnotations(z_31, y_82);
                  }
                }
              else
                {
                  ATerm u_83 = NULL,a_84 = NULL,a_32 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      b_162 = ATgetArgument(t, 0);
                      c_162 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_162);
                  u_83 = t;
                  t = SSL_string_to_int(b_162);
                  a_84 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, a_84, c_162);
                  a_32 = t;
                  t = SSLsetAnnotations(a_32, u_83);
                }
            }
        }
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm l_162 = NULL,m_162 = NULL;
  t = topdown_1_0(t_14, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      l_162 = ATgetArgument(t, 0);
      m_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(l_162, m_162, t);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm o_75 = t;
  int p_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(p_75);
    }
  else
    {
      t = o_75;
    }
  return(t);
}
static ATerm n_15 (ATerm u_80, ATerm t)
{
  t = u_80;
  t = reverse_acc_2_0(_id, r_14, t);
  t = map_1_0(s_14, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm i_113 (ATerm), ATerm t)
{
  static ATerm p_162 (ATerm t);
  static ATerm p_162 (ATerm t)
  {
    ATerm r_75 = t;
    int s_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_113(t);
        LocalPopChoice(s_75);
      }
    else
      {
        t = r_75;
        t = SRTS_one(p_162, t);
      }
    return(t);
  }
  t = p_162(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm q_162 = NULL,r_162 = NULL;
  t = term_w_75;
  q_162 = t;
  t = term_x_75;
  r_162 = t;
  t = term_y_75;
  t = g_16(q_162, r_162, t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm z_75 = t;
  int a_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_162 = NULL,t_162 = NULL,u_162 = NULL;
      t = term_b_76;
      t = get_options_0_0(t);
      t = oncetd_1_0(u_14, t);
      t = term_t_19;
      t_162 = t;
      t = (ATerm) ATinsert(ATempty, term_d_76);
      u_162 = t;
      t = SSL_printnl(t_162, u_162);
      t = term_w_19;
      s_162 = t;
      t = SSL_exit(s_162);
      t = (ATerm) ATinsert(ATempty, term_d_76);
      LocalPopChoice(a_76);
    }
  else
    {
      t = z_75;
      {
        ATerm w_162 = NULL,x_162 = NULL;
        t = term_t_19;
        w_162 = t;
        t = (ATerm) ATinsert(ATempty, term_e_76);
        x_162 = t;
        t = SSL_printnl(w_162, x_162);
        t = (ATerm) ATinsert(ATempty, term_e_76);
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  ATerm b_163 = NULL,c_163 = NULL,d_163 = NULL,e_163 = NULL;
  b_163 = t;
  t = f_118(t);
  c_163 = t;
  t = term_t_19;
  d_163 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_163), c_163);
  e_163 = t;
  t = SSL_printnl(d_163, e_163);
  t = b_163;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm g_163 = NULL,h_163 = NULL,s_84 = NULL,w_84 = NULL;
  t = if_verbose1_1_0(x_14, t);
  t = ReadFromFile_0_0(t);
  h_163 = t;
  t = SSL_explode_term(h_163);
  if(match_cons(t, sym__2))
    {
      w_84 = ATgetArgument(t, 0);
      {
        ATerm f_76 = ATgetArgument(t, 1);
        if(((ATgetType(f_76) == AT_LIST) && !(ATisEmpty(f_76))))
          {
            s_84 = ATgetFirst((ATermList) f_76);
            {
              ATerm g_76 = (ATerm) ATgetNext((ATermList) f_76);
              if(((ATgetType(g_76) != AT_LIST) || !(ATisEmpty(g_76))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_84;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = s_84;
  if(match_cons(t, sym_PP_Table_1))
    {
      g_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_15(g_163, t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = debug_1_0(f_15, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_i_76;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm f_163 = NULL;
  f_163 = t;
  t = term_s_32;
  t = table_create_0_0(t);
  t = f_163;
  t = map_1_0(v_14, t);
  return(t);
}
static ATerm q_15 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  t = f_123(t);
  {
    static ATerm g_15 (ATerm t);
    static ATerm g_15 (ATerm t)
    {
      ATerm i_163 = NULL;
      i_163 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_34, i_163);
      t = e_123(t);
      return(t);
    }
    t = fetch_1_0(g_15, t);
  }
  t = p_34;
  return(t);
}
static ATerm r_15 (ATerm b_123 (ATerm), ATerm m_34, ATerm l_34, ATerm t)
{
  static ATerm y_163 (ATerm t);
  static ATerm y_163 (ATerm t)
  {
    ATerm t_163 = NULL,u_163 = NULL,v_163 = NULL;
    t_163 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_163 = ATgetFirst((ATermList) t);
            v_163 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_76 = t;
          int l_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_163;
              {
                static ATerm h_15 (ATerm t);
                static ATerm h_15 (ATerm t)
                {
                  t = l_34;
                  return(t);
                }
                t = q_15(b_123, h_15, u_163, v_163, t);
              }
              t = y_163(t);
              LocalPopChoice(l_76);
            }
          else
            {
              t = k_76;
              {
                ATerm h_85 = NULL,k_85 = NULL,c_34 = NULL;
                t = SSLgetAnnotations(t_163);
                h_85 = t;
                t = v_163;
                t = y_163(t);
                k_85 = t;
                t = (ATerm) ATinsert(CheckATermList(k_85), u_163);
                c_34 = t;
                t = SSLsetAnnotations(c_34, h_85);
              }
            }
        }
      }
    return(t);
  }
  t = m_34;
  t = y_163(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t)
{
  ATerm b_164 = NULL,c_164 = NULL,d_164 = NULL;
  b_164 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_164;
      t = r_125(t);
    }
  else
    {
      ATerm g_164 = NULL,h_164 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_164 = ATgetFirst((ATermList) t);
          d_164 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_164;
      t = t_125(t);
      g_164 = t;
      t = d_164;
      t = foldr_3_0(r_125, s_125, t_125, t);
      h_164 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_164, h_164);
      t = s_125(t);
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t)
{
  ATerm p_76 = t;
  int r_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_164 = NULL;
      t = j_124(t);
      k_164 = t;
      t = (ATerm) ATinsert(ATempty, k_164);
      LocalPopChoice(r_76);
    }
  else
    {
      t = p_76;
      {
        ATerm p_85 = NULL,q_85 = NULL;
        static ATerm j_15 (ATerm t);
        static ATerm j_15 (ATerm t)
        {
          t = collect_om_2_0(j_124, k_124, t);
          return(t);
        }
        q_85 = t;
        t = SSL_explode_term(q_85);
        if(match_cons(t, sym__2))
          {
            ATerm s_76 = ATgetArgument(t, 0);
            p_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_85;
        t = foldr_3_0(i_15, k_124, j_15, t);
      }
    }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm u_164 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      u_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_164;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm v_164 = NULL,w_164 = NULL;
  if(match_cons(t, sym__2))
    {
      v_164 = ATgetArgument(t, 0);
      w_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(m_15, v_164, w_164, t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm x_164 = NULL;
  if(match_cons(t, sym__2))
    {
      x_164 = ATgetArgument(t, 0);
      if((x_164 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = sometd_1_0(d_16, t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm z_164 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      z_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_164;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm t_76 = t;
  int u_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_76 = ATgetFirst((ATermList) t);
              ATerm w_76 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(l_16, t);
      LocalPopChoice(u_76);
    }
  else
    {
      t = t_76;
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm x_76 = t;
  if((PushChoice() == 0))
    {
      ATerm b_165 = NULL,c_165 = NULL,d_165 = NULL,e_34 = NULL;
      d_165 = t;
      if(match_cons(t, sym_opt_1))
        {
          c_165 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_165);
      b_165 = t;
      t = c_165;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, c_165);
      e_34 = t;
      t = SSLsetAnnotations(e_34, b_165);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_76;
    }
  {
    ATerm z_76 = t;
    if((PushChoice() == 0))
      {
        ATerm e_165 = NULL,f_165 = NULL,g_165 = NULL,f_34 = NULL;
        g_165 = t;
        if(match_cons(t, sym_layout_1))
          {
            f_165 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_165);
        e_165 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, f_165);
        f_34 = t;
        t = SSLsetAnnotations(f_34, e_165);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_76;
      }
  }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm t_165 = NULL,u_165 = NULL,v_165 = NULL,g_34 = NULL;
  v_165 = t;
  if(match_cons(t, sym_layout_1))
    {
      u_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_165);
  t_165 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, u_165);
  g_34 = t;
  t = SSLsetAnnotations(g_34, t_165);
  return(t);
}
static ATerm s_15 (ATerm s_26, ATerm r_26, ATerm t)
{
  ATerm q_164 = NULL,r_164 = NULL,s_164 = NULL,t_164 = NULL;
  t = s_26;
  t = collect_om_2_0(k_15, l_15, t);
  t = reverse_acc_2_0(_id, o_15, t);
  t = read_pp_tables_0_0(t);
  t = r_26;
  t = repeat_2_0(p_15, _id, t);
  t_164 = t;
  t = topdown_1_0(h_16, t);
  {
    ATerm a_77 = t;
    int c_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_165 = NULL,k_165 = NULL,l_165 = NULL,m_165 = NULL,n_165 = NULL,o_165 = NULL;
        j_165 = t;
        if(match_cons(t, sym_appl_2))
          {
            k_165 = ATgetArgument(t, 0);
            o_165 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_165;
        if(match_cons(t, sym_prod_3))
          {
            l_165 = ATgetArgument(t, 0);
            m_165 = ATgetArgument(t, 1);
            n_165 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_165;
        t = d_15(l_165, m_165, n_165, o_165, t);
        LocalPopChoice(c_77);
      }
    else
      {
        t = a_77;
        t = fatal_ambiguity_0_0(t);
      }
  }
  r_164 = t;
  t = t_164;
  t = collect_p__1_0(m_16, t);
  s_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_164, s_164);
  t = insert_layout_0_0(t);
  q_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_26, q_164);
  return(t);
}
static ATerm u_15 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm w_165 = NULL;
  t = SSL_fputc(n_43, o_43);
  w_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_165);
  return(t);
}
static ATerm v_15 (ATerm i_28, ATerm j_28, ATerm t)
{
  ATerm x_165 = NULL;
  t = SSL_write_term_to_stream_text(i_28, j_28);
  x_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_165);
  return(t);
}
static ATerm x_15 (ATerm h_118 (ATerm), ATerm n_217, ATerm o_28, ATerm t)
{
  ATerm y_165 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_217, term_d_77);
  t = b_16(t);
  y_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_165, o_28);
  t = h_118(t);
  t = fclose_0_0(t);
  t = o_28;
  return(t);
}
static ATerm w_15 (ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm z_165 = NULL;
  t = SSL_write_term_to_stream_baf(e_28, f_28);
  z_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_165);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm h_86 = NULL,j_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_77 = ATgetArgument(t, 0);
      if(match_cons(e_77, sym_Stream_1))
        {
          h_86 = ATgetArgument(e_77, 0);
        }
      else
        _fail(t);
      j_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15(h_86, j_86, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_77 = ATgetArgument(t, 0);
      if(match_cons(f_77, sym_Stream_1))
        {
          x_86 = ATgetArgument(f_77, 0);
        }
      else
        _fail(t);
      y_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(x_86, y_86, t);
  u_86 = t;
  t = term_h_40;
  v_86 = t;
  t = u_86;
  if(match_cons(t, sym_Stream_1))
    {
      w_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_40, u_86);
  t = u_15(v_86, w_86, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_166 = NULL,e_166 = NULL,f_166 = NULL,g_166 = NULL,h_166 = NULL,j_166 = NULL,k_166 = NULL,l_166 = NULL,m_166 = NULL,n_166 = NULL,n_167 = NULL,o_167 = NULL,t_34 = NULL,s_34 = NULL;
  e_166 = t;
  if(match_cons(t, sym__2))
    {
      l_166 = ATgetArgument(t, 0);
      m_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_166);
  k_166 = t;
  t = l_166;
  {
    ATerm g_77 = t;
    int h_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_16 (ATerm t);
        static ATerm o_16 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_166 != NULL) && (d_166 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_166 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_16, t);
        LocalPopChoice(h_77);
      }
    else
      {
        t = g_77;
        t = term_i_77;
        d_166 = t;
      }
  }
  n_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_166, m_166);
  s_34 = t;
  t = SSLsetAnnotations(s_34, k_166);
  t = e_166;
  if(match_cons(t, sym__2))
    {
      g_166 = ATgetArgument(t, 0);
      h_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_166);
  f_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_166, (ATerm) ATmakeAppl(sym__2, not_null(d_166), h_166));
  t_34 = t;
  t = SSLsetAnnotations(t_34, f_166);
  j_166 = t;
  if(match_cons(t, sym__2))
    {
      n_167 = ATgetArgument(t, 0);
      o_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_77 = t;
    int k_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,u_34 = NULL;
        t = SSLgetAnnotations(j_166);
        w_85 = t;
        t = n_167;
        t = fetch_1_0(t_16, t);
        a_86 = t;
        t = o_167;
        if(match_cons(t, sym__2))
          {
            c_86 = ATgetArgument(t, 0);
            d_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_15(u_16, c_86, d_86, t);
        b_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_86, b_86);
        u_34 = t;
        t = SSLsetAnnotations(u_34, w_85);
        LocalPopChoice(k_77);
      }
    else
      {
        t = j_77;
        {
          ATerm o_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,v_34 = NULL;
          t = SSLgetAnnotations(j_166);
          o_86 = t;
          t = o_167;
          if(match_cons(t, sym__2))
            {
              s_86 = ATgetArgument(t, 0);
              t_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_15(x_16, s_86, t_86, t);
          r_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_167, r_86);
          v_34 = t;
          t = SSLsetAnnotations(v_34, o_86);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm f_137 (ATerm), ATerm t)
{
  ATerm r_167 = NULL,s_167 = NULL,t_167 = NULL,u_167 = NULL,v_167 = NULL;
  v_167 = t;
  t = dtime_0_0(t);
  t = v_167;
  t = f_137(t);
  u_167 = t;
  t = dtime_0_0(t);
  r_167 = t;
  t = u_167;
  if(match_cons(t, sym__2))
    {
      s_167 = ATgetArgument(t, 0);
      t_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_167), (ATerm) ATmakeAppl(sym_Runtime_1, r_167)), t_167);
  return(t);
}
static ATerm j_168 (ATerm d_168, ATerm t)
{
  t = SSL_fclose(d_168);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_168 = NULL,h_168 = NULL;
  h_168 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_168 = ATgetArgument(t, 0);
      {
        ATerm l_77 = t;
        int m_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_168);
            LocalPopChoice(m_77);
          }
        else
          {
            t = l_77;
            t = j_168(h_168, t);
          }
      }
    }
  else
    {
      t = j_168(h_168, t);
    }
  return(t);
}
static ATerm y_15 (ATerm k_28, ATerm t)
{
  t = SSL_read_term_from_stream(k_28);
  return(t);
}
static ATerm z_15 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = SSL_strcat(g_42, h_42);
  return(t);
}
static ATerm a_16 (ATerm p_43, ATerm q_43, ATerm t)
{
  ATerm k_168 = NULL;
  t = SSL_fopen(p_43, q_43);
  k_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_168);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_168 = NULL;
  t = SSL_stdin_stream();
  l_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_168);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_168 = NULL;
  t = SSL_stdout_stream();
  m_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_168);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_168 = NULL;
  t = SSL_stderr_stream();
  n_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_168);
  return(t);
}
static ATerm u_169 (ATerm t_168, ATerm t)
{
  ATerm u_168 = NULL;
  t = SSL_explode_term(t_168);
  if(match_cons(t, sym__2))
    {
      ATerm r_77 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_77) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_77 = ATgetArgument(t, 1);
        if(((ATgetType(t_77) == AT_LIST) && !(ATisEmpty(t_77))))
          {
            u_168 = ATgetFirst((ATermList) t_77);
            {
              ATerm u_77 = (ATerm) ATgetNext((ATermList) t_77);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_168;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_168;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_168;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_168;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_169 (ATerm x_168, ATerm y_168, ATerm z_168, ATerm t)
{
  ATerm a_169 = NULL,b_169 = NULL,c_169 = NULL,f_169 = NULL,d_39 = NULL;
  t = SSLgetAnnotations(z_168);
  c_169 = t;
  t = x_168;
  if(match_cons(t, sym_Path_1))
    {
      f_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_169, y_168);
  d_39 = t;
  t = SSLsetAnnotations(d_39, c_169);
  if(match_cons(t, sym__2))
    {
      a_169 = ATgetArgument(t, 0);
      b_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_16(a_169, b_169, t);
  return(t);
}
static ATerm w_169 (ATerm h_169, ATerm i_169, ATerm j_169, ATerm t)
{
  ATerm k_169 = NULL,l_169 = NULL,m_169 = NULL,p_169 = NULL,e_39 = NULL;
  t = SSLgetAnnotations(j_169);
  m_169 = t;
  t = SSL_is_string(h_169);
  p_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_169, i_169);
  e_39 = t;
  t = SSLsetAnnotations(e_39, m_169);
  if(match_cons(t, sym__2))
    {
      k_169 = ATgetArgument(t, 0);
      l_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_16(k_169, l_169, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm r_169 = NULL,s_169 = NULL,t_169 = NULL;
  r_169 = t;
  if(match_cons(t, sym__2))
    {
      s_169 = ATgetArgument(t, 0);
      t_169 = ATgetArgument(t, 1);
      {
        ATerm v_77 = t;
        int z_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_169(r_169, t);
            LocalPopChoice(z_77);
          }
        else
          {
            t = v_77;
            {
              ATerm b_78 = t;
              int c_78 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_169(s_169, t_169, r_169, t);
                  LocalPopChoice(c_78);
                }
              else
                {
                  t = b_78;
                  t = w_169(s_169, t_169, r_169, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_169(r_169, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_169 = NULL,z_169 = NULL,a_170 = NULL,f_170 = NULL;
  f_170 = t;
  {
    ATerm d_78 = t;
    int f_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_170, term_b_34);
        t = b_16(t);
        LocalPopChoice(f_78);
      }
    else
      {
        t = d_78;
        {
          ATerm j_87 = NULL,m_87 = NULL;
          t = term_g_78;
          m_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_78, f_170);
          t = z_15(m_87, f_170, t);
          j_87 = t;
          t = SSL_perror(j_87);
          _fail(t);
        }
      }
  }
  z_169 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_15(a_170, t);
  y_169 = t;
  t = z_169;
  t = fclose_0_0(t);
  t = y_169;
  return(t);
}
ATerm fetch_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  static ATerm e_171 (ATerm t);
  static ATerm e_171 (ATerm t)
  {
    ATerm b_171 = NULL,c_171 = NULL,d_171 = NULL;
    b_171 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_171 = ATgetFirst((ATermList) t);
        d_171 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_78 = t;
      int l_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_87 = NULL,v_87 = NULL,k_39 = NULL;
          t = SSLgetAnnotations(b_171);
          s_87 = t;
          t = c_171;
          t = a_119(t);
          v_87 = t;
          t = (ATerm) ATinsert(CheckATermList(d_171), v_87);
          k_39 = t;
          t = SSLsetAnnotations(k_39, s_87);
          LocalPopChoice(l_78);
        }
      else
        {
          t = j_78;
          {
            ATerm n_88 = NULL,r_88 = NULL,l_39 = NULL;
            t = SSLgetAnnotations(b_171);
            n_88 = t;
            t = d_171;
            t = e_171(t);
            r_88 = t;
            t = (ATerm) ATinsert(CheckATermList(r_88), c_171);
            l_39 = t;
            t = SSLsetAnnotations(l_39, n_88);
          }
        }
    }
    return(t);
  }
  t = e_171(t);
  return(t);
}
static ATerm g_16 (ATerm h_68, ATerm i_68, ATerm t)
{
  ATerm h_171 = NULL;
  t = lookup_table_0_1(h_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_171 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_16(i_68, h_171, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_135 (ATerm), ATerm t)
{
  ATerm k_171 = NULL;
  k_171 = t;
  {
    ATerm m_78 = t;
    int n_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_171 = NULL,n_171 = NULL,o_171 = NULL;
        t = term_n_34;
        n_171 = t;
        t = term_i_34;
        o_171 = t;
        t = term_o_34;
        t = g_16(n_171, o_171, t);
        m_171 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_171, term_w_25);
        t = geq_0_0(t);
        t = k_171;
        t = o_135(t);
        LocalPopChoice(n_78);
      }
    else
      {
        t = m_78;
        t = k_171;
      }
  }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm r_171 = NULL;
  r_171 = t;
  if(match_string(t, "-k"))
    {
      t = r_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_171;
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm s_171 = NULL,t_171 = NULL,u_171 = NULL;
  s_171 = t;
  t = SSL_string_to_int(s_171);
  t_171 = t;
  t = term_q_78;
  u_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_78, t_171);
  t = i_16(u_171, t_171, t);
  t = s_171;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_r_78;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_16, z_16, e_17, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm w_171 = NULL;
  w_171 = t;
  if(match_string(t, "-S"))
    {
      t = w_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_171;
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm x_171 = NULL,y_171 = NULL;
  t = term_i_34;
  x_171 = t;
  t = term_t_78;
  y_171 = t;
  t = term_u_78;
  t = i_16(x_171, y_171, t);
  t = term_w_78;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_y_78;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm z_171 = NULL,a_172 = NULL,b_172 = NULL;
  z_171 = t;
  t = SSL_string_to_int(z_171);
  a_172 = t;
  t = term_i_34;
  b_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_34, a_172);
  t = i_16(b_172, a_172, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_171);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_z_78;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm c_172 = NULL,d_172 = NULL;
  t = term_a_79;
  c_172 = t;
  t = term_s_19;
  d_172 = t;
  t = term_b_79;
  t = i_16(c_172, d_172, t);
  t = term_c_79;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_d_79;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_79 = t;
  int f_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_17, l_17, m_17, t);
      LocalPopChoice(f_79);
    }
  else
    {
      t = e_79;
      {
        ATerm g_79 = t;
        int h_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_17, o_17, p_17, t);
            LocalPopChoice(h_79);
          }
        else
          {
            t = g_79;
            t = Option_3_0(q_17, r_17, s_17, t);
          }
      }
    }
  return(t);
}
static ATerm i_16 (ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm e_172 = NULL,f_172 = NULL;
  t = term_n_34;
  e_172 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_34, w_61, x_61);
  t = lookup_table_0_1(e_172, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(w_61, x_61, f_172, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_34, w_61, x_61);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm i_172 = NULL;
  i_172 = t;
  if(match_string(t, "-o"))
    {
      t = i_172;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_172;
    }
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm j_172 = NULL,l_172 = NULL;
  j_172 = t;
  t = term_s_43;
  l_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_43, j_172);
  t = i_16(l_172, j_172, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_172);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_i_79;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_17, v_17, w_17, t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm n_172 = NULL;
  n_172 = t;
  if(match_string(t, "-i"))
    {
      t = n_172;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_172;
    }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm o_172 = NULL,p_172 = NULL;
  o_172 = t;
  t = term_t_43;
  p_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_43, o_172);
  t = i_16(p_172, o_172, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_172);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_j_79;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_17, y_17, z_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_172 = NULL,r_172 = NULL,s_172 = NULL,t_172 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_19;
  t = whoami_0_0(t);
  q_172 = t;
  t = term_t_19;
  s_172 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_79), q_172);
  t_172 = t;
  t = SSL_printnl(s_172, t_172);
  t = term_w_19;
  r_172 = t;
  t = SSL_exit(r_172);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_172 = NULL,v_172 = NULL;
  t = term_n_34;
  u_172 = t;
  t = term_l_79;
  v_172 = t;
  t = term_m_79;
  t = g_16(u_172, v_172, t);
  return(t);
}
static ATerm c_16 (ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm p_79 = t;
  int s_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_46, j_46);
      LocalPopChoice(s_79);
    }
  else
    {
      t = p_79;
      t = SSL_addr(i_46, j_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t)
{
  ATerm y_172 = NULL,z_172 = NULL,a_173 = NULL;
  y_172 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_172;
      t = p_125(t);
    }
  else
    {
      ATerm d_173 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_172 = ATgetFirst((ATermList) t);
          a_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_173;
      t = foldr_2_0(p_125, q_125, t);
      d_173 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_172, d_173);
      t = q_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_t_78;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL;
  if(match_cons(t, sym__2))
    {
      g_89 = ATgetArgument(t, 0);
      h_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_16(g_89, h_89, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_173 = NULL,b_89 = NULL,d_89 = NULL;
  t = times_0_0(t);
  d_89 = t;
  t = SSL_explode_term(d_89);
  if(match_cons(t, sym__2))
    {
      ATerm t_79 = ATgetArgument(t, 0);
      b_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_89;
  t = foldr_2_0(a_18, b_18, t);
  g_173 = t;
  t = SSL_TicksToSeconds(g_173);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_173 = NULL,s_173 = NULL,t_173 = NULL;
  r_173 = t;
  if(match_cons(t, sym__2))
    {
      s_173 = ATgetArgument(t, 0);
      t_173 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_79 = t;
    int v_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_173;
        if((s_173 != t))
          {
            _fail(t);
          }
        t = r_173;
        LocalPopChoice(v_79);
      }
    else
      {
        t = u_79;
        t = (ATerm) ATmakeAppl(sym__2, s_173, t_173);
        {
          ATerm w_79 = t;
          int y_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_173, t_173);
              LocalPopChoice(y_79);
            }
          else
            {
              t = w_79;
              t = SSL_gtr(s_173, t_173);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_173, t_173);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_135 (ATerm), ATerm t)
{
  ATerm y_173 = NULL;
  y_173 = t;
  {
    ATerm z_79 = t;
    int a_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_174 = NULL,b_174 = NULL,c_174 = NULL;
        t = term_n_34;
        b_174 = t;
        t = term_i_34;
        c_174 = t;
        t = term_o_34;
        t = g_16(b_174, c_174, t);
        a_174 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_174, term_w_19);
        t = geq_0_0(t);
        t = y_173;
        t = n_135(t);
        LocalPopChoice(a_80);
      }
    else
      {
        t = z_79;
        t = y_173;
      }
  }
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm e_174 = NULL,f_174 = NULL,i_174 = NULL,j_174 = NULL;
  t = run_time_0_0(t);
  e_174 = t;
  t = term_s_19;
  t = whoami_0_0(t);
  f_174 = t;
  t = term_t_19;
  i_174 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_80), e_174), term_h_35), f_174);
  j_174 = t;
  t = SSL_printnl(i_174, j_174);
  t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_80), e_174), term_h_35), f_174));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_174 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_78;
  k_174 = t;
  t = SSL_exit(k_174);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm u_174 = NULL,v_174 = NULL;
  v_174 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_174;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_174 = ATgetArgument(t, 0);
          {
            ATerm b_90 = NULL,r_39 = NULL;
            t = SSLgetAnnotations(v_174);
            b_90 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_174);
            r_39 = t;
            t = SSLsetAnnotations(r_39, b_90);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_174;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_138 (ATerm), ATerm t)
{
  ATerm c_80 = t;
  int d_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_174 = NULL,o_174 = NULL;
      t = term_n_34;
      n_174 = t;
      t = term_f_80;
      o_174 = t;
      t = term_g_80;
      t = g_16(n_174, o_174, t);
      LocalPopChoice(d_80);
    }
  else
    {
      t = c_80;
      t = fetch_1_0(d_18, t);
    }
  t = d_138(t);
  return(t);
}
static ATerm j_16 (ATerm g_71, ATerm h_71, ATerm i_71, ATerm t)
{
  ATerm x_174 = NULL;
  t = SSL_hashtable_put(i_71, g_71, h_71);
  x_174 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_174);
  return(t);
}
static ATerm k_16 (ATerm j_71, ATerm k_71, ATerm t)
{
  t = SSL_hashtable_get(k_71, j_71);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_68, ATerm t)
{
  ATerm g_175 = NULL;
  t = table_hashtable_0_0(t);
  g_175 = t;
  {
    ATerm h_80 = t;
    int i_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_90 = NULL;
        t = g_175;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_90 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_16(a_68, j_90, t);
        LocalPopChoice(i_80);
      }
    else
      {
        t = h_80;
        {
          ATerm z_90 = NULL;
          t = a_68;
          t = table_create_0_0(t);
          t = g_175;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_16(a_68, z_90, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_71, ATerm p_71, ATerm t)
{
  ATerm j_175 = NULL;
  t = SSL_hashtable_create(o_71, p_71);
  j_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_175);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_175 = NULL,l_175 = NULL,m_175 = NULL,o_175 = NULL,p_175 = NULL;
  k_175 = t;
  t = term_k_80;
  o_175 = t;
  t = term_l_80;
  p_175 = t;
  t = k_175;
  t = new_hashtable_0_2(o_175, p_175, t);
  l_175 = t;
  t = k_175;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(k_175, l_175, m_175, t);
  t = k_175;
  return(t);
}
static ATerm e_16 (ATerm l_71, ATerm m_71, ATerm t)
{
  ATerm q_175 = NULL;
  t = SSL_hashtable_remove(m_71, l_71);
  q_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_175);
  return(t);
}
static ATerm f_16 (ATerm q_71, ATerm t)
{
  ATerm r_175 = NULL;
  t = SSL_hashtable_destroy(q_71);
  r_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_175);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_175 = NULL;
  t = SSL_table_hashtable();
  s_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_175);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_175 = NULL,u_175 = NULL,v_175 = NULL,w_175 = NULL;
  t_175 = t;
  t = table_hashtable_0_0(t);
  u_175 = t;
  t = lookup_table_0_1(t_175, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_16(w_175, t);
  t = u_175;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(t_175, v_175, t);
  t = t_175;
  return(t);
}
ATerm map_1_0 (ATerm q_118 (ATerm), ATerm t)
{
  static ATerm l_176 (ATerm t);
  static ATerm l_176 (ATerm t)
  {
    ATerm i_176 = NULL,j_176 = NULL,k_176 = NULL;
    i_176 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_176;
      }
    else
      {
        ATerm k_91 = NULL,r_91 = NULL,u_91 = NULL,t_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_176 = ATgetFirst((ATermList) t);
            k_176 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_176);
        k_91 = t;
        t = j_176;
        t = q_118(t);
        r_91 = t;
        t = k_176;
        t = l_176(t);
        u_91 = t;
        t = (ATerm) ATinsert(CheckATermList(u_91), r_91);
        t_39 = t;
        t = SSLsetAnnotations(t_39, k_91);
      }
    return(t);
  }
  t = l_176(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_176 = NULL,p_176 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_176 = ATgetFirst((ATermList) t);
      p_176 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_176 = NULL,u_176 = NULL;
        static ATerm e_18 (ATerm t);
        static ATerm e_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_176)), not_null(u_176));
          return(t);
        }
        t = p_176;
        t = g_0(t);
        if(((t_176 != NULL) && (t_176 != t)))
          _fail(t);
        else
          t_176 = t;
        t = o_176;
        t = d_0(t);
        if(((u_176 != NULL) && (u_176 != t)))
          _fail(t);
        else
          u_176 = t;
        t = p_176;
        t = reverse_acc_2_0(d_0, e_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_19;
      t = g_0(t);
    }
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm a_177 = NULL,b_177 = NULL,c_177 = NULL,t_40 = NULL;
  c_177 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_177 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_177);
  a_177 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_177);
  t_40 = t;
  t = SSLsetAnnotations(t_40, a_177);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm e_177 = NULL;
  e_177 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_177), term_m_80);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_176 = NULL,x_176 = NULL;
  ATerm n_80 = t;
  int o_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_176 = NULL,z_176 = NULL;
      t = term_n_34;
      y_176 = t;
      t = term_l_79;
      z_176 = t;
      t = term_m_79;
      t = g_16(y_176, z_176, t);
      LocalPopChoice(o_80);
    }
  else
    {
      t = n_80;
      t = fetch_1_0(f_18, t);
    }
  t = term_p_80;
  t = echo_0_0(t);
  t = term_x_19;
  w_176 = t;
  t = term_y_19;
  x_176 = t;
  t = term_q_80;
  t = g_16(w_176, x_176, t);
  t = reverse_acc_2_0(_id, g_18, t);
  t = map_1_0(i_18, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_177 = NULL,h_177 = NULL,i_177 = NULL;
  g_177 = t;
  {
    ATerm r_80 = t;
    int s_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_177;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_80 = ATgetFirst((ATermList) t);
                ATerm z_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_177;
          }
        LocalPopChoice(s_80);
      }
    else
      {
        t = r_80;
        t = (ATerm) ATinsert(ATempty, g_177);
      }
  }
  h_177 = t;
  t = term_i_77;
  i_177 = t;
  t = SSL_printnl(i_177, h_177);
  t = g_177;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_177 = NULL,o_177 = NULL;
  t = term_n_34;
  n_177 = t;
  t = term_l_79;
  o_177 = t;
  t = term_m_79;
  t = g_16(n_177, o_177, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm p_177 = NULL,q_177 = NULL;
  t = term_b_81;
  p_177 = t;
  t = term_s_19;
  q_177 = t;
  t = term_d_81;
  t = i_16(p_177, q_177, t);
  return(t);
}
static ATerm l_18 (ATerm t)
{
  t = term_e_81;
  return(t);
}
static ATerm m_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm r_177 = NULL,s_177 = NULL,t_177 = NULL,u_177 = NULL;
  t = term_b_81;
  t_177 = t;
  t = term_s_19;
  u_177 = t;
  t = term_d_81;
  t = i_16(t_177, u_177, t);
  t = term_f_81;
  r_177 = t;
  t = term_s_19;
  s_177 = t;
  t = term_g_81;
  t = i_16(r_177, s_177, t);
  t = term_h_81;
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_i_81;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_81 = t;
  int k_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_18, k_18, l_18, t);
      LocalPopChoice(k_81);
    }
  else
    {
      t = j_81;
      t = Option_3_0(m_18, n_18, p_18, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm t)
{
  ATerm v_177 = NULL,w_177 = NULL,x_177 = NULL,y_177 = NULL,z_177 = NULL,a_178 = NULL,y_40 = NULL;
  a_178 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_177 = ATgetFirst((ATermList) t);
      x_177 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_178);
  v_177 = t;
  t = w_177;
  t = m_89(t);
  y_177 = t;
  t = x_177;
  t = n_89(t);
  z_177 = t;
  t = (ATerm) ATinsert(CheckATermList(z_177), y_177);
  y_40 = t;
  t = SSLsetAnnotations(y_40, v_177);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_140 (ATerm), ATerm t)
{
  ATerm f_178 = NULL,g_178 = NULL,h_178 = NULL,i_178 = NULL,k_178 = NULL,l_178 = NULL,a_41 = NULL;
  f_178 = t;
  {
    ATerm l_81 = t;
    int n_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_81;
        t = g_140(t);
        LocalPopChoice(n_81);
      }
    else
      {
        t = l_81;
      }
  }
  t = f_178;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_178 = ATgetFirst((ATermList) t);
      i_178 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_178);
  g_178 = t;
  t = term_l_79;
  l_178 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_79, h_178);
  t = i_16(l_178, h_178, t);
  t = i_178;
  {
    static ATerm v_178 (ATerm t);
    static ATerm v_178 (ATerm t)
    {
      ATerm u_81 = t;
      int w_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_81 = t;
          int y_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_178 = NULL;
              o_178 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_178;
              LocalPopChoice(y_81);
            }
          else
            {
              t = x_81;
              t = g_140(t);
              t = Cons_2_0(_id, v_178, t);
            }
          LocalPopChoice(w_81);
        }
      else
        {
          t = u_81;
          {
            ATerm r_178 = NULL,s_178 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_178 = ATgetFirst((ATermList) t);
                s_178 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_178), (ATerm) ATmakeAppl(sym_Undefined_1, r_178));
          }
        }
      return(t);
    }
    t = v_178(t);
  }
  k_178 = t;
  t = (ATerm) ATinsert(CheckATermList(k_178), (ATerm) ATmakeAppl(sym_Program_1, h_178));
  a_41 = t;
  t = SSLsetAnnotations(a_41, g_178);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm j_179 = NULL;
  j_179 = t;
  if(match_string(t, "--help"))
    {
      t = j_179;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_179;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_179;
        }
    }
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm k_179 = NULL,l_179 = NULL;
  t = term_f_80;
  k_179 = t;
  t = term_s_19;
  l_179 = t;
  t = term_z_81;
  t = i_16(k_179, l_179, t);
  t = term_b_82;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = term_c_82;
  return(t);
}
static ATerm u_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_140 (ATerm), ATerm t)
{
  ATerm b_179 = NULL,c_179 = NULL,d_179 = NULL,e_179 = NULL,f_179 = NULL,g_179 = NULL,h_179 = NULL,i_179 = NULL;
  d_179 = t;
  t = term_x_19;
  e_179 = t;
  t = term_d_82;
  t = lookup_table_0_1(e_179, t);
  i_179 = t;
  t = term_y_19;
  f_179 = t;
  t = (ATerm) ATempty;
  g_179 = t;
  t = i_179;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(f_179, g_179, h_179, t);
  t = d_179;
  {
    static ATerm q_18 (ATerm t);
    static ATerm q_18 (ATerm t)
    {
      ATerm e_82 = t;
      int f_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_140(t);
          LocalPopChoice(f_82);
        }
      else
        {
          t = e_82;
          {
            ATerm g_82 = t;
            int h_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_18, s_18, t_18, t);
                LocalPopChoice(h_82);
              }
            else
              {
                t = g_82;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_18, t);
  }
  {
    ATerm i_82 = t;
    int j_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_179 = NULL;
        w_179 = t;
        {
          ATerm k_82 = t;
          int l_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_92 = NULL;
              t = w_179;
              {
                ATerm n_82 = t;
                int o_82 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_92 = NULL,k_92 = NULL;
                    t = term_n_34;
                    i_92 = t;
                    t = term_f_80;
                    k_92 = t;
                    t = term_g_80;
                    t = g_16(i_92, k_92, t);
                    LocalPopChoice(o_82);
                  }
                else
                  {
                    t = n_82;
                    t = fetch_1_0(u_18, t);
                  }
              }
              t = w_179;
              t = default_system_usage_0_0(t);
              t = term_t_78;
              f_92 = t;
              t = SSL_exit(f_92);
              LocalPopChoice(l_82);
            }
          else
            {
              t = k_82;
              {
                ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
                t = term_n_34;
                w_92 = t;
                t = term_b_81;
                x_92 = t;
                t = term_p_82;
                t = g_16(w_92, x_92, t);
                t = w_179;
                t = default_system_about_0_0(t);
                t = term_t_78;
                v_92 = t;
                t = SSL_exit(v_92);
              }
            }
        }
        LocalPopChoice(j_82);
      }
    else
      {
        t = i_82;
        {
          ATerm q_82 = t;
          int r_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_179 = NULL,y_179 = NULL,z_179 = NULL;
              static ATerm v_18 (ATerm t);
              static ATerm v_18 (ATerm t)
              {
                ATerm a_180 = NULL,b_180 = NULL,c_180 = NULL,l_41 = NULL;
                c_180 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_180 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_180);
                a_180 = t;
                t = b_180;
                if(((b_179 != NULL) && (b_179 != t)))
                  _fail(t);
                else
                  b_179 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_180);
                l_41 = t;
                t = SSLsetAnnotations(l_41, a_180);
                return(t);
              }
              t = fetch_1_0(v_18, t);
              t = term_t_19;
              y_179 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_179)), term_t_82);
              z_179 = t;
              t = SSL_printnl(y_179, z_179);
              t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_179)), term_t_82));
              t = default_system_usage_0_0(t);
              t = term_w_19;
              x_179 = t;
              t = SSL_exit(x_179);
              LocalPopChoice(r_82);
            }
          else
            {
              t = q_82;
            }
        }
      }
  }
  c_179 = t;
  t = term_x_19;
  t = table_destroy_0_0(t);
  t = c_179;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_138 (ATerm), ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm t)
{
  ATerm h_180 = NULL,i_180 = NULL,j_180 = NULL,k_180 = NULL,l_180 = NULL;
  t = parse_options_1_0(f_138, t);
  h_180 = t;
  t = term_w_75;
  t = table_create_0_0(t);
  t = term_w_75;
  i_180 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_75, term_x_75, h_180);
  t = lookup_table_0_1(i_180, t);
  l_180 = t;
  t = term_x_75;
  j_180 = t;
  t = l_180;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_180 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(j_180, h_180, k_180, t);
  t = h_180;
  t = h_138(t);
  {
    ATerm u_82 = t;
    int v_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_138, t);
        LocalPopChoice(v_82);
      }
    else
      {
        t = u_82;
        {
          ATerm z_82 = t;
          int e_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_138(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_83);
            }
          else
            {
              t = z_82;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = if_verbose2_1_0(c_19, t);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm m_180 = NULL,n_180 = NULL;
  t = term_f_83;
  m_180 = t;
  t = term_s_19;
  n_180 = t;
  t = term_k_83;
  t = i_16(m_180, n_180, t);
  t = term_l_83;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  t = term_m_83;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm o_180 = NULL,p_180 = NULL,q_180 = NULL,r_180 = NULL,t_180 = NULL,u_180 = NULL;
  o_180 = t;
  t = term_n_34;
  t_180 = t;
  t = term_l_79;
  u_180 = t;
  t = term_m_79;
  t = g_16(t_180, u_180, t);
  p_180 = t;
  t = term_t_19;
  q_180 = t;
  t = (ATerm) ATinsert(ATempty, p_180);
  r_180 = t;
  t = SSL_printnl(q_180, r_180);
  t = o_180;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm q_137 (ATerm), ATerm t)
{
  static ATerm w_18 (ATerm t);
  static ATerm y_18 (ATerm t);
  static ATerm w_18 (ATerm t)
  {
    ATerm n_83 = t;
    int o_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_137(t);
        LocalPopChoice(o_83);
      }
    else
      {
        t = n_83;
        {
          ATerm p_83 = t;
          int q_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(q_83);
            }
          else
            {
              t = p_83;
              {
                ATerm r_83 = t;
                int s_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(s_83);
                  }
                else
                  {
                    t = r_83;
                    {
                      ATerm t_83 = t;
                      int v_83 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_18, a_19, b_19, t);
                          LocalPopChoice(v_83);
                        }
                      else
                        {
                          t = t_83;
                          {
                            ATerm w_83 = t;
                            int y_83 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(y_83);
                              }
                            else
                              {
                                t = w_83;
                                t = keep_option_0_0(t);
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
  static ATerm y_18 (ATerm t)
  {
    ATerm v_180 = NULL,w_180 = NULL,x_180 = NULL;
    w_180 = t;
    {
      ATerm b_84 = t;
      int d_84 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_19 (ATerm t);
          static ATerm d_19 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_180 != NULL) && (v_180 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_180 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_19, t);
          LocalPopChoice(d_84);
        }
      else
        {
          t = b_84;
          t = term_c_35;
          v_180 = t;
        }
    }
    t = not_null(v_180);
    t = ReadFromFile_0_0(t);
    x_180 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_180, x_180);
    t = apply_strategy_1_0(o_137, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(w_18, q_137, x_18, y_18, t);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm y_180 = NULL,z_180 = NULL;
  if(match_cons(t, sym__2))
    {
      y_180 = ATgetArgument(t, 0);
      z_180 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(y_180, z_180, t);
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm e_84 = t;
  int f_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_19, h_19, i_19, t);
      LocalPopChoice(f_84);
    }
  else
    {
      t = e_84;
      {
        ATerm g_84 = t;
        int h_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(j_19, l_19, n_19, t);
            LocalPopChoice(h_84);
          }
        else
          {
            t = g_84;
            t = ArgOption_3_0(o_19, q_19, r_19, t);
          }
      }
    }
  return(t);
}
static ATerm g_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_i_84;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  t = term_j_84;
  return(t);
}
static ATerm j_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm n_19 (ATerm t)
{
  t = term_k_84;
  return(t);
}
static ATerm o_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_19 (ATerm t)
{
  ATerm a_181 = NULL;
  a_181 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, a_181);
  return(t);
}
static ATerm r_19 (ATerm t)
{
  t = term_m_84;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(e_19, f_19, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

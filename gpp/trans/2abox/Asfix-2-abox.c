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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_g_84;
ATerm term_f_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_d_83;
ATerm term_c_83;
ATerm term_b_83;
ATerm term_u_82;
ATerm term_p_82;
ATerm term_j_82;
ATerm term_l_81;
ATerm term_k_81;
ATerm term_j_81;
ATerm term_i_81;
ATerm term_a_81;
ATerm term_u_80;
ATerm term_t_80;
ATerm term_s_80;
ATerm term_r_80;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_h_80;
ATerm term_g_80;
ATerm term_c_80;
ATerm term_b_80;
ATerm term_a_80;
ATerm term_x_79;
ATerm term_w_79;
ATerm term_o_79;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_x_78;
ATerm term_q_78;
ATerm term_l_78;
ATerm term_k_78;
ATerm term_j_78;
ATerm term_i_78;
ATerm term_h_78;
ATerm term_g_78;
ATerm term_e_78;
ATerm term_d_78;
ATerm term_c_78;
ATerm term_b_78;
ATerm term_u_77;
ATerm term_b_77;
ATerm term_w_76;
ATerm term_d_76;
ATerm term_a_76;
ATerm term_y_75;
ATerm term_w_75;
ATerm term_t_75;
ATerm term_r_75;
ATerm term_q_75;
ATerm term_t_74;
ATerm term_r_74;
ATerm term_p_74;
ATerm term_v_73;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_c_72;
ATerm term_y_71;
ATerm term_i_71;
ATerm term_o_69;
ATerm term_l_69;
ATerm term_h_69;
ATerm term_e_69;
ATerm term_a_69;
ATerm term_x_68;
ATerm term_r_68;
ATerm term_m_68;
ATerm term_j_68;
ATerm term_d_68;
ATerm term_a_68;
ATerm term_x_67;
ATerm term_t_67;
ATerm term_q_67;
ATerm term_m_67;
ATerm term_g_67;
ATerm term_a_67;
ATerm term_x_66;
ATerm term_j_66;
ATerm term_g_66;
ATerm term_t_65;
ATerm term_o_65;
ATerm term_j_65;
ATerm term_v_64;
ATerm term_s_64;
ATerm term_p_64;
ATerm term_m_64;
ATerm term_j_64;
ATerm term_g_64;
ATerm term_d_64;
ATerm term_a_64;
ATerm term_x_63;
ATerm term_u_63;
ATerm term_r_63;
ATerm term_o_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_w_62;
ATerm term_k_62;
ATerm term_b_62;
ATerm term_a_62;
ATerm term_x_61;
ATerm term_s_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_h_61;
ATerm term_b_61;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_y_59;
ATerm term_x_59;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_w_58;
ATerm term_q_58;
ATerm term_g_58;
ATerm term_u_57;
ATerm term_z_55;
ATerm term_d_55;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_t_53;
ATerm term_p_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_n_50;
ATerm term_k_50;
ATerm term_b_50;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_v_48;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_n_46;
ATerm term_h_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_s_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_l_45;
ATerm term_g_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_u_44;
ATerm term_s_44;
ATerm term_p_44;
ATerm term_i_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_v_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_c_43;
ATerm term_a_43;
ATerm term_y_42;
ATerm term_g_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_k_41;
ATerm term_e_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_s_38;
ATerm term_q_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_p_36;
ATerm term_n_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_n_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_p_25;
ATerm term_o_23;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_SOpt_2, term_g_20, term_h_20);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_t_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_35, term_p_19, term_c_35);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_35, term_p_25, term_g_35);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_35, term_k_35, term_n_35);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_35, term_s_35, term_u_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_35, term_x_35, term_y_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_36, term_c_36, term_d_36);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_36, term_l_36, term_n_36);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_36, term_s_36, term_t_36);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_36, term_z_36, term_a_37);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_37, term_d_37, term_e_37);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_37, term_j_37, term_l_37);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_37, term_r_37, term_t_37);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_37, term_x_37, term_y_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_38, term_b_38, term_g_38);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_38, term_j_38, term_k_38);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_38, term_s_38, term_v_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_38, term_z_38, term_a_39);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_39, term_e_39, term_f_39);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_39, term_k_39, term_m_39);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_39, term_q_39, term_r_39);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_39, term_w_39, term_z_39);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_40, term_f_40, term_g_40);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_40, term_j_40, term_k_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_40, term_q_40, term_r_40);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_40, term_v_40, term_x_40);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_40, term_b_41, term_c_41);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_41, term_o_41, term_p_41);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_41, term_s_41, term_w_41);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_a_45);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym__2, term_s_44, term_p_45);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_s_44, term_u_44);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym__2, term_b_49, term_v_48);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_lit_1, term_e_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_lit_1, term_g_34);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_SOpt_2, term_x_53, term_y_53);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym_Arg_1, term_p_19);
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
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
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_e_72);
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(sym__2, term_q_75, term_r_75);
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_78));
  term_d_78 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_d_78);
  ATprotect(&(term_g_78));
  term_g_78 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_78);
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(sym__2, term_j_78, term_l_19);
  ATprotect(&(term_l_78));
  term_l_78 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_b_79);
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_w_79);
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_r_19);
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(sym__2, term_n_80, term_l_19);
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(sym__2, term_r_80, term_l_19);
  ATprotect(&(term_t_80));
  term_t_80 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_81));
  term_a_81 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(sym__2, term_w_79, term_l_19);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(sym__3, term_q_19, term_r_19, (ATerm) ATempty);
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_n_80);
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_82));
  term_u_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(sym__2, term_u_82, term_l_19);
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_83));
  term_d_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm l_13 (ATerm o_87, ATerm t);
static ATerm k_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm i_6 (ATerm t_2, ATerm u_2, ATerm v_2, ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm x_151 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm collect_p__1_0 (ATerm k_151 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm e_116 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm n_38 (ATerm q_34, ATerm r_34, ATerm s_34, ATerm t);
static ATerm n_13 (ATerm x_21, ATerm w_21, ATerm t);
ATerm instantiate_list_1_0 (ATerm q_151 (ATerm), ATerm t);
static ATerm p_13 (ATerm m_24, ATerm n_24, ATerm k_24, ATerm l_24, ATerm t);
static ATerm k_44 (ATerm t_41, ATerm u_41, ATerm v_41, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm s_151 (ATerm), ATerm t);
static ATerm q_13 (ATerm e_48, ATerm f_48, ATerm t);
static ATerm r_13 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm s_25, ATerm t_25, ATerm t);
ATerm genzip_4_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm nzip_1_0 (ATerm f_125 (ATerm), ATerm t);
static ATerm v_13 (ATerm j_25, ATerm k_25, ATerm i_25, ATerm o_25, ATerm t);
static ATerm x_13 (ATerm x_31, ATerm v_31, ATerm w_31, ATerm t);
static ATerm w_2 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm y_13 (ATerm p_84, ATerm o_84, ATerm t);
ATerm at_suffix_rev_1_0 (ATerm o_123 (ATerm), ATerm t);
ATerm rtrim_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm k_123 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm l_130 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm j_0 (ATerm), ATerm t);
static ATerm z_13 (ATerm h_44, ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm a_14 (ATerm m_47, ATerm n_47, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm n_149 (ATerm), ATerm o_149 (ATerm), ATerm t);
static ATerm b_14 (ATerm m_71, ATerm n_71, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm f_141 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm r_150 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
static ATerm d_14 (ATerm e_65, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm w_139 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm v_139 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm x_139 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_14 (ATerm c_61, ATerm d_61, ATerm e_61, ATerm t);
static ATerm g_14 (ATerm o_137 (ATerm), ATerm m_61, ATerm l_61, ATerm t);
static ATerm h_14 (ATerm b_44, ATerm c_44, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_98 (ATerm z_96, ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm w_148 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
static ATerm i_14 (ATerm f_60, ATerm g_60, ATerm e_60, ATerm t);
static ATerm j_14 (ATerm c_136 (ATerm), ATerm u_48, ATerm s_48, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm k_14 (ATerm k_60, ATerm l_60, ATerm t);
ATerm end_scope_1_0 (ATerm z_135 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_135 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm a_150 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm w_105 (ATerm p_105, ATerm t);
static ATerm f_7 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
static ATerm v_110 (ATerm z_106, ATerm a_107, ATerm b_107, ATerm e_107, ATerm t);
static ATerm m_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm m_148 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm b_123 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
static ATerm l_14 (ATerm x_44, ATerm y_44, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm p_124 (ATerm j_123, ATerm m_123, ATerm n_123, ATerm t);
ATerm number_node_1_0 (ATerm q_148 (ATerm), ATerm t);
static ATerm q_10 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm symbol2abox_1_0 (ATerm n_148 (ATerm), ATerm t);
static ATerm a_133 (ATerm i_131, ATerm j_131, ATerm k_131, ATerm t);
static ATerm b_133 (ATerm h_132, ATerm i_132, ATerm j_132, ATerm k_132, ATerm l_132, ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm e_133 (ATerm), ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm escape_0_0 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
static ATerm r_138 (ATerm j_138, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm b_142 (ATerm o_141, ATerm t);
static ATerm d_12 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
static ATerm r_14 (ATerm a_29, ATerm b_29, ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm d_152 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm x_147 (ATerm d_147, ATerm e_147, ATerm f_147, ATerm t);
static ATerm f_12 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm x_14 (ATerm j_22, ATerm k_22, ATerm i_22, ATerm h_22, ATerm t);
static ATerm x_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm y_14 (ATerm q_21, ATerm o_21, ATerm p_21, ATerm r_21, ATerm t);
ATerm filter_1_0 (ATerm s_130 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_116 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm r_117 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm z_14 (ATerm m_84, ATerm n_84, ATerm t);
ATerm unescape_chars_1_0 (ATerm g_133 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm unquote_chars_2_0 (ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm i_15 (ATerm l_84, ATerm t);
ATerm oncetd_1_0 (ATerm h_117 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm debug_1_0 (ATerm e_122 (ATerm), ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
static ATerm l_15 (ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm z_34, ATerm y_34, ATerm t);
static ATerm m_15 (ATerm a_127 (ATerm), ATerm v_34, ATerm u_34, ATerm t);
ATerm foldr_3_0 (ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t);
static ATerm c_15 (ATerm t);
ATerm collect_om_2_0 (ATerm i_128 (ATerm), ATerm j_128 (ATerm), ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm n_15 (ATerm a_27, ATerm z_26, ATerm t);
static ATerm p_15 (ATerm l_44, ATerm m_44, ATerm t);
static ATerm q_15 (ATerm q_28, ATerm r_28, ATerm t);
static ATerm s_15 (ATerm g_122 (ATerm), ATerm n_221, ATerm w_28, ATerm t);
static ATerm r_15 (ATerm m_28, ATerm n_28, ATerm t);
static ATerm k_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm k_141 (ATerm), ATerm t);
static ATerm a_168 (ATerm u_167, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_15 (ATerm s_28, ATerm t);
static ATerm u_15 (ATerm p_42, ATerm q_42, ATerm t);
static ATerm v_15 (ATerm n_44, ATerm o_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_169 (ATerm k_168, ATerm t);
static ATerm m_169 (ATerm o_168, ATerm p_168, ATerm q_168, ATerm t);
static ATerm n_169 (ATerm y_168, ATerm z_168, ATerm a_169, ATerm t);
static ATerm w_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_122 (ATerm), ATerm t);
static ATerm b_16 (ATerm y_61, ATerm z_61, ATerm t);
ATerm if_verbose2_1_0 (ATerm t_139 (ATerm), ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm v_16 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_16 (ATerm p_70, ATerm q_70, ATerm t);
static ATerm o_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm s_17 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_15 (ATerm g_47, ATerm h_47, ATerm t);
ATerm foldr_2_0 (ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_139 (ATerm), ATerm t);
static ATerm y_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_17 (ATerm t);
ATerm need_help_1_0 (ATerm i_142 (ATerm), ATerm t);
static ATerm e_16 (ATerm x_64, ATerm y_64, ATerm z_64, ATerm t);
static ATerm f_16 (ATerm a_65, ATerm b_65, ATerm t);
ATerm lookup_table_0_1 (ATerm r_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm f_65, ATerm g_65, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_15 (ATerm c_65, ATerm d_65, ATerm t);
static ATerm a_16 (ATerm h_65, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_122 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_144 (ATerm), ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
ATerm parse_options_1_0 (ATerm k_144 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm m_142 (ATerm), ATerm n_142 (ATerm), ATerm t);
static ATerm t_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
ATerm iowrap_3_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm k_19 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,i_0 = NULL;
  a_0 = t;
  t = term_l_19;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_m_19;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_19), b_0), term_n_19);
  i_0 = t;
  t = SSL_printnl(e_0, i_0);
  t = term_p_19;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
      t = term_l_19;
      t = w_0(t);
      c_1 = t;
      t = term_q_19;
      d_1 = t;
      t = term_r_19;
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_19, term_r_19, c_1);
      t = i_14(d_1, e_1, c_1, t);
      _fail(t);
    }
  else
    {
      ATerm k_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_0 = ATgetFirst((ATermList) t);
          z_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_0;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_1 = ATgetFirst((ATermList) t);
          b_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_0;
      t = t_0(t);
      t = a_1;
      t = u_0(t);
      k_1 = t;
      t = (ATerm) ATinsert(CheckATermList(b_1), k_1);
    }
  return(t);
}
ATerm Option_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL;
      t = term_l_19;
      t = r_0(t);
      r_1 = t;
      t = term_q_19;
      s_1 = t;
      t = term_r_19;
      t_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_19, term_r_19, r_1);
      t = i_14(s_1, t_1, r_1, t);
      _fail(t);
    }
  else
    {
      ATerm y_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_1 = ATgetFirst((ATermList) t);
          q_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_1;
      t = p_0(t);
      t = term_l_19;
      t = q_0(t);
      y_1 = t;
      t = (ATerm) ATinsert(CheckATermList(q_1), y_1);
    }
  return(t);
}
static ATerm l_13 (ATerm o_87, ATerm t)
{
  ATerm s_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(o_87);
      z_1 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, z_1)));
      LocalPopChoice(u_19);
    }
  else
    {
      t = s_19;
      {
        ATerm a_2 = NULL;
        t = SSL_concat_strings(o_87);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, a_2);
      }
    }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm v_19 = t;
  if((PushChoice() == 0))
    {
      ATerm i_2 = NULL;
      i_2 = t;
      if(match_int(t, 9))
        {
          t = i_2;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = i_2;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = i_2;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = i_2;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_19;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
  d_2 = t;
  {
    ATerm w_19 = t;
    if((PushChoice() == 0))
      {
        ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,w_7 = NULL;
        h_2 = t;
        if(match_cons(t, sym_layout_1))
          {
            g_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_2);
        f_2 = t;
        t = g_2;
        if(!(match_cons(t, sym_layout_place_holder_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_layout_1, g_2);
        w_7 = t;
        t = SSLsetAnnotations(w_7, f_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_19;
      }
  }
  if(match_cons(t, sym_layout_1))
    {
      c_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_concat_strings(c_2);
  e_2 = t;
  t = SSL_explode_string(e_2);
  t = filter_1_0(k_0, t);
  {
    ATerm x_19 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_19;
      }
  }
  t = d_2;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm y_19 = t;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,b_8 = NULL;
      l_2 = t;
      if(match_cons(t, sym_layout_1))
        {
          k_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_2);
      j_2 = t;
      t = k_2;
      if(!(match_cons(t, sym_layout_place_holder_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_layout_1, k_2);
      b_8 = t;
      t = SSLsetAnnotations(b_8, j_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_19;
    }
  return(t);
}
static ATerm i_6 (ATerm t_2, ATerm u_2, ATerm v_2, ATerm t)
{
  ATerm n_3 = NULL,d_8 = NULL;
  t = SSLgetAnnotations(v_2);
  n_3 = t;
  t = t_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_2, u_2);
  d_8 = t;
  t = SSLsetAnnotations(d_8, n_3);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm InsLayout_1_0 (ATerm x_151 (ATerm), ATerm t)
{
  static ATerm h_6 (ATerm t);
  static ATerm h_6 (ATerm t)
  {
    static ATerm j_6 (ATerm s_3, ATerm t_3, ATerm u_3, ATerm t);
    static ATerm k_6 (ATerm p_4, ATerm q_4, ATerm r_4, ATerm s_4, ATerm w_4, ATerm t);
    static ATerm j_6 (ATerm s_3, ATerm t_3, ATerm u_3, ATerm t)
    {
      ATerm w_3 = NULL,m_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_3, t_3);
      t = x_151(t);
      if(match_cons(t, sym__2))
        {
          w_3 = ATgetArgument(t, 0);
          m_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, w_3), m_4);
      return(t);
    }
    static ATerm k_6 (ATerm p_4, ATerm q_4, ATerm r_4, ATerm s_4, ATerm w_4, ATerm t)
    {
      ATerm y_4 = NULL,z_4 = NULL,d_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_4, s_4);
      t = x_151(t);
      if(match_cons(t, sym__2))
        {
          y_4 = ATgetArgument(t, 0);
          {
            ATerm z_19 = ATgetArgument(t, 1);
            if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
              {
                z_4 = ATgetFirst((ATermList) z_19);
                m_5 = (ATerm) ATgetNext((ATermList) z_19);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_4), q_4), m_5);
      t = h_6(t);
      if(match_cons(t, sym__2))
        {
          ATerm a_20 = ATgetArgument(t, 0);
          if(((ATgetType(a_20) == AT_LIST) && !(ATisEmpty(a_20))))
            {
              d_5 = ATgetFirst((ATermList) a_20);
              o_5 = (ATerm) ATgetNext((ATermList) a_20);
            }
          else
            _fail(t);
          n_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 = NULL,q_5 = NULL;
            t = term_f_20;
            t = get_options_0_0(t);
            t = oncetd_1_0(n_0, t);
            t = z_4;
            t = has_layout_0_0(t);
            t = z_4;
            if(match_cons(t, sym_layout_1))
              {
                q_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_13(q_5, t);
            p_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_5), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_20), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_5))), p_5), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_4))))), n_5);
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            {
              ATerm j_20 = t;
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_5 = NULL,t_5 = NULL;
                  ATerm l_20 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm v_5 = NULL;
                      v_5 = t;
                      t = term_f_20;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(s_0, t);
                      t = v_5;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = l_20;
                    }
                  t = z_4;
                  t = has_significant_layout_0_0(t);
                  t = z_4;
                  if(match_cons(t, sym_layout_1))
                    {
                      t_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_13(t_5, t);
                  s_5 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(o_5), d_5), s_5), y_4), n_5);
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = j_20;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(o_5), d_5), y_4), n_5);
                }
            }
          }
      }
      return(t);
    }
    ATerm y_5 = NULL,z_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
    y_5 = t;
    if(match_cons(t, sym__2))
      {
        z_5 = ATgetArgument(t, 0);
        f_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = z_5;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_6 = ATgetFirst((ATermList) t);
        c_6 = (ATerm) ATgetNext((ATermList) t);
        t = c_6;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_6(z_5, f_6, y_5, t);
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                t = j_6(b_6, f_6, y_5, t);
              }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_6 = ATgetFirst((ATermList) t);
                e_6 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm p_20 = t;
                  int q_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_6(z_5, f_6, y_5, t);
                      LocalPopChoice(q_20);
                    }
                  else
                    {
                      t = p_20;
                      t = k_6(b_6, d_6, e_6, f_6, y_5, t);
                    }
                }
              }
            else
              {
                t = i_6(z_5, f_6, y_5, t);
              }
          }
      }
    else
      {
        t = i_6(z_5, f_6, y_5, t);
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_20 = t;
      if((PushChoice() == 0))
        {
          ATerm b_25 = NULL,h_25 = NULL,n_25 = NULL,k_8 = NULL;
          n_25 = t;
          if(match_cons(t, sym_layout_1))
            {
              h_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_25);
          b_25 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, h_25);
          k_8 = t;
          t = SSLsetAnnotations(k_8, b_25);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_20;
        }
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm l_27 = NULL,m_27 = NULL;
        l_27 = t;
        if(match_cons(t, sym_layout_1))
          {
            m_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm u_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_13 = NULL,g_15 = NULL,o_15 = NULL,l_8 = NULL;
              t = SSLgetAnnotations(l_27);
              g_15 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, m_27);
              l_8 = t;
              t = SSLsetAnnotations(l_8, g_15);
              o_15 = t;
              t = term_f_20;
              t = get_options_0_0(t);
              t = oncetd_1_0(y_0, t);
              t = o_15;
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  t_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_13(t_13, t);
              LocalPopChoice(v_20);
            }
          else
            {
              t = u_20;
              {
                ATerm o_16 = NULL,p_16 = NULL,n_8 = NULL;
                t = SSLgetAnnotations(l_27);
                p_16 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, m_27);
                n_8 = t;
                t = SSLsetAnnotations(n_8, p_16);
                {
                  ATerm w_20 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm x_16 = NULL;
                      x_16 = t;
                      t = term_f_20;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(f_1, t);
                      t = x_16;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = w_20;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    o_16 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_13(o_16, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,n_7 = NULL,o_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,j_8 = NULL,g_8 = NULL;
  u_7 = t;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_7);
  q_7 = t;
  t = s_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_7 = ATgetFirst((ATermList) t);
      {
        ATerm x_20 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_20 = ATgetFirst((ATermList) t);
      t_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_7, t_7);
  g_8 = t;
  t = SSLsetAnnotations(g_8, q_7);
  {
    static ATerm y_27 (ATerm t);
    static ATerm y_27 (ATerm t)
    {
      static ATerm o_28 (ATerm v_14, ATerm w_14, ATerm a_15, ATerm t);
      static ATerm o_28 (ATerm v_14, ATerm w_14, ATerm a_15, ATerm t)
      {
        ATerm c_16 = NULL,l_16 = NULL,q_16 = NULL,r_16 = NULL,u_16 = NULL,i_8 = NULL,h_8 = NULL;
        t = SSLgetAnnotations(v_14);
        c_16 = t;
        t = w_14;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_16 = ATgetFirst((ATermList) t);
            r_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_14);
        l_16 = t;
        t = (ATerm) ATinsert(CheckATermList(r_16), q_16);
        h_8 = t;
        t = SSLsetAnnotations(h_8, l_16);
        u_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_16, a_15);
        i_8 = t;
        t = SSLsetAnnotations(i_8, c_16);
        t = InsLayout_1_0(y_27, t);
        return(t);
      }
      ATerm w_16 = NULL,y_16 = NULL,b_17 = NULL,d_17 = NULL,f_17 = NULL,h_17 = NULL;
      h_17 = t;
      if(match_cons(t, sym__2))
        {
          d_17 = ATgetArgument(t, 0);
          f_17 = ATgetArgument(t, 1);
          t = d_17;
          if(match_cons(t, sym_H_2))
            {
              y_16 = ATgetArgument(t, 0);
              b_17 = ATgetArgument(t, 1);
              {
                ATerm z_20 = t;
                int a_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_1 = NULL,n_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                    t = InsLayout_1_0(y_27, t);
                    if(match_cons(t, sym__2))
                      {
                        m_1 = ATgetArgument(t, 0);
                        n_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, y_16, m_1), n_1);
                    LocalPopChoice(a_21);
                  }
                else
                  {
                    t = z_20;
                    {
                      ATerm b_21 = t;
                      int c_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_28(h_17, d_17, f_17, t);
                          LocalPopChoice(c_21);
                        }
                      else
                        {
                          t = b_21;
                          t = h_17;
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  y_16 = ATgetArgument(t, 0);
                  b_17 = ATgetArgument(t, 1);
                  {
                    ATerm d_21 = t;
                    int e_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_2 = NULL,y_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                        t = InsLayout_1_0(y_27, t);
                        if(match_cons(t, sym__2))
                          {
                            x_2 = ATgetArgument(t, 0);
                            y_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_16, x_2), y_2);
                        LocalPopChoice(e_21);
                      }
                    else
                      {
                        t = d_21;
                        {
                          ATerm f_21 = t;
                          int h_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = o_28(h_17, d_17, f_17, t);
                              LocalPopChoice(h_21);
                            }
                          else
                            {
                              t = f_21;
                              t = h_17;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      y_16 = ATgetArgument(t, 0);
                      b_17 = ATgetArgument(t, 1);
                      {
                        ATerm i_21 = t;
                        int j_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_4 = NULL,j_4 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                            t = InsLayout_1_0(y_27, t);
                            if(match_cons(t, sym__2))
                              {
                                i_4 = ATgetArgument(t, 0);
                                j_4 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, y_16, i_4), j_4);
                            LocalPopChoice(j_21);
                          }
                        else
                          {
                            t = i_21;
                            {
                              ATerm l_21 = t;
                              int m_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = o_28(h_17, d_17, f_17, t);
                                  LocalPopChoice(m_21);
                                }
                              else
                                {
                                  t = l_21;
                                  t = h_17;
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          y_16 = ATgetArgument(t, 0);
                          b_17 = ATgetArgument(t, 1);
                          w_16 = ATgetArgument(t, 2);
                          {
                            ATerm n_21 = t;
                            int s_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_5 = NULL,u_5 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, w_16, f_17);
                                t = InsLayout_1_0(y_27, t);
                                if(match_cons(t, sym__2))
                                  {
                                    k_5 = ATgetArgument(t, 0);
                                    u_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, y_16, b_17, k_5), u_5);
                                LocalPopChoice(s_21);
                              }
                            else
                              {
                                t = n_21;
                                {
                                  ATerm t_21 = t;
                                  int u_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_28(h_17, d_17, f_17, t);
                                      LocalPopChoice(u_21);
                                    }
                                  else
                                    {
                                      t = t_21;
                                      t = h_17;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              y_16 = ATgetArgument(t, 0);
                              b_17 = ATgetArgument(t, 1);
                              {
                                ATerm v_21 = t;
                                int z_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_6 = NULL,v_6 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                                    t = InsLayout_1_0(y_27, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        u_6 = ATgetArgument(t, 0);
                                        v_6 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, y_16, u_6), v_6);
                                    LocalPopChoice(z_21);
                                  }
                                else
                                  {
                                    t = v_21;
                                    {
                                      ATerm a_22 = t;
                                      int b_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = o_28(h_17, d_17, f_17, t);
                                          LocalPopChoice(b_22);
                                        }
                                      else
                                        {
                                          t = a_22;
                                          t = h_17;
                                        }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  y_16 = ATgetArgument(t, 0);
                                  b_17 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_22 = t;
                                    int d_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm e_7 = NULL,p_7 = NULL,x_7 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, y_16, f_17);
                                        t = InsLayout_1_0(y_27, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            e_7 = ATgetArgument(t, 0);
                                            {
                                              ATerm e_22 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                                        t = InsLayout_1_0(y_27, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            p_7 = ATgetArgument(t, 0);
                                            x_7 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, e_7, p_7), x_7);
                                        LocalPopChoice(d_22);
                                      }
                                    else
                                      {
                                        t = c_22;
                                        {
                                          ATerm f_22 = t;
                                          int l_22 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_28(h_17, d_17, f_17, t);
                                              LocalPopChoice(l_22);
                                            }
                                          else
                                            {
                                              t = f_22;
                                              t = h_17;
                                            }
                                        }
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      y_16 = ATgetArgument(t, 0);
                                      b_17 = ATgetArgument(t, 1);
                                      {
                                        ATerm m_22 = t;
                                        int n_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm r_9 = NULL,u_9 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                                            t = InsLayout_1_0(y_27, t);
                                            if(match_cons(t, sym__2))
                                              {
                                                r_9 = ATgetArgument(t, 0);
                                                u_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, y_16, r_9), u_9);
                                            LocalPopChoice(n_22);
                                          }
                                        else
                                          {
                                            t = m_22;
                                            {
                                              ATerm o_22 = t;
                                              int p_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = o_28(h_17, d_17, f_17, t);
                                                  LocalPopChoice(p_22);
                                                }
                                              else
                                                {
                                                  t = o_22;
                                                  t = h_17;
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          y_16 = ATgetArgument(t, 0);
                                          b_17 = ATgetArgument(t, 1);
                                          {
                                            ATerm q_22 = t;
                                            int r_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm s_10 = NULL,t_10 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                                                t = InsLayout_1_0(y_27, t);
                                                if(match_cons(t, sym__2))
                                                  {
                                                    s_10 = ATgetArgument(t, 0);
                                                    t_10 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, y_16, s_10), t_10);
                                                LocalPopChoice(r_22);
                                              }
                                            else
                                              {
                                                t = q_22;
                                                {
                                                  ATerm s_22 = t;
                                                  int u_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = o_28(h_17, d_17, f_17, t);
                                                      LocalPopChoice(u_22);
                                                    }
                                                  else
                                                    {
                                                      t = s_22;
                                                      t = h_17;
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              y_16 = ATgetArgument(t, 0);
                                              b_17 = ATgetArgument(t, 1);
                                              {
                                                ATerm v_22 = t;
                                                int w_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm y_11 = NULL,z_11 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                                                    t = InsLayout_1_0(y_27, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        y_11 = ATgetArgument(t, 0);
                                                        z_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, y_16, y_11), z_11);
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
                                                          t = o_28(h_17, d_17, f_17, t);
                                                          LocalPopChoice(y_22);
                                                        }
                                                      else
                                                        {
                                                          t = x_22;
                                                          t = h_17;
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  y_16 = ATgetArgument(t, 0);
                                                  b_17 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm z_22 = t;
                                                    int a_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm c_13 = NULL,d_13 = NULL;
                                                        t = (ATerm) ATmakeAppl(sym__2, b_17, f_17);
                                                        t = InsLayout_1_0(y_27, t);
                                                        if(match_cons(t, sym__2))
                                                          {
                                                            c_13 = ATgetArgument(t, 0);
                                                            d_13 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, y_16, c_13), d_13);
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
                                                              t = o_28(h_17, d_17, f_17, t);
                                                              LocalPopChoice(c_23);
                                                            }
                                                          else
                                                            {
                                                              t = b_23;
                                                              t = h_17;
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm d_23 = t;
                                                  int e_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = o_28(h_17, d_17, f_17, t);
                                                      LocalPopChoice(e_23);
                                                    }
                                                  else
                                                    {
                                                      t = d_23;
                                                      t = h_17;
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
          t = h_17;
        }
      return(t);
    }
    t = y_27(t);
  }
  o_7 = t;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_7);
  j_7 = t;
  t = k_7;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_23 = ATgetFirst((ATermList) t);
                ATerm i_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, k_7);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
      }
  }
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_7, l_7);
  j_8 = t;
  t = SSLsetAnnotations(j_8, j_7);
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      {
        ATerm j_23 = ATgetArgument(t, 1);
        if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
          {
            i_7 = ATgetFirst((ATermList) j_23);
            {
              ATerm k_23 = (ATerm) ATgetNext((ATermList) j_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_7), h_7), g_7);
  t = filter_1_0(v_0, t);
  t = flat_list_0_0(t);
  p_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_27 = ATgetFirst((ATermList) t);
      o_27 = (ATerm) ATgetNext((ATermList) t);
      t = o_27;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_27;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_20), p_27);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_20), p_27);
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm k_151 (ATerm), ATerm t)
{
  static ATerm x_28 (ATerm t);
  static ATerm x_28 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL;
        t = k_151(t);
        u_28 = t;
        t = (ATerm) ATinsert(ATempty, u_28);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm e_17 = NULL,g_17 = NULL;
          g_17 = t;
          t = SSL_explode_term(g_17);
          if(match_cons(t, sym__2))
            {
              ATerm n_23 = ATgetArgument(t, 0);
              e_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_17;
          t = foldr_3_0(g_1, conc_0_0, x_28, t);
        }
      }
    return(t);
  }
  t = x_28(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,c_29 = NULL,d_29 = NULL,k_29 = NULL,l_29 = NULL,v_8 = NULL;
  l_29 = t;
  if(match_cons(t, sym_amb_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_29);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, k_29);
  v_8 = t;
  t = SSLsetAnnotations(v_8, d_29);
  t = term_m_19;
  z_28 = t;
  t = (ATerm) ATinsert(ATempty, term_o_23);
  c_29 = t;
  t = SSL_printnl(z_28, c_29);
  t = term_p_19;
  y_28 = t;
  t = SSL_exit(y_28);
  t = (ATerm) ATinsert(ATempty, term_o_23);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm k_31 = NULL,o_31 = NULL,p_31 = NULL;
  k_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_31;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_31 = ATgetFirst((ATermList) t);
          p_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_18 = NULL,l_18 = NULL,x_8 = NULL;
            t = SSLgetAnnotations(k_31);
            i_18 = t;
            t = o_31;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_31;
            t = flat_list_0_0(t);
            l_18 = t;
            t = (ATerm) ATinsert(CheckATermList(l_18), o_31);
            x_8 = t;
            t = SSLsetAnnotations(x_8, i_18);
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            {
              ATerm r_23 = t;
              int s_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_19 = NULL,b_20 = NULL,c_20 = NULL,o_20 = NULL,y_8 = NULL;
                  t = SSLgetAnnotations(k_31);
                  c_20 = t;
                  t = o_31;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = o_31;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm t_23 = ATgetFirst((ATermList) t);
                          ATerm u_23 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = o_31;
                    }
                  t = (ATerm) ATinsert(CheckATermList(p_31), o_31);
                  y_8 = t;
                  t = SSLsetAnnotations(y_8, c_20);
                  o_20 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_20 = ATgetFirst((ATermList) t);
                      {
                        ATerm w_23 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = o_20;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_23 = ATgetFirst((ATermList) t);
                      t_19 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, b_20, t_19);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(s_23);
                }
              else
                {
                  t = r_23;
                  {
                    ATerm g_21 = NULL,k_21 = NULL,z_8 = NULL;
                    t = SSLgetAnnotations(k_31);
                    g_21 = t;
                    t = p_31;
                    t = flat_list_0_0(t);
                    k_21 = t;
                    t = (ATerm) ATinsert(CheckATermList(k_21), o_31);
                    z_8 = t;
                    t = SSLsetAnnotations(z_8, g_21);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,b_32 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      b_32 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
      {
        ATerm h_32 = NULL,i_32 = NULL;
        t = term_l_19;
        t = o_0(t);
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_32, i_32);
        t = index_0_0(t);
        h_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_31, h_32);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm k_32 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          b_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_l_19;
      t = o_0(t);
      k_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_32, k_32);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t);
  static ATerm h_1 (ATerm t)
  {
    t = bottomup_1_0(e_116, t);
    return(t);
  }
  t = SRTS_all(h_1, t);
  t = e_116(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  o_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      p_34 = ATgetArgument(t, 0);
      {
        ATerm y_21 = NULL,d_9 = NULL;
        t = SSLgetAnnotations(o_34);
        y_21 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, p_34);
        d_9 = t;
        t = SSLsetAnnotations(d_9, y_21);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          p_34 = ATgetArgument(t, 0);
          n_34 = ATgetArgument(t, 1);
          {
            ATerm g_22 = NULL,e_9 = NULL;
            t = SSLgetAnnotations(o_34);
            g_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, p_34, n_34);
            e_9 = t;
            t = SSLsetAnnotations(e_9, g_22);
          }
        }
      else
        {
          ATerm t_22 = NULL,f_9 = NULL;
          if(match_cons(t, sym_S_1))
            {
              p_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_34);
          t_22 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, p_34);
          f_9 = t;
          t = SSLsetAnnotations(f_9, t_22);
        }
    }
  return(t);
}
static ATerm n_38 (ATerm q_34, ATerm r_34, ATerm s_34, ATerm t)
{
  ATerm h_35 = NULL,i_9 = NULL;
  t = SSLgetAnnotations(q_34);
  h_35 = t;
  t = r_34;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = s_34;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_34, s_34);
  i_9 = t;
  t = SSLsetAnnotations(i_9, h_35);
  return(t);
}
static ATerm n_13 (ATerm x_21, ATerm w_21, ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,l_33 = NULL,m_33 = NULL,g_9 = NULL;
  h_33 = t;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_33);
  i_33 = t;
  t = j_33;
  t = collect_p__1_0(i_1, t);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_33, l_33);
  g_9 = t;
  t = SSLsetAnnotations(g_9, i_33);
  {
    static ATerm m_38 (ATerm t);
    static ATerm m_38 (ATerm t)
    {
      static ATerm o_38 (ATerm l_35, ATerm m_35, ATerm o_35, ATerm p_35, ATerm t);
      static ATerm p_38 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm h_36, ATerm i_36, ATerm t);
      static ATerm r_38 (ATerm v_36, ATerm w_36, ATerm x_36, ATerm t);
      static ATerm o_38 (ATerm l_35, ATerm m_35, ATerm o_35, ATerm p_35, ATerm t)
      {
        ATerm t_35 = NULL,a_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, m_35, p_35);
        t = m_38(t);
        if(match_cons(t, sym__2))
          {
            t_35 = ATgetArgument(t, 0);
            a_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_35), (ATerm) ATmakeAppl(sym_Arg_1, l_35)), (ATerm) ATinsert(CheckATermList(a_36), o_35));
        return(t);
      }
      static ATerm p_38 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm h_36, ATerm i_36, ATerm t)
      {
        ATerm m_36 = NULL,o_36 = NULL;
        t = f_36;
        if(((e_33 != NULL) && (e_33 != t)))
          _fail(t);
        else
          e_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_36, i_36);
        t = m_38(t);
        if(match_cons(t, sym__2))
          {
            m_36 = ATgetArgument(t, 0);
            o_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_36), (ATerm) ATmakeAppl(sym_Arg2_2, e_36, f_36)), (ATerm) ATinsert(CheckATermList(o_36), h_36));
        return(t);
      }
      static ATerm r_38 (ATerm v_36, ATerm w_36, ATerm x_36, ATerm t)
      {
        ATerm g_37 = NULL,k_37 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = m_38(t);
        if(match_cons(t, sym__2))
          {
            g_37 = ATgetArgument(t, 0);
            k_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_37), v_36), k_37);
        return(t);
      }
      ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,s_37 = NULL,v_37 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
      p_37 = t;
      if(match_cons(t, sym__2))
        {
          s_37 = ATgetArgument(t, 0);
          d_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_38 = ATgetFirst((ATermList) t);
          f_38 = (ATerm) ATgetNext((ATermList) t);
          t = s_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_37 = ATgetFirst((ATermList) t);
              c_38 = (ATerm) ATgetNext((ATermList) t);
              t = v_37;
              if(match_cons(t, sym_Arg_1))
                {
                  n_37 = ATgetArgument(t, 0);
                  {
                    ATerm z_23 = t;
                    int b_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_38(p_37, s_37, d_38, t);
                        LocalPopChoice(b_24);
                      }
                    else
                      {
                        t = z_23;
                        {
                          ATerm c_24 = t;
                          int d_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = o_38(n_37, c_38, e_38, f_38, t);
                              LocalPopChoice(d_24);
                            }
                          else
                            {
                              t = c_24;
                              t = r_38(v_37, c_38, f_38, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      n_37 = ATgetArgument(t, 0);
                      o_37 = ATgetArgument(t, 1);
                      {
                        ATerm e_24 = t;
                        int f_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_38(p_37, s_37, d_38, t);
                            LocalPopChoice(f_24);
                          }
                        else
                          {
                            t = e_24;
                            {
                              ATerm g_24 = t;
                              int h_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = p_38(n_37, o_37, c_38, e_38, f_38, t);
                                  LocalPopChoice(h_24);
                                }
                              else
                                {
                                  t = g_24;
                                  t = r_38(v_37, c_38, f_38, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm i_24 = t;
                      int j_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_38(p_37, s_37, d_38, t);
                          LocalPopChoice(j_24);
                        }
                      else
                        {
                          t = i_24;
                          t = r_38(v_37, c_38, f_38, t);
                        }
                    }
                }
            }
          else
            {
              t = n_38(p_37, s_37, d_38, t);
            }
        }
      else
        {
          t = s_37;
          t = n_38(p_37, s_37, d_38, t);
        }
      return(t);
    }
    t = m_38(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm p_24 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_21, f_33);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm q_151 (ATerm), ATerm t)
{
  static ATerm d_40 (ATerm t);
  static ATerm d_40 (ATerm t)
  {
    ATerm u_39 = NULL,v_39 = NULL,y_39 = NULL;
    u_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_39;
      }
    else
      {
        ATerm v_23 = NULL,x_23 = NULL,a_24 = NULL,v_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_39 = ATgetFirst((ATermList) t);
            y_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_39;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_24 = ATgetFirst((ATermList) t);
            ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_39);
        v_23 = t;
        t = term_l_19;
        t = q_151(t);
        {
          static ATerm j_1 (ATerm t);
          static ATerm j_1 (ATerm t)
          {
            ATerm s_24 = t;
            int t_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_24 = t;
                int v_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm l_1 (ATerm t);
                    static ATerm l_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, v_39);
                      return(t);
                    }
                    t = Instantiate_1_0(l_1, t);
                    LocalPopChoice(v_24);
                  }
                else
                  {
                    t = u_24;
                    t = flat_list_0_0(t);
                  }
                LocalPopChoice(t_24);
              }
            else
              {
                t = s_24;
              }
            return(t);
          }
          t = bottomup_1_0(j_1, t);
        }
        a_24 = t;
        t = y_39;
        t = d_40(t);
        x_23 = t;
        t = (ATerm) ATinsert(CheckATermList(x_23), a_24);
        v_9 = t;
        t = SSLsetAnnotations(v_9, v_23);
      }
    return(t);
  }
  t = d_40(t);
  return(t);
}
static ATerm p_13 (ATerm m_24, ATerm n_24, ATerm k_24, ATerm l_24, ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,f_41 = NULL;
  static ATerm u_1 (ATerm t);
  static ATerm u_1 (ATerm t)
  {
    t = not_null(o_40);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, k_24, (ATerm) ATinsert(ATempty, l_24));
  t = conc_0_0(t);
  p_40 = t;
  t = m_24;
  if(match_cons(t, sym_iter_1))
    {
      f_41 = ATgetArgument(t, 0);
      {
        ATerm o_24 = NULL,x_9 = NULL;
        t = SSLgetAnnotations(m_24);
        o_24 = t;
        t = f_41;
        n_40 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, f_41);
        x_9 = t;
        t = SSLsetAnnotations(x_9, o_24);
      }
    }
  else
    {
      ATerm x_24 = NULL,y_9 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          f_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_24);
      x_24 = t;
      t = f_41;
      n_40 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, f_41);
      y_9 = t;
      t = SSLsetAnnotations(y_9, x_24);
    }
  t = (ATerm) ATmakeAppl(sym__2, m_24, p_40);
  t = get_pp_entry_0_0(t);
  if(((o_40 != NULL) && (o_40 != t)))
    _fail(t);
  else
    o_40 = t;
  t = n_24;
  {
    static ATerm o_1 (ATerm t);
    static ATerm o_1 (ATerm t)
    {
      ATerm g_41 = NULL;
      g_41 = t;
      t = (ATerm) ATmakeAppl(sym__4, n_40, g_41, p_40, term_p_19);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(o_1, t);
  }
  t = instantiate_list_1_0(u_1, t);
  return(t);
}
static ATerm k_44 (ATerm t_41, ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm c_42 = NULL,b_10 = NULL;
  t = SSLgetAnnotations(v_41);
  c_42 = t;
  t = u_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_41), t_41);
  b_10 = t;
  t = SSLsetAnnotations(b_10, c_42);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  static ATerm j_44 (ATerm t);
  static ATerm j_44 (ATerm t)
  {
    static ATerm t_44 (ATerm l_42, ATerm m_42, ATerm n_42, ATerm u_42, ATerm t);
    static ATerm t_44 (ATerm l_42, ATerm m_42, ATerm n_42, ATerm u_42, ATerm t)
    {
      ATerm z_42 = NULL,b_43 = NULL,g_43 = NULL,c_10 = NULL;
      t = u_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm w_24 = ATgetFirst((ATermList) t);
          ATerm y_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_42);
      z_42 = t;
      t = term_l_19;
      t = s_151(t);
      {
        static ATerm v_1 (ATerm t);
        static ATerm v_1 (ATerm t)
        {
          ATerm z_24 = t;
          int a_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm w_1 (ATerm t);
                  static ATerm w_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, m_42), l_42);
                    return(t);
                  }
                  t = Instantiate_1_0(w_1, t);
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = c_25;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(a_25);
            }
          else
            {
              t = z_24;
            }
          return(t);
        }
        t = bottomup_1_0(v_1, t);
      }
      g_43 = t;
      t = n_42;
      t = j_44(t);
      b_43 = t;
      t = (ATerm) ATinsert(CheckATermList(b_43), g_43);
      c_10 = t;
      t = SSLsetAnnotations(c_10, z_42);
      return(t);
    }
    ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,y_43 = NULL,a_44 = NULL;
    q_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_43;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_43 = ATgetFirst((ATermList) t);
            s_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_43;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_43 = ATgetFirst((ATermList) t);
            a_44 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm f_25 = t;
              int g_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_44(r_43, s_43, q_43, t);
                  LocalPopChoice(g_25);
                }
              else
                {
                  t = f_25;
                  t = t_44(r_43, y_43, a_44, q_43, t);
                }
            }
          }
        else
          {
            t = k_44(r_43, s_43, q_43, t);
          }
      }
    return(t);
  }
  t = j_44(t);
  return(t);
}
static ATerm q_13 (ATerm e_48, ATerm f_48, ATerm t)
{
  t = SSL_mod(e_48, f_48);
  return(t);
}
static ATerm r_13 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm s_25, ATerm t_25, ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,u_45 = NULL;
      t = term_p_25;
      o_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_25, term_p_25);
      t = q_13(s_25, o_45, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_l_19;
      t = c_114(t);
      m_45 = t;
      t = term_l_19;
      t = d_114(t);
      n_45 = t;
      t = (ATerm) ATmakeAppl(sym__4, m_45, t_25, n_45, term_p_25);
      t = symbol2abox_0_0(t);
      u_45 = t;
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_45;
            {
              ATerm y_25 = t;
              if((PushChoice() == 0))
                {
                  ATerm d_25 = NULL;
                  d_25 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = d_25;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm z_25 = ATgetFirst((ATermList) t);
                          ATerm a_26 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = d_25;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = y_25;
                }
            }
            t = (ATerm) ATinsert(ATempty, u_45);
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            t = u_45;
          }
      }
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm x_45 = NULL,y_45 = NULL,j_46 = NULL;
        t = term_l_19;
        t = b_114(t);
        x_45 = t;
        t = term_l_19;
        t = d_114(t);
        y_45 = t;
        t = (ATerm) ATmakeAppl(sym__4, x_45, t_25, y_45, term_p_19);
        t = symbol2abox_0_0(t);
        j_46 = t;
        {
          ATerm b_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_46;
              {
                ATerm d_26 = t;
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
                            ATerm g_26 = ATgetFirst((ATermList) t);
                            ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
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
                    t = d_26;
                  }
              }
              t = (ATerm) ATinsert(ATempty, j_46);
              LocalPopChoice(c_26);
            }
          else
            {
              t = b_26;
              t = j_46;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t)
{
  static ATerm d_47 (ATerm t);
  static ATerm d_47 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_124(t);
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        {
          ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,g_10 = NULL;
          t = u_124(t);
          c_47 = t;
          if(match_cons(t, sym__2))
            {
              v_46 = ATgetArgument(t, 0);
              w_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_47);
          u_46 = t;
          t = v_46;
          t = w_124(t);
          a_47 = t;
          t = w_46;
          t = d_47(t);
          b_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_47, b_47);
          g_10 = t;
          t = SSLsetAnnotations(g_10, u_46);
          t = v_124(t);
        }
      }
    return(t);
  }
  t = d_47(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      ATerm l_26 = ATgetArgument(t, 1);
      if(((ATgetType(l_26) != AT_LIST) || !(ATisEmpty(l_26))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,u_47 = NULL;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      {
        ATerm m_26 = ATgetArgument(t, 1);
        if(((ATgetType(m_26) == AT_LIST) && !(ATisEmpty(m_26))))
          {
            p_47 = ATgetFirst((ATermList) m_26);
            q_47 = (ATerm) ATgetNext((ATermList) m_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_p_19;
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_47, term_p_19);
  t = x_15(o_47, u_47, t);
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_47, p_47), (ATerm) ATmakeAppl(sym__2, r_47, q_47));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL;
  if(match_cons(t, sym__2))
    {
      v_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_47), v_47);
  return(t);
}
ATerm nzip_1_0 (ATerm f_125 (ATerm), ATerm t)
{
  ATerm i_47 = NULL;
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, i_47);
  t = genzip_4_0(x_1, b_2, m_2, f_125, t);
  return(t);
}
static ATerm v_13 (ATerm j_25, ATerm k_25, ATerm i_25, ATerm o_25, ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,q_49 = NULL,r_49 = NULL;
  static ATerm s_2 (ATerm t);
  static ATerm s_2 (ATerm t)
  {
    t = not_null(k_48);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, i_25, (ATerm) ATinsert(ATempty, o_25));
  t = conc_0_0(t);
  l_48 = t;
  t = j_25;
  if(match_cons(t, sym_iter_sep_2))
    {
      q_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
      {
        ATerm f_26 = NULL,x_10 = NULL;
        t = SSLgetAnnotations(j_25);
        f_26 = t;
        t = q_49;
        i_48 = t;
        t = r_49;
        j_48 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_49, r_49);
        x_10 = t;
        t = SSLsetAnnotations(x_10, f_26);
      }
    }
  else
    {
      ATerm o_26 = NULL,c_11 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          q_49 = ATgetArgument(t, 0);
          r_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_25);
      o_26 = t;
      t = q_49;
      i_48 = t;
      t = r_49;
      j_48 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, q_49, r_49);
      c_11 = t;
      t = SSLsetAnnotations(c_11, o_26);
    }
  t = (ATerm) ATmakeAppl(sym__2, j_25, l_48);
  t = get_pp_entry_0_0(t);
  if(((k_48 != NULL) && (k_48 != t)))
    _fail(t);
  else
    k_48 = t;
  t = k_25;
  {
    static ATerm n_2 (ATerm t);
    static ATerm n_2 (ATerm t)
    {
      ATerm s_49 = NULL,t_49 = NULL;
      static ATerm o_2 (ATerm t);
      static ATerm p_2 (ATerm t);
      static ATerm q_2 (ATerm t);
      static ATerm r_2 (ATerm t);
      static ATerm o_2 (ATerm t)
      {
        t = i_48;
        return(t);
      }
      static ATerm p_2 (ATerm t)
      {
        t = j_48;
        return(t);
      }
      static ATerm q_2 (ATerm t)
      {
        t = l_48;
        return(t);
      }
      static ATerm r_2 (ATerm t)
      {
        t = o_25;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          s_49 = ATgetArgument(t, 0);
          t_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_13(o_2, p_2, q_2, r_2, s_49, t_49, t);
      return(t);
    }
    t = nzip_1_0(n_2, t);
  }
  t = instantiate_sep_list_1_0(s_2, t);
  return(t);
}
static ATerm x_13 (ATerm x_31, ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm y_49 = NULL,a_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_31, term_p_25);
  t = geq_0_0(t);
  t = term_p_19;
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_31, term_p_19);
  t = a_14(x_31, a_50, t);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_49, w_31);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  if(match_cons(t, sym__2))
    {
      p_50 = ATgetArgument(t, 0);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
          {
            q_50 = ATgetFirst((ATermList) p_26);
            r_50 = (ATerm) ATgetNext((ATermList) p_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_13(p_50, q_50, r_50, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm m_50 = NULL;
  t = repeat_2_0(w_2, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if(((ATgetType(q_26) != AT_INT) || (ATgetInt((ATermInt) q_26) != 1)))
        _fail(t);
      {
        ATerm r_26 = ATgetArgument(t, 1);
        if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
          {
            m_50 = ATgetFirst((ATermList) r_26);
            {
              ATerm s_26 = (ATerm) ATgetNext((ATermList) r_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_50;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm t_26 = t;
  if((PushChoice() == 0))
    {
      ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,g_11 = NULL;
      r_66 = t;
      if(match_cons(t, sym_lit_1))
        {
          q_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_66);
      p_66 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, q_66);
      g_11 = t;
      t = SSLsetAnnotations(g_11, p_66);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_26;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm v_26 = t;
  if((PushChoice() == 0))
    {
      ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,h_11 = NULL;
      u_66 = t;
      if(match_cons(t, sym_lit_1))
        {
          t_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_66);
      s_66 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, t_66);
      h_11 = t;
      t = SSLsetAnnotations(h_11, s_66);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_26;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,e_66 = NULL,f_66 = NULL;
  z_65 = t;
  if(match_cons(t, sym__4))
    {
      a_66 = ATgetArgument(t, 0);
      c_66 = ATgetArgument(t, 1);
      e_66 = ATgetArgument(t, 2);
      f_66 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = a_66;
  if(match_cons(t, sym_seq_1))
    {
      b_66 = ATgetArgument(t, 0);
      {
        ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
        static ATerm b_3 (ATerm t);
        static ATerm b_3 (ATerm t)
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_26 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm c_3 (ATerm t);
                  static ATerm c_3 (ATerm t)
                  {
                    t = not_null(l_66);
                    return(t);
                  }
                  t = Instantiate_1_0(c_3, t);
                  LocalPopChoice(c_27);
                }
              else
                {
                  t = y_26;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
            }
          return(t);
        }
        t = c_66;
        if(match_cons(t, sym_appl_2))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            y_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_66, (ATerm) ATinsert(ATempty, f_66));
        t = conc_0_0(t);
        o_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, b_66), o_66);
        t = get_pp_entry_0_0(t);
        k_66 = t;
        t = b_66;
        t = filter_1_0(z_2, t);
        m_66 = t;
        t = y_65;
        t = filter_1_0(a_3, t);
        n_66 = t;
        t = (ATerm) ATmakeAppl(sym__4, m_66, n_66, o_66, term_p_19);
        t = seq2abox_0_0(t);
        if(((l_66 != NULL) && (l_66 != t)))
          _fail(t);
        else
          l_66 = t;
        t = k_66;
        t = bottomup_1_0(b_3, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          b_66 = ATgetArgument(t, 0);
          u_65 = ATgetArgument(t, 1);
          {
            ATerm s_27 = NULL,t_27 = NULL,v_27 = NULL;
            static ATerm c_40 (ATerm t);
            static ATerm c_40 (ATerm t)
            {
              ATerm b_28 = NULL,j_28 = NULL,l_28 = NULL,v_28 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,a_30 = NULL;
              if(match_cons(t, sym__4))
                {
                  m_29 = ATgetArgument(t, 0);
                  n_29 = ATgetArgument(t, 1);
                  s_29 = ATgetArgument(t, 2);
                  a_30 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = n_29;
              if(match_cons(t, sym_appl_2))
                {
                  o_29 = ATgetArgument(t, 0);
                  p_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_29;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_29 = ATgetFirst((ATermList) t);
                  r_29 = (ATerm) ATgetNext((ATermList) t);
                  t = r_29;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = o_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          l_28 = ATgetArgument(t, 0);
                          f_29 = ATgetArgument(t, 1);
                          i_29 = ATgetArgument(t, 2);
                          t = f_29;
                          if(match_cons(t, sym_alt_2))
                            {
                              g_29 = ATgetArgument(t, 0);
                              h_29 = ATgetArgument(t, 1);
                              t = l_28;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  v_28 = ATgetFirst((ATermList) t);
                                  e_29 = (ATerm) ATgetNext((ATermList) t);
                                  t = e_29;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = m_29;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          b_28 = ATgetArgument(t, 0);
                                          j_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_27 = t;
                                            int f_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = v_28;
                                                if((b_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = g_29;
                                                if((b_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = h_29;
                                                if((j_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, b_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, b_28), b_28, i_29), p_29), s_29, a_30);
                                                t = c_40(t);
                                                LocalPopChoice(f_27);
                                              }
                                            else
                                              {
                                                t = e_27;
                                                {
                                                  ATerm h_27 = t;
                                                  int i_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_31 = NULL,n_31 = NULL;
                                                      t = g_29;
                                                      if((b_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = h_29;
                                                      if((j_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = term_p_19;
                                                      n_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, a_30, term_p_19);
                                                      t = x_15(a_30, n_31, t);
                                                      m_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, j_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, v_28), j_28, i_29), p_29), s_29, m_31);
                                                      t = c_40(t);
                                                      LocalPopChoice(i_27);
                                                    }
                                                  else
                                                    {
                                                      t = h_27;
                                                      {
                                                        ATerm n_32 = NULL;
                                                        static ATerm d_3 (ATerm t);
                                                        static ATerm d_3 (ATerm t)
                                                        {
                                                          ATerm j_27 = t;
                                                          int k_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_27 = t;
                                                              int r_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  static ATerm e_3 (ATerm t);
                                                                  static ATerm e_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATinsert(ATempty, not_null(t_27));
                                                                    return(t);
                                                                  }
                                                                  t = Instantiate_1_0(e_3, t);
                                                                  LocalPopChoice(r_27);
                                                                }
                                                              else
                                                                {
                                                                  t = q_27;
                                                                  t = flat_list_0_0(t);
                                                                }
                                                              LocalPopChoice(k_27);
                                                            }
                                                          else
                                                            {
                                                              t = j_27;
                                                            }
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_66, u_65), s_29);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((s_27 != NULL) && (s_27 != t)))
                                                          _fail(t);
                                                        else
                                                          s_27 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, m_29, q_29, s_29, term_p_19);
                                                        t = symbol2abox_0_0(t);
                                                        if(((t_27 != NULL) && (t_27 != t)))
                                                          _fail(t);
                                                        else
                                                          t_27 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, a_30, s_27);
                                                        t = index_0_0(t);
                                                        n_32 = t;
                                                        t = (ATerm) ATinsert(ATempty, n_32);
                                                        t = bottomup_1_0(d_3, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm x_32 = NULL;
                                          static ATerm f_3 (ATerm t);
                                          static ATerm f_3 (ATerm t)
                                          {
                                            ATerm u_27 = t;
                                            int w_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_27 = t;
                                                int z_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    static ATerm g_3 (ATerm t);
                                                    static ATerm g_3 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(t_27));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(g_3, t);
                                                    LocalPopChoice(z_27);
                                                  }
                                                else
                                                  {
                                                    t = x_27;
                                                    t = flat_list_0_0(t);
                                                  }
                                                LocalPopChoice(w_27);
                                              }
                                            else
                                              {
                                                t = u_27;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_66, u_65), s_29);
                                          t = get_pp_entry_0_0(t);
                                          if(((s_27 != NULL) && (s_27 != t)))
                                            _fail(t);
                                          else
                                            s_27 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, m_29, q_29, s_29, term_p_19);
                                          t = symbol2abox_0_0(t);
                                          if(((t_27 != NULL) && (t_27 != t)))
                                            _fail(t);
                                          else
                                            t_27 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, a_30, s_27);
                                          t = index_0_0(t);
                                          x_32 = t;
                                          t = (ATerm) ATinsert(ATempty, x_32);
                                          t = bottomup_1_0(f_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm o_33 = NULL;
                                      static ATerm h_3 (ATerm t);
                                      static ATerm h_3 (ATerm t)
                                      {
                                        ATerm i_28 = t;
                                        int k_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm p_28 = t;
                                            int t_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                static ATerm i_3 (ATerm t);
                                                static ATerm i_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(t_27));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(i_3, t);
                                                LocalPopChoice(t_28);
                                              }
                                            else
                                              {
                                                t = p_28;
                                                t = flat_list_0_0(t);
                                              }
                                            LocalPopChoice(k_28);
                                          }
                                        else
                                          {
                                            t = i_28;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_66, u_65), s_29);
                                      t = get_pp_entry_0_0(t);
                                      if(((s_27 != NULL) && (s_27 != t)))
                                        _fail(t);
                                      else
                                        s_27 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, m_29, q_29, s_29, term_p_19);
                                      t = symbol2abox_0_0(t);
                                      if(((t_27 != NULL) && (t_27 != t)))
                                        _fail(t);
                                      else
                                        t_27 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, a_30, s_27);
                                      t = index_0_0(t);
                                      o_33 = t;
                                      t = (ATerm) ATinsert(ATempty, o_33);
                                      t = bottomup_1_0(h_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm e_35 = NULL;
                                  static ATerm j_3 (ATerm t);
                                  static ATerm j_3 (ATerm t)
                                  {
                                    ATerm j_29 = t;
                                    int t_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm u_29 = t;
                                        int v_29 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm k_3 (ATerm t);
                                            static ATerm k_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(t_27));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(k_3, t);
                                            LocalPopChoice(v_29);
                                          }
                                        else
                                          {
                                            t = u_29;
                                            t = flat_list_0_0(t);
                                          }
                                        LocalPopChoice(t_29);
                                      }
                                    else
                                      {
                                        t = j_29;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_66, u_65), s_29);
                                  t = get_pp_entry_0_0(t);
                                  if(((s_27 != NULL) && (s_27 != t)))
                                    _fail(t);
                                  else
                                    s_27 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, m_29, q_29, s_29, term_p_19);
                                  t = symbol2abox_0_0(t);
                                  if(((t_27 != NULL) && (t_27 != t)))
                                    _fail(t);
                                  else
                                    t_27 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, a_30, s_27);
                                  t = index_0_0(t);
                                  e_35 = t;
                                  t = (ATerm) ATinsert(ATempty, e_35);
                                  t = bottomup_1_0(j_3, t);
                                }
                            }
                          else
                            {
                              ATerm q_36 = NULL;
                              static ATerm l_3 (ATerm t);
                              static ATerm l_3 (ATerm t)
                              {
                                ATerm y_29 = t;
                                int z_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_30 = t;
                                    int d_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        static ATerm m_3 (ATerm t);
                                        static ATerm m_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(t_27));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(m_3, t);
                                        LocalPopChoice(d_30);
                                      }
                                    else
                                      {
                                        t = b_30;
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
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_66, u_65), s_29);
                              t = get_pp_entry_0_0(t);
                              if(((s_27 != NULL) && (s_27 != t)))
                                _fail(t);
                              else
                                s_27 = t;
                              t = (ATerm) ATmakeAppl(sym__4, m_29, q_29, s_29, term_p_19);
                              t = symbol2abox_0_0(t);
                              if(((t_27 != NULL) && (t_27 != t)))
                                _fail(t);
                              else
                                t_27 = t;
                              t = (ATerm) ATmakeAppl(sym__2, a_30, s_27);
                              t = index_0_0(t);
                              q_36 = t;
                              t = (ATerm) ATinsert(ATempty, q_36);
                              t = bottomup_1_0(l_3, t);
                            }
                        }
                      else
                        {
                          ATerm i_37 = NULL;
                          static ATerm o_3 (ATerm t);
                          static ATerm o_3 (ATerm t)
                          {
                            ATerm g_30 = t;
                            int h_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_30 = t;
                                int j_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    static ATerm p_3 (ATerm t);
                                    static ATerm p_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(t_27));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(p_3, t);
                                    LocalPopChoice(j_30);
                                  }
                                else
                                  {
                                    t = i_30;
                                    t = flat_list_0_0(t);
                                  }
                                LocalPopChoice(h_30);
                              }
                            else
                              {
                                t = g_30;
                              }
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_66, u_65), s_29);
                          t = get_pp_entry_0_0(t);
                          if(((s_27 != NULL) && (s_27 != t)))
                            _fail(t);
                          else
                            s_27 = t;
                          t = (ATerm) ATmakeAppl(sym__4, m_29, q_29, s_29, term_p_19);
                          t = symbol2abox_0_0(t);
                          if(((t_27 != NULL) && (t_27 != t)))
                            _fail(t);
                          else
                            t_27 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_30, s_27);
                          t = index_0_0(t);
                          i_37 = t;
                          t = (ATerm) ATinsert(ATempty, i_37);
                          t = bottomup_1_0(o_3, t);
                        }
                    }
                  else
                    {
                      t = o_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          l_28 = ATgetArgument(t, 0);
                          f_29 = ATgetArgument(t, 1);
                          i_29 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = m_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          b_28 = ATgetArgument(t, 0);
                          j_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_28;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          v_28 = ATgetFirst((ATermList) t);
                          e_29 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = e_29;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = f_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          g_29 = ATgetArgument(t, 0);
                          h_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm l_30 = t;
                        int n_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_28;
                            if((b_28 != t))
                              {
                                _fail(t);
                              }
                            t = g_29;
                            if((b_28 != t))
                              {
                                _fail(t);
                              }
                            t = h_29;
                            if((j_28 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, b_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, b_28), b_28, i_29), p_29), s_29, a_30);
                            t = c_40(t);
                            LocalPopChoice(n_30);
                          }
                        else
                          {
                            t = l_30;
                            {
                              ATerm t_38 = NULL,u_38 = NULL;
                              t = g_29;
                              if((b_28 != t))
                                {
                                  _fail(t);
                                }
                              t = h_29;
                              if((j_28 != t))
                                {
                                  _fail(t);
                                }
                              t = term_p_19;
                              u_38 = t;
                              t = (ATerm) ATmakeAppl(sym__2, a_30, term_p_19);
                              t = x_15(a_30, u_38, t);
                              t_38 = t;
                              t = (ATerm) ATmakeAppl(sym__4, j_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, v_28), j_28, i_29), p_29), s_29, t_38);
                              t = c_40(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = o_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      l_28 = ATgetArgument(t, 0);
                      f_29 = ATgetArgument(t, 1);
                      i_29 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = m_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      b_28 = ATgetArgument(t, 0);
                      j_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_28;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_28 = ATgetFirst((ATermList) t);
                      e_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_29;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      g_29 = ATgetArgument(t, 0);
                      h_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_30 = t;
                    int p_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = v_28;
                        if((b_28 != t))
                          {
                            _fail(t);
                          }
                        t = g_29;
                        if((b_28 != t))
                          {
                            _fail(t);
                          }
                        t = h_29;
                        if((j_28 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, b_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, b_28), b_28, i_29), p_29), s_29, a_30);
                        t = c_40(t);
                        LocalPopChoice(p_30);
                      }
                    else
                      {
                        t = o_30;
                        {
                          ATerm x_39 = NULL,b_40 = NULL;
                          t = g_29;
                          if((b_28 != t))
                            {
                              _fail(t);
                            }
                          t = h_29;
                          if((j_28 != t))
                            {
                              _fail(t);
                            }
                          t = term_p_19;
                          b_40 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_30, term_p_19);
                          t = x_15(a_30, b_40, t);
                          x_39 = t;
                          t = (ATerm) ATmakeAppl(sym__4, j_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, v_28), j_28, i_29), p_29), s_29, x_39);
                          t = c_40(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, e_66, (ATerm) ATinsert(ATempty, f_66));
            t = conc_0_0(t);
            v_27 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, b_66, u_65), c_66, v_27, term_p_19);
            t = c_40(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              b_66 = ATgetArgument(t, 0);
              u_65 = ATgetArgument(t, 1);
              {
                ATerm f_67 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, b_66, u_65);
                f_67 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, b_66, u_65), c_66, e_66, f_66);
                t = v_13(f_67, c_66, e_66, f_66, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  b_66 = ATgetArgument(t, 0);
                  u_65 = ATgetArgument(t, 1);
                  {
                    ATerm o_67 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, b_66, u_65);
                    o_67 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, b_66, u_65), c_66, e_66, f_66);
                    t = v_13(o_67, c_66, e_66, f_66, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      b_66 = ATgetArgument(t, 0);
                      {
                        ATerm u_67 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, b_66);
                        u_67 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, b_66), c_66, e_66, f_66);
                        t = p_13(u_67, c_66, e_66, f_66, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          b_66 = ATgetArgument(t, 0);
                          {
                            ATerm f_68 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, b_66);
                            f_68 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, b_66), c_66, e_66, f_66);
                            t = p_13(f_68, c_66, e_66, f_66, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              b_66 = ATgetArgument(t, 0);
                              t = c_66;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm q_30 = ATgetArgument(t, 0);
                                  y_65 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = y_65;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  v_65 = ATgetFirst((ATermList) t);
                                  w_65 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm d_41 = NULL,h_41 = NULL,i_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
                                    static ATerm q_3 (ATerm t);
                                    static ATerm q_3 (ATerm t)
                                    {
                                      ATerm r_30 = t;
                                      int t_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_30 = t;
                                          int x_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm r_3 (ATerm t);
                                              static ATerm r_3 (ATerm t)
                                              {
                                                t = not_null(l_41);
                                                return(t);
                                              }
                                              t = Instantiate_1_0(r_3, t);
                                              LocalPopChoice(x_30);
                                            }
                                          else
                                            {
                                              t = v_30;
                                              t = flat_list_0_0(t);
                                            }
                                          LocalPopChoice(t_30);
                                        }
                                      else
                                        {
                                          t = r_30;
                                        }
                                      return(t);
                                    }
                                    t = w_65;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, e_66, (ATerm) ATinsert(ATempty, f_66));
                                    t = conc_0_0(t);
                                    n_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, b_66), n_41);
                                    t = get_pp_entry_0_0(t);
                                    d_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, b_66, v_65, n_41, term_p_19);
                                    t = symbol2abox_0_0(t);
                                    h_41 = t;
                                    t = (ATerm) ATinsert(ATempty, h_41);
                                    m_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, d_41, (ATerm) ATinsert(ATempty, h_41));
                                    t = n_13(d_41, m_41, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        i_41 = ATgetArgument(t, 0);
                                        if(((l_41 != NULL) && (l_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          l_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = i_41;
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
                              ATerm y_30 = t;
                              int z_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm c_31 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(z_30);
                                  {
                                    ATerm d_31 = t;
                                    int f_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = c_66;
                                        {
                                          ATerm g_31 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm h_42 = NULL;
                                              h_42 = t;
                                              t = SSL_is_string(h_42);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = g_31;
                                            }
                                        }
                                        t = c_66;
                                        {
                                          ATerm h_31 = t;
                                          int i_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm k_42 = NULL,o_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  k_42 = ATgetArgument(t, 0);
                                                  t_42 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = k_42;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  o_42 = ATgetArgument(t, 0);
                                                  r_42 = ATgetArgument(t, 1);
                                                  s_42 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = c_66;
                                              t = y_14(o_42, r_42, s_42, t_42, t);
                                              LocalPopChoice(i_31);
                                            }
                                          else
                                            {
                                              t = h_31;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(f_31);
                                      }
                                    else
                                      {
                                        t = d_31;
                                        t = SSL_is_string(c_66);
                                        t = (ATerm) ATmakeAppl(sym_S_1, c_66);
                                      }
                                  }
                                }
                              else
                                {
                                  t = y_30;
                                  {
                                    ATerm l_31 = t;
                                    int q_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm r_31 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(q_31);
                                        {
                                          ATerm w_43 = NULL,x_43 = NULL;
                                          t = (ATerm) ATinsert(ATempty, c_66);
                                          x_43 = t;
                                          t = SSL_implode_string(x_43);
                                          w_43 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, w_43);
                                        }
                                      }
                                    else
                                      {
                                        t = l_31;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            b_66 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, b_66);
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
  ATerm r_69 = NULL,v_69 = NULL,y_69 = NULL,c_70 = NULL,f_70 = NULL,g_70 = NULL,j_70 = NULL,k_70 = NULL;
  if(match_cons(t, sym__4))
    {
      r_69 = ATgetArgument(t, 0);
      c_70 = ATgetArgument(t, 1);
      j_70 = ATgetArgument(t, 2);
      k_70 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = r_69;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_70;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_69 = ATgetFirst((ATermList) t);
          y_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_70 = ATgetFirst((ATermList) t);
          g_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_70;
      {
        ATerm y_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm c_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(a_32);
            t = v_69;
            {
              ATerm d_32 = t;
              int e_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm f_32 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_32);
                  {
                    ATerm g_32 = t;
                    int j_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, y_69, g_70, j_70, k_70);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(j_32);
                      }
                    else
                      {
                        t = g_32;
                        {
                          ATerm a_72 = NULL,l_72 = NULL,v_72 = NULL,a_73 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, v_69, f_70, j_70, k_70);
                          t = symbol2abox_0_0(t);
                          a_72 = t;
                          t = term_p_19;
                          a_73 = t;
                          t = (ATerm) ATmakeAppl(sym__2, k_70, term_p_19);
                          t = x_15(k_70, a_73, t);
                          v_72 = t;
                          t = (ATerm) ATmakeAppl(sym__4, y_69, g_70, j_70, v_72);
                          t = seq2abox_0_0(t);
                          l_72 = t;
                          t = (ATerm) ATinsert(CheckATermList(l_72), a_72);
                        }
                      }
                  }
                }
              else
                {
                  t = d_32;
                  {
                    ATerm q_73 = NULL,r_73 = NULL,t_73 = NULL,u_73 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, v_69, f_70, j_70, k_70);
                    t = symbol2abox_0_0(t);
                    q_73 = t;
                    t = term_p_19;
                    u_73 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_70, term_p_19);
                    t = x_15(k_70, u_73, t);
                    t_73 = t;
                    t = (ATerm) ATmakeAppl(sym__4, y_69, g_70, j_70, t_73);
                    t = seq2abox_0_0(t);
                    r_73 = t;
                    t = (ATerm) ATinsert(CheckATermList(r_73), q_73);
                  }
                }
            }
          }
        else
          {
            t = y_31;
            {
              ATerm a_74 = NULL,b_74 = NULL,h_74 = NULL,i_74 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, v_69, f_70, j_70, k_70);
              t = symbol2abox_0_0(t);
              a_74 = t;
              t = term_p_19;
              i_74 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_70, term_p_19);
              t = x_15(k_70, i_74, t);
              h_74 = t;
              t = (ATerm) ATmakeAppl(sym__4, y_69, g_70, j_70, h_74);
              t = seq2abox_0_0(t);
              b_74 = t;
              t = (ATerm) ATinsert(CheckATermList(b_74), a_74);
            }
          }
      }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  y_74 = t;
  t = term_m_32;
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_32, y_74);
  t = b_16(b_75, y_74, t);
  if(match_cons(t, sym__2))
    {
      a_75 = ATgetArgument(t, 0);
      z_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_75;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(v_3, t);
  t = (ATerm) ATmakeAppl(sym__2, a_75, z_74);
  return(t);
}
static ATerm y_13 (ATerm p_84, ATerm o_84, ATerm t)
{
  ATerm f_75 = NULL,i_75 = NULL,j_75 = NULL;
  f_75 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      i_75 = ATgetArgument(t, 0);
      j_75 = ATgetArgument(t, 1);
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_75 = NULL,m_75 = NULL;
            t = p_84;
            t = mk_key_0_0(t);
            l_75 = t;
            t = term_m_32;
            m_75 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_m_32, l_75);
            t = b_16(m_75, l_75, t);
            t = f_75;
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            t = f_75;
            t = z_14(i_75, j_75, t);
          }
      }
    }
  else
    {
      ATerm s_75 = NULL,x_75 = NULL;
      t = p_84;
      t = mk_key_0_0(t);
      s_75 = t;
      t = term_m_32;
      x_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_32, s_75);
      t = b_16(x_75, s_75, t);
      t = f_75;
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm o_123 (ATerm), ATerm t)
{
  static ATerm o_76 (ATerm t);
  static ATerm o_76 (ATerm t)
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_76 = NULL,m_76 = NULL,n_76 = NULL,r_44 = NULL,v_44 = NULL,l_11 = NULL;
        j_76 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_76 = ATgetFirst((ATermList) t);
            n_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_76);
        r_44 = t;
        t = n_76;
        t = o_76(t);
        v_44 = t;
        t = (ATerm) ATinsert(CheckATermList(v_44), m_76);
        l_11 = t;
        t = SSLsetAnnotations(l_11, r_44);
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = o_123(t);
      }
    return(t);
  }
  t = o_76(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_45 = NULL,d_45 = NULL;
      d_45 = t;
      t = SSL_explode_string(d_45);
      t = rtrim_1_0(m_0, t);
      c_45 = t;
      t = SSL_implode_string(c_45);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm c_77 = NULL,h_45 = NULL;
        c_77 = t;
        t = (ATerm) ATinsert(CheckATermList(c_77), term_l_19);
        {
          static ATerm y_3 (ATerm t);
          static ATerm y_3 (ATerm t)
          {
            ATerm i_45 = NULL,j_45 = NULL;
            i_45 = t;
            {
              ATerm u_32 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_32;
                }
            }
            {
              ATerm v_32 = t;
              if((PushChoice() == 0))
                {
                  ATerm k_45 = NULL,v_45 = NULL,c_46 = NULL,d_46 = NULL,f_46 = NULL,o_11 = NULL;
                  f_46 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_45 = ATgetFirst((ATermList) t);
                      c_46 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_46);
                  k_45 = t;
                  t = v_45;
                  t = m_0(t);
                  d_46 = t;
                  t = (ATerm) ATinsert(CheckATermList(c_46), d_46);
                  o_11 = t;
                  t = SSLsetAnnotations(o_11, k_45);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = v_32;
                }
            }
            t = i_45;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_45 = ATgetFirst((ATermList) t);
                {
                  ATerm w_32 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, j_45);
            return(t);
          }
          t = at_suffix_rev_1_0(y_3, t);
        }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_32 = ATgetFirst((ATermList) t);
            h_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_45;
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  static ATerm s_77 (ATerm t);
  static ATerm s_77 (ATerm t)
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_123(t);
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        {
          ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,o_46 = NULL,s_46 = NULL,r_11 = NULL;
          p_77 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_77 = ATgetFirst((ATermList) t);
              r_77 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_77);
          o_46 = t;
          t = r_77;
          t = s_77(t);
          s_46 = t;
          t = (ATerm) ATinsert(CheckATermList(s_46), q_77);
          r_11 = t;
          t = SSLsetAnnotations(r_11, o_46);
        }
      }
    return(t);
  }
  t = s_77(t);
  return(t);
}
ATerm drop_while_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm w_77 = NULL;
  static ATerm z_3 (ATerm t);
  static ATerm z_3 (ATerm t)
  {
    ATerm m_78 = NULL,o_78 = NULL,p_78 = NULL;
    m_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_78;
      }
    else
      {
        ATerm k_47 = NULL,x_47 = NULL,t_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_78 = ATgetFirst((ATermList) t);
            p_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_78);
        k_47 = t;
        t = o_78;
        {
          ATerm b_33 = t;
          if((PushChoice() == 0))
            {
              t = l_130(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_33;
            }
        }
        x_47 = t;
        t = (ATerm) ATinsert(CheckATermList(p_78), x_47);
        t_11 = t;
        t = SSLsetAnnotations(t_11, k_47);
      }
    if(((w_77 != NULL) && (w_77 != t)))
      _fail(t);
    else
      w_77 = t;
    return(t);
  }
  t = at_suffix_1_0(z_3, t);
  t = not_null(w_77);
  return(t);
}
ATerm ltrim_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_48 = NULL,d_48 = NULL;
      d_48 = t;
      t = SSL_explode_string(d_48);
      t = ltrim_1_0(l_0, t);
      c_48 = t;
      t = SSL_implode_string(c_48);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = drop_while_1_0(l_0, t);
    }
  return(t);
}
ATerm trim_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm g_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_48 = NULL,m_48 = NULL;
      m_48 = t;
      t = SSL_explode_string(m_48);
      t = trim_1_0(j_0, t);
      h_48 = t;
      t = SSL_implode_string(h_48);
      LocalPopChoice(k_33);
    }
  else
    {
      t = g_33;
      t = ltrim_1_0(j_0, t);
      t = rtrim_1_0(j_0, t);
    }
  return(t);
}
static ATerm z_13 (ATerm h_44, ATerm t)
{
  t = SSL_fgetc(h_44);
  return(t);
}
ATerm read_text_from_stream_0_0 (ATerm t)
{
  ATerm s_78 = NULL,j_79 = NULL;
  s_78 = t;
  {
    static ATerm g_81 (ATerm t);
    static ATerm g_81 (ATerm t)
    {
      ATerm n_33 = t;
      int p_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_80 = NULL,p_48 = NULL,q_48 = NULL,t_48 = NULL;
          w_80 = t;
          t = s_78;
          if(match_cons(t, sym_Stream_1))
            {
              t_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_13(t_48, t);
          p_48 = t;
          t = term_l_19;
          t = g_81(t);
          q_48 = t;
          t = (ATerm) ATinsert(CheckATermList(q_48), p_48);
          LocalPopChoice(p_33);
        }
      else
        {
          t = n_33;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = g_81(t);
  }
  j_79 = t;
  t = SSL_implode_string(j_79);
  return(t);
}
ATerm read_text_file_0_0 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL,v_81 = NULL;
  p_81 = t;
  t = term_q_33;
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_81, term_q_33);
  t = v_15(p_81, v_81, t);
  q_81 = t;
  t = read_text_from_stream_0_0(t);
  r_81 = t;
  t = q_81;
  t = fclose_0_0(t);
  t = r_81;
  return(t);
}
static ATerm a_14 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_47, n_47);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      t = SSL_subtr(m_47, n_47);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  t = term_t_33;
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_82 = NULL,d_82 = NULL;
        t = term_w_33;
        c_82 = t;
        t = term_t_33;
        d_82 = t;
        t = term_x_33;
        t = b_16(c_82, d_82, t);
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        t = term_p_19;
      }
  }
  z_81 = t;
  t = term_p_19;
  b_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_81, term_p_19);
  t = a_14(z_81, b_82, t);
  a_82 = t;
  t = SSL_int_to_string(a_82);
  y_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_81), term_t_33);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_82 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_33;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm v_82 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_34);
      v_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_82, (ATerm) ATinsert(ATempty, term_a_34));
      t = h_14(l_82, v_82, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_34 = ATgetArgument(t, 0);
      if(match_cons(c_34, sym_Stream_1))
        {
          y_82 = ATgetArgument(c_34, 0);
        }
      else
        _fail(t);
      z_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(y_82, z_82, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_149 (ATerm), ATerm o_149 (ATerm), ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL;
  x_82 = t;
  t = xtc_new_file_0_0(t);
  w_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_82, x_82);
  t = s_15(a_4, w_82, x_82, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_82);
  t = xtc_transform_file_2_0(n_149, o_149, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm b_14 (ATerm m_71, ATerm n_71, ATerm t)
{
  t = SSL_execvp(m_71, n_71);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  p_85 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      q_85 = ATgetArgument(t, 0);
      {
        ATerm e_49 = NULL,i_49 = NULL;
        t = SSL_int_to_string(q_85);
        e_49 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_34), e_49), term_f_34);
        i_49 = t;
        t = SSL_concat_strings(i_49);
      }
    }
  else
    {
      ATerm e_50 = NULL,f_50 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          q_85 = ATgetArgument(t, 0);
          r_85 = ATgetArgument(t, 1);
          s_85 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(r_85);
      e_50 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_85), term_i_34), e_50), term_h_34), q_85);
      f_50 = t;
      t = SSL_concat_strings(f_50);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_85 = NULL;
  v_85 = t;
  {
    ATerm t_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_4 (ATerm t);
        static ATerm b_4 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm x_34 = ATgetArgument(t, 0);
              if((v_85 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm a_35 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_41), term_q_41), term_e_41), term_y_40), term_t_40), term_l_40), term_h_40), term_a_40), term_s_39), term_n_39), term_g_39), term_b_39), term_w_38), term_l_38), term_h_38), term_z_37), term_u_37), term_m_37), term_f_37), term_b_37), term_u_36), term_p_36), term_j_36), term_z_35), term_v_35), term_q_35), term_i_35), term_d_35);
        t = fetch_elem_1_0(b_4, t);
        LocalPopChoice(w_34);
      }
    else
      {
        t = t_34;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_85);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_85 = NULL,q_87 = NULL;
  z_85 = t;
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_42 = ATgetArgument(t, 0);
            q_87 = ATgetArgument(t, 1);
            {
              ATerm b_42 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_41);
        {
          ATerm d_42 = t;
          int e_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_50 = NULL,s_50 = NULL,t_50 = NULL;
              t = q_87;
              {
                ATerm f_42 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_42;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              l_50 = t;
              t = term_m_19;
              s_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_50), term_g_42);
              t_50 = t;
              t = SSL_printnl(s_50, t_50);
              t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, l_50), term_g_42));
              LocalPopChoice(e_42);
            }
          else
            {
              t = d_42;
              t = z_85;
            }
        }
      }
    else
      {
        t = y_41;
        t = z_85;
      }
  }
  t = z_85;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm f_141 (ATerm), ATerm t)
{
  ATerm e_88 = NULL,g_88 = NULL;
  g_88 = t;
  t = fork_0_0(t);
  e_88 = t;
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_88;
        t = f_141(t);
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        t = SSL_waitpid(e_88);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_42 = ATgetArgument(t, 0);
            if(((ATgetType(v_42) != AT_INT) || (ATgetInt((ATermInt) v_42) != 0)))
              _fail(t);
            {
              ATerm w_42 = ATgetArgument(t, 1);
            }
            {
              ATerm x_42 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_88;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_150 (ATerm), ATerm t)
{
  ATerm i_88 = NULL,k_88 = NULL;
  k_88 = t;
  t = r_150(t);
  t = xtc_find_0_0(t);
  i_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_88, k_88);
  {
    static ATerm c_4 (ATerm t);
    static ATerm c_4 (ATerm t)
    {
      ATerm l_88 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_88, k_88);
      t = b_14(i_88, k_88, t);
      t = term_y_42;
      l_88 = t;
      t = SSL_exit(l_88);
      return(t);
    }
    t = fork_and_wait_1_0(c_4, t);
  }
  t = k_88;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm o_88 = NULL,p_88 = NULL;
  o_88 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_88 = NULL,s_88 = NULL;
      t = o_88;
      t = xtc_new_file_0_0(t);
      r_88 = t;
      t = h_0(t);
      s_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_88, (ATerm) ATinsert(ATinsert(ATempty, r_88), term_a_43));
      t = conc_0_0(t);
      t = xtc_command_1_0(g_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_88);
    }
  else
    {
      ATerm q_89 = NULL,w_89 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_88;
      t = xtc_new_file_0_0(t);
      q_89 = t;
      t = h_0(t);
      w_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_89, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_89), term_a_43), p_88), term_c_43));
      t = conc_0_0(t);
      t = xtc_command_1_0(g_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_89);
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL;
  if(match_cons(t, sym__2))
    {
      d_91 = ATgetArgument(t, 0);
      e_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_91;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm p_91 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_91, e_91);
      t = r_14(d_91, e_91, t);
      p_91 = t;
      t = (ATerm) ATinsert(CheckATermList(p_91), d_91);
    }
  return(t);
}
static ATerm d_14 (ATerm e_65, ATerm t)
{
  t = SSL_hashtable_keys(e_65);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_91 = NULL,t_91 = NULL;
  static ATerm d_4 (ATerm t);
  static ATerm d_4 (ATerm t)
  {
    ATerm u_91 = NULL,w_91 = NULL;
    u_91 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_91), u_91);
    t = b_16(not_null(q_91), u_91, t);
    w_91 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_91, w_91);
    return(t);
  }
  if(((q_91 != NULL) && (q_91 != t)))
    _fail(t);
  else
    q_91 = t;
  t = lookup_table_0_1(q_91, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_14(t_91, t);
  t = map_1_0(d_4, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_139 (ATerm), ATerm t)
{
  ATerm y_91 = NULL;
  y_91 = t;
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL;
        t = term_w_33;
        c_92 = t;
        t = term_t_33;
        d_92 = t;
        t = term_x_33;
        t = b_16(c_92, d_92, t);
        b_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_92, term_v_40);
        t = geq_0_0(t);
        t = y_91;
        t = w_139(t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        t = y_91;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_139 (ATerm), ATerm t)
{
  ATerm i_92 = NULL;
  i_92 = t;
  {
    ATerm f_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_92 = NULL,l_92 = NULL,r_92 = NULL;
        t = term_w_33;
        l_92 = t;
        t = term_t_33;
        r_92 = t;
        t = term_x_33;
        t = b_16(l_92, r_92, t);
        k_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_92, term_r_37);
        t = geq_0_0(t);
        t = i_92;
        t = v_139(t);
        LocalPopChoice(h_43);
      }
    else
      {
        t = f_43;
        t = i_92;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_139 (ATerm), ATerm t)
{
  ATerm z_92 = NULL;
  z_92 = t;
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_93 = NULL,c_93 = NULL,f_93 = NULL;
        t = term_w_33;
        c_93 = t;
        t = term_t_33;
        f_93 = t;
        t = term_x_33;
        t = b_16(c_93, f_93, t);
        b_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_93, term_s_35);
        t = geq_0_0(t);
        t = z_92;
        t = x_139(t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        t = z_92;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm b_94 = NULL;
  if(match_cons(t, sym__2))
    {
      b_94 = ATgetArgument(t, 0);
      if((b_94 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm c_61, ATerm d_61, ATerm e_61, ATerm t)
{
  ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL,u_93 = NULL;
  o_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_61, d_61);
  {
    ATerm k_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_43 = ATgetArgument(t, 0);
            ATerm n_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_61, d_61);
        t = b_16(c_61, d_61, t);
        LocalPopChoice(l_43);
      }
    else
      {
        t = k_43;
        t = (ATerm) ATempty;
      }
  }
  q_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_93, e_61);
  t = m_15(e_4, q_93, e_61, t);
  p_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_61, d_61, p_93);
  t = lookup_table_0_1(c_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(d_61, p_93, u_93, t);
  t = o_93;
  return(t);
}
static ATerm g_14 (ATerm o_137 (ATerm), ATerm m_61, ATerm l_61, ATerm t)
{
  static ATerm f_4 (ATerm t);
  static ATerm f_4 (ATerm t)
  {
    ATerm d_94 = NULL,e_94 = NULL;
    if(match_cons(t, sym__2))
      {
        d_94 = ATgetArgument(t, 0);
        e_94 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_61, d_94, e_94);
    t = o_137(t);
    return(t);
  }
  t = l_61;
  t = map_1_0(f_4, t);
  return(t);
}
static ATerm h_14 (ATerm b_44, ATerm c_44, ATerm t)
{
  t = SSL_access(b_44, c_44);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_p_43;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_94 = NULL,g_94 = NULL;
      f_94 = t;
      t = (ATerm) ATinsert(ATempty, term_v_43);
      g_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_94, (ATerm) ATinsert(ATempty, term_v_43));
      t = h_14(f_94, g_94, t);
      LocalPopChoice(u_43);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_43;
      {
        ATerm z_43 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_44 = t;
            if((PushChoice() == 0))
              {
                ATerm h_94 = NULL,i_94 = NULL;
                h_94 = t;
                t = (ATerm) ATinsert(ATempty, term_a_34);
                i_94 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_94, (ATerm) ATinsert(ATempty, term_a_34));
                t = h_14(h_94, i_94, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_44;
              }
            t = debug_1_0(g_4, t);
            LocalPopChoice(d_44);
          }
        else
          {
            t = z_43;
            t = debug_1_0(h_4, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = debug_1_0(l_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = debug_1_0(o_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  g_95 = t;
  t = term_m_19;
  h_95 = t;
  t = (ATerm) ATinsert(ATempty, term_i_44);
  i_95 = t;
  t = SSL_printnl(h_95, i_95);
  t = g_95;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm j_95 = NULL,m_95 = NULL,n_95 = NULL;
  if(match_cons(t, sym__3))
    {
      j_95 = ATgetArgument(t, 0);
      m_95 = ATgetArgument(t, 1);
      n_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_14(j_95, m_95, n_95, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL;
  o_95 = t;
  t = term_m_19;
  p_95 = t;
  t = (ATerm) ATinsert(ATempty, term_p_44);
  q_95 = t;
  t = SSL_printnl(p_95, q_95);
  t = o_95;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL;
  r_95 = t;
  t = term_m_19;
  s_95 = t;
  t = (ATerm) ATinsert(ATempty, term_i_44);
  t_95 = t;
  t = SSL_printnl(s_95, t_95);
  t = r_95;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_94 = NULL,l_94 = NULL,n_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,d_95 = NULL;
  j_94 = t;
  t = if_verbose5_1_0(k_4, t);
  {
    ATerm q_44 = t;
    if((PushChoice() == 0))
      {
        ATerm e_95 = NULL,f_95 = NULL;
        t = term_s_44;
        e_95 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_94);
        f_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_44, (ATerm) ATmakeAppl(sym_Imported_1, j_94));
        t = b_16(e_95, f_95, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_44;
      }
  }
  n_94 = t;
  t = term_s_44;
  v_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_44, term_u_44, (ATerm) ATinsert(ATempty, j_94));
  t = lookup_table_0_1(v_94, t);
  d_95 = t;
  t = term_u_44;
  w_94 = t;
  t = (ATerm) ATinsert(ATempty, j_94);
  x_94 = t;
  t = d_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(w_94, x_94, y_94, t);
  t = n_94;
  t = if_verbose4_1_0(n_4, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_4, t);
  l_94 = t;
  t = term_s_44;
  u_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_44, l_94);
  t = g_14(u_4, u_94, l_94, t);
  t = if_verbose6_1_0(v_4, t);
  t = term_s_44;
  p_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_44, (ATerm)ATmakeAppl(sym_Imported_1, j_94), (ATerm) ATempty);
  t = lookup_table_0_1(p_94, t);
  t_94 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, j_94);
  q_94 = t;
  t = (ATerm) ATempty;
  r_94 = t;
  t = t_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(q_94, r_94, s_94, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_44, (ATerm)ATmakeAppl(sym_Imported_1, j_94), (ATerm) ATempty);
  t = if_verbose4_1_0(x_4, t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_95 = NULL,x_95 = NULL;
      t = term_w_33;
      v_95 = t;
      t = term_a_45;
      x_95 = t;
      t = term_b_45;
      t = b_16(v_95, x_95, t);
      LocalPopChoice(z_44);
    }
  else
    {
      t = w_44;
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_96 = NULL;
            t = term_g_45;
            c_96 = t;
            t = SSL_getenv(c_96);
            LocalPopChoice(f_45);
          }
        else
          {
            t = e_45;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = debug_1_0(b_5, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_l_45;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL;
  t = term_s_44;
  p_96 = t;
  t = term_p_45;
  q_96 = t;
  t = term_q_45;
  t = b_16(p_96, q_96, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_45 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_45;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = debug_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_s_45;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_96 = NULL;
  t = if_verbose5_1_0(a_5, t);
  g_96 = t;
  {
    ATerm t_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_96 = NULL,i_96 = NULL;
        t = term_s_44;
        h_96 = t;
        t = term_u_44;
        i_96 = t;
        t = term_z_45;
        t = b_16(h_96, i_96, t);
        LocalPopChoice(w_45);
      }
    else
      {
        t = t_45;
        {
          ATerm m_96 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_96 = t;
          t = repeat_2_0(c_5, _id, t);
          t = m_96;
        }
      }
  }
  t = g_96;
  t = if_verbose5_1_0(e_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = debug_1_0(h_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_a_46;
  return(t);
}
static ATerm i_98 (ATerm z_96, ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL;
  t = term_s_44;
  c_97 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, z_96);
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_44, (ATerm) ATmakeAppl(sym_Tool_1, z_96));
  t = b_16(c_97, d_97, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_46 = ATgetFirst((ATermList) t);
      if(match_cons(b_46, sym__2))
        {
          ATerm g_46 = ATgetArgument(b_46, 0);
          b_97 = ATgetArgument(b_46, 1);
        }
      else
        _fail(t);
      {
        ATerm e_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_97;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = debug_1_0(l_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_a_46;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_s_44;
  t = table_getlist_0_0(t);
  t = debug_1_0(w_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_h_46;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_97 = NULL,f_97 = NULL,j_97 = NULL;
      t = if_verbose5_1_0(g_5, t);
      t = xtc_load_0_0(t);
      j_97 = t;
      if(match_cons(t, sym__2))
        {
          e_97 = ATgetArgument(t, 0);
          f_97 = ATgetArgument(t, 1);
          {
            ATerm l_46 = t;
            int m_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_97 = NULL,t_97 = NULL,u_97 = NULL;
                t = term_s_44;
                t_97 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_97);
                u_97 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_44, (ATerm) ATmakeAppl(sym_Tool_1, e_97));
                t = b_16(t_97, u_97, t);
                {
                  static ATerm i_5 (ATerm t);
                  static ATerm i_5 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_97 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_97 != NULL) && (r_97 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_97 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_5, t);
                }
                t = not_null(r_97);
                LocalPopChoice(m_46);
              }
            else
              {
                t = l_46;
                t = i_98(j_97, t);
              }
          }
        }
      else
        {
          t = i_98(j_97, t);
        }
      t = if_verbose5_1_0(j_5, t);
      LocalPopChoice(k_46);
    }
  else
    {
      t = i_46;
      {
        ATerm e_98 = NULL,y_50 = NULL,z_50 = NULL;
        e_98 = t;
        t = term_m_19;
        y_50 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_46), e_98), term_n_46);
        z_50 = t;
        t = SSL_printnl(y_50, z_50);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_46), e_98), term_n_46);
        t = if_verbose5_1_0(r_5, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_q_46;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm w_148 (ATerm), ATerm t)
{
  ATerm r_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_98 = NULL,x_98 = NULL;
      x_98 = t;
      if(match_cons(t, sym_FILE_1))
        {
          v_98 = ATgetArgument(t, 0);
          {
            ATerm d_51 = NULL,v_11 = NULL;
            t = SSLgetAnnotations(x_98);
            d_51 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, v_98);
            v_11 = t;
            t = SSLsetAnnotations(v_11, d_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_98;
        }
      LocalPopChoice(t_46);
      {
        static ATerm a_6 (ATerm t);
        static ATerm a_6 (ATerm t)
        {
          ATerm y_98 = NULL,z_98 = NULL,g_99 = NULL;
          t = term_l_19;
          t = pass_verbose_0_0(t);
          y_98 = t;
          t = term_l_19;
          t = w_148(t);
          t = map_1_0(xtc_find_0_0, t);
          g_99 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_46, g_99);
          t = add_arg_flags_0_0(t);
          z_98 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_98, z_98);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(x_5, a_6, t);
      }
    }
  else
    {
      t = r_46;
      {
        static ATerm l_6 (ATerm t);
        static ATerm l_6 (ATerm t)
        {
          ATerm j_99 = NULL,k_99 = NULL,m_99 = NULL;
          t = term_l_19;
          t = pass_verbose_0_0(t);
          j_99 = t;
          t = term_l_19;
          t = w_148(t);
          t = map_1_0(xtc_find_0_0, t);
          m_99 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_46, m_99);
          t = add_arg_flags_0_0(t);
          k_99 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_99, k_99);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(g_6, l_6, t);
      }
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_y_46;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_y_46;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_47);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_f_47;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_f_47;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  ATerm j_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_100 = NULL,i_100 = NULL;
      i_100 = t;
      if(match_cons(t, sym_FILE_1))
        {
          h_100 = ATgetArgument(t, 0);
          {
            ATerm k_51 = NULL,x_11 = NULL;
            t = SSLgetAnnotations(i_100);
            k_51 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, h_100);
            x_11 = t;
            t = SSLsetAnnotations(x_11, k_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_100;
        }
      LocalPopChoice(l_47);
      t = xtc_transform_file_2_0(m_6, pass_verbose_0_0, t);
    }
  else
    {
      t = j_47;
      t = xtc_transform_term_2_0(n_6, pass_verbose_0_0, t);
    }
  {
    ATerm s_47 = t;
    int t_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_100 = NULL,v_100 = NULL;
        v_100 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_100 = ATgetArgument(t, 0);
            {
              ATerm r_51 = NULL,b_12 = NULL;
              t = SSLgetAnnotations(v_100);
              r_51 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_100);
              b_12 = t;
              t = SSLsetAnnotations(b_12, r_51);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_100;
          }
        LocalPopChoice(t_47);
        t = xtc_transform_file_2_0(o_6, pass_verbose_0_0, t);
      }
    else
      {
        t = s_47;
        t = xtc_transform_term_2_0(p_6, pass_verbose_0_0, t);
      }
  }
  t = xtc_ast2abox_1_0(q_6, t);
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_101 = NULL,f_101 = NULL;
        f_101 = t;
        if(match_cons(t, sym_FILE_1))
          {
            e_101 = ATgetArgument(t, 0);
            {
              ATerm y_51 = NULL,c_12 = NULL;
              t = SSLgetAnnotations(f_101);
              y_51 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_101);
              c_12 = t;
              t = SSLsetAnnotations(c_12, y_51);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_101;
          }
        LocalPopChoice(z_47);
        t = xtc_transform_file_2_0(r_6, pass_verbose_0_0, t);
      }
    else
      {
        t = y_47;
        t = xtc_transform_term_2_0(s_6, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm i_14 (ATerm f_60, ATerm g_60, ATerm e_60, ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL;
  x_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_60, g_60);
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_48 = ATgetArgument(t, 0);
            ATerm n_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_60, g_60);
        t = b_16(f_60, g_60, t);
        LocalPopChoice(b_48);
      }
    else
      {
        t = a_48;
        t = (ATerm) ATempty;
      }
  }
  y_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_60, g_60, (ATerm) ATinsert(CheckATermList(y_101), e_60));
  t = lookup_table_0_1(f_60, t);
  b_102 = t;
  t = (ATerm) ATinsert(CheckATermList(y_101), e_60);
  z_101 = t;
  t = b_102;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(g_60, z_101, a_102, t);
  t = x_101;
  return(t);
}
static ATerm j_14 (ATerm c_136 (ATerm), ATerm u_48, ATerm s_48, ATerm t)
{
  ATerm k_102 = NULL,l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL;
  n_102 = t;
  t = c_136(t);
  k_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_102, u_48, s_48);
  t = i_14(k_102, u_48, s_48, t);
  {
    ATerm o_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_102 = NULL;
        t = term_v_48;
        s_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_102, term_v_48);
        t = b_16(k_102, s_102, t);
        {
          ATerm w_48 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_48;
            }
        }
        LocalPopChoice(r_48);
      }
    else
      {
        t = o_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_102 = ATgetFirst((ATermList) t);
      m_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_102, term_v_48, (ATerm) ATinsert(CheckATermList(m_102), (ATerm) ATinsert(CheckATermList(l_102), u_48)));
  t = lookup_table_0_1(k_102, t);
  r_102 = t;
  t = term_v_48;
  o_102 = t;
  t = (ATerm) ATinsert(CheckATermList(m_102), (ATerm) ATinsert(CheckATermList(l_102), u_48));
  p_102 = t;
  t = r_102;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(o_102, p_102, q_102, t);
  t = n_102;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm u_102 = NULL;
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_102 = NULL,f_52 = NULL;
      y_102 = t;
      t = term_z_48;
      f_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_102, term_z_48);
      t = u_15(y_102, f_52, t);
      u_102 = t;
      t = SSL_mkstemp(u_102);
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
      {
        ATerm z_102 = NULL;
        t = term_a_49;
        z_102 = t;
        t = SSL_perror(z_102);
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
static ATerm t_6 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL,f_103 = NULL,g_103 = NULL;
  t = P__tmpdir_0_0(t);
  f_103 = t;
  t = term_c_49;
  g_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_103, term_c_49);
  t = u_15(f_103, g_103, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_103 = ATgetArgument(t, 0);
      b_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_19;
  d_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_103, term_l_19);
  t = j_14(t_6, c_103, d_103, t);
  t = SSL_close(b_103);
  t = c_103;
  return(t);
}
static ATerm k_14 (ATerm k_60, ATerm l_60, ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL;
  i_103 = t;
  {
    ATerm d_49 = t;
    int f_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_60, l_60);
        t = b_16(k_60, l_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_49 = ATgetFirst((ATermList) t);
            h_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_49);
        {
          ATerm j_103 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, k_60, l_60, h_103);
          t = lookup_table_0_1(k_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_103 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_16(l_60, h_103, j_103, t);
          t = (ATerm) ATmakeAppl(sym__3, k_60, l_60, h_103);
        }
      }
    else
      {
        t = d_49;
        {
          ATerm l_103 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_60, l_60);
          t = lookup_table_0_1(k_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_103 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_15(l_60, l_103, t);
          t = (ATerm) ATmakeAppl(sym__2, k_60, l_60);
        }
      }
  }
  t = i_103;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,v_103 = NULL;
  q_103 = t;
  t = z_135(t);
  p_103 = t;
  {
    ATerm h_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_103 = NULL;
        t = term_v_48;
        w_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_103, term_v_48);
        t = b_16(p_103, w_103, t);
        {
          ATerm k_49 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_49;
            }
        }
        LocalPopChoice(j_49);
      }
    else
      {
        t = h_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_103 = ATgetFirst((ATermList) t);
      n_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_103, term_v_48, n_103);
  t = lookup_table_0_1(p_103, t);
  v_103 = t;
  t = term_v_48;
  r_103 = t;
  t = v_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(r_103, n_103, s_103, t);
  t = o_103;
  {
    static ATerm w_6 (ATerm t);
    static ATerm w_6 (ATerm t)
    {
      ATerm x_103 = NULL;
      x_103 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_103, x_103);
      t = k_14(p_103, x_103, t);
      return(t);
    }
    t = map_1_0(w_6, t);
  }
  t = q_103;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  ATerm l_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_114(t);
      t = a_115(t);
      LocalPopChoice(m_49);
    }
  else
    {
      t = l_49;
      t = a_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_135 (ATerm), ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL;
  b_104 = t;
  t = y_135(t);
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_104, term_v_48);
  {
    ATerm n_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_104 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_49 = ATgetArgument(t, 0);
            ATerm u_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_48;
        m_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_104, term_v_48);
        t = b_16(a_104, m_104, t);
        LocalPopChoice(o_49);
      }
    else
      {
        t = n_49;
        t = (ATerm) ATempty;
      }
  }
  c_104 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_104, term_v_48, (ATerm) ATinsert(CheckATermList(c_104), (ATerm) ATempty));
  t = lookup_table_0_1(a_104, t);
  i_104 = t;
  t = term_v_48;
  d_104 = t;
  t = (ATerm) ATinsert(CheckATermList(c_104), (ATerm) ATempty);
  g_104 = t;
  t = i_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(d_104, g_104, h_104, t);
  t = b_104;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_b_49;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm b_105 = NULL;
  b_105 = t;
  {
    ATerm v_49 = t;
    int w_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_105);
        LocalPopChoice(w_49);
      }
    else
      {
        t = v_49;
        t = b_105;
      }
  }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_150 (ATerm), ATerm t)
{
  ATerm r_104 = NULL;
  static ATerm y_6 (ATerm t);
  static ATerm y_6 (ATerm t)
  {
    ATerm s_104 = NULL;
    s_104 = t;
    {
      ATerm x_49 = t;
      int z_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_104 = NULL,v_104 = NULL;
          t = term_b_49;
          u_104 = t;
          t = term_v_48;
          v_104 = t;
          t = term_b_50;
          t = b_16(u_104, v_104, t);
          LocalPopChoice(z_49);
        }
      else
        {
          t = x_49;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_104 != NULL) && (r_104 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_104 = ATgetFirst((ATermList) t);
        {
          ATerm c_50 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_104;
    t = map_1_0(z_6, t);
    t = s_104;
    t = end_scope_1_0(a_7, t);
    return(t);
  }
  t = begin_scope_1_0(x_6, t);
  t = restore_always_2_0(a_150, y_6, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL;
  m_105 = t;
  t = xtc_new_file_0_0(t);
  l_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_105, m_105);
  t = s_15(c_7, l_105, m_105, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_105);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      k_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_105;
  t = read_text_file_0_0(t);
  t = trim_1_0(d_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_50 = ATgetArgument(t, 0);
      if(match_cons(d_50, sym_Stream_1))
        {
          n_105 = ATgetArgument(d_50, 0);
        }
      else
        _fail(t);
      o_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(n_105, o_105, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_105 = NULL;
  v_105 = t;
  if(match_int(t, 10))
    {
      ATerm g_50 = t;
      int h_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_105(v_105, t);
          LocalPopChoice(h_50);
        }
      else
        {
          t = g_50;
          t = v_105;
        }
    }
  else
    {
      if(match_int(t, 13))
        {
          ATerm i_50 = t;
          int j_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_105(v_105, t);
              LocalPopChoice(j_50);
            }
          else
            {
              t = i_50;
              t = v_105;
            }
        }
      else
        {
          t = w_105(v_105, t);
        }
    }
  return(t);
}
static ATerm w_105 (ATerm p_105, ATerm t)
{
  t = p_105;
  if(match_int(t, 9))
    {
      t = p_105;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = p_105;
    }
  t = p_105;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_k_50;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL;
  t = xtc_temp_files_1_0(b_7, t);
  h_105 = t;
  t = term_m_19;
  i_105 = t;
  t = (ATerm) ATinsert(ATempty, term_n_50);
  j_105 = t;
  t = SSL_printnl(i_105, j_105);
  t = h_105;
  t = debug_1_0(f_7, t);
  return(t);
}
static ATerm v_110 (ATerm z_106, ATerm a_107, ATerm b_107, ATerm e_107, ATerm t)
{
  t = b_107;
  t = fetch_1_0(m_7, t);
  t = b_107;
  {
    ATerm o_50 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_50;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, z_106, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, a_107)), (ATerm) ATmakeAppl(sym_attrs_1, b_107));
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm t)
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
static ATerm w_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
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
static ATerm q_9 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm j_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL;
  o_107 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_107 = ATgetArgument(t, 0);
      s_107 = ATgetArgument(t, 1);
      t_107 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_107;
  if(match_cons(t, sym_attrs_1))
    {
      u_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_107;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_107;
      {
        ATerm u_50 = t;
        int v_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm w_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(v_50);
            t = p_107;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_107 = ATgetFirst((ATermList) t);
                l_107 = (ATerm) ATgetNext((ATermList) t);
                t = l_107;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = j_107;
                    {
                      ATerm x_50 = t;
                      int a_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm b_51 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_51);
                          {
                            ATerm c_51 = t;
                            int e_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_107;
                                t = fetch_1_0(v_7, t);
                                t = o_107;
                                LocalPopChoice(e_51);
                              }
                            else
                              {
                                t = c_51;
                                {
                                  ATerm f_51 = t;
                                  int g_51 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = u_107;
                                      t = fetch_1_0(y_7, t);
                                      t = o_107;
                                      LocalPopChoice(g_51);
                                    }
                                  else
                                    {
                                      t = f_51;
                                      t = o_107;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = x_50;
                          {
                            ATerm h_51 = t;
                            int i_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_107;
                                t = fetch_1_0(z_7, t);
                                t = o_107;
                                LocalPopChoice(i_51);
                              }
                            else
                              {
                                t = h_51;
                                {
                                  ATerm j_51 = t;
                                  int l_51 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = u_107;
                                      t = fetch_1_0(a_8, t);
                                      t = o_107;
                                      LocalPopChoice(l_51);
                                    }
                                  else
                                    {
                                      t = j_51;
                                      t = u_107;
                                      t = fetch_1_0(c_8, t);
                                      t = o_107;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = j_107;
                    {
                      ATerm m_51 = t;
                      int n_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_107;
                          t = fetch_1_0(e_8, t);
                          t = o_107;
                          LocalPopChoice(n_51);
                        }
                      else
                        {
                          t = m_51;
                          {
                            ATerm o_51 = t;
                            int p_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_107;
                                t = fetch_1_0(f_8, t);
                                t = o_107;
                                LocalPopChoice(p_51);
                              }
                            else
                              {
                                t = o_51;
                                t = u_107;
                                t = fetch_1_0(m_8, t);
                                t = o_107;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm q_51 = t;
                int s_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_107;
                    t = fetch_1_0(o_8, t);
                    t = o_107;
                    LocalPopChoice(s_51);
                  }
                else
                  {
                    t = q_51;
                    {
                      ATerm t_51 = t;
                      int u_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_107;
                          t = fetch_1_0(p_8, t);
                          t = o_107;
                          LocalPopChoice(u_51);
                        }
                      else
                        {
                          t = t_51;
                          t = u_107;
                          t = fetch_1_0(q_8, t);
                          t = o_107;
                        }
                    }
                  }
              }
          }
        else
          {
            t = u_50;
            if(match_cons(t, sym_cf_1))
              {
                m_107 = ATgetArgument(t, 0);
                t = m_107;
                if(match_cons(t, sym_sort_1))
                  {
                    n_107 = ATgetArgument(t, 0);
                    t = p_107;
                    {
                      ATerm v_51 = t;
                      int w_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_107;
                          t = fetch_1_0(r_8, t);
                          t = o_107;
                          LocalPopChoice(w_51);
                        }
                      else
                        {
                          t = v_51;
                          {
                            ATerm x_51 = t;
                            int z_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_107;
                                t = fetch_1_0(s_8, t);
                                t = o_107;
                                LocalPopChoice(z_51);
                              }
                            else
                              {
                                t = x_51;
                                {
                                  ATerm a_52 = t;
                                  int b_52 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_110(p_107, n_107, u_107, o_107, t);
                                      LocalPopChoice(b_52);
                                    }
                                  else
                                    {
                                      t = a_52;
                                      t = u_107;
                                      t = fetch_1_0(t_8, t);
                                      t = o_107;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = p_107;
                    {
                      ATerm c_52 = t;
                      int d_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_107;
                          t = fetch_1_0(u_8, t);
                          t = o_107;
                          LocalPopChoice(d_52);
                        }
                      else
                        {
                          t = c_52;
                          {
                            ATerm e_52 = t;
                            int g_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_107;
                                t = fetch_1_0(w_8, t);
                                t = o_107;
                                LocalPopChoice(g_52);
                              }
                            else
                              {
                                t = e_52;
                                t = u_107;
                                t = fetch_1_0(a_9, t);
                                t = o_107;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = p_107;
                {
                  ATerm h_52 = t;
                  int i_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_107;
                      t = fetch_1_0(b_9, t);
                      t = o_107;
                      LocalPopChoice(i_52);
                    }
                  else
                    {
                      t = h_52;
                      {
                        ATerm j_52 = t;
                        int l_52 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = u_107;
                            t = fetch_1_0(c_9, t);
                            t = o_107;
                            LocalPopChoice(l_52);
                          }
                        else
                          {
                            t = j_52;
                            t = u_107;
                            t = fetch_1_0(h_9, t);
                            t = o_107;
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
      t = s_107;
      if(match_cons(t, sym_cf_1))
        {
          m_107 = ATgetArgument(t, 0);
          t = m_107;
          if(match_cons(t, sym_sort_1))
            {
              n_107 = ATgetArgument(t, 0);
              t = p_107;
              {
                ATerm m_52 = t;
                int n_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_107;
                    t = fetch_1_0(j_9, t);
                    t = o_107;
                    LocalPopChoice(n_52);
                  }
                else
                  {
                    t = m_52;
                    {
                      ATerm o_52 = t;
                      int p_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_107;
                          t = fetch_1_0(k_9, t);
                          t = o_107;
                          LocalPopChoice(p_52);
                        }
                      else
                        {
                          t = o_52;
                          {
                            ATerm q_52 = t;
                            int r_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_110(p_107, n_107, u_107, o_107, t);
                                LocalPopChoice(r_52);
                              }
                            else
                              {
                                t = q_52;
                                t = u_107;
                                t = fetch_1_0(l_9, t);
                                t = o_107;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = p_107;
              {
                ATerm v_52 = t;
                int w_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_107;
                    t = fetch_1_0(m_9, t);
                    t = o_107;
                    LocalPopChoice(w_52);
                  }
                else
                  {
                    t = v_52;
                    {
                      ATerm x_52 = t;
                      int y_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_107;
                          t = fetch_1_0(n_9, t);
                          t = o_107;
                          LocalPopChoice(y_52);
                        }
                      else
                        {
                          t = x_52;
                          t = u_107;
                          t = fetch_1_0(o_9, t);
                          t = o_107;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = p_107;
          {
            ATerm z_52 = t;
            int a_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_107;
                t = fetch_1_0(p_9, t);
                t = o_107;
                LocalPopChoice(a_53);
              }
            else
              {
                t = z_52;
                {
                  ATerm b_53 = t;
                  int d_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_107;
                      t = fetch_1_0(q_9, t);
                      t = o_107;
                      LocalPopChoice(d_53);
                    }
                  else
                    {
                      t = b_53;
                      t = u_107;
                      t = fetch_1_0(s_9, t);
                      t = o_107;
                    }
                }
              }
          }
        }
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm m_148 (ATerm), ATerm t)
{
  ATerm w_110 = NULL,a_111 = NULL,d_111 = NULL,e_111 = NULL;
  t = number_nonterminals_0_0(t);
  e_111 = t;
  t = make_0_0(t);
  w_110 = t;
  t = e_111;
  {
    static ATerm t_9 (ATerm t);
    static ATerm t_9 (ATerm t)
    {
      static ATerm w_9 (ATerm t);
      static ATerm w_9 (ATerm t)
      {
        ATerm f_111 = NULL;
        t = term_l_19;
        t = m_148(t);
        f_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_111, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(w_9, t);
      return(t);
    }
    t = map_1_0(t_9, t);
  }
  t = concat_0_0(t);
  a_111 = t;
  t = term_l_19;
  t = m_148(t);
  d_111 = t;
  t = (ATerm) ATinsert(CheckATermList(a_111), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, d_111), w_110));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm g_111 = NULL;
  static ATerm z_9 (ATerm t);
  static ATerm z_9 (ATerm t)
  {
    t = b_123(t);
    if(((g_111 != NULL) && (g_111 != t)))
      _fail(t);
    else
      g_111 = t;
    return(t);
  }
  t = fetch_1_0(z_9, t);
  t = not_null(g_111);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL,h_112 = NULL;
  if(match_cons(t, sym_term_1))
    {
      h_112 = ATgetArgument(t, 0);
      t = h_112;
      if(match_cons(t, sym_appl_2))
        {
          d_112 = ATgetArgument(t, 0);
          x_111 = ATgetArgument(t, 1);
          {
            ATerm k_52 = NULL;
            t = d_112;
            if(match_cons(t, sym_uqlit_1))
              {
                w_111 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_111;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
              _fail(t);
            t = x_111;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_111 = ATgetFirst((ATermList) t);
                c_112 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_111;
            if(match_cons(t, sym_fun_1))
              {
                a_112 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_112;
            if(match_cons(t, sym_qlit_1))
              {
                b_112 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_112;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = SSL_explode_string(b_112);
            t = unquote_chars_2_0(d_10, e_10, t);
            k_52 = t;
            t = SSL_implode_string(k_52);
          }
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              d_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_112;
        }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          h_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_112;
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(a_10, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm j_113 = NULL,m_113 = NULL,n_113 = NULL,q_113 = NULL,r_113 = NULL;
  m_113 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      n_113 = ATgetArgument(t, 0);
      q_113 = ATgetArgument(t, 1);
      r_113 = ATgetArgument(t, 2);
      j_113 = ATgetArgument(t, 3);
      {
        ATerm g_114 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_53)), q_113), (ATerm) ATinsert(ATinsert(ATempty, term_f_53), (ATerm) ATmakeAppl(sym_lit_1, n_113)));
        t = concat_0_0(t);
        g_114 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, g_114, r_113, j_113);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm s_52 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          n_113 = ATgetArgument(t, 0);
          {
            ATerm h_53 = ATgetArgument(t, 1);
          }
          r_113 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_113;
      {
        ATerm i_53 = t;
        int j_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_52 = NULL;
            t = r_113;
            if(match_cons(t, sym_attrs_1))
              {
                t_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_52;
            t = get_cnstr_name_0_0(t);
            s_52 = t;
            LocalPopChoice(j_53);
            {
              static ATerm f_10 (ATerm t);
              static ATerm f_10 (ATerm t)
              {
                t = s_52;
                return(t);
              }
              t = n_113;
              t = symbols2pp_entries_1_0(f_10, t);
            }
          }
        else
          {
            t = i_53;
            {
              ATerm k_53 = t;
              int l_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(l_53);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = k_53;
                  {
                    ATerm m_53 = t;
                    int n_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_53 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm u_52 = NULL;
                            u_52 = t;
                            t = term_p_53;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(h_10, t);
                            t = u_52;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = o_53;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(n_53);
                      }
                    else
                      {
                        t = m_53;
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
static ATerm l_14 (ATerm x_44, ATerm y_44, ATerm t)
{
  t = SSL_mkterm(x_44, y_44);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm x_125 = NULL,y_125 = NULL,a_126 = NULL,b_126 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      a_126 = ATgetArgument(t, 0);
      b_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_126;
  if(match_cons(t, sym_alt_2))
    {
      x_125 = ATgetArgument(t, 0);
      y_125 = ATgetArgument(t, 1);
      {
        ATerm r_53 = t;
        int s_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_126 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, x_125, y_125);
            t = flat_alt_0_0(t);
            f_126 = t;
            t = (ATerm) ATinsert(CheckATermList(f_126), a_126);
            LocalPopChoice(s_53);
          }
        else
          {
            t = r_53;
            t = (ATerm) ATinsert(ATinsert(ATempty, b_126), a_126);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, b_126), a_126);
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL,o_114 = NULL;
  k_114 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_114;
    }
  else
    {
      ATerm u_114 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_114 = ATgetFirst((ATermList) t);
          m_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_114;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_114 = ATgetFirst((ATermList) t);
          o_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_114;
      t = pair_0_0(t);
      u_114 = t;
      t = (ATerm) ATinsert(CheckATermList(u_114), (ATerm) ATmakeAppl(sym__2, l_114, n_114));
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm s_118 = NULL,t_118 = NULL,u_118 = NULL,x_118 = NULL,r_12 = NULL;
  u_118 = t;
  if(match_cons(t, sym_lit_1))
    {
      t_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_118);
  s_118 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, t_118);
  r_12 = t;
  t = SSLsetAnnotations(r_12, s_118);
  if(match_cons(t, sym_lit_1))
    {
      x_118 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_53, (ATerm) ATmakeAppl(sym_S_1, x_118));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          x_118 = ATgetArgument(t, 0);
          {
            ATerm u_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, x_118);
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm l_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL,s_120 = NULL,t_120 = NULL,u_120 = NULL,g_13 = NULL,w_121 = NULL,w_120 = NULL,y_12 = NULL;
  u_120 = t;
  if(match_cons(t, sym__2))
    {
      q_120 = ATgetArgument(t, 0);
      r_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_120);
  p_120 = t;
  t = q_120;
  if(match_cons(t, sym_lit_1))
    {
      t_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_120);
  s_120 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, t_120);
  y_12 = t;
  t = SSLsetAnnotations(y_12, s_120);
  if(match_cons(t, sym_lit_1))
    {
      w_120 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_53, (ATerm) ATmakeAppl(sym_S_1, w_120));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_120 = ATgetArgument(t, 0);
          {
            ATerm v_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_120);
    }
  l_120 = t;
  t = r_120;
  t = _2_0(_id, o_10, t);
  if(match_cons(t, sym_lit_1))
    {
      w_121 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_53, (ATerm) ATmakeAppl(sym_S_1, w_121));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_121 = ATgetArgument(t, 0);
          {
            ATerm w_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_121);
    }
  o_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_120, o_120);
  g_13 = t;
  t = SSLsetAnnotations(g_13, p_120);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_z_53), (ATerm) ATinsert(ATinsert(ATempty, o_120), l_120));
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm s_121 = NULL,u_121 = NULL;
  s_121 = t;
  if(match_cons(t, sym_iter_1))
    {
      u_121 = ATgetArgument(t, 0);
      {
        ATerm o_55 = NULL,a_13 = NULL;
        t = SSLgetAnnotations(s_121);
        o_55 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, u_121);
        a_13 = t;
        t = SSLsetAnnotations(a_13, o_55);
      }
    }
  else
    {
      ATerm j_56 = NULL,b_13 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          u_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_121);
      j_56 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, u_121);
      b_13 = t;
      t = SSLsetAnnotations(b_13, j_56);
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm f_122 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      f_122 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_53, (ATerm) ATmakeAppl(sym_S_1, f_122));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_122 = ATgetArgument(t, 0);
          {
            ATerm a_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_122);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm b_116 = NULL,c_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL;
  ATerm b_54 = t;
  int c_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL,t_12 = NULL,n_118 = NULL,p_12 = NULL,g_118 = NULL,j_118 = NULL;
      t = reverse_acc_2_0(_id, i_10, t);
      b_117 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_116 = ATgetFirst((ATermList) t);
          t_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_117);
      r_116 = t;
      t = s_116;
      if(match_cons(t, sym__2))
        {
          y_116 = ATgetArgument(t, 0);
          z_116 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_116);
      w_116 = t;
      t = z_116;
      if(match_cons(t, sym_iter_1))
        {
          g_118 = ATgetArgument(t, 0);
          {
            ATerm c_53 = NULL,j_12 = NULL;
            t = SSLgetAnnotations(z_116);
            c_53 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, g_118);
            j_12 = t;
            t = SSLsetAnnotations(j_12, c_53);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              g_118 = ATgetArgument(t, 0);
              {
                ATerm q_53 = NULL,k_12 = NULL;
                t = SSLgetAnnotations(z_116);
                q_53 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, g_118);
                k_12 = t;
                t = SSLsetAnnotations(k_12, q_53);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  g_118 = ATgetArgument(t, 0);
                  j_118 = ATgetArgument(t, 1);
                  {
                    ATerm k_54 = NULL,l_12 = NULL;
                    t = SSLgetAnnotations(z_116);
                    k_54 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, g_118, j_118);
                    l_12 = t;
                    t = SSLsetAnnotations(l_12, k_54);
                  }
                }
              else
                {
                  ATerm f_55 = NULL,o_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      g_118 = ATgetArgument(t, 0);
                      j_118 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_116);
                  f_55 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, g_118, j_118);
                  o_12 = t;
                  t = SSLsetAnnotations(o_12, f_55);
                }
            }
        }
      a_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_116, a_117);
      p_12 = t;
      t = SSLsetAnnotations(p_12, w_116);
      if(match_cons(t, sym_lit_1))
        {
          n_118 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_53, (ATerm) ATmakeAppl(sym_S_1, n_118));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              n_118 = ATgetArgument(t, 0);
              {
                ATerm d_54 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, n_118);
        }
      u_116 = t;
      t = t_116;
      t = map_1_0(j_10, t);
      v_116 = t;
      t = (ATerm) ATinsert(CheckATermList(v_116), u_116);
      t_12 = t;
      t = SSLsetAnnotations(t_12, r_116);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_116 = ATgetFirst((ATermList) t);
          b_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_54 = t;
        if((PushChoice() == 0))
          {
            ATerm j_119 = NULL,k_119 = NULL,n_119 = NULL,p_119 = NULL,u_12 = NULL;
            p_119 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_119 = ATgetFirst((ATermList) t);
                n_119 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_119);
            j_119 = t;
            t = n_119;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_119), k_119);
            u_12 = t;
            t = SSLsetAnnotations(u_12, j_119);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_54;
          }
      }
      t = b_116;
      t = reverse_acc_2_0(_id, k_10, t);
      i_116 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, c_116), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, i_116)));
      LocalPopChoice(c_54);
    }
  else
    {
      t = b_54;
      {
        ATerm f_54 = t;
        int g_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL,v_12 = NULL,c_120 = NULL;
            t = reverse_acc_2_0(_id, l_10, t);
            x_119 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_119 = ATgetFirst((ATermList) t);
                w_119 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_119);
            u_119 = t;
            t = v_119;
            if(match_cons(t, sym_lit_1))
              {
                c_120 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_53, (ATerm) ATmakeAppl(sym_S_1, c_120));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    c_120 = ATgetArgument(t, 0);
                    {
                      ATerm h_54 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, c_120);
              }
            h_116 = t;
            t = w_119;
            {
              ATerm i_54 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_54;
                }
            }
            t = reverse_acc_2_0(_id, m_10, t);
            f_116 = t;
            t = (ATerm) ATinsert(CheckATermList(f_116), h_116);
            v_12 = t;
            t = SSLsetAnnotations(v_12, u_119);
            t = f_116;
            t = pair_0_0(t);
            t = map_1_0(n_10, t);
            g_116 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_116), g_116));
            LocalPopChoice(g_54);
          }
        else
          {
            t = f_54;
            t = map_1_0(p_10, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm j_54 = t;
  if((PushChoice() == 0))
    {
      ATerm x_122 = NULL,y_122 = NULL,c_123 = NULL,u_14 = NULL;
      c_123 = t;
      if(match_cons(t, sym_lit_1))
        {
          y_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_123);
      x_122 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, y_122);
      u_14 = t;
      t = SSLsetAnnotations(u_14, x_122);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_54;
    }
  return(t);
}
static ATerm p_124 (ATerm j_123, ATerm m_123, ATerm n_123, ATerm t)
{
  ATerm v_123 = NULL,p_17 = NULL;
  t = SSLgetAnnotations(j_123);
  v_123 = t;
  t = n_123;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_123, n_123);
  p_17 = t;
  t = SSLsetAnnotations(p_17, v_123);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm q_148 (ATerm), ATerm t)
{
  ATerm i_123 = NULL;
  static ATerm o_124 (ATerm t);
  static ATerm o_124 (ATerm t)
  {
    ATerm z_123 = NULL,a_124 = NULL,b_124 = NULL,c_124 = NULL,d_124 = NULL;
    z_123 = t;
    if(match_cons(t, sym__2))
      {
        a_124 = ATgetArgument(t, 0);
        b_124 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_124;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_124 = ATgetFirst((ATermList) t);
        d_124 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_54 = t;
          int m_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_124(z_123, a_124, b_124, t);
              LocalPopChoice(m_54);
            }
          else
            {
              t = l_54;
              {
                ATerm n_54 = t;
                int o_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_124 = NULL,i_124 = NULL,j_124 = NULL;
                    t = c_124;
                    t = q_148(t);
                    t = term_p_19;
                    j_124 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_124, term_p_19);
                    t = x_15(a_124, j_124, t);
                    i_124 = t;
                    t = (ATerm) ATmakeAppl(sym__2, i_124, d_124);
                    t = o_124(t);
                    h_124 = t;
                    t = (ATerm) ATinsert(CheckATermList(h_124), (ATerm) ATmakeAppl(sym__2, a_124, c_124));
                    LocalPopChoice(o_54);
                  }
                else
                  {
                    t = n_54;
                    {
                      ATerm n_124 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, a_124, d_124);
                      t = o_124(t);
                      n_124 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_124), c_124);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = p_124(z_123, a_124, b_124, t);
      }
    return(t);
  }
  i_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, i_123);
  t = o_124(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm y_124 = NULL,z_124 = NULL;
  z_124 = t;
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm r_54 = ATgetArgument(t, 0);
            y_124 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(q_54);
        t = y_124;
      }
    else
      {
        t = p_54;
        t = z_124;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(q_10, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm m_125 = NULL;
  m_125 = t;
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_125;
        {
          ATerm u_54 = t;
          if((PushChoice() == 0))
            {
              ATerm g_57 = NULL;
              g_57 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_57;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm v_54 = ATgetFirst((ATermList) t);
                      ATerm w_54 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_57;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_54;
            }
        }
        t = (ATerm) ATinsert(ATempty, m_125);
        LocalPopChoice(t_54);
      }
    else
      {
        t = s_54;
        t = m_125;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(r_10, t);
  t = concat_0_0(t);
  return(t);
}
ATerm _2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t)
{
  ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL,r_17 = NULL;
  u_125 = t;
  if(match_cons(t, sym__2))
    {
      q_125 = ATgetArgument(t, 0);
      r_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_125);
  p_125 = t;
  t = q_125;
  t = i_93(t);
  s_125 = t;
  t = r_125;
  t = j_93(t);
  t_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_125, t_125);
  r_17 = t;
  t = SSLsetAnnotations(r_17, p_125);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm d_129 = NULL,e_129 = NULL;
  ATerm x_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          d_129 = ATgetArgument(t, 0);
          e_129 = ATgetArgument(t, 1);
          {
            ATerm z_54 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_54);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, d_129, e_129);
    }
  else
    {
      t = x_54;
      if(match_cons(t, sym_iter_n_2))
        {
          d_129 = ATgetArgument(t, 0);
          {
            ATerm a_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, d_129);
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL;
  q_59 = t;
  if(match_cons(t, sym_Arg_1))
    {
      p_59 = ATgetArgument(t, 0);
      {
        ATerm b_55 = t;
        int c_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_60 = NULL,u_25 = NULL;
            t = SSLgetAnnotations(q_59);
            j_60 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, p_59);
            u_25 = t;
            t = SSLsetAnnotations(u_25, j_60);
            t = term_d_55;
            LocalPopChoice(c_55);
          }
        else
          {
            t = b_55;
            t = q_59;
          }
      }
    }
  else
    {
      t = q_59;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm n_148 (ATerm), ATerm t)
{
  ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL;
  static ATerm u_130 (ATerm t);
  static ATerm u_130 (ATerm t)
  {
    static ATerm w_130 (ATerm s_128, ATerm t_128, ATerm u_128, ATerm t);
    static ATerm x_130 (ATerm i_129, ATerm j_129, ATerm k_129, ATerm l_129, ATerm t);
    static ATerm w_130 (ATerm s_128, ATerm t_128, ATerm u_128, ATerm t)
    {
      ATerm v_128 = NULL,y_128 = NULL,r_25 = NULL;
      t = SSLgetAnnotations(s_128);
      v_128 = t;
      t = u_128;
      t = _2_0(_id, u_10, t);
      y_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_128, y_128);
      r_25 = t;
      t = SSLsetAnnotations(r_25, v_128);
      t = u_130(t);
      return(t);
    }
    static ATerm x_130 (ATerm i_129, ATerm j_129, ATerm k_129, ATerm l_129, ATerm t)
    {
      ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL,x_129 = NULL,y_129 = NULL,z_129 = NULL;
      t = SSL_explode_term(l_129);
      if(match_cons(t, sym__2))
        {
          x_129 = ATgetArgument(t, 0);
          y_129 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, j_129, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, k_129, x_129)));
      t = conc_0_0(t);
      t_129 = t;
      t = y_129;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      z_129 = t;
      t = make_0_0(t);
      u_129 = t;
      t = z_129;
      {
        static ATerm v_10 (ATerm t);
        static ATerm v_10 (ATerm t)
        {
          ATerm b_130 = NULL;
          b_130 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_129, t_129), b_130);
          t = u_130(t);
          return(t);
        }
        t = map_1_0(v_10, t);
      }
      t = concat_0_0(t);
      v_129 = t;
      t = (ATerm) ATinsert(CheckATermList(v_129), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, i_129, t_129), u_129));
      return(t);
    }
    ATerm c_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL,j_130 = NULL,k_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL;
    h_130 = t;
    if(match_cons(t, sym__2))
      {
        i_130 = ATgetArgument(t, 0);
        m_130 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = m_130;
    {
      ATerm e_55 = t;
      int g_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm h_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(g_55);
          t = (ATerm) ATempty;
        }
      else
        {
          t = e_55;
          if(match_cons(t, sym__2))
            {
              n_130 = ATgetArgument(t, 0);
              o_130 = ATgetArgument(t, 1);
              t = o_130;
              {
                ATerm i_55 = t;
                int j_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm k_55 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_55);
                    t = i_130;
                    {
                      ATerm l_55 = t;
                      int m_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm n_55 = ATgetArgument(t, 0);
                              ATerm p_55 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_55);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = l_55;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = i_55;
                    {
                      ATerm q_55 = t;
                      int r_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm s_55 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(r_55);
                          t = i_130;
                          {
                            ATerm t_55 = t;
                            int u_55 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm v_55 = ATgetArgument(t, 0);
                                    ATerm w_55 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(u_55);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = t_55;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = q_55;
                          if(match_cons(t, sym_alt_2))
                            {
                              g_130 = ATgetArgument(t, 0);
                              c_130 = ATgetArgument(t, 1);
                              t = c_130;
                              if(match_cons(t, sym_alt_2))
                                {
                                  e_130 = ATgetArgument(t, 0);
                                  f_130 = ATgetArgument(t, 1);
                                  t = i_130;
                                  if(match_cons(t, sym__2))
                                    {
                                      j_130 = ATgetArgument(t, 0);
                                      k_130 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_55 = t;
                                        int y_55 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm p_58 = NULL,r_58 = NULL,t_58 = NULL,v_58 = NULL,y_58 = NULL,b_59 = NULL,f_59 = NULL,g_59 = NULL,v_25 = NULL;
                                            t = j_130;
                                            if(((l_127 != NULL) && (l_127 != t)))
                                              _fail(t);
                                            else
                                              l_127 = t;
                                            t = k_130;
                                            if(((m_127 != NULL) && (m_127 != t)))
                                              _fail(t);
                                            else
                                              m_127 = t;
                                            t = n_130;
                                            if(((n_127 != NULL) && (n_127 != t)))
                                              _fail(t);
                                            else
                                              n_127 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, g_130, (ATerm) ATmakeAppl(sym_alt_2, e_130, f_130));
                                            t = flat_alt_0_0(t);
                                            p_58 = t;
                                            t = term_z_55;
                                            t_58 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_z_55, p_58);
                                            t = l_14(t_58, p_58, t);
                                            r_58 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_130, k_130), (ATerm) ATmakeAppl(sym__2, n_130, r_58));
                                            t = u_130(t);
                                            g_59 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                y_58 = ATgetFirst((ATermList) t);
                                                b_59 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(g_59);
                                            v_58 = t;
                                            t = y_58;
                                            t = topdown_1_0(w_10, t);
                                            f_59 = t;
                                            t = (ATerm) ATinsert(CheckATermList(b_59), f_59);
                                            v_25 = t;
                                            t = SSLsetAnnotations(v_25, v_58);
                                            LocalPopChoice(y_55);
                                          }
                                        else
                                          {
                                            t = x_55;
                                            {
                                              ATerm a_56 = t;
                                              int b_56 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = w_130(h_130, i_130, m_130, t);
                                                  LocalPopChoice(b_56);
                                                }
                                              else
                                                {
                                                  t = a_56;
                                                  t = x_130(j_130, k_130, n_130, o_130, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = w_130(h_130, i_130, m_130, t);
                                    }
                                }
                              else
                                {
                                  t = i_130;
                                  if(match_cons(t, sym__2))
                                    {
                                      j_130 = ATgetArgument(t, 0);
                                      k_130 = ATgetArgument(t, 1);
                                      {
                                        ATerm c_56 = t;
                                        int d_56 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = w_130(h_130, i_130, m_130, t);
                                            LocalPopChoice(d_56);
                                          }
                                        else
                                          {
                                            t = c_56;
                                            t = x_130(j_130, k_130, n_130, o_130, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = w_130(h_130, i_130, m_130, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  g_130 = ATgetArgument(t, 0);
                                  t = i_130;
                                  if(match_cons(t, sym__2))
                                    {
                                      j_130 = ATgetArgument(t, 0);
                                      k_130 = ATgetArgument(t, 1);
                                      {
                                        ATerm e_56 = t;
                                        int f_56 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = w_130(h_130, i_130, m_130, t);
                                            LocalPopChoice(f_56);
                                          }
                                        else
                                          {
                                            t = e_56;
                                            {
                                              ATerm g_56 = t;
                                              int h_56 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_130, k_130), (ATerm) ATmakeAppl(sym__2, n_130, g_130));
                                                  t = u_130(t);
                                                  LocalPopChoice(h_56);
                                                }
                                              else
                                                {
                                                  t = g_56;
                                                  t = x_130(j_130, k_130, n_130, o_130, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = w_130(h_130, i_130, m_130, t);
                                    }
                                }
                              else
                                {
                                  t = i_130;
                                  if(match_cons(t, sym__2))
                                    {
                                      j_130 = ATgetArgument(t, 0);
                                      k_130 = ATgetArgument(t, 1);
                                      {
                                        ATerm i_56 = t;
                                        int k_56 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = w_130(h_130, i_130, m_130, t);
                                            LocalPopChoice(k_56);
                                          }
                                        else
                                          {
                                            t = i_56;
                                            t = x_130(j_130, k_130, n_130, o_130, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = w_130(h_130, i_130, m_130, t);
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
              t = i_130;
              t = w_130(h_130, i_130, m_130, t);
            }
        }
    }
    return(t);
  }
  p_127 = t;
  t = term_l_19;
  t = n_148(t);
  o_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_127, p_127);
  t = u_130(t);
  return(t);
}
static ATerm a_133 (ATerm i_131, ATerm j_131, ATerm k_131, ATerm t)
{
  ATerm l_131 = NULL,n_131 = NULL;
  t = k_131;
  {
    ATerm l_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_60 = NULL,y_60 = NULL;
        t = j_131;
        t = pp_table_get_0_0(t);
        y_60 = t;
        t = SSL_explode_term(y_60);
        if(match_cons(t, sym__2))
          {
            ATerm n_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_56) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_56 = ATgetArgument(t, 1);
              if(((ATgetType(o_56) == AT_LIST) && !(ATisEmpty(o_56))))
                {
                  ATerm p_56 = ATgetFirst((ATermList) o_56);
                  ATerm q_56 = (ATerm) ATgetNext((ATermList) o_56);
                  if(((ATgetType(q_56) == AT_LIST) && !(ATisEmpty(q_56))))
                    {
                      w_60 = ATgetFirst((ATermList) q_56);
                      {
                        ATerm r_56 = (ATerm) ATgetNext((ATermList) q_56);
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
        LocalPopChoice(m_56);
      }
    else
      {
        t = l_56;
        {
          ATerm p_131 = NULL,q_131 = NULL,r_131 = NULL,s_131 = NULL,t_131 = NULL,u_131 = NULL,z_60 = NULL,a_61 = NULL,x_131 = NULL,y_131 = NULL,z_131 = NULL,b_132 = NULL,e_26 = NULL;
          t = j_131;
          t = reverse_acc_2_0(_id, y_10, t);
          u_131 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_131 = ATgetFirst((ATermList) t);
              t_131 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_131);
          r_131 = t;
          t = t_131;
          t = reverse_acc_2_0(_id, z_10, t);
          l_131 = t;
          t = (ATerm) ATinsert(CheckATermList(l_131), s_131);
          e_26 = t;
          t = SSLsetAnnotations(e_26, r_131);
          t = l_131;
          t = pp_table_get_0_0(t);
          q_131 = t;
          t = SSL_explode_term(q_131);
          if(match_cons(t, sym__2))
            {
              ATerm s_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_56) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm t_56 = ATgetArgument(t, 1);
                if(((ATgetType(t_56) == AT_LIST) && !(ATisEmpty(t_56))))
                  {
                    p_131 = ATgetFirst((ATermList) t_56);
                    {
                      ATerm u_56 = (ATerm) ATgetNext((ATermList) t_56);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = p_131;
          if(match_cons(t, sym_Path_2))
            {
              b_132 = ATgetArgument(t, 0);
              x_131 = ATgetArgument(t, 1);
              t = x_131;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_131 = ATgetFirst((ATermList) t);
                  z_131 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_131;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, b_132, (ATerm) ATinsert(ATempty, y_131));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  b_132 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, b_132, (ATerm) ATempty);
            }
          n_131 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_131, i_131);
          {
            static ATerm a_11 (ATerm t);
            static ATerm a_11 (ATerm t)
            {
              t = n_131;
              return(t);
            }
            t = symbol2abox_1_0(a_11, t);
          }
          t = map_1_0(b_11, t);
          t = j_131;
          t = pp_table_get_0_0(t);
          a_61 = t;
          t = SSL_explode_term(a_61);
          if(match_cons(t, sym__2))
            {
              ATerm v_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_56) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm w_56 = ATgetArgument(t, 1);
                if(((ATgetType(w_56) == AT_LIST) && !(ATisEmpty(w_56))))
                  {
                    ATerm x_56 = ATgetFirst((ATermList) w_56);
                    ATerm y_56 = (ATerm) ATgetNext((ATermList) w_56);
                    if(((ATgetType(y_56) == AT_LIST) && !(ATisEmpty(y_56))))
                      {
                        z_60 = ATgetFirst((ATermList) y_56);
                        {
                          ATerm z_56 = (ATerm) ATgetNext((ATermList) y_56);
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
          t = z_60;
        }
      }
  }
  return(t);
}
static ATerm b_133 (ATerm h_132, ATerm i_132, ATerm j_132, ATerm k_132, ATerm l_132, ATerm t)
{
  t = l_132;
  {
    ATerm a_57 = t;
    int b_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_61 = NULL,g_61 = NULL;
        t = k_132;
        t = pp_table_get_0_0(t);
        g_61 = t;
        t = SSL_explode_term(g_61);
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
                      f_61 = ATgetFirst((ATermList) f_57);
                      {
                        ATerm h_57 = (ATerm) ATgetNext((ATermList) f_57);
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
        t = f_61;
        LocalPopChoice(b_57);
      }
    else
      {
        t = a_57;
        {
          ATerm i_61 = NULL,n_61 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, h_132, i_132, j_132);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(d_11, t);
          t = k_132;
          t = pp_table_get_0_0(t);
          n_61 = t;
          t = SSL_explode_term(n_61);
          if(match_cons(t, sym__2))
            {
              ATerm i_57 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_57) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm j_57 = ATgetArgument(t, 1);
                if(((ATgetType(j_57) == AT_LIST) && !(ATisEmpty(j_57))))
                  {
                    ATerm k_57 = ATgetFirst((ATermList) j_57);
                    ATerm l_57 = (ATerm) ATgetNext((ATermList) j_57);
                    if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
                      {
                        i_61 = ATgetFirst((ATermList) l_57);
                        {
                          ATerm m_57 = (ATerm) ATgetNext((ATermList) l_57);
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
          t = i_61;
        }
      }
  }
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm f_132 = NULL,g_132 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_132 = ATgetArgument(t, 0);
      g_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_13(f_132, g_132, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm q_132 = NULL,t_132 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      q_132 = ATgetArgument(t, 0);
      t_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_13(q_132, t_132, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm u_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,y_132 = NULL,z_132 = NULL;
  u_132 = t;
  if(match_cons(t, sym__2))
    {
      v_132 = ATgetArgument(t, 0);
      z_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_132;
  if(match_cons(t, sym_prod_3))
    {
      w_132 = ATgetArgument(t, 0);
      x_132 = ATgetArgument(t, 1);
      y_132 = ATgetArgument(t, 2);
      {
        ATerm n_57 = t;
        int o_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_133(v_132, z_132, u_132, t);
            LocalPopChoice(o_57);
          }
        else
          {
            t = n_57;
            t = b_133(w_132, x_132, y_132, z_132, u_132, t);
          }
      }
    }
  else
    {
      t = a_133(v_132, z_132, u_132, t);
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_57 = ATgetFirst((ATermList) t);
      if(((ATgetType(p_57) != AT_INT) || (ATgetInt((ATermInt) p_57) != 34)))
        _fail(t);
      {
        ATerm q_57 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(q_57) != AT_LIST) || !(ATisEmpty(q_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm c_133 = NULL,d_133 = NULL,j_133 = NULL;
  j_133 = t;
  t = SSL_explode_string(j_133);
  c_133 = t;
  {
    ATerm r_57 = t;
    if((PushChoice() == 0))
      {
        ATerm k_133 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_133 = ATgetFirst((ATermList) t);
            {
              ATerm s_57 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = k_133;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_57;
      }
  }
  t = c_133;
  {
    ATerm t_57 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(e_11, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_57;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_57)), c_133), (ATerm) ATinsert(ATempty, term_u_57));
  t = concat_0_0(t);
  d_133 = t;
  t = SSL_implode_string(d_133);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm m_133 = NULL,q_133 = NULL;
  ATerm v_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm x_57 = ATgetArgument(t, 0);
          ATerm y_57 = ATgetArgument(t, 1);
          ATerm z_57 = ATgetArgument(t, 2);
          m_133 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(w_57);
      {
        ATerm s_133 = NULL;
        t = m_133;
        {
          static ATerm f_11 (ATerm t);
          static ATerm f_11 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((s_133 != NULL) && (s_133 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_133 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(f_11, t);
        }
        t = not_null(s_133);
      }
    }
  else
    {
      t = v_57;
      {
        ATerm u_133 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm a_58 = ATgetArgument(t, 0);
            ATerm b_58 = ATgetArgument(t, 1);
            q_133 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = q_133;
        {
          static ATerm i_11 (ATerm t);
          static ATerm i_11 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((u_133 != NULL) && (u_133 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_133 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(i_11, t);
        }
        t = not_null(u_133);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm z_133 = NULL,a_134 = NULL,g_134 = NULL,i_134 = NULL,j_134 = NULL,k_134 = NULL,l_134 = NULL,m_134 = NULL;
  if(match_cons(t, sym__2))
    {
      i_134 = ATgetArgument(t, 0);
      m_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_134;
  if(match_cons(t, sym_prod_fun_4))
    {
      j_134 = ATgetArgument(t, 0);
      k_134 = ATgetArgument(t, 1);
      l_134 = ATgetArgument(t, 2);
      a_134 = ATgetArgument(t, 3);
      t = a_134;
      if(match_cons(t, sym_attrs_1))
        {
          z_133 = ATgetArgument(t, 0);
          {
            ATerm s_134 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, z_133, m_134);
            t = conc_0_0(t);
            s_134 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, j_134, k_134, l_134, (ATerm) ATmakeAppl(sym_attrs_1, s_134));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, j_134, k_134, l_134, (ATerm) ATmakeAppl(sym_attrs_1, m_134));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          j_134 = ATgetArgument(t, 0);
          k_134 = ATgetArgument(t, 1);
          l_134 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_134;
      if(match_cons(t, sym_attrs_1))
        {
          g_134 = ATgetArgument(t, 0);
          {
            ATerm b_135 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, g_134, m_134);
            t = conc_0_0(t);
            b_135 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, j_134, k_134, (ATerm) ATmakeAppl(sym_attrs_1, b_135));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, j_134, k_134, (ATerm) ATmakeAppl(sym_attrs_1, m_134));
        }
    }
  return(t);
}
ATerm escape_chars_1_0 (ATerm e_133 (ATerm), ATerm t)
{
  static ATerm e_136 (ATerm t);
  static ATerm e_136 (ATerm t)
  {
    ATerm c_58 = t;
    int d_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_135 = NULL,l_135 = NULL,m_135 = NULL,n_135 = NULL,o_135 = NULL,n_26 = NULL;
        t = e_133(t);
        o_135 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_135 = ATgetFirst((ATermList) t);
            m_135 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_135);
        k_135 = t;
        t = m_135;
        t = Cons_2_0(_id, e_136, t);
        n_135 = t;
        t = (ATerm) ATinsert(CheckATermList(n_135), l_135);
        n_26 = t;
        t = SSLsetAnnotations(n_26, k_135);
        LocalPopChoice(d_58);
      }
    else
      {
        t = c_58;
        {
          ATerm a_136 = NULL,b_136 = NULL,d_136 = NULL;
          d_136 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_136 = ATgetFirst((ATermList) t);
              b_136 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm w_61 = NULL,i_62 = NULL,u_26 = NULL;
                t = SSLgetAnnotations(d_136);
                w_61 = t;
                t = b_136;
                t = e_136(t);
                i_62 = t;
                t = (ATerm) ATinsert(CheckATermList(i_62), a_136);
                u_26 = t;
                t = SSLsetAnnotations(u_26, w_61);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_136;
            }
        }
      }
    return(t);
  }
  t = e_136(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm b_63 = NULL,e_63 = NULL,f_63 = NULL;
  b_63 = t;
  if(match_int(t, 34))
    {
      ATerm e_58 = t;
      int f_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_u_57), term_g_58);
          LocalPopChoice(f_58);
        }
      else
        {
          t = e_58;
          t = (ATerm) ATinsert(ATempty, b_63);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm h_58 = t;
          int i_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_g_58), term_g_58);
              LocalPopChoice(i_58);
            }
          else
            {
              t = h_58;
              t = (ATerm) ATinsert(ATempty, b_63);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_63 = ATgetFirst((ATermList) t);
              f_63 = (ATerm) ATgetNext((ATermList) t);
              t = e_63;
              if(match_int(t, 34))
                {
                  ATerm j_58 = t;
                  int k_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, b_63);
                      LocalPopChoice(k_58);
                    }
                  else
                    {
                      t = j_58;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(f_63), term_u_57), term_g_58);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm l_58 = t;
                      int m_58 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, b_63);
                          LocalPopChoice(m_58);
                        }
                      else
                        {
                          t = l_58;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(f_63), term_g_58), term_g_58);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm n_58 = t;
                          int o_58 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, b_63);
                              LocalPopChoice(o_58);
                            }
                          else
                            {
                              t = n_58;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(f_63), term_q_58), term_g_58);
                            }
                        }
                      else
                        {
                          if(match_int(t, 13))
                            {
                              ATerm s_58 = t;
                              int u_58 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, b_63);
                                  LocalPopChoice(u_58);
                                }
                              else
                                {
                                  t = s_58;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(f_63), term_w_58), term_g_58);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, b_63);
                            }
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, b_63);
            }
        }
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL;
  h_67 = t;
  if(match_int(t, 34))
    {
      ATerm x_58 = t;
      int z_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_u_57), term_g_58);
          LocalPopChoice(z_58);
        }
      else
        {
          t = x_58;
          t = (ATerm) ATinsert(ATempty, h_67);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm a_59 = t;
          int c_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_g_58), term_g_58);
              LocalPopChoice(c_59);
            }
          else
            {
              t = a_59;
              t = (ATerm) ATinsert(ATempty, h_67);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_67 = ATgetFirst((ATermList) t);
              j_67 = (ATerm) ATgetNext((ATermList) t);
              t = i_67;
              if(match_int(t, 34))
                {
                  ATerm d_59 = t;
                  int e_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, h_67);
                      LocalPopChoice(e_59);
                    }
                  else
                    {
                      t = d_59;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(j_67), term_u_57), term_g_58);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm h_59 = t;
                      int i_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, h_67);
                          LocalPopChoice(i_59);
                        }
                      else
                        {
                          t = h_59;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(j_67), term_g_58), term_g_58);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm j_59 = t;
                          int k_59 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, h_67);
                              LocalPopChoice(k_59);
                            }
                          else
                            {
                              t = j_59;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(j_67), term_q_58), term_g_58);
                            }
                        }
                      else
                        {
                          if(match_int(t, 13))
                            {
                              ATerm l_59 = t;
                              int m_59 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, h_67);
                                  LocalPopChoice(m_59);
                                }
                              else
                                {
                                  t = l_59;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(j_67), term_w_58), term_g_58);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, h_67);
                            }
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, h_67);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm n_59 = t;
  int o_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_137 = NULL,v_62 = NULL;
      f_137 = t;
      t = SSL_explode_string(f_137);
      t = map_1_0(j_11, t);
      t = concat_0_0(t);
      v_62 = t;
      t = SSL_implode_string(v_62);
      LocalPopChoice(o_59);
    }
  else
    {
      t = n_59;
      {
        ATerm b_67 = NULL,c_67 = NULL;
        c_67 = t;
        t = SSL_explode_string(c_67);
        t = escape_chars_1_0(k_11, t);
        b_67 = t;
        t = SSL_implode_string(b_67);
      }
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm r_59 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_59;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm x_137 = NULL,y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,o_68 = NULL,p_68 = NULL,b_27 = NULL;
  t = filter_1_0(m_11, t);
  d_138 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_138 = ATgetFirst((ATermList) t);
      b_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_138);
  z_137 = t;
  t = SSL_explode_string(a_138);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_138 = ATgetFirst((ATermList) t);
      {
        ATerm s_59 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_138;
  {
    ATerm t_59 = t;
    int u_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_59, c_138);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, c_138, term_w_59);
        t = leq_0_0(t);
        t = c_138;
        LocalPopChoice(u_59);
      }
    else
      {
        t = t_59;
        t = (ATerm) ATmakeAppl(sym__2, term_x_59, c_138);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, c_138, term_y_59);
        t = leq_0_0(t);
        t = c_138;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(b_138), a_138);
  b_27 = t;
  t = SSLsetAnnotations(b_27, z_137);
  p_68 = t;
  t = term_z_59;
  o_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_59, p_68);
  t = r_14(o_68, p_68, t);
  y_137 = t;
  t = SSL_concat_strings(y_137);
  x_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_137, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_60), term_r_60), term_q_60), term_p_60), term_o_60), term_n_60), term_m_60), term_i_60), term_h_60), term_d_60), term_c_60), term_b_60), term_a_60));
  {
    ATerm t_60 = t;
    if((PushChoice() == 0))
      {
        ATerm e_138 = NULL,f_138 = NULL;
        if(match_cons(t, sym__2))
          {
            e_138 = ATgetArgument(t, 0);
            f_138 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_138;
        {
          static ATerm n_11 (ATerm t);
          static ATerm n_11 (ATerm t)
          {
            if((e_138 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(n_11, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, e_138, f_138);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_60;
      }
  }
  t = x_137;
  t = escape_0_0(t);
  u_68 = t;
  t = SSL_explode_string(u_68);
  v_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_57)), v_68), (ATerm) ATinsert(ATempty, term_u_57));
  t = concat_0_0(t);
  t_68 = t;
  t = SSL_implode_string(t_68);
  return(t);
}
static ATerm r_138 (ATerm j_138, ATerm t)
{
  ATerm k_138 = NULL;
  t = SSL_explode_term(j_138);
  if(match_cons(t, sym__2))
    {
      ATerm u_60 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_60) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_138;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_138 = NULL,n_138 = NULL,o_138 = NULL;
  o_138 = t;
  if(match_cons(t, sym__2))
    {
      m_138 = ATgetArgument(t, 0);
      n_138 = ATgetArgument(t, 1);
      {
        ATerm v_60 = t;
        int x_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_11 (ATerm t);
            static ATerm p_11 (ATerm t)
            {
              t = n_138;
              return(t);
            }
            t = m_138;
            t = at_end_1_0(p_11, t);
            LocalPopChoice(x_60);
          }
        else
          {
            t = v_60;
            t = r_138(o_138, t);
          }
      }
    }
  else
    {
      t = r_138(o_138, t);
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_b_61);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_61);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_61);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm k_139 = NULL,l_139 = NULL,m_139 = NULL;
  m_139 = t;
  if(match_cons(t, sym_cf_1))
    {
      k_139 = ATgetArgument(t, 0);
      t = k_139;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          k_139 = ATgetArgument(t, 0);
          t = k_139;
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
                  k_139 = ATgetArgument(t, 0);
                  l_139 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(l_139), k_139);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      k_139 = ATgetArgument(t, 0);
                      t = k_139;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(q_11, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          k_139 = ATgetArgument(t, 0);
                          t = k_139;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(s_11, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              k_139 = ATgetArgument(t, 0);
                              t = k_139;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(u_11, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  k_139 = ATgetArgument(t, 0);
                                  l_139 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_140 = NULL,c_140 = NULL;
                                    t = k_139;
                                    t = Sym2Strs_0_0(t);
                                    b_140 = t;
                                    t = l_139;
                                    t = Sym2Strs_0_0(t);
                                    c_140 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_61)), c_140), b_140);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      k_139 = ATgetArgument(t, 0);
                                      l_139 = ATgetArgument(t, 1);
                                      {
                                        ATerm f_140 = NULL,g_140 = NULL;
                                        t = k_139;
                                        t = Sym2Strs_0_0(t);
                                        f_140 = t;
                                        t = l_139;
                                        t = Sym2Strs_0_0(t);
                                        g_140 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_61)), g_140), f_140);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm o_61 = t;
                                      int p_61 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              k_139 = ATgetArgument(t, 0);
                                              {
                                                ATerm q_61 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(p_61);
                                          {
                                            ATerm i_140 = NULL;
                                            t = k_139;
                                            t = Sym2Strs_0_0(t);
                                            i_140 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_61)), i_140);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = o_61;
                                          {
                                            ATerm t_61 = t;
                                            int u_61 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    k_139 = ATgetArgument(t, 0);
                                                    l_139 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_61 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(u_61);
                                                {
                                                  ATerm m_140 = NULL,n_140 = NULL;
                                                  t = k_139;
                                                  t = Sym2Strs_0_0(t);
                                                  m_140 = t;
                                                  t = l_139;
                                                  t = Sym2Strs_0_0(t);
                                                  n_140 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_61)), n_140), m_140);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = t_61;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    k_139 = ATgetArgument(t, 0);
                                                    l_139 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_140 = NULL,r_140 = NULL;
                                                      t = k_139;
                                                      t = Sym2Strs_0_0(t);
                                                      q_140 = t;
                                                      t = l_139;
                                                      t = Sym2Strs_0_0(t);
                                                      r_140 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_140), (ATerm) ATinsert(ATempty, term_x_61)), q_140);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        k_139 = ATgetArgument(t, 0);
                                                        l_139 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_140 = NULL,v_140 = NULL;
                                                          t = k_139;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          u_140 = t;
                                                          t = l_139;
                                                          t = Sym2Strs_0_0(t);
                                                          v_140 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_140), (ATerm) ATinsert(ATempty, term_a_62)), u_140);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            k_139 = ATgetArgument(t, 0);
                                                            l_139 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm y_140 = NULL,z_140 = NULL;
                                                              t = k_139;
                                                              t = Sym2Strs_0_0(t);
                                                              y_140 = t;
                                                              t = l_139;
                                                              t = Sym2Strs_0_0(t);
                                                              z_140 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_140), (ATerm) ATinsert(ATempty, term_b_62)), y_140);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                k_139 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, k_139);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    k_139 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm b_69 = NULL;
                                                                      t = k_139;
                                                                      {
                                                                        ATerm c_62 = t;
                                                                        int d_62 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = de_quote_0_0(t);
                                                                            t = de_escape_0_0(t);
                                                                            LocalPopChoice(d_62);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = c_62;
                                                                          }
                                                                      }
                                                                      b_69 = t;
                                                                      t = (ATerm) ATinsert(ATempty, b_69);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm e_62 = t;
                                                                    int f_62 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            k_139 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm g_62 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(f_62);
                                                                        {
                                                                          ATerm j_69 = NULL;
                                                                          t = k_139;
                                                                          {
                                                                            ATerm h_62 = t;
                                                                            int j_62 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = de_quote_0_0(t);
                                                                                t = de_escape_0_0(t);
                                                                                LocalPopChoice(j_62);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = h_62;
                                                                              }
                                                                          }
                                                                          j_69 = t;
                                                                          t = (ATerm) ATinsert(ATempty, j_69);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_62;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_k_62);
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
static ATerm w_11 (ATerm t)
{
  ATerm l_62 = t;
  int m_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(m_62);
    }
  else
    {
      t = l_62;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(w_11, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_62 = ATgetFirst((ATermList) t);
      if(((ATgetType(n_62) != AT_INT) || (ATgetInt((ATermInt) n_62) != 34)))
        _fail(t);
      {
        ATerm o_62 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(o_62) != AT_LIST) || !(ATisEmpty(o_62))))
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
  ATerm n_146 = NULL,o_146 = NULL,p_146 = NULL,q_146 = NULL,r_146 = NULL;
  r_146 = t;
  t = SSL_explode_string(r_146);
  n_146 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_146 = ATgetFirst((ATermList) t);
      {
        ATerm p_62 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_146;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = n_146;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_62 = ATgetFirst((ATermList) t);
      p_146 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_146;
  t = at_last_1_0(a_12, t);
  o_146 = t;
  t = SSL_implode_string(o_146);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm r_62 = t;
  if((PushChoice() == 0))
    {
      ATerm i_141 = NULL,j_141 = NULL;
      if(match_cons(t, sym__2))
        {
          i_141 = ATgetArgument(t, 0);
          j_141 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_141, j_141);
      {
        ATerm s_62 = t;
        int t_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(i_141, j_141);
            LocalPopChoice(t_62);
          }
        else
          {
            t = s_62;
            t = SSL_gtr(i_141, j_141);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, i_141, j_141);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_62;
    }
  return(t);
}
static ATerm b_142 (ATerm o_141, ATerm t)
{
  t = SSL_explode_string(o_141);
  {
    ATerm u_62 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(d_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_62;
      }
  }
  t = term_w_62;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm q_141 = NULL;
  q_141 = t;
  if(match_int(t, 45))
    {
      ATerm x_62 = t;
      int y_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_62, q_141);
          t = leq_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, q_141, term_a_63);
          t = leq_0_0(t);
          t = q_141;
          LocalPopChoice(y_62);
        }
      else
        {
          t = x_62;
          {
            ATerm c_63 = t;
            int d_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, term_v_59, q_141);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, q_141, term_w_59);
                t = leq_0_0(t);
                t = q_141;
                LocalPopChoice(d_63);
              }
            else
              {
                t = c_63;
                {
                  ATerm g_63 = t;
                  int h_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_59, q_141);
                      t = leq_0_0(t);
                      t = (ATerm) ATmakeAppl(sym__2, q_141, term_y_59);
                      t = leq_0_0(t);
                      t = q_141;
                      LocalPopChoice(h_63);
                    }
                  else
                    {
                      t = g_63;
                      t = term_l_19;
                    }
                }
              }
          }
        }
    }
  else
    {
      ATerm i_63 = t;
      int j_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_62, q_141);
          t = leq_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, q_141, term_a_63);
          t = leq_0_0(t);
          t = q_141;
          LocalPopChoice(j_63);
        }
      else
        {
          t = i_63;
          {
            ATerm k_63 = t;
            int l_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, term_v_59, q_141);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, q_141, term_w_59);
                t = leq_0_0(t);
                t = q_141;
                LocalPopChoice(l_63);
              }
            else
              {
                t = k_63;
                t = (ATerm) ATmakeAppl(sym__2, term_x_59, q_141);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, q_141, term_y_59);
                t = leq_0_0(t);
                t = q_141;
              }
          }
        }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm a_142 = NULL;
  a_142 = t;
  if(match_string(t, "|="))
    {
      ATerm m_63 = t;
      int n_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_142(a_142, t);
          LocalPopChoice(n_63);
        }
      else
        {
          t = m_63;
          t = term_o_63;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm p_63 = t;
          int q_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_142(a_142, t);
              LocalPopChoice(q_63);
            }
          else
            {
              t = p_63;
              t = term_r_63;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm s_63 = t;
              int t_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_142(a_142, t);
                  LocalPopChoice(t_63);
                }
              else
                {
                  t = s_63;
                  t = term_u_63;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm v_63 = t;
                  int w_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_142(a_142, t);
                      LocalPopChoice(w_63);
                    }
                  else
                    {
                      t = v_63;
                      t = term_x_63;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm y_63 = t;
                      int z_63 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_142(a_142, t);
                          LocalPopChoice(z_63);
                        }
                      else
                        {
                          t = y_63;
                          t = term_a_64;
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
                              t = b_142(a_142, t);
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
                                  t = b_142(a_142, t);
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
                                      t = b_142(a_142, t);
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
                                          t = b_142(a_142, t);
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
                                              t = b_142(a_142, t);
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
                                                  t = b_142(a_142, t);
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
                                                      t = b_142(a_142, t);
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
                                                      int i_65 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = b_142(a_142, t);
                                                          LocalPopChoice(i_65);
                                                        }
                                                      else
                                                        {
                                                          t = w_64;
                                                          t = term_j_65;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm k_65 = t;
                                                          int l_65 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = b_142(a_142, t);
                                                              LocalPopChoice(l_65);
                                                            }
                                                          else
                                                            {
                                                              t = k_65;
                                                              t = term_b_62;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm m_65 = t;
                                                              int n_65 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = b_142(a_142, t);
                                                                  LocalPopChoice(n_65);
                                                                }
                                                              else
                                                                {
                                                                  t = m_65;
                                                                  t = term_o_65;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm p_65 = t;
                                                                  int q_65 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = b_142(a_142, t);
                                                                      LocalPopChoice(q_65);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = p_65;
                                                                      t = term_o_65;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm r_65 = t;
                                                                      int s_65 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = b_142(a_142, t);
                                                                          LocalPopChoice(s_65);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = r_65;
                                                                          t = term_t_65;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm x_65 = t;
                                                                          int d_66 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = b_142(a_142, t);
                                                                              LocalPopChoice(d_66);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_65;
                                                                              t = term_g_66;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm h_66 = t;
                                                                              int i_66 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = b_142(a_142, t);
                                                                                  LocalPopChoice(i_66);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_66;
                                                                                  t = term_j_66;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm v_66 = t;
                                                                                  int w_66 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = b_142(a_142, t);
                                                                                      LocalPopChoice(w_66);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_66;
                                                                                      t = term_x_66;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm y_66 = t;
                                                                                      int z_66 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = b_142(a_142, t);
                                                                                          LocalPopChoice(z_66);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_66;
                                                                                          t = term_a_67;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm d_67 = t;
                                                                                          int e_67 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = b_142(a_142, t);
                                                                                              LocalPopChoice(e_67);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_67;
                                                                                              t = term_g_67;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm k_67 = t;
                                                                                              int l_67 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = b_142(a_142, t);
                                                                                                  LocalPopChoice(l_67);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = k_67;
                                                                                                  t = term_m_67;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm n_67 = t;
                                                                                                  int p_67 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = b_142(a_142, t);
                                                                                                      LocalPopChoice(p_67);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_67;
                                                                                                      t = term_q_67;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm r_67 = t;
                                                                                                      int s_67 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = b_142(a_142, t);
                                                                                                          LocalPopChoice(s_67);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = r_67;
                                                                                                          t = term_t_67;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm v_67 = t;
                                                                                                          int w_67 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = b_142(a_142, t);
                                                                                                              LocalPopChoice(w_67);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = v_67;
                                                                                                              t = term_x_67;
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
                                                                                                                  t = b_142(a_142, t);
                                                                                                                  LocalPopChoice(z_67);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_67;
                                                                                                                  t = term_a_68;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm b_68 = t;
                                                                                                                  int c_68 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = b_142(a_142, t);
                                                                                                                      LocalPopChoice(c_68);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_68;
                                                                                                                      t = term_d_68;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm e_68 = t;
                                                                                                                      int g_68 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = b_142(a_142, t);
                                                                                                                          LocalPopChoice(g_68);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = e_68;
                                                                                                                          t = term_x_61;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm h_68 = t;
                                                                                                                          int i_68 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = b_142(a_142, t);
                                                                                                                              LocalPopChoice(i_68);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_68;
                                                                                                                              t = term_j_68;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm k_68 = t;
                                                                                                                              int l_68 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = b_142(a_142, t);
                                                                                                                                  LocalPopChoice(l_68);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = k_68;
                                                                                                                                  t = term_m_68;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm n_68 = t;
                                                                                                                                  int q_68 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = b_142(a_142, t);
                                                                                                                                      LocalPopChoice(q_68);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = n_68;
                                                                                                                                      t = term_r_68;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm s_68 = t;
                                                                                                                                      int w_68 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = b_142(a_142, t);
                                                                                                                                          LocalPopChoice(w_68);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = s_68;
                                                                                                                                          t = term_x_68;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm y_68 = t;
                                                                                                                                          int z_68 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = b_142(a_142, t);
                                                                                                                                              LocalPopChoice(z_68);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = y_68;
                                                                                                                                              t = term_a_69;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm c_69 = t;
                                                                                                                                              int d_69 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = b_142(a_142, t);
                                                                                                                                                  LocalPopChoice(d_69);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = c_69;
                                                                                                                                                  t = term_e_69;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm f_69 = t;
                                                                                                                                                  int g_69 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = b_142(a_142, t);
                                                                                                                                                      LocalPopChoice(g_69);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = f_69;
                                                                                                                                                      t = term_h_69;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm i_69 = t;
                                                                                                                                                      int k_69 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = b_142(a_142, t);
                                                                                                                                                          LocalPopChoice(k_69);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = i_69;
                                                                                                                                                          t = term_l_69;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm m_69 = t;
                                                                                                                                                          int n_69 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = b_142(a_142, t);
                                                                                                                                                              LocalPopChoice(n_69);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = m_69;
                                                                                                                                                              t = term_o_69;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = b_142(a_142, t);
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
static ATerm r_14 (ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm w_142 = NULL,x_142 = NULL;
  t = b_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_29;
    }
  else
    {
      ATerm w_69 = NULL,a_70 = NULL,g_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_142 = ATgetFirst((ATermList) t);
          x_142 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_29);
      w_69 = t;
      t = x_142;
      {
        static ATerm h_70 (ATerm t);
        static ATerm h_70 (ATerm t)
        {
          ATerm p_69 = t;
          int q_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_70 = NULL;
              b_70 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_70;
              LocalPopChoice(q_69);
            }
          else
            {
              t = p_69;
              {
                ATerm d_70 = NULL;
                t = Cons_2_0(_id, h_70, t);
                d_70 = t;
                t = (ATerm) ATinsert(CheckATermList(d_70), a_29);
              }
            }
          return(t);
        }
        t = h_70(t);
      }
      a_70 = t;
      t = (ATerm) ATinsert(CheckATermList(a_70), w_142);
      g_27 = t;
      t = SSLsetAnnotations(g_27, w_69);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm j_143 = NULL,k_143 = NULL,l_143 = NULL,m_143 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_143 = ATgetFirst((ATermList) t);
      m_143 = (ATerm) ATgetNext((ATermList) t);
      t = m_143;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_143 = ATgetFirst((ATermList) t);
          k_143 = (ATerm) ATgetNext((ATermList) t);
          t = j_143;
          if(match_int(t, 34))
            {
              t = l_143;
              if(match_int(t, 92))
                {
                  ATerm s_69 = t;
                  int t_69 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_143 = NULL;
                      t = k_143;
                      t = De_Escape_0_0(t);
                      p_143 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_143), term_u_57);
                      LocalPopChoice(t_69);
                    }
                  else
                    {
                      t = s_69;
                      {
                        ATerm s_143 = NULL;
                        t = m_143;
                        t = De_Escape_0_0(t);
                        s_143 = t;
                        t = (ATerm) ATinsert(CheckATermList(s_143), l_143);
                      }
                    }
                }
              else
                {
                  ATerm v_143 = NULL;
                  t = m_143;
                  t = De_Escape_0_0(t);
                  v_143 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_143), l_143);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = l_143;
                  if(match_int(t, 92))
                    {
                      ATerm u_69 = t;
                      int x_69 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_143 = NULL;
                          t = k_143;
                          t = De_Escape_0_0(t);
                          x_143 = t;
                          t = (ATerm) ATinsert(CheckATermList(x_143), term_g_58);
                          LocalPopChoice(x_69);
                        }
                      else
                        {
                          t = u_69;
                          {
                            ATerm a_144 = NULL;
                            t = m_143;
                            t = De_Escape_0_0(t);
                            a_144 = t;
                            t = (ATerm) ATinsert(CheckATermList(a_144), l_143);
                          }
                        }
                    }
                  else
                    {
                      ATerm d_144 = NULL;
                      t = m_143;
                      t = De_Escape_0_0(t);
                      d_144 = t;
                      t = (ATerm) ATinsert(CheckATermList(d_144), l_143);
                    }
                }
              else
                {
                  ATerm g_144 = NULL;
                  t = m_143;
                  t = De_Escape_0_0(t);
                  g_144 = t;
                  t = (ATerm) ATinsert(CheckATermList(g_144), l_143);
                }
            }
        }
      else
        {
          ATerm j_144 = NULL;
          t = m_143;
          t = De_Escape_0_0(t);
          j_144 = t;
          t = (ATerm) ATinsert(CheckATermList(j_144), l_143);
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
  ATerm t_144 = NULL,u_144 = NULL,v_144 = NULL,w_144 = NULL,x_144 = NULL,y_144 = NULL;
  u_144 = t;
  t = SSL_explode_string(u_144);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_144 = ATgetFirst((ATermList) t);
      y_144 = (ATerm) ATgetNext((ATermList) t);
      t = y_144;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_144 = ATgetFirst((ATermList) t);
          w_144 = (ATerm) ATgetNext((ATermList) t);
          t = v_144;
          if(match_int(t, 34))
            {
              t = x_144;
              if(match_int(t, 92))
                {
                  ATerm z_69 = t;
                  int e_70 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_145 = NULL;
                      t = w_144;
                      t = De_Escape_0_0(t);
                      b_145 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_145), term_u_57);
                      LocalPopChoice(e_70);
                    }
                  else
                    {
                      t = z_69;
                      {
                        ATerm e_145 = NULL;
                        t = y_144;
                        t = De_Escape_0_0(t);
                        e_145 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_145), x_144);
                      }
                    }
                }
              else
                {
                  ATerm h_145 = NULL;
                  t = y_144;
                  t = De_Escape_0_0(t);
                  h_145 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_145), x_144);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = x_144;
                  if(match_int(t, 92))
                    {
                      ATerm i_70 = t;
                      int l_70 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_145 = NULL;
                          t = w_144;
                          t = De_Escape_0_0(t);
                          j_145 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_145), term_g_58);
                          LocalPopChoice(l_70);
                        }
                      else
                        {
                          t = i_70;
                          {
                            ATerm m_145 = NULL;
                            t = y_144;
                            t = De_Escape_0_0(t);
                            m_145 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_145), x_144);
                          }
                        }
                    }
                  else
                    {
                      ATerm p_145 = NULL;
                      t = y_144;
                      t = De_Escape_0_0(t);
                      p_145 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_145), x_144);
                    }
                }
              else
                {
                  ATerm s_145 = NULL;
                  t = y_144;
                  t = De_Escape_0_0(t);
                  s_145 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_145), x_144);
                }
            }
        }
      else
        {
          ATerm v_145 = NULL;
          t = y_144;
          t = De_Escape_0_0(t);
          v_145 = t;
          t = (ATerm) ATinsert(CheckATermList(v_145), x_144);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  t_144 = t;
  t = SSL_implode_string(t_144);
  return(t);
}
ATerm list_ana_1_0 (ATerm d_152 (ATerm), ATerm t)
{
  static ATerm c_146 (ATerm t);
  static ATerm c_146 (ATerm t)
  {
    ATerm m_70 = t;
    int n_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_145 = NULL;
        t = d_152(t);
        x_145 = t;
        t = (ATerm) ATinsert(ATempty, x_145);
        LocalPopChoice(n_70);
      }
    else
      {
        t = m_70;
        {
          ATerm o_70 = t;
          int r_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_146 = NULL,y_70 = NULL;
              b_146 = t;
              t = SSL_explode_term(b_146);
              if(match_cons(t, sym__2))
                {
                  ATerm s_70 = ATgetArgument(t, 0);
                  y_70 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_70;
              t = filter_1_0(c_146, t);
              t = concat_0_0(t);
              LocalPopChoice(r_70);
            }
          else
            {
              t = o_70;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = c_146(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm h_146 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      h_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_146;
  {
    ATerm t_70 = t;
    int u_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        LocalPopChoice(u_70);
      }
    else
      {
        t = t_70;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm g_146 = NULL,e_71 = NULL,g_71 = NULL;
  t = list_ana_1_0(e_12, t);
  g_71 = t;
  t = term_z_59;
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_59, g_71);
  t = r_14(e_71, g_71, t);
  g_146 = t;
  t = SSL_concat_strings(g_146);
  {
    ATerm v_70 = t;
    int w_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(w_70);
      }
    else
      {
        t = v_70;
      }
  }
  return(t);
}
static ATerm x_147 (ATerm d_147, ATerm e_147, ATerm f_147, ATerm t)
{
  ATerm i_147 = NULL;
  t = f_147;
  {
    ATerm x_70 = t;
    int z_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_147;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        i_147 = t;
        LocalPopChoice(z_70);
      }
    else
      {
        t = x_70;
        {
          ATerm a_71 = t;
          int b_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_147 = NULL,l_147 = NULL;
              t = (ATerm) ATinsert(ATempty, e_147);
              t = syms2strs_0_0(t);
              k_147 = t;
              t = d_147;
              t = filter_1_0(lit2str_0_0, t);
              l_147 = t;
              t = filter_1_0(f_12, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_71 = ATgetFirst((ATermList) t);
                  ATerm d_71 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, k_147, l_147);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              i_147 = t;
              LocalPopChoice(b_71);
            }
          else
            {
              t = a_71;
              {
                ATerm f_71 = t;
                int h_71 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = d_147;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    i_147 = t;
                    LocalPopChoice(h_71);
                  }
                else
                  {
                    t = f_71;
                    {
                      ATerm n_147 = NULL,o_147 = NULL;
                      t = (ATerm) ATinsert(ATempty, e_147);
                      t = syms2strs_0_0(t);
                      n_147 = t;
                      t = term_l_19;
                      t = new_0_0(t);
                      o_147 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_147, (ATerm) ATinsert(ATinsert(ATempty, o_147), term_i_71));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      i_147 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = i_147;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm j_71 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_71;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm q_147 = NULL,r_147 = NULL,s_147 = NULL;
  q_147 = t;
  {
    ATerm k_71 = t;
    int l_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            r_147 = ATgetArgument(t, 0);
            {
              ATerm o_71 = ATgetArgument(t, 1);
            }
            {
              ATerm p_71 = ATgetArgument(t, 2);
            }
            {
              ATerm q_71 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_71);
        t = r_147;
        {
          ATerm r_71 = t;
          int s_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_71 = NULL,d_72 = NULL;
              ATerm t_71 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_71;
                }
              t = SSL_explode_string(r_147);
              d_72 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_57)), d_72), (ATerm) ATinsert(ATempty, term_u_57));
              t = concat_0_0(t);
              w_71 = t;
              t = SSL_implode_string(w_71);
              LocalPopChoice(s_71);
            }
          else
            {
              t = r_71;
            }
        }
      }
    else
      {
        t = k_71;
        if(match_cons(t, sym_prod_3))
          {
            r_147 = ATgetArgument(t, 0);
            s_147 = ATgetArgument(t, 1);
            {
              ATerm u_71 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = r_147;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm v_71 = t;
            int x_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_147(r_147, s_147, q_147, t);
                LocalPopChoice(x_71);
              }
            else
              {
                t = v_71;
                {
                  ATerm v_147 = NULL;
                  t = (ATerm) ATinsert(ATempty, s_147);
                  t = syms2strs_0_0(t);
                  v_147 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_147, (ATerm) ATinsert(ATempty, term_y_71));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = x_147(r_147, s_147, q_147, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm n_150 = NULL,o_150 = NULL,p_150 = NULL;
  n_150 = t;
  if(match_cons(t, sym_sort_1))
    {
      o_150 = ATgetArgument(t, 0);
      {
        ATerm g_72 = NULL,a_28 = NULL;
        t = SSLgetAnnotations(n_150);
        g_72 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, o_150);
        a_28 = t;
        t = SSLsetAnnotations(a_28, g_72);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          o_150 = ATgetArgument(t, 0);
          p_150 = ATgetArgument(t, 1);
          {
            ATerm p_72 = NULL,t_72 = NULL,u_72 = NULL,c_28 = NULL;
            t = SSLgetAnnotations(n_150);
            p_72 = t;
            t = o_150;
            t = syntaxless_sort_0_0(t);
            t_72 = t;
            t = p_150;
            t = syntaxless_sort_0_0(t);
            u_72 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, t_72, u_72);
            c_28 = t;
            t = SSLsetAnnotations(c_28, p_72);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              o_150 = ATgetArgument(t, 0);
              {
                ATerm d_73 = NULL,g_73 = NULL,d_28 = NULL;
                t = SSLgetAnnotations(n_150);
                d_73 = t;
                t = o_150;
                t = syntaxless_sort_0_0(t);
                g_73 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, g_73);
                d_28 = t;
                t = SSLsetAnnotations(d_28, d_73);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  o_150 = ATgetArgument(t, 0);
                  {
                    ATerm d_74 = NULL,f_74 = NULL,e_28 = NULL;
                    t = SSLgetAnnotations(n_150);
                    d_74 = t;
                    t = o_150;
                    t = syntaxless_sort_0_0(t);
                    f_74 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, f_74);
                    e_28 = t;
                    t = SSLsetAnnotations(e_28, d_74);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      o_150 = ATgetArgument(t, 0);
                      {
                        ATerm n_74 = NULL,q_74 = NULL,f_28 = NULL;
                        t = SSLgetAnnotations(n_150);
                        n_74 = t;
                        t = o_150;
                        t = syntaxless_sort_0_0(t);
                        q_74 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, q_74);
                        f_28 = t;
                        t = SSLsetAnnotations(f_28, n_74);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          o_150 = ATgetArgument(t, 0);
                          p_150 = ATgetArgument(t, 1);
                          {
                            ATerm d_75 = NULL,h_75 = NULL,g_28 = NULL;
                            t = SSLgetAnnotations(n_150);
                            d_75 = t;
                            t = o_150;
                            t = syntaxless_sort_0_0(t);
                            h_75 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, h_75, p_150);
                            g_28 = t;
                            t = SSLsetAnnotations(g_28, d_75);
                          }
                        }
                      else
                        {
                          ATerm z_75 = NULL,l_76 = NULL,h_28 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              o_150 = ATgetArgument(t, 0);
                              p_150 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(n_150);
                          z_75 = t;
                          t = o_150;
                          t = syntaxless_sort_0_0(t);
                          l_76 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, l_76, p_150);
                          h_28 = t;
                          t = SSLsetAnnotations(h_28, z_75);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm z_150 = NULL,b_151 = NULL,c_151 = NULL,d_151 = NULL,e_151 = NULL,f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL,n_151 = NULL,x_29 = NULL,w_29 = NULL;
  n_151 = t;
  if(match_cons(t, sym_prod_3))
    {
      b_151 = ATgetArgument(t, 0);
      c_151 = ATgetArgument(t, 1);
      d_151 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_151);
  z_150 = t;
  t = b_151;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_151 = ATgetFirst((ATermList) t);
      h_151 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_151);
  f_151 = t;
  t = g_151;
  t = syntaxless_sort_0_0(t);
  i_151 = t;
  t = h_151;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_151), i_151);
  w_29 = t;
  t = SSLsetAnnotations(w_29, f_151);
  j_151 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, j_151, c_151, d_151);
  x_29 = t;
  t = SSLsetAnnotations(x_29, z_150);
  e_151 = t;
  {
    ATerm z_71 = t;
    int b_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_72;
        t = get_options_0_0(t);
        t = oncetd_1_0(g_12, t);
        t = e_151;
        LocalPopChoice(b_72);
      }
    else
      {
        t = z_71;
        {
          ATerm p_151 = NULL,u_151 = NULL;
          t = term_w_33;
          p_151 = t;
          t = term_e_72;
          u_151 = t;
          t = term_f_72;
          t = b_16(p_151, u_151, t);
        }
      }
  }
  t = e_151;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm a_152 = NULL,g_152 = NULL;
  ATerm h_72 = t;
  int i_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm j_72 = ATgetArgument(t, 0);
          ATerm k_72 = ATgetArgument(t, 1);
          ATerm m_72 = ATgetArgument(t, 2);
          a_152 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(i_72);
      t = a_152;
      t = oncetd_1_0(h_12, t);
      t = term_l_19;
    }
  else
    {
      t = h_72;
      if(match_cons(t, sym_prod_3))
        {
          ATerm n_72 = ATgetArgument(t, 0);
          ATerm o_72 = ATgetArgument(t, 1);
          g_152 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_152;
      t = oncetd_1_0(i_12, t);
      t = term_l_19;
    }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm l_152 = NULL,p_152 = NULL;
  ATerm q_72 = t;
  int r_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm s_72 = ATgetArgument(t, 0);
          ATerm w_72 = ATgetArgument(t, 1);
          ATerm x_72 = ATgetArgument(t, 2);
          l_152 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(r_72);
      t = l_152;
      t = oncetd_1_0(m_12, t);
      t = term_l_19;
    }
  else
    {
      t = q_72;
      if(match_cons(t, sym_prod_3))
        {
          ATerm y_72 = ATgetArgument(t, 0);
          ATerm z_72 = ATgetArgument(t, 1);
          p_152 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_152;
      t = oncetd_1_0(n_12, t);
      t = term_l_19;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm x_152 = NULL;
  x_152 = t;
  {
    ATerm b_73 = t;
    int c_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_77 = NULL;
        t = x_152;
        {
          ATerm e_73 = t;
          if((PushChoice() == 0))
            {
              ATerm f_73 = t;
              int h_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  LocalPopChoice(h_73);
                }
              else
                {
                  t = f_73;
                  {
                    ATerm i_73 = t;
                    int j_73 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        LocalPopChoice(j_73);
                      }
                    else
                      {
                        t = i_73;
                        {
                          ATerm k_73 = t;
                          int l_73 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(l_73);
                            }
                          else
                            {
                              t = k_73;
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
              t = e_73;
            }
        }
        t = x_152;
        t = mk_constr_0_0(t);
        v_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_152, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, v_77))));
        t = add_attributes_0_0(t);
        LocalPopChoice(c_73);
      }
    else
      {
        t = b_73;
        {
          ATerm z_152 = NULL;
          static ATerm q_12 (ATerm t);
          static ATerm q_12 (ATerm t)
          {
            ATerm a_153 = NULL,b_153 = NULL,c_153 = NULL,c_30 = NULL;
            c_153 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm m_73 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_153);
            a_153 = t;
            t = not_null(z_152);
            t = uq2q_0_0(t);
            b_153 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, b_153);
            c_30 = t;
            t = SSLsetAnnotations(c_30, a_153);
            return(t);
          }
          t = x_152;
          t = get_constr_0_0(t);
          if(((z_152 != NULL) && (z_152 != t)))
            _fail(t);
          else
            z_152 = t;
          t = x_152;
          t = oncetd_1_0(q_12, t);
        }
      }
  }
  return(t);
}
static ATerm x_14 (ATerm j_22, ATerm k_22, ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm e_153 = NULL,f_153 = NULL;
  ATerm n_73 = t;
  int o_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm s_12 (ATerm t);
      static ATerm s_12 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((e_153 != NULL) && (e_153 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              e_153 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = i_22;
      t = oncetd_1_0(s_12, t);
      LocalPopChoice(o_73);
    }
  else
    {
      t = n_73;
      {
        ATerm p_73 = t;
        int s_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_153 = NULL,h_153 = NULL,j_153 = NULL,k_153 = NULL,l_153 = NULL,m_153 = NULL,n_153 = NULL,o_153 = NULL,f_30 = NULL,e_30 = NULL;
            t = k_22;
            if(match_cons(t, sym_sort_1))
              {
                o_153 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_22);
            n_153 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, o_153);
            e_30 = t;
            t = SSLsetAnnotations(e_30, n_153);
            t = (ATerm) ATmakeAppl(sym_prod_3, j_22, k_22, i_22);
            t = prodcons_0_0(t);
            m_153 = t;
            if(match_cons(t, sym_prod_3))
              {
                h_153 = ATgetArgument(t, 0);
                j_153 = ATgetArgument(t, 1);
                k_153 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_153);
            g_153 = t;
            t = k_153;
            {
              static ATerm w_12 (ATerm t);
              static ATerm w_12 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((e_153 != NULL) && (e_153 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_153 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(w_12, t);
            }
            l_153 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, h_153, j_153, l_153);
            f_30 = t;
            t = SSLsetAnnotations(f_30, g_153);
            LocalPopChoice(s_73);
          }
        else
          {
            t = p_73;
            t = term_v_73;
            e_153 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, j_22, k_22, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(e_153))))), (ATerm) ATinsert(ATempty, not_null(e_153)));
  t = get_pp_entry_0_0(t);
  f_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_153), f_153);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm w_73 = t;
  if((PushChoice() == 0))
    {
      ATerm v_153 = NULL,w_153 = NULL,x_153 = NULL,k_30 = NULL;
      x_153 = t;
      if(match_cons(t, sym_lit_1))
        {
          w_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_153);
      v_153 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, w_153);
      k_30 = t;
      t = SSLsetAnnotations(k_30, v_153);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_73;
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm x_73 = t;
  if((PushChoice() == 0))
    {
      ATerm y_153 = NULL,z_153 = NULL,a_154 = NULL,m_30 = NULL;
      a_154 = t;
      if(match_cons(t, sym_lit_1))
        {
          z_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_154);
      y_153 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, z_153);
      m_30 = t;
      t = SSLsetAnnotations(m_30, y_153);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_73;
    }
  return(t);
}
static ATerm y_14 (ATerm q_21, ATerm o_21, ATerm p_21, ATerm r_21, ATerm t)
{
  ATerm q_153 = NULL,r_153 = NULL,s_153 = NULL,t_153 = NULL,u_153 = NULL;
  static ATerm e_13 (ATerm t);
  static ATerm e_13 (ATerm t)
  {
    ATerm y_73 = t;
    int z_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_74 = t;
        int e_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_13 (ATerm t);
            static ATerm f_13 (ATerm t)
            {
              t = not_null(s_153);
              return(t);
            }
            t = Instantiate_1_0(f_13, t);
            LocalPopChoice(e_74);
          }
        else
          {
            t = c_74;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(z_73);
      }
    else
      {
        t = y_73;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, q_21, o_21, p_21), r_21);
  t = x_14(q_21, o_21, p_21, r_21, t);
  if(match_cons(t, sym__2))
    {
      q_153 = ATgetArgument(t, 0);
      r_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_21;
  t = filter_1_0(x_12, t);
  t_153 = t;
  t = r_21;
  t = filter_1_0(z_12, t);
  u_153 = t;
  t = (ATerm) ATmakeAppl(sym__4, t_153, u_153, (ATerm)ATinsert(ATempty, q_153), term_p_19);
  t = seq2abox_0_0(t);
  if(((s_153 != NULL) && (s_153 != t)))
    _fail(t);
  else
    s_153 = t;
  t = r_153;
  t = bottomup_1_0(e_13, t);
  return(t);
}
ATerm filter_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm o_154 = NULL,p_154 = NULL,q_154 = NULL;
  o_154 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_154;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_154 = ATgetFirst((ATermList) t);
          q_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_74 = t;
        int j_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_78 = NULL,n_78 = NULL,r_78 = NULL,s_30 = NULL;
            t = SSLgetAnnotations(o_154);
            f_78 = t;
            t = p_154;
            t = s_130(t);
            n_78 = t;
            t = q_154;
            t = filter_1_0(s_130, t);
            r_78 = t;
            t = (ATerm) ATinsert(CheckATermList(r_78), n_78);
            s_30 = t;
            t = SSLsetAnnotations(s_30, f_78);
            LocalPopChoice(j_74);
          }
        else
          {
            t = g_74;
            t = q_154;
            t = filter_1_0(s_130, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_116 (ATerm), ATerm t)
{
  static ATerm h_13 (ATerm t);
  static ATerm h_13 (ATerm t)
  {
    t = topdown_1_0(d_116, t);
    return(t);
  }
  t = d_116(t);
  t = SRTS_all(h_13, t);
  return(t);
}
ATerm sometd_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  static ATerm t_154 (ATerm t);
  static ATerm t_154 (ATerm t)
  {
    ATerm k_74 = t;
    int l_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_117(t);
        LocalPopChoice(l_74);
      }
    else
      {
        t = k_74;
        t = SRTS_some(t_154, t);
      }
    return(t);
  }
  t = t_154(t);
  return(t);
}
ATerm repeat_2_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t)
{
  static ATerm u_154 (ATerm t);
  static ATerm u_154 (ATerm t)
  {
    ATerm m_74 = t;
    int o_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_115(t);
        t = u_154(t);
        LocalPopChoice(o_74);
      }
    else
      {
        t = m_74;
        t = e_115(t);
      }
    return(t);
  }
  t = u_154(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  static ATerm i_155 (ATerm t);
  static ATerm i_155 (ATerm t)
  {
    ATerm f_155 = NULL,g_155 = NULL,h_155 = NULL;
    h_155 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_155 = ATgetFirst((ATermList) t);
        g_155 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_79 = NULL,d_79 = NULL,u_30 = NULL;
          t = SSLgetAnnotations(h_155);
          a_79 = t;
          t = g_155;
          t = i_155(t);
          d_79 = t;
          t = (ATerm) ATinsert(CheckATermList(d_79), f_155);
          u_30 = t;
          t = SSLsetAnnotations(u_30, a_79);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_155;
        t = g_123(t);
      }
    return(t);
  }
  t = i_155(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_155 = NULL,m_155 = NULL,n_155 = NULL;
  l_155 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_155;
    }
  else
    {
      static ATerm i_13 (ATerm t);
      static ATerm i_13 (ATerm t)
      {
        t = not_null(n_155);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_155 = ATgetFirst((ATermList) t);
          if(((n_155 != NULL) && (n_155 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_155 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_155;
      t = at_end_1_0(i_13, t);
    }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      r_79 = ATgetArgument(t, 0);
      s_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(r_79);
  t_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_79), term_r_74), t_79), term_p_74);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm e_156 = NULL,f_156 = NULL,g_156 = NULL;
  e_156 = t;
  if(match_cons(t, sym_Path1_1))
    {
      f_156 = ATgetArgument(t, 0);
      t = f_156;
    }
  else
    {
      ATerm p_79 = NULL,q_79 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          f_156 = ATgetArgument(t, 0);
          g_156 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_156;
      t = map_1_0(j_13, t);
      t = concat_0_0(t);
      p_79 = t;
      t = (ATerm) ATinsert(CheckATermList(p_79), f_156);
      q_79 = t;
      t = SSL_concat_strings(q_79);
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm y_156 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      y_156 = ATgetArgument(t, 0);
      {
        ATerm s_74 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_156;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm o_156 = NULL,p_156 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      o_156 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, o_156);
    }
  else
    {
      ATerm x_156 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          o_156 = ATgetArgument(t, 0);
          p_156 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_156;
      t = map_1_0(k_13, t);
      x_156 = t;
      t = (ATerm) ATinsert(CheckATermList(x_156), o_156);
    }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = debug_1_0(o_13, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_t_74;
  return(t);
}
static ATerm z_14 (ATerm m_84, ATerm n_84, ATerm t)
{
  ATerm z_156 = NULL,a_157 = NULL,b_157 = NULL,c_157 = NULL,d_157 = NULL,e_157 = NULL;
  t = m_84;
  t = mk_key_0_0(t);
  a_157 = t;
  t = term_m_32;
  b_157 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_32, a_157, (ATerm) ATmakeAppl(sym__2, m_84, n_84));
  t = lookup_table_0_1(b_157, t);
  e_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_84, n_84);
  c_157 = t;
  t = e_157;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(a_157, c_157, d_157, t);
  t = m_84;
  t = path_to_string_0_0(t);
  z_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_156, n_84);
  t = if_verbose1_1_0(m_13, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  static ATerm v_157 (ATerm t);
  static ATerm v_157 (ATerm t)
  {
    ATerm s_157 = NULL,t_157 = NULL,u_157 = NULL;
    ATerm u_74 = t;
    int v_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_133(t);
        LocalPopChoice(v_74);
      }
    else
      {
        t = u_74;
      }
    u_157 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_157 = ATgetFirst((ATermList) t);
        t_157 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_80 = NULL,i_80 = NULL,w_30 = NULL;
          t = SSLgetAnnotations(u_157);
          d_80 = t;
          t = t_157;
          t = v_157(t);
          i_80 = t;
          t = (ATerm) ATinsert(CheckATermList(i_80), s_157);
          w_30 = t;
          t = SSLsetAnnotations(w_30, d_80);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_157;
      }
    return(t);
  }
  t = v_157(t);
  return(t);
}
ATerm at_last_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  static ATerm s_158 (ATerm t);
  static ATerm s_158 (ATerm t)
  {
    ATerm p_158 = NULL,q_158 = NULL,r_158 = NULL;
    p_158 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_158 = ATgetFirst((ATermList) t);
        r_158 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_74 = t;
      int x_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_80 = NULL,a_31 = NULL;
          t = SSLgetAnnotations(p_158);
          q_80 = t;
          t = r_158;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(r_158), q_158);
          a_31 = t;
          t = SSLsetAnnotations(a_31, q_80);
          t = r_123(t);
          LocalPopChoice(x_74);
        }
      else
        {
          t = w_74;
          {
            ATerm b_81 = NULL,e_81 = NULL,b_31 = NULL;
            t = SSLgetAnnotations(p_158);
            b_81 = t;
            t = r_158;
            t = s_158(t);
            e_81 = t;
            t = (ATerm) ATinsert(CheckATermList(e_81), q_158);
            b_31 = t;
            t = SSLsetAnnotations(b_31, b_81);
          }
        }
    }
    return(t);
  }
  t = s_158(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_158 = NULL,z_158 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_158 = ATgetFirst((ATermList) t);
      z_158 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_158;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_158;
    }
  else
    {
      t = z_158;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm h_159 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_75 = ATgetFirst((ATermList) t);
      h_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_159;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm t)
{
  ATerm e_159 = NULL,f_159 = NULL,g_159 = NULL;
  e_159 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_159 = ATgetFirst((ATermList) t);
      {
        ATerm e_75 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_159;
  t = r_132(t);
  t = e_159;
  t = last_0_0(t);
  t = s_132(t);
  t = e_159;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_75 = ATgetFirst((ATermList) t);
      f_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_159;
  t = at_last_1_0(s_13, t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm v_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_83 = ATgetFirst((ATermList) t);
      x_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_83;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = x_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_83 = ATgetFirst((ATermList) t);
      z_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_83;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(z_83), term_u_57);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(z_83), term_g_58);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_83), term_q_39);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(z_83), term_x_35);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(z_83), term_x_37);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm q_161 = NULL,r_161 = NULL,s_161 = NULL;
  q_161 = t;
  if(match_cons(t, sym_Arg_1))
    {
      r_161 = ATgetArgument(t, 0);
      {
        ATerm n_81 = NULL,s_81 = NULL,e_31 = NULL;
        t = SSLgetAnnotations(q_161);
        n_81 = t;
        t = SSL_string_to_int(r_161);
        s_81 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, s_81);
        e_31 = t;
        t = SSLsetAnnotations(e_31, n_81);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          r_161 = ATgetArgument(t, 0);
          s_161 = ATgetArgument(t, 1);
          {
            ATerm g_82 = NULL,k_82 = NULL,m_82 = NULL,j_31 = NULL;
            t = SSLgetAnnotations(q_161);
            g_82 = t;
            t = SSL_string_to_int(r_161);
            k_82 = t;
            t = SSL_string_to_int(s_161);
            m_82 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, k_82, m_82);
            j_31 = t;
            t = SSLsetAnnotations(j_31, g_82);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              r_161 = ATgetArgument(t, 0);
              s_161 = ATgetArgument(t, 1);
              {
                ATerm a_83 = NULL,s_31 = NULL;
                t = SSLgetAnnotations(q_161);
                a_83 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, r_161, s_161);
                s_31 = t;
                t = SSLsetAnnotations(s_31, a_83);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  r_161 = ATgetArgument(t, 0);
                  {
                    ATerm j_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,t_31 = NULL;
                    t = SSLgetAnnotations(q_161);
                    j_83 = t;
                    t = SSL_explode_string(r_161);
                    t = unquote_chars_2_0(u_13, w_13, t);
                    o_83 = t;
                    t = SSL_implode_string(o_83);
                    n_83 = t;
                    t = SSL_explode_string(n_83);
                    t = unescape_chars_1_0(c_14, t);
                    m_83 = t;
                    t = SSL_implode_string(m_83);
                    l_83 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, l_83);
                    t_31 = t;
                    t = SSLsetAnnotations(t_31, j_83);
                  }
                }
              else
                {
                  ATerm t_84 = NULL,z_84 = NULL,u_31 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      r_161 = ATgetArgument(t, 0);
                      s_161 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_161);
                  t_84 = t;
                  t = SSL_string_to_int(r_161);
                  z_84 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, z_84, s_161);
                  u_31 = t;
                  t = SSLsetAnnotations(u_31, t_84);
                }
            }
        }
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm b_162 = NULL,c_162 = NULL;
  t = topdown_1_0(n_14, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      b_162 = ATgetArgument(t, 0);
      c_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14(b_162, c_162, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm k_75 = t;
  int n_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(n_75);
    }
  else
    {
      t = k_75;
    }
  return(t);
}
static ATerm i_15 (ATerm l_84, ATerm t)
{
  t = l_84;
  t = reverse_acc_2_0(_id, e_14, t);
  t = map_1_0(m_14, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  static ATerm f_162 (ATerm t);
  static ATerm f_162 (ATerm t)
  {
    ATerm o_75 = t;
    int p_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_117(t);
        LocalPopChoice(p_75);
      }
    else
      {
        t = o_75;
        t = SRTS_one(f_162, t);
      }
    return(t);
  }
  t = f_162(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm g_162 = NULL,h_162 = NULL;
  t = term_q_75;
  g_162 = t;
  t = term_r_75;
  h_162 = t;
  t = term_t_75;
  t = b_16(g_162, h_162, t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm u_75 = t;
  int v_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_162 = NULL,j_162 = NULL,k_162 = NULL;
      t = term_w_75;
      t = get_options_0_0(t);
      t = oncetd_1_0(o_14, t);
      t = term_m_19;
      j_162 = t;
      t = (ATerm) ATinsert(ATempty, term_y_75);
      k_162 = t;
      t = SSL_printnl(j_162, k_162);
      t = term_p_19;
      i_162 = t;
      t = SSL_exit(i_162);
      t = (ATerm) ATinsert(ATempty, term_y_75);
      LocalPopChoice(v_75);
    }
  else
    {
      t = u_75;
      {
        ATerm m_162 = NULL,n_162 = NULL;
        t = term_m_19;
        m_162 = t;
        t = (ATerm) ATinsert(ATempty, term_a_76);
        n_162 = t;
        t = SSL_printnl(m_162, n_162);
        t = (ATerm) ATinsert(ATempty, term_a_76);
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm e_122 (ATerm), ATerm t)
{
  ATerm r_162 = NULL,s_162 = NULL,t_162 = NULL,u_162 = NULL;
  r_162 = t;
  t = e_122(t);
  s_162 = t;
  t = term_m_19;
  t_162 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_162), s_162);
  u_162 = t;
  t = SSL_printnl(t_162, u_162);
  t = r_162;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm w_162 = NULL,x_162 = NULL,f_85 = NULL,g_85 = NULL;
  t = if_verbose1_1_0(q_14, t);
  t = ReadFromFile_0_0(t);
  x_162 = t;
  t = SSL_explode_term(x_162);
  if(match_cons(t, sym__2))
    {
      g_85 = ATgetArgument(t, 0);
      {
        ATerm b_76 = ATgetArgument(t, 1);
        if(((ATgetType(b_76) == AT_LIST) && !(ATisEmpty(b_76))))
          {
            f_85 = ATgetFirst((ATermList) b_76);
            {
              ATerm c_76 = (ATerm) ATgetNext((ATermList) b_76);
              if(((ATgetType(c_76) != AT_LIST) || !(ATisEmpty(c_76))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_85;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = f_85;
  if(match_cons(t, sym_PP_Table_1))
    {
      w_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_15(w_162, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = debug_1_0(s_14, t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_d_76;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm v_162 = NULL;
  v_162 = t;
  t = term_m_32;
  t = table_create_0_0(t);
  t = v_162;
  t = map_1_0(p_14, t);
  return(t);
}
static ATerm l_15 (ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm z_34, ATerm y_34, ATerm t)
{
  t = e_127(t);
  {
    static ATerm t_14 (ATerm t);
    static ATerm t_14 (ATerm t)
    {
      ATerm y_162 = NULL;
      y_162 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_34, y_162);
      t = d_127(t);
      return(t);
    }
    t = fetch_1_0(t_14, t);
  }
  t = y_34;
  return(t);
}
static ATerm m_15 (ATerm a_127 (ATerm), ATerm v_34, ATerm u_34, ATerm t)
{
  static ATerm p_163 (ATerm t);
  static ATerm p_163 (ATerm t)
  {
    ATerm k_163 = NULL,l_163 = NULL,m_163 = NULL;
    k_163 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_163 = ATgetFirst((ATermList) t);
            m_163 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_76 = t;
          int f_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_163;
              {
                static ATerm b_15 (ATerm t);
                static ATerm b_15 (ATerm t)
                {
                  t = u_34;
                  return(t);
                }
                t = l_15(a_127, b_15, l_163, m_163, t);
              }
              t = p_163(t);
              LocalPopChoice(f_76);
            }
          else
            {
              t = e_76;
              {
                ATerm w_85 = NULL,a_86 = NULL,z_33 = NULL;
                t = SSLgetAnnotations(k_163);
                w_85 = t;
                t = m_163;
                t = p_163(t);
                a_86 = t;
                t = (ATerm) ATinsert(CheckATermList(a_86), l_163);
                z_33 = t;
                t = SSLsetAnnotations(z_33, w_85);
              }
            }
        }
      }
    return(t);
  }
  t = v_34;
  t = p_163(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t)
{
  ATerm s_163 = NULL,t_163 = NULL,u_163 = NULL;
  s_163 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_163;
      t = q_129(t);
    }
  else
    {
      ATerm x_163 = NULL,y_163 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_163 = ATgetFirst((ATermList) t);
          u_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_163;
      t = s_129(t);
      x_163 = t;
      t = u_163;
      t = foldr_3_0(q_129, r_129, s_129, t);
      y_163 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_163, y_163);
      t = r_129(t);
    }
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm i_128 (ATerm), ATerm j_128 (ATerm), ATerm t)
{
  ATerm g_76 = t;
  int h_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_164 = NULL;
      t = i_128(t);
      b_164 = t;
      t = (ATerm) ATinsert(ATempty, b_164);
      LocalPopChoice(h_76);
    }
  else
    {
      t = g_76;
      {
        ATerm g_86 = NULL,h_86 = NULL;
        static ATerm d_15 (ATerm t);
        static ATerm d_15 (ATerm t)
        {
          t = collect_om_2_0(i_128, j_128, t);
          return(t);
        }
        h_86 = t;
        t = SSL_explode_term(h_86);
        if(match_cons(t, sym__2))
          {
            ATerm i_76 = ATgetArgument(t, 0);
            g_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_86;
        t = foldr_3_0(c_15, j_128, d_15, t);
      }
    }
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm l_164 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      l_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_164;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm m_164 = NULL,n_164 = NULL;
  if(match_cons(t, sym__2))
    {
      m_164 = ATgetArgument(t, 0);
      n_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(h_15, m_164, n_164, t);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm o_164 = NULL;
  if(match_cons(t, sym__2))
    {
      o_164 = ATgetArgument(t, 0);
      if((o_164 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = sometd_1_0(y_15, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm q_164 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      q_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_164;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm k_76 = t;
  int p_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_76 = ATgetFirst((ATermList) t);
              ATerm r_76 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(h_16, t);
      LocalPopChoice(p_76);
    }
  else
    {
      t = k_76;
    }
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm s_76 = t;
  if((PushChoice() == 0))
    {
      ATerm s_164 = NULL,t_164 = NULL,u_164 = NULL,b_34 = NULL;
      u_164 = t;
      if(match_cons(t, sym_opt_1))
        {
          t_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_164);
      s_164 = t;
      t = t_164;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, t_164);
      b_34 = t;
      t = SSLsetAnnotations(b_34, s_164);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_76;
    }
  {
    ATerm t_76 = t;
    if((PushChoice() == 0))
      {
        ATerm v_164 = NULL,w_164 = NULL,x_164 = NULL,d_34 = NULL;
        x_164 = t;
        if(match_cons(t, sym_layout_1))
          {
            w_164 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_164);
        v_164 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, w_164);
        d_34 = t;
        t = SSLsetAnnotations(d_34, v_164);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_76;
      }
  }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm k_165 = NULL,l_165 = NULL,m_165 = NULL,e_34 = NULL;
  m_165 = t;
  if(match_cons(t, sym_layout_1))
    {
      l_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_165);
  k_165 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, l_165);
  e_34 = t;
  t = SSLsetAnnotations(e_34, k_165);
  return(t);
}
static ATerm n_15 (ATerm a_27, ATerm z_26, ATerm t)
{
  ATerm h_164 = NULL,i_164 = NULL,j_164 = NULL,k_164 = NULL;
  t = a_27;
  t = collect_om_2_0(e_15, f_15, t);
  t = reverse_acc_2_0(_id, j_15, t);
  t = read_pp_tables_0_0(t);
  t = z_26;
  t = repeat_2_0(k_15, _id, t);
  k_164 = t;
  t = topdown_1_0(g_16, t);
  {
    ATerm u_76 = t;
    int v_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_165 = NULL,b_165 = NULL,c_165 = NULL,d_165 = NULL,e_165 = NULL,f_165 = NULL;
        a_165 = t;
        if(match_cons(t, sym_appl_2))
          {
            b_165 = ATgetArgument(t, 0);
            f_165 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_165;
        if(match_cons(t, sym_prod_3))
          {
            c_165 = ATgetArgument(t, 0);
            d_165 = ATgetArgument(t, 1);
            e_165 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = a_165;
        t = y_14(c_165, d_165, e_165, f_165, t);
        LocalPopChoice(v_76);
      }
    else
      {
        t = u_76;
        t = fatal_ambiguity_0_0(t);
      }
  }
  i_164 = t;
  t = k_164;
  t = collect_p__1_0(i_16, t);
  j_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_164, j_164);
  t = insert_layout_0_0(t);
  h_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_27, h_164);
  return(t);
}
static ATerm p_15 (ATerm l_44, ATerm m_44, ATerm t)
{
  ATerm n_165 = NULL;
  t = SSL_fputc(l_44, m_44);
  n_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_165);
  return(t);
}
static ATerm q_15 (ATerm q_28, ATerm r_28, ATerm t)
{
  ATerm o_165 = NULL;
  t = SSL_write_term_to_stream_text(q_28, r_28);
  o_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_165);
  return(t);
}
static ATerm s_15 (ATerm g_122 (ATerm), ATerm n_221, ATerm w_28, ATerm t)
{
  ATerm p_165 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_221, term_w_76);
  t = w_15(t);
  p_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_165, w_28);
  t = g_122(t);
  t = fclose_0_0(t);
  t = w_28;
  return(t);
}
static ATerm r_15 (ATerm m_28, ATerm n_28, ATerm t)
{
  ATerm q_165 = NULL;
  t = SSL_write_term_to_stream_baf(m_28, n_28);
  q_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_165);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_76 = ATgetArgument(t, 0);
      if(match_cons(x_76, sym_Stream_1))
        {
          x_86 = ATgetArgument(x_76, 0);
        }
      else
        _fail(t);
      y_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(x_86, y_86, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL,l_87 = NULL,n_87 = NULL,r_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_76 = ATgetArgument(t, 0);
      if(match_cons(y_76, sym_Stream_1))
        {
          n_87 = ATgetArgument(y_76, 0);
        }
      else
        _fail(t);
      r_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_15(n_87, r_87, t);
  j_87 = t;
  t = term_q_39;
  k_87 = t;
  t = j_87;
  if(match_cons(t, sym_Stream_1))
    {
      l_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_39, j_87);
  t = p_15(k_87, l_87, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_165 = NULL,v_165 = NULL,w_165 = NULL,x_165 = NULL,y_165 = NULL,a_166 = NULL,b_166 = NULL,c_166 = NULL,d_166 = NULL,e_166 = NULL,e_167 = NULL,f_167 = NULL,k_34 = NULL,j_34 = NULL;
  v_165 = t;
  if(match_cons(t, sym__2))
    {
      c_166 = ATgetArgument(t, 0);
      d_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_165);
  b_166 = t;
  t = c_166;
  {
    ATerm z_76 = t;
    int a_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_16 (ATerm t);
        static ATerm j_16 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_165 != NULL) && (u_165 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_165 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_16, t);
        LocalPopChoice(a_77);
      }
    else
      {
        t = z_76;
        t = term_b_77;
        u_165 = t;
      }
  }
  e_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_166, d_166);
  j_34 = t;
  t = SSLsetAnnotations(j_34, b_166);
  t = v_165;
  if(match_cons(t, sym__2))
    {
      x_165 = ATgetArgument(t, 0);
      y_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_165);
  w_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_165, (ATerm) ATmakeAppl(sym__2, not_null(u_165), y_165));
  k_34 = t;
  t = SSLsetAnnotations(k_34, w_165);
  a_166 = t;
  if(match_cons(t, sym__2))
    {
      e_167 = ATgetArgument(t, 0);
      f_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_77 = t;
    int e_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,l_34 = NULL;
        t = SSLgetAnnotations(a_166);
        q_86 = t;
        t = e_167;
        t = fetch_1_0(k_16, t);
        t_86 = t;
        t = f_167;
        if(match_cons(t, sym__2))
          {
            v_86 = ATgetArgument(t, 0);
            w_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_15(m_16, v_86, w_86, t);
        u_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_86, u_86);
        l_34 = t;
        t = SSLsetAnnotations(l_34, q_86);
        LocalPopChoice(e_77);
      }
    else
      {
        t = d_77;
        {
          ATerm d_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,m_34 = NULL;
          t = SSLgetAnnotations(a_166);
          d_87 = t;
          t = f_167;
          if(match_cons(t, sym__2))
            {
              h_87 = ATgetArgument(t, 0);
              i_87 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_15(n_16, h_87, i_87, t);
          g_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_167, g_87);
          m_34 = t;
          t = SSLsetAnnotations(m_34, d_87);
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
ATerm apply_strategy_1_0 (ATerm k_141 (ATerm), ATerm t)
{
  ATerm i_167 = NULL,j_167 = NULL,k_167 = NULL,l_167 = NULL,m_167 = NULL;
  m_167 = t;
  t = dtime_0_0(t);
  t = m_167;
  t = k_141(t);
  l_167 = t;
  t = dtime_0_0(t);
  i_167 = t;
  t = l_167;
  if(match_cons(t, sym__2))
    {
      j_167 = ATgetArgument(t, 0);
      k_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_167), (ATerm) ATmakeAppl(sym_Runtime_1, i_167)), k_167);
  return(t);
}
static ATerm a_168 (ATerm u_167, ATerm t)
{
  t = SSL_fclose(u_167);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_167 = NULL,y_167 = NULL;
  y_167 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_167 = ATgetArgument(t, 0);
      {
        ATerm f_77 = t;
        int g_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_167);
            LocalPopChoice(g_77);
          }
        else
          {
            t = f_77;
            t = a_168(y_167, t);
          }
      }
    }
  else
    {
      t = a_168(y_167, t);
    }
  return(t);
}
static ATerm t_15 (ATerm s_28, ATerm t)
{
  t = SSL_read_term_from_stream(s_28);
  return(t);
}
static ATerm u_15 (ATerm p_42, ATerm q_42, ATerm t)
{
  t = SSL_strcat(p_42, q_42);
  return(t);
}
static ATerm v_15 (ATerm n_44, ATerm o_44, ATerm t)
{
  ATerm b_168 = NULL;
  t = SSL_fopen(n_44, o_44);
  b_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_168);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_168 = NULL;
  t = SSL_stdin_stream();
  c_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_168);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_168 = NULL;
  t = SSL_stdout_stream();
  d_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_168);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_168 = NULL;
  t = SSL_stderr_stream();
  e_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_168);
  return(t);
}
static ATerm l_169 (ATerm k_168, ATerm t)
{
  ATerm l_168 = NULL;
  t = SSL_explode_term(k_168);
  if(match_cons(t, sym__2))
    {
      ATerm h_77 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_77) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_77 = ATgetArgument(t, 1);
        if(((ATgetType(i_77) == AT_LIST) && !(ATisEmpty(i_77))))
          {
            l_168 = ATgetFirst((ATermList) i_77);
            {
              ATerm j_77 = (ATerm) ATgetNext((ATermList) i_77);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_168;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_168;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_168;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_168;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_169 (ATerm o_168, ATerm p_168, ATerm q_168, ATerm t)
{
  ATerm r_168 = NULL,s_168 = NULL,t_168 = NULL,w_168 = NULL,x_38 = NULL;
  t = SSLgetAnnotations(q_168);
  t_168 = t;
  t = o_168;
  if(match_cons(t, sym_Path_1))
    {
      w_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_168, p_168);
  x_38 = t;
  t = SSLsetAnnotations(x_38, t_168);
  if(match_cons(t, sym__2))
    {
      r_168 = ATgetArgument(t, 0);
      s_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(r_168, s_168, t);
  return(t);
}
static ATerm n_169 (ATerm y_168, ATerm z_168, ATerm a_169, ATerm t)
{
  ATerm b_169 = NULL,c_169 = NULL,d_169 = NULL,g_169 = NULL,d_39 = NULL;
  t = SSLgetAnnotations(a_169);
  d_169 = t;
  t = SSL_is_string(y_168);
  g_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_169, z_168);
  d_39 = t;
  t = SSLsetAnnotations(d_39, d_169);
  if(match_cons(t, sym__2))
    {
      b_169 = ATgetArgument(t, 0);
      c_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(b_169, c_169, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm i_169 = NULL,j_169 = NULL,k_169 = NULL;
  i_169 = t;
  if(match_cons(t, sym__2))
    {
      j_169 = ATgetArgument(t, 0);
      k_169 = ATgetArgument(t, 1);
      {
        ATerm k_77 = t;
        int l_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_169(i_169, t);
            LocalPopChoice(l_77);
          }
        else
          {
            t = k_77;
            {
              ATerm m_77 = t;
              int n_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_169(j_169, k_169, i_169, t);
                  LocalPopChoice(n_77);
                }
              else
                {
                  t = m_77;
                  t = n_169(j_169, k_169, i_169, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_169(i_169, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_169 = NULL,q_169 = NULL,r_169 = NULL,w_169 = NULL;
  w_169 = t;
  {
    ATerm o_77 = t;
    int t_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_169, term_q_33);
        t = w_15(t);
        LocalPopChoice(t_77);
      }
    else
      {
        t = o_77;
        {
          ATerm n_88 = NULL,q_88 = NULL;
          t = term_u_77;
          q_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_77, w_169);
          t = u_15(q_88, w_169, t);
          n_88 = t;
          t = SSL_perror(n_88);
          _fail(t);
        }
      }
  }
  q_169 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(r_169, t);
  p_169 = t;
  t = q_169;
  t = fclose_0_0(t);
  t = p_169;
  return(t);
}
ATerm fetch_1_0 (ATerm z_122 (ATerm), ATerm t)
{
  static ATerm v_170 (ATerm t);
  static ATerm v_170 (ATerm t)
  {
    ATerm s_170 = NULL,t_170 = NULL,u_170 = NULL;
    s_170 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_170 = ATgetFirst((ATermList) t);
        u_170 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_77 = t;
      int y_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_88 = NULL,b_89 = NULL,h_39 = NULL;
          t = SSLgetAnnotations(s_170);
          y_88 = t;
          t = t_170;
          t = z_122(t);
          b_89 = t;
          t = (ATerm) ATinsert(CheckATermList(u_170), b_89);
          h_39 = t;
          t = SSLsetAnnotations(h_39, y_88);
          LocalPopChoice(y_77);
        }
      else
        {
          t = x_77;
          {
            ATerm j_89 = NULL,m_89 = NULL,i_39 = NULL;
            t = SSLgetAnnotations(s_170);
            j_89 = t;
            t = u_170;
            t = v_170(t);
            m_89 = t;
            t = (ATerm) ATinsert(CheckATermList(m_89), t_170);
            i_39 = t;
            t = SSLsetAnnotations(i_39, j_89);
          }
        }
    }
    return(t);
  }
  t = v_170(t);
  return(t);
}
static ATerm b_16 (ATerm y_61, ATerm z_61, ATerm t)
{
  ATerm y_170 = NULL;
  t = lookup_table_0_1(y_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_16(z_61, y_170, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_139 (ATerm), ATerm t)
{
  ATerm b_171 = NULL;
  b_171 = t;
  {
    ATerm z_77 = t;
    int a_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_171 = NULL,e_171 = NULL,f_171 = NULL;
        t = term_w_33;
        e_171 = t;
        t = term_t_33;
        f_171 = t;
        t = term_x_33;
        t = b_16(e_171, f_171, t);
        d_171 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_171, term_p_25);
        t = geq_0_0(t);
        t = b_171;
        t = t_139(t);
        LocalPopChoice(a_78);
      }
    else
      {
        t = z_77;
        t = b_171;
      }
  }
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm i_171 = NULL;
  i_171 = t;
  if(match_string(t, "-k"))
    {
      t = i_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_171;
    }
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm j_171 = NULL,k_171 = NULL,l_171 = NULL;
  j_171 = t;
  t = SSL_string_to_int(j_171);
  k_171 = t;
  t = term_b_78;
  l_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_78, k_171);
  t = d_16(l_171, k_171, t);
  t = j_171;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = term_c_78;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_16, t_16, v_16, t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm n_171 = NULL;
  n_171 = t;
  if(match_string(t, "-S"))
    {
      t = n_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_171;
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm o_171 = NULL,p_171 = NULL;
  t = term_t_33;
  o_171 = t;
  t = term_d_78;
  p_171 = t;
  t = term_e_78;
  t = d_16(o_171, p_171, t);
  t = term_g_78;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_h_78;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm q_171 = NULL,r_171 = NULL,s_171 = NULL;
  q_171 = t;
  t = SSL_string_to_int(q_171);
  r_171 = t;
  t = term_t_33;
  s_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_33, r_171);
  t = d_16(s_171, r_171, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_171);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_i_78;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm t_171 = NULL,u_171 = NULL;
  t = term_j_78;
  t_171 = t;
  t = term_l_19;
  u_171 = t;
  t = term_k_78;
  t = d_16(t_171, u_171, t);
  t = term_l_78;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_q_78;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_78 = t;
  int u_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_16, a_17, c_17, t);
      LocalPopChoice(u_78);
    }
  else
    {
      t = t_78;
      {
        ATerm v_78 = t;
        int w_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_17, j_17, k_17, t);
            LocalPopChoice(w_78);
          }
        else
          {
            t = v_78;
            t = Option_3_0(l_17, m_17, n_17, t);
          }
      }
    }
  return(t);
}
static ATerm d_16 (ATerm p_70, ATerm q_70, ATerm t)
{
  ATerm v_171 = NULL,w_171 = NULL;
  t = term_w_33;
  v_171 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_33, p_70, q_70);
  t = lookup_table_0_1(v_171, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_171 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(p_70, q_70, w_171, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_33, p_70, q_70);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm z_171 = NULL;
  z_171 = t;
  if(match_string(t, "-o"))
    {
      t = z_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_171;
    }
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm a_172 = NULL,b_172 = NULL;
  a_172 = t;
  t = term_a_43;
  b_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_43, a_172);
  t = d_16(b_172, a_172, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_172);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_x_78;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_17, q_17, s_17, t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm d_172 = NULL;
  d_172 = t;
  if(match_string(t, "-i"))
    {
      t = d_172;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_172;
    }
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm e_172 = NULL,f_172 = NULL;
  e_172 = t;
  t = term_c_43;
  f_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_43, e_172);
  t = d_16(f_172, e_172, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_172);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_y_78;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_17, u_17, v_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_172 = NULL,h_172 = NULL,i_172 = NULL,j_172 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_19;
  t = whoami_0_0(t);
  g_172 = t;
  t = term_m_19;
  i_172 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_78), g_172);
  j_172 = t;
  t = SSL_printnl(i_172, j_172);
  t = term_p_19;
  h_172 = t;
  t = SSL_exit(h_172);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_172 = NULL,l_172 = NULL;
  t = term_w_33;
  k_172 = t;
  t = term_b_79;
  l_172 = t;
  t = term_c_79;
  t = b_16(k_172, l_172, t);
  return(t);
}
static ATerm x_15 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm e_79 = t;
  int f_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_47, h_47);
      LocalPopChoice(f_79);
    }
  else
    {
      t = e_79;
      t = SSL_addr(g_47, h_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm t)
{
  ATerm n_172 = NULL,o_172 = NULL,p_172 = NULL;
  n_172 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_172;
      t = o_129(t);
    }
  else
    {
      ATerm s_172 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_172 = ATgetFirst((ATermList) t);
          p_172 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_172;
      t = foldr_2_0(o_129, p_129, t);
      s_172 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_172, s_172);
      t = p_129(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_d_78;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL;
  if(match_cons(t, sym__2))
    {
      x_89 = ATgetArgument(t, 0);
      y_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_15(x_89, y_89, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_172 = NULL,s_89 = NULL,t_89 = NULL;
  t = times_0_0(t);
  t_89 = t;
  t = SSL_explode_term(t_89);
  if(match_cons(t, sym__2))
    {
      ATerm g_79 = ATgetArgument(t, 0);
      s_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_89;
  t = foldr_2_0(w_17, x_17, t);
  v_172 = t;
  t = SSL_TicksToSeconds(v_172);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_173 = NULL,h_173 = NULL,i_173 = NULL;
  g_173 = t;
  if(match_cons(t, sym__2))
    {
      h_173 = ATgetArgument(t, 0);
      i_173 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_79 = t;
    int i_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_173;
        if((h_173 != t))
          {
            _fail(t);
          }
        t = g_173;
        LocalPopChoice(i_79);
      }
    else
      {
        t = h_79;
        t = (ATerm) ATmakeAppl(sym__2, h_173, i_173);
        {
          ATerm k_79 = t;
          int l_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_173, i_173);
              LocalPopChoice(l_79);
            }
          else
            {
              t = k_79;
              t = SSL_gtr(h_173, i_173);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_173, i_173);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_139 (ATerm), ATerm t)
{
  ATerm m_173 = NULL;
  m_173 = t;
  {
    ATerm m_79 = t;
    int n_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_173 = NULL,p_173 = NULL,q_173 = NULL;
        t = term_w_33;
        p_173 = t;
        t = term_t_33;
        q_173 = t;
        t = term_x_33;
        t = b_16(p_173, q_173, t);
        o_173 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_173, term_p_19);
        t = geq_0_0(t);
        t = m_173;
        t = s_139(t);
        LocalPopChoice(n_79);
      }
    else
      {
        t = m_79;
        t = m_173;
      }
  }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm s_173 = NULL,t_173 = NULL,v_173 = NULL,w_173 = NULL;
  t = run_time_0_0(t);
  s_173 = t;
  t = term_l_19;
  t = whoami_0_0(t);
  t_173 = t;
  t = term_m_19;
  v_173 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_79), s_173), term_h_34), t_173);
  w_173 = t;
  t = SSL_printnl(v_173, w_173);
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_79), s_173), term_h_34), t_173));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_173 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_78;
  x_173 = t;
  t = SSL_exit(x_173);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm h_174 = NULL,i_174 = NULL;
  i_174 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_174;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_174 = ATgetArgument(t, 0);
          {
            ATerm k_90 = NULL,l_39 = NULL;
            t = SSLgetAnnotations(i_174);
            k_90 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_174);
            l_39 = t;
            t = SSLsetAnnotations(l_39, k_90);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_174;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_142 (ATerm), ATerm t)
{
  ATerm u_79 = t;
  int v_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_174 = NULL,b_174 = NULL;
      t = term_w_33;
      a_174 = t;
      t = term_w_79;
      b_174 = t;
      t = term_x_79;
      t = b_16(a_174, b_174, t);
      LocalPopChoice(v_79);
    }
  else
    {
      t = u_79;
      t = fetch_1_0(z_17, t);
    }
  t = i_142(t);
  return(t);
}
static ATerm e_16 (ATerm x_64, ATerm y_64, ATerm z_64, ATerm t)
{
  ATerm k_174 = NULL;
  t = SSL_hashtable_put(z_64, x_64, y_64);
  k_174 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_174);
  return(t);
}
static ATerm f_16 (ATerm a_65, ATerm b_65, ATerm t)
{
  t = SSL_hashtable_get(b_65, a_65);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_61, ATerm t)
{
  ATerm t_174 = NULL;
  t = table_hashtable_0_0(t);
  t_174 = t;
  {
    ATerm y_79 = t;
    int z_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_90 = NULL;
        t = t_174;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_90 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_16(r_61, q_90, t);
        LocalPopChoice(z_79);
      }
    else
      {
        t = y_79;
        {
          ATerm v_90 = NULL;
          t = r_61;
          t = table_create_0_0(t);
          t = t_174;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_16(r_61, v_90, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm f_65, ATerm g_65, ATerm t)
{
  ATerm w_174 = NULL;
  t = SSL_hashtable_create(f_65, g_65);
  w_174 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_174);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_174 = NULL,y_174 = NULL,z_174 = NULL,b_175 = NULL,c_175 = NULL;
  x_174 = t;
  t = term_a_80;
  b_175 = t;
  t = term_b_80;
  c_175 = t;
  t = x_174;
  t = new_hashtable_0_2(b_175, c_175, t);
  y_174 = t;
  t = x_174;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(x_174, y_174, z_174, t);
  t = x_174;
  return(t);
}
static ATerm z_15 (ATerm c_65, ATerm d_65, ATerm t)
{
  ATerm d_175 = NULL;
  t = SSL_hashtable_remove(d_65, c_65);
  d_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_175);
  return(t);
}
static ATerm a_16 (ATerm h_65, ATerm t)
{
  ATerm e_175 = NULL;
  t = SSL_hashtable_destroy(h_65);
  e_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_175);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_175 = NULL;
  t = SSL_table_hashtable();
  f_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_175);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_175 = NULL,h_175 = NULL,i_175 = NULL,j_175 = NULL;
  g_175 = t;
  t = table_hashtable_0_0(t);
  h_175 = t;
  t = lookup_table_0_1(g_175, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_16(j_175, t);
  t = h_175;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_15(g_175, i_175, t);
  t = g_175;
  return(t);
}
ATerm map_1_0 (ATerm p_122 (ATerm), ATerm t)
{
  static ATerm y_175 (ATerm t);
  static ATerm y_175 (ATerm t)
  {
    ATerm v_175 = NULL,w_175 = NULL,x_175 = NULL;
    v_175 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_175;
      }
    else
      {
        ATerm a_91 = NULL,h_91 = NULL,j_91 = NULL,p_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_175 = ATgetFirst((ATermList) t);
            x_175 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_175);
        a_91 = t;
        t = w_175;
        t = p_122(t);
        h_91 = t;
        t = x_175;
        t = y_175(t);
        j_91 = t;
        t = (ATerm) ATinsert(CheckATermList(j_91), h_91);
        p_39 = t;
        t = SSLsetAnnotations(p_39, a_91);
      }
    return(t);
  }
  t = y_175(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm b_176 = NULL,c_176 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_176 = ATgetFirst((ATermList) t);
      c_176 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_176 = NULL,h_176 = NULL;
        static ATerm a_18 (ATerm t);
        static ATerm a_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_176)), not_null(h_176));
          return(t);
        }
        t = c_176;
        t = f_0(t);
        if(((g_176 != NULL) && (g_176 != t)))
          _fail(t);
        else
          g_176 = t;
        t = b_176;
        t = d_0(t);
        if(((h_176 != NULL) && (h_176 != t)))
          _fail(t);
        else
          h_176 = t;
        t = c_176;
        t = reverse_acc_2_0(d_0, a_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_19;
      t = f_0(t);
    }
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm o_176 = NULL,p_176 = NULL,q_176 = NULL,s_40 = NULL;
  q_176 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_176);
  o_176 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_176);
  s_40 = t;
  t = SSLsetAnnotations(s_40, o_176);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm s_176 = NULL;
  s_176 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_176), term_c_80);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_176 = NULL,l_176 = NULL;
  ATerm e_80 = t;
  int f_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_176 = NULL,n_176 = NULL;
      t = term_w_33;
      m_176 = t;
      t = term_b_79;
      n_176 = t;
      t = term_c_79;
      t = b_16(m_176, n_176, t);
      LocalPopChoice(f_80);
    }
  else
    {
      t = e_80;
      t = fetch_1_0(b_18, t);
    }
  t = term_g_80;
  t = echo_0_0(t);
  t = term_q_19;
  j_176 = t;
  t = term_r_19;
  l_176 = t;
  t = term_h_80;
  t = b_16(j_176, l_176, t);
  t = reverse_acc_2_0(_id, c_18, t);
  t = map_1_0(d_18, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_176 = NULL,v_176 = NULL,x_176 = NULL;
  u_176 = t;
  {
    ATerm j_80 = t;
    int k_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_176;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_80 = ATgetFirst((ATermList) t);
                ATerm m_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_176;
          }
        LocalPopChoice(k_80);
      }
    else
      {
        t = j_80;
        t = (ATerm) ATinsert(ATempty, u_176);
      }
  }
  v_176 = t;
  t = term_b_77;
  x_176 = t;
  t = SSL_printnl(x_176, v_176);
  t = u_176;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_177 = NULL,c_177 = NULL;
  t = term_w_33;
  b_177 = t;
  t = term_b_79;
  c_177 = t;
  t = term_c_79;
  t = b_16(b_177, c_177, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm d_177 = NULL,e_177 = NULL;
  t = term_n_80;
  d_177 = t;
  t = term_l_19;
  e_177 = t;
  t = term_o_80;
  t = d_16(d_177, e_177, t);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  t = term_p_80;
  return(t);
}
static ATerm h_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm f_177 = NULL,g_177 = NULL,h_177 = NULL,i_177 = NULL;
  t = term_n_80;
  h_177 = t;
  t = term_l_19;
  i_177 = t;
  t = term_o_80;
  t = d_16(h_177, i_177, t);
  t = term_r_80;
  f_177 = t;
  t = term_l_19;
  g_177 = t;
  t = term_s_80;
  t = d_16(f_177, g_177, t);
  t = term_t_80;
  return(t);
}
static ATerm k_18 (ATerm t)
{
  t = term_u_80;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_80 = t;
  int x_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_18, f_18, g_18, t);
      LocalPopChoice(x_80);
    }
  else
    {
      t = v_80;
      t = Option_3_0(h_18, j_18, k_18, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t)
{
  ATerm j_177 = NULL,k_177 = NULL,l_177 = NULL,m_177 = NULL,n_177 = NULL,o_177 = NULL,w_40 = NULL;
  o_177 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_177 = ATgetFirst((ATermList) t);
      l_177 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_177);
  j_177 = t;
  t = k_177;
  t = d_93(t);
  m_177 = t;
  t = l_177;
  t = e_93(t);
  n_177 = t;
  t = (ATerm) ATinsert(CheckATermList(n_177), m_177);
  w_40 = t;
  t = SSLsetAnnotations(w_40, j_177);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_144 (ATerm), ATerm t)
{
  ATerm t_177 = NULL,u_177 = NULL,w_177 = NULL,x_177 = NULL,z_177 = NULL,a_178 = NULL,a_41 = NULL;
  t_177 = t;
  {
    ATerm y_80 = t;
    int z_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_81;
        t = l_144(t);
        LocalPopChoice(z_80);
      }
    else
      {
        t = y_80;
      }
  }
  t = t_177;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_177 = ATgetFirst((ATermList) t);
      x_177 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_177);
  u_177 = t;
  t = term_b_79;
  a_178 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_79, w_177);
  t = d_16(a_178, w_177, t);
  t = x_177;
  {
    static ATerm l_178 (ATerm t);
    static ATerm l_178 (ATerm t)
    {
      ATerm c_81 = t;
      int d_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_81 = t;
          int h_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_178 = NULL;
              d_178 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_178;
              LocalPopChoice(h_81);
            }
          else
            {
              t = f_81;
              t = l_144(t);
              t = Cons_2_0(_id, l_178, t);
            }
          LocalPopChoice(d_81);
        }
      else
        {
          t = c_81;
          {
            ATerm g_178 = NULL,i_178 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_178 = ATgetFirst((ATermList) t);
                i_178 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_178), (ATerm) ATmakeAppl(sym_Undefined_1, g_178));
          }
        }
      return(t);
    }
    t = l_178(t);
  }
  z_177 = t;
  t = (ATerm) ATinsert(CheckATermList(z_177), (ATerm) ATmakeAppl(sym_Program_1, w_177));
  a_41 = t;
  t = SSLsetAnnotations(a_41, u_177);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm y_178 = NULL;
  y_178 = t;
  if(match_string(t, "--help"))
    {
      t = y_178;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_178;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_178;
        }
    }
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm z_178 = NULL,a_179 = NULL;
  t = term_w_79;
  z_178 = t;
  t = term_l_19;
  a_179 = t;
  t = term_i_81;
  t = d_16(z_178, a_179, t);
  t = term_j_81;
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_k_81;
  return(t);
}
static ATerm q_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_144 (ATerm), ATerm t)
{
  ATerm q_178 = NULL,r_178 = NULL,s_178 = NULL,t_178 = NULL,u_178 = NULL,v_178 = NULL,w_178 = NULL,x_178 = NULL;
  s_178 = t;
  t = term_q_19;
  t_178 = t;
  t = term_l_81;
  t = lookup_table_0_1(t_178, t);
  x_178 = t;
  t = term_r_19;
  u_178 = t;
  t = (ATerm) ATempty;
  v_178 = t;
  t = x_178;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(u_178, v_178, w_178, t);
  t = s_178;
  {
    static ATerm m_18 (ATerm t);
    static ATerm m_18 (ATerm t)
    {
      ATerm m_81 = t;
      int o_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_144(t);
          LocalPopChoice(o_81);
        }
      else
        {
          t = m_81;
          {
            ATerm t_81 = t;
            int u_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_18, o_18, p_18, t);
                LocalPopChoice(u_81);
              }
            else
              {
                t = t_81;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_18, t);
  }
  {
    ATerm w_81 = t;
    int x_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_179 = NULL;
        l_179 = t;
        {
          ATerm e_82 = t;
          int f_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_91 = NULL;
              t = l_179;
              {
                ATerm h_82 = t;
                int i_82 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_92 = NULL,g_92 = NULL;
                    t = term_w_33;
                    f_92 = t;
                    t = term_w_79;
                    g_92 = t;
                    t = term_x_79;
                    t = b_16(f_92, g_92, t);
                    LocalPopChoice(i_82);
                  }
                else
                  {
                    t = h_82;
                    t = fetch_1_0(q_18, t);
                  }
              }
              t = l_179;
              t = default_system_usage_0_0(t);
              t = term_d_78;
              z_91 = t;
              t = SSL_exit(z_91);
              LocalPopChoice(f_82);
            }
          else
            {
              t = e_82;
              {
                ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL;
                t = term_w_33;
                p_92 = t;
                t = term_n_80;
                q_92 = t;
                t = term_j_82;
                t = b_16(p_92, q_92, t);
                t = l_179;
                t = default_system_about_0_0(t);
                t = term_d_78;
                o_92 = t;
                t = SSL_exit(o_92);
              }
            }
        }
        LocalPopChoice(x_81);
      }
    else
      {
        t = w_81;
        {
          ATerm n_82 = t;
          int o_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_179 = NULL,n_179 = NULL,o_179 = NULL;
              static ATerm r_18 (ATerm t);
              static ATerm r_18 (ATerm t)
              {
                ATerm p_179 = NULL,q_179 = NULL,r_179 = NULL,j_41 = NULL;
                r_179 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_179 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_179);
                p_179 = t;
                t = q_179;
                if(((q_178 != NULL) && (q_178 != t)))
                  _fail(t);
                else
                  q_178 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_179);
                j_41 = t;
                t = SSLsetAnnotations(j_41, p_179);
                return(t);
              }
              t = fetch_1_0(r_18, t);
              t = term_m_19;
              n_179 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_178)), term_p_82);
              o_179 = t;
              t = SSL_printnl(n_179, o_179);
              t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_178)), term_p_82));
              t = default_system_usage_0_0(t);
              t = term_p_19;
              m_179 = t;
              t = SSL_exit(m_179);
              LocalPopChoice(o_82);
            }
          else
            {
              t = n_82;
            }
        }
      }
  }
  r_178 = t;
  t = term_q_19;
  t = table_destroy_0_0(t);
  t = r_178;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm m_142 (ATerm), ATerm n_142 (ATerm), ATerm t)
{
  ATerm w_179 = NULL,x_179 = NULL,y_179 = NULL,z_179 = NULL,a_180 = NULL;
  t = parse_options_1_0(k_142, t);
  w_179 = t;
  t = term_q_75;
  t = table_create_0_0(t);
  t = term_q_75;
  x_179 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_75, term_r_75, w_179);
  t = lookup_table_0_1(x_179, t);
  a_180 = t;
  t = term_r_75;
  y_179 = t;
  t = a_180;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(y_179, w_179, z_179, t);
  t = w_179;
  t = m_142(t);
  {
    ATerm q_82 = t;
    int r_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_142, t);
        LocalPopChoice(r_82);
      }
    else
      {
        t = q_82;
        {
          ATerm s_82 = t;
          int t_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_142(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_82);
            }
          else
            {
              t = s_82;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = if_verbose2_1_0(y_18, t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm b_180 = NULL,c_180 = NULL;
  t = term_u_82;
  b_180 = t;
  t = term_l_19;
  c_180 = t;
  t = term_b_83;
  t = d_16(b_180, c_180, t);
  t = term_c_83;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_d_83;
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm d_180 = NULL,e_180 = NULL,f_180 = NULL,g_180 = NULL,h_180 = NULL,i_180 = NULL;
  d_180 = t;
  t = term_w_33;
  h_180 = t;
  t = term_b_79;
  i_180 = t;
  t = term_c_79;
  t = b_16(h_180, i_180, t);
  e_180 = t;
  t = term_m_19;
  f_180 = t;
  t = (ATerm) ATinsert(ATempty, e_180);
  g_180 = t;
  t = SSL_printnl(f_180, g_180);
  t = d_180;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t)
{
  static ATerm s_18 (ATerm t);
  static ATerm u_18 (ATerm t);
  static ATerm s_18 (ATerm t)
  {
    ATerm e_83 = t;
    int f_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_141(t);
        LocalPopChoice(f_83);
      }
    else
      {
        t = e_83;
        {
          ATerm g_83 = t;
          int h_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(h_83);
            }
          else
            {
              t = g_83;
              {
                ATerm i_83 = t;
                int k_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(k_83);
                  }
                else
                  {
                    t = i_83;
                    {
                      ATerm p_83 = t;
                      int q_83 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_18, w_18, x_18, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_83);
                              }
                            else
                              {
                                t = r_83;
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
  static ATerm u_18 (ATerm t)
  {
    ATerm j_180 = NULL,k_180 = NULL,l_180 = NULL;
    k_180 = t;
    {
      ATerm t_83 = t;
      int u_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_18 (ATerm t);
          static ATerm z_18 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_180 != NULL) && (j_180 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_180 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_18, t);
          LocalPopChoice(u_83);
        }
      else
        {
          t = t_83;
          t = term_y_33;
          j_180 = t;
        }
    }
    t = not_null(j_180);
    t = ReadFromFile_0_0(t);
    l_180 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_180, l_180);
    t = apply_strategy_1_0(t_141, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(s_18, v_141, t_18, u_18, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm m_180 = NULL,n_180 = NULL;
  if(match_cons(t, sym__2))
    {
      m_180 = ATgetArgument(t, 0);
      n_180 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(m_180, n_180, t);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm w_83 = t;
  int a_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_19, d_19, e_19, t);
      LocalPopChoice(a_84);
    }
  else
    {
      t = w_83;
      {
        ATerm b_84 = t;
        int c_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(f_19, g_19, h_19, t);
            LocalPopChoice(c_84);
          }
        else
          {
            t = b_84;
            t = ArgOption_3_0(i_19, j_19, k_19, t);
          }
      }
    }
  return(t);
}
static ATerm c_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_19 (ATerm t)
{
  t = term_d_84;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = term_e_84;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_19 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_f_84;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm o_180 = NULL;
  o_180 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, o_180);
  return(t);
}
static ATerm k_19 (ATerm t)
{
  t = term_g_84;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(a_19, b_19, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

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
ATerm term_q_82;
ATerm term_p_82;
ATerm term_o_82;
ATerm term_n_82;
ATerm term_o_81;
ATerm term_n_81;
ATerm term_m_81;
ATerm term_l_81;
ATerm term_f_81;
ATerm term_c_81;
ATerm term_l_80;
ATerm term_j_80;
ATerm term_i_80;
ATerm term_h_80;
ATerm term_c_80;
ATerm term_w_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_s_79;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_g_79;
ATerm term_c_79;
ATerm term_x_78;
ATerm term_w_78;
ATerm term_v_78;
ATerm term_s_78;
ATerm term_p_78;
ATerm term_k_78;
ATerm term_s_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_m_77;
ATerm term_g_77;
ATerm term_f_77;
ATerm term_d_77;
ATerm term_c_77;
ATerm term_b_77;
ATerm term_a_77;
ATerm term_z_76;
ATerm term_y_76;
ATerm term_w_76;
ATerm term_v_76;
ATerm term_t_76;
ATerm term_o_76;
ATerm term_u_75;
ATerm term_n_75;
ATerm term_m_74;
ATerm term_j_74;
ATerm term_i_74;
ATerm term_g_74;
ATerm term_b_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_j_73;
ATerm term_g_73;
ATerm term_f_73;
ATerm term_k_72;
ATerm term_q_70;
ATerm term_p_70;
ATerm term_o_70;
ATerm term_e_70;
ATerm term_l_69;
ATerm term_c_68;
ATerm term_v_67;
ATerm term_o_67;
ATerm term_h_67;
ATerm term_e_67;
ATerm term_b_67;
ATerm term_o_66;
ATerm term_f_66;
ATerm term_c_66;
ATerm term_w_65;
ATerm term_i_65;
ATerm term_f_65;
ATerm term_c_65;
ATerm term_z_64;
ATerm term_w_64;
ATerm term_t_64;
ATerm term_q_64;
ATerm term_m_64;
ATerm term_i_64;
ATerm term_f_64;
ATerm term_c_64;
ATerm term_x_63;
ATerm term_r_63;
ATerm term_o_63;
ATerm term_k_63;
ATerm term_h_63;
ATerm term_w_62;
ATerm term_t_62;
ATerm term_o_62;
ATerm term_l_62;
ATerm term_h_62;
ATerm term_e_62;
ATerm term_b_62;
ATerm term_y_61;
ATerm term_t_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_e_61;
ATerm term_j_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_v_59;
ATerm term_r_59;
ATerm term_q_59;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_h_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_w_57;
ATerm term_t_57;
ATerm term_k_57;
ATerm term_x_56;
ATerm term_a_55;
ATerm term_e_54;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_v_52;
ATerm term_r_52;
ATerm term_o_52;
ATerm term_e_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_g_50;
ATerm term_e_50;
ATerm term_y_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_y_48;
ATerm term_u_48;
ATerm term_n_48;
ATerm term_t_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_x_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_m_46;
ATerm term_h_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_b_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_l_45;
ATerm term_i_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_s_44;
ATerm term_o_44;
ATerm term_l_44;
ATerm term_e_43;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_a_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_n_41;
ATerm term_g_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_y_40;
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
ATerm term_r_39;
ATerm term_p_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
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
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_h_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_m_33;
ATerm term_h_33;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_z_24;
ATerm term_f_23;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_SOpt_2, term_x_19, term_y_19);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_m_33);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2-pgen2.0.pp.af", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_35, term_g_19, term_q_35);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_35, term_z_24, term_w_35);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_35, term_a_36, term_c_36);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_36, term_g_36, term_j_36);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_36, term_e_32, term_r_36);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_36, term_v_36, term_w_36);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_36, term_c_37, term_d_37);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_37, term_i_37, term_j_37);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_37, term_m_37, term_o_37);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_37, term_t_37, term_w_37);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_37, term_c_38, term_d_38);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_38, term_g_38, term_h_38);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_38, term_p_38, term_q_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_38, term_z_38, term_a_39);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_39, term_d_39, term_e_39);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_39, term_j_39, term_k_39);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_39, term_n_39, term_p_39);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_39, term_x_39, term_y_39);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_40, term_b_40, term_g_40);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_40, term_j_40, term_k_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_40, term_n_40, term_p_40);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_40, term_v_40, term_w_40);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_41, term_b_41, term_c_41);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_41, term_g_41, term_n_41);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_41, term_s_41, term_t_41);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_41, term_x_41, term_y_41);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_42, term_d_42, term_e_42);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_42, term_k_42, term_m_42);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_x_45);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_e_46);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_l_45);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym__2, term_b_49, term_n_48);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym_lit_1, term_a_52);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_lit_1, term_h_35);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_SOpt_2, term_v_52, term_x_52);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Arg_1, term_g_19);
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_o_67));
  term_o_67 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_p_70);
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(sym__2, term_z_73, term_a_74);
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_w_76);
  ATprotect(&(term_z_76));
  term_z_76 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_76);
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(sym__2, term_c_77, term_c_19);
  ATprotect(&(term_f_77));
  term_f_77 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_77));
  term_g_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_r_77);
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_78));
  term_p_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_78));
  term_s_78 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_p_78);
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_79));
  term_g_79 = (ATerm) ATmakeAppl(sym__2, term_h_19, term_i_19);
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(sym__2, term_l_79, term_c_19);
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(sym__2, term_s_79, term_c_19);
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(sym__2, term_p_78, term_c_19);
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(sym__3, term_h_19, term_i_19, (ATerm) ATempty);
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_l_79);
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(sym__2, term_l_81, term_c_19);
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_82));
  term_n_82 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_o_82));
  term_o_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm p_13 (ATerm s_83, ATerm t);
static ATerm i_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm j_6 (ATerm u_2, ATerm v_2, ATerm w_2, ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm k_147 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm collect_p__1_0 (ATerm x_146 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm a_112 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm r_38 (ATerm z_34, ATerm a_35, ATerm b_35, ATerm t);
static ATerm r_13 (ATerm p_21, ATerm o_21, ATerm t);
ATerm instantiate_list_1_0 (ATerm d_147 (ATerm), ATerm t);
static ATerm t_13 (ATerm e_24, ATerm f_24, ATerm c_24, ATerm d_24, ATerm t);
static ATerm y_44 (ATerm v_41, ATerm z_41, ATerm b_42, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm f_147 (ATerm), ATerm t);
static ATerm u_13 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm v_13 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm k_25, ATerm l_25, ATerm t);
ATerm genzip_4_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm nzip_1_0 (ATerm b_121 (ATerm), ATerm t);
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
static ATerm c_14 (ATerm t_80, ATerm s_80, ATerm t);
static ATerm d_14 (ATerm u_118 (ATerm), ATerm g_29, ATerm g_230, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm is_whitespace_0_0 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm k_119 (ATerm), ATerm t);
ATerm rtrim_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm g_119 (ATerm), ATerm t);
ATerm drop_while_1_0 (ATerm h_126 (ATerm), ATerm t);
ATerm ltrim_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm l_0 (ATerm), ATerm t);
static ATerm e_14 (ATerm j_43, ATerm t);
ATerm read_text_from_stream_0_0 (ATerm t);
ATerm read_text_file_0_0 (ATerm t);
static ATerm f_14 (ATerm o_46, ATerm p_46, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm z_145 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm r_144 (ATerm), ATerm s_144 (ATerm), ATerm t);
static ATerm g_14 (ATerm r_62, ATerm s_62, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_136 (ATerm), ATerm t);
static ATerm i_14 (ATerm l_71, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm m_135 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm l_135 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm n_135 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm k_14 (ATerm j_67, ATerm k_67, ATerm l_67, ATerm t);
static ATerm l_14 (ATerm e_140 (ATerm), ATerm t_67, ATerm s_67, ATerm t);
static ATerm m_14 (ATerm g_43, ATerm h_43, ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm o_101 (ATerm l_100, ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm s_145 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm n_14 (ATerm m_66, ATerm n_66, ATerm l_66, ATerm t);
static ATerm o_14 (ATerm x_131 (ATerm), ATerm w_47, ATerm u_47, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm p_14 (ATerm r_66, ATerm s_66, ATerm t);
ATerm end_scope_1_0 (ATerm u_131 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_131 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm e_145 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
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
ATerm ignore_prod_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm e_144 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm x_118 (ATerm), ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
static ATerm q_14 (ATerm z_43, ATerm a_44, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm j_122 (ATerm g_120, ATerm h_120, ATerm j_120, ATerm t);
ATerm number_node_1_0 (ATerm i_144 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm symbol2abox_1_0 (ATerm f_144 (ATerm), ATerm t);
static ATerm m_131 (ATerm r_129, ATerm s_129, ATerm t_129, ATerm t);
static ATerm n_131 (ATerm v_130, ATerm w_130, ATerm x_130, ATerm y_130, ATerm z_130, ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm a_129 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm escape_0_0 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
static ATerm y_136 (ATerm p_136, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm k_140 (ATerm x_139, ATerm t);
static ATerm h_11 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
static ATerm w_14 (ATerm s_28, ATerm t_28, ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm q_147 (ATerm), ATerm t);
static ATerm j_11 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm l_146 (ATerm p_145, ATerm q_145, ATerm r_145, ATerm t);
static ATerm l_11 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm c_15 (ATerm b_22, ATerm c_22, ATerm a_22, ATerm z_21, ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm d_15 (ATerm i_21, ATerm g_21, ATerm h_21, ATerm j_21, ATerm t);
ATerm filter_1_0 (ATerm o_126 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm z_111 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm n_113 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_119 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm e_15 (ATerm q_80, ATerm r_80, ATerm t);
ATerm unescape_chars_1_0 (ATerm c_129 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm n_119 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm unquote_chars_2_0 (ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm g_13 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm n_15 (ATerm p_80, ATerm t);
ATerm oncetd_1_0 (ATerm d_113 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm debug_1_0 (ATerm a_118 (ATerm), ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm q_13 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
static ATerm q_15 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm q_34, ATerm p_34, ATerm t);
static ATerm r_15 (ATerm w_122 (ATerm), ATerm m_34, ATerm l_34, ATerm t);
ATerm foldr_3_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t);
static ATerm y_13 (ATerm t);
ATerm collect_om_2_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t);
static ATerm j_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm s_15 (ATerm s_26, ATerm r_26, ATerm t);
static ATerm u_15 (ATerm n_43, ATerm o_43, ATerm t);
static ATerm v_15 (ATerm i_28, ATerm j_28, ATerm t);
static ATerm x_15 (ATerm c_118 (ATerm), ATerm i_217, ATerm o_28, ATerm t);
static ATerm w_15 (ATerm e_28, ATerm f_28, ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm a_137 (ATerm), ATerm t);
static ATerm c_166 (ATerm w_165, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_15 (ATerm k_28, ATerm t);
static ATerm z_15 (ATerm g_42, ATerm h_42, ATerm t);
static ATerm a_16 (ATerm p_43, ATerm q_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_167 (ATerm m_166, ATerm t);
static ATerm o_167 (ATerm q_166, ATerm r_166, ATerm s_166, ATerm t);
static ATerm p_167 (ATerm a_167, ATerm b_167, ATerm c_167, ATerm t);
static ATerm b_16 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_118 (ATerm), ATerm t);
static ATerm g_16 (ATerm f_68, ATerm g_68, ATerm t);
ATerm if_verbose2_1_0 (ATerm j_135 (ATerm), ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_16 (ATerm u_61, ATerm v_61, ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_16 (ATerm i_46, ATerm j_46, ATerm t);
ATerm foldr_2_0 (ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_135 (ATerm), ATerm t);
static ATerm o_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_17 (ATerm t);
ATerm need_help_1_0 (ATerm y_137 (ATerm), ATerm t);
static ATerm j_16 (ATerm e_71, ATerm f_71, ATerm g_71, ATerm t);
static ATerm k_16 (ATerm h_71, ATerm i_71, ATerm t);
ATerm lookup_table_0_1 (ATerm y_67, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_71, ATerm n_71, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm e_16 (ATerm j_71, ATerm k_71, ATerm t);
static ATerm f_16 (ATerm o_71, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_140 (ATerm), ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm parse_options_1_0 (ATerm a_140 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm d_138 (ATerm), ATerm t);
static ATerm j_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm iowrap_3_0 (ATerm j_137 (ATerm), ATerm k_137 (ATerm), ATerm l_137 (ATerm), ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
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
  t = term_c_19;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_d_19;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_19), b_0), term_e_19);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_g_19;
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
      t = term_c_19;
      t = x_0(t);
      d_1 = t;
      t = term_h_19;
      e_1 = t;
      t = term_i_19;
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_19, term_i_19, d_1);
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
      t = term_c_19;
      t = t_0(t);
      s_1 = t;
      t = term_h_19;
      t_1 = t;
      t = term_i_19;
      u_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_19, term_i_19, s_1);
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
      t = term_c_19;
      t = r_0(t);
      z_1 = t;
      t = (ATerm) ATinsert(CheckATermList(r_1), z_1);
    }
  return(t);
}
static ATerm p_13 (ATerm s_83, ATerm t)
{
  ATerm j_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(s_83);
      a_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, a_2)));
      LocalPopChoice(l_19);
    }
  else
    {
      t = j_19;
      {
        ATerm b_2 = NULL;
        t = SSL_concat_strings(s_83);
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, b_2);
      }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm n_19 = t;
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
      t = n_19;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  e_2 = t;
  {
    ATerm o_19 = t;
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
        t = o_19;
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
    ATerm q_19 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_19;
      }
  }
  t = e_2;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm r_19 = t;
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
      t = r_19;
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
ATerm InsLayout_1_0 (ATerm k_147 (ATerm), ATerm t)
{
  static ATerm i_6 (ATerm t)
  {
    static ATerm l_6 (ATerm t_3, ATerm w_3, ATerm x_3, ATerm t)
    {
      ATerm z_3 = NULL,j_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_3, w_3);
      t = k_147(t);
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
      t = k_147(t);
      if(match_cons(t, sym__2))
        {
          b_5 = ATgetArgument(t, 0);
          {
            ATerm s_19 = ATgetArgument(t, 1);
            if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
              {
                c_5 = ATgetFirst((ATermList) s_19);
                p_5 = (ATerm) ATgetNext((ATermList) s_19);
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
          ATerm t_19 = ATgetArgument(t, 0);
          if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
            {
              f_5 = ATgetFirst((ATermList) t_19);
              r_5 = (ATerm) ATgetNext((ATermList) t_19);
            }
          else
            _fail(t);
          q_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,t_5 = NULL;
            t = term_w_19;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_5), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_z_19), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_5))), s_5), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_5))))), q_5);
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            {
              ATerm a_20 = t;
              int b_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_5 = NULL,w_5 = NULL;
                  ATerm c_20 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm x_5 = NULL;
                      x_5 = t;
                      t = term_w_19;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(n_0, t);
                      t = x_5;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = c_20;
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
                  LocalPopChoice(b_20);
                }
              else
                {
                  t = a_20;
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
            ATerm d_20 = t;
            int e_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_6(a_6, h_6, z_5, t);
                LocalPopChoice(e_20);
              }
            else
              {
                t = d_20;
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
                  ATerm f_20 = t;
                  int g_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_6(a_6, h_6, z_5, t);
                      LocalPopChoice(g_20);
                    }
                  else
                    {
                      t = f_20;
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
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = t;
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
          t = k_20;
        }
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
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
          ATerm l_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_13 = NULL,x_13 = NULL,h_14 = NULL,o_8 = NULL;
              t = SSLgetAnnotations(j_27);
              x_13 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, l_27);
              o_8 = t;
              t = SSLsetAnnotations(o_8, x_13);
              h_14 = t;
              t = term_w_19;
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
              LocalPopChoice(m_20);
            }
          else
            {
              t = l_20;
              {
                ATerm p_16 = NULL,s_16 = NULL,p_8 = NULL;
                t = SSLgetAnnotations(j_27);
                s_16 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, l_27);
                p_8 = t;
                t = SSLsetAnnotations(p_8, s_16);
                {
                  ATerm n_20 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm w_16 = NULL;
                      w_16 = t;
                      t = term_w_19;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(z_0, t);
                      t = w_16;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = n_20;
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
        ATerm o_20 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_20 = ATgetFirst((ATermList) t);
      w_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_7, w_7);
  i_8 = t;
  t = SSLsetAnnotations(i_8, s_7);
  {
    static ATerm b_28 (ATerm t)
    {
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
                ATerm q_20 = t;
                int r_20 = stack_ptr;
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
                    LocalPopChoice(r_20);
                  }
                else
                  {
                    t = q_20;
                    {
                      ATerm s_20 = t;
                      int t_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_29(i_17, d_17, h_17, t);
                          LocalPopChoice(t_20);
                        }
                      else
                        {
                          t = s_20;
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
                    ATerm u_20 = t;
                    int v_20 = stack_ptr;
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
                        LocalPopChoice(v_20);
                      }
                    else
                      {
                        t = u_20;
                        {
                          ATerm w_20 = t;
                          int x_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = b_29(i_17, d_17, h_17, t);
                              LocalPopChoice(x_20);
                            }
                          else
                            {
                              t = w_20;
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
                        ATerm y_20 = t;
                        int z_20 = stack_ptr;
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
                            LocalPopChoice(z_20);
                          }
                        else
                          {
                            t = y_20;
                            {
                              ATerm a_21 = t;
                              int b_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = b_29(i_17, d_17, h_17, t);
                                  LocalPopChoice(b_21);
                                }
                              else
                                {
                                  t = a_21;
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
                            ATerm c_21 = t;
                            int e_21 = stack_ptr;
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
                                LocalPopChoice(e_21);
                              }
                            else
                              {
                                t = c_21;
                                {
                                  ATerm f_21 = t;
                                  int l_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = b_29(i_17, d_17, h_17, t);
                                      LocalPopChoice(l_21);
                                    }
                                  else
                                    {
                                      t = f_21;
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
                                ATerm m_21 = t;
                                int n_21 = stack_ptr;
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
                                    LocalPopChoice(n_21);
                                  }
                                else
                                  {
                                    t = m_21;
                                    {
                                      ATerm q_21 = t;
                                      int r_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = b_29(i_17, d_17, h_17, t);
                                          LocalPopChoice(r_21);
                                        }
                                      else
                                        {
                                          t = q_21;
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
                                    ATerm s_21 = t;
                                    int t_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm e_7 = NULL,h_7 = NULL,r_7 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, b_17, h_17);
                                        t = InsLayout_1_0(b_28, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            e_7 = ATgetArgument(t, 0);
                                            {
                                              ATerm v_21 = ATgetArgument(t, 1);
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
                                        LocalPopChoice(t_21);
                                      }
                                    else
                                      {
                                        t = s_21;
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
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      b_17 = ATgetArgument(t, 0);
                                      c_17 = ATgetArgument(t, 1);
                                      {
                                        ATerm y_21 = t;
                                        int d_22 = stack_ptr;
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
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          b_17 = ATgetArgument(t, 0);
                                          c_17 = ATgetArgument(t, 1);
                                          {
                                            ATerm h_22 = t;
                                            int i_22 = stack_ptr;
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
                                          if(match_cons(t, sym_L_2))
                                            {
                                              b_17 = ATgetArgument(t, 0);
                                              c_17 = ATgetArgument(t, 1);
                                              {
                                                ATerm l_22 = t;
                                                int m_22 = stack_ptr;
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
                                                    LocalPopChoice(m_22);
                                                  }
                                                else
                                                  {
                                                    t = l_22;
                                                    {
                                                      ATerm n_22 = t;
                                                      int o_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = b_29(i_17, d_17, h_17, t);
                                                          LocalPopChoice(o_22);
                                                        }
                                                      else
                                                        {
                                                          t = n_22;
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
                                                    ATerm p_22 = t;
                                                    int q_22 = stack_ptr;
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
                                                        LocalPopChoice(q_22);
                                                      }
                                                    else
                                                      {
                                                        t = p_22;
                                                        {
                                                          ATerm r_22 = t;
                                                          int t_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = b_29(i_17, d_17, h_17, t);
                                                              LocalPopChoice(t_22);
                                                            }
                                                          else
                                                            {
                                                              t = r_22;
                                                              t = i_17;
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm u_22 = t;
                                                  int v_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = b_29(i_17, d_17, h_17, t);
                                                      LocalPopChoice(v_22);
                                                    }
                                                  else
                                                    {
                                                      t = u_22;
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
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_22 = ATgetFirst((ATermList) t);
                ATerm z_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, m_7);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
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
        ATerm a_23 = ATgetArgument(t, 1);
        if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
          {
            k_7 = ATgetFirst((ATermList) a_23);
            {
              ATerm b_23 = (ATerm) ATgetNext((ATermList) a_23);
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
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_z_19), s_27);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_z_19), s_27);
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm x_146 (ATerm), ATerm t)
{
  static ATerm i_29 (ATerm t)
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL;
        t = x_146(t);
        f_29 = t;
        t = (ATerm) ATinsert(ATempty, f_29);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm f_17 = NULL,g_17 = NULL;
          g_17 = t;
          t = SSL_explode_term(g_17);
          if(match_cons(t, sym__2))
            {
              ATerm e_23 = ATgetArgument(t, 0);
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
  t = term_d_19;
  l_29 = t;
  t = (ATerm) ATinsert(ATempty, term_f_23);
  m_29 = t;
  t = SSL_printnl(l_29, m_29);
  t = term_g_19;
  k_29 = t;
  t = SSL_exit(k_29);
  t = (ATerm) ATinsert(ATempty, term_f_23);
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
        ATerm g_23 = t;
        int h_23 = stack_ptr;
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
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            {
              ATerm i_23 = t;
              int j_23 = stack_ptr;
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
                          ATerm k_23 = ATgetFirst((ATermList) t);
                          ATerm l_23 = (ATerm) ATgetNext((ATermList) t);
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
                        ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = h_20;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm n_23 = ATgetFirst((ATermList) t);
                      k_19 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, m_19, k_19);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(j_23);
                }
              else
                {
                  t = i_23;
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
        t = term_c_19;
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
      t = term_c_19;
      t = p_0(t);
      o_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_32, o_32);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    t = bottomup_1_0(a_112, t);
    return(t);
  }
  t = SRTS_all(h_1, t);
  t = a_112(t);
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
    static ATerm n_38 (ATerm t)
    {
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
                    ATerm o_23 = t;
                    int p_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_38(u_37, v_37, b_38, t);
                        LocalPopChoice(p_23);
                      }
                    else
                      {
                        t = o_23;
                        {
                          ATerm q_23 = t;
                          int r_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_38(q_37, a_38, i_38, j_38, t);
                              LocalPopChoice(r_23);
                            }
                          else
                            {
                              t = q_23;
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
                        ATerm u_23 = t;
                        int w_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = r_38(u_37, v_37, b_38, t);
                            LocalPopChoice(w_23);
                          }
                        else
                          {
                            t = u_23;
                            {
                              ATerm x_23 = t;
                              int y_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = t_38(q_37, r_37, a_38, i_38, j_38, t);
                                  LocalPopChoice(y_23);
                                }
                              else
                                {
                                  t = x_23;
                                  t = u_38(x_37, a_38, j_38, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm z_23 = t;
                      int a_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_38(u_37, v_37, b_38, t);
                          LocalPopChoice(a_24);
                        }
                      else
                        {
                          t = z_23;
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
      ATerm b_24 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_21, e_33);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm d_147 (ATerm), ATerm t)
{
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
            ATerm g_24 = ATgetFirst((ATermList) t);
            ATerm h_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_39);
        s_23 = t;
        t = term_c_19;
        t = d_147(t);
        {
          static ATerm j_1 (ATerm t)
          {
            ATerm i_24 = t;
            int j_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_24 = t;
                int l_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm k_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, v_39);
                      return(t);
                    }
                    t = Instantiate_1_0(k_1, t);
                    LocalPopChoice(l_24);
                  }
                else
                  {
                    t = k_24;
                    t = flat_list_0_0(t);
                  }
                LocalPopChoice(j_24);
              }
            else
              {
                t = i_24;
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
  ATerm o_40 = NULL,r_40 = NULL,s_40 = NULL,f_41 = NULL;
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
      f_41 = ATgetArgument(t, 0);
      {
        ATerm o_24 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(e_24);
        o_24 = t;
        t = f_41;
        o_40 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, f_41);
        z_9 = t;
        t = SSLsetAnnotations(z_9, o_24);
      }
    }
  else
    {
      ATerm s_24 = NULL,a_10 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          f_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_24);
      s_24 = t;
      t = f_41;
      o_40 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, f_41);
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
    static ATerm o_1 (ATerm t)
    {
      ATerm j_41 = NULL;
      j_41 = t;
      t = (ATerm) ATmakeAppl(sym__4, o_40, j_41, s_40, term_g_19);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(o_1, t);
  }
  t = instantiate_list_1_0(p_1, t);
  return(t);
}
static ATerm y_44 (ATerm v_41, ATerm z_41, ATerm b_42, ATerm t)
{
  ATerm i_42 = NULL,d_10 = NULL;
  t = SSLgetAnnotations(b_42);
  i_42 = t;
  t = z_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_41), v_41);
  d_10 = t;
  t = SSLsetAnnotations(d_10, i_42);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm f_147 (ATerm), ATerm t)
{
  static ATerm x_44 (ATerm t)
  {
    static ATerm z_44 (ATerm r_42, ATerm s_42, ATerm t_42, ATerm w_42, ATerm t)
    {
      ATerm i_43 = NULL,k_43 = NULL,v_43 = NULL,e_10 = NULL;
      t = w_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm m_24 = ATgetFirst((ATermList) t);
          ATerm n_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_42);
      i_43 = t;
      t = term_c_19;
      t = f_147(t);
      {
        static ATerm v_1 (ATerm t)
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm w_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, s_42), r_42);
                    return(t);
                  }
                  t = Instantiate_1_0(w_1, t);
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = r_24;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
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
    ATerm f_44 = NULL,h_44 = NULL,i_44 = NULL,m_44 = NULL,n_44 = NULL;
    f_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_44;
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
            m_44 = ATgetFirst((ATermList) t);
            n_44 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm u_24 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_44(h_44, i_44, f_44, t);
                  LocalPopChoice(v_24);
                }
              else
                {
                  t = u_24;
                  t = z_44(h_44, m_44, n_44, f_44, t);
                }
            }
          }
        else
          {
            t = y_44(h_44, i_44, f_44, t);
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
static ATerm v_13 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_45 = NULL,r_45 = NULL,s_45 = NULL,c_46 = NULL;
      t = term_z_24;
      s_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_25, term_z_24);
      t = u_13(k_25, s_45, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_c_19;
      t = y_109(t);
      o_45 = t;
      t = term_c_19;
      t = z_109(t);
      r_45 = t;
      t = (ATerm) ATmakeAppl(sym__4, o_45, l_25, r_45, term_z_24);
      t = symbol2abox_0_0(t);
      c_46 = t;
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_46;
            {
              ATerm f_25 = t;
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
                          ATerm h_25 = ATgetFirst((ATermList) t);
                          ATerm i_25 = (ATerm) ATgetNext((ATermList) t);
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
                  t = f_25;
                }
            }
            t = (ATerm) ATinsert(ATempty, c_46);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            t = c_46;
          }
      }
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm f_46 = NULL,g_46 = NULL,t_46 = NULL;
        t = term_c_19;
        t = x_109(t);
        f_46 = t;
        t = term_c_19;
        t = z_109(t);
        g_46 = t;
        t = (ATerm) ATmakeAppl(sym__4, f_46, l_25, g_46, term_g_19);
        t = symbol2abox_0_0(t);
        t_46 = t;
        {
          ATerm j_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_46;
              {
                ATerm o_25 = t;
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
                            ATerm p_25 = ATgetFirst((ATermList) t);
                            ATerm r_25 = (ATerm) ATgetNext((ATermList) t);
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
                    t = o_25;
                  }
              }
              t = (ATerm) ATinsert(ATempty, t_46);
              LocalPopChoice(m_25);
            }
          else
            {
              t = j_25;
              t = t_46;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t)
{
  static ATerm i_47 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_120(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        {
          ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,e_47 = NULL,f_47 = NULL,h_10 = NULL;
          t = q_120(t);
          f_47 = t;
          if(match_cons(t, sym__2))
            {
              z_46 = ATgetArgument(t, 0);
              a_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_47);
          y_46 = t;
          t = z_46;
          t = s_120(t);
          b_47 = t;
          t = a_47;
          t = i_47(t);
          e_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_47, e_47);
          h_10 = t;
          t = SSLsetAnnotations(h_10, y_46);
          t = r_120(t);
        }
      }
    return(t);
  }
  t = i_47(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      ATerm x_25 = ATgetArgument(t, 1);
      if(((ATgetType(x_25) != AT_LIST) || !(ATisEmpty(x_25))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_47 = NULL,a_48 = NULL,c_48 = NULL,e_48 = NULL,j_48 = NULL;
  if(match_cons(t, sym__2))
    {
      n_47 = ATgetArgument(t, 0);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(((ATgetType(y_25) == AT_LIST) && !(ATisEmpty(y_25))))
          {
            a_48 = ATgetFirst((ATermList) y_25);
            c_48 = (ATerm) ATgetNext((ATermList) y_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_g_19;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_47, term_g_19);
  t = c_16(n_47, j_48, t);
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_47, a_48), (ATerm) ATmakeAppl(sym__2, e_48, c_48));
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_48), k_48);
  return(t);
}
ATerm nzip_1_0 (ATerm b_121 (ATerm), ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, j_47);
  t = genzip_4_0(x_1, y_1, c_2, b_121, t);
  return(t);
}
static ATerm z_13 (ATerm b_25, ATerm c_25, ATerm a_25, ATerm g_25, ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,a_49 = NULL,t_49 = NULL,u_49 = NULL;
  static ATerm s_2 (ATerm t)
  {
    t = not_null(x_48);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATinsert(ATempty, g_25));
  t = conc_0_0(t);
  a_49 = t;
  t = b_25;
  if(match_cons(t, sym_iter_sep_2))
    {
      t_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
      {
        ATerm a_26 = NULL,l_10 = NULL;
        t = SSLgetAnnotations(b_25);
        a_26 = t;
        t = t_49;
        v_48 = t;
        t = u_49;
        w_48 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, t_49, u_49);
        l_10 = t;
        t = SSLsetAnnotations(l_10, a_26);
      }
    }
  else
    {
      ATerm i_26 = NULL,s_10 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          t_49 = ATgetArgument(t, 0);
          u_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_25);
      i_26 = t;
      t = t_49;
      v_48 = t;
      t = u_49;
      w_48 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, t_49, u_49);
      s_10 = t;
      t = SSLsetAnnotations(s_10, i_26);
    }
  t = (ATerm) ATmakeAppl(sym__2, b_25, a_49);
  t = get_pp_entry_0_0(t);
  if(((x_48 != NULL) && (x_48 != t)))
    _fail(t);
  else
    x_48 = t;
  t = c_25;
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm w_49 = NULL,x_49 = NULL;
      static ATerm o_2 (ATerm t)
      {
        t = v_48;
        return(t);
      }
      static ATerm p_2 (ATerm t)
      {
        t = w_48;
        return(t);
      }
      static ATerm q_2 (ATerm t)
      {
        t = a_49;
        return(t);
      }
      static ATerm r_2 (ATerm t)
      {
        t = g_25;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          w_49 = ATgetArgument(t, 0);
          x_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_13(o_2, p_2, q_2, r_2, w_49, x_49, t);
      return(t);
    }
    t = nzip_1_0(n_2, t);
  }
  t = instantiate_sep_list_1_0(s_2, t);
  return(t);
}
static ATerm b_14 (ATerm o_31, ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm f_50 = NULL,h_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_31, term_z_24);
  t = geq_0_0(t);
  t = term_g_19;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_31, term_g_19);
  t = f_14(o_31, h_50, t);
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_50, n_31);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  if(match_cons(t, sym__2))
    {
      n_50 = ATgetArgument(t, 0);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(((ATgetType(b_26) == AT_LIST) && !(ATisEmpty(b_26))))
          {
            o_50 = ATgetFirst((ATermList) b_26);
            p_50 = (ATerm) ATgetNext((ATermList) b_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_14(n_50, o_50, p_50, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm j_50 = NULL;
  t = repeat_2_0(t_2, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      if(((ATgetType(c_26) != AT_INT) || (ATgetInt((ATermInt) c_26) != 1)))
        _fail(t);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
          {
            j_50 = ATgetFirst((ATermList) d_26);
            {
              ATerm e_26 = (ATerm) ATgetNext((ATermList) d_26);
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
  ATerm f_26 = t;
  if((PushChoice() == 0))
    {
      ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,i_11 = NULL;
      x_66 = t;
      if(match_cons(t, sym_lit_1))
        {
          w_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_66);
      v_66 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, w_66);
      i_11 = t;
      t = SSLsetAnnotations(i_11, v_66);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_26 = t;
  if((PushChoice() == 0))
    {
      ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,k_11 = NULL;
      a_67 = t;
      if(match_cons(t, sym_lit_1))
        {
          z_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_67);
      y_66 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, z_66);
      k_11 = t;
      t = SSLsetAnnotations(k_11, y_66);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_26;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,b_66 = NULL;
  p_65 = t;
  if(match_cons(t, sym__4))
    {
      q_65 = ATgetArgument(t, 0);
      s_65 = ATgetArgument(t, 1);
      t_65 = ATgetArgument(t, 2);
      b_66 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = q_65;
  if(match_cons(t, sym_seq_1))
    {
      r_65 = ATgetArgument(t, 0);
      {
        ATerm h_66 = NULL,i_66 = NULL,k_66 = NULL,p_66 = NULL,t_66 = NULL;
        static ATerm b_3 (ATerm t)
        {
          ATerm h_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_26 = t;
              int l_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm c_3 (ATerm t)
                  {
                    t = not_null(i_66);
                    return(t);
                  }
                  t = Instantiate_1_0(c_3, t);
                  LocalPopChoice(l_26);
                }
              else
                {
                  t = k_26;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(j_26);
            }
          else
            {
              t = h_26;
            }
          return(t);
        }
        t = s_65;
        if(match_cons(t, sym_appl_2))
          {
            ATerm n_26 = ATgetArgument(t, 0);
            o_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_65, (ATerm) ATinsert(ATempty, b_66));
        t = conc_0_0(t);
        t_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, r_65), t_66);
        t = get_pp_entry_0_0(t);
        h_66 = t;
        t = r_65;
        t = filter_1_0(x_2, t);
        k_66 = t;
        t = o_65;
        t = filter_1_0(z_2, t);
        p_66 = t;
        t = (ATerm) ATmakeAppl(sym__4, k_66, p_66, t_66, term_g_19);
        t = seq2abox_0_0(t);
        if(((i_66 != NULL) && (i_66 != t)))
          _fail(t);
        else
          i_66 = t;
        t = h_66;
        t = bottomup_1_0(b_3, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          r_65 = ATgetArgument(t, 0);
          k_65 = ATgetArgument(t, 1);
          {
            ATerm p_27 = NULL,w_27 = NULL,x_27 = NULL;
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
                                            ATerm o_26 = t;
                                            int t_26 = stack_ptr;
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
                                                LocalPopChoice(t_26);
                                              }
                                            else
                                              {
                                                t = o_26;
                                                {
                                                  ATerm u_26 = t;
                                                  int v_26 = stack_ptr;
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
                                                      t = term_g_19;
                                                      v_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, v_29, term_g_19);
                                                      t = c_16(v_29, v_31, t);
                                                      s_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, z_27, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, n_28), z_27, a_29), r_29), u_29, s_31);
                                                      t = e_40(t);
                                                      LocalPopChoice(v_26);
                                                    }
                                                  else
                                                    {
                                                      t = u_26;
                                                      {
                                                        ATerm p_32 = NULL;
                                                        static ATerm d_3 (ATerm t)
                                                        {
                                                          ATerm x_26 = t;
                                                          int y_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_26 = t;
                                                              int a_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  static ATerm e_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                                                    return(t);
                                                                  }
                                                                  t = Instantiate_1_0(e_3, t);
                                                                  LocalPopChoice(a_27);
                                                                }
                                                              else
                                                                {
                                                                  t = z_26;
                                                                  t = flat_list_0_0(t);
                                                                }
                                                              LocalPopChoice(y_26);
                                                            }
                                                          else
                                                            {
                                                              t = x_26;
                                                            }
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, r_65, k_65), u_29);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((p_27 != NULL) && (p_27 != t)))
                                                          _fail(t);
                                                        else
                                                          p_27 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_g_19);
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
                                          static ATerm f_3 (ATerm t)
                                          {
                                            ATerm c_27 = t;
                                            int e_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm f_27 = t;
                                                int h_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    static ATerm g_3 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(g_3, t);
                                                    LocalPopChoice(h_27);
                                                  }
                                                else
                                                  {
                                                    t = f_27;
                                                    t = flat_list_0_0(t);
                                                  }
                                                LocalPopChoice(e_27);
                                              }
                                            else
                                              {
                                                t = c_27;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, r_65, k_65), u_29);
                                          t = get_pp_entry_0_0(t);
                                          if(((p_27 != NULL) && (p_27 != t)))
                                            _fail(t);
                                          else
                                            p_27 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_g_19);
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
                                      static ATerm h_3 (ATerm t)
                                      {
                                        ATerm i_27 = t;
                                        int k_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm m_27 = t;
                                            int n_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                static ATerm i_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(i_3, t);
                                                LocalPopChoice(n_27);
                                              }
                                            else
                                              {
                                                t = m_27;
                                                t = flat_list_0_0(t);
                                              }
                                            LocalPopChoice(k_27);
                                          }
                                        else
                                          {
                                            t = i_27;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, r_65, k_65), u_29);
                                      t = get_pp_entry_0_0(t);
                                      if(((p_27 != NULL) && (p_27 != t)))
                                        _fail(t);
                                      else
                                        p_27 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_g_19);
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
                                  static ATerm j_3 (ATerm t)
                                  {
                                    ATerm o_27 = t;
                                    int t_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm u_27 = t;
                                        int v_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm k_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(k_3, t);
                                            LocalPopChoice(v_27);
                                          }
                                        else
                                          {
                                            t = u_27;
                                            t = flat_list_0_0(t);
                                          }
                                        LocalPopChoice(t_27);
                                      }
                                    else
                                      {
                                        t = o_27;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, r_65, k_65), u_29);
                                  t = get_pp_entry_0_0(t);
                                  if(((p_27 != NULL) && (p_27 != t)))
                                    _fail(t);
                                  else
                                    p_27 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_g_19);
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
                              static ATerm l_3 (ATerm t)
                              {
                                ATerm a_28 = t;
                                int c_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_28 = t;
                                    int c_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        static ATerm m_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(m_3, t);
                                        LocalPopChoice(c_29);
                                      }
                                    else
                                      {
                                        t = g_28;
                                        t = flat_list_0_0(t);
                                      }
                                    LocalPopChoice(c_28);
                                  }
                                else
                                  {
                                    t = a_28;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, r_65, k_65), u_29);
                              t = get_pp_entry_0_0(t);
                              if(((p_27 != NULL) && (p_27 != t)))
                                _fail(t);
                              else
                                p_27 = t;
                              t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_g_19);
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
                          static ATerm n_3 (ATerm t)
                          {
                            ATerm d_29 = t;
                            int e_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_29 = t;
                                int x_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    static ATerm o_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(w_27));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(o_3, t);
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
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, r_65, k_65), u_29);
                          t = get_pp_entry_0_0(t);
                          if(((p_27 != NULL) && (p_27 != t)))
                            _fail(t);
                          else
                            p_27 = t;
                          t = (ATerm) ATmakeAppl(sym__4, h_29, s_29, u_29, term_g_19);
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
                        ATerm y_29 = t;
                        int z_29 = stack_ptr;
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
                            LocalPopChoice(z_29);
                          }
                        else
                          {
                            t = y_29;
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
                              t = term_g_19;
                              w_38 = t;
                              t = (ATerm) ATmakeAppl(sym__2, v_29, term_g_19);
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
                    ATerm a_30 = t;
                    int b_30 = stack_ptr;
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
                        LocalPopChoice(b_30);
                      }
                    else
                      {
                        t = a_30;
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
                          t = term_g_19;
                          d_40 = t;
                          t = (ATerm) ATmakeAppl(sym__2, v_29, term_g_19);
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
            t = (ATerm) ATmakeAppl(sym__2, t_65, (ATerm) ATinsert(ATempty, b_66));
            t = conc_0_0(t);
            x_27 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, r_65, k_65), s_65, x_27, term_g_19);
            t = e_40(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              r_65 = ATgetArgument(t, 0);
              k_65 = ATgetArgument(t, 1);
              {
                ATerm p_67 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, r_65, k_65);
                p_67 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, r_65, k_65), s_65, t_65, b_66);
                t = z_13(p_67, s_65, t_65, b_66, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  r_65 = ATgetArgument(t, 0);
                  k_65 = ATgetArgument(t, 1);
                  {
                    ATerm e_68 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, r_65, k_65);
                    e_68 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, r_65, k_65), s_65, t_65, b_66);
                    t = z_13(e_68, s_65, t_65, b_66, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      r_65 = ATgetArgument(t, 0);
                      {
                        ATerm n_68 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, r_65);
                        n_68 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, r_65), s_65, t_65, b_66);
                        t = t_13(n_68, s_65, t_65, b_66, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          r_65 = ATgetArgument(t, 0);
                          {
                            ATerm u_68 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, r_65);
                            u_68 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, r_65), s_65, t_65, b_66);
                            t = t_13(u_68, s_65, t_65, b_66, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              r_65 = ATgetArgument(t, 0);
                              t = s_65;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm c_30 = ATgetArgument(t, 0);
                                  o_65 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = o_65;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  l_65 = ATgetFirst((ATermList) t);
                                  m_65 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm h_41 = NULL,i_41 = NULL,k_41 = NULL,m_41 = NULL,o_41 = NULL,p_41 = NULL;
                                    static ATerm q_3 (ATerm t)
                                    {
                                      ATerm d_30 = t;
                                      int g_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_30 = t;
                                          int j_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm r_3 (ATerm t)
                                              {
                                                t = not_null(m_41);
                                                return(t);
                                              }
                                              t = Instantiate_1_0(r_3, t);
                                              LocalPopChoice(j_30);
                                            }
                                          else
                                            {
                                              t = h_30;
                                              t = flat_list_0_0(t);
                                            }
                                          LocalPopChoice(g_30);
                                        }
                                      else
                                        {
                                          t = d_30;
                                        }
                                      return(t);
                                    }
                                    t = m_65;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, t_65, (ATerm) ATinsert(ATempty, b_66));
                                    t = conc_0_0(t);
                                    p_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, r_65), p_41);
                                    t = get_pp_entry_0_0(t);
                                    h_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, r_65, l_65, p_41, term_g_19);
                                    t = symbol2abox_0_0(t);
                                    i_41 = t;
                                    t = (ATerm) ATinsert(ATempty, i_41);
                                    o_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, i_41));
                                    t = r_13(h_41, o_41, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        k_41 = ATgetArgument(t, 0);
                                        if(((m_41 != NULL) && (m_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          m_41 = ATgetArgument(t, 1);
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
                              ATerm l_30 = t;
                              int n_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm o_30 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(n_30);
                                  {
                                    ATerm p_30 = t;
                                    int q_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = s_65;
                                        {
                                          ATerm t_30 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm l_42 = NULL;
                                              l_42 = t;
                                              t = SSL_is_string(l_42);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = t_30;
                                            }
                                        }
                                        t = s_65;
                                        {
                                          ATerm u_30 = t;
                                          int v_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,u_42 = NULL,v_42 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  o_42 = ATgetArgument(t, 0);
                                                  v_42 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = o_42;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  p_42 = ATgetArgument(t, 0);
                                                  q_42 = ATgetArgument(t, 1);
                                                  u_42 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = s_65;
                                              t = d_15(p_42, q_42, u_42, v_42, t);
                                              LocalPopChoice(v_30);
                                            }
                                          else
                                            {
                                              t = u_30;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(q_30);
                                      }
                                    else
                                      {
                                        t = p_30;
                                        t = SSL_is_string(s_65);
                                        t = (ATerm) ATmakeAppl(sym_S_1, s_65);
                                      }
                                  }
                                }
                              else
                                {
                                  t = l_30;
                                  {
                                    ATerm w_30 = t;
                                    int x_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm z_30 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(x_30);
                                        {
                                          ATerm b_44 = NULL,g_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, s_65);
                                          g_44 = t;
                                          t = SSL_implode_string(g_44);
                                          b_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, b_44);
                                        }
                                      }
                                    else
                                      {
                                        t = w_30;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            r_65 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, r_65);
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
  ATerm z_69 = NULL,d_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  if(match_cons(t, sym__4))
    {
      z_69 = ATgetArgument(t, 0);
      h_70 = ATgetArgument(t, 1);
      k_70 = ATgetArgument(t, 2);
      l_70 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = z_69;
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
          d_70 = ATgetFirst((ATermList) t);
          g_70 = (ATerm) ATgetNext((ATermList) t);
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
        ATerm b_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm e_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(d_31);
            t = d_70;
            {
              ATerm f_31 = t;
              int i_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm j_31 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_31);
                  {
                    ATerm l_31 = t;
                    int p_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, g_70, j_70, k_70, l_70);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(p_31);
                      }
                    else
                      {
                        t = l_31;
                        {
                          ATerm m_72 = NULL,n_72 = NULL,s_72 = NULL,u_72 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, d_70, i_70, k_70, l_70);
                          t = symbol2abox_0_0(t);
                          m_72 = t;
                          t = term_g_19;
                          u_72 = t;
                          t = (ATerm) ATmakeAppl(sym__2, l_70, term_g_19);
                          t = c_16(l_70, u_72, t);
                          s_72 = t;
                          t = (ATerm) ATmakeAppl(sym__4, g_70, j_70, k_70, s_72);
                          t = seq2abox_0_0(t);
                          n_72 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_72), m_72);
                        }
                      }
                  }
                }
              else
                {
                  t = f_31;
                  {
                    ATerm a_73 = NULL,d_73 = NULL,m_73 = NULL,r_73 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, d_70, i_70, k_70, l_70);
                    t = symbol2abox_0_0(t);
                    a_73 = t;
                    t = term_g_19;
                    r_73 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_70, term_g_19);
                    t = c_16(l_70, r_73, t);
                    m_73 = t;
                    t = (ATerm) ATmakeAppl(sym__4, g_70, j_70, k_70, m_73);
                    t = seq2abox_0_0(t);
                    d_73 = t;
                    t = (ATerm) ATinsert(CheckATermList(d_73), a_73);
                  }
                }
            }
          }
        else
          {
            t = b_31;
            {
              ATerm p_74 = NULL,q_74 = NULL,s_74 = NULL,t_74 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, d_70, i_70, k_70, l_70);
              t = symbol2abox_0_0(t);
              p_74 = t;
              t = term_g_19;
              t_74 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_70, term_g_19);
              t = c_16(l_70, t_74, t);
              s_74 = t;
              t = (ATerm) ATmakeAppl(sym__4, g_70, j_70, k_70, s_74);
              t = seq2abox_0_0(t);
              q_74 = t;
              t = (ATerm) ATinsert(CheckATermList(q_74), p_74);
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
  t = term_r_31;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
  x_74 = t;
  t = term_u_31;
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_31, x_74);
  t = g_16(a_75, x_74, t);
  if(match_cons(t, sym__2))
    {
      z_74 = ATgetArgument(t, 0);
      y_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_74;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(s_3, t);
  t = (ATerm) ATmakeAppl(sym__2, z_74, y_74);
  return(t);
}
static ATerm c_14 (ATerm t_80, ATerm s_80, ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL,s_75 = NULL;
  c_75 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      d_75 = ATgetArgument(t, 0);
      s_75 = ATgetArgument(t, 1);
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_76 = NULL,l_76 = NULL;
            t = t_80;
            t = mk_key_0_0(t);
            g_76 = t;
            t = term_u_31;
            l_76 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_u_31, g_76);
            t = g_16(l_76, g_76, t);
            t = c_75;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            t = c_75;
            t = e_15(d_75, s_75, t);
          }
      }
    }
  else
    {
      ATerm v_77 = NULL,w_77 = NULL;
      t = t_80;
      t = mk_key_0_0(t);
      v_77 = t;
      t = term_u_31;
      w_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_u_31, v_77);
      t = g_16(w_77, v_77, t);
      t = c_75;
    }
  return(t);
}
static ATerm d_14 (ATerm u_118 (ATerm), ATerm g_29, ATerm g_230, ATerm t)
{
  static ATerm v_3 (ATerm t)
  {
    ATerm x_77 = NULL;
    x_77 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_29, x_77);
    t = u_118(t);
    t = x_77;
    return(t);
  }
  t = g_230;
  t = SRTS_one(v_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm h_78 = NULL;
  if(match_cons(t, sym__2))
    {
      h_78 = ATgetArgument(t, 0);
      if((h_78 != ATgetArgument(t, 1)))
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
  ATerm n_78 = NULL;
  if(match_cons(t, sym__2))
    {
      n_78 = ATgetArgument(t, 0);
      if((n_78 != ATgetArgument(t, 1)))
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
  ATerm r_78 = NULL;
  if(match_cons(t, sym__2))
    {
      r_78 = ATgetArgument(t, 0);
      if((r_78 != ATgetArgument(t, 1)))
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
  ATerm e_78 = NULL;
  e_78 = t;
  if(match_int(t, 10))
    {
      ATerm b_32 = t;
      int c_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_78 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_g_32), term_e_32);
          g_78 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_78, (ATerm) ATinsert(ATinsert(ATempty, term_g_32), term_e_32));
          t = d_14(y_3, e_78, g_78, t);
          t = e_78;
          LocalPopChoice(c_32);
        }
      else
        {
          t = b_32;
          t = e_78;
        }
    }
  else
    {
      if(match_int(t, 13))
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_78 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_g_32), term_e_32);
              m_78 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_78, (ATerm) ATinsert(ATinsert(ATempty, term_g_32), term_e_32));
              t = d_14(a_4, e_78, m_78, t);
              t = e_78;
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              t = e_78;
            }
        }
      else
        {
          ATerm q_78 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_g_32), term_e_32);
          q_78 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_78, (ATerm) ATinsert(ATinsert(ATempty, term_g_32), term_e_32));
          t = d_14(b_4, e_78, q_78, t);
          t = e_78;
        }
    }
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  static ATerm r_79 (ATerm t)
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL,r_44 = NULL,v_44 = NULL,o_11 = NULL;
        o_79 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_79 = ATgetFirst((ATermList) t);
            q_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_79);
        r_44 = t;
        t = q_79;
        t = r_79(t);
        v_44 = t;
        t = (ATerm) ATinsert(CheckATermList(v_44), p_79);
        o_11 = t;
        t = SSLsetAnnotations(o_11, r_44);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = k_119(t);
      }
    return(t);
  }
  t = r_79(t);
  return(t);
}
ATerm rtrim_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm n_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_45 = NULL,f_45 = NULL;
      f_45 = t;
      t = SSL_explode_string(f_45);
      t = rtrim_1_0(o_0, t);
      e_45 = t;
      t = SSL_implode_string(e_45);
      LocalPopChoice(q_32);
    }
  else
    {
      t = n_32;
      {
        ATerm k_80 = NULL,j_45 = NULL;
        k_80 = t;
        t = (ATerm) ATinsert(CheckATermList(k_80), term_c_19);
        {
          static ATerm c_4 (ATerm t)
          {
            ATerm k_45 = NULL,m_45 = NULL;
            k_45 = t;
            {
              ATerm r_32 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_32;
                }
            }
            {
              ATerm s_32 = t;
              if((PushChoice() == 0))
                {
                  ATerm n_45 = NULL,p_45 = NULL,q_45 = NULL,u_45 = NULL,v_45 = NULL,r_11 = NULL;
                  v_45 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_45 = ATgetFirst((ATermList) t);
                      q_45 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_45);
                  n_45 = t;
                  t = p_45;
                  t = o_0(t);
                  u_45 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_45), u_45);
                  r_11 = t;
                  t = SSLsetAnnotations(r_11, n_45);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_32;
                }
            }
            t = k_45;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_45 = ATgetFirst((ATermList) t);
                {
                  ATerm t_32 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, m_45);
            return(t);
          }
          t = at_suffix_rev_1_0(c_4, t);
        }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_32 = ATgetFirst((ATermList) t);
            j_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_45;
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  static ATerm x_81 (ATerm t)
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_119(t);
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        {
          ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,l_46 = NULL,c_47 = NULL,t_11 = NULL;
          t_81 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_81 = ATgetFirst((ATermList) t);
              v_81 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_81);
          l_46 = t;
          t = v_81;
          t = x_81(t);
          c_47 = t;
          t = (ATerm) ATinsert(CheckATermList(c_47), u_81);
          t_11 = t;
          t = SSLsetAnnotations(t_11, l_46);
        }
      }
    return(t);
  }
  t = x_81(t);
  return(t);
}
ATerm drop_while_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm c_82 = NULL;
  static ATerm d_4 (ATerm t)
  {
    ATerm t_83 = NULL,u_83 = NULL,x_83 = NULL;
    t_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_83;
      }
    else
      {
        ATerm s_47 = NULL,x_47 = NULL,w_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_83 = ATgetFirst((ATermList) t);
            x_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_83);
        s_47 = t;
        t = u_83;
        {
          ATerm x_32 = t;
          if((PushChoice() == 0))
            {
              t = h_126(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_32;
            }
        }
        x_47 = t;
        t = (ATerm) ATinsert(CheckATermList(x_83), x_47);
        w_11 = t;
        t = SSLsetAnnotations(w_11, s_47);
      }
    if(((c_82 != NULL) && (c_82 != t)))
      _fail(t);
    else
      c_82 = t;
    return(t);
  }
  t = at_suffix_1_0(d_4, t);
  t = not_null(c_82);
  return(t);
}
ATerm ltrim_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_48 = NULL,g_48 = NULL;
      g_48 = t;
      t = SSL_explode_string(g_48);
      t = ltrim_1_0(m_0, t);
      f_48 = t;
      t = SSL_implode_string(f_48);
      LocalPopChoice(a_33);
    }
  else
    {
      t = y_32;
      t = drop_while_1_0(m_0, t);
    }
  return(t);
}
ATerm trim_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_48 = NULL,m_48 = NULL;
      m_48 = t;
      t = SSL_explode_string(m_48);
      t = trim_1_0(l_0, t);
      i_48 = t;
      t = SSL_implode_string(i_48);
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
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
  ATerm c_84 = NULL,d_84 = NULL;
  c_84 = t;
  {
    static ATerm l_84 (ATerm t)
    {
      ATerm f_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_84 = NULL,p_48 = NULL,q_48 = NULL,s_48 = NULL;
          k_84 = t;
          t = c_84;
          if(match_cons(t, sym_Stream_1))
            {
              s_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_14(s_48, t);
          p_48 = t;
          t = term_c_19;
          t = l_84(t);
          q_48 = t;
          t = (ATerm) ATinsert(CheckATermList(q_48), p_48);
          LocalPopChoice(g_33);
        }
      else
        {
          t = f_33;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = l_84(t);
  }
  d_84 = t;
  t = SSL_implode_string(d_84);
  return(t);
}
ATerm read_text_file_0_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,s_84 = NULL;
  o_84 = t;
  t = term_h_33;
  s_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_84, term_h_33);
  t = a_16(o_84, s_84, t);
  p_84 = t;
  t = read_text_from_stream_0_0(t);
  q_84 = t;
  t = p_84;
  t = fclose_0_0(t);
  t = q_84;
  return(t);
}
static ATerm f_14 (ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_46, p_46);
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = SSL_subtr(o_46, p_46);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm t_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL;
  t = term_m_33;
  {
    ATerm s_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_85 = NULL,z_85 = NULL;
        t = term_v_33;
        u_85 = t;
        t = term_m_33;
        z_85 = t;
        t = term_w_33;
        t = g_16(u_85, z_85, t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = s_33;
        t = term_g_19;
      }
  }
  v_84 = t;
  t = term_g_19;
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_84, term_g_19);
  t = f_14(v_84, x_84, t);
  w_84 = t;
  t = SSL_int_to_string(w_84);
  t_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_84), term_m_33);
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL;
  if(match_cons(t, sym__2))
    {
      f_87 = ATgetArgument(t, 0);
      g_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_87;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm p_87 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_87, g_87);
      t = w_14(f_87, g_87, t);
      p_87 = t;
      t = (ATerm) ATinsert(CheckATermList(p_87), f_87);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_x_33;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm z_145 (ATerm), ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_88 = NULL,f_88 = NULL;
      f_88 = t;
      if(match_cons(t, sym_FILE_1))
        {
          e_88 = ATgetArgument(t, 0);
          {
            ATerm z_48 = NULL,y_11 = NULL;
            t = SSLgetAnnotations(f_88);
            z_48 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, e_88);
            y_11 = t;
            t = SSLsetAnnotations(y_11, z_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_88;
        }
      LocalPopChoice(z_33);
      {
        static ATerm f_4 (ATerm t)
        {
          ATerm j_88 = NULL,m_88 = NULL,n_88 = NULL;
          t = term_c_19;
          t = pass_verbose_0_0(t);
          j_88 = t;
          t = term_c_19;
          t = z_145(t);
          t = map_1_0(xtc_find_0_0, t);
          n_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_34, n_88);
          t = add_arg_flags_0_0(t);
          m_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_88, m_88);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(e_4, f_4, t);
      }
    }
  else
    {
      t = y_33;
      {
        static ATerm h_4 (ATerm t)
        {
          ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
          t = term_c_19;
          t = pass_verbose_0_0(t);
          p_88 = t;
          t = term_c_19;
          t = z_145(t);
          t = map_1_0(xtc_find_0_0, t);
          r_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_34, r_88);
          t = add_arg_flags_0_0(t);
          q_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_88, q_88);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(g_4, h_4, t);
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_34), term_d_34);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_h_34;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  ATerm k_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_90 = NULL,h_90 = NULL;
      h_90 = t;
      if(match_cons(t, sym_FILE_1))
        {
          d_90 = ATgetArgument(t, 0);
          {
            ATerm r_49 = NULL,a_12 = NULL;
            t = SSLgetAnnotations(h_90);
            r_49 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, d_90);
            a_12 = t;
            t = SSLsetAnnotations(a_12, r_49);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_90;
        }
      LocalPopChoice(n_34);
      t = xtc_transform_file_2_0(k_4, pass_verbose_0_0, t);
    }
  else
    {
      t = k_34;
      t = xtc_transform_term_2_0(m_4, pass_verbose_0_0, t);
    }
  {
    ATerm o_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_90 = NULL,y_90 = NULL;
        y_90 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_90 = ATgetArgument(t, 0);
            {
              ATerm i_50 = NULL,b_12 = NULL;
              t = SSLgetAnnotations(y_90);
              i_50 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_90);
              b_12 = t;
              t = SSLsetAnnotations(b_12, i_50);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_90;
          }
        LocalPopChoice(s_34);
        t = xtc_transform_file_2_0(n_4, pass_verbose_0_0, t);
      }
    else
      {
        t = o_34;
        t = xtc_transform_term_2_0(o_4, pass_verbose_0_0, t);
      }
  }
  t = xtc_ast2abox_1_0(p_4, t);
  {
    ATerm t_34 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_91 = NULL,f_91 = NULL;
        f_91 = t;
        if(match_cons(t, sym_FILE_1))
          {
            e_91 = ATgetArgument(t, 0);
            {
              ATerm v_50 = NULL,c_12 = NULL;
              t = SSLgetAnnotations(f_91);
              v_50 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_91);
              c_12 = t;
              t = SSLsetAnnotations(c_12, v_50);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_91;
          }
        LocalPopChoice(c_35);
        t = xtc_transform_file_2_0(q_4, pass_verbose_0_0, t);
      }
    else
      {
        t = t_34;
        t = xtc_transform_term_2_0(w_4, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_91 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_d_35;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm s_91 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_35);
      s_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_91, (ATerm) ATinsert(ATempty, term_e_35));
      t = m_14(q_91, s_91, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm x_91 = NULL,z_91 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if(match_cons(f_35, sym_Stream_1))
        {
          x_91 = ATgetArgument(f_35, 0);
        }
      else
        _fail(t);
      z_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15(x_91, z_91, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_144 (ATerm), ATerm s_144 (ATerm), ATerm t)
{
  ATerm u_91 = NULL,w_91 = NULL;
  w_91 = t;
  t = xtc_new_file_0_0(t);
  u_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_91, w_91);
  t = x_15(x_4, u_91, w_91, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_91);
  t = xtc_transform_file_2_0(r_144, s_144, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_14 (ATerm r_62, ATerm s_62, ATerm t)
{
  t = SSL_execvp(r_62, s_62);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_93 = NULL,h_93 = NULL,j_93 = NULL,k_93 = NULL;
  d_93 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_93 = ATgetArgument(t, 0);
      {
        ATerm d_51 = NULL,e_51 = NULL;
        t = SSL_int_to_string(h_93);
        d_51 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_35), d_51), term_g_35);
        e_51 = t;
        t = SSL_concat_strings(e_51);
      }
    }
  else
    {
      ATerm o_51 = NULL,p_51 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_93 = ATgetArgument(t, 0);
          j_93 = ATgetArgument(t, 1);
          k_93 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_93);
      o_51 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_93), term_j_35), o_51), term_i_35), h_93);
      p_51 = t;
      t = SSL_concat_strings(p_51);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_93 = NULL;
  p_93 = t;
  {
    ATerm k_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_4 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_35 = ATgetArgument(t, 0);
              if((p_93 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm o_35 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_42), term_f_42), term_a_42), term_u_41), term_q_41), term_d_41), term_y_40), term_q_40), term_l_40), term_h_40), term_z_39), term_r_39), term_l_39), term_f_39), term_b_39), term_x_38), term_m_38), term_e_38), term_y_37), term_p_37), term_k_37), term_f_37), term_x_36), term_s_36), term_o_36), term_e_36), term_y_35), term_r_35);
        t = fetch_elem_1_0(y_4, t);
        LocalPopChoice(m_35);
      }
    else
      {
        t = k_35;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_93);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_93 = NULL,n_94 = NULL;
  z_93 = t;
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_42 = ATgetArgument(t, 0);
            n_94 = ATgetArgument(t, 1);
            {
              ATerm a_43 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_42);
        {
          ATerm b_43 = t;
          int c_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_51 = NULL,x_51 = NULL,y_51 = NULL;
              t = n_94;
              {
                ATerm d_43 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_43;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              v_51 = t;
              t = term_d_19;
              x_51 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, v_51), term_e_43);
              y_51 = t;
              t = SSL_printnl(x_51, y_51);
              t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, v_51), term_e_43));
              LocalPopChoice(c_43);
            }
          else
            {
              t = b_43;
              t = z_93;
            }
        }
      }
    else
      {
        t = x_42;
        t = z_93;
      }
  }
  t = z_93;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_136 (ATerm), ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL;
  y_94 = t;
  t = fork_0_0(t);
  x_94 = t;
  {
    ATerm f_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_94;
        t = v_136(t);
        LocalPopChoice(l_43);
      }
    else
      {
        t = f_43;
        t = SSL_waitpid(x_94);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_43 = ATgetArgument(t, 0);
            if(((ATgetType(m_43) != AT_INT) || (ATgetInt((ATermInt) m_43) != 0)))
              _fail(t);
            {
              ATerm r_43 = ATgetArgument(t, 1);
            }
            {
              ATerm s_43 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_94;
      }
  }
  return(t);
}
static ATerm i_14 (ATerm l_71, ATerm t)
{
  t = SSL_hashtable_keys(l_71);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL;
  static ATerm z_4 (ATerm t)
  {
    ATerm c_95 = NULL,d_95 = NULL;
    c_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_95), c_95);
    t = g_16(not_null(a_95), c_95, t);
    d_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_95, d_95);
    return(t);
  }
  if(((a_95 != NULL) && (a_95 != t)))
    _fail(t);
  else
    a_95 = t;
  t = lookup_table_0_1(a_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(b_95, t);
  t = map_1_0(z_4, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm g_95 = NULL;
  g_95 = t;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL;
        t = term_v_33;
        k_95 = t;
        t = term_m_33;
        l_95 = t;
        t = term_w_33;
        t = g_16(k_95, l_95, t);
        j_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_95, term_s_41);
        t = geq_0_0(t);
        t = g_95;
        t = m_135(t);
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
        t = g_95;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm l_135 (ATerm), ATerm t)
{
  ATerm o_95 = NULL;
  o_95 = t;
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_95 = NULL,r_95 = NULL,x_95 = NULL;
        t = term_v_33;
        r_95 = t;
        t = term_m_33;
        x_95 = t;
        t = term_w_33;
        t = g_16(r_95, x_95, t);
        q_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_95, term_g_38);
        t = geq_0_0(t);
        t = o_95;
        t = l_135(t);
        LocalPopChoice(x_43);
      }
    else
      {
        t = w_43;
        t = o_95;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm n_135 (ATerm), ATerm t)
{
  ATerm a_96 = NULL;
  a_96 = t;
  {
    ATerm y_43 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_96 = NULL,d_96 = NULL,f_96 = NULL;
        t = term_v_33;
        d_96 = t;
        t = term_m_33;
        f_96 = t;
        t = term_w_33;
        t = g_16(d_96, f_96, t);
        c_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_96, term_g_36);
        t = geq_0_0(t);
        t = a_96;
        t = n_135(t);
        LocalPopChoice(c_44);
      }
    else
      {
        t = y_43;
        t = a_96;
      }
  }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm y_96 = NULL;
  if(match_cons(t, sym__2))
    {
      y_96 = ATgetArgument(t, 0);
      if((y_96 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm j_67, ATerm k_67, ATerm l_67, ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL;
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_67, k_67);
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_44 = ATgetArgument(t, 0);
            ATerm k_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_67, k_67);
        t = g_16(j_67, k_67, t);
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        t = (ATerm) ATempty;
      }
  }
  k_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_96, l_67);
  t = r_15(a_5, k_96, l_67, t);
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_67, k_67, j_96);
  t = lookup_table_0_1(j_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(k_67, j_96, l_96, t);
  t = i_96;
  return(t);
}
static ATerm l_14 (ATerm e_140 (ATerm), ATerm t_67, ATerm s_67, ATerm t)
{
  static ATerm d_5 (ATerm t)
  {
    ATerm z_96 = NULL,a_97 = NULL;
    if(match_cons(t, sym__2))
      {
        z_96 = ATgetArgument(t, 0);
        a_97 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_67, z_96, a_97);
    t = e_140(t);
    return(t);
  }
  t = s_67;
  t = map_1_0(d_5, t);
  return(t);
}
static ATerm m_14 (ATerm g_43, ATerm h_43, ATerm t)
{
  t = SSL_access(g_43, h_43);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_o_44;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_97 = NULL,f_97 = NULL;
      b_97 = t;
      t = (ATerm) ATinsert(ATempty, term_s_44);
      f_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_97, (ATerm) ATinsert(ATempty, term_s_44));
      t = m_14(b_97, f_97, t);
      LocalPopChoice(q_44);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_44;
      {
        ATerm t_44 = t;
        int u_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_44 = t;
            if((PushChoice() == 0))
              {
                ATerm j_97 = NULL,k_97 = NULL;
                j_97 = t;
                t = (ATerm) ATinsert(ATempty, term_e_35);
                k_97 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_97, (ATerm) ATinsert(ATempty, term_e_35));
                t = m_14(j_97, k_97, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_44;
              }
            t = debug_1_0(e_5, t);
            LocalPopChoice(u_44);
          }
        else
          {
            t = t_44;
            t = debug_1_0(g_5, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = debug_1_0(i_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_a_45;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = debug_1_0(m_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
  o_98 = t;
  t = term_d_19;
  p_98 = t;
  t = (ATerm) ATinsert(ATempty, term_c_45);
  q_98 = t;
  t = SSL_printnl(p_98, q_98);
  t = o_98;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm r_98 = NULL,w_98 = NULL,y_98 = NULL;
  if(match_cons(t, sym__3))
    {
      r_98 = ATgetArgument(t, 0);
      w_98 = ATgetArgument(t, 1);
      y_98 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_14(r_98, w_98, y_98, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm c_99 = NULL,f_99 = NULL,g_99 = NULL;
  c_99 = t;
  t = term_d_19;
  f_99 = t;
  t = (ATerm) ATinsert(ATempty, term_d_45);
  g_99 = t;
  t = SSL_printnl(f_99, g_99);
  t = c_99;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  t = term_d_19;
  i_99 = t;
  t = (ATerm) ATinsert(ATempty, term_c_45);
  j_99 = t;
  t = SSL_printnl(i_99, j_99);
  t = h_99;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,d_98 = NULL,e_98 = NULL,g_98 = NULL;
  o_97 = t;
  t = if_verbose5_1_0(h_5, t);
  {
    ATerm h_45 = t;
    if((PushChoice() == 0))
      {
        ATerm l_98 = NULL,n_98 = NULL;
        t = term_i_45;
        l_98 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_97);
        n_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_45, (ATerm) ATmakeAppl(sym_Imported_1, o_97));
        t = g_16(l_98, n_98, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_45;
      }
  }
  r_97 = t;
  t = term_i_45;
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_45, term_l_45, (ATerm) ATinsert(ATempty, o_97));
  t = lookup_table_0_1(y_97, t);
  g_98 = t;
  t = term_l_45;
  z_97 = t;
  t = (ATerm) ATinsert(ATempty, o_97);
  d_98 = t;
  t = g_98;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(z_97, d_98, e_98, t);
  t = r_97;
  t = if_verbose4_1_0(j_5, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_5, t);
  q_97 = t;
  t = term_i_45;
  x_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_45, q_97);
  t = l_14(o_5, x_97, q_97, t);
  t = if_verbose6_1_0(u_5, t);
  t = term_i_45;
  s_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_45, (ATerm)ATmakeAppl(sym_Imported_1, o_97), (ATerm) ATempty);
  t = lookup_table_0_1(s_97, t);
  w_97 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, o_97);
  t_97 = t;
  t = (ATerm) ATempty;
  u_97 = t;
  t = w_97;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(t_97, u_97, v_97, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_45, (ATerm)ATmakeAppl(sym_Imported_1, o_97), (ATerm) ATempty);
  t = if_verbose4_1_0(y_5, t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_99 = NULL,l_99 = NULL;
      t = term_v_33;
      k_99 = t;
      t = term_x_45;
      l_99 = t;
      t = term_y_45;
      t = g_16(k_99, l_99, t);
      LocalPopChoice(w_45);
    }
  else
    {
      t = t_45;
      {
        ATerm z_45 = t;
        int a_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_99 = NULL;
            t = term_b_46;
            m_99 = t;
            t = SSL_getenv(m_99);
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
static ATerm b_6 (ATerm t)
{
  t = debug_1_0(e_6, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_d_46;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm a_100 = NULL,c_100 = NULL;
  t = term_i_45;
  a_100 = t;
  t = term_e_46;
  c_100 = t;
  t = term_h_46;
  t = g_16(a_100, c_100, t);
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
static ATerm n_6 (ATerm t)
{
  t = debug_1_0(o_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_m_46;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_99 = NULL;
  t = if_verbose5_1_0(b_6, t);
  r_99 = t;
  {
    ATerm n_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_99 = NULL,t_99 = NULL;
        t = term_i_45;
        s_99 = t;
        t = term_l_45;
        t_99 = t;
        t = term_r_46;
        t = g_16(s_99, t_99, t);
        LocalPopChoice(q_46);
      }
    else
      {
        t = n_46;
        {
          ATerm z_99 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_99 = t;
          t = repeat_2_0(k_6, _id, t);
          t = z_99;
        }
      }
  }
  t = r_99;
  t = if_verbose5_1_0(n_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = debug_1_0(q_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm o_101 (ATerm l_100, ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,s_100 = NULL;
  t = term_i_45;
  p_100 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_100);
  s_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_45, (ATerm) ATmakeAppl(sym_Tool_1, l_100));
  t = g_16(p_100, s_100, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_46 = ATgetFirst((ATermList) t);
      if(match_cons(u_46, sym__2))
        {
          ATerm w_46 = ATgetArgument(u_46, 0);
          o_100 = ATgetArgument(u_46, 1);
        }
      else
        _fail(t);
      {
        ATerm v_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_100;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = debug_1_0(t_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_i_45;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_6, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_x_46;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_100 = NULL,u_100 = NULL,v_100 = NULL;
      t = if_verbose5_1_0(p_6, t);
      t = xtc_load_0_0(t);
      v_100 = t;
      if(match_cons(t, sym__2))
        {
          t_100 = ATgetArgument(t, 0);
          u_100 = ATgetArgument(t, 1);
          {
            ATerm l_47 = t;
            int m_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_100 = NULL,a_101 = NULL,c_101 = NULL;
                t = term_i_45;
                a_101 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_100);
                c_101 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_45, (ATerm) ATmakeAppl(sym_Tool_1, t_100));
                t = g_16(a_101, c_101, t);
                {
                  static ATerm r_6 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_100 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_100 != NULL) && (z_100 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_100 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_6, t);
                }
                t = not_null(z_100);
                LocalPopChoice(m_47);
              }
            else
              {
                t = l_47;
                t = o_101(v_100, t);
              }
          }
        }
      else
        {
          t = o_101(v_100, t);
        }
      t = if_verbose5_1_0(s_6, t);
      LocalPopChoice(k_47);
    }
  else
    {
      t = d_47;
      {
        ATerm n_101 = NULL,c_52 = NULL,d_52 = NULL;
        n_101 = t;
        t = term_d_19;
        c_52 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_47), n_101), term_o_47);
        d_52 = t;
        t = SSL_printnl(c_52, d_52);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_47), n_101), term_o_47);
        t = if_verbose5_1_0(w_6, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_145 (ATerm), ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL;
  s_101 = t;
  t = s_145(t);
  t = xtc_find_0_0(t);
  r_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_101, s_101);
  {
    static ATerm y_6 (ATerm t)
    {
      ATerm t_101 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_101, s_101);
      t = g_14(r_101, s_101, t);
      t = term_q_47;
      t_101 = t;
      t = SSL_exit(t_101);
      return(t);
    }
    t = fork_and_wait_1_0(y_6, t);
  }
  t = s_101;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_101 = NULL,a_102 = NULL;
  w_101 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_102 = NULL,e_102 = NULL;
      t = w_101;
      t = xtc_new_file_0_0(t);
      b_102 = t;
      t = j_0(t);
      e_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_102, (ATerm) ATinsert(ATinsert(ATempty, b_102), term_r_47));
      t = conc_0_0(t);
      t = xtc_command_1_0(h_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_102);
    }
  else
    {
      ATerm k_102 = NULL,l_102 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_102;
      t = xtc_new_file_0_0(t);
      k_102 = t;
      t = j_0(t);
      l_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_102, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_102), term_r_47), a_102), term_t_47));
      t = conc_0_0(t);
      t = xtc_command_1_0(h_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_102);
    }
  return(t);
}
static ATerm n_14 (ATerm m_66, ATerm n_66, ATerm l_66, ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL;
  s_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_66, n_66);
  {
    ATerm v_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_47 = ATgetArgument(t, 0);
            ATerm b_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_66, n_66);
        t = g_16(m_66, n_66, t);
        LocalPopChoice(y_47);
      }
    else
      {
        t = v_47;
        t = (ATerm) ATempty;
      }
  }
  t_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_66, n_66, (ATerm) ATinsert(CheckATermList(t_102), l_66));
  t = lookup_table_0_1(m_66, t);
  w_102 = t;
  t = (ATerm) ATinsert(CheckATermList(t_102), l_66);
  u_102 = t;
  t = w_102;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(n_66, u_102, v_102, t);
  t = s_102;
  return(t);
}
static ATerm o_14 (ATerm x_131 (ATerm), ATerm w_47, ATerm u_47, ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,m_103 = NULL;
  g_103 = t;
  t = x_131(t);
  d_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_103, w_47, u_47);
  t = n_14(d_103, w_47, u_47, t);
  {
    ATerm d_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_103 = NULL;
        t = term_n_48;
        n_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_103, term_n_48);
        t = g_16(d_103, n_103, t);
        {
          ATerm o_48 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_48;
            }
        }
        LocalPopChoice(h_48);
      }
    else
      {
        t = d_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_103 = ATgetFirst((ATermList) t);
      f_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_103, term_n_48, (ATerm) ATinsert(CheckATermList(f_103), (ATerm) ATinsert(CheckATermList(e_103), w_47)));
  t = lookup_table_0_1(d_103, t);
  m_103 = t;
  t = term_n_48;
  h_103 = t;
  t = (ATerm) ATinsert(CheckATermList(f_103), (ATerm) ATinsert(CheckATermList(e_103), w_47));
  i_103 = t;
  t = m_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(h_103, i_103, j_103, t);
  t = g_103;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm p_103 = NULL;
  ATerm r_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_103 = NULL,h_52 = NULL;
      t_103 = t;
      t = term_u_48;
      h_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_103, term_u_48);
      t = z_15(t_103, h_52, t);
      p_103 = t;
      t = SSL_mkstemp(p_103);
      LocalPopChoice(t_48);
    }
  else
    {
      t = r_48;
      {
        ATerm u_103 = NULL;
        t = term_y_48;
        u_103 = t;
        t = SSL_perror(u_103);
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
  t = term_b_49;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL;
  t = P__tmpdir_0_0(t);
  z_103 = t;
  t = term_c_49;
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_103, term_c_49);
  t = z_15(z_103, a_104, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      x_103 = ATgetArgument(t, 0);
      w_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_c_19;
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_103, term_c_19);
  t = o_14(z_6, x_103, y_103, t);
  t = SSL_close(w_103);
  t = x_103;
  return(t);
}
static ATerm p_14 (ATerm r_66, ATerm s_66, ATerm t)
{
  ATerm b_104 = NULL,c_104 = NULL;
  c_104 = t;
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_66, s_66);
        t = g_16(r_66, s_66, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_49 = ATgetFirst((ATermList) t);
            b_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_49);
        {
          ATerm d_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_66, s_66, b_104);
          t = lookup_table_0_1(r_66, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_104 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_16(s_66, b_104, d_104, t);
          t = (ATerm) ATmakeAppl(sym__3, r_66, s_66, b_104);
        }
      }
    else
      {
        t = d_49;
        {
          ATerm f_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_66, s_66);
          t = lookup_table_0_1(r_66, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_104 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_16(s_66, f_104, t);
          t = (ATerm) ATmakeAppl(sym__2, r_66, s_66);
        }
      }
  }
  t = c_104;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_131 (ATerm), ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL,o_104 = NULL;
  k_104 = t;
  t = u_131(t);
  j_104 = t;
  {
    ATerm g_49 = t;
    int h_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_104 = NULL;
        t = term_n_48;
        p_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_104, term_n_48);
        t = g_16(j_104, p_104, t);
        {
          ATerm i_49 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_49;
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
      i_104 = ATgetFirst((ATermList) t);
      h_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_104, term_n_48, h_104);
  t = lookup_table_0_1(j_104, t);
  o_104 = t;
  t = term_n_48;
  l_104 = t;
  t = o_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(l_104, h_104, m_104, t);
  t = i_104;
  {
    static ATerm a_7 (ATerm t)
    {
      ATerm q_104 = NULL;
      q_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_104, q_104);
      t = p_14(j_104, q_104, t);
      return(t);
    }
    t = map_1_0(a_7, t);
  }
  t = k_104;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t)
{
  ATerm j_49 = t;
  int k_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_110(t);
      t = w_110(t);
      LocalPopChoice(k_49);
    }
  else
    {
      t = j_49;
      t = w_110(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL;
  t_104 = t;
  t = t_131(t);
  s_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_104, term_n_48);
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_105 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_49 = ATgetArgument(t, 0);
            ATerm o_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_48;
        c_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_104, term_n_48);
        t = g_16(s_104, c_105, t);
        LocalPopChoice(m_49);
      }
    else
      {
        t = l_49;
        t = (ATerm) ATempty;
      }
  }
  u_104 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_104, term_n_48, (ATerm) ATinsert(CheckATermList(u_104), (ATerm) ATempty));
  t = lookup_table_0_1(s_104, t);
  y_104 = t;
  t = term_n_48;
  v_104 = t;
  t = (ATerm) ATinsert(CheckATermList(u_104), (ATerm) ATempty);
  w_104 = t;
  t = y_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(v_104, w_104, x_104, t);
  t = t_104;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_b_49;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm n_105 = NULL;
  n_105 = t;
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_105);
        LocalPopChoice(q_49);
      }
    else
      {
        t = p_49;
        t = n_105;
      }
  }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_145 (ATerm), ATerm t)
{
  ATerm h_105 = NULL;
  static ATerm c_7 (ATerm t)
  {
    ATerm i_105 = NULL;
    i_105 = t;
    {
      ATerm s_49 = t;
      int v_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_105 = NULL,k_105 = NULL;
          t = term_b_49;
          j_105 = t;
          t = term_n_48;
          k_105 = t;
          t = term_y_49;
          t = g_16(j_105, k_105, t);
          LocalPopChoice(v_49);
        }
      else
        {
          t = s_49;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_105 != NULL) && (h_105 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_105 = ATgetFirst((ATermList) t);
        {
          ATerm z_49 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_105;
    t = map_1_0(d_7, t);
    t = i_105;
    t = end_scope_1_0(f_7, t);
    return(t);
  }
  t = begin_scope_1_0(b_7, t);
  t = restore_always_2_0(e_145, c_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL;
  w_105 = t;
  t = xtc_new_file_0_0(t);
  v_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_105, w_105);
  t = x_15(q_7, v_105, w_105, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_105);
  {
    ATerm a_50 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_106 = NULL,c_106 = NULL,m_12 = NULL;
        c_106 = t;
        if(match_cons(t, sym_FILE_1))
          {
            ATerm c_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_106);
        b_106 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_105);
        m_12 = t;
        t = SSLsetAnnotations(m_12, b_106);
        LocalPopChoice(b_50);
        t = xtc_transform_file_2_0(u_7, z_7, t);
      }
    else
      {
        t = a_50;
        t = xtc_transform_term_2_0(b_8, c_8, t);
      }
  }
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      u_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_105;
  t = read_text_file_0_0(t);
  t = trim_1_0(is_whitespace_0_0, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm x_105 = NULL,a_106 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_50 = ATgetArgument(t, 0);
      if(match_cons(d_50, sym_Stream_1))
        {
          x_105 = ATgetArgument(d_50, 0);
        }
      else
        _fail(t);
      a_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15(x_105, a_106, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_e_50;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL;
  t = xtc_temp_files_1_0(g_7, t);
  r_105 = t;
  t = term_d_19;
  s_105 = t;
  t = (ATerm) ATinsert(ATempty, term_g_50);
  t_105 = t;
  t = SSL_printnl(s_105, t_105);
  t = r_105;
  t = debug_1_0(d_8, t);
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
static ATerm h_8 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm w_52 = NULL,b_53 = NULL;
  if(match_cons(t, sym_term_1))
    {
      ATerm k_50 = ATgetArgument(t, 0);
      if(match_cons(k_50, sym_appl_2))
        {
          ATerm l_50 = ATgetArgument(k_50, 0);
          if(match_cons(l_50, sym_uqlit_1))
            {
              ATerm q_50 = ATgetArgument(l_50, 0);
              if((ATgetSymbol((ATermAppl) q_50) != ATmakeSymbol("cons", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm m_50 = ATgetArgument(k_50, 1);
            if(((ATgetType(m_50) == AT_LIST) && !(ATisEmpty(m_50))))
              {
                ATerm r_50 = ATgetFirst((ATermList) m_50);
                if(match_cons(r_50, sym_fun_1))
                  {
                    ATerm t_50 = ATgetArgument(r_50, 0);
                    if(match_cons(t_50, sym_qlit_1))
                      {
                        w_52 = ATgetArgument(t_50, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm s_50 = (ATerm) ATgetNext((ATermList) m_50);
                  if(((ATgetType(s_50) != AT_LIST) || !(ATisEmpty(s_50))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = SSL_explode_string(w_52);
  t = unquote_chars_2_0(q_8, r_8, t);
  b_53 = t;
  t = SSL_implode_string(b_53);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm d_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,n_107 = NULL,p_107 = NULL,t_107 = NULL;
  i_107 = t;
  if(match_cons(t, sym_prod_3))
    {
      j_107 = ATgetArgument(t, 0);
      n_107 = ATgetArgument(t, 1);
      p_107 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_107;
  if(match_cons(t, sym_attrs_1))
    {
      t_107 = ATgetArgument(t, 0);
      t = n_107;
      if(match_cons(t, sym_cf_1))
        {
          g_107 = ATgetArgument(t, 0);
          t = g_107;
          if(match_cons(t, sym_sort_1))
            {
              h_107 = ATgetArgument(t, 0);
              t = j_107;
              {
                ATerm u_50 = t;
                int w_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_107;
                    t = fetch_1_0(e_8, t);
                    t = i_107;
                    LocalPopChoice(w_50);
                  }
                else
                  {
                    t = u_50;
                    {
                      ATerm x_50 = t;
                      int y_50 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_107;
                          t = fetch_1_0(f_8, t);
                          t = i_107;
                          LocalPopChoice(y_50);
                        }
                      else
                        {
                          t = x_50;
                          {
                            ATerm z_50 = t;
                            int a_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = t_107;
                                t = fetch_1_0(h_8, t);
                                t = t_107;
                                {
                                  ATerm b_51 = t;
                                  if((PushChoice() == 0))
                                    {
                                      t = fetch_elem_1_0(j_8, t);
                                      PopChoice();
                                      _fail(t);
                                    }
                                  else
                                    {
                                      t = b_51;
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_prod_3, j_107, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, h_107)), (ATerm) ATmakeAppl(sym_attrs_1, t_107));
                                LocalPopChoice(a_51);
                              }
                            else
                              {
                                t = z_50;
                                t = t_107;
                                t = fetch_1_0(s_8, t);
                                t = i_107;
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
                ATerm c_51 = t;
                int f_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_107;
                    t = fetch_1_0(t_8, t);
                    t = i_107;
                    LocalPopChoice(f_51);
                  }
                else
                  {
                    t = c_51;
                    {
                      ATerm g_51 = t;
                      int h_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_107;
                          t = fetch_1_0(u_8, t);
                          t = i_107;
                          LocalPopChoice(h_51);
                        }
                      else
                        {
                          t = g_51;
                          t = t_107;
                          t = fetch_1_0(v_8, t);
                          t = i_107;
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
            ATerm i_51 = t;
            int j_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_107;
                t = fetch_1_0(w_8, t);
                t = i_107;
                LocalPopChoice(j_51);
              }
            else
              {
                t = i_51;
                {
                  ATerm k_51 = t;
                  int l_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = t_107;
                      t = fetch_1_0(x_8, t);
                      t = i_107;
                      LocalPopChoice(l_51);
                    }
                  else
                    {
                      t = k_51;
                      t = t_107;
                      t = fetch_1_0(z_8, t);
                      t = i_107;
                    }
                }
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_no_attrs_0)))
        _fail(t);
      t = n_107;
      if(match_cons(t, sym_sort_1))
        {
          ATerm m_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_107;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_107 = ATgetFirst((ATermList) t);
          f_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_107;
      if(match_cons(t, sym_sort_1))
        {
          ATerm n_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_107;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_107;
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm e_144 (ATerm), ATerm t)
{
  ATerm w_108 = NULL,x_108 = NULL,y_108 = NULL,z_108 = NULL;
  t = number_nonterminals_0_0(t);
  z_108 = t;
  t = make_0_0(t);
  w_108 = t;
  t = z_108;
  {
    static ATerm d_9 (ATerm t)
    {
      static ATerm e_9 (ATerm t)
      {
        ATerm a_109 = NULL;
        t = term_c_19;
        t = e_144(t);
        a_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_109, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(e_9, t);
      return(t);
    }
    t = map_1_0(d_9, t);
  }
  t = concat_0_0(t);
  x_108 = t;
  t = term_c_19;
  t = e_144(t);
  y_108 = t;
  t = (ATerm) ATinsert(CheckATermList(x_108), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, y_108), w_108));
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  ATerm d_109 = NULL;
  static ATerm f_9 (ATerm t)
  {
    t = x_118(t);
    if(((d_109 != NULL) && (d_109 != t)))
      _fail(t);
    else
      d_109 = t;
    return(t);
  }
  t = fetch_1_0(f_9, t);
  t = not_null(d_109);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm r_54 = NULL,o_55 = NULL;
  if(match_cons(t, sym_term_1))
    {
      ATerm q_51 = ATgetArgument(t, 0);
      if(match_cons(q_51, sym_appl_2))
        {
          ATerm r_51 = ATgetArgument(q_51, 0);
          if(match_cons(r_51, sym_uqlit_1))
            {
              ATerm t_51 = ATgetArgument(r_51, 0);
              if((ATgetSymbol((ATermAppl) t_51) != ATmakeSymbol("cons", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm s_51 = ATgetArgument(q_51, 1);
            if(((ATgetType(s_51) == AT_LIST) && !(ATisEmpty(s_51))))
              {
                ATerm u_51 = ATgetFirst((ATermList) s_51);
                if(match_cons(u_51, sym_fun_1))
                  {
                    ATerm z_51 = ATgetArgument(u_51, 0);
                    if(match_cons(z_51, sym_qlit_1))
                      {
                        r_54 = ATgetArgument(z_51, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm w_51 = (ATerm) ATgetNext((ATermList) s_51);
                  if(((ATgetType(w_51) != AT_LIST) || !(ATisEmpty(w_51))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = SSL_explode_string(r_54);
  t = unquote_chars_2_0(m_9, n_9, t);
  o_55 = t;
  t = SSL_implode_string(o_55);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL,e_110 = NULL,f_110 = NULL,g_110 = NULL;
  d_110 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      e_110 = ATgetArgument(t, 0);
      f_110 = ATgetArgument(t, 1);
      g_110 = ATgetArgument(t, 2);
      c_110 = ATgetArgument(t, 3);
      {
        ATerm l_110 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_52)), f_110), (ATerm) ATinsert(ATinsert(ATempty, term_b_52), (ATerm) ATmakeAppl(sym_lit_1, e_110)));
        t = concat_0_0(t);
        l_110 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, l_110, g_110, c_110);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm z_53 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          e_110 = ATgetArgument(t, 0);
          {
            ATerm f_52 = ATgetArgument(t, 1);
          }
          g_110 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_110;
      {
        ATerm g_52 = t;
        int i_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_54 = NULL;
            t = g_110;
            if(match_cons(t, sym_attrs_1))
              {
                c_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_54;
            t = fetch_elem_1_0(l_9, t);
            z_53 = t;
            LocalPopChoice(i_52);
            {
              static ATerm o_9 (ATerm t)
              {
                t = z_53;
                return(t);
              }
              t = e_110;
              t = symbols2pp_entries_1_0(o_9, t);
            }
          }
        else
          {
            t = g_52;
            {
              ATerm j_52 = t;
              int k_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(k_52);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = j_52;
                  {
                    ATerm l_52 = t;
                    int m_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_52 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm s_54 = NULL;
                            s_54 = t;
                            t = term_o_52;
                            t = get_options_0_0(t);
                            t = oncetd_1_0(p_9, t);
                            t = s_54;
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = n_52;
                          }
                        t = missing_constructor_warning_0_0(t);
                        LocalPopChoice(m_52);
                      }
                    else
                      {
                        t = l_52;
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
  ATerm a_124 = NULL,b_124 = NULL,d_124 = NULL,g_124 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      d_124 = ATgetArgument(t, 0);
      g_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_124;
  if(match_cons(t, sym_alt_2))
    {
      a_124 = ATgetArgument(t, 0);
      b_124 = ATgetArgument(t, 1);
      {
        ATerm p_52 = t;
        int q_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_124 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, a_124, b_124);
            t = flat_alt_0_0(t);
            n_124 = t;
            t = (ATerm) ATinsert(CheckATermList(n_124), d_124);
            LocalPopChoice(q_52);
          }
        else
          {
            t = p_52;
            t = (ATerm) ATinsert(ATinsert(ATempty, g_124), d_124);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, g_124), d_124);
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm p_110 = NULL,q_110 = NULL,r_110 = NULL,y_110 = NULL,c_111 = NULL;
  p_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_110;
    }
  else
    {
      ATerm i_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_110 = ATgetFirst((ATermList) t);
          r_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_110 = ATgetFirst((ATermList) t);
          c_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_111;
      t = pair_0_0(t);
      i_111 = t;
      t = (ATerm) ATinsert(CheckATermList(i_111), (ATerm) ATmakeAppl(sym__2, q_110, y_110));
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL,s_115 = NULL,v_12 = NULL;
  q_115 = t;
  if(match_cons(t, sym_lit_1))
    {
      p_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_115);
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, p_115);
  v_12 = t;
  t = SSLsetAnnotations(v_12, o_115);
  if(match_cons(t, sym_lit_1))
    {
      s_115 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_r_52, (ATerm) ATmakeAppl(sym_S_1, s_115));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          s_115 = ATgetArgument(t, 0);
          {
            ATerm s_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, s_115);
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL,l_13 = NULL,n_118 = NULL,e_117 = NULL,d_13 = NULL;
  c_117 = t;
  if(match_cons(t, sym__2))
    {
      x_116 = ATgetArgument(t, 0);
      y_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_117);
  w_116 = t;
  t = x_116;
  if(match_cons(t, sym_lit_1))
    {
      b_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_116);
  a_117 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, b_117);
  d_13 = t;
  t = SSLsetAnnotations(d_13, a_117);
  if(match_cons(t, sym_lit_1))
    {
      e_117 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_r_52, (ATerm) ATmakeAppl(sym_S_1, e_117));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          e_117 = ATgetArgument(t, 0);
          {
            ATerm t_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, e_117);
    }
  u_116 = t;
  t = y_116;
  t = _2_0(_id, b_10, t);
  if(match_cons(t, sym_lit_1))
    {
      n_118 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_r_52, (ATerm) ATmakeAppl(sym_S_1, n_118));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          n_118 = ATgetArgument(t, 0);
          {
            ATerm u_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, n_118);
    }
  v_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_116, v_116);
  l_13 = t;
  t = SSLsetAnnotations(l_13, w_116);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_y_52), (ATerm) ATinsert(ATinsert(ATempty, v_116), u_116));
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm g_118 = NULL,i_118 = NULL;
  g_118 = t;
  if(match_cons(t, sym_iter_1))
    {
      i_118 = ATgetArgument(t, 0);
      {
        ATerm a_58 = NULL,e_13 = NULL;
        t = SSLgetAnnotations(g_118);
        a_58 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, i_118);
        e_13 = t;
        t = SSLsetAnnotations(e_13, a_58);
      }
    }
  else
    {
      ATerm o_58 = NULL,f_13 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          i_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_118);
      o_58 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, i_118);
      f_13 = t;
      t = SSLsetAnnotations(f_13, o_58);
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm s_118 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      s_118 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_r_52, (ATerm) ATmakeAppl(sym_S_1, s_118));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          s_118 = ATgetArgument(t, 0);
          {
            ATerm z_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, s_118);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm v_112 = NULL,y_112 = NULL,a_113 = NULL,g_113 = NULL,h_113 = NULL;
  ATerm a_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL,y_113 = NULL,y_12 = NULL,i_115 = NULL,t_12 = NULL,e_115 = NULL,f_115 = NULL;
      t = reverse_acc_2_0(_id, s_9, t);
      y_113 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_113 = ATgetFirst((ATermList) t);
          m_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_113);
      k_113 = t;
      t = l_113;
      if(match_cons(t, sym__2))
        {
          u_113 = ATgetArgument(t, 0);
          v_113 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_113);
      r_113 = t;
      t = v_113;
      if(match_cons(t, sym_iter_1))
        {
          e_115 = ATgetArgument(t, 0);
          {
            ATerm w_55 = NULL,o_12 = NULL;
            t = SSLgetAnnotations(v_113);
            w_55 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, e_115);
            o_12 = t;
            t = SSLsetAnnotations(o_12, w_55);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              e_115 = ATgetArgument(t, 0);
              {
                ATerm b_56 = NULL,p_12 = NULL;
                t = SSLgetAnnotations(v_113);
                b_56 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, e_115);
                p_12 = t;
                t = SSLsetAnnotations(p_12, b_56);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  e_115 = ATgetArgument(t, 0);
                  f_115 = ATgetArgument(t, 1);
                  {
                    ATerm j_56 = NULL,r_12 = NULL;
                    t = SSLgetAnnotations(v_113);
                    j_56 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, e_115, f_115);
                    r_12 = t;
                    t = SSLsetAnnotations(r_12, j_56);
                  }
                }
              else
                {
                  ATerm e_57 = NULL,s_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      e_115 = ATgetArgument(t, 0);
                      f_115 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_113);
                  e_57 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, e_115, f_115);
                  s_12 = t;
                  t = SSLsetAnnotations(s_12, e_57);
                }
            }
        }
      w_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_113, w_113);
      t_12 = t;
      t = SSLsetAnnotations(t_12, r_113);
      if(match_cons(t, sym_lit_1))
        {
          i_115 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_r_52, (ATerm) ATmakeAppl(sym_S_1, i_115));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              i_115 = ATgetArgument(t, 0);
              {
                ATerm d_53 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, i_115);
        }
      p_113 = t;
      t = m_113;
      t = map_1_0(t_9, t);
      q_113 = t;
      t = (ATerm) ATinsert(CheckATermList(q_113), p_113);
      y_12 = t;
      t = SSLsetAnnotations(y_12, k_113);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_112 = ATgetFirst((ATermList) t);
          v_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_53 = t;
        if((PushChoice() == 0))
          {
            ATerm x_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,z_12 = NULL;
            b_116 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_115 = ATgetFirst((ATermList) t);
                a_116 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_116);
            x_115 = t;
            t = a_116;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_116), z_115);
            z_12 = t;
            t = SSLsetAnnotations(z_12, x_115);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_53;
          }
      }
      t = v_112;
      t = reverse_acc_2_0(_id, u_9, t);
      i_113 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, y_112), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, i_113)));
      LocalPopChoice(c_53);
    }
  else
    {
      t = a_53;
      {
        ATerm f_53 = t;
        int g_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_116 = NULL,g_116 = NULL,j_116 = NULL,k_116 = NULL,c_13 = NULL,p_116 = NULL;
            t = reverse_acc_2_0(_id, v_9, t);
            k_116 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_116 = ATgetFirst((ATermList) t);
                j_116 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_116);
            f_116 = t;
            t = g_116;
            if(match_cons(t, sym_lit_1))
              {
                p_116 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_r_52, (ATerm) ATmakeAppl(sym_S_1, p_116));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    p_116 = ATgetArgument(t, 0);
                    {
                      ATerm h_53 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, p_116);
              }
            h_113 = t;
            t = j_116;
            {
              ATerm i_53 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_53;
                }
            }
            t = reverse_acc_2_0(_id, x_9, t);
            a_113 = t;
            t = (ATerm) ATinsert(CheckATermList(a_113), h_113);
            c_13 = t;
            t = SSLsetAnnotations(c_13, f_116);
            t = a_113;
            t = pair_0_0(t);
            t = map_1_0(y_9, t);
            g_113 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_113), g_113));
            LocalPopChoice(g_53);
          }
        else
          {
            t = f_53;
            t = map_1_0(c_10, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm j_53 = t;
  if((PushChoice() == 0))
    {
      ATerm w_119 = NULL,x_119 = NULL,a_120 = NULL,j_17 = NULL;
      a_120 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_120);
      w_119 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_119);
      j_17 = t;
      t = SSLsetAnnotations(j_17, w_119);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_53;
    }
  return(t);
}
static ATerm j_122 (ATerm g_120, ATerm h_120, ATerm j_120, ATerm t)
{
  ATerm y_120 = NULL,u_17 = NULL;
  t = SSLgetAnnotations(g_120);
  y_120 = t;
  t = j_120;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_120, j_120);
  u_17 = t;
  t = SSLsetAnnotations(u_17, y_120);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm i_144 (ATerm), ATerm t)
{
  ATerm f_120 = NULL;
  static ATerm i_122 (ATerm t)
  {
    ATerm i_121 = NULL,j_121 = NULL,n_121 = NULL,o_121 = NULL,p_121 = NULL;
    i_121 = t;
    if(match_cons(t, sym__2))
      {
        j_121 = ATgetArgument(t, 0);
        n_121 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = n_121;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_121 = ATgetFirst((ATermList) t);
        p_121 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_53 = t;
          int l_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_122(i_121, j_121, n_121, t);
              LocalPopChoice(l_53);
            }
          else
            {
              t = k_53;
              {
                ATerm m_53 = t;
                int n_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_121 = NULL,y_121 = NULL,a_122 = NULL;
                    t = o_121;
                    t = i_144(t);
                    t = term_g_19;
                    a_122 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_121, term_g_19);
                    t = c_16(j_121, a_122, t);
                    y_121 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_121, p_121);
                    t = i_122(t);
                    v_121 = t;
                    t = (ATerm) ATinsert(CheckATermList(v_121), (ATerm) ATmakeAppl(sym__2, j_121, o_121));
                    LocalPopChoice(n_53);
                  }
                else
                  {
                    t = m_53;
                    {
                      ATerm h_122 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, j_121, p_121);
                      t = i_122(t);
                      h_122 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_122), o_121);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = j_122(i_121, j_121, n_121, t);
      }
    return(t);
  }
  f_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, f_120);
  t = i_122(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm n_122 = NULL,o_122 = NULL;
  o_122 = t;
  {
    ATerm o_53 = t;
    int p_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm q_53 = ATgetArgument(t, 0);
            n_122 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_53);
        t = n_122;
      }
    else
      {
        t = o_53;
        t = o_122;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(f_10, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm i_123 = NULL;
  i_123 = t;
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_123;
        {
          ATerm t_53 = t;
          if((PushChoice() == 0))
            {
              ATerm c_59 = NULL;
              c_59 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = c_59;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm u_53 = ATgetFirst((ATermList) t);
                      ATerm v_53 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_59;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_53;
            }
        }
        t = (ATerm) ATinsert(ATempty, i_123);
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
        t = i_123;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(g_10, t);
  t = concat_0_0(t);
  return(t);
}
ATerm _2_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm t)
{
  ATerm n_123 = NULL,q_123 = NULL,r_123 = NULL,s_123 = NULL,v_123 = NULL,w_123 = NULL,z_25 = NULL;
  w_123 = t;
  if(match_cons(t, sym__2))
    {
      q_123 = ATgetArgument(t, 0);
      r_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_123);
  n_123 = t;
  t = q_123;
  t = m_89(t);
  s_123 = t;
  t = r_123;
  t = n_89(t);
  v_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_123, v_123);
  z_25 = t;
  t = SSLsetAnnotations(z_25, n_123);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm n_127 = NULL,o_127 = NULL;
  ATerm w_53 = t;
  int x_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          n_127 = ATgetArgument(t, 0);
          o_127 = ATgetArgument(t, 1);
          {
            ATerm y_53 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_53);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, n_127, o_127);
    }
  else
    {
      t = w_53;
      if(match_cons(t, sym_iter_n_2))
        {
          n_127 = ATgetArgument(t, 0);
          {
            ATerm a_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, n_127);
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL;
  d_61 = t;
  if(match_cons(t, sym_Arg_1))
    {
      c_61 = ATgetArgument(t, 0);
      {
        ATerm b_54 = t;
        int d_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_62 = NULL,p_26 = NULL;
            t = SSLgetAnnotations(d_61);
            k_62 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, c_61);
            p_26 = t;
            t = SSLsetAnnotations(p_26, k_62);
            t = term_e_54;
            LocalPopChoice(d_54);
          }
        else
          {
            t = b_54;
            t = d_61;
          }
      }
    }
  else
    {
      t = d_61;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm f_144 (ATerm), ATerm t)
{
  ATerm u_125 = NULL,v_125 = NULL,w_125 = NULL,x_125 = NULL,y_125 = NULL;
  static ATerm y_128 (ATerm t)
  {
    static ATerm f_129 (ATerm c_127, ATerm d_127, ATerm e_127, ATerm t)
    {
      ATerm f_127 = NULL,i_127 = NULL,m_26 = NULL;
      t = SSLgetAnnotations(c_127);
      f_127 = t;
      t = e_127;
      t = _2_0(_id, i_10, t);
      i_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_127, i_127);
      m_26 = t;
      t = SSLsetAnnotations(m_26, f_127);
      t = y_128(t);
      return(t);
    }
    static ATerm g_129 (ATerm s_127, ATerm t_127, ATerm u_127, ATerm v_127, ATerm t)
    {
      ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL,c_128 = NULL,d_128 = NULL,e_128 = NULL;
      t = SSL_explode_term(v_127);
      if(match_cons(t, sym__2))
        {
          c_128 = ATgetArgument(t, 0);
          d_128 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, t_127, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, u_127, c_128)));
      t = conc_0_0(t);
      y_127 = t;
      t = d_128;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      e_128 = t;
      t = make_0_0(t);
      z_127 = t;
      t = e_128;
      {
        static ATerm j_10 (ATerm t)
        {
          ATerm g_128 = NULL;
          g_128 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_127, y_127), g_128);
          t = y_128(t);
          return(t);
        }
        t = map_1_0(j_10, t);
      }
      t = concat_0_0(t);
      a_128 = t;
      t = (ATerm) ATinsert(CheckATermList(a_128), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, s_127, y_127), z_127));
      return(t);
    }
    ATerm h_128 = NULL,i_128 = NULL,j_128 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL,p_128 = NULL,q_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL;
    l_128 = t;
    if(match_cons(t, sym__2))
      {
        m_128 = ATgetArgument(t, 0);
        r_128 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_128;
    {
      ATerm f_54 = t;
      int g_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm h_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(g_54);
          t = (ATerm) ATempty;
        }
      else
        {
          t = f_54;
          if(match_cons(t, sym__2))
            {
              s_128 = ATgetArgument(t, 0);
              t_128 = ATgetArgument(t, 1);
              t = t_128;
              {
                ATerm i_54 = t;
                int j_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm k_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_54);
                    t = m_128;
                    {
                      ATerm l_54 = t;
                      int m_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm n_54 = ATgetArgument(t, 0);
                              ATerm o_54 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_54);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = l_54;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = i_54;
                    {
                      ATerm p_54 = t;
                      int q_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm t_54 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(q_54);
                          t = m_128;
                          {
                            ATerm u_54 = t;
                            int v_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm w_54 = ATgetArgument(t, 0);
                                    ATerm x_54 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(v_54);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = u_54;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = p_54;
                          if(match_cons(t, sym_alt_2))
                            {
                              k_128 = ATgetArgument(t, 0);
                              h_128 = ATgetArgument(t, 1);
                              t = h_128;
                              if(match_cons(t, sym_alt_2))
                                {
                                  i_128 = ATgetArgument(t, 0);
                                  j_128 = ATgetArgument(t, 1);
                                  t = m_128;
                                  if(match_cons(t, sym__2))
                                    {
                                      p_128 = ATgetArgument(t, 0);
                                      q_128 = ATgetArgument(t, 1);
                                      {
                                        ATerm y_54 = t;
                                        int z_54 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm l_60 = NULL,m_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,q_26 = NULL;
                                            t = p_128;
                                            if(((u_125 != NULL) && (u_125 != t)))
                                              _fail(t);
                                            else
                                              u_125 = t;
                                            t = q_128;
                                            if(((v_125 != NULL) && (v_125 != t)))
                                              _fail(t);
                                            else
                                              v_125 = t;
                                            t = s_128;
                                            if(((w_125 != NULL) && (w_125 != t)))
                                              _fail(t);
                                            else
                                              w_125 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, k_128, (ATerm) ATmakeAppl(sym_alt_2, i_128, j_128));
                                            t = flat_alt_0_0(t);
                                            l_60 = t;
                                            t = term_a_55;
                                            p_60 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_a_55, l_60);
                                            t = q_14(p_60, l_60, t);
                                            m_60 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_128, q_128), (ATerm) ATmakeAppl(sym__2, s_128, m_60));
                                            t = y_128(t);
                                            u_60 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                r_60 = ATgetFirst((ATermList) t);
                                                s_60 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(u_60);
                                            q_60 = t;
                                            t = r_60;
                                            t = topdown_1_0(k_10, t);
                                            t_60 = t;
                                            t = (ATerm) ATinsert(CheckATermList(s_60), t_60);
                                            q_26 = t;
                                            t = SSLsetAnnotations(q_26, q_60);
                                            LocalPopChoice(z_54);
                                          }
                                        else
                                          {
                                            t = y_54;
                                            {
                                              ATerm b_55 = t;
                                              int c_55 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = f_129(l_128, m_128, r_128, t);
                                                  LocalPopChoice(c_55);
                                                }
                                              else
                                                {
                                                  t = b_55;
                                                  t = g_129(p_128, q_128, s_128, t_128, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = f_129(l_128, m_128, r_128, t);
                                    }
                                }
                              else
                                {
                                  t = m_128;
                                  if(match_cons(t, sym__2))
                                    {
                                      p_128 = ATgetArgument(t, 0);
                                      q_128 = ATgetArgument(t, 1);
                                      {
                                        ATerm d_55 = t;
                                        int e_55 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = f_129(l_128, m_128, r_128, t);
                                            LocalPopChoice(e_55);
                                          }
                                        else
                                          {
                                            t = d_55;
                                            t = g_129(p_128, q_128, s_128, t_128, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = f_129(l_128, m_128, r_128, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  k_128 = ATgetArgument(t, 0);
                                  t = m_128;
                                  if(match_cons(t, sym__2))
                                    {
                                      p_128 = ATgetArgument(t, 0);
                                      q_128 = ATgetArgument(t, 1);
                                      {
                                        ATerm f_55 = t;
                                        int g_55 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = f_129(l_128, m_128, r_128, t);
                                            LocalPopChoice(g_55);
                                          }
                                        else
                                          {
                                            t = f_55;
                                            {
                                              ATerm h_55 = t;
                                              int i_55 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_128, q_128), (ATerm) ATmakeAppl(sym__2, s_128, k_128));
                                                  t = y_128(t);
                                                  LocalPopChoice(i_55);
                                                }
                                              else
                                                {
                                                  t = h_55;
                                                  t = g_129(p_128, q_128, s_128, t_128, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = f_129(l_128, m_128, r_128, t);
                                    }
                                }
                              else
                                {
                                  t = m_128;
                                  if(match_cons(t, sym__2))
                                    {
                                      p_128 = ATgetArgument(t, 0);
                                      q_128 = ATgetArgument(t, 1);
                                      {
                                        ATerm j_55 = t;
                                        int k_55 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = f_129(l_128, m_128, r_128, t);
                                            LocalPopChoice(k_55);
                                          }
                                        else
                                          {
                                            t = j_55;
                                            t = g_129(p_128, q_128, s_128, t_128, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = f_129(l_128, m_128, r_128, t);
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
              t = m_128;
              t = f_129(l_128, m_128, r_128, t);
            }
        }
    }
    return(t);
  }
  y_125 = t;
  t = term_c_19;
  t = f_144(t);
  x_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_125, y_125);
  t = y_128(t);
  return(t);
}
static ATerm m_131 (ATerm r_129, ATerm s_129, ATerm t_129, ATerm t)
{
  ATerm u_129 = NULL,b_130 = NULL;
  t = t_129;
  {
    ATerm l_55 = t;
    int m_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_62 = NULL,z_62 = NULL;
        t = s_129;
        t = pp_table_get_0_0(t);
        z_62 = t;
        t = SSL_explode_term(z_62);
        if(match_cons(t, sym__2))
          {
            ATerm n_55 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_55) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_55 = ATgetArgument(t, 1);
              if(((ATgetType(p_55) == AT_LIST) && !(ATisEmpty(p_55))))
                {
                  ATerm q_55 = ATgetFirst((ATermList) p_55);
                  ATerm r_55 = (ATerm) ATgetNext((ATermList) p_55);
                  if(((ATgetType(r_55) == AT_LIST) && !(ATisEmpty(r_55))))
                    {
                      y_62 = ATgetFirst((ATermList) r_55);
                      {
                        ATerm s_55 = (ATerm) ATgetNext((ATermList) r_55);
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
        t = y_62;
        LocalPopChoice(m_55);
      }
    else
      {
        t = l_55;
        {
          ATerm d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL,a_63 = NULL,b_63 = NULL,l_130 = NULL,m_130 = NULL,n_130 = NULL,p_130 = NULL,w_26 = NULL;
          t = s_129;
          t = reverse_acc_2_0(_id, m_10, t);
          i_130 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_130 = ATgetFirst((ATermList) t);
              h_130 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_130);
          f_130 = t;
          t = h_130;
          t = reverse_acc_2_0(_id, n_10, t);
          u_129 = t;
          t = (ATerm) ATinsert(CheckATermList(u_129), g_130);
          w_26 = t;
          t = SSLsetAnnotations(w_26, f_130);
          t = u_129;
          t = pp_table_get_0_0(t);
          e_130 = t;
          t = SSL_explode_term(e_130);
          if(match_cons(t, sym__2))
            {
              ATerm t_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_55) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm u_55 = ATgetArgument(t, 1);
                if(((ATgetType(u_55) == AT_LIST) && !(ATisEmpty(u_55))))
                  {
                    d_130 = ATgetFirst((ATermList) u_55);
                    {
                      ATerm v_55 = (ATerm) ATgetNext((ATermList) u_55);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = d_130;
          if(match_cons(t, sym_Path_2))
            {
              p_130 = ATgetArgument(t, 0);
              l_130 = ATgetArgument(t, 1);
              t = l_130;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_130 = ATgetFirst((ATermList) t);
                  n_130 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_130;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, p_130, (ATerm) ATinsert(ATempty, m_130));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  p_130 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, p_130, (ATerm) ATempty);
            }
          b_130 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_130, r_129);
          {
            static ATerm o_10 (ATerm t)
            {
              t = b_130;
              return(t);
            }
            t = symbol2abox_1_0(o_10, t);
          }
          t = map_1_0(p_10, t);
          t = s_129;
          t = pp_table_get_0_0(t);
          b_63 = t;
          t = SSL_explode_term(b_63);
          if(match_cons(t, sym__2))
            {
              ATerm x_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_55) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm y_55 = ATgetArgument(t, 1);
                if(((ATgetType(y_55) == AT_LIST) && !(ATisEmpty(y_55))))
                  {
                    ATerm z_55 = ATgetFirst((ATermList) y_55);
                    ATerm a_56 = (ATerm) ATgetNext((ATermList) y_55);
                    if(((ATgetType(a_56) == AT_LIST) && !(ATisEmpty(a_56))))
                      {
                        a_63 = ATgetFirst((ATermList) a_56);
                        {
                          ATerm c_56 = (ATerm) ATgetNext((ATermList) a_56);
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
          t = a_63;
        }
      }
  }
  return(t);
}
static ATerm n_131 (ATerm v_130, ATerm w_130, ATerm x_130, ATerm y_130, ATerm z_130, ATerm t)
{
  t = z_130;
  {
    ATerm d_56 = t;
    int e_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_63 = NULL,e_63 = NULL;
        t = y_130;
        t = pp_table_get_0_0(t);
        e_63 = t;
        t = SSL_explode_term(e_63);
        if(match_cons(t, sym__2))
          {
            ATerm f_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_56) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_56 = ATgetArgument(t, 1);
              if(((ATgetType(g_56) == AT_LIST) && !(ATisEmpty(g_56))))
                {
                  ATerm h_56 = ATgetFirst((ATermList) g_56);
                  ATerm i_56 = (ATerm) ATgetNext((ATermList) g_56);
                  if(((ATgetType(i_56) == AT_LIST) && !(ATisEmpty(i_56))))
                    {
                      c_63 = ATgetFirst((ATermList) i_56);
                      {
                        ATerm k_56 = (ATerm) ATgetNext((ATermList) i_56);
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
        t = c_63;
        LocalPopChoice(e_56);
      }
    else
      {
        t = d_56;
        {
          ATerm f_63 = NULL,g_63 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, v_130, w_130, x_130);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(q_10, t);
          t = y_130;
          t = pp_table_get_0_0(t);
          g_63 = t;
          t = SSL_explode_term(g_63);
          if(match_cons(t, sym__2))
            {
              ATerm l_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_56) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm m_56 = ATgetArgument(t, 1);
                if(((ATgetType(m_56) == AT_LIST) && !(ATisEmpty(m_56))))
                  {
                    ATerm n_56 = ATgetFirst((ATermList) m_56);
                    ATerm o_56 = (ATerm) ATgetNext((ATermList) m_56);
                    if(((ATgetType(o_56) == AT_LIST) && !(ATisEmpty(o_56))))
                      {
                        f_63 = ATgetFirst((ATermList) o_56);
                        {
                          ATerm p_56 = (ATerm) ATgetNext((ATermList) o_56);
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
          t = f_63;
        }
      }
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
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm t_130 = NULL,u_130 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      t_130 = ATgetArgument(t, 0);
      u_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_14(t_130, u_130, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm e_131 = NULL,f_131 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      e_131 = ATgetArgument(t, 0);
      f_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_14(e_131, f_131, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm g_131 = NULL,h_131 = NULL,i_131 = NULL,j_131 = NULL,k_131 = NULL,l_131 = NULL;
  g_131 = t;
  if(match_cons(t, sym__2))
    {
      h_131 = ATgetArgument(t, 0);
      l_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_131;
  if(match_cons(t, sym_prod_3))
    {
      i_131 = ATgetArgument(t, 0);
      j_131 = ATgetArgument(t, 1);
      k_131 = ATgetArgument(t, 2);
      {
        ATerm q_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_131(h_131, l_131, g_131, t);
            LocalPopChoice(r_56);
          }
        else
          {
            t = q_56;
            t = n_131(i_131, j_131, k_131, l_131, g_131, t);
          }
      }
    }
  else
    {
      t = m_131(h_131, l_131, g_131, t);
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_56 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_56) != AT_INT) || (ATgetInt((ATermInt) s_56) != 34)))
        _fail(t);
      {
        ATerm t_56 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(t_56) != AT_LIST) || !(ATisEmpty(t_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL;
  q_131 = t;
  t = SSL_explode_string(q_131);
  o_131 = t;
  {
    ATerm u_56 = t;
    if((PushChoice() == 0))
      {
        ATerm r_131 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_131 = ATgetFirst((ATermList) t);
            {
              ATerm v_56 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = r_131;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_56;
      }
  }
  t = o_131;
  {
    ATerm w_56 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(r_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_56;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_56)), o_131), (ATerm) ATinsert(ATempty, term_x_56));
  t = concat_0_0(t);
  p_131 = t;
  t = SSL_implode_string(p_131);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm v_131 = NULL,a_132 = NULL;
  ATerm y_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm a_57 = ATgetArgument(t, 0);
          ATerm b_57 = ATgetArgument(t, 1);
          ATerm c_57 = ATgetArgument(t, 2);
          v_131 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(z_56);
      {
        ATerm c_132 = NULL;
        t = v_131;
        {
          static ATerm t_10 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((c_132 != NULL) && (c_132 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_132 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(t_10, t);
        }
        t = not_null(c_132);
      }
    }
  else
    {
      t = y_56;
      {
        ATerm e_132 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm d_57 = ATgetArgument(t, 0);
            ATerm f_57 = ATgetArgument(t, 1);
            a_132 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = a_132;
        {
          static ATerm w_10 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((e_132 != NULL) && (e_132 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_132 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(w_10, t);
        }
        t = not_null(e_132);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm j_132 = NULL,k_132 = NULL,l_132 = NULL,n_132 = NULL,o_132 = NULL,p_132 = NULL,q_132 = NULL,r_132 = NULL;
  if(match_cons(t, sym__2))
    {
      n_132 = ATgetArgument(t, 0);
      r_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_132;
  if(match_cons(t, sym_prod_fun_4))
    {
      o_132 = ATgetArgument(t, 0);
      p_132 = ATgetArgument(t, 1);
      q_132 = ATgetArgument(t, 2);
      k_132 = ATgetArgument(t, 3);
      t = k_132;
      if(match_cons(t, sym_attrs_1))
        {
          j_132 = ATgetArgument(t, 0);
          {
            ATerm x_132 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, j_132, r_132);
            t = conc_0_0(t);
            x_132 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, o_132, p_132, q_132, (ATerm) ATmakeAppl(sym_attrs_1, x_132));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, o_132, p_132, q_132, (ATerm) ATmakeAppl(sym_attrs_1, r_132));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          o_132 = ATgetArgument(t, 0);
          p_132 = ATgetArgument(t, 1);
          q_132 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_132;
      if(match_cons(t, sym_attrs_1))
        {
          l_132 = ATgetArgument(t, 0);
          {
            ATerm g_133 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, l_132, r_132);
            t = conc_0_0(t);
            g_133 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, o_132, p_132, (ATerm) ATmakeAppl(sym_attrs_1, g_133));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, o_132, p_132, (ATerm) ATmakeAppl(sym_attrs_1, r_132));
        }
    }
  return(t);
}
ATerm escape_chars_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  static ATerm h_134 (ATerm t)
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_133 = NULL,q_133 = NULL,r_133 = NULL,s_133 = NULL,t_133 = NULL,b_27 = NULL;
        t = a_129(t);
        t_133 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_133 = ATgetFirst((ATermList) t);
            r_133 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_133);
        p_133 = t;
        t = r_133;
        t = Cons_2_0(_id, h_134, t);
        s_133 = t;
        t = (ATerm) ATinsert(CheckATermList(s_133), q_133);
        b_27 = t;
        t = SSLsetAnnotations(b_27, p_133);
        LocalPopChoice(h_57);
      }
    else
      {
        t = g_57;
        {
          ATerm e_134 = NULL,f_134 = NULL,g_134 = NULL;
          g_134 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_134 = ATgetFirst((ATermList) t);
              f_134 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm m_63 = NULL,v_63 = NULL,d_27 = NULL;
                t = SSLgetAnnotations(g_134);
                m_63 = t;
                t = f_134;
                t = h_134(t);
                v_63 = t;
                t = (ATerm) ATinsert(CheckATermList(v_63), e_134);
                d_27 = t;
                t = SSLsetAnnotations(d_27, m_63);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_134;
            }
        }
      }
    return(t);
  }
  t = h_134(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm p_64 = NULL,u_65 = NULL,v_65 = NULL;
  p_64 = t;
  if(match_int(t, 34))
    {
      ATerm i_57 = t;
      int j_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_x_56), term_k_57);
          LocalPopChoice(j_57);
        }
      else
        {
          t = i_57;
          t = (ATerm) ATinsert(ATempty, p_64);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm l_57 = t;
          int m_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_k_57), term_k_57);
              LocalPopChoice(m_57);
            }
          else
            {
              t = l_57;
              t = (ATerm) ATinsert(ATempty, p_64);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_65 = ATgetFirst((ATermList) t);
              v_65 = (ATerm) ATgetNext((ATermList) t);
              t = u_65;
              if(match_int(t, 34))
                {
                  ATerm n_57 = t;
                  int o_57 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, p_64);
                      LocalPopChoice(o_57);
                    }
                  else
                    {
                      t = n_57;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(v_65), term_x_56), term_k_57);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm p_57 = t;
                      int q_57 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, p_64);
                          LocalPopChoice(q_57);
                        }
                      else
                        {
                          t = p_57;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(v_65), term_k_57), term_k_57);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm r_57 = t;
                          int s_57 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, p_64);
                              LocalPopChoice(s_57);
                            }
                          else
                            {
                              t = r_57;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(v_65), term_t_57), term_k_57);
                            }
                        }
                      else
                        {
                          if(match_int(t, 13))
                            {
                              ATerm u_57 = t;
                              int v_57 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, p_64);
                                  LocalPopChoice(v_57);
                                }
                              else
                                {
                                  t = u_57;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_65), term_w_57), term_k_57);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, p_64);
                            }
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, p_64);
            }
        }
    }
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  z_67 = t;
  if(match_int(t, 34))
    {
      ATerm x_57 = t;
      int y_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_x_56), term_k_57);
          LocalPopChoice(y_57);
        }
      else
        {
          t = x_57;
          t = (ATerm) ATinsert(ATempty, z_67);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm z_57 = t;
          int b_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_k_57), term_k_57);
              LocalPopChoice(b_58);
            }
          else
            {
              t = z_57;
              t = (ATerm) ATinsert(ATempty, z_67);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_68 = ATgetFirst((ATermList) t);
              b_68 = (ATerm) ATgetNext((ATermList) t);
              t = a_68;
              if(match_int(t, 34))
                {
                  ATerm c_58 = t;
                  int d_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, z_67);
                      LocalPopChoice(d_58);
                    }
                  else
                    {
                      t = c_58;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(b_68), term_x_56), term_k_57);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm e_58 = t;
                      int f_58 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, z_67);
                          LocalPopChoice(f_58);
                        }
                      else
                        {
                          t = e_58;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(b_68), term_k_57), term_k_57);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm g_58 = t;
                          int h_58 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, z_67);
                              LocalPopChoice(h_58);
                            }
                          else
                            {
                              t = g_58;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(b_68), term_t_57), term_k_57);
                            }
                        }
                      else
                        {
                          if(match_int(t, 13))
                            {
                              ATerm i_58 = t;
                              int j_58 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, z_67);
                                  LocalPopChoice(j_58);
                                }
                              else
                                {
                                  t = i_58;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(b_68), term_w_57), term_k_57);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, z_67);
                            }
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, z_67);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm k_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_135 = NULL,j_64 = NULL;
      k_135 = t;
      t = SSL_explode_string(k_135);
      t = map_1_0(x_10, t);
      t = concat_0_0(t);
      j_64 = t;
      t = SSL_implode_string(j_64);
      LocalPopChoice(l_58);
    }
  else
    {
      t = k_58;
      {
        ATerm n_67 = NULL,u_67 = NULL;
        u_67 = t;
        t = SSL_explode_string(u_67);
        t = escape_chars_1_0(y_10, t);
        n_67 = t;
        t = SSL_implode_string(n_67);
      }
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm m_58 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_58;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL,h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,j_69 = NULL,k_69 = NULL,g_27 = NULL;
  t = filter_1_0(z_10, t);
  k_136 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_136 = ATgetFirst((ATermList) t);
      i_136 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_136);
  g_136 = t;
  t = SSL_explode_string(h_136);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_136 = ATgetFirst((ATermList) t);
      {
        ATerm n_58 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_136;
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_58, j_136);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, j_136, term_s_58);
        t = leq_0_0(t);
        t = j_136;
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
        t = (ATerm) ATmakeAppl(sym__2, term_t_58, j_136);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, j_136, term_u_58);
        t = leq_0_0(t);
        t = j_136;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(i_136), h_136);
  g_27 = t;
  t = SSLsetAnnotations(g_27, g_136);
  k_69 = t;
  t = term_v_58;
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_58, k_69);
  t = w_14(j_69, k_69, t);
  f_136 = t;
  t = SSL_concat_strings(f_136);
  e_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_136, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_59), term_i_59), term_h_59), term_g_59), term_f_59), term_e_59), term_d_59), term_b_59), term_a_59), term_z_58), term_y_58), term_x_58), term_w_58));
  {
    ATerm k_59 = t;
    if((PushChoice() == 0))
      {
        ATerm l_136 = NULL,m_136 = NULL;
        if(match_cons(t, sym__2))
          {
            l_136 = ATgetArgument(t, 0);
            m_136 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_136;
        {
          static ATerm a_11 (ATerm t)
          {
            if((l_136 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(a_11, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, l_136, m_136);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_59;
      }
  }
  t = e_136;
  t = escape_0_0(t);
  n_69 = t;
  t = SSL_explode_string(n_69);
  o_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_56)), o_69), (ATerm) ATinsert(ATempty, term_x_56));
  t = concat_0_0(t);
  m_69 = t;
  t = SSL_implode_string(m_69);
  return(t);
}
static ATerm y_136 (ATerm p_136, ATerm t)
{
  ATerm q_136 = NULL;
  t = SSL_explode_term(p_136);
  if(match_cons(t, sym__2))
    {
      ATerm l_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_59) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_136;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_136 = NULL,t_136 = NULL,u_136 = NULL;
  u_136 = t;
  if(match_cons(t, sym__2))
    {
      s_136 = ATgetArgument(t, 0);
      t_136 = ATgetArgument(t, 1);
      {
        ATerm m_59 = t;
        int n_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_11 (ATerm t)
            {
              t = t_136;
              return(t);
            }
            t = s_136;
            t = at_end_1_0(b_11, t);
            LocalPopChoice(n_59);
          }
        else
          {
            t = m_59;
            t = y_136(u_136, t);
          }
      }
    }
  else
    {
      t = y_136(u_136, t);
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_59);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_59);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_59);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
  x_137 = t;
  if(match_cons(t, sym_cf_1))
    {
      v_137 = ATgetArgument(t, 0);
      t = v_137;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          v_137 = ATgetArgument(t, 0);
          t = v_137;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_r_59);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  v_137 = ATgetArgument(t, 0);
                  w_137 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(w_137), v_137);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      v_137 = ATgetArgument(t, 0);
                      t = v_137;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(c_11, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          v_137 = ATgetArgument(t, 0);
                          t = v_137;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(d_11, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              v_137 = ATgetArgument(t, 0);
                              t = v_137;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(e_11, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  v_137 = ATgetArgument(t, 0);
                                  w_137 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_138 = NULL,n_138 = NULL;
                                    t = v_137;
                                    t = Sym2Strs_0_0(t);
                                    m_138 = t;
                                    t = w_137;
                                    t = Sym2Strs_0_0(t);
                                    n_138 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_59)), n_138), m_138);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      v_137 = ATgetArgument(t, 0);
                                      w_137 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_138 = NULL,r_138 = NULL;
                                        t = v_137;
                                        t = Sym2Strs_0_0(t);
                                        q_138 = t;
                                        t = w_137;
                                        t = Sym2Strs_0_0(t);
                                        r_138 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_59)), r_138), q_138);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm s_59 = t;
                                      int t_59 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              v_137 = ATgetArgument(t, 0);
                                              {
                                                ATerm u_59 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(t_59);
                                          {
                                            ATerm t_138 = NULL;
                                            t = v_137;
                                            t = Sym2Strs_0_0(t);
                                            t_138 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_59)), t_138);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = s_59;
                                          {
                                            ATerm w_59 = t;
                                            int x_59 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    v_137 = ATgetArgument(t, 0);
                                                    w_137 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_59 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(x_59);
                                                {
                                                  ATerm x_138 = NULL,y_138 = NULL;
                                                  t = v_137;
                                                  t = Sym2Strs_0_0(t);
                                                  x_138 = t;
                                                  t = w_137;
                                                  t = Sym2Strs_0_0(t);
                                                  y_138 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_59)), y_138), x_138);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = w_59;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    v_137 = ATgetArgument(t, 0);
                                                    w_137 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm b_139 = NULL,c_139 = NULL;
                                                      t = v_137;
                                                      t = Sym2Strs_0_0(t);
                                                      b_139 = t;
                                                      t = w_137;
                                                      t = Sym2Strs_0_0(t);
                                                      c_139 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_139), (ATerm) ATinsert(ATempty, term_z_59)), b_139);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        v_137 = ATgetArgument(t, 0);
                                                        w_137 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_139 = NULL,g_139 = NULL;
                                                          t = v_137;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          f_139 = t;
                                                          t = w_137;
                                                          t = Sym2Strs_0_0(t);
                                                          g_139 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_139), (ATerm) ATinsert(ATempty, term_a_60)), f_139);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            v_137 = ATgetArgument(t, 0);
                                                            w_137 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm j_139 = NULL,k_139 = NULL;
                                                              t = v_137;
                                                              t = Sym2Strs_0_0(t);
                                                              j_139 = t;
                                                              t = w_137;
                                                              t = Sym2Strs_0_0(t);
                                                              k_139 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_139), (ATerm) ATinsert(ATempty, term_b_60)), j_139);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                v_137 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, v_137);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    v_137 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm u_69 = NULL;
                                                                      t = v_137;
                                                                      {
                                                                        ATerm c_60 = t;
                                                                        int d_60 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = de_quote_0_0(t);
                                                                            t = de_escape_0_0(t);
                                                                            LocalPopChoice(d_60);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = c_60;
                                                                          }
                                                                      }
                                                                      u_69 = t;
                                                                      t = (ATerm) ATinsert(ATempty, u_69);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm e_60 = t;
                                                                    int f_60 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            v_137 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm g_60 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(f_60);
                                                                        {
                                                                          ATerm f_70 = NULL;
                                                                          t = v_137;
                                                                          {
                                                                            ATerm h_60 = t;
                                                                            int i_60 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = de_quote_0_0(t);
                                                                                t = de_escape_0_0(t);
                                                                                LocalPopChoice(i_60);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = h_60;
                                                                              }
                                                                          }
                                                                          f_70 = t;
                                                                          t = (ATerm) ATinsert(ATempty, f_70);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_60;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_j_60);
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
static ATerm f_11 (ATerm t)
{
  ATerm k_60 = t;
  int n_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(n_60);
    }
  else
    {
      t = k_60;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(f_11, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_60 = ATgetFirst((ATermList) t);
      if(((ATgetType(o_60) != AT_INT) || (ATgetInt((ATermInt) o_60) != 34)))
        _fail(t);
      {
        ATerm v_60 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(v_60) != AT_LIST) || !(ATisEmpty(v_60))))
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
  ATerm y_144 = NULL,z_144 = NULL,a_145 = NULL,b_145 = NULL,c_145 = NULL;
  c_145 = t;
  t = SSL_explode_string(c_145);
  y_144 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_145 = ATgetFirst((ATermList) t);
      {
        ATerm w_60 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_145;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = y_144;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_60 = ATgetFirst((ATermList) t);
      a_145 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_145;
  t = at_last_1_0(g_11, t);
  z_144 = t;
  t = SSL_implode_string(z_144);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm y_60 = t;
  if((PushChoice() == 0))
    {
      ATerm s_139 = NULL,t_139 = NULL;
      if(match_cons(t, sym__2))
        {
          s_139 = ATgetArgument(t, 0);
          t_139 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_139, t_139);
      {
        ATerm z_60 = t;
        int a_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(s_139, t_139);
            LocalPopChoice(a_61);
          }
        else
          {
            t = z_60;
            t = SSL_gtr(s_139, t_139);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, s_139, t_139);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_60;
    }
  return(t);
}
static ATerm k_140 (ATerm x_139, ATerm t)
{
  t = SSL_explode_string(x_139);
  {
    ATerm b_61 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(h_11, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_61;
      }
  }
  t = term_e_61;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm z_139 = NULL;
  z_139 = t;
  if(match_int(t, 45))
    {
      ATerm f_61 = t;
      int g_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_61, z_139);
          t = leq_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, z_139, term_i_61);
          t = leq_0_0(t);
          t = z_139;
          LocalPopChoice(g_61);
        }
      else
        {
          t = f_61;
          {
            ATerm j_61 = t;
            int k_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, term_r_58, z_139);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, z_139, term_s_58);
                t = leq_0_0(t);
                t = z_139;
                LocalPopChoice(k_61);
              }
            else
              {
                t = j_61;
                {
                  ATerm l_61 = t;
                  int m_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_58, z_139);
                      t = leq_0_0(t);
                      t = (ATerm) ATmakeAppl(sym__2, z_139, term_u_58);
                      t = leq_0_0(t);
                      t = z_139;
                      LocalPopChoice(m_61);
                    }
                  else
                    {
                      t = l_61;
                      t = term_c_19;
                    }
                }
              }
          }
        }
    }
  else
    {
      ATerm n_61 = t;
      int o_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_61, z_139);
          t = leq_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, z_139, term_i_61);
          t = leq_0_0(t);
          t = z_139;
          LocalPopChoice(o_61);
        }
      else
        {
          t = n_61;
          {
            ATerm p_61 = t;
            int q_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, term_r_58, z_139);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, z_139, term_s_58);
                t = leq_0_0(t);
                t = z_139;
                LocalPopChoice(q_61);
              }
            else
              {
                t = p_61;
                t = (ATerm) ATmakeAppl(sym__2, term_t_58, z_139);
                t = leq_0_0(t);
                t = (ATerm) ATmakeAppl(sym__2, z_139, term_u_58);
                t = leq_0_0(t);
                t = z_139;
              }
          }
        }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm j_140 = NULL;
  j_140 = t;
  if(match_string(t, "|="))
    {
      ATerm r_61 = t;
      int s_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_140(j_140, t);
          LocalPopChoice(s_61);
        }
      else
        {
          t = r_61;
          t = term_t_61;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm w_61 = t;
          int x_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_140(j_140, t);
              LocalPopChoice(x_61);
            }
          else
            {
              t = w_61;
              t = term_y_61;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm z_61 = t;
              int a_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_140(j_140, t);
                  LocalPopChoice(a_62);
                }
              else
                {
                  t = z_61;
                  t = term_b_62;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm c_62 = t;
                  int d_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_140(j_140, t);
                      LocalPopChoice(d_62);
                    }
                  else
                    {
                      t = c_62;
                      t = term_e_62;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm f_62 = t;
                      int g_62 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = k_140(j_140, t);
                          LocalPopChoice(g_62);
                        }
                      else
                        {
                          t = f_62;
                          t = term_h_62;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm i_62 = t;
                          int j_62 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = k_140(j_140, t);
                              LocalPopChoice(j_62);
                            }
                          else
                            {
                              t = i_62;
                              t = term_l_62;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm m_62 = t;
                              int n_62 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = k_140(j_140, t);
                                  LocalPopChoice(n_62);
                                }
                              else
                                {
                                  t = m_62;
                                  t = term_o_62;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm p_62 = t;
                                  int q_62 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = k_140(j_140, t);
                                      LocalPopChoice(q_62);
                                    }
                                  else
                                    {
                                      t = p_62;
                                      t = term_t_62;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm u_62 = t;
                                      int v_62 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = k_140(j_140, t);
                                          LocalPopChoice(v_62);
                                        }
                                      else
                                        {
                                          t = u_62;
                                          t = term_w_62;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm x_62 = t;
                                          int d_63 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = k_140(j_140, t);
                                              LocalPopChoice(d_63);
                                            }
                                          else
                                            {
                                              t = x_62;
                                              t = term_h_63;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm i_63 = t;
                                              int j_63 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = k_140(j_140, t);
                                                  LocalPopChoice(j_63);
                                                }
                                              else
                                                {
                                                  t = i_63;
                                                  t = term_k_63;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm l_63 = t;
                                                  int n_63 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = k_140(j_140, t);
                                                      LocalPopChoice(n_63);
                                                    }
                                                  else
                                                    {
                                                      t = l_63;
                                                      t = term_o_63;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm p_63 = t;
                                                      int q_63 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_140(j_140, t);
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
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm s_63 = t;
                                                          int t_63 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = k_140(j_140, t);
                                                              LocalPopChoice(t_63);
                                                            }
                                                          else
                                                            {
                                                              t = s_63;
                                                              t = term_b_60;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm u_63 = t;
                                                              int w_63 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = k_140(j_140, t);
                                                                  LocalPopChoice(w_63);
                                                                }
                                                              else
                                                                {
                                                                  t = u_63;
                                                                  t = term_x_63;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm y_63 = t;
                                                                  int z_63 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = k_140(j_140, t);
                                                                      LocalPopChoice(z_63);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_63;
                                                                      t = term_x_63;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm a_64 = t;
                                                                      int b_64 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = k_140(j_140, t);
                                                                          LocalPopChoice(b_64);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_64;
                                                                          t = term_c_64;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm d_64 = t;
                                                                          int e_64 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = k_140(j_140, t);
                                                                              LocalPopChoice(e_64);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_64;
                                                                              t = term_f_64;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm g_64 = t;
                                                                              int h_64 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = k_140(j_140, t);
                                                                                  LocalPopChoice(h_64);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = g_64;
                                                                                  t = term_i_64;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm k_64 = t;
                                                                                  int l_64 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = k_140(j_140, t);
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
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm n_64 = t;
                                                                                      int o_64 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = k_140(j_140, t);
                                                                                          LocalPopChoice(o_64);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_64;
                                                                                          t = term_q_64;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm r_64 = t;
                                                                                          int s_64 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = k_140(j_140, t);
                                                                                              LocalPopChoice(s_64);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_64;
                                                                                              t = term_t_64;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm u_64 = t;
                                                                                              int v_64 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = k_140(j_140, t);
                                                                                                  LocalPopChoice(v_64);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = u_64;
                                                                                                  t = term_w_64;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm x_64 = t;
                                                                                                  int y_64 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = k_140(j_140, t);
                                                                                                      LocalPopChoice(y_64);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = x_64;
                                                                                                      t = term_z_64;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm a_65 = t;
                                                                                                      int b_65 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = k_140(j_140, t);
                                                                                                          LocalPopChoice(b_65);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = a_65;
                                                                                                          t = term_c_65;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm d_65 = t;
                                                                                                          int e_65 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = k_140(j_140, t);
                                                                                                              LocalPopChoice(e_65);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = d_65;
                                                                                                              t = term_f_65;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm g_65 = t;
                                                                                                              int h_65 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = k_140(j_140, t);
                                                                                                                  LocalPopChoice(h_65);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_65;
                                                                                                                  t = term_i_65;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm j_65 = t;
                                                                                                                  int n_65 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = k_140(j_140, t);
                                                                                                                      LocalPopChoice(n_65);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_65;
                                                                                                                      t = term_w_65;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm x_65 = t;
                                                                                                                      int y_65 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = k_140(j_140, t);
                                                                                                                          LocalPopChoice(y_65);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = x_65;
                                                                                                                          t = term_z_59;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm z_65 = t;
                                                                                                                          int a_66 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = k_140(j_140, t);
                                                                                                                              LocalPopChoice(a_66);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = z_65;
                                                                                                                              t = term_c_66;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm d_66 = t;
                                                                                                                              int e_66 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = k_140(j_140, t);
                                                                                                                                  LocalPopChoice(e_66);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = d_66;
                                                                                                                                  t = term_f_66;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm g_66 = t;
                                                                                                                                  int j_66 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = k_140(j_140, t);
                                                                                                                                      LocalPopChoice(j_66);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = g_66;
                                                                                                                                      t = term_o_66;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm q_66 = t;
                                                                                                                                      int u_66 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = k_140(j_140, t);
                                                                                                                                          LocalPopChoice(u_66);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = q_66;
                                                                                                                                          t = term_b_67;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm c_67 = t;
                                                                                                                                          int d_67 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = k_140(j_140, t);
                                                                                                                                              LocalPopChoice(d_67);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = c_67;
                                                                                                                                              t = term_e_67;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm f_67 = t;
                                                                                                                                              int g_67 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = k_140(j_140, t);
                                                                                                                                                  LocalPopChoice(g_67);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = f_67;
                                                                                                                                                  t = term_h_67;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm i_67 = t;
                                                                                                                                                  int m_67 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = k_140(j_140, t);
                                                                                                                                                      LocalPopChoice(m_67);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = i_67;
                                                                                                                                                      t = term_o_67;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_67 = t;
                                                                                                                                                      int r_67 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = k_140(j_140, t);
                                                                                                                                                          LocalPopChoice(r_67);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = q_67;
                                                                                                                                                          t = term_v_67;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm w_67 = t;
                                                                                                                                                          int x_67 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = k_140(j_140, t);
                                                                                                                                                              LocalPopChoice(x_67);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = w_67;
                                                                                                                                                              t = term_c_68;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = k_140(j_140, t);
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
  ATerm a_141 = NULL,b_141 = NULL;
  t = t_28;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_28;
    }
  else
    {
      ATerm a_71 = NULL,p_71 = NULL,d_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_141 = ATgetFirst((ATermList) t);
          b_141 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_28);
      a_71 = t;
      t = b_141;
      {
        static ATerm z_71 (ATerm t)
        {
          ATerm d_68 = t;
          int h_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_71 = NULL;
              q_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_71;
              LocalPopChoice(h_68);
            }
          else
            {
              t = d_68;
              {
                ATerm s_71 = NULL;
                t = Cons_2_0(_id, z_71, t);
                s_71 = t;
                t = (ATerm) ATinsert(CheckATermList(s_71), s_28);
              }
            }
          return(t);
        }
        t = z_71(t);
      }
      p_71 = t;
      t = (ATerm) ATinsert(CheckATermList(p_71), a_141);
      d_28 = t;
      t = SSLsetAnnotations(d_28, a_71);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm n_141 = NULL,o_141 = NULL,p_141 = NULL,q_141 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_141 = ATgetFirst((ATermList) t);
      q_141 = (ATerm) ATgetNext((ATermList) t);
      t = q_141;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_141 = ATgetFirst((ATermList) t);
          o_141 = (ATerm) ATgetNext((ATermList) t);
          t = n_141;
          if(match_int(t, 34))
            {
              t = p_141;
              if(match_int(t, 92))
                {
                  ATerm i_68 = t;
                  int j_68 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_141 = NULL;
                      t = o_141;
                      t = De_Escape_0_0(t);
                      t_141 = t;
                      t = (ATerm) ATinsert(CheckATermList(t_141), term_x_56);
                      LocalPopChoice(j_68);
                    }
                  else
                    {
                      t = i_68;
                      {
                        ATerm w_141 = NULL;
                        t = q_141;
                        t = De_Escape_0_0(t);
                        w_141 = t;
                        t = (ATerm) ATinsert(CheckATermList(w_141), p_141);
                      }
                    }
                }
              else
                {
                  ATerm z_141 = NULL;
                  t = q_141;
                  t = De_Escape_0_0(t);
                  z_141 = t;
                  t = (ATerm) ATinsert(CheckATermList(z_141), p_141);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = p_141;
                  if(match_int(t, 92))
                    {
                      ATerm k_68 = t;
                      int l_68 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_142 = NULL;
                          t = o_141;
                          t = De_Escape_0_0(t);
                          b_142 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_142), term_k_57);
                          LocalPopChoice(l_68);
                        }
                      else
                        {
                          t = k_68;
                          {
                            ATerm e_142 = NULL;
                            t = q_141;
                            t = De_Escape_0_0(t);
                            e_142 = t;
                            t = (ATerm) ATinsert(CheckATermList(e_142), p_141);
                          }
                        }
                    }
                  else
                    {
                      ATerm h_142 = NULL;
                      t = q_141;
                      t = De_Escape_0_0(t);
                      h_142 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_142), p_141);
                    }
                }
              else
                {
                  ATerm k_142 = NULL;
                  t = q_141;
                  t = De_Escape_0_0(t);
                  k_142 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_142), p_141);
                }
            }
        }
      else
        {
          ATerm n_142 = NULL;
          t = q_141;
          t = De_Escape_0_0(t);
          n_142 = t;
          t = (ATerm) ATinsert(CheckATermList(n_142), p_141);
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
  ATerm v_142 = NULL,w_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL,a_143 = NULL;
  w_142 = t;
  t = SSL_explode_string(w_142);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_142 = ATgetFirst((ATermList) t);
      a_143 = (ATerm) ATgetNext((ATermList) t);
      t = a_143;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_142 = ATgetFirst((ATermList) t);
          y_142 = (ATerm) ATgetNext((ATermList) t);
          t = x_142;
          if(match_int(t, 34))
            {
              t = z_142;
              if(match_int(t, 92))
                {
                  ATerm m_68 = t;
                  int o_68 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_143 = NULL;
                      t = y_142;
                      t = De_Escape_0_0(t);
                      d_143 = t;
                      t = (ATerm) ATinsert(CheckATermList(d_143), term_x_56);
                      LocalPopChoice(o_68);
                    }
                  else
                    {
                      t = m_68;
                      {
                        ATerm g_143 = NULL;
                        t = a_143;
                        t = De_Escape_0_0(t);
                        g_143 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_143), z_142);
                      }
                    }
                }
              else
                {
                  ATerm j_143 = NULL;
                  t = a_143;
                  t = De_Escape_0_0(t);
                  j_143 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_143), z_142);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = z_142;
                  if(match_int(t, 92))
                    {
                      ATerm p_68 = t;
                      int q_68 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_143 = NULL;
                          t = y_142;
                          t = De_Escape_0_0(t);
                          l_143 = t;
                          t = (ATerm) ATinsert(CheckATermList(l_143), term_k_57);
                          LocalPopChoice(q_68);
                        }
                      else
                        {
                          t = p_68;
                          {
                            ATerm o_143 = NULL;
                            t = a_143;
                            t = De_Escape_0_0(t);
                            o_143 = t;
                            t = (ATerm) ATinsert(CheckATermList(o_143), z_142);
                          }
                        }
                    }
                  else
                    {
                      ATerm r_143 = NULL;
                      t = a_143;
                      t = De_Escape_0_0(t);
                      r_143 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_143), z_142);
                    }
                }
              else
                {
                  ATerm u_143 = NULL;
                  t = a_143;
                  t = De_Escape_0_0(t);
                  u_143 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_143), z_142);
                }
            }
        }
      else
        {
          ATerm x_143 = NULL;
          t = a_143;
          t = De_Escape_0_0(t);
          x_143 = t;
          t = (ATerm) ATinsert(CheckATermList(x_143), z_142);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  v_142 = t;
  t = SSL_implode_string(v_142);
  return(t);
}
ATerm list_ana_1_0 (ATerm q_147 (ATerm), ATerm t)
{
  static ATerm l_144 (ATerm t)
  {
    ATerm r_68 = t;
    int s_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_143 = NULL;
        t = q_147(t);
        z_143 = t;
        t = (ATerm) ATinsert(ATempty, z_143);
        LocalPopChoice(s_68);
      }
    else
      {
        t = r_68;
        {
          ATerm t_68 = t;
          int v_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_144 = NULL,j_72 = NULL;
              d_144 = t;
              t = SSL_explode_term(d_144);
              if(match_cons(t, sym__2))
                {
                  ATerm w_68 = ATgetArgument(t, 0);
                  j_72 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_72;
              t = filter_1_0(l_144, t);
              t = concat_0_0(t);
              LocalPopChoice(v_68);
            }
          else
            {
              t = t_68;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = l_144(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm q_144 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      q_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_144;
  {
    ATerm x_68 = t;
    int y_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        LocalPopChoice(y_68);
      }
    else
      {
        t = x_68;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm p_144 = NULL,r_72 = NULL,t_72 = NULL;
  t = list_ana_1_0(j_11, t);
  t_72 = t;
  t = term_v_58;
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_58, t_72);
  t = w_14(r_72, t_72, t);
  p_144 = t;
  t = SSL_concat_strings(p_144);
  {
    ATerm z_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(a_69);
      }
    else
      {
        t = z_68;
      }
  }
  return(t);
}
static ATerm l_146 (ATerm p_145, ATerm q_145, ATerm r_145, ATerm t)
{
  ATerm v_145 = NULL;
  t = r_145;
  {
    ATerm b_69 = t;
    int c_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_145;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        v_145 = t;
        LocalPopChoice(c_69);
      }
    else
      {
        t = b_69;
        {
          ATerm d_69 = t;
          int e_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_145 = NULL,y_145 = NULL;
              t = (ATerm) ATinsert(ATempty, q_145);
              t = syms2strs_0_0(t);
              x_145 = t;
              t = p_145;
              t = filter_1_0(lit2str_0_0, t);
              y_145 = t;
              t = filter_1_0(l_11, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_69 = ATgetFirst((ATermList) t);
                  ATerm g_69 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, x_145, y_145);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              v_145 = t;
              LocalPopChoice(e_69);
            }
          else
            {
              t = d_69;
              {
                ATerm h_69 = t;
                int i_69 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_145;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    v_145 = t;
                    LocalPopChoice(i_69);
                  }
                else
                  {
                    t = h_69;
                    {
                      ATerm b_146 = NULL,c_146 = NULL;
                      t = (ATerm) ATinsert(ATempty, q_145);
                      t = syms2strs_0_0(t);
                      b_146 = t;
                      t = term_c_19;
                      t = new_0_0(t);
                      c_146 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_146, (ATerm) ATinsert(ATinsert(ATempty, c_146), term_l_69));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      v_145 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = v_145;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm p_69 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_69;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm e_146 = NULL,f_146 = NULL,g_146 = NULL;
  e_146 = t;
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            f_146 = ATgetArgument(t, 0);
            {
              ATerm s_69 = ATgetArgument(t, 1);
            }
            {
              ATerm t_69 = ATgetArgument(t, 2);
            }
            {
              ATerm v_69 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_69);
        t = f_146;
        {
          ATerm w_69 = t;
          int x_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_73 = NULL,o_73 = NULL;
              ATerm y_69 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = y_69;
                }
              t = SSL_explode_string(f_146);
              o_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_56)), o_73), (ATerm) ATinsert(ATempty, term_x_56));
              t = concat_0_0(t);
              i_73 = t;
              t = SSL_implode_string(i_73);
              LocalPopChoice(x_69);
            }
          else
            {
              t = w_69;
            }
        }
      }
    else
      {
        t = q_69;
        if(match_cons(t, sym_prod_3))
          {
            f_146 = ATgetArgument(t, 0);
            g_146 = ATgetArgument(t, 1);
            {
              ATerm a_70 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_146;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm b_70 = t;
            int c_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_146(f_146, g_146, e_146, t);
                LocalPopChoice(c_70);
              }
            else
              {
                t = b_70;
                {
                  ATerm j_146 = NULL;
                  t = (ATerm) ATinsert(ATempty, g_146);
                  t = syms2strs_0_0(t);
                  j_146 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_146, (ATerm) ATinsert(ATempty, term_e_70));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = l_146(f_146, g_146, e_146, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm h_149 = NULL,i_149 = NULL,j_149 = NULL;
  h_149 = t;
  if(match_cons(t, sym_sort_1))
    {
      i_149 = ATgetArgument(t, 0);
      {
        ATerm s_73 = NULL,h_28 = NULL;
        t = SSLgetAnnotations(h_149);
        s_73 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, i_149);
        h_28 = t;
        t = SSLsetAnnotations(h_28, s_73);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          i_149 = ATgetArgument(t, 0);
          j_149 = ATgetArgument(t, 1);
          {
            ATerm c_74 = NULL,f_74 = NULL,h_74 = NULL,l_28 = NULL;
            t = SSLgetAnnotations(h_149);
            c_74 = t;
            t = i_149;
            t = syntaxless_sort_0_0(t);
            f_74 = t;
            t = j_149;
            t = syntaxless_sort_0_0(t);
            h_74 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, f_74, h_74);
            l_28 = t;
            t = SSLsetAnnotations(l_28, c_74);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              i_149 = ATgetArgument(t, 0);
              {
                ATerm e_75 = NULL,g_75 = NULL,p_28 = NULL;
                t = SSLgetAnnotations(h_149);
                e_75 = t;
                t = i_149;
                t = syntaxless_sort_0_0(t);
                g_75 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, g_75);
                p_28 = t;
                t = SSLsetAnnotations(p_28, e_75);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  i_149 = ATgetArgument(t, 0);
                  {
                    ATerm m_75 = NULL,o_75 = NULL,q_28 = NULL;
                    t = SSLgetAnnotations(h_149);
                    m_75 = t;
                    t = i_149;
                    t = syntaxless_sort_0_0(t);
                    o_75 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, o_75);
                    q_28 = t;
                    t = SSLsetAnnotations(q_28, m_75);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      i_149 = ATgetArgument(t, 0);
                      {
                        ATerm v_75 = NULL,x_75 = NULL,r_28 = NULL;
                        t = SSLgetAnnotations(h_149);
                        v_75 = t;
                        t = i_149;
                        t = syntaxless_sort_0_0(t);
                        x_75 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, x_75);
                        r_28 = t;
                        t = SSLsetAnnotations(r_28, v_75);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          i_149 = ATgetArgument(t, 0);
                          j_149 = ATgetArgument(t, 1);
                          {
                            ATerm e_76 = NULL,j_76 = NULL,u_28 = NULL;
                            t = SSLgetAnnotations(h_149);
                            e_76 = t;
                            t = i_149;
                            t = syntaxless_sort_0_0(t);
                            j_76 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, j_76, j_149);
                            u_28 = t;
                            t = SSLsetAnnotations(u_28, e_76);
                          }
                        }
                      else
                        {
                          ATerm u_76 = NULL,x_76 = NULL,v_28 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              i_149 = ATgetArgument(t, 0);
                              j_149 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(h_149);
                          u_76 = t;
                          t = i_149;
                          t = syntaxless_sort_0_0(t);
                          x_76 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, x_76, j_149);
                          v_28 = t;
                          t = SSLsetAnnotations(v_28, u_76);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm s_149 = NULL,t_149 = NULL,u_149 = NULL,v_149 = NULL,w_149 = NULL,x_149 = NULL,y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL,c_150 = NULL,f_30 = NULL,e_30 = NULL;
  c_150 = t;
  if(match_cons(t, sym_prod_3))
    {
      t_149 = ATgetArgument(t, 0);
      u_149 = ATgetArgument(t, 1);
      v_149 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_150);
  s_149 = t;
  t = t_149;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_149 = ATgetFirst((ATermList) t);
      z_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_149);
  x_149 = t;
  t = y_149;
  t = syntaxless_sort_0_0(t);
  a_150 = t;
  t = z_149;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_149), a_150);
  e_30 = t;
  t = SSLsetAnnotations(e_30, x_149);
  b_150 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, b_150, u_149, v_149);
  f_30 = t;
  t = SSLsetAnnotations(f_30, s_149);
  w_149 = t;
  {
    ATerm m_70 = t;
    int n_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_70;
        t = get_options_0_0(t);
        t = oncetd_1_0(n_11, t);
        t = w_149;
        LocalPopChoice(n_70);
      }
    else
      {
        t = m_70;
        {
          ATerm e_150 = NULL,f_150 = NULL;
          t = term_v_33;
          e_150 = t;
          t = term_p_70;
          f_150 = t;
          t = term_q_70;
          t = g_16(e_150, f_150, t);
        }
      }
  }
  t = w_149;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm h_150 = NULL,l_150 = NULL;
  ATerm r_70 = t;
  int s_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm t_70 = ATgetArgument(t, 0);
          ATerm u_70 = ATgetArgument(t, 1);
          ATerm v_70 = ATgetArgument(t, 2);
          h_150 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(s_70);
      t = h_150;
      t = oncetd_1_0(p_11, t);
      t = term_c_19;
    }
  else
    {
      t = r_70;
      if(match_cons(t, sym_prod_3))
        {
          ATerm w_70 = ATgetArgument(t, 0);
          ATerm x_70 = ATgetArgument(t, 1);
          l_150 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_150;
      t = oncetd_1_0(s_11, t);
      t = term_c_19;
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm p_150 = NULL,t_150 = NULL;
  ATerm y_70 = t;
  int z_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm b_71 = ATgetArgument(t, 0);
          ATerm c_71 = ATgetArgument(t, 1);
          ATerm d_71 = ATgetArgument(t, 2);
          p_150 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(z_70);
      t = p_150;
      t = oncetd_1_0(u_11, t);
      t = term_c_19;
    }
  else
    {
      t = y_70;
      if(match_cons(t, sym_prod_3))
        {
          ATerm r_71 = ATgetArgument(t, 0);
          ATerm t_71 = ATgetArgument(t, 1);
          t_150 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_150;
      t = oncetd_1_0(v_11, t);
      t = term_c_19;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm a_151 = NULL;
  a_151 = t;
  {
    ATerm u_71 = t;
    int v_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_77 = NULL;
        t = a_151;
        {
          ATerm w_71 = t;
          if((PushChoice() == 0))
            {
              ATerm x_71 = t;
              int y_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  LocalPopChoice(y_71);
                }
              else
                {
                  t = x_71;
                  {
                    ATerm a_72 = t;
                    int b_72 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        LocalPopChoice(b_72);
                      }
                    else
                      {
                        t = a_72;
                        {
                          ATerm c_72 = t;
                          int d_72 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(d_72);
                            }
                          else
                            {
                              t = c_72;
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
              t = w_71;
            }
        }
        t = a_151;
        t = mk_constr_0_0(t);
        e_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_151, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, e_77))));
        t = add_attributes_0_0(t);
        LocalPopChoice(v_71);
      }
    else
      {
        t = u_71;
        {
          ATerm c_151 = NULL;
          static ATerm x_11 (ATerm t)
          {
            ATerm d_151 = NULL,e_151 = NULL,f_151 = NULL,i_30 = NULL;
            f_151 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm e_72 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_151);
            d_151 = t;
            t = not_null(c_151);
            t = uq2q_0_0(t);
            e_151 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, e_151);
            i_30 = t;
            t = SSLsetAnnotations(i_30, d_151);
            return(t);
          }
          t = a_151;
          t = get_constr_0_0(t);
          if(((c_151 != NULL) && (c_151 != t)))
            _fail(t);
          else
            c_151 = t;
          t = a_151;
          t = oncetd_1_0(x_11, t);
        }
      }
  }
  return(t);
}
static ATerm c_15 (ATerm b_22, ATerm c_22, ATerm a_22, ATerm z_21, ATerm t)
{
  ATerm h_151 = NULL,i_151 = NULL;
  ATerm f_72 = t;
  int g_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm z_11 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((h_151 != NULL) && (h_151 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              h_151 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = a_22;
      t = oncetd_1_0(z_11, t);
      LocalPopChoice(g_72);
    }
  else
    {
      t = f_72;
      {
        ATerm h_72 = t;
        int i_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_151 = NULL,k_151 = NULL,l_151 = NULL,m_151 = NULL,n_151 = NULL,o_151 = NULL,p_151 = NULL,q_151 = NULL,m_30 = NULL,k_30 = NULL;
            t = c_22;
            if(match_cons(t, sym_sort_1))
              {
                q_151 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_22);
            p_151 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, q_151);
            k_30 = t;
            t = SSLsetAnnotations(k_30, p_151);
            t = (ATerm) ATmakeAppl(sym_prod_3, b_22, c_22, a_22);
            t = prodcons_0_0(t);
            o_151 = t;
            if(match_cons(t, sym_prod_3))
              {
                k_151 = ATgetArgument(t, 0);
                l_151 = ATgetArgument(t, 1);
                m_151 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_151);
            j_151 = t;
            t = m_151;
            {
              static ATerm d_12 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((h_151 != NULL) && (h_151 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      h_151 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(d_12, t);
            }
            n_151 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, k_151, l_151, n_151);
            m_30 = t;
            t = SSLsetAnnotations(m_30, j_151);
            LocalPopChoice(i_72);
          }
        else
          {
            t = h_72;
            t = term_k_72;
            h_151 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, b_22, c_22, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(h_151))))), (ATerm) ATinsert(ATempty, not_null(h_151)));
  t = get_pp_entry_0_0(t);
  i_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_151), i_151);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm l_72 = t;
  if((PushChoice() == 0))
    {
      ATerm x_151 = NULL,y_151 = NULL,z_151 = NULL,r_30 = NULL;
      z_151 = t;
      if(match_cons(t, sym_lit_1))
        {
          y_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_151);
      x_151 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, y_151);
      r_30 = t;
      t = SSLsetAnnotations(r_30, x_151);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_72;
    }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm o_72 = t;
  if((PushChoice() == 0))
    {
      ATerm a_152 = NULL,b_152 = NULL,c_152 = NULL,s_30 = NULL;
      c_152 = t;
      if(match_cons(t, sym_lit_1))
        {
          b_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_152);
      a_152 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, b_152);
      s_30 = t;
      t = SSLsetAnnotations(s_30, a_152);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_72;
    }
  return(t);
}
static ATerm d_15 (ATerm i_21, ATerm g_21, ATerm h_21, ATerm j_21, ATerm t)
{
  ATerm s_151 = NULL,t_151 = NULL,u_151 = NULL,v_151 = NULL,w_151 = NULL;
  static ATerm g_12 (ATerm t)
  {
    ATerm p_72 = t;
    int q_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_72 = t;
        int w_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_12 (ATerm t)
            {
              t = not_null(u_151);
              return(t);
            }
            t = Instantiate_1_0(h_12, t);
            LocalPopChoice(w_72);
          }
        else
          {
            t = v_72;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(q_72);
      }
    else
      {
        t = p_72;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, i_21, g_21, h_21), j_21);
  t = c_15(i_21, g_21, h_21, j_21, t);
  if(match_cons(t, sym__2))
    {
      s_151 = ATgetArgument(t, 0);
      t_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_21;
  t = filter_1_0(e_12, t);
  v_151 = t;
  t = j_21;
  t = filter_1_0(f_12, t);
  w_151 = t;
  t = (ATerm) ATmakeAppl(sym__4, v_151, w_151, (ATerm)ATinsert(ATempty, s_151), term_g_19);
  t = seq2abox_0_0(t);
  if(((u_151 != NULL) && (u_151 != t)))
    _fail(t);
  else
    u_151 = t;
  t = t_151;
  t = bottomup_1_0(g_12, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_126 (ATerm), ATerm t)
{
  ATerm q_152 = NULL,r_152 = NULL,s_152 = NULL;
  q_152 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_152;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_152 = ATgetFirst((ATermList) t);
          s_152 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_72 = t;
        int y_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_77 = NULL,n_77 = NULL,o_77 = NULL,y_30 = NULL;
            t = SSLgetAnnotations(q_152);
            k_77 = t;
            t = r_152;
            t = o_126(t);
            n_77 = t;
            t = s_152;
            t = filter_1_0(o_126, t);
            o_77 = t;
            t = (ATerm) ATinsert(CheckATermList(o_77), n_77);
            y_30 = t;
            t = SSLsetAnnotations(y_30, k_77);
            LocalPopChoice(y_72);
          }
        else
          {
            t = x_72;
            t = s_152;
            t = filter_1_0(o_126, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  static ATerm i_12 (ATerm t)
  {
    t = topdown_1_0(z_111, t);
    return(t);
  }
  t = z_111(t);
  t = SRTS_all(i_12, t);
  return(t);
}
ATerm sometd_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  static ATerm v_152 (ATerm t)
  {
    ATerm z_72 = t;
    int b_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_113(t);
        LocalPopChoice(b_73);
      }
    else
      {
        t = z_72;
        t = SRTS_some(v_152, t);
      }
    return(t);
  }
  t = v_152(t);
  return(t);
}
ATerm repeat_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  static ATerm w_152 (ATerm t)
  {
    ATerm c_73 = t;
    int e_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_110(t);
        t = w_152(t);
        LocalPopChoice(e_73);
      }
    else
      {
        t = c_73;
        t = a_111(t);
      }
    return(t);
  }
  t = w_152(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  static ATerm k_153 (ATerm t)
  {
    ATerm h_153 = NULL,i_153 = NULL,j_153 = NULL;
    j_153 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_153 = ATgetFirst((ATermList) t);
        i_153 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_77 = NULL,c_78 = NULL,a_31 = NULL;
          t = SSLgetAnnotations(j_153);
          z_77 = t;
          t = i_153;
          t = k_153(t);
          c_78 = t;
          t = (ATerm) ATinsert(CheckATermList(c_78), h_153);
          a_31 = t;
          t = SSLsetAnnotations(a_31, z_77);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_153;
        t = c_119(t);
      }
    return(t);
  }
  t = k_153(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_153 = NULL,o_153 = NULL,p_153 = NULL;
  n_153 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_153;
    }
  else
    {
      static ATerm j_12 (ATerm t)
      {
        t = not_null(p_153);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_153 = ATgetFirst((ATermList) t);
          if(((p_153 != NULL) && (p_153 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_153 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_153;
      t = at_end_1_0(j_12, t);
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      d_79 = ATgetArgument(t, 0);
      e_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(d_79);
  f_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_79), term_g_73), f_79), term_f_73);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm g_154 = NULL,h_154 = NULL,i_154 = NULL;
  g_154 = t;
  if(match_cons(t, sym_Path1_1))
    {
      h_154 = ATgetArgument(t, 0);
      t = h_154;
    }
  else
    {
      ATerm y_78 = NULL,b_79 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          h_154 = ATgetArgument(t, 0);
          i_154 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_154;
      t = map_1_0(k_12, t);
      t = concat_0_0(t);
      y_78 = t;
      t = (ATerm) ATinsert(CheckATermList(y_78), h_154);
      b_79 = t;
      t = SSL_concat_strings(b_79);
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm a_155 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      a_155 = ATgetArgument(t, 0);
      {
        ATerm h_73 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_155;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm q_154 = NULL,r_154 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      q_154 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, q_154);
    }
  else
    {
      ATerm z_154 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          q_154 = ATgetArgument(t, 0);
          r_154 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_154;
      t = map_1_0(l_12, t);
      z_154 = t;
      t = (ATerm) ATinsert(CheckATermList(z_154), q_154);
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = debug_1_0(q_12, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_j_73;
  return(t);
}
static ATerm e_15 (ATerm q_80, ATerm r_80, ATerm t)
{
  ATerm b_155 = NULL,c_155 = NULL,d_155 = NULL,e_155 = NULL,f_155 = NULL,g_155 = NULL;
  t = q_80;
  t = mk_key_0_0(t);
  c_155 = t;
  t = term_u_31;
  d_155 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_31, c_155, (ATerm) ATmakeAppl(sym__2, q_80, r_80));
  t = lookup_table_0_1(d_155, t);
  g_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_80, r_80);
  e_155 = t;
  t = g_155;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(c_155, e_155, f_155, t);
  t = q_80;
  t = path_to_string_0_0(t);
  b_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_155, r_80);
  t = if_verbose1_1_0(n_12, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  static ATerm x_155 (ATerm t)
  {
    ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL;
    ATerm k_73 = t;
    int l_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_129(t);
        LocalPopChoice(l_73);
      }
    else
      {
        t = k_73;
      }
    w_155 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_155 = ATgetFirst((ATermList) t);
        v_155 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_79 = NULL,a_80 = NULL,c_31 = NULL;
          t = SSLgetAnnotations(w_155);
          v_79 = t;
          t = v_155;
          t = x_155(t);
          a_80 = t;
          t = (ATerm) ATinsert(CheckATermList(a_80), u_155);
          c_31 = t;
          t = SSLsetAnnotations(c_31, v_79);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_155;
      }
    return(t);
  }
  t = x_155(t);
  return(t);
}
ATerm at_last_1_0 (ATerm n_119 (ATerm), ATerm t)
{
  static ATerm v_156 (ATerm t)
  {
    ATerm s_156 = NULL,t_156 = NULL,u_156 = NULL;
    s_156 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_156 = ATgetFirst((ATermList) t);
        u_156 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_73 = t;
      int p_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_80 = NULL,g_31 = NULL;
          t = SSLgetAnnotations(s_156);
          x_80 = t;
          t = u_156;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(u_156), t_156);
          g_31 = t;
          t = SSLsetAnnotations(g_31, x_80);
          t = n_119(t);
          LocalPopChoice(p_73);
        }
      else
        {
          t = n_73;
          {
            ATerm k_81 = NULL,q_81 = NULL,h_31 = NULL;
            t = SSLgetAnnotations(s_156);
            k_81 = t;
            t = u_156;
            t = v_156(t);
            q_81 = t;
            t = (ATerm) ATinsert(CheckATermList(q_81), t_156);
            h_31 = t;
            t = SSLsetAnnotations(h_31, k_81);
          }
        }
    }
    return(t);
  }
  t = v_156(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm b_157 = NULL,c_157 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_157 = ATgetFirst((ATermList) t);
      c_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_157;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_157;
    }
  else
    {
      t = c_157;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm k_157 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_73 = ATgetFirst((ATermList) t);
      k_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_157;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm t)
{
  ATerm h_157 = NULL,i_157 = NULL,j_157 = NULL;
  h_157 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_157 = ATgetFirst((ATermList) t);
      {
        ATerm t_73 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_157;
  t = n_128(t);
  t = h_157;
  t = last_0_0(t);
  t = o_128(t);
  t = h_157;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_73 = ATgetFirst((ATermList) t);
      i_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_157;
  t = at_last_1_0(u_12, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm r_84 = NULL,u_84 = NULL,y_84 = NULL,z_84 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_84 = ATgetFirst((ATermList) t);
      u_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_84;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = u_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_84 = ATgetFirst((ATermList) t);
      z_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_84;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(z_84), term_x_56);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(z_84), term_k_57);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_84), term_j_40);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(z_84), term_e_32);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(z_84), term_p_38);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm t_159 = NULL,u_159 = NULL,v_159 = NULL;
  t_159 = t;
  if(match_cons(t, sym_Arg_1))
    {
      u_159 = ATgetArgument(t, 0);
      {
        ATerm g_82 = NULL,i_82 = NULL,y_31 = NULL;
        t = SSLgetAnnotations(t_159);
        g_82 = t;
        t = SSL_string_to_int(u_159);
        i_82 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, i_82);
        y_31 = t;
        t = SSLsetAnnotations(y_31, g_82);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          u_159 = ATgetArgument(t, 0);
          v_159 = ATgetArgument(t, 1);
          {
            ATerm u_82 = NULL,x_82 = NULL,y_82 = NULL,z_31 = NULL;
            t = SSLgetAnnotations(t_159);
            u_82 = t;
            t = SSL_string_to_int(u_159);
            x_82 = t;
            t = SSL_string_to_int(v_159);
            y_82 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, x_82, y_82);
            z_31 = t;
            t = SSLsetAnnotations(z_31, u_82);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              u_159 = ATgetArgument(t, 0);
              v_159 = ATgetArgument(t, 1);
              {
                ATerm h_83 = NULL,a_32 = NULL;
                t = SSLgetAnnotations(t_159);
                h_83 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, u_159, v_159);
                a_32 = t;
                t = SSLsetAnnotations(a_32, h_83);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  u_159 = ATgetArgument(t, 0);
                  {
                    ATerm r_83 = NULL,w_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,r_33 = NULL;
                    t = SSLgetAnnotations(t_159);
                    r_83 = t;
                    t = SSL_explode_string(u_159);
                    t = unquote_chars_2_0(w_12, x_12, t);
                    b_84 = t;
                    t = SSL_implode_string(b_84);
                    a_84 = t;
                    t = SSL_explode_string(a_84);
                    t = unescape_chars_1_0(g_13, t);
                    z_83 = t;
                    t = SSL_implode_string(z_83);
                    w_83 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, w_83);
                    r_33 = t;
                    t = SSLsetAnnotations(r_33, r_83);
                  }
                }
              else
                {
                  ATerm k_85 = NULL,n_85 = NULL,t_33 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      u_159 = ATgetArgument(t, 0);
                      v_159 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_159);
                  k_85 = t;
                  t = SSL_string_to_int(u_159);
                  n_85 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, n_85, v_159);
                  t_33 = t;
                  t = SSLsetAnnotations(t_33, k_85);
                }
            }
        }
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm e_160 = NULL,f_160 = NULL;
  t = topdown_1_0(j_13, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      e_160 = ATgetArgument(t, 0);
      f_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(e_160, f_160, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm v_73 = t;
  int w_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(w_73);
    }
  else
    {
      t = v_73;
    }
  return(t);
}
static ATerm n_15 (ATerm p_80, ATerm t)
{
  t = p_80;
  t = reverse_acc_2_0(_id, h_13, t);
  t = map_1_0(i_13, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  static ATerm i_160 (ATerm t)
  {
    ATerm x_73 = t;
    int y_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_113(t);
        LocalPopChoice(y_73);
      }
    else
      {
        t = x_73;
        t = SRTS_one(i_160, t);
      }
    return(t);
  }
  t = i_160(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm j_160 = NULL,k_160 = NULL;
  t = term_z_73;
  j_160 = t;
  t = term_a_74;
  k_160 = t;
  t = term_b_74;
  t = g_16(j_160, k_160, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm d_74 = t;
  int e_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_160 = NULL,m_160 = NULL,n_160 = NULL;
      t = term_g_74;
      t = get_options_0_0(t);
      t = oncetd_1_0(k_13, t);
      t = term_d_19;
      m_160 = t;
      t = (ATerm) ATinsert(ATempty, term_i_74);
      n_160 = t;
      t = SSL_printnl(m_160, n_160);
      t = term_g_19;
      l_160 = t;
      t = SSL_exit(l_160);
      t = (ATerm) ATinsert(ATempty, term_i_74);
      LocalPopChoice(e_74);
    }
  else
    {
      t = d_74;
      {
        ATerm p_160 = NULL,q_160 = NULL;
        t = term_d_19;
        p_160 = t;
        t = (ATerm) ATinsert(ATempty, term_j_74);
        q_160 = t;
        t = SSL_printnl(p_160, q_160);
        t = (ATerm) ATinsert(ATempty, term_j_74);
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm a_118 (ATerm), ATerm t)
{
  ATerm u_160 = NULL,v_160 = NULL,w_160 = NULL,x_160 = NULL;
  u_160 = t;
  t = a_118(t);
  v_160 = t;
  t = term_d_19;
  w_160 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_160), v_160);
  x_160 = t;
  t = SSL_printnl(w_160, x_160);
  t = u_160;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm z_160 = NULL,a_161 = NULL,t_85 = NULL,v_85 = NULL;
  t = if_verbose1_1_0(o_13, t);
  t = ReadFromFile_0_0(t);
  a_161 = t;
  t = SSL_explode_term(a_161);
  if(match_cons(t, sym__2))
    {
      v_85 = ATgetArgument(t, 0);
      {
        ATerm k_74 = ATgetArgument(t, 1);
        if(((ATgetType(k_74) == AT_LIST) && !(ATisEmpty(k_74))))
          {
            t_85 = ATgetFirst((ATermList) k_74);
            {
              ATerm l_74 = (ATerm) ATgetNext((ATermList) k_74);
              if(((ATgetType(l_74) != AT_LIST) || !(ATisEmpty(l_74))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_85;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = t_85;
  if(match_cons(t, sym_PP_Table_1))
    {
      z_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_15(z_160, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = debug_1_0(q_13, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_m_74;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm y_160 = NULL;
  y_160 = t;
  t = term_u_31;
  t = table_create_0_0(t);
  t = y_160;
  t = map_1_0(m_13, t);
  return(t);
}
static ATerm q_15 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  t = a_123(t);
  {
    static ATerm s_13 (ATerm t)
    {
      ATerm b_161 = NULL;
      b_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_34, b_161);
      t = z_122(t);
      return(t);
    }
    t = fetch_1_0(s_13, t);
  }
  t = p_34;
  return(t);
}
static ATerm r_15 (ATerm w_122 (ATerm), ATerm m_34, ATerm l_34, ATerm t)
{
  static ATerm r_161 (ATerm t)
  {
    ATerm m_161 = NULL,n_161 = NULL,o_161 = NULL;
    m_161 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_161 = ATgetFirst((ATermList) t);
            o_161 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_74 = t;
          int o_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_161;
              {
                static ATerm w_13 (ATerm t)
                {
                  t = l_34;
                  return(t);
                }
                t = q_15(w_122, w_13, n_161, o_161, t);
              }
              t = r_161(t);
              LocalPopChoice(o_74);
            }
          else
            {
              t = n_74;
              {
                ATerm e_86 = NULL,h_86 = NULL,e_34 = NULL;
                t = SSLgetAnnotations(m_161);
                e_86 = t;
                t = o_161;
                t = r_161(t);
                h_86 = t;
                t = (ATerm) ATinsert(CheckATermList(h_86), n_161);
                e_34 = t;
                t = SSLsetAnnotations(e_34, e_86);
              }
            }
        }
      }
    return(t);
  }
  t = m_34;
  t = r_161(t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t)
{
  ATerm u_161 = NULL,v_161 = NULL,w_161 = NULL;
  u_161 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_161;
      t = m_125(t);
    }
  else
    {
      ATerm z_161 = NULL,a_162 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_161 = ATgetFirst((ATermList) t);
          w_161 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_161;
      t = o_125(t);
      z_161 = t;
      t = w_161;
      t = foldr_3_0(m_125, n_125, o_125, t);
      a_162 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_161, a_162);
      t = n_125(t);
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t)
{
  ATerm r_74 = t;
  int u_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_162 = NULL;
      t = e_124(t);
      d_162 = t;
      t = (ATerm) ATinsert(ATempty, d_162);
      LocalPopChoice(u_74);
    }
  else
    {
      t = r_74;
      {
        ATerm m_86 = NULL,n_86 = NULL;
        static ATerm a_14 (ATerm t)
        {
          t = collect_om_2_0(e_124, f_124, t);
          return(t);
        }
        n_86 = t;
        t = SSL_explode_term(n_86);
        if(match_cons(t, sym__2))
          {
            ATerm v_74 = ATgetArgument(t, 0);
            m_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_86;
        t = foldr_3_0(y_13, f_124, a_14, t);
      }
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm n_162 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      n_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_162;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm o_162 = NULL,p_162 = NULL;
  if(match_cons(t, sym__2))
    {
      o_162 = ATgetArgument(t, 0);
      p_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15(s_14, o_162, p_162, t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm q_162 = NULL;
  if(match_cons(t, sym__2))
    {
      q_162 = ATgetArgument(t, 0);
      if((q_162 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = sometd_1_0(v_14, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm s_162 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      s_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_162;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm w_74 = t;
  int b_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_75 = ATgetFirst((ATermList) t);
              ATerm h_75 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(y_14, t);
      LocalPopChoice(b_75);
    }
  else
    {
      t = w_74;
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm i_75 = t;
  if((PushChoice() == 0))
    {
      ATerm u_162 = NULL,v_162 = NULL,w_162 = NULL,g_34 = NULL;
      w_162 = t;
      if(match_cons(t, sym_opt_1))
        {
          v_162 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_162);
      u_162 = t;
      t = v_162;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, v_162);
      g_34 = t;
      t = SSLsetAnnotations(g_34, u_162);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_75;
    }
  {
    ATerm j_75 = t;
    if((PushChoice() == 0))
      {
        ATerm x_162 = NULL,y_162 = NULL,z_162 = NULL,i_34 = NULL;
        z_162 = t;
        if(match_cons(t, sym_layout_1))
          {
            y_162 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_162);
        x_162 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, y_162);
        i_34 = t;
        t = SSLsetAnnotations(i_34, x_162);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_75;
      }
  }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm m_163 = NULL,n_163 = NULL,o_163 = NULL,j_34 = NULL;
  o_163 = t;
  if(match_cons(t, sym_layout_1))
    {
      n_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_163);
  m_163 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, n_163);
  j_34 = t;
  t = SSLsetAnnotations(j_34, m_163);
  return(t);
}
static ATerm s_15 (ATerm s_26, ATerm r_26, ATerm t)
{
  ATerm j_162 = NULL,k_162 = NULL,l_162 = NULL,m_162 = NULL;
  t = s_26;
  t = collect_om_2_0(j_14, r_14, t);
  t = reverse_acc_2_0(_id, t_14, t);
  t = read_pp_tables_0_0(t);
  t = r_26;
  t = repeat_2_0(u_14, _id, t);
  m_162 = t;
  t = topdown_1_0(x_14, t);
  {
    ATerm k_75 = t;
    int l_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_163 = NULL,d_163 = NULL,e_163 = NULL,f_163 = NULL,g_163 = NULL,h_163 = NULL;
        c_163 = t;
        if(match_cons(t, sym_appl_2))
          {
            d_163 = ATgetArgument(t, 0);
            h_163 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_163;
        if(match_cons(t, sym_prod_3))
          {
            e_163 = ATgetArgument(t, 0);
            f_163 = ATgetArgument(t, 1);
            g_163 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = c_163;
        t = d_15(e_163, f_163, g_163, h_163, t);
        LocalPopChoice(l_75);
      }
    else
      {
        t = k_75;
        t = fatal_ambiguity_0_0(t);
      }
  }
  k_162 = t;
  t = m_162;
  t = collect_p__1_0(f_15, t);
  l_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_162, l_162);
  t = insert_layout_0_0(t);
  j_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_26, j_162);
  return(t);
}
static ATerm u_15 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm p_163 = NULL;
  t = SSL_fputc(n_43, o_43);
  p_163 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_163);
  return(t);
}
static ATerm v_15 (ATerm i_28, ATerm j_28, ATerm t)
{
  ATerm q_163 = NULL;
  t = SSL_write_term_to_stream_text(i_28, j_28);
  q_163 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_163);
  return(t);
}
static ATerm x_15 (ATerm c_118 (ATerm), ATerm i_217, ATerm o_28, ATerm t)
{
  ATerm r_163 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_217, term_n_75);
  t = b_16(t);
  r_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_163, o_28);
  t = c_118(t);
  t = fclose_0_0(t);
  t = o_28;
  return(t);
}
static ATerm w_15 (ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm s_163 = NULL;
  t = SSL_write_term_to_stream_baf(e_28, f_28);
  s_163 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_163);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_75 = ATgetArgument(t, 0);
      if(match_cons(p_75, sym_Stream_1))
        {
          a_87 = ATgetArgument(p_75, 0);
        }
      else
        _fail(t);
      b_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15(a_87, b_87, t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,b_88 = NULL,c_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_75 = ATgetArgument(t, 0);
      if(match_cons(q_75, sym_Stream_1))
        {
          b_88 = ATgetArgument(q_75, 0);
        }
      else
        _fail(t);
      c_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(b_88, c_88, t);
  x_87 = t;
  t = term_j_40;
  y_87 = t;
  t = x_87;
  if(match_cons(t, sym_Stream_1))
    {
      z_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_40, x_87);
  t = u_15(y_87, z_87, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_163 = NULL,x_163 = NULL,y_163 = NULL,z_163 = NULL,a_164 = NULL,c_164 = NULL,d_164 = NULL,e_164 = NULL,f_164 = NULL,g_164 = NULL,g_165 = NULL,h_165 = NULL,v_34 = NULL,u_34 = NULL;
  x_163 = t;
  if(match_cons(t, sym__2))
    {
      e_164 = ATgetArgument(t, 0);
      f_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_163);
  d_164 = t;
  t = e_164;
  {
    ATerm r_75 = t;
    int t_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_15 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_163 != NULL) && (w_163 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_163 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(g_15, t);
        LocalPopChoice(t_75);
      }
    else
      {
        t = r_75;
        t = term_u_75;
        w_163 = t;
      }
  }
  g_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_164, f_164);
  u_34 = t;
  t = SSLsetAnnotations(u_34, d_164);
  t = x_163;
  if(match_cons(t, sym__2))
    {
      z_163 = ATgetArgument(t, 0);
      a_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_163);
  y_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_163, (ATerm) ATmakeAppl(sym__2, not_null(w_163), a_164));
  v_34 = t;
  t = SSLsetAnnotations(v_34, y_163);
  c_164 = t;
  if(match_cons(t, sym__2))
    {
      g_165 = ATgetArgument(t, 0);
      h_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_75 = t;
    int y_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,k_38 = NULL;
        t = SSLgetAnnotations(c_164);
        t_86 = t;
        t = g_165;
        t = fetch_1_0(h_15, t);
        w_86 = t;
        t = h_165;
        if(match_cons(t, sym__2))
          {
            y_86 = ATgetArgument(t, 0);
            z_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_15(i_15, y_86, z_86, t);
        x_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_86, x_86);
        k_38 = t;
        t = SSLsetAnnotations(k_38, t_86);
        LocalPopChoice(y_75);
      }
    else
      {
        t = w_75;
        {
          ATerm k_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,l_38 = NULL;
          t = SSLgetAnnotations(c_164);
          k_87 = t;
          t = h_165;
          if(match_cons(t, sym__2))
            {
              s_87 = ATgetArgument(t, 0);
              t_87 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_15(j_15, s_87, t_87, t);
          r_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_165, r_87);
          l_38 = t;
          t = SSLsetAnnotations(l_38, k_87);
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
ATerm apply_strategy_1_0 (ATerm a_137 (ATerm), ATerm t)
{
  ATerm k_165 = NULL,l_165 = NULL,m_165 = NULL,n_165 = NULL,o_165 = NULL;
  o_165 = t;
  t = dtime_0_0(t);
  t = o_165;
  t = a_137(t);
  n_165 = t;
  t = dtime_0_0(t);
  k_165 = t;
  t = n_165;
  if(match_cons(t, sym__2))
    {
      l_165 = ATgetArgument(t, 0);
      m_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_165), (ATerm) ATmakeAppl(sym_Runtime_1, k_165)), m_165);
  return(t);
}
static ATerm c_166 (ATerm w_165, ATerm t)
{
  t = SSL_fclose(w_165);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_165 = NULL,a_166 = NULL;
  a_166 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_165 = ATgetArgument(t, 0);
      {
        ATerm z_75 = t;
        int a_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_165);
            LocalPopChoice(a_76);
          }
        else
          {
            t = z_75;
            t = c_166(a_166, t);
          }
      }
    }
  else
    {
      t = c_166(a_166, t);
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
  ATerm d_166 = NULL;
  t = SSL_fopen(p_43, q_43);
  d_166 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_166);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_166 = NULL;
  t = SSL_stdin_stream();
  e_166 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_166);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_166 = NULL;
  t = SSL_stdout_stream();
  f_166 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_166);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_166 = NULL;
  t = SSL_stderr_stream();
  g_166 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_166);
  return(t);
}
static ATerm n_167 (ATerm m_166, ATerm t)
{
  ATerm n_166 = NULL;
  t = SSL_explode_term(m_166);
  if(match_cons(t, sym__2))
    {
      ATerm b_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_76 = ATgetArgument(t, 1);
        if(((ATgetType(c_76) == AT_LIST) && !(ATisEmpty(c_76))))
          {
            n_166 = ATgetFirst((ATermList) c_76);
            {
              ATerm d_76 = (ATerm) ATgetNext((ATermList) c_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_166;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_166;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_166;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_166;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_167 (ATerm q_166, ATerm r_166, ATerm s_166, ATerm t)
{
  ATerm t_166 = NULL,u_166 = NULL,v_166 = NULL,y_166 = NULL,g_39 = NULL;
  t = SSLgetAnnotations(s_166);
  v_166 = t;
  t = q_166;
  if(match_cons(t, sym_Path_1))
    {
      y_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_166, r_166);
  g_39 = t;
  t = SSLsetAnnotations(g_39, v_166);
  if(match_cons(t, sym__2))
    {
      t_166 = ATgetArgument(t, 0);
      u_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_16(t_166, u_166, t);
  return(t);
}
static ATerm p_167 (ATerm a_167, ATerm b_167, ATerm c_167, ATerm t)
{
  ATerm d_167 = NULL,e_167 = NULL,f_167 = NULL,i_167 = NULL,h_39 = NULL;
  t = SSLgetAnnotations(c_167);
  f_167 = t;
  t = SSL_is_string(a_167);
  i_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_167, b_167);
  h_39 = t;
  t = SSLsetAnnotations(h_39, f_167);
  if(match_cons(t, sym__2))
    {
      d_167 = ATgetArgument(t, 0);
      e_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_16(d_167, e_167, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm k_167 = NULL,l_167 = NULL,m_167 = NULL;
  k_167 = t;
  if(match_cons(t, sym__2))
    {
      l_167 = ATgetArgument(t, 0);
      m_167 = ATgetArgument(t, 1);
      {
        ATerm f_76 = t;
        int h_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_167(k_167, t);
            LocalPopChoice(h_76);
          }
        else
          {
            t = f_76;
            {
              ATerm i_76 = t;
              int k_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_167(l_167, m_167, k_167, t);
                  LocalPopChoice(k_76);
                }
              else
                {
                  t = i_76;
                  t = p_167(l_167, m_167, k_167, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_167(k_167, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_167 = NULL,s_167 = NULL,t_167 = NULL,y_167 = NULL;
  y_167 = t;
  {
    ATerm m_76 = t;
    int n_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_167, term_h_33);
        t = b_16(t);
        LocalPopChoice(n_76);
      }
    else
      {
        t = m_76;
        {
          ATerm z_88 = NULL,a_89 = NULL;
          t = term_o_76;
          a_89 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_76, y_167);
          t = z_15(a_89, y_167, t);
          z_88 = t;
          t = SSL_perror(z_88);
          _fail(t);
        }
      }
  }
  s_167 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_15(t_167, t);
  r_167 = t;
  t = s_167;
  t = fclose_0_0(t);
  t = r_167;
  return(t);
}
ATerm fetch_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  static ATerm x_168 (ATerm t)
  {
    ATerm u_168 = NULL,v_168 = NULL,w_168 = NULL;
    u_168 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_168 = ATgetFirst((ATermList) t);
        w_168 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_76 = t;
      int q_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_89 = NULL,k_89 = NULL,o_39 = NULL;
          t = SSLgetAnnotations(u_168);
          f_89 = t;
          t = v_168;
          t = v_118(t);
          k_89 = t;
          t = (ATerm) ATinsert(CheckATermList(w_168), k_89);
          o_39 = t;
          t = SSLsetAnnotations(o_39, f_89);
          LocalPopChoice(q_76);
        }
      else
        {
          t = p_76;
          {
            ATerm w_89 = NULL,z_89 = NULL,q_39 = NULL;
            t = SSLgetAnnotations(u_168);
            w_89 = t;
            t = w_168;
            t = x_168(t);
            z_89 = t;
            t = (ATerm) ATinsert(CheckATermList(z_89), v_168);
            q_39 = t;
            t = SSLsetAnnotations(q_39, w_89);
          }
        }
    }
    return(t);
  }
  t = x_168(t);
  return(t);
}
static ATerm g_16 (ATerm f_68, ATerm g_68, ATerm t)
{
  ATerm a_169 = NULL;
  t = lookup_table_0_1(f_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_16(g_68, a_169, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_135 (ATerm), ATerm t)
{
  ATerm d_169 = NULL;
  d_169 = t;
  {
    ATerm r_76 = t;
    int s_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_169 = NULL,g_169 = NULL,h_169 = NULL;
        t = term_v_33;
        g_169 = t;
        t = term_m_33;
        h_169 = t;
        t = term_w_33;
        t = g_16(g_169, h_169, t);
        f_169 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_169, term_z_24);
        t = geq_0_0(t);
        t = d_169;
        t = j_135(t);
        LocalPopChoice(s_76);
      }
    else
      {
        t = r_76;
        t = d_169;
      }
  }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm k_169 = NULL;
  k_169 = t;
  if(match_string(t, "-k"))
    {
      t = k_169;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_169;
    }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm l_169 = NULL,m_169 = NULL,n_169 = NULL;
  l_169 = t;
  t = SSL_string_to_int(l_169);
  m_169 = t;
  t = term_t_76;
  n_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_76, m_169);
  t = i_16(n_169, m_169, t);
  t = l_169;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_v_76;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_15, l_15, m_15, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm p_169 = NULL;
  p_169 = t;
  if(match_string(t, "-S"))
    {
      t = p_169;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_169;
    }
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm q_169 = NULL,r_169 = NULL;
  t = term_m_33;
  q_169 = t;
  t = term_w_76;
  r_169 = t;
  t = term_y_76;
  t = i_16(q_169, r_169, t);
  t = term_z_76;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_a_77;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm s_169 = NULL,t_169 = NULL,u_169 = NULL;
  s_169 = t;
  t = SSL_string_to_int(s_169);
  t_169 = t;
  t = term_m_33;
  u_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_33, t_169);
  t = i_16(u_169, t_169, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_169);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_b_77;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm v_169 = NULL,w_169 = NULL;
  t = term_c_77;
  v_169 = t;
  t = term_c_19;
  w_169 = t;
  t = term_d_77;
  t = i_16(v_169, w_169, t);
  t = term_f_77;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_g_77;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_77 = t;
  int i_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_15, p_15, d_16, t);
      LocalPopChoice(i_77);
    }
  else
    {
      t = h_77;
      {
        ATerm j_77 = t;
        int l_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_16, l_16, m_16, t);
            LocalPopChoice(l_77);
          }
        else
          {
            t = j_77;
            t = Option_3_0(o_16, t_16, u_16, t);
          }
      }
    }
  return(t);
}
static ATerm i_16 (ATerm u_61, ATerm v_61, ATerm t)
{
  ATerm x_169 = NULL,y_169 = NULL;
  t = term_v_33;
  x_169 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_33, u_61, v_61);
  t = lookup_table_0_1(x_169, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(u_61, v_61, y_169, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_33, u_61, v_61);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm b_170 = NULL;
  b_170 = t;
  if(match_string(t, "-o"))
    {
      t = b_170;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_170;
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm c_170 = NULL,d_170 = NULL;
  c_170 = t;
  t = term_r_47;
  d_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_47, c_170);
  t = i_16(d_170, c_170, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_170);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_m_77;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_16, y_16, z_16, t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm f_170 = NULL;
  f_170 = t;
  if(match_string(t, "-i"))
    {
      t = f_170;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_170;
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm g_170 = NULL,h_170 = NULL;
  g_170 = t;
  t = term_t_47;
  h_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_47, g_170);
  t = i_16(h_170, g_170, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_170);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_p_77;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_17, k_17, l_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_170 = NULL,j_170 = NULL,k_170 = NULL,l_170 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_19;
  t = whoami_0_0(t);
  i_170 = t;
  t = term_d_19;
  k_170 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_77), i_170);
  l_170 = t;
  t = SSL_printnl(k_170, l_170);
  t = term_g_19;
  j_170 = t;
  t = SSL_exit(j_170);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_170 = NULL,n_170 = NULL;
  t = term_v_33;
  m_170 = t;
  t = term_r_77;
  n_170 = t;
  t = term_s_77;
  t = g_16(m_170, n_170, t);
  return(t);
}
static ATerm c_16 (ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm t_77 = t;
  int u_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_46, j_46);
      LocalPopChoice(u_77);
    }
  else
    {
      t = t_77;
      t = SSL_addr(i_46, j_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t)
{
  ATerm p_170 = NULL,q_170 = NULL,r_170 = NULL;
  p_170 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_170;
      t = k_125(t);
    }
  else
    {
      ATerm u_170 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_170 = ATgetFirst((ATermList) t);
          r_170 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_170;
      t = foldr_2_0(k_125, l_125, t);
      u_170 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_170, u_170);
      t = l_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_w_76;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL;
  if(match_cons(t, sym__2))
    {
      q_90 = ATgetArgument(t, 0);
      r_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_16(q_90, r_90, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_170 = NULL,l_90 = NULL,m_90 = NULL;
  t = times_0_0(t);
  m_90 = t;
  t = SSL_explode_term(m_90);
  if(match_cons(t, sym__2))
    {
      ATerm y_77 = ATgetArgument(t, 0);
      l_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_90;
  t = foldr_2_0(m_17, n_17, t);
  x_170 = t;
  t = SSL_TicksToSeconds(x_170);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_171 = NULL,j_171 = NULL,k_171 = NULL;
  i_171 = t;
  if(match_cons(t, sym__2))
    {
      j_171 = ATgetArgument(t, 0);
      k_171 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_78 = t;
    int b_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_171;
        if((j_171 != t))
          {
            _fail(t);
          }
        t = i_171;
        LocalPopChoice(b_78);
      }
    else
      {
        t = a_78;
        t = (ATerm) ATmakeAppl(sym__2, j_171, k_171);
        {
          ATerm d_78 = t;
          int f_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_171, k_171);
              LocalPopChoice(f_78);
            }
          else
            {
              t = d_78;
              t = SSL_gtr(j_171, k_171);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_171, k_171);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_135 (ATerm), ATerm t)
{
  ATerm o_171 = NULL;
  o_171 = t;
  {
    ATerm i_78 = t;
    int j_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_171 = NULL,r_171 = NULL,s_171 = NULL;
        t = term_v_33;
        r_171 = t;
        t = term_m_33;
        s_171 = t;
        t = term_w_33;
        t = g_16(r_171, s_171, t);
        q_171 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_171, term_g_19);
        t = geq_0_0(t);
        t = o_171;
        t = i_135(t);
        LocalPopChoice(j_78);
      }
    else
      {
        t = i_78;
        t = o_171;
      }
  }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm u_171 = NULL,v_171 = NULL,x_171 = NULL,y_171 = NULL;
  t = run_time_0_0(t);
  u_171 = t;
  t = term_c_19;
  t = whoami_0_0(t);
  v_171 = t;
  t = term_d_19;
  x_171 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), u_171), term_i_35), v_171);
  y_171 = t;
  t = SSL_printnl(x_171, y_171);
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), u_171), term_i_35), v_171));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_171 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_76;
  z_171 = t;
  t = SSL_exit(z_171);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm k_172 = NULL,l_172 = NULL;
  l_172 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_172;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_172 = ATgetArgument(t, 0);
          {
            ATerm y_91 = NULL,t_39 = NULL;
            t = SSLgetAnnotations(l_172);
            y_91 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_172);
            t_39 = t;
            t = SSLsetAnnotations(t_39, y_91);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_172;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_137 (ATerm), ATerm t)
{
  ATerm l_78 = t;
  int o_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_172 = NULL,d_172 = NULL;
      t = term_v_33;
      c_172 = t;
      t = term_p_78;
      d_172 = t;
      t = term_s_78;
      t = g_16(c_172, d_172, t);
      LocalPopChoice(o_78);
    }
  else
    {
      t = l_78;
      t = fetch_1_0(p_17, t);
    }
  t = y_137(t);
  return(t);
}
static ATerm j_16 (ATerm e_71, ATerm f_71, ATerm g_71, ATerm t)
{
  ATerm n_172 = NULL;
  t = SSL_hashtable_put(g_71, e_71, f_71);
  n_172 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_172);
  return(t);
}
static ATerm k_16 (ATerm h_71, ATerm i_71, ATerm t)
{
  t = SSL_hashtable_get(i_71, h_71);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_67, ATerm t)
{
  ATerm x_172 = NULL;
  t = table_hashtable_0_0(t);
  x_172 = t;
  {
    ATerm t_78 = t;
    int u_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_92 = NULL;
        t = x_172;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_92 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_16(y_67, f_92, t);
        LocalPopChoice(u_78);
      }
    else
      {
        t = t_78;
        {
          ATerm r_92 = NULL;
          t = y_67;
          t = table_create_0_0(t);
          t = x_172;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_92 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_16(y_67, r_92, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_71, ATerm n_71, ATerm t)
{
  ATerm a_173 = NULL;
  t = SSL_hashtable_create(m_71, n_71);
  a_173 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_173);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_173 = NULL,c_173 = NULL,d_173 = NULL,f_173 = NULL,g_173 = NULL;
  b_173 = t;
  t = term_v_78;
  f_173 = t;
  t = term_w_78;
  g_173 = t;
  t = b_173;
  t = new_hashtable_0_2(f_173, g_173, t);
  c_173 = t;
  t = b_173;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(b_173, c_173, d_173, t);
  t = b_173;
  return(t);
}
static ATerm e_16 (ATerm j_71, ATerm k_71, ATerm t)
{
  ATerm h_173 = NULL;
  t = SSL_hashtable_remove(k_71, j_71);
  h_173 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_173);
  return(t);
}
static ATerm f_16 (ATerm o_71, ATerm t)
{
  ATerm i_173 = NULL;
  t = SSL_hashtable_destroy(o_71);
  i_173 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_173);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_173 = NULL;
  t = SSL_table_hashtable();
  j_173 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_173);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_173 = NULL,l_173 = NULL,m_173 = NULL,n_173 = NULL;
  k_173 = t;
  t = table_hashtable_0_0(t);
  l_173 = t;
  t = lookup_table_0_1(k_173, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_16(n_173, t);
  t = l_173;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(k_173, m_173, t);
  t = k_173;
  return(t);
}
ATerm map_1_0 (ATerm l_118 (ATerm), ATerm t)
{
  static ATerm e_174 (ATerm t)
  {
    ATerm a_174 = NULL,b_174 = NULL,d_174 = NULL;
    a_174 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_174;
      }
    else
      {
        ATerm e_93 = NULL,i_93 = NULL,l_93 = NULL,t_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_174 = ATgetFirst((ATermList) t);
            d_174 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_174);
        e_93 = t;
        t = b_174;
        t = l_118(t);
        i_93 = t;
        t = d_174;
        t = e_174(t);
        l_93 = t;
        t = (ATerm) ATinsert(CheckATermList(l_93), i_93);
        t_40 = t;
        t = SSLsetAnnotations(t_40, e_93);
      }
    return(t);
  }
  t = e_174(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_174 = NULL,i_174 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_174 = ATgetFirst((ATermList) t);
      i_174 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_174 = NULL,n_174 = NULL;
        static ATerm q_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_174)), not_null(n_174));
          return(t);
        }
        t = i_174;
        t = g_0(t);
        if(((m_174 != NULL) && (m_174 != t)))
          _fail(t);
        else
          m_174 = t;
        t = h_174;
        t = d_0(t);
        if(((n_174 != NULL) && (n_174 != t)))
          _fail(t);
        else
          n_174 = t;
        t = i_174;
        t = reverse_acc_2_0(d_0, q_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_19;
      t = g_0(t);
    }
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm t_174 = NULL,u_174 = NULL,v_174 = NULL,x_40 = NULL;
  v_174 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_174);
  t_174 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_174);
  x_40 = t;
  t = SSLsetAnnotations(x_40, t_174);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm x_174 = NULL;
  x_174 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_174), term_x_78);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_174 = NULL,q_174 = NULL;
  ATerm z_78 = t;
  int a_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_174 = NULL,s_174 = NULL;
      t = term_v_33;
      r_174 = t;
      t = term_r_77;
      s_174 = t;
      t = term_s_77;
      t = g_16(r_174, s_174, t);
      LocalPopChoice(a_79);
    }
  else
    {
      t = z_78;
      t = fetch_1_0(r_17, t);
    }
  t = term_c_79;
  t = echo_0_0(t);
  t = term_h_19;
  p_174 = t;
  t = term_i_19;
  q_174 = t;
  t = term_g_79;
  t = g_16(p_174, q_174, t);
  t = reverse_acc_2_0(_id, s_17, t);
  t = map_1_0(t_17, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_174 = NULL,a_175 = NULL,b_175 = NULL;
  z_174 = t;
  {
    ATerm h_79 = t;
    int i_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_174;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_79 = ATgetFirst((ATermList) t);
                ATerm k_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_174;
          }
        LocalPopChoice(i_79);
      }
    else
      {
        t = h_79;
        t = (ATerm) ATinsert(ATempty, z_174);
      }
  }
  a_175 = t;
  t = term_u_75;
  b_175 = t;
  t = SSL_printnl(b_175, a_175);
  t = z_174;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_175 = NULL,g_175 = NULL;
  t = term_v_33;
  f_175 = t;
  t = term_r_77;
  g_175 = t;
  t = term_s_77;
  t = g_16(f_175, g_175, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm h_175 = NULL,i_175 = NULL;
  t = term_l_79;
  h_175 = t;
  t = term_c_19;
  i_175 = t;
  t = term_m_79;
  t = i_16(h_175, i_175, t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_n_79;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm j_175 = NULL,k_175 = NULL,l_175 = NULL,m_175 = NULL;
  t = term_l_79;
  l_175 = t;
  t = term_c_19;
  m_175 = t;
  t = term_m_79;
  t = i_16(l_175, m_175, t);
  t = term_s_79;
  j_175 = t;
  t = term_c_19;
  k_175 = t;
  t = term_t_79;
  t = i_16(j_175, k_175, t);
  t = term_u_79;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_w_79;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_79 = t;
  int y_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_17, w_17, x_17, t);
      LocalPopChoice(y_79);
    }
  else
    {
      t = x_79;
      t = Option_3_0(y_17, z_17, a_18, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t)
{
  ATerm n_175 = NULL,o_175 = NULL,p_175 = NULL,q_175 = NULL,r_175 = NULL,s_175 = NULL,z_40 = NULL;
  s_175 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_175 = ATgetFirst((ATermList) t);
      p_175 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_175);
  n_175 = t;
  t = o_175;
  t = h_89(t);
  q_175 = t;
  t = p_175;
  t = i_89(t);
  r_175 = t;
  t = (ATerm) ATinsert(CheckATermList(r_175), q_175);
  z_40 = t;
  t = SSLsetAnnotations(z_40, n_175);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_140 (ATerm), ATerm t)
{
  ATerm x_175 = NULL,y_175 = NULL,z_175 = NULL,a_176 = NULL,c_176 = NULL,d_176 = NULL,l_41 = NULL;
  x_175 = t;
  {
    ATerm z_79 = t;
    int b_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_80;
        t = b_140(t);
        LocalPopChoice(b_80);
      }
    else
      {
        t = z_79;
      }
  }
  t = x_175;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_175 = ATgetFirst((ATermList) t);
      a_176 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_175);
  y_175 = t;
  t = term_r_77;
  d_176 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_77, z_175);
  t = i_16(d_176, z_175, t);
  t = a_176;
  {
    static ATerm n_176 (ATerm t)
    {
      ATerm d_80 = t;
      int e_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_80 = t;
          int g_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_176 = NULL;
              g_176 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_176;
              LocalPopChoice(g_80);
            }
          else
            {
              t = f_80;
              t = b_140(t);
              t = Cons_2_0(_id, n_176, t);
            }
          LocalPopChoice(e_80);
        }
      else
        {
          t = d_80;
          {
            ATerm j_176 = NULL,k_176 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_176 = ATgetFirst((ATermList) t);
                k_176 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_176), (ATerm) ATmakeAppl(sym_Undefined_1, j_176));
          }
        }
      return(t);
    }
    t = n_176(t);
  }
  c_176 = t;
  t = (ATerm) ATinsert(CheckATermList(c_176), (ATerm) ATmakeAppl(sym_Program_1, z_175));
  l_41 = t;
  t = SSLsetAnnotations(l_41, y_175);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm a_177 = NULL;
  a_177 = t;
  if(match_string(t, "--help"))
    {
      t = a_177;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_177;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_177;
        }
    }
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm b_177 = NULL,c_177 = NULL;
  t = term_p_78;
  b_177 = t;
  t = term_c_19;
  c_177 = t;
  t = term_h_80;
  t = i_16(b_177, c_177, t);
  t = term_i_80;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_j_80;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_140 (ATerm), ATerm t)
{
  ATerm s_176 = NULL,t_176 = NULL,u_176 = NULL,v_176 = NULL,w_176 = NULL,x_176 = NULL,y_176 = NULL,z_176 = NULL;
  u_176 = t;
  t = term_h_19;
  v_176 = t;
  t = term_l_80;
  t = lookup_table_0_1(v_176, t);
  z_176 = t;
  t = term_i_19;
  w_176 = t;
  t = (ATerm) ATempty;
  x_176 = t;
  t = z_176;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(w_176, x_176, y_176, t);
  t = u_176;
  {
    static ATerm b_18 (ATerm t)
    {
      ATerm m_80 = t;
      int n_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_140(t);
          LocalPopChoice(n_80);
        }
      else
        {
          t = m_80;
          {
            ATerm o_80 = t;
            int u_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_18, d_18, e_18, t);
                LocalPopChoice(u_80);
              }
            else
              {
                t = o_80;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_18, t);
  }
  {
    ATerm v_80 = t;
    int w_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_177 = NULL;
        o_177 = t;
        {
          ATerm y_80 = t;
          int z_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_93 = NULL;
              t = o_177;
              {
                ATerm a_81 = t;
                int b_81 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_93 = NULL,x_93 = NULL;
                    t = term_v_33;
                    w_93 = t;
                    t = term_p_78;
                    x_93 = t;
                    t = term_s_78;
                    t = g_16(w_93, x_93, t);
                    LocalPopChoice(b_81);
                  }
                else
                  {
                    t = a_81;
                    t = fetch_1_0(f_18, t);
                  }
              }
              t = o_177;
              t = default_system_usage_0_0(t);
              t = term_w_76;
              v_93 = t;
              t = SSL_exit(v_93);
              LocalPopChoice(z_80);
            }
          else
            {
              t = y_80;
              {
                ATerm f_94 = NULL,h_94 = NULL,k_94 = NULL;
                t = term_v_33;
                h_94 = t;
                t = term_l_79;
                k_94 = t;
                t = term_c_81;
                t = g_16(h_94, k_94, t);
                t = o_177;
                t = default_system_about_0_0(t);
                t = term_w_76;
                f_94 = t;
                t = SSL_exit(f_94);
              }
            }
        }
        LocalPopChoice(w_80);
      }
    else
      {
        t = v_80;
        {
          ATerm d_81 = t;
          int e_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_177 = NULL,q_177 = NULL,r_177 = NULL;
              static ATerm g_18 (ATerm t)
              {
                ATerm s_177 = NULL,t_177 = NULL,u_177 = NULL,g_45 = NULL;
                u_177 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_177 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_177);
                s_177 = t;
                t = t_177;
                if(((s_176 != NULL) && (s_176 != t)))
                  _fail(t);
                else
                  s_176 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_177);
                g_45 = t;
                t = SSLsetAnnotations(g_45, s_177);
                return(t);
              }
              t = fetch_1_0(g_18, t);
              t = term_d_19;
              q_177 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_176)), term_f_81);
              r_177 = t;
              t = SSL_printnl(q_177, r_177);
              t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_176)), term_f_81));
              t = default_system_usage_0_0(t);
              t = term_g_19;
              p_177 = t;
              t = SSL_exit(p_177);
              LocalPopChoice(e_81);
            }
          else
            {
              t = d_81;
            }
        }
      }
  }
  t_176 = t;
  t = term_h_19;
  t = table_destroy_0_0(t);
  t = t_176;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm d_138 (ATerm), ATerm t)
{
  ATerm z_177 = NULL,a_178 = NULL,b_178 = NULL,c_178 = NULL,d_178 = NULL;
  t = parse_options_1_0(a_138, t);
  z_177 = t;
  t = term_z_73;
  t = table_create_0_0(t);
  t = term_z_73;
  a_178 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_73, term_a_74, z_177);
  t = lookup_table_0_1(a_178, t);
  d_178 = t;
  t = term_a_74;
  b_178 = t;
  t = d_178;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(b_178, z_177, c_178, t);
  t = z_177;
  t = c_138(t);
  {
    ATerm g_81 = t;
    int h_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_138, t);
        LocalPopChoice(h_81);
      }
    else
      {
        t = g_81;
        {
          ATerm i_81 = t;
          int j_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_138(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_81);
            }
          else
            {
              t = i_81;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_18 (ATerm t)
{
  t = if_verbose2_1_0(p_18, t);
  return(t);
}
static ATerm l_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm e_178 = NULL,f_178 = NULL;
  t = term_l_81;
  e_178 = t;
  t = term_c_19;
  f_178 = t;
  t = term_m_81;
  t = i_16(e_178, f_178, t);
  t = term_n_81;
  return(t);
}
static ATerm n_18 (ATerm t)
{
  t = term_o_81;
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm g_178 = NULL,h_178 = NULL,i_178 = NULL,j_178 = NULL,k_178 = NULL,l_178 = NULL;
  g_178 = t;
  t = term_v_33;
  k_178 = t;
  t = term_r_77;
  l_178 = t;
  t = term_s_77;
  t = g_16(k_178, l_178, t);
  h_178 = t;
  t = term_d_19;
  i_178 = t;
  t = (ATerm) ATinsert(ATempty, h_178);
  j_178 = t;
  t = SSL_printnl(i_178, j_178);
  t = g_178;
  return(t);
}
ATerm iowrap_3_0 (ATerm j_137 (ATerm), ATerm k_137 (ATerm), ATerm l_137 (ATerm), ATerm t)
{
  static ATerm i_18 (ATerm t)
  {
    ATerm p_81 = t;
    int r_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_137(t);
        LocalPopChoice(r_81);
      }
    else
      {
        t = p_81;
        {
          ATerm s_81 = t;
          int w_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(w_81);
            }
          else
            {
              t = s_81;
              {
                ATerm y_81 = t;
                int z_81 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(z_81);
                  }
                else
                  {
                    t = y_81;
                    {
                      ATerm a_82 = t;
                      int b_82 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_18, m_18, n_18, t);
                          LocalPopChoice(b_82);
                        }
                      else
                        {
                          t = a_82;
                          {
                            ATerm d_82 = t;
                            int e_82 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(e_82);
                              }
                            else
                              {
                                t = d_82;
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
  static ATerm k_18 (ATerm t)
  {
    ATerm m_178 = NULL,n_178 = NULL,o_178 = NULL;
    n_178 = t;
    {
      ATerm f_82 = t;
      int h_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_18 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_178 != NULL) && (m_178 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_178 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_18, t);
          LocalPopChoice(h_82);
        }
      else
        {
          t = f_82;
          t = term_d_35;
          m_178 = t;
        }
    }
    t = not_null(m_178);
    t = ReadFromFile_0_0(t);
    o_178 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_178, o_178);
    t = apply_strategy_1_0(j_137, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(i_18, l_137, j_18, k_18, t);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm p_178 = NULL,q_178 = NULL;
  if(match_cons(t, sym__2))
    {
      p_178 = ATgetArgument(t, 0);
      q_178 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15(p_178, q_178, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm j_82 = t;
  int k_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_18, u_18, v_18, t);
      LocalPopChoice(k_82);
    }
  else
    {
      t = j_82;
      {
        ATerm l_82 = t;
        int m_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_18, x_18, y_18, t);
            LocalPopChoice(m_82);
          }
        else
          {
            t = l_82;
            t = ArgOption_3_0(z_18, a_19, b_19, t);
          }
      }
    }
  return(t);
}
static ATerm t_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  t = term_n_82;
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_o_82;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = term_p_82;
  return(t);
}
static ATerm z_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm s_178 = NULL;
  s_178 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, s_178);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  t = term_q_82;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(r_18, s_18, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}
